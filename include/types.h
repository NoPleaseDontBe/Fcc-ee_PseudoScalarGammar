#pragma once

#include <limits>
#include <vector>

class Delphes; // forward declaration

namespace hlfv {

struct Parameters {
    // Selection variable that can be tuned in the config file.
    
    // ----------------------Isolation parameters----------------------
    // Photon
    double PhotonIsolation_dR = 0.5; // radians
    double PhotonIsolation_PT = 0.5;
    double PhotonIsolation_Ratio = 0.12;
    // Electron
    double ElectronIsolation_dR = 0.4; // radians
    double ElectronIsolation_PT = 0.5;
    double ElectronIsolation_Ratio = 0.12;
    // Muon
    double MuonIsolation_dR = 0.4; // radians
    double MuonIsolation_PT = 0.5;
    double MuonIsolation_Ratio = 0.12;

    // ----------------------Selection parameters----------------------
    double hemisphere_dphi = 1.57; // radians

};

struct Event {
    Delphes* d = nullptr; // bound Delphes tree object
};

struct Meta {
    // Per event metadata, derived from the Delphes tree and selections.
    // Examples:
    // =============================================================
    // int h_e = -1;
    // double h_mu_pt = std::numeric_limits<double>::quiet_NaN();
    // =============================================================

    // Reconstructed electrons + muons.
    int reco_size = -1;
    std::vector<int> reco_idx; // indices in Delphes tree
    std::vector<int> reco_flavour; // PHOTON, ELECTRON, MUON
    std::vector<int> IsoPass; // 1 if passes isolation, 0 otherwise
    int hemisphere_lepton_idx = -1;
    int hemisphere_lepton_flavor = -1;
    double hemisphere_phi = 10; // radians
    double Lever_MET_dphi = std::numeric_limits<double>::quiet_NaN();
    int SM_lsize    = 0;
    int LFV_lsize   = 0;
    int gen_lsize   = 0; // number of gen leptons (e, mu) with status=1
};

} // namespace hlfv
