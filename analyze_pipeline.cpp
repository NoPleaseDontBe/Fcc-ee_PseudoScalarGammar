#include <stdio.h>
#include <stdlib.h>
#include <memory>
#include <string>
#include <vector>
#include <functional>
#include <map>
#include <limits>
#include <cmath>

#include "TRef.h"
#include "TRefArray.h"
#include "TLorentzVector.h"
#include "Delphes.C"
#include <TChain.h>
#include <TFile.h>
#include <TH1F.h>
#include <TString.h>
#include <TSystem.h>
#include <fstream>


using namespace std;

#include "include/types.h"
#include "include/utils.h"
#include "include/histman.h"
#include "include/selections.h"
#include "include/pipeline_config.h"

using namespace hlfv;

// Implementation units (to make ROOT macro self-contained without a separate build)
#include "src/utils.cpp"
#include "src/histman.cpp"
#include "src/selections.cpp"
#include "src/pipeline_config.cpp"
#include "src/helper.cpp" 

// ------------------------------------------------------------
// Main analysis entry point (ROOT-callable)
// ------------------------------------------------------------
void analyze_pipeline(const char* inputPath = "samples/HMuTauE_LFV_125.root",
                      const char* outputPath = "out_hist_demo.root",
                      const char* configPath = "pipeline.json")
{
    gErrorIgnoreLevel = kFatal;
    // Build input chain
    TChain* chain = new TChain("Delphes");
    vector<TString> files = getFileList(inputPath);
    if (files.empty()) {
        printf("No input files found matching pattern: %s\n", inputPath);
        return;
    }
    for (auto& f : files) chain->Add(f);

    // print list of files
    printf("Input files:\n");
    for (auto& f : files) {
        printf("  %s\n", f.Data());
    }
    printf("Total files: %zu\n", files.size());

    // Bind Delphes class and enable only needed branches
    Delphes* delphes = new Delphes(chain);
    chain->SetBranchStatus("*", 0);
    // Previous reconstructed-particle and debug branches (unused for this histogram).
//     chain->SetBranchStatus("Muon*", 1);
//     chain->SetBranchStatus("Electron*", 1);
//     chain->SetBranchStatus("MissingET*", 1);
//     chain->SetBranchStatus("Photon*", 1);
//     // Enable Event Number for debugging
//     chain->SetBranchStatus("Event", 1);
//
    // chain->SetBranchStatus("Particle", 1);
    for (const char* branch : {"Particle.PID", "Particle.Status", "Particle.M1", "Particle.Phi",
                               "Particle.D1", "Particle.D2", "Particle_size", "Particle.Eta",
                               "Particle.Px", "Particle.Py", "Particle.Pz", "Particle.E"}) {
        chain->SetBranchStatus(branch, 1);
    }

    // Reconstructed multiplicities and azimuths for hemisphere definition.
    for (const char* branch : {"Electron", "Electron_size", "Electron.Phi", "Electron.PT", "Electron.Eta", "Electron.Charge",
                               "Muon", "Muon_size", "Muon.Phi", "Muon.PT", "Muon.Eta", "Muon.Charge",
                               "Photon", "Photon_size", "Photon.Phi", "Photon.PT", "Photon.Eta", "Photon.E",
                               "MissingET", "MissingET_size", "MissingET.Phi"}) {
        chain->SetBranchStatus(branch, 1);
    }
    // EFlow branches for isolation.
    for (const char* branch : { "ParticleFlowCandidate_size", "ParticleFlowCandidate.PT", "ParticleFlowCandidate.Eta", "ParticleFlowCandidate.Phi"
                                }) {
        chain->SetBranchStatus(branch, 1);
    }

    // Load pipeline config (JSON). Fallback to defaults if missing.
    PipelineConfig cfg;
    bool haveCfg = loadPipelineConfig(configPath, cfg);
    
    // Build active selections from config
    std::vector<std::pair<std::string, std::unique_ptr<ISelection>>> selections;
    selections.reserve(cfg.selections.size());
    for (const auto& s : cfg.selections) {
        if (!s.enabled) continue; // skip disabled
        auto ptr = makeSelectionByName(s.name);
        if (ptr) selections.emplace_back(s.name, std::move(ptr));
        else fprintf(stderr, "Unknown selection name in config: %s\n", s.name.c_str());
    }
    if (selections.empty()) {
        fprintf(stderr, "No enabled selections. Nothing to do.\n");
        return;
    }

    // Steps naming: include initial (preselection) as step 0
    std::vector<std::string> stepNames;
    stepNames.push_back("00_Initial");
    for (size_t i = 0; i < selections.size(); ++i) {
        char buf[64];
        snprintf(buf, sizeof(buf), "%02zu_%s", i+1, selections[i].first.c_str());
        stepNames.emplace_back(buf);
    }

    // Variables registry (1D & 2D)
    std::vector<HistogramManager::VarSpec> variables = Variables::getDefault();
    std::vector<HistogramManager::Var2DSpec> variables2D = Variables::getDefault2D();

    HistogramManager hman(stepNames, variables, variables2D);
    Parameters params = cfg.params; // from config or defaults

    // Print all Parameters used (in loop)
    printf("==== Analysis Parameters ====\n");
    for (const auto& p : {
        std::make_pair("hemisphere_dphi", params.hemisphere_dphi),

    }) {
        printf("%-20s : %g\n", p.first, p.second);
    }
    printf("=============================\n");


    // Event loop
    const Long64_t totalEntries = chain->GetEntries();
    Long64_t nEntries = totalEntries;

    // Check for MAX_EVENTS environment variable
    const char* envMaxEvt = std::getenv("MAX_EVENTS");
    if (envMaxEvt && std::strlen(envMaxEvt) > 0) {
        Long64_t maxEvt = std::stoll(envMaxEvt);
        if (maxEvt > 0 && maxEvt < totalEntries) {
            nEntries = maxEvt;
            printf("==> Limiting analysis to %lld / %lld events (from MAX_EVENTS)\n", nEntries, totalEntries);
        }
    }

    std::vector<Long64_t> cutflow(stepNames.size(), 0);
    Event evt{delphes};
    Meta meta;

    for (Long64_t i = 0; i < nEntries; ++i) {
        delphes->GetEntry(i);

        Meta mcur = meta;
        FillMeta(evt, mcur, params); // compute derived quantities
        // Step 0: initial
        hman.fill(0, evt, mcur, 1.0);
        cutflow[0]++;

        bool passAll = true;
        for (size_t si = 0; si < selections.size(); ++si) {
            Meta next = mcur;
            if (!selections[si].second->apply(evt, next, params)) { passAll = false; break; }
            hman.fill(si+1, evt, next, 1.0);
            cutflow[si+1]++;
            mcur = std::move(next);
        }
    }

    // Write outputs
    TFile* fout = TFile::Open(outputPath, "RECREATE");
    if (!fout || fout->IsZombie()) {
        printf("Failed to create output file: %s\n", outputPath);
        return;
    }
    hman.writeAll(fout);

    // Cutflow histogram disabled; counts are printed below.
//     // Small cutflow summary as a TNamed or histogram
//     TH1F cutflowH("cutflow", "Cutflow;Step;Events", (int)cutflow.size(), 0.5, (double)cutflow.size()+0.5);
//     for (size_t i = 0; i < cutflow.size(); ++i) {
//         cutflowH.GetXaxis()->SetBinLabel((int)i+1, stepNames[i].c_str());
//         cutflowH.SetBinContent((int)i+1, cutflow[i]);
//     }
//     cutflowH.Write();
//
    fout->Close();
    // for efficiency calculation
    int initial = cutflow[0];
    printf("\n==== Pipeline summary ====\n");
    printf("Total events:          %lld\n", nEntries);
    int previousCount = initial;
    int thisCount = initial;
    for (size_t i = 0; i < cutflow.size(); ++i) {
        // calculate efficiency
        thisCount = cutflow[i];
        double efficiency = static_cast<double>(thisCount) / initial;
        double localEfficiency = static_cast<double>(thisCount) / previousCount;
        previousCount = thisCount;
        printf("After %-30s %-10lld Global Efficiency: %10.6f%%   Local Efficiency: %10.6f%%\n", stepNames[i].c_str(), cutflow[i], efficiency * 100, localEfficiency * 100);
    }
    printf("Output written to: %s\n", outputPath);
    printf("===============================\n");
    gSystem->Exit(0); // ensure ROOT macro exits cleanly
}
