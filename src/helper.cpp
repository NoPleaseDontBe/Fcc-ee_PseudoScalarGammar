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
    int idx_offset = (flavor == MUON) ? idx - evt.d->Electron_size : idx;
    if (flavor == ELECTRON) {
        v.SetPtEtaPhiM(evt.d->Electron_PT[idx_offset], evt.d->Electron_Eta[idx_offset], 
                        evt.d->Electron_Phi[idx_offset], MASS_E);
    } else {
        v.SetPtEtaPhiM(evt.d->Muon_PT[idx_offset], evt.d->Muon_Eta[idx_offset], 
                        evt.d->Muon_Phi[idx_offset], MASS_MU);
    }
    return v;
}

void FillMeta(const Event& evt, Meta& meta, const Parameters&) {
    if (!evt.d) return;
    const auto& d = *evt.d;
    // Reco Lpton
    meta.lepton_size = d.Electron_size + d.Muon_size;
    for (int i = 0; i < d.Electron_size; ++i) {
        meta.lepton_idx.push_back(i);
        meta.lepton_flavour.push_back(ELECTRON);
    }
    for (int i = 0; i < d.Muon_size; ++i) {
        meta.lepton_idx.push_back(d.Electron_size + i);
        meta.lepton_flavour.push_back(MUON);
    }

    // Gen Lepton
    for (int i = 0; i < d.Particle_size; ++i) {
        int pid = d.Particle_PID[i];
        if ((std::abs(pid) == ELECTRON || std::abs(pid) == MUON) && d.Particle_Status[i] == 1) {
            // meta.gen_lepton_idx.push_back(i);
            // meta.gen_lepton_flavour.push_back(pid);
            meta.gen_lsize += 1;
        }
    }
    
}

} // namespace hlfv
