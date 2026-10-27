#pragma once

#include "iselection.h"

namespace hlfv {

// Helper function
double delta_phi(double phi1, double phi2);
TLorentzVector get_p4(const Event& evt, int idx, int flavor);
void FillMeta(const Event& evt, Meta& meta, const Parameters&);


// Concrete selections

struct HemisphereDefinition : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct PhotonEligibility : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct LeptonEligibility : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct Pion0Reconstruction : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct SMMass : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct EmptySelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct FinalState_NoCut : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};
struct LeptonSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct ZToLLSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct ZCandidateSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};


struct PT_ZCandidateSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct Modified_ZCandidateSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct NoPTMin_ZCandidateSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct HToMuTauESelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct HToETauMuSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct METEDphiSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct METMuDphiSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct RecoilMassSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct HCandidateSelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

struct HToMuESelection : public ISelection {
    std::string name() const override;
    bool apply(const Event& evt, Meta& meta, const Parameters& cfg) override;
};

} // namespace hlfv
