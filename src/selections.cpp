#include "../include/selections.h"

#include <cmath>
#include <vector>
#include <numeric>
#include <algorithm>
#include <TLorentzVector.h>
#include <TVector3.h>

namespace hlfv {

// --- Constants ---
constexpr double MASS_E   = 0.000511;
constexpr double MASS_MU  = 0.10565837;
constexpr double ECM      = 240.0; // Center of mass energy
constexpr double Z_MASS   = 91.1876;

enum Flavor { ELECTRON = 11, MUON = 13, PHOTON = 22 };

struct LeptonObj {
    int index;
    int flavor; 
    double pt;
    int charge;
};

// --- Helper Functions ---
namespace {} // anonymous namespace

// --- Selections ---

std::string Hemisphere_01::name() const { return "hemis_01_MET_size"; }
bool Hemisphere_01::apply(const Event& evt, Meta& meta, const Parameters& cfg) {
    // Check MET size
    if (!evt.d || evt.d->MissingET_size <= 0) return false;
    else { return true; }
}

std::string Hemisphere_02::name() const { return "hemis_02_MindPhi"; }
bool Hemisphere_02::apply(const Event& evt, Meta& meta, const Parameters& cfg) {
    double min_dphi = std::numeric_limits<double>::infinity();
    for (size_t i = 0; i < meta.reco_size; ++i) {
        if (((meta.reco_flavour[i] != ELECTRON) && (meta.reco_flavour[i] != MUON)) || (meta.IsoPass[i] != 1)) continue;
        double this_phi = get_p4(evt, meta.reco_idx[i], meta.reco_flavour[i]).Phi();
        double dphi = delta_phi(this_phi, evt.d->MissingET_Phi[0]);
        if (dphi < min_dphi) {
            min_dphi = dphi;
            meta.hemisphere_lepton_idx = meta.reco_idx[i];
            meta.hemisphere_lepton_flavor = meta.reco_flavour[i];
        }
    }
    meta.Lever_MET_dphi = min_dphi;
    if (meta.hemisphere_lepton_idx == -1) { return false; } 
    else { return true; }
}

std::string Hemisphere_03::name() const { return "hemis_03_1L_EachSide"; }
bool Hemisphere_03::apply(const Event& evt, Meta& meta, const Parameters& cfg) {
    // Check that there is exactly one lepton on each side of the hemisphere
    for (int i = 0; i < meta.reco_size; ++i) {
        if (((meta.reco_flavour[i] != ELECTRON) && (meta.reco_flavour[i] != MUON)) || (meta.IsoPass[i] != 1)) continue;
        double ThisLepton_Phi = get_p4(evt, meta.reco_idx[i], meta.reco_flavour[i]).Phi();
        double LeverLepton_Phi = get_p4(evt, meta.hemisphere_lepton_idx, meta.hemisphere_lepton_flavor).Phi();
        double ThisLepton_Lever_dphi = delta_phi(ThisLepton_Phi, LeverLepton_Phi);
        if (ThisLepton_Lever_dphi <= cfg.hemisphere_dphi) { meta.SM_lsize += 1;} 
        else {meta.LFV_lsize += 1;}
        }
    if (meta.SM_lsize != 1 || meta.LFV_lsize != 1) { return false; }
    return true;
}
} // namespace hlfv
