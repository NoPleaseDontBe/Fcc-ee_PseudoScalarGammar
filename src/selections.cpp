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

enum Flavor { ELECTRON = 0, MUON = 1 };

struct LeptonObj {
    int index;
    int flavor; 
    double pt;
    int charge;
};

// --- Helper Functions ---
namespace {

    // Generic P4 retriever
    TLorentzVector get_p4(const Event& evt, int idx, int flavor) {
        TLorentzVector v;
        if (flavor == ELECTRON) {
            v.SetPtEtaPhiM(evt.d->Electron_PT[idx], evt.d->Electron_Eta[idx], 
                           evt.d->Electron_Phi[idx], MASS_E);
        } else {
            v.SetPtEtaPhiM(evt.d->Muon_PT[idx], evt.d->Muon_Eta[idx], 
                           evt.d->Muon_Phi[idx], MASS_MU);
        }
        return v;
    }

    double delta_phi(double phi1, double phi2) {
        double dphi = std::abs(phi1 - phi2);
        if (dphi > M_PI) dphi = 2 * M_PI - dphi;
        return dphi;
    }

    // Generic Collinear Mass Calculation
    // Calculates mass of (visible_lep + invisible_tau_products)
    // Assumes neutrinos go in direction of visible tau product (approx)
    double compute_collinear_mass(const Event& evt, const TLorentzVector& v_tau_vis, const TLorentzVector& v_other) {
        if (!evt.d || evt.d->MissingET_size <= 0) return std::numeric_limits<double>::quiet_NaN();
        if (v_tau_vis.Pt() <= 0) return std::numeric_limits<double>::quiet_NaN();

        double met = evt.d->MissingET_MET[0];
        double met_phi = evt.d->MissingET_Phi[0];
        double met_px = met * std::cos(met_phi);
        double met_py = met * std::sin(met_phi);

        // Project MET onto the visible tau direction
        double dir_x = v_tau_vis.Px() / v_tau_vis.Pt();
        double dir_y = v_tau_vis.Py() / v_tau_vis.Pt();
        double proj = met_px * dir_x + met_py * dir_y;

        if (proj <= 0) return std::numeric_limits<double>::quiet_NaN();

        // Visible fraction of tau momentum
        double x_tau_vis = v_tau_vis.Pt() / (v_tau_vis.Pt() + proj);

        if (x_tau_vis <= 0 || x_tau_vis > 1) return std::numeric_limits<double>::quiet_NaN();

        double m_vis = (v_tau_vis + v_other).M();
        return m_vis / std::sqrt(x_tau_vis);
    }

    double compute_transverse_mass(double pt, double phi, double met, double met_phi) {
        double dphi = delta_phi(phi, met_phi);
        return std::sqrt(2 * pt * met * (1 - std::cos(dphi)));
    }
// Post-calculation routine to compute recoil, alternative masses, and impact parameters
    void compute_z_post_calculations(const Event& evt, Meta& meta, const Parameters& cfg) {
        
        // 1. Invariant Mass of the Selected Z (Case 1)
        // Already computed as meta.z_mass, but we assign to m_z1 for consistency
        meta.m_z1 = meta.z_mass;

        // 2. Invariant Mass of the Alternative Pair (Case 2)
        // Pair: Z_L1 (fixed L2) + The remaining OS lepton (other_idx)
        if (meta.otherZ_idx != -1) {
            TLorentzVector p4_z1 = get_p4(evt, meta.z_l1, meta.z_flavor);
            TLorentzVector p4_other = get_p4(evt, meta.otherZ_idx, meta.z_flavor);
            meta.m_z2 = (p4_z1 + p4_other).M();
        }

        // 3. Recoil Mass Calculation (against Beam)
        // Based on the SELECTED Z candidate
        TLorentzVector p4_z_selected = get_p4(evt, meta.z_l1, meta.z_flavor) + 
                                       get_p4(evt, meta.z_l2, meta.z_flavor);

        double beam_E = ECM / 2.0; 
        TLorentzVector p_beam_total(0.0, 0.0, 0.0, ECM); // px, py, pz, E (approx for 0 crossing angle)
        
        TLorentzVector p_recoil = p_beam_total - p4_z_selected;
        meta.m_recoil = p_recoil.M();

        // 4. Boost Vectors (Recoil Frame)
        TVector3 boost_vec = -p_recoil.BoostVector();
        meta.beta_x = boost_vec.X();
        meta.beta_y = boost_vec.Y();
        meta.beta_z = boost_vec.Z();

        // 5. Impact Parameters (D0/DZ) for Higgs Candidates
        // The Higgs candidates are: 
        //   A. L1 (The singleton, prompt lepton)
        //   B. The 'other' lepton (The one NOT selected for Z)
        
        // Helper to set D0/DZ safely
        auto set_d0dz = [&](int idx, int flavor) {
            double d0 = (flavor == ELECTRON) ? evt.d->Electron_D0[idx] : evt.d->Muon_D0[idx];
            double dz = (flavor == ELECTRON) ? evt.d->Electron_DZ[idx] : evt.d->Muon_DZ[idx];
            
            if (flavor == ELECTRON) {
                meta.h_e_d0 = std::abs(d0);
                meta.h_e_dz = std::abs(dz);
            } else {
                meta.h_mu_d0 = std::abs(d0);
                meta.h_mu_dz = std::abs(dz);
            }
        };

        // Set for L1 (Prompt)
        set_d0dz(meta.l1_index, meta.l1flavor);

        // Set for 'Other' (From Z triplet, but assigned to Higgs)
        // This has the same flavor as the Z pair
        if (meta.otherZ_idx != -1) {
            set_d0dz(meta.otherZ_idx, meta.z_flavor);
        }

        // Collinear mass calculation
        
        // Higgs
        if (meta.otherH_idx != -1) {
            // 1. Calculate Correct Pair (h_e, h_mu)
            TLorentzVector p4_e  = get_p4(evt, meta.h_e, ELECTRON);
            TLorentzVector p4_mu = get_p4(evt, meta.h_mu, MUON);

            // Lambda or simple ternary macro prevents repeating the mode logic twice
            auto get_mass = [&](TLorentzVector& e, TLorentzVector& mu) {
                return compute_collinear_mass(evt, 
                    (cfg.mode == 0) ? mu : e,  // v_tau (mode 0: mu is tau)
                    (cfg.mode == 0) ? e  : mu  // v_other
                );
            };

            meta.m_h1 = get_mass(p4_e, p4_mu);

            // 2. Calculate Incorrect Pair (Swap one index)
            // Update the specific vector that corresponds to the "other" flavor
            if (meta.l1flavor == MUON) p4_e  = get_p4(evt, meta.otherH_idx, ELECTRON);
            else                       p4_mu = get_p4(evt, meta.otherH_idx, MUON);

            meta.m_h2 = get_mass(p4_e, p4_mu);
        }

        // Z boson
        if (meta.otherZ_idx != -1) {
            TLorentzVector p4_z1 = get_p4(evt, meta.z_l1, meta.z_flavor);

            // 1. Correct Pair
            TLorentzVector p4_z2 = get_p4(evt, meta.z_l2, meta.z_flavor);
            meta.m_z1 = (p4_z1 + p4_z2).M();

            // 2. Incorrect Pair
            TLorentzVector p4_other = get_p4(evt, meta.otherZ_idx, meta.z_flavor);
            meta.m_z2 = (p4_z1 + p4_other).M();
        }

    }

} // anonymous namespace

// --- Selections ---

std::string EmptySelection::name() const { return "EmptySelection"; }
bool EmptySelection::apply(const Event& evt, Meta& meta, const Parameters& cfg) {
    // Example test
    if (meta.m_transverse_e >= 2.0) return false;
    return true;
}

std::string HemisphereDefinition::name() const { return "HemisphereDefinition"; }
bool HemisphereDefinition::apply(const Event& evt, Meta& meta, const Parameters& cfg){
    // Placeholder
    
    return true;
    }
} // namespace hlfv
