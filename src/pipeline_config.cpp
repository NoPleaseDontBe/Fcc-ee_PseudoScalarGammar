#include "../include/pipeline_config.h"
#include "../include/selections.h"
#include "../include/histman.h"

#include <fstream>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <stdexcept>

namespace hlfv {

// ---- selection factory ---- 
std::unique_ptr<ISelection> makeSelectionByName(const std::string& name) {
    std::string key = name;
    std::transform(key.begin(), key.end(), key.begin(), [](unsigned char c){ return std::tolower(c); });

    // Keep only 1st name
    // if (key == "empty_selection") return std::make_unique<EmptySelection>();
    if (key == "hemisphere_definition") return std::make_unique<HemisphereDefinition>();
    // if (key == "photon_eligibility") return std::make_unique<PhotonEligibility>();
    // if (key == "lepton_eligibility") return std::make_unique<LeptonEligibility>();
    // if (key == "pion0_reconstruction") return std::make_unique<Pion0Reconstruction>();
    // if (key == "sm_mass") return std::make_unique<SMMass>();
    // if (key == "finalstate_nocut") return std::make_unique<FinalState_NoCut>();
    // if (key == "lepton_selection") return std::make_unique<LeptonSelection>();
    // if (key == "z_candidate_selection") return std::make_unique<ZCandidateSelection>();
    // if (key == "z_to_ll") return std::make_unique<ZToLLSelection>();
    // if (key == "h_to_mutau_e") return std::make_unique<HToMuTauESelection>();
    // if (key == "h_to_etau_mu") return std::make_unique<HToETauMuSelection>();
    // if (key == "met_e_dphi") return std::make_unique<METEDphiSelection>();
    // if (key == "met_mu_dphi") return std::make_unique<METMuDphiSelection>();
    // if (key == "recoil_mass_selection") return std::make_unique<RecoilMassSelection>();
    // if (key == "h_candidate_selection") return std::make_unique<HCandidateSelection>();
    // if (key == "h_to_mu_e") return std::make_unique<HToMuESelection>();
    // if (key == "pt_z_candidate_selection") return std::make_unique<PT_ZCandidateSelection>();
    // if (key == "modified_z_candidate_selection") return std::make_unique<Modified_ZCandidateSelection>();
    // if (key == "no_ptmin_z_candidate_selection") return std::make_unique<NoPTMin_ZCandidateSelection>();
    

    return nullptr;
}

// ---- minimal config parser (schema-specific) ----
namespace {
static inline void ltrim(std::string &s) { s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch){return !std::isspace(ch);})); }
static inline void rtrim(std::string &s) { s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch){return !std::isspace(ch);}).base(), s.end()); }
static inline void trim(std::string &s) { ltrim(s); rtrim(s); }

static bool parseNumber(const std::string& v, double& out) {
    try { size_t idx=0; out = std::stod(v, &idx); return idx==v.size(); } catch(...) { return false; }
}

static std::string extractBlock(const std::string& text, const std::string& key, char open, char close) {
    size_t k = text.find(key);
    if (k == std::string::npos) return {};
    size_t lb = text.find(open, k);
    if (lb == std::string::npos) return {};
    int depth = 0; for (size_t i = lb; i < text.size(); ++i) {
        if (text[i]==open) depth++;
        else if (text[i]==close) depth--;
        if (depth==0) { return text.substr(lb+1, i - lb - 1); }
    }
    return {};
}
}

bool loadPipelineConfig(const std::string& filepath, PipelineConfig& out) {
    std::ifstream in(filepath);
    if (!in.is_open()) return false;
    std::stringstream buf; buf << in.rdbuf();
    std::string text = buf.str();

    PipelineConfig cfg; // defaults

    // parameters
    std::string p = extractBlock(text, "\"parameters\"", '{', '}');
    if (!p.empty()) {
        auto parseParam = [&](const char* key, double& dst){
            std::string k = std::string("\"") + key + "\"";
            size_t pos = p.find(k);
            if (pos != std::string::npos) {
                size_t colon = p.find(':', pos);
                if (colon != std::string::npos) {
                    size_t end = p.find_first_of(",}\n\r", colon+1);
                    std::string val = p.substr(colon+1, end - (colon+1));
                    trim(val);
                    parseNumber(val, dst);
                }
            }
        };
        parseParam("hemisphere_dphi", cfg.params.hemisphere_dphi);

    }

    // selections array
    std::string arr = extractBlock(text, "\"selections\"", '[', ']');
    if (!arr.empty()) {
        size_t i = 0; while (i < arr.size()) {
            if (arr[i] == '{') {
                int depth = 0; size_t start = i;
                while (i < arr.size()) { if (arr[i]=='{') depth++; else if (arr[i]=='}') depth--; i++; if (depth==0) break; }
                std::string obj = arr.substr(start, i - start);
                SelectionSpec spec; spec.enabled = true;
                // name
                size_t nk = obj.find("\"name\"");
                if (nk != std::string::npos) {
                    size_t colon = obj.find(':', nk);
                    size_t q1 = obj.find('"', colon+1);
                    size_t q2 = obj.find('"', q1+1);
                    if (colon!=std::string::npos && q1!=std::string::npos && q2!=std::string::npos) {
                        spec.name = obj.substr(q1+1, q2 - q1 - 1);
                    }
                }
                // enabled
                size_t ek = obj.find("\"enabled\"");
                if (ek != std::string::npos) {
                    size_t colon = obj.find(':', ek);
                    if (colon != std::string::npos) {
                        size_t end = obj.find_first_of(",}\n\r", colon+1);
                        std::string val = obj.substr(colon+1, end - (colon+1));
                        trim(val);
                        if (val.find("true") != std::string::npos) spec.enabled = true;
                        else if (val.find("false") != std::string::npos) spec.enabled = false;
                    }
                }
                if (!spec.name.empty()) cfg.selections.push_back(spec);
            } else { i++; }
        }
    }

    if (cfg.selections.empty()) {
        // error: at least one selection
        return false;
    }

    out = cfg;
    return true;
}

// ---- variables registry ----
std::vector<HistogramManager::VarSpec> Variables::getDefault() {
    std::vector<HistogramManager::VarSpec> vars;
    // Example 1D histograms.
    // ============================================
//     vars.push_back({
//         "n_muons", "Number of muons;N_{#mu};Events", 6, -0.5, 5.5,
//         [](const Event& evt, const Meta&) -> double { return evt.d ? (double)evt.d->Muon_size : std::numeric_limits<double>::quiet_NaN(); }
//     });
    // ============================================
    
    // ----------------------Gen Section----------------------
    vars.push_back({
        "gen_lsize", "Gen lepton size;# of gen leptons;Events", 10, -0.5, 9.5,
        [](const Event& evt, const Meta& meta) -> double { return meta.gen_lsize; }
    });

    // ----------------------Reco Section----------------------
    vars.push_back({
        "MET_size", "Missing ET size;MET size;Events", 10, -0.5, 9.5,
        [](const Event& evt, const Meta&) -> double { return evt.d ? (double)evt.d->MissingET_size : std::numeric_limits<double>::quiet_NaN(); }
    });

    vars.push_back({
        "Lepton_size", "Lepton size;# of leptons;Events", 10, -0.5, 9.5,
        [](const Event& evt, const Meta& meta) -> double { return meta.lepton_size; }
    });

    vars.push_back({
        "Lever_MET_dphi", "Lever Vs MET dphi;Lever of MET dphi;Events", 100, 0.0, 3.14159,
        [](const Event& evt, const Meta& meta) -> double { return meta.Lever_MET_dphi; }
    });

    vars.push_back({
        "SM_lsize", "SM side lepton size;SM lepton size;Events", 10, -0.5, 9.5,
        [](const Event& evt, const Meta& meta) -> double { return meta.SM_lsize; }
    });

    vars.push_back({
        "LFV_lsize", "LFV side lepton size;LFV lepton size;Events", 10, -0.5, 9.5,
        [](const Event& evt, const Meta& meta) -> double { return meta.LFV_lsize; }
    });
    return vars;
}

// ---- 2D variables registry ----
std::vector<HistogramManager::Var2DSpec> Variables::getDefault2D() {
    std::vector<HistogramManager::Var2DSpec> vars2d;
    // Example 2D histograms (disabled).
    // ============================================
//     vars2d.push_back({
//         "mZ_vs_mH1", "M_{Z1} vs M_{H1};M_{Z1} [GeV];M_{H1} [GeV]",
//         100, 0.5, 250.5,
//         100, 0.5, 250.5,
//         [](const Event&, const Meta& m) -> double { return m.m_z1; },
//         [](const Event&, const Meta& m) -> double { return m.m_h1; }
//     });
    // ============================================



    return vars2d;
}

} // namespace hlfv
