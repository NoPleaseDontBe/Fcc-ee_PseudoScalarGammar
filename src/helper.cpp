#pragma once

#include "../include/types.h"
#include <TLorentzVector.h>
#include <cmath>

namespace hlfv {

double delta_phi(double phi1, double phi2) {
    return std::abs(std::remainder(phi1 - phi2, 2 * M_PI));
}

// Generic P4 retriever
TLorentzVector get_p4(const Event& evt, int idx, int flavor) {
    TLorentzVector v;
    if (flavor == PHOTON) {
        v.SetPtEtaPhiM(evt.d->Photon_PT[idx], evt.d->Photon_Eta[idx], 
                        evt.d->Photon_Phi[idx], 0.0);
        return v;
    }
    else if (flavor == ELECTRON) {
        idx = idx - evt.d->Photon_size; // offset for electrons
        v.SetPtEtaPhiM(evt.d->Electron_PT[idx], evt.d->Electron_Eta[idx], 
                        evt.d->Electron_Phi[idx], MASS_E);
    } else if (flavor == MUON) {
        idx = idx - evt.d->Photon_size - evt.d->Electron_size; // offset for muons
        v.SetPtEtaPhiM(evt.d->Muon_PT[idx], evt.d->Muon_Eta[idx], 
                        evt.d->Muon_Phi[idx], MASS_MU);
    }
    else {
        fprintf(stderr, "Unknown flavor in get_p4: %d\n", flavor);
    }
    return v;
}

class IsoParameters {
public:
    double dr, pt, ratio;
    explicit IsoParameters(const Parameters& cfg, int flavour) {
        switch (flavour) {
            case PHOTON:
                dr = cfg.PhotonIsolation_dR; pt = cfg.PhotonIsolation_PT; ratio = cfg.PhotonIsolation_Ratio;
                break;
            case ELECTRON:
                dr = cfg.ElectronIsolation_dR; pt = cfg.ElectronIsolation_PT; ratio = cfg.ElectronIsolation_Ratio;
                break;
            case MUON:
                dr = cfg.MuonIsolation_dR; pt = cfg.MuonIsolation_PT; ratio = cfg.MuonIsolation_Ratio;
                break;
            default:
                fprintf(stderr, "Unknown flavour in IsoParameters: %d\n", flavour);
        }
    }
};

void FillMeta(const Event& evt, Meta& meta, const Parameters& cfg) {
    if (!evt.d) return;
    const auto& d = *evt.d;
    // ----------------------------Gen Section----------------------
    for (int i = 0; i < d.Particle_size; ++i) {
        int pid = d.Particle_PID[i];
        if ((std::abs(pid) == ELECTRON || std::abs(pid) == MUON) && d.Particle_Status[i] == 1) {
            // meta.gen_lepton_idx.push_back(i);
            // meta.gen_lepton_flavour.push_back(pid);
            meta.gen_lsize += 1;
        }
    }
    // ----------------------------Reco Objects----------------------
    meta.reco_size = d.Photon_size + d.Electron_size + d.Muon_size;
    for (int i = 0; i < d.Photon_size; ++i) {
        meta.reco_idx.push_back(i);
        meta.reco_flavour.push_back(PHOTON);
    }
    for (int i = 0; i < d.Electron_size; ++i) {
        meta.reco_idx.push_back(d.Photon_size + i);
        meta.reco_flavour.push_back(ELECTRON);
    }
    for (int i = 0; i < d.Muon_size; ++i) {
        meta.reco_idx.push_back(d.Photon_size + d.Electron_size + i);
        meta.reco_flavour.push_back(MUON);
    }
    // ----------------------------Isolation--------------------------
    for (size_t i = 0; i < meta.reco_size; ++i) {
        TLorentzVector reco_p4 = get_p4(evt, meta.reco_idx[i], meta.reco_flavour[i]);
        IsoParameters isolation(cfg, meta.reco_flavour[i]);
        double sum_pt = 0.0;
        
        for (int j = 0; j < evt.d->ParticleFlowCandidate_size; ++j) {
            TLorentzVector pflow_p4;
            pflow_p4.SetPtEtaPhiM(  evt.d->ParticleFlowCandidate_PT[j], 
                                    evt.d->ParticleFlowCandidate_Eta[j], 
                                    evt.d->ParticleFlowCandidate_Phi[j], 
                                    0.0);
            double dR = reco_p4.DeltaR(pflow_p4);
            if ((dR < isolation.dr) && (pflow_p4.Pt() > isolation.pt)) {
                sum_pt += pflow_p4.Pt();
            }
        }
        double ratio = (sum_pt - reco_p4.Pt()) / reco_p4.Pt();
        if (ratio < isolation.ratio) {
            meta.IsoPass.push_back(1);
        }
        else {
            meta.IsoPass.push_back(0);
        }
    }
    
}

} // namespace hlfv
