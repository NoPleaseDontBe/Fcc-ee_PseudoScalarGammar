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

std::string HemisphereDefinition::name() const { return "HemisphereDefinition";}
bool HemisphereDefinition::apply(const Event& evt, Meta& meta, const Parameters& cfg) {
    // Select lepton that nearest to MET
    // MET guard
    if (!evt.d || evt.d->MissingET_size <= 0) return false;
    double min_dphi = std::numeric_limits<double>::infinity();
    for (size_t i = 0; i < meta.lepton_size; ++i) {
        double this_phi = (
                            abs(meta.lepton_flavour[i]) == 11) ? 
                            evt.d->Electron_Phi[meta.lepton_idx[i]] : 
                            evt.d->Muon_Phi[meta.lepton_idx[i-evt.d->Electron_size]];

        double dphi = delta_phi(this_phi, evt.d->MissingET_Phi[0]);
        if (dphi < min_dphi) {
            min_dphi = dphi;
            meta.hemisphere_lepton_flavor = meta.lepton_flavour[i];
            meta.hemisphere_lepton_idx = meta.lepton_idx[i];
            meta.hemisphere_phi = this_phi;
        }
    }
    meta.Lever_MET_dphi = min_dphi;
    if (!std::isfinite(min_dphi)) { return false; } 
    // Check hemisphere lepton size
    for (int i = 0; i < meta.lepton_size; ++i) {
        double ThisLepton_Phi = get_p4(evt, meta.lepton_idx[i], meta.lepton_flavour[i]).Phi();
        double ThisLepton_Lever_dphi = delta_phi(ThisLepton_Phi, meta.hemisphere_phi);
        if (ThisLepton_Lever_dphi <= cfg.hemisphere_dphi) { meta.SM_lsize += 1;} 
        else {meta.LFV_lsize += 1;}
        }
    if (meta.SM_lsize != 1 || meta.LFV_lsize != 1) { return false; }
    return true;
}





// std::string PhotonEligibility::name() const { return "photon_eligibility"; }
// bool PhotonEligibility::apply(const Event&, Meta& meta, const Parameters& cfg) {
//     return meta.photon_size_A >= 0 && meta.photon_size_A <= cfg.photon_count_A_max &&
//            meta.photon_size_B >= 2 && meta.photon_size_B <= cfg.photon_count_B_max &&
//            meta.photon_B_leading_energy > cfg.photon_B_leading_energy_min &&
//            meta.photon_B_subleading_energy > cfg.photon_B_subleading_energy_min;
// }

// std::string LeptonEligibility::name() const { return "lepton_eligibility"; }
// bool LeptonEligibility::apply(const Event&, Meta& meta, const Parameters& cfg) {
//     int lepton_A = 0, lepton_B = 0;
//     for (double pt : meta.lepton_pt_A) if (pt > cfg.reco_lepton_pt_min) ++lepton_A;
//     for (double pt : meta.lepton_pt_B) if (pt > cfg.reco_lepton_pt_min) ++lepton_B;
//     return lepton_A == 1 && lepton_B == 1 && meta.lepton_B_pt >= cfg.lepton_B_pt_min &&
//            meta.lepton_B_pt <= cfg.lepton_B_pt_max;
// }

// std::string Pion0Reconstruction::name() const { return "pion0_reconstruction"; }
// bool Pion0Reconstruction::apply(const Event&, Meta& meta, const Parameters& cfg) {
//     return meta.reco_m_pion0 > cfg.pion0_mass_min && meta.reco_m_pion0 < cfg.pion0_mass_max &&
//            meta.reco_pt_pion0 > cfg.pion0_pt_min;
// }

// std::string SMMass::name() const { return "SM_mass"; }
// bool SMMass::apply(const Event&, Meta& meta, const Parameters& cfg) {
//     return std::isfinite(meta.sm_mass_A) && meta.sm_mass_A <= cfg.sm_mass_max;
// }

} // namespace hlfv
