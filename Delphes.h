//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 28 20:58:46 2026 by ROOT version 6.30/07
// from TTree Delphes/Analysis tree
// found on file: GEN/SAMPLES/signal_n100k/z_tata_taPe_tae_taSM/z_tata_taPe_tae_taSM.root
//////////////////////////////////////////////////////////

#ifndef Delphes_h
#define Delphes_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "TClonesArray.h"
#include "TObject.h"

class Delphes {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEvent = 1;
   static constexpr Int_t kMaxWeight = 2;
   static constexpr Int_t kMaxParticle = 63;
   static constexpr Int_t kMaxGenVertex = 8;
   static constexpr Int_t kMaxEFlowTrack = 12;
   static constexpr Int_t kMaxTrack = 12;
   static constexpr Int_t kMaxEFlowPhoton = 16;
   static constexpr Int_t kMaxEFlowNeutralHadron = 2;
   static constexpr Int_t kMaxParticleFlowCandidate = 28;
   static constexpr Int_t kMaxTower = 23;
   static constexpr Int_t kMaxElectron = 4;
   static constexpr Int_t kMaxMuon = 2;
   static constexpr Int_t kMaxPhoton = 6;
   static constexpr Int_t kMaxJet = 3;
   static constexpr Int_t kMaxMissingET = 1;
   static constexpr Int_t kMaxGenJet = 3;
   static constexpr Int_t kMaxGenMissingET = 1;
   static constexpr Int_t kMaxGenJetDurhamN2 = 2;
   static constexpr Int_t kMaxJetDurhamN2 = 2;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Float_t         Event_ReadTime[kMaxEvent];   //[Event_]
   Float_t         Event_ProcTime[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Int_t           Event_MPI[kMaxEvent];   //[Event_]
   Float_t         Event_Weight[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSection[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSectionError[kMaxEvent];   //[Event_]
   Float_t         Event_Scale[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQED[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQCD[kMaxEvent];   //[Event_]
   Int_t           Event_ID1[kMaxEvent];   //[Event_]
   Int_t           Event_ID2[kMaxEvent];   //[Event_]
   Float_t         Event_X1[kMaxEvent];   //[Event_]
   Float_t         Event_X2[kMaxEvent];   //[Event_]
   Float_t         Event_ScalePDF[kMaxEvent];   //[Event_]
   Float_t         Event_PDF1[kMaxEvent];   //[Event_]
   Float_t         Event_PDF2[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           Weight_;
   UInt_t          Weight_fUniqueID[kMaxWeight];   //[Weight_]
   UInt_t          Weight_fBits[kMaxWeight];   //[Weight_]
   Float_t         Weight_Weight[kMaxWeight];   //[Weight_]
   Int_t           Weight_size;
   Int_t           Particle_;
   UInt_t          Particle_fUniqueID[kMaxParticle];   //[Particle_]
   UInt_t          Particle_fBits[kMaxParticle];   //[Particle_]
   Int_t           Particle_PID[kMaxParticle];   //[Particle_]
   Int_t           Particle_Status[kMaxParticle];   //[Particle_]
   Int_t           Particle_IsPU[kMaxParticle];   //[Particle_]
   Int_t           Particle_M1[kMaxParticle];   //[Particle_]
   Int_t           Particle_M2[kMaxParticle];   //[Particle_]
   Int_t           Particle_D1[kMaxParticle];   //[Particle_]
   Int_t           Particle_D2[kMaxParticle];   //[Particle_]
   Int_t           Particle_Charge[kMaxParticle];   //[Particle_]
   Float_t         Particle_Mass[kMaxParticle];   //[Particle_]
   Float_t         Particle_E[kMaxParticle];   //[Particle_]
   Float_t         Particle_Px[kMaxParticle];   //[Particle_]
   Float_t         Particle_Py[kMaxParticle];   //[Particle_]
   Float_t         Particle_Pz[kMaxParticle];   //[Particle_]
   Float_t         Particle_P[kMaxParticle];   //[Particle_]
   Float_t         Particle_PT[kMaxParticle];   //[Particle_]
   Float_t         Particle_Eta[kMaxParticle];   //[Particle_]
   Float_t         Particle_Phi[kMaxParticle];   //[Particle_]
   Float_t         Particle_Rapidity[kMaxParticle];   //[Particle_]
   Float_t         Particle_T[kMaxParticle];   //[Particle_]
   Float_t         Particle_X[kMaxParticle];   //[Particle_]
   Float_t         Particle_Y[kMaxParticle];   //[Particle_]
   Float_t         Particle_Z[kMaxParticle];   //[Particle_]
   Int_t           Particle_size;
   Int_t           GenVertex_;
   UInt_t          GenVertex_fUniqueID[kMaxGenVertex];   //[GenVertex_]
   UInt_t          GenVertex_fBits[kMaxGenVertex];   //[GenVertex_]
   Float_t         GenVertex_T[kMaxGenVertex];   //[GenVertex_]
   Float_t         GenVertex_X[kMaxGenVertex];   //[GenVertex_]
   Float_t         GenVertex_Y[kMaxGenVertex];   //[GenVertex_]
   Float_t         GenVertex_Z[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_ErrorT[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_ErrorX[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_ErrorY[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_ErrorZ[kMaxGenVertex];   //[GenVertex_]
   Int_t           GenVertex_Index[kMaxGenVertex];   //[GenVertex_]
   Int_t           GenVertex_NDF[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_Sigma[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_SumPT2[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_GenSumPT2[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_GenDeltaZ[kMaxGenVertex];   //[GenVertex_]
   Double_t        GenVertex_BTVSumPT2[kMaxGenVertex];   //[GenVertex_]
   TRefArray       GenVertex_Constituents[kMaxGenVertex];
   Int_t           GenVertex_size;
   Int_t           EFlowTrack_;
   UInt_t          EFlowTrack_fUniqueID[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_fBits[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_PID[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_Charge[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_IsPU[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_IsRecoPU[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_HardEnergyFraction[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_P[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_PT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Eta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Phi[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_CtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_C[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Mass[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_EtaOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_PhiOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_T[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_X[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Y[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Z[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_TOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_XOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_YOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ZOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Xd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Yd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Zd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_XFirstHit[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_YFirstHit[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ZFirstHit[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_L[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_D0[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_DZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Nclusters[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_dNdx[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorP[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPhi[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorCtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorDZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorC[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0Phi[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0C[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0DZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0CtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPhiC[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPhiDZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPhiCtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorCDZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorCCtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorDZCtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   TRef            EFlowTrack_Particle[kMaxEFlowTrack];
   Int_t           EFlowTrack_VertexIndex[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_size;
   Int_t           Track_;
   UInt_t          Track_fUniqueID[kMaxTrack];   //[Track_]
   UInt_t          Track_fBits[kMaxTrack];   //[Track_]
   Int_t           Track_PID[kMaxTrack];   //[Track_]
   Int_t           Track_Charge[kMaxTrack];   //[Track_]
   Int_t           Track_IsPU[kMaxTrack];   //[Track_]
   Int_t           Track_IsRecoPU[kMaxTrack];   //[Track_]
   Float_t         Track_HardEnergyFraction[kMaxTrack];   //[Track_]
   Float_t         Track_P[kMaxTrack];   //[Track_]
   Float_t         Track_PT[kMaxTrack];   //[Track_]
   Float_t         Track_Eta[kMaxTrack];   //[Track_]
   Float_t         Track_Phi[kMaxTrack];   //[Track_]
   Float_t         Track_CtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_C[kMaxTrack];   //[Track_]
   Float_t         Track_Mass[kMaxTrack];   //[Track_]
   Float_t         Track_EtaOuter[kMaxTrack];   //[Track_]
   Float_t         Track_PhiOuter[kMaxTrack];   //[Track_]
   Float_t         Track_T[kMaxTrack];   //[Track_]
   Float_t         Track_X[kMaxTrack];   //[Track_]
   Float_t         Track_Y[kMaxTrack];   //[Track_]
   Float_t         Track_Z[kMaxTrack];   //[Track_]
   Float_t         Track_TOuter[kMaxTrack];   //[Track_]
   Float_t         Track_XOuter[kMaxTrack];   //[Track_]
   Float_t         Track_YOuter[kMaxTrack];   //[Track_]
   Float_t         Track_ZOuter[kMaxTrack];   //[Track_]
   Float_t         Track_Xd[kMaxTrack];   //[Track_]
   Float_t         Track_Yd[kMaxTrack];   //[Track_]
   Float_t         Track_Zd[kMaxTrack];   //[Track_]
   Float_t         Track_XFirstHit[kMaxTrack];   //[Track_]
   Float_t         Track_YFirstHit[kMaxTrack];   //[Track_]
   Float_t         Track_ZFirstHit[kMaxTrack];   //[Track_]
   Float_t         Track_L[kMaxTrack];   //[Track_]
   Float_t         Track_D0[kMaxTrack];   //[Track_]
   Float_t         Track_DZ[kMaxTrack];   //[Track_]
   Float_t         Track_Nclusters[kMaxTrack];   //[Track_]
   Float_t         Track_dNdx[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorP[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhi[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorC[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0Phi[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0C[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0DZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0CtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiC[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhiCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCDZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorDZCtgTheta[kMaxTrack];   //[Track_]
   TRef            Track_Particle[kMaxTrack];
   Int_t           Track_VertexIndex[kMaxTrack];   //[Track_]
   Int_t           Track_size;
   Int_t           EFlowPhoton_;
   UInt_t          EFlowPhoton_fUniqueID[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_fBits[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_ET[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Eta[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Phi[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_E[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_T[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_X[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Y[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Z[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Int_t           EFlowPhoton_NTimeHits[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Eem[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Ehad[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Etrk[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Edges[kMaxEFlowPhoton][4];   //[EFlowPhoton_]
   Int_t           EFlowPhoton_IsPU[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Int_t           EFlowPhoton_IsRecoPU[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_HardEnergyFraction[kMaxEFlowPhoton];   //[EFlowPhoton_]
   TRefArray       EFlowPhoton_Particles[kMaxEFlowPhoton];
   Int_t           EFlowPhoton_size;
   Int_t           EFlowNeutralHadron_;
   UInt_t          EFlowNeutralHadron_fUniqueID[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_fBits[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_ET[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Eta[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Phi[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_E[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_T[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_X[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Y[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Z[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Int_t           EFlowNeutralHadron_NTimeHits[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Eem[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Ehad[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Etrk[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Edges[kMaxEFlowNeutralHadron][4];   //[EFlowNeutralHadron_]
   Int_t           EFlowNeutralHadron_IsPU[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Int_t           EFlowNeutralHadron_IsRecoPU[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_HardEnergyFraction[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   TRefArray       EFlowNeutralHadron_Particles[kMaxEFlowNeutralHadron];
   Int_t           EFlowNeutralHadron_size;
   Int_t           ParticleFlowCandidate_;
   UInt_t          ParticleFlowCandidate_fUniqueID[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   UInt_t          ParticleFlowCandidate_fBits[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_PID[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_Charge[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_IsPU[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_IsRecoPU[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_HardEnergyFraction[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_E[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_P[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_PT[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Eta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Phi[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_CtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_C[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Mass[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_EtaOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_PhiOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_T[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_X[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Y[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Z[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_TOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_XOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_YOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ZOuter[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Xd[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Yd[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Zd[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_XFirstHit[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_YFirstHit[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ZFirstHit[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_L[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_D0[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_DZ[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Nclusters[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_dNdx[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorP[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorPT[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorPhi[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorCtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorT[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorD0[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorDZ[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorC[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorD0Phi[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorD0C[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorD0DZ[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorD0CtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorPhiC[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorPhiDZ[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorPhiCtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorCDZ[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorCCtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_ErrorDZCtgTheta[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_VertexIndex[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Int_t           ParticleFlowCandidate_NTimeHits[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Eem[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Ehad[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Etrk[kMaxParticleFlowCandidate];   //[ParticleFlowCandidate_]
   Float_t         ParticleFlowCandidate_Edges[kMaxParticleFlowCandidate][4];   //[ParticleFlowCandidate_]
   TRefArray       ParticleFlowCandidate_Particles[kMaxParticleFlowCandidate];
   Int_t           ParticleFlowCandidate_size;
   Int_t           Tower_;
   UInt_t          Tower_fUniqueID[kMaxTower];   //[Tower_]
   UInt_t          Tower_fBits[kMaxTower];   //[Tower_]
   Float_t         Tower_ET[kMaxTower];   //[Tower_]
   Float_t         Tower_Eta[kMaxTower];   //[Tower_]
   Float_t         Tower_Phi[kMaxTower];   //[Tower_]
   Float_t         Tower_E[kMaxTower];   //[Tower_]
   Float_t         Tower_T[kMaxTower];   //[Tower_]
   Float_t         Tower_X[kMaxTower];   //[Tower_]
   Float_t         Tower_Y[kMaxTower];   //[Tower_]
   Float_t         Tower_Z[kMaxTower];   //[Tower_]
   Int_t           Tower_NTimeHits[kMaxTower];   //[Tower_]
   Float_t         Tower_Eem[kMaxTower];   //[Tower_]
   Float_t         Tower_Ehad[kMaxTower];   //[Tower_]
   Float_t         Tower_Etrk[kMaxTower];   //[Tower_]
   Float_t         Tower_Edges[kMaxTower][4];   //[Tower_]
   Int_t           Tower_IsPU[kMaxTower];   //[Tower_]
   Int_t           Tower_IsRecoPU[kMaxTower];   //[Tower_]
   Float_t         Tower_HardEnergyFraction[kMaxTower];   //[Tower_]
   TRefArray       Tower_Particles[kMaxTower];
   Int_t           Tower_size;
   Int_t           Electron_;
   UInt_t          Electron_fUniqueID[kMaxElectron];   //[Electron_]
   UInt_t          Electron_fBits[kMaxElectron];   //[Electron_]
   Float_t         Electron_PT[kMaxElectron];   //[Electron_]
   Float_t         Electron_Eta[kMaxElectron];   //[Electron_]
   Float_t         Electron_Phi[kMaxElectron];   //[Electron_]
   Float_t         Electron_T[kMaxElectron];   //[Electron_]
   Int_t           Electron_Charge[kMaxElectron];   //[Electron_]
   Float_t         Electron_EhadOverEem[kMaxElectron];   //[Electron_]
   TRef            Electron_Particle[kMaxElectron];
   Float_t         Electron_IsolationVar[kMaxElectron];   //[Electron_]
   Float_t         Electron_IsolationVarRhoCorr[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtCharged[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtNeutral[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtChargedPU[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPt[kMaxElectron];   //[Electron_]
   Float_t         Electron_D0[kMaxElectron];   //[Electron_]
   Float_t         Electron_DZ[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorD0[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorDZ[kMaxElectron];   //[Electron_]
   Int_t           Electron_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[kMaxMuon];   //[Muon_]
   UInt_t          Muon_fBits[kMaxMuon];   //[Muon_]
   Float_t         Muon_PT[kMaxMuon];   //[Muon_]
   Float_t         Muon_Eta[kMaxMuon];   //[Muon_]
   Float_t         Muon_Phi[kMaxMuon];   //[Muon_]
   Float_t         Muon_T[kMaxMuon];   //[Muon_]
   Int_t           Muon_Charge[kMaxMuon];   //[Muon_]
   TRef            Muon_Particle[kMaxMuon];
   Float_t         Muon_IsolationVar[kMaxMuon];   //[Muon_]
   Float_t         Muon_IsolationVarRhoCorr[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtCharged[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtNeutral[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtChargedPU[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPt[kMaxMuon];   //[Muon_]
   Float_t         Muon_D0[kMaxMuon];   //[Muon_]
   Float_t         Muon_DZ[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorD0[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorDZ[kMaxMuon];   //[Muon_]
   Int_t           Muon_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_fBits[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PT[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_E[kMaxPhoton];   //[Photon_]
   Float_t         Photon_T[kMaxPhoton];   //[Photon_]
   Float_t         Photon_EhadOverEem[kMaxPhoton];   //[Photon_]
   TRefArray       Photon_Particles[kMaxPhoton];
   Float_t         Photon_IsolationVar[kMaxPhoton];   //[Photon_]
   Float_t         Photon_IsolationVarRhoCorr[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtCharged[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtNeutral[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtChargedPU[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPt[kMaxPhoton];   //[Photon_]
   Int_t           Photon_Status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[kMaxJet];   //[Jet_]
   UInt_t          Jet_fBits[kMaxJet];   //[Jet_]
   Float_t         Jet_PT[kMaxJet];   //[Jet_]
   Float_t         Jet_Eta[kMaxJet];   //[Jet_]
   Float_t         Jet_Phi[kMaxJet];   //[Jet_]
   Float_t         Jet_T[kMaxJet];   //[Jet_]
   Float_t         Jet_Mass[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaEta[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaPhi[kMaxJet];   //[Jet_]
   UInt_t          Jet_Flavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauFlavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTag[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauTag[kMaxJet];   //[Jet_]
   Float_t         Jet_TauWeight[kMaxJet];   //[Jet_]
   Int_t           Jet_Charge[kMaxJet];   //[Jet_]
   Float_t         Jet_EhadOverEem[kMaxJet];   //[Jet_]
   Int_t           Jet_NCharged[kMaxJet];   //[Jet_]
   Int_t           Jet_NNeutrals[kMaxJet];   //[Jet_]
   Float_t         Jet_NeutralEnergyFraction[kMaxJet];   //[Jet_]
   Float_t         Jet_ChargedEnergyFraction[kMaxJet];   //[Jet_]
   Float_t         Jet_Beta[kMaxJet];   //[Jet_]
   Float_t         Jet_BetaStar[kMaxJet];   //[Jet_]
   Float_t         Jet_MeanSqDeltaR[kMaxJet];   //[Jet_]
   Float_t         Jet_PTD[kMaxJet];   //[Jet_]
   Float_t         Jet_FracPt[kMaxJet][5];   //[Jet_]
   Float_t         Jet_Tau[kMaxJet][5];   //[Jet_]
   TLorentzVector  Jet_SoftDroppedJet[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet1[kMaxJet];
   TLorentzVector  Jet_SoftDroppedSubJet2[kMaxJet];
   TLorentzVector  Jet_TrimmedP4[5][kMaxJet];
   TLorentzVector  Jet_PrunedP4[5][kMaxJet];
   TLorentzVector  Jet_SoftDroppedP4[5][kMaxJet];
   Int_t           Jet_NSubJetsTrimmed[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsPruned[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsSoftDropped[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge12[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge23[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge34[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge45[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge56[kMaxJet];   //[Jet_]
   TRefArray       Jet_Constituents[kMaxJet];
   TRefArray       Jet_Particles[kMaxJet];
   TLorentzVector  Jet_Area[kMaxJet];
   Int_t           Jet_size;
   Int_t           MissingET_;
   UInt_t          MissingET_fUniqueID[kMaxMissingET];   //[MissingET_]
   UInt_t          MissingET_fBits[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_MET[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Eta[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Phi[kMaxMissingET];   //[MissingET_]
   Int_t           MissingET_size;
   Int_t           GenJet_;
   UInt_t          GenJet_fUniqueID[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_fBits[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PT[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Eta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Phi[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_T[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Mass[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaEta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaPhi[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_Flavor[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_TauFlavor[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTag[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_TauTag[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_TauWeight[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_Charge[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_EhadOverEem[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NCharged[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NNeutrals[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_NeutralEnergyFraction[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_ChargedEnergyFraction[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Beta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_BetaStar[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_MeanSqDeltaR[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PTD[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_FracPt[kMaxGenJet][5];   //[GenJet_]
   Float_t         GenJet_Tau[kMaxGenJet][5];   //[GenJet_]
   TLorentzVector  GenJet_SoftDroppedJet[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet1[kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedSubJet2[kMaxGenJet];
   TLorentzVector  GenJet_TrimmedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_PrunedP4[5][kMaxGenJet];
   TLorentzVector  GenJet_SoftDroppedP4[5][kMaxGenJet];
   Int_t           GenJet_NSubJetsTrimmed[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsPruned[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsSoftDropped[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge12[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge23[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge34[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge45[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge56[kMaxGenJet];   //[GenJet_]
   TRefArray       GenJet_Constituents[kMaxGenJet];
   TRefArray       GenJet_Particles[kMaxGenJet];
   TLorentzVector  GenJet_Area[kMaxGenJet];
   Int_t           GenJet_size;
   Int_t           GenMissingET_;
   UInt_t          GenMissingET_fUniqueID[kMaxGenMissingET];   //[GenMissingET_]
   UInt_t          GenMissingET_fBits[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_MET[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Eta[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Phi[kMaxGenMissingET];   //[GenMissingET_]
   Int_t           GenMissingET_size;
   Int_t           GenJetDurhamN2_;
   UInt_t          GenJetDurhamN2_fUniqueID[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_fBits[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_PT[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_Eta[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_Phi[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_T[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_Mass[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_DeltaEta[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_DeltaPhi[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_Flavor[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_FlavorAlgo[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_FlavorPhys[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_TauFlavor[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_BTag[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_BTagAlgo[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_BTagPhys[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   UInt_t          GenJetDurhamN2_TauTag[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_TauWeight[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Int_t           GenJetDurhamN2_Charge[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_EhadOverEem[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Int_t           GenJetDurhamN2_NCharged[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Int_t           GenJetDurhamN2_NNeutrals[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_NeutralEnergyFraction[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_ChargedEnergyFraction[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_Beta[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_BetaStar[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_MeanSqDeltaR[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_PTD[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_FracPt[kMaxGenJetDurhamN2][5];   //[GenJetDurhamN2_]
   Float_t         GenJetDurhamN2_Tau[kMaxGenJetDurhamN2][5];   //[GenJetDurhamN2_]
   TLorentzVector  GenJetDurhamN2_SoftDroppedJet[kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_SoftDroppedSubJet1[kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_SoftDroppedSubJet2[kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_TrimmedP4[5][kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_PrunedP4[5][kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_SoftDroppedP4[5][kMaxGenJetDurhamN2];
   Int_t           GenJetDurhamN2_NSubJetsTrimmed[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Int_t           GenJetDurhamN2_NSubJetsPruned[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Int_t           GenJetDurhamN2_NSubJetsSoftDropped[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Double_t        GenJetDurhamN2_ExclYmerge12[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Double_t        GenJetDurhamN2_ExclYmerge23[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Double_t        GenJetDurhamN2_ExclYmerge34[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Double_t        GenJetDurhamN2_ExclYmerge45[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   Double_t        GenJetDurhamN2_ExclYmerge56[kMaxGenJetDurhamN2];   //[GenJetDurhamN2_]
   TRefArray       GenJetDurhamN2_Constituents[kMaxGenJetDurhamN2];
   TRefArray       GenJetDurhamN2_Particles[kMaxGenJetDurhamN2];
   TLorentzVector  GenJetDurhamN2_Area[kMaxGenJetDurhamN2];
   Int_t           GenJetDurhamN2_size;
   Int_t           JetDurhamN2_;
   UInt_t          JetDurhamN2_fUniqueID[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_fBits[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_PT[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_Eta[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_Phi[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_T[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_Mass[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_DeltaEta[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_DeltaPhi[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_Flavor[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_FlavorAlgo[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_FlavorPhys[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_TauFlavor[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_BTag[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_BTagAlgo[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_BTagPhys[kMaxJetDurhamN2];   //[JetDurhamN2_]
   UInt_t          JetDurhamN2_TauTag[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_TauWeight[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Int_t           JetDurhamN2_Charge[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_EhadOverEem[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Int_t           JetDurhamN2_NCharged[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Int_t           JetDurhamN2_NNeutrals[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_NeutralEnergyFraction[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_ChargedEnergyFraction[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_Beta[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_BetaStar[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_MeanSqDeltaR[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_PTD[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_FracPt[kMaxJetDurhamN2][5];   //[JetDurhamN2_]
   Float_t         JetDurhamN2_Tau[kMaxJetDurhamN2][5];   //[JetDurhamN2_]
   TLorentzVector  JetDurhamN2_SoftDroppedJet[kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_SoftDroppedSubJet1[kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_SoftDroppedSubJet2[kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_TrimmedP4[5][kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_PrunedP4[5][kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_SoftDroppedP4[5][kMaxJetDurhamN2];
   Int_t           JetDurhamN2_NSubJetsTrimmed[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Int_t           JetDurhamN2_NSubJetsPruned[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Int_t           JetDurhamN2_NSubJetsSoftDropped[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Double_t        JetDurhamN2_ExclYmerge12[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Double_t        JetDurhamN2_ExclYmerge23[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Double_t        JetDurhamN2_ExclYmerge34[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Double_t        JetDurhamN2_ExclYmerge45[kMaxJetDurhamN2];   //[JetDurhamN2_]
   Double_t        JetDurhamN2_ExclYmerge56[kMaxJetDurhamN2];   //[JetDurhamN2_]
   TRefArray       JetDurhamN2_Constituents[kMaxJetDurhamN2];
   TRefArray       JetDurhamN2_Particles[kMaxJetDurhamN2];
   TLorentzVector  JetDurhamN2_Area[kMaxJetDurhamN2];
   Int_t           JetDurhamN2_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_ReadTime;   //!
   TBranch        *b_Event_ProcTime;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_MPI;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_CrossSection;   //!
   TBranch        *b_Event_CrossSectionError;   //!
   TBranch        *b_Event_Scale;   //!
   TBranch        *b_Event_AlphaQED;   //!
   TBranch        *b_Event_AlphaQCD;   //!
   TBranch        *b_Event_ID1;   //!
   TBranch        *b_Event_ID2;   //!
   TBranch        *b_Event_X1;   //!
   TBranch        *b_Event_X2;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_PDF1;   //!
   TBranch        *b_Event_PDF2;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_Weight_;   //!
   TBranch        *b_Weight_fUniqueID;   //!
   TBranch        *b_Weight_fBits;   //!
   TBranch        *b_Weight_Weight;   //!
   TBranch        *b_Weight_size;   //!
   TBranch        *b_Particle_;   //!
   TBranch        *b_Particle_fUniqueID;   //!
   TBranch        *b_Particle_fBits;   //!
   TBranch        *b_Particle_PID;   //!
   TBranch        *b_Particle_Status;   //!
   TBranch        *b_Particle_IsPU;   //!
   TBranch        *b_Particle_M1;   //!
   TBranch        *b_Particle_M2;   //!
   TBranch        *b_Particle_D1;   //!
   TBranch        *b_Particle_D2;   //!
   TBranch        *b_Particle_Charge;   //!
   TBranch        *b_Particle_Mass;   //!
   TBranch        *b_Particle_E;   //!
   TBranch        *b_Particle_Px;   //!
   TBranch        *b_Particle_Py;   //!
   TBranch        *b_Particle_Pz;   //!
   TBranch        *b_Particle_P;   //!
   TBranch        *b_Particle_PT;   //!
   TBranch        *b_Particle_Eta;   //!
   TBranch        *b_Particle_Phi;   //!
   TBranch        *b_Particle_Rapidity;   //!
   TBranch        *b_Particle_T;   //!
   TBranch        *b_Particle_X;   //!
   TBranch        *b_Particle_Y;   //!
   TBranch        *b_Particle_Z;   //!
   TBranch        *b_Particle_size;   //!
   TBranch        *b_GenVertex_;   //!
   TBranch        *b_GenVertex_fUniqueID;   //!
   TBranch        *b_GenVertex_fBits;   //!
   TBranch        *b_GenVertex_T;   //!
   TBranch        *b_GenVertex_X;   //!
   TBranch        *b_GenVertex_Y;   //!
   TBranch        *b_GenVertex_Z;   //!
   TBranch        *b_GenVertex_ErrorT;   //!
   TBranch        *b_GenVertex_ErrorX;   //!
   TBranch        *b_GenVertex_ErrorY;   //!
   TBranch        *b_GenVertex_ErrorZ;   //!
   TBranch        *b_GenVertex_Index;   //!
   TBranch        *b_GenVertex_NDF;   //!
   TBranch        *b_GenVertex_Sigma;   //!
   TBranch        *b_GenVertex_SumPT2;   //!
   TBranch        *b_GenVertex_GenSumPT2;   //!
   TBranch        *b_GenVertex_GenDeltaZ;   //!
   TBranch        *b_GenVertex_BTVSumPT2;   //!
   TBranch        *b_GenVertex_Constituents;   //!
   TBranch        *b_GenVertex_size;   //!
   TBranch        *b_EFlowTrack_;   //!
   TBranch        *b_EFlowTrack_fUniqueID;   //!
   TBranch        *b_EFlowTrack_fBits;   //!
   TBranch        *b_EFlowTrack_PID;   //!
   TBranch        *b_EFlowTrack_Charge;   //!
   TBranch        *b_EFlowTrack_IsPU;   //!
   TBranch        *b_EFlowTrack_IsRecoPU;   //!
   TBranch        *b_EFlowTrack_HardEnergyFraction;   //!
   TBranch        *b_EFlowTrack_P;   //!
   TBranch        *b_EFlowTrack_PT;   //!
   TBranch        *b_EFlowTrack_Eta;   //!
   TBranch        *b_EFlowTrack_Phi;   //!
   TBranch        *b_EFlowTrack_CtgTheta;   //!
   TBranch        *b_EFlowTrack_C;   //!
   TBranch        *b_EFlowTrack_Mass;   //!
   TBranch        *b_EFlowTrack_EtaOuter;   //!
   TBranch        *b_EFlowTrack_PhiOuter;   //!
   TBranch        *b_EFlowTrack_T;   //!
   TBranch        *b_EFlowTrack_X;   //!
   TBranch        *b_EFlowTrack_Y;   //!
   TBranch        *b_EFlowTrack_Z;   //!
   TBranch        *b_EFlowTrack_TOuter;   //!
   TBranch        *b_EFlowTrack_XOuter;   //!
   TBranch        *b_EFlowTrack_YOuter;   //!
   TBranch        *b_EFlowTrack_ZOuter;   //!
   TBranch        *b_EFlowTrack_Xd;   //!
   TBranch        *b_EFlowTrack_Yd;   //!
   TBranch        *b_EFlowTrack_Zd;   //!
   TBranch        *b_EFlowTrack_XFirstHit;   //!
   TBranch        *b_EFlowTrack_YFirstHit;   //!
   TBranch        *b_EFlowTrack_ZFirstHit;   //!
   TBranch        *b_EFlowTrack_L;   //!
   TBranch        *b_EFlowTrack_D0;   //!
   TBranch        *b_EFlowTrack_DZ;   //!
   TBranch        *b_EFlowTrack_Nclusters;   //!
   TBranch        *b_EFlowTrack_dNdx;   //!
   TBranch        *b_EFlowTrack_ErrorP;   //!
   TBranch        *b_EFlowTrack_ErrorPT;   //!
   TBranch        *b_EFlowTrack_ErrorPhi;   //!
   TBranch        *b_EFlowTrack_ErrorCtgTheta;   //!
   TBranch        *b_EFlowTrack_ErrorT;   //!
   TBranch        *b_EFlowTrack_ErrorD0;   //!
   TBranch        *b_EFlowTrack_ErrorDZ;   //!
   TBranch        *b_EFlowTrack_ErrorC;   //!
   TBranch        *b_EFlowTrack_ErrorD0Phi;   //!
   TBranch        *b_EFlowTrack_ErrorD0C;   //!
   TBranch        *b_EFlowTrack_ErrorD0DZ;   //!
   TBranch        *b_EFlowTrack_ErrorD0CtgTheta;   //!
   TBranch        *b_EFlowTrack_ErrorPhiC;   //!
   TBranch        *b_EFlowTrack_ErrorPhiDZ;   //!
   TBranch        *b_EFlowTrack_ErrorPhiCtgTheta;   //!
   TBranch        *b_EFlowTrack_ErrorCDZ;   //!
   TBranch        *b_EFlowTrack_ErrorCCtgTheta;   //!
   TBranch        *b_EFlowTrack_ErrorDZCtgTheta;   //!
   TBranch        *b_EFlowTrack_Particle;   //!
   TBranch        *b_EFlowTrack_VertexIndex;   //!
   TBranch        *b_EFlowTrack_size;   //!
   TBranch        *b_Track_;   //!
   TBranch        *b_Track_fUniqueID;   //!
   TBranch        *b_Track_fBits;   //!
   TBranch        *b_Track_PID;   //!
   TBranch        *b_Track_Charge;   //!
   TBranch        *b_Track_IsPU;   //!
   TBranch        *b_Track_IsRecoPU;   //!
   TBranch        *b_Track_HardEnergyFraction;   //!
   TBranch        *b_Track_P;   //!
   TBranch        *b_Track_PT;   //!
   TBranch        *b_Track_Eta;   //!
   TBranch        *b_Track_Phi;   //!
   TBranch        *b_Track_CtgTheta;   //!
   TBranch        *b_Track_C;   //!
   TBranch        *b_Track_Mass;   //!
   TBranch        *b_Track_EtaOuter;   //!
   TBranch        *b_Track_PhiOuter;   //!
   TBranch        *b_Track_T;   //!
   TBranch        *b_Track_X;   //!
   TBranch        *b_Track_Y;   //!
   TBranch        *b_Track_Z;   //!
   TBranch        *b_Track_TOuter;   //!
   TBranch        *b_Track_XOuter;   //!
   TBranch        *b_Track_YOuter;   //!
   TBranch        *b_Track_ZOuter;   //!
   TBranch        *b_Track_Xd;   //!
   TBranch        *b_Track_Yd;   //!
   TBranch        *b_Track_Zd;   //!
   TBranch        *b_Track_XFirstHit;   //!
   TBranch        *b_Track_YFirstHit;   //!
   TBranch        *b_Track_ZFirstHit;   //!
   TBranch        *b_Track_L;   //!
   TBranch        *b_Track_D0;   //!
   TBranch        *b_Track_DZ;   //!
   TBranch        *b_Track_Nclusters;   //!
   TBranch        *b_Track_dNdx;   //!
   TBranch        *b_Track_ErrorP;   //!
   TBranch        *b_Track_ErrorPT;   //!
   TBranch        *b_Track_ErrorPhi;   //!
   TBranch        *b_Track_ErrorCtgTheta;   //!
   TBranch        *b_Track_ErrorT;   //!
   TBranch        *b_Track_ErrorD0;   //!
   TBranch        *b_Track_ErrorDZ;   //!
   TBranch        *b_Track_ErrorC;   //!
   TBranch        *b_Track_ErrorD0Phi;   //!
   TBranch        *b_Track_ErrorD0C;   //!
   TBranch        *b_Track_ErrorD0DZ;   //!
   TBranch        *b_Track_ErrorD0CtgTheta;   //!
   TBranch        *b_Track_ErrorPhiC;   //!
   TBranch        *b_Track_ErrorPhiDZ;   //!
   TBranch        *b_Track_ErrorPhiCtgTheta;   //!
   TBranch        *b_Track_ErrorCDZ;   //!
   TBranch        *b_Track_ErrorCCtgTheta;   //!
   TBranch        *b_Track_ErrorDZCtgTheta;   //!
   TBranch        *b_Track_Particle;   //!
   TBranch        *b_Track_VertexIndex;   //!
   TBranch        *b_Track_size;   //!
   TBranch        *b_EFlowPhoton_;   //!
   TBranch        *b_EFlowPhoton_fUniqueID;   //!
   TBranch        *b_EFlowPhoton_fBits;   //!
   TBranch        *b_EFlowPhoton_ET;   //!
   TBranch        *b_EFlowPhoton_Eta;   //!
   TBranch        *b_EFlowPhoton_Phi;   //!
   TBranch        *b_EFlowPhoton_E;   //!
   TBranch        *b_EFlowPhoton_T;   //!
   TBranch        *b_EFlowPhoton_X;   //!
   TBranch        *b_EFlowPhoton_Y;   //!
   TBranch        *b_EFlowPhoton_Z;   //!
   TBranch        *b_EFlowPhoton_NTimeHits;   //!
   TBranch        *b_EFlowPhoton_Eem;   //!
   TBranch        *b_EFlowPhoton_Ehad;   //!
   TBranch        *b_EFlowPhoton_Etrk;   //!
   TBranch        *b_EFlowPhoton_Edges;   //!
   TBranch        *b_EFlowPhoton_IsPU;   //!
   TBranch        *b_EFlowPhoton_IsRecoPU;   //!
   TBranch        *b_EFlowPhoton_HardEnergyFraction;   //!
   TBranch        *b_EFlowPhoton_Particles;   //!
   TBranch        *b_EFlowPhoton_size;   //!
   TBranch        *b_EFlowNeutralHadron_;   //!
   TBranch        *b_EFlowNeutralHadron_fUniqueID;   //!
   TBranch        *b_EFlowNeutralHadron_fBits;   //!
   TBranch        *b_EFlowNeutralHadron_ET;   //!
   TBranch        *b_EFlowNeutralHadron_Eta;   //!
   TBranch        *b_EFlowNeutralHadron_Phi;   //!
   TBranch        *b_EFlowNeutralHadron_E;   //!
   TBranch        *b_EFlowNeutralHadron_T;   //!
   TBranch        *b_EFlowNeutralHadron_X;   //!
   TBranch        *b_EFlowNeutralHadron_Y;   //!
   TBranch        *b_EFlowNeutralHadron_Z;   //!
   TBranch        *b_EFlowNeutralHadron_NTimeHits;   //!
   TBranch        *b_EFlowNeutralHadron_Eem;   //!
   TBranch        *b_EFlowNeutralHadron_Ehad;   //!
   TBranch        *b_EFlowNeutralHadron_Etrk;   //!
   TBranch        *b_EFlowNeutralHadron_Edges;   //!
   TBranch        *b_EFlowNeutralHadron_IsPU;   //!
   TBranch        *b_EFlowNeutralHadron_IsRecoPU;   //!
   TBranch        *b_EFlowNeutralHadron_HardEnergyFraction;   //!
   TBranch        *b_EFlowNeutralHadron_Particles;   //!
   TBranch        *b_EFlowNeutralHadron_size;   //!
   TBranch        *b_ParticleFlowCandidate_;   //!
   TBranch        *b_ParticleFlowCandidate_fUniqueID;   //!
   TBranch        *b_ParticleFlowCandidate_fBits;   //!
   TBranch        *b_ParticleFlowCandidate_PID;   //!
   TBranch        *b_ParticleFlowCandidate_Charge;   //!
   TBranch        *b_ParticleFlowCandidate_IsPU;   //!
   TBranch        *b_ParticleFlowCandidate_IsRecoPU;   //!
   TBranch        *b_ParticleFlowCandidate_HardEnergyFraction;   //!
   TBranch        *b_ParticleFlowCandidate_E;   //!
   TBranch        *b_ParticleFlowCandidate_P;   //!
   TBranch        *b_ParticleFlowCandidate_PT;   //!
   TBranch        *b_ParticleFlowCandidate_Eta;   //!
   TBranch        *b_ParticleFlowCandidate_Phi;   //!
   TBranch        *b_ParticleFlowCandidate_CtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_C;   //!
   TBranch        *b_ParticleFlowCandidate_Mass;   //!
   TBranch        *b_ParticleFlowCandidate_EtaOuter;   //!
   TBranch        *b_ParticleFlowCandidate_PhiOuter;   //!
   TBranch        *b_ParticleFlowCandidate_T;   //!
   TBranch        *b_ParticleFlowCandidate_X;   //!
   TBranch        *b_ParticleFlowCandidate_Y;   //!
   TBranch        *b_ParticleFlowCandidate_Z;   //!
   TBranch        *b_ParticleFlowCandidate_TOuter;   //!
   TBranch        *b_ParticleFlowCandidate_XOuter;   //!
   TBranch        *b_ParticleFlowCandidate_YOuter;   //!
   TBranch        *b_ParticleFlowCandidate_ZOuter;   //!
   TBranch        *b_ParticleFlowCandidate_Xd;   //!
   TBranch        *b_ParticleFlowCandidate_Yd;   //!
   TBranch        *b_ParticleFlowCandidate_Zd;   //!
   TBranch        *b_ParticleFlowCandidate_XFirstHit;   //!
   TBranch        *b_ParticleFlowCandidate_YFirstHit;   //!
   TBranch        *b_ParticleFlowCandidate_ZFirstHit;   //!
   TBranch        *b_ParticleFlowCandidate_L;   //!
   TBranch        *b_ParticleFlowCandidate_D0;   //!
   TBranch        *b_ParticleFlowCandidate_DZ;   //!
   TBranch        *b_ParticleFlowCandidate_Nclusters;   //!
   TBranch        *b_ParticleFlowCandidate_dNdx;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorP;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorPT;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorPhi;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorCtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorT;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorD0;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorDZ;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorC;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorD0Phi;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorD0C;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorD0DZ;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorD0CtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorPhiC;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorPhiDZ;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorPhiCtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorCDZ;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorCCtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_ErrorDZCtgTheta;   //!
   TBranch        *b_ParticleFlowCandidate_VertexIndex;   //!
   TBranch        *b_ParticleFlowCandidate_NTimeHits;   //!
   TBranch        *b_ParticleFlowCandidate_Eem;   //!
   TBranch        *b_ParticleFlowCandidate_Ehad;   //!
   TBranch        *b_ParticleFlowCandidate_Etrk;   //!
   TBranch        *b_ParticleFlowCandidate_Edges;   //!
   TBranch        *b_ParticleFlowCandidate_Particles;   //!
   TBranch        *b_ParticleFlowCandidate_size;   //!
   TBranch        *b_Tower_;   //!
   TBranch        *b_Tower_fUniqueID;   //!
   TBranch        *b_Tower_fBits;   //!
   TBranch        *b_Tower_ET;   //!
   TBranch        *b_Tower_Eta;   //!
   TBranch        *b_Tower_Phi;   //!
   TBranch        *b_Tower_E;   //!
   TBranch        *b_Tower_T;   //!
   TBranch        *b_Tower_X;   //!
   TBranch        *b_Tower_Y;   //!
   TBranch        *b_Tower_Z;   //!
   TBranch        *b_Tower_NTimeHits;   //!
   TBranch        *b_Tower_Eem;   //!
   TBranch        *b_Tower_Ehad;   //!
   TBranch        *b_Tower_Etrk;   //!
   TBranch        *b_Tower_Edges;   //!
   TBranch        *b_Tower_IsPU;   //!
   TBranch        *b_Tower_IsRecoPU;   //!
   TBranch        *b_Tower_HardEnergyFraction;   //!
   TBranch        *b_Tower_Particles;   //!
   TBranch        *b_Tower_size;   //!
   TBranch        *b_Electron_;   //!
   TBranch        *b_Electron_fUniqueID;   //!
   TBranch        *b_Electron_fBits;   //!
   TBranch        *b_Electron_PT;   //!
   TBranch        *b_Electron_Eta;   //!
   TBranch        *b_Electron_Phi;   //!
   TBranch        *b_Electron_T;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_EhadOverEem;   //!
   TBranch        *b_Electron_Particle;   //!
   TBranch        *b_Electron_IsolationVar;   //!
   TBranch        *b_Electron_IsolationVarRhoCorr;   //!
   TBranch        *b_Electron_SumPtCharged;   //!
   TBranch        *b_Electron_SumPtNeutral;   //!
   TBranch        *b_Electron_SumPtChargedPU;   //!
   TBranch        *b_Electron_SumPt;   //!
   TBranch        *b_Electron_D0;   //!
   TBranch        *b_Electron_DZ;   //!
   TBranch        *b_Electron_ErrorD0;   //!
   TBranch        *b_Electron_ErrorDZ;   //!
   TBranch        *b_Electron_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_T;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_Particle;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Muon_IsolationVarRhoCorr;   //!
   TBranch        *b_Muon_SumPtCharged;   //!
   TBranch        *b_Muon_SumPtNeutral;   //!
   TBranch        *b_Muon_SumPtChargedPU;   //!
   TBranch        *b_Muon_SumPt;   //!
   TBranch        *b_Muon_D0;   //!
   TBranch        *b_Muon_DZ;   //!
   TBranch        *b_Muon_ErrorD0;   //!
   TBranch        *b_Muon_ErrorDZ;   //!
   TBranch        *b_Muon_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_E;   //!
   TBranch        *b_Photon_T;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   TBranch        *b_Photon_Particles;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_Photon_IsolationVarRhoCorr;   //!
   TBranch        *b_Photon_SumPtCharged;   //!
   TBranch        *b_Photon_SumPtNeutral;   //!
   TBranch        *b_Photon_SumPtChargedPU;   //!
   TBranch        *b_Photon_SumPt;   //!
   TBranch        *b_Photon_Status;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_T;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_DeltaEta;   //!
   TBranch        *b_Jet_DeltaPhi;   //!
   TBranch        *b_Jet_Flavor;   //!
   TBranch        *b_Jet_FlavorAlgo;   //!
   TBranch        *b_Jet_FlavorPhys;   //!
   TBranch        *b_Jet_TauFlavor;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_BTagAlgo;   //!
   TBranch        *b_Jet_BTagPhys;   //!
   TBranch        *b_Jet_TauTag;   //!
   TBranch        *b_Jet_TauWeight;   //!
   TBranch        *b_Jet_Charge;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_NCharged;   //!
   TBranch        *b_Jet_NNeutrals;   //!
   TBranch        *b_Jet_NeutralEnergyFraction;   //!
   TBranch        *b_Jet_ChargedEnergyFraction;   //!
   TBranch        *b_Jet_Beta;   //!
   TBranch        *b_Jet_BetaStar;   //!
   TBranch        *b_Jet_MeanSqDeltaR;   //!
   TBranch        *b_Jet_PTD;   //!
   TBranch        *b_Jet_FracPt;   //!
   TBranch        *b_Jet_Tau;   //!
   TBranch        *b_Jet_SoftDroppedJet;   //!
   TBranch        *b_Jet_SoftDroppedSubJet1;   //!
   TBranch        *b_Jet_SoftDroppedSubJet2;   //!
   TBranch        *b_Jet_TrimmedP4;   //!
   TBranch        *b_Jet_PrunedP4;   //!
   TBranch        *b_Jet_SoftDroppedP4;   //!
   TBranch        *b_Jet_NSubJetsTrimmed;   //!
   TBranch        *b_Jet_NSubJetsPruned;   //!
   TBranch        *b_Jet_NSubJetsSoftDropped;   //!
   TBranch        *b_Jet_ExclYmerge12;   //!
   TBranch        *b_Jet_ExclYmerge23;   //!
   TBranch        *b_Jet_ExclYmerge34;   //!
   TBranch        *b_Jet_ExclYmerge45;   //!
   TBranch        *b_Jet_ExclYmerge56;   //!
   TBranch        *b_Jet_Constituents;   //!
   TBranch        *b_Jet_Particles;   //!
   TBranch        *b_Jet_Area;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_MissingET_;   //!
   TBranch        *b_MissingET_fUniqueID;   //!
   TBranch        *b_MissingET_fBits;   //!
   TBranch        *b_MissingET_MET;   //!
   TBranch        *b_MissingET_Eta;   //!
   TBranch        *b_MissingET_Phi;   //!
   TBranch        *b_MissingET_size;   //!
   TBranch        *b_GenJet_;   //!
   TBranch        *b_GenJet_fUniqueID;   //!
   TBranch        *b_GenJet_fBits;   //!
   TBranch        *b_GenJet_PT;   //!
   TBranch        *b_GenJet_Eta;   //!
   TBranch        *b_GenJet_Phi;   //!
   TBranch        *b_GenJet_T;   //!
   TBranch        *b_GenJet_Mass;   //!
   TBranch        *b_GenJet_DeltaEta;   //!
   TBranch        *b_GenJet_DeltaPhi;   //!
   TBranch        *b_GenJet_Flavor;   //!
   TBranch        *b_GenJet_FlavorAlgo;   //!
   TBranch        *b_GenJet_FlavorPhys;   //!
   TBranch        *b_GenJet_TauFlavor;   //!
   TBranch        *b_GenJet_BTag;   //!
   TBranch        *b_GenJet_BTagAlgo;   //!
   TBranch        *b_GenJet_BTagPhys;   //!
   TBranch        *b_GenJet_TauTag;   //!
   TBranch        *b_GenJet_TauWeight;   //!
   TBranch        *b_GenJet_Charge;   //!
   TBranch        *b_GenJet_EhadOverEem;   //!
   TBranch        *b_GenJet_NCharged;   //!
   TBranch        *b_GenJet_NNeutrals;   //!
   TBranch        *b_GenJet_NeutralEnergyFraction;   //!
   TBranch        *b_GenJet_ChargedEnergyFraction;   //!
   TBranch        *b_GenJet_Beta;   //!
   TBranch        *b_GenJet_BetaStar;   //!
   TBranch        *b_GenJet_MeanSqDeltaR;   //!
   TBranch        *b_GenJet_PTD;   //!
   TBranch        *b_GenJet_FracPt;   //!
   TBranch        *b_GenJet_Tau;   //!
   TBranch        *b_GenJet_SoftDroppedJet;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenJet_TrimmedP4;   //!
   TBranch        *b_GenJet_PrunedP4;   //!
   TBranch        *b_GenJet_SoftDroppedP4;   //!
   TBranch        *b_GenJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenJet_NSubJetsPruned;   //!
   TBranch        *b_GenJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenJet_ExclYmerge12;   //!
   TBranch        *b_GenJet_ExclYmerge23;   //!
   TBranch        *b_GenJet_ExclYmerge34;   //!
   TBranch        *b_GenJet_ExclYmerge45;   //!
   TBranch        *b_GenJet_ExclYmerge56;   //!
   TBranch        *b_GenJet_Constituents;   //!
   TBranch        *b_GenJet_Particles;   //!
   TBranch        *b_GenJet_Area;   //!
   TBranch        *b_GenJet_size;   //!
   TBranch        *b_GenMissingET_;   //!
   TBranch        *b_GenMissingET_fUniqueID;   //!
   TBranch        *b_GenMissingET_fBits;   //!
   TBranch        *b_GenMissingET_MET;   //!
   TBranch        *b_GenMissingET_Eta;   //!
   TBranch        *b_GenMissingET_Phi;   //!
   TBranch        *b_GenMissingET_size;   //!
   TBranch        *b_GenJetDurhamN2_;   //!
   TBranch        *b_GenJetDurhamN2_fUniqueID;   //!
   TBranch        *b_GenJetDurhamN2_fBits;   //!
   TBranch        *b_GenJetDurhamN2_PT;   //!
   TBranch        *b_GenJetDurhamN2_Eta;   //!
   TBranch        *b_GenJetDurhamN2_Phi;   //!
   TBranch        *b_GenJetDurhamN2_T;   //!
   TBranch        *b_GenJetDurhamN2_Mass;   //!
   TBranch        *b_GenJetDurhamN2_DeltaEta;   //!
   TBranch        *b_GenJetDurhamN2_DeltaPhi;   //!
   TBranch        *b_GenJetDurhamN2_Flavor;   //!
   TBranch        *b_GenJetDurhamN2_FlavorAlgo;   //!
   TBranch        *b_GenJetDurhamN2_FlavorPhys;   //!
   TBranch        *b_GenJetDurhamN2_TauFlavor;   //!
   TBranch        *b_GenJetDurhamN2_BTag;   //!
   TBranch        *b_GenJetDurhamN2_BTagAlgo;   //!
   TBranch        *b_GenJetDurhamN2_BTagPhys;   //!
   TBranch        *b_GenJetDurhamN2_TauTag;   //!
   TBranch        *b_GenJetDurhamN2_TauWeight;   //!
   TBranch        *b_GenJetDurhamN2_Charge;   //!
   TBranch        *b_GenJetDurhamN2_EhadOverEem;   //!
   TBranch        *b_GenJetDurhamN2_NCharged;   //!
   TBranch        *b_GenJetDurhamN2_NNeutrals;   //!
   TBranch        *b_GenJetDurhamN2_NeutralEnergyFraction;   //!
   TBranch        *b_GenJetDurhamN2_ChargedEnergyFraction;   //!
   TBranch        *b_GenJetDurhamN2_Beta;   //!
   TBranch        *b_GenJetDurhamN2_BetaStar;   //!
   TBranch        *b_GenJetDurhamN2_MeanSqDeltaR;   //!
   TBranch        *b_GenJetDurhamN2_PTD;   //!
   TBranch        *b_GenJetDurhamN2_FracPt;   //!
   TBranch        *b_GenJetDurhamN2_Tau;   //!
   TBranch        *b_GenJetDurhamN2_SoftDroppedJet;   //!
   TBranch        *b_GenJetDurhamN2_SoftDroppedSubJet1;   //!
   TBranch        *b_GenJetDurhamN2_SoftDroppedSubJet2;   //!
   TBranch        *b_GenJetDurhamN2_TrimmedP4;   //!
   TBranch        *b_GenJetDurhamN2_PrunedP4;   //!
   TBranch        *b_GenJetDurhamN2_SoftDroppedP4;   //!
   TBranch        *b_GenJetDurhamN2_NSubJetsTrimmed;   //!
   TBranch        *b_GenJetDurhamN2_NSubJetsPruned;   //!
   TBranch        *b_GenJetDurhamN2_NSubJetsSoftDropped;   //!
   TBranch        *b_GenJetDurhamN2_ExclYmerge12;   //!
   TBranch        *b_GenJetDurhamN2_ExclYmerge23;   //!
   TBranch        *b_GenJetDurhamN2_ExclYmerge34;   //!
   TBranch        *b_GenJetDurhamN2_ExclYmerge45;   //!
   TBranch        *b_GenJetDurhamN2_ExclYmerge56;   //!
   TBranch        *b_GenJetDurhamN2_Constituents;   //!
   TBranch        *b_GenJetDurhamN2_Particles;   //!
   TBranch        *b_GenJetDurhamN2_Area;   //!
   TBranch        *b_GenJetDurhamN2_size;   //!
   TBranch        *b_JetDurhamN2_;   //!
   TBranch        *b_JetDurhamN2_fUniqueID;   //!
   TBranch        *b_JetDurhamN2_fBits;   //!
   TBranch        *b_JetDurhamN2_PT;   //!
   TBranch        *b_JetDurhamN2_Eta;   //!
   TBranch        *b_JetDurhamN2_Phi;   //!
   TBranch        *b_JetDurhamN2_T;   //!
   TBranch        *b_JetDurhamN2_Mass;   //!
   TBranch        *b_JetDurhamN2_DeltaEta;   //!
   TBranch        *b_JetDurhamN2_DeltaPhi;   //!
   TBranch        *b_JetDurhamN2_Flavor;   //!
   TBranch        *b_JetDurhamN2_FlavorAlgo;   //!
   TBranch        *b_JetDurhamN2_FlavorPhys;   //!
   TBranch        *b_JetDurhamN2_TauFlavor;   //!
   TBranch        *b_JetDurhamN2_BTag;   //!
   TBranch        *b_JetDurhamN2_BTagAlgo;   //!
   TBranch        *b_JetDurhamN2_BTagPhys;   //!
   TBranch        *b_JetDurhamN2_TauTag;   //!
   TBranch        *b_JetDurhamN2_TauWeight;   //!
   TBranch        *b_JetDurhamN2_Charge;   //!
   TBranch        *b_JetDurhamN2_EhadOverEem;   //!
   TBranch        *b_JetDurhamN2_NCharged;   //!
   TBranch        *b_JetDurhamN2_NNeutrals;   //!
   TBranch        *b_JetDurhamN2_NeutralEnergyFraction;   //!
   TBranch        *b_JetDurhamN2_ChargedEnergyFraction;   //!
   TBranch        *b_JetDurhamN2_Beta;   //!
   TBranch        *b_JetDurhamN2_BetaStar;   //!
   TBranch        *b_JetDurhamN2_MeanSqDeltaR;   //!
   TBranch        *b_JetDurhamN2_PTD;   //!
   TBranch        *b_JetDurhamN2_FracPt;   //!
   TBranch        *b_JetDurhamN2_Tau;   //!
   TBranch        *b_JetDurhamN2_SoftDroppedJet;   //!
   TBranch        *b_JetDurhamN2_SoftDroppedSubJet1;   //!
   TBranch        *b_JetDurhamN2_SoftDroppedSubJet2;   //!
   TBranch        *b_JetDurhamN2_TrimmedP4;   //!
   TBranch        *b_JetDurhamN2_PrunedP4;   //!
   TBranch        *b_JetDurhamN2_SoftDroppedP4;   //!
   TBranch        *b_JetDurhamN2_NSubJetsTrimmed;   //!
   TBranch        *b_JetDurhamN2_NSubJetsPruned;   //!
   TBranch        *b_JetDurhamN2_NSubJetsSoftDropped;   //!
   TBranch        *b_JetDurhamN2_ExclYmerge12;   //!
   TBranch        *b_JetDurhamN2_ExclYmerge23;   //!
   TBranch        *b_JetDurhamN2_ExclYmerge34;   //!
   TBranch        *b_JetDurhamN2_ExclYmerge45;   //!
   TBranch        *b_JetDurhamN2_ExclYmerge56;   //!
   TBranch        *b_JetDurhamN2_Constituents;   //!
   TBranch        *b_JetDurhamN2_Particles;   //!
   TBranch        *b_JetDurhamN2_Area;   //!
   TBranch        *b_JetDurhamN2_size;   //!

   Delphes(TTree *tree=0);
   virtual ~Delphes();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Delphes_cxx
Delphes::Delphes(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("GEN/SAMPLES/signal_n100k/z_tata_taPe_tae_taSM/z_tata_taPe_tae_taSM.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("GEN/SAMPLES/signal_n100k/z_tata_taPe_tae_taSM/z_tata_taPe_tae_taSM.root");
      }
      f->GetObject("Delphes",tree);

   }
   Init(tree);
}

Delphes::~Delphes()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Delphes::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Delphes::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Delphes::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.ReadTime", Event_ReadTime, &b_Event_ReadTime);
   fChain->SetBranchAddress("Event.ProcTime", Event_ProcTime, &b_Event_ProcTime);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.MPI", Event_MPI, &b_Event_MPI);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.CrossSection", Event_CrossSection, &b_Event_CrossSection);
   fChain->SetBranchAddress("Event.CrossSectionError", Event_CrossSectionError, &b_Event_CrossSectionError);
   fChain->SetBranchAddress("Event.Scale", Event_Scale, &b_Event_Scale);
   fChain->SetBranchAddress("Event.AlphaQED", Event_AlphaQED, &b_Event_AlphaQED);
   fChain->SetBranchAddress("Event.AlphaQCD", Event_AlphaQCD, &b_Event_AlphaQCD);
   fChain->SetBranchAddress("Event.ID1", Event_ID1, &b_Event_ID1);
   fChain->SetBranchAddress("Event.ID2", Event_ID2, &b_Event_ID2);
   fChain->SetBranchAddress("Event.X1", Event_X1, &b_Event_X1);
   fChain->SetBranchAddress("Event.X2", Event_X2, &b_Event_X2);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.PDF1", Event_PDF1, &b_Event_PDF1);
   fChain->SetBranchAddress("Event.PDF2", Event_PDF2, &b_Event_PDF2);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("Weight", &Weight_, &b_Weight_);
   fChain->SetBranchAddress("Weight.fUniqueID", Weight_fUniqueID, &b_Weight_fUniqueID);
   fChain->SetBranchAddress("Weight.fBits", Weight_fBits, &b_Weight_fBits);
   fChain->SetBranchAddress("Weight.Weight", Weight_Weight, &b_Weight_Weight);
   fChain->SetBranchAddress("Weight_size", &Weight_size, &b_Weight_size);
   fChain->SetBranchAddress("Particle", &Particle_, &b_Particle_);
   fChain->SetBranchAddress("Particle.fUniqueID", Particle_fUniqueID, &b_Particle_fUniqueID);
   fChain->SetBranchAddress("Particle.fBits", Particle_fBits, &b_Particle_fBits);
   fChain->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
   fChain->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
   fChain->SetBranchAddress("Particle.IsPU", Particle_IsPU, &b_Particle_IsPU);
   fChain->SetBranchAddress("Particle.M1", Particle_M1, &b_Particle_M1);
   fChain->SetBranchAddress("Particle.M2", Particle_M2, &b_Particle_M2);
   fChain->SetBranchAddress("Particle.D1", Particle_D1, &b_Particle_D1);
   fChain->SetBranchAddress("Particle.D2", Particle_D2, &b_Particle_D2);
   fChain->SetBranchAddress("Particle.Charge", Particle_Charge, &b_Particle_Charge);
   fChain->SetBranchAddress("Particle.Mass", Particle_Mass, &b_Particle_Mass);
   fChain->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
   fChain->SetBranchAddress("Particle.Px", Particle_Px, &b_Particle_Px);
   fChain->SetBranchAddress("Particle.Py", Particle_Py, &b_Particle_Py);
   fChain->SetBranchAddress("Particle.Pz", Particle_Pz, &b_Particle_Pz);
   fChain->SetBranchAddress("Particle.P", Particle_P, &b_Particle_P);
   fChain->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
   fChain->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
   fChain->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
   fChain->SetBranchAddress("Particle.Rapidity", Particle_Rapidity, &b_Particle_Rapidity);
   fChain->SetBranchAddress("Particle.T", Particle_T, &b_Particle_T);
   fChain->SetBranchAddress("Particle.X", Particle_X, &b_Particle_X);
   fChain->SetBranchAddress("Particle.Y", Particle_Y, &b_Particle_Y);
   fChain->SetBranchAddress("Particle.Z", Particle_Z, &b_Particle_Z);
   fChain->SetBranchAddress("Particle_size", &Particle_size, &b_Particle_size);
   fChain->SetBranchAddress("GenVertex", &GenVertex_, &b_GenVertex_);
   fChain->SetBranchAddress("GenVertex.fUniqueID", GenVertex_fUniqueID, &b_GenVertex_fUniqueID);
   fChain->SetBranchAddress("GenVertex.fBits", GenVertex_fBits, &b_GenVertex_fBits);
   fChain->SetBranchAddress("GenVertex.T", GenVertex_T, &b_GenVertex_T);
   fChain->SetBranchAddress("GenVertex.X", GenVertex_X, &b_GenVertex_X);
   fChain->SetBranchAddress("GenVertex.Y", GenVertex_Y, &b_GenVertex_Y);
   fChain->SetBranchAddress("GenVertex.Z", GenVertex_Z, &b_GenVertex_Z);
   fChain->SetBranchAddress("GenVertex.ErrorT", GenVertex_ErrorT, &b_GenVertex_ErrorT);
   fChain->SetBranchAddress("GenVertex.ErrorX", GenVertex_ErrorX, &b_GenVertex_ErrorX);
   fChain->SetBranchAddress("GenVertex.ErrorY", GenVertex_ErrorY, &b_GenVertex_ErrorY);
   fChain->SetBranchAddress("GenVertex.ErrorZ", GenVertex_ErrorZ, &b_GenVertex_ErrorZ);
   fChain->SetBranchAddress("GenVertex.Index", GenVertex_Index, &b_GenVertex_Index);
   fChain->SetBranchAddress("GenVertex.NDF", GenVertex_NDF, &b_GenVertex_NDF);
   fChain->SetBranchAddress("GenVertex.Sigma", GenVertex_Sigma, &b_GenVertex_Sigma);
   fChain->SetBranchAddress("GenVertex.SumPT2", GenVertex_SumPT2, &b_GenVertex_SumPT2);
   fChain->SetBranchAddress("GenVertex.GenSumPT2", GenVertex_GenSumPT2, &b_GenVertex_GenSumPT2);
   fChain->SetBranchAddress("GenVertex.GenDeltaZ", GenVertex_GenDeltaZ, &b_GenVertex_GenDeltaZ);
   fChain->SetBranchAddress("GenVertex.BTVSumPT2", GenVertex_BTVSumPT2, &b_GenVertex_BTVSumPT2);
   fChain->SetBranchAddress("GenVertex.Constituents", GenVertex_Constituents, &b_GenVertex_Constituents);
   fChain->SetBranchAddress("GenVertex_size", &GenVertex_size, &b_GenVertex_size);
   fChain->SetBranchAddress("EFlowTrack", &EFlowTrack_, &b_EFlowTrack_);
   fChain->SetBranchAddress("EFlowTrack.fUniqueID", EFlowTrack_fUniqueID, &b_EFlowTrack_fUniqueID);
   fChain->SetBranchAddress("EFlowTrack.fBits", EFlowTrack_fBits, &b_EFlowTrack_fBits);
   fChain->SetBranchAddress("EFlowTrack.PID", EFlowTrack_PID, &b_EFlowTrack_PID);
   fChain->SetBranchAddress("EFlowTrack.Charge", EFlowTrack_Charge, &b_EFlowTrack_Charge);
   fChain->SetBranchAddress("EFlowTrack.IsPU", EFlowTrack_IsPU, &b_EFlowTrack_IsPU);
   fChain->SetBranchAddress("EFlowTrack.IsRecoPU", EFlowTrack_IsRecoPU, &b_EFlowTrack_IsRecoPU);
   fChain->SetBranchAddress("EFlowTrack.HardEnergyFraction", EFlowTrack_HardEnergyFraction, &b_EFlowTrack_HardEnergyFraction);
   fChain->SetBranchAddress("EFlowTrack.P", EFlowTrack_P, &b_EFlowTrack_P);
   fChain->SetBranchAddress("EFlowTrack.PT", EFlowTrack_PT, &b_EFlowTrack_PT);
   fChain->SetBranchAddress("EFlowTrack.Eta", EFlowTrack_Eta, &b_EFlowTrack_Eta);
   fChain->SetBranchAddress("EFlowTrack.Phi", EFlowTrack_Phi, &b_EFlowTrack_Phi);
   fChain->SetBranchAddress("EFlowTrack.CtgTheta", EFlowTrack_CtgTheta, &b_EFlowTrack_CtgTheta);
   fChain->SetBranchAddress("EFlowTrack.C", EFlowTrack_C, &b_EFlowTrack_C);
   fChain->SetBranchAddress("EFlowTrack.Mass", EFlowTrack_Mass, &b_EFlowTrack_Mass);
   fChain->SetBranchAddress("EFlowTrack.EtaOuter", EFlowTrack_EtaOuter, &b_EFlowTrack_EtaOuter);
   fChain->SetBranchAddress("EFlowTrack.PhiOuter", EFlowTrack_PhiOuter, &b_EFlowTrack_PhiOuter);
   fChain->SetBranchAddress("EFlowTrack.T", EFlowTrack_T, &b_EFlowTrack_T);
   fChain->SetBranchAddress("EFlowTrack.X", EFlowTrack_X, &b_EFlowTrack_X);
   fChain->SetBranchAddress("EFlowTrack.Y", EFlowTrack_Y, &b_EFlowTrack_Y);
   fChain->SetBranchAddress("EFlowTrack.Z", EFlowTrack_Z, &b_EFlowTrack_Z);
   fChain->SetBranchAddress("EFlowTrack.TOuter", EFlowTrack_TOuter, &b_EFlowTrack_TOuter);
   fChain->SetBranchAddress("EFlowTrack.XOuter", EFlowTrack_XOuter, &b_EFlowTrack_XOuter);
   fChain->SetBranchAddress("EFlowTrack.YOuter", EFlowTrack_YOuter, &b_EFlowTrack_YOuter);
   fChain->SetBranchAddress("EFlowTrack.ZOuter", EFlowTrack_ZOuter, &b_EFlowTrack_ZOuter);
   fChain->SetBranchAddress("EFlowTrack.Xd", EFlowTrack_Xd, &b_EFlowTrack_Xd);
   fChain->SetBranchAddress("EFlowTrack.Yd", EFlowTrack_Yd, &b_EFlowTrack_Yd);
   fChain->SetBranchAddress("EFlowTrack.Zd", EFlowTrack_Zd, &b_EFlowTrack_Zd);
   fChain->SetBranchAddress("EFlowTrack.XFirstHit", EFlowTrack_XFirstHit, &b_EFlowTrack_XFirstHit);
   fChain->SetBranchAddress("EFlowTrack.YFirstHit", EFlowTrack_YFirstHit, &b_EFlowTrack_YFirstHit);
   fChain->SetBranchAddress("EFlowTrack.ZFirstHit", EFlowTrack_ZFirstHit, &b_EFlowTrack_ZFirstHit);
   fChain->SetBranchAddress("EFlowTrack.L", EFlowTrack_L, &b_EFlowTrack_L);
   fChain->SetBranchAddress("EFlowTrack.D0", EFlowTrack_D0, &b_EFlowTrack_D0);
   fChain->SetBranchAddress("EFlowTrack.DZ", EFlowTrack_DZ, &b_EFlowTrack_DZ);
   fChain->SetBranchAddress("EFlowTrack.Nclusters", EFlowTrack_Nclusters, &b_EFlowTrack_Nclusters);
   fChain->SetBranchAddress("EFlowTrack.dNdx", EFlowTrack_dNdx, &b_EFlowTrack_dNdx);
   fChain->SetBranchAddress("EFlowTrack.ErrorP", EFlowTrack_ErrorP, &b_EFlowTrack_ErrorP);
   fChain->SetBranchAddress("EFlowTrack.ErrorPT", EFlowTrack_ErrorPT, &b_EFlowTrack_ErrorPT);
   fChain->SetBranchAddress("EFlowTrack.ErrorPhi", EFlowTrack_ErrorPhi, &b_EFlowTrack_ErrorPhi);
   fChain->SetBranchAddress("EFlowTrack.ErrorCtgTheta", EFlowTrack_ErrorCtgTheta, &b_EFlowTrack_ErrorCtgTheta);
   fChain->SetBranchAddress("EFlowTrack.ErrorT", EFlowTrack_ErrorT, &b_EFlowTrack_ErrorT);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0", EFlowTrack_ErrorD0, &b_EFlowTrack_ErrorD0);
   fChain->SetBranchAddress("EFlowTrack.ErrorDZ", EFlowTrack_ErrorDZ, &b_EFlowTrack_ErrorDZ);
   fChain->SetBranchAddress("EFlowTrack.ErrorC", EFlowTrack_ErrorC, &b_EFlowTrack_ErrorC);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0Phi", EFlowTrack_ErrorD0Phi, &b_EFlowTrack_ErrorD0Phi);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0C", EFlowTrack_ErrorD0C, &b_EFlowTrack_ErrorD0C);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0DZ", EFlowTrack_ErrorD0DZ, &b_EFlowTrack_ErrorD0DZ);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0CtgTheta", EFlowTrack_ErrorD0CtgTheta, &b_EFlowTrack_ErrorD0CtgTheta);
   fChain->SetBranchAddress("EFlowTrack.ErrorPhiC", EFlowTrack_ErrorPhiC, &b_EFlowTrack_ErrorPhiC);
   fChain->SetBranchAddress("EFlowTrack.ErrorPhiDZ", EFlowTrack_ErrorPhiDZ, &b_EFlowTrack_ErrorPhiDZ);
   fChain->SetBranchAddress("EFlowTrack.ErrorPhiCtgTheta", EFlowTrack_ErrorPhiCtgTheta, &b_EFlowTrack_ErrorPhiCtgTheta);
   fChain->SetBranchAddress("EFlowTrack.ErrorCDZ", EFlowTrack_ErrorCDZ, &b_EFlowTrack_ErrorCDZ);
   fChain->SetBranchAddress("EFlowTrack.ErrorCCtgTheta", EFlowTrack_ErrorCCtgTheta, &b_EFlowTrack_ErrorCCtgTheta);
   fChain->SetBranchAddress("EFlowTrack.ErrorDZCtgTheta", EFlowTrack_ErrorDZCtgTheta, &b_EFlowTrack_ErrorDZCtgTheta);
   fChain->SetBranchAddress("EFlowTrack.Particle", EFlowTrack_Particle, &b_EFlowTrack_Particle);
   fChain->SetBranchAddress("EFlowTrack.VertexIndex", EFlowTrack_VertexIndex, &b_EFlowTrack_VertexIndex);
   fChain->SetBranchAddress("EFlowTrack_size", &EFlowTrack_size, &b_EFlowTrack_size);
   fChain->SetBranchAddress("Track", &Track_, &b_Track_);
   fChain->SetBranchAddress("Track.fUniqueID", Track_fUniqueID, &b_Track_fUniqueID);
   fChain->SetBranchAddress("Track.fBits", Track_fBits, &b_Track_fBits);
   fChain->SetBranchAddress("Track.PID", Track_PID, &b_Track_PID);
   fChain->SetBranchAddress("Track.Charge", Track_Charge, &b_Track_Charge);
   fChain->SetBranchAddress("Track.IsPU", Track_IsPU, &b_Track_IsPU);
   fChain->SetBranchAddress("Track.IsRecoPU", Track_IsRecoPU, &b_Track_IsRecoPU);
   fChain->SetBranchAddress("Track.HardEnergyFraction", Track_HardEnergyFraction, &b_Track_HardEnergyFraction);
   fChain->SetBranchAddress("Track.P", Track_P, &b_Track_P);
   fChain->SetBranchAddress("Track.PT", Track_PT, &b_Track_PT);
   fChain->SetBranchAddress("Track.Eta", Track_Eta, &b_Track_Eta);
   fChain->SetBranchAddress("Track.Phi", Track_Phi, &b_Track_Phi);
   fChain->SetBranchAddress("Track.CtgTheta", Track_CtgTheta, &b_Track_CtgTheta);
   fChain->SetBranchAddress("Track.C", Track_C, &b_Track_C);
   fChain->SetBranchAddress("Track.Mass", Track_Mass, &b_Track_Mass);
   fChain->SetBranchAddress("Track.EtaOuter", Track_EtaOuter, &b_Track_EtaOuter);
   fChain->SetBranchAddress("Track.PhiOuter", Track_PhiOuter, &b_Track_PhiOuter);
   fChain->SetBranchAddress("Track.T", Track_T, &b_Track_T);
   fChain->SetBranchAddress("Track.X", Track_X, &b_Track_X);
   fChain->SetBranchAddress("Track.Y", Track_Y, &b_Track_Y);
   fChain->SetBranchAddress("Track.Z", Track_Z, &b_Track_Z);
   fChain->SetBranchAddress("Track.TOuter", Track_TOuter, &b_Track_TOuter);
   fChain->SetBranchAddress("Track.XOuter", Track_XOuter, &b_Track_XOuter);
   fChain->SetBranchAddress("Track.YOuter", Track_YOuter, &b_Track_YOuter);
   fChain->SetBranchAddress("Track.ZOuter", Track_ZOuter, &b_Track_ZOuter);
   fChain->SetBranchAddress("Track.Xd", Track_Xd, &b_Track_Xd);
   fChain->SetBranchAddress("Track.Yd", Track_Yd, &b_Track_Yd);
   fChain->SetBranchAddress("Track.Zd", Track_Zd, &b_Track_Zd);
   fChain->SetBranchAddress("Track.XFirstHit", Track_XFirstHit, &b_Track_XFirstHit);
   fChain->SetBranchAddress("Track.YFirstHit", Track_YFirstHit, &b_Track_YFirstHit);
   fChain->SetBranchAddress("Track.ZFirstHit", Track_ZFirstHit, &b_Track_ZFirstHit);
   fChain->SetBranchAddress("Track.L", Track_L, &b_Track_L);
   fChain->SetBranchAddress("Track.D0", Track_D0, &b_Track_D0);
   fChain->SetBranchAddress("Track.DZ", Track_DZ, &b_Track_DZ);
   fChain->SetBranchAddress("Track.Nclusters", Track_Nclusters, &b_Track_Nclusters);
   fChain->SetBranchAddress("Track.dNdx", Track_dNdx, &b_Track_dNdx);
   fChain->SetBranchAddress("Track.ErrorP", Track_ErrorP, &b_Track_ErrorP);
   fChain->SetBranchAddress("Track.ErrorPT", Track_ErrorPT, &b_Track_ErrorPT);
   fChain->SetBranchAddress("Track.ErrorPhi", Track_ErrorPhi, &b_Track_ErrorPhi);
   fChain->SetBranchAddress("Track.ErrorCtgTheta", Track_ErrorCtgTheta, &b_Track_ErrorCtgTheta);
   fChain->SetBranchAddress("Track.ErrorT", Track_ErrorT, &b_Track_ErrorT);
   fChain->SetBranchAddress("Track.ErrorD0", Track_ErrorD0, &b_Track_ErrorD0);
   fChain->SetBranchAddress("Track.ErrorDZ", Track_ErrorDZ, &b_Track_ErrorDZ);
   fChain->SetBranchAddress("Track.ErrorC", Track_ErrorC, &b_Track_ErrorC);
   fChain->SetBranchAddress("Track.ErrorD0Phi", Track_ErrorD0Phi, &b_Track_ErrorD0Phi);
   fChain->SetBranchAddress("Track.ErrorD0C", Track_ErrorD0C, &b_Track_ErrorD0C);
   fChain->SetBranchAddress("Track.ErrorD0DZ", Track_ErrorD0DZ, &b_Track_ErrorD0DZ);
   fChain->SetBranchAddress("Track.ErrorD0CtgTheta", Track_ErrorD0CtgTheta, &b_Track_ErrorD0CtgTheta);
   fChain->SetBranchAddress("Track.ErrorPhiC", Track_ErrorPhiC, &b_Track_ErrorPhiC);
   fChain->SetBranchAddress("Track.ErrorPhiDZ", Track_ErrorPhiDZ, &b_Track_ErrorPhiDZ);
   fChain->SetBranchAddress("Track.ErrorPhiCtgTheta", Track_ErrorPhiCtgTheta, &b_Track_ErrorPhiCtgTheta);
   fChain->SetBranchAddress("Track.ErrorCDZ", Track_ErrorCDZ, &b_Track_ErrorCDZ);
   fChain->SetBranchAddress("Track.ErrorCCtgTheta", Track_ErrorCCtgTheta, &b_Track_ErrorCCtgTheta);
   fChain->SetBranchAddress("Track.ErrorDZCtgTheta", Track_ErrorDZCtgTheta, &b_Track_ErrorDZCtgTheta);
   fChain->SetBranchAddress("Track.Particle", Track_Particle, &b_Track_Particle);
   fChain->SetBranchAddress("Track.VertexIndex", Track_VertexIndex, &b_Track_VertexIndex);
   fChain->SetBranchAddress("Track_size", &Track_size, &b_Track_size);
   fChain->SetBranchAddress("EFlowPhoton", &EFlowPhoton_, &b_EFlowPhoton_);
   fChain->SetBranchAddress("EFlowPhoton.fUniqueID", EFlowPhoton_fUniqueID, &b_EFlowPhoton_fUniqueID);
   fChain->SetBranchAddress("EFlowPhoton.fBits", EFlowPhoton_fBits, &b_EFlowPhoton_fBits);
   fChain->SetBranchAddress("EFlowPhoton.ET", EFlowPhoton_ET, &b_EFlowPhoton_ET);
   fChain->SetBranchAddress("EFlowPhoton.Eta", EFlowPhoton_Eta, &b_EFlowPhoton_Eta);
   fChain->SetBranchAddress("EFlowPhoton.Phi", EFlowPhoton_Phi, &b_EFlowPhoton_Phi);
   fChain->SetBranchAddress("EFlowPhoton.E", EFlowPhoton_E, &b_EFlowPhoton_E);
   fChain->SetBranchAddress("EFlowPhoton.T", EFlowPhoton_T, &b_EFlowPhoton_T);
   fChain->SetBranchAddress("EFlowPhoton.X", EFlowPhoton_X, &b_EFlowPhoton_X);
   fChain->SetBranchAddress("EFlowPhoton.Y", EFlowPhoton_Y, &b_EFlowPhoton_Y);
   fChain->SetBranchAddress("EFlowPhoton.Z", EFlowPhoton_Z, &b_EFlowPhoton_Z);
   fChain->SetBranchAddress("EFlowPhoton.NTimeHits", EFlowPhoton_NTimeHits, &b_EFlowPhoton_NTimeHits);
   fChain->SetBranchAddress("EFlowPhoton.Eem", EFlowPhoton_Eem, &b_EFlowPhoton_Eem);
   fChain->SetBranchAddress("EFlowPhoton.Ehad", EFlowPhoton_Ehad, &b_EFlowPhoton_Ehad);
   fChain->SetBranchAddress("EFlowPhoton.Etrk", EFlowPhoton_Etrk, &b_EFlowPhoton_Etrk);
   fChain->SetBranchAddress("EFlowPhoton.Edges[4]", EFlowPhoton_Edges, &b_EFlowPhoton_Edges);
   fChain->SetBranchAddress("EFlowPhoton.IsPU", EFlowPhoton_IsPU, &b_EFlowPhoton_IsPU);
   fChain->SetBranchAddress("EFlowPhoton.IsRecoPU", EFlowPhoton_IsRecoPU, &b_EFlowPhoton_IsRecoPU);
   fChain->SetBranchAddress("EFlowPhoton.HardEnergyFraction", EFlowPhoton_HardEnergyFraction, &b_EFlowPhoton_HardEnergyFraction);
   fChain->SetBranchAddress("EFlowPhoton.Particles", EFlowPhoton_Particles, &b_EFlowPhoton_Particles);
   fChain->SetBranchAddress("EFlowPhoton_size", &EFlowPhoton_size, &b_EFlowPhoton_size);
   fChain->SetBranchAddress("EFlowNeutralHadron", &EFlowNeutralHadron_, &b_EFlowNeutralHadron_);
   fChain->SetBranchAddress("EFlowNeutralHadron.fUniqueID", EFlowNeutralHadron_fUniqueID, &b_EFlowNeutralHadron_fUniqueID);
   fChain->SetBranchAddress("EFlowNeutralHadron.fBits", EFlowNeutralHadron_fBits, &b_EFlowNeutralHadron_fBits);
   fChain->SetBranchAddress("EFlowNeutralHadron.ET", EFlowNeutralHadron_ET, &b_EFlowNeutralHadron_ET);
   fChain->SetBranchAddress("EFlowNeutralHadron.Eta", EFlowNeutralHadron_Eta, &b_EFlowNeutralHadron_Eta);
   fChain->SetBranchAddress("EFlowNeutralHadron.Phi", EFlowNeutralHadron_Phi, &b_EFlowNeutralHadron_Phi);
   fChain->SetBranchAddress("EFlowNeutralHadron.E", EFlowNeutralHadron_E, &b_EFlowNeutralHadron_E);
   fChain->SetBranchAddress("EFlowNeutralHadron.T", EFlowNeutralHadron_T, &b_EFlowNeutralHadron_T);
   fChain->SetBranchAddress("EFlowNeutralHadron.X", EFlowNeutralHadron_X, &b_EFlowNeutralHadron_X);
   fChain->SetBranchAddress("EFlowNeutralHadron.Y", EFlowNeutralHadron_Y, &b_EFlowNeutralHadron_Y);
   fChain->SetBranchAddress("EFlowNeutralHadron.Z", EFlowNeutralHadron_Z, &b_EFlowNeutralHadron_Z);
   fChain->SetBranchAddress("EFlowNeutralHadron.NTimeHits", EFlowNeutralHadron_NTimeHits, &b_EFlowNeutralHadron_NTimeHits);
   fChain->SetBranchAddress("EFlowNeutralHadron.Eem", EFlowNeutralHadron_Eem, &b_EFlowNeutralHadron_Eem);
   fChain->SetBranchAddress("EFlowNeutralHadron.Ehad", EFlowNeutralHadron_Ehad, &b_EFlowNeutralHadron_Ehad);
   fChain->SetBranchAddress("EFlowNeutralHadron.Etrk", EFlowNeutralHadron_Etrk, &b_EFlowNeutralHadron_Etrk);
   fChain->SetBranchAddress("EFlowNeutralHadron.Edges[4]", EFlowNeutralHadron_Edges, &b_EFlowNeutralHadron_Edges);
   fChain->SetBranchAddress("EFlowNeutralHadron.IsPU", EFlowNeutralHadron_IsPU, &b_EFlowNeutralHadron_IsPU);
   fChain->SetBranchAddress("EFlowNeutralHadron.IsRecoPU", EFlowNeutralHadron_IsRecoPU, &b_EFlowNeutralHadron_IsRecoPU);
   fChain->SetBranchAddress("EFlowNeutralHadron.HardEnergyFraction", EFlowNeutralHadron_HardEnergyFraction, &b_EFlowNeutralHadron_HardEnergyFraction);
   fChain->SetBranchAddress("EFlowNeutralHadron.Particles", EFlowNeutralHadron_Particles, &b_EFlowNeutralHadron_Particles);
   fChain->SetBranchAddress("EFlowNeutralHadron_size", &EFlowNeutralHadron_size, &b_EFlowNeutralHadron_size);
   fChain->SetBranchAddress("ParticleFlowCandidate", &ParticleFlowCandidate_, &b_ParticleFlowCandidate_);
   fChain->SetBranchAddress("ParticleFlowCandidate.fUniqueID", ParticleFlowCandidate_fUniqueID, &b_ParticleFlowCandidate_fUniqueID);
   fChain->SetBranchAddress("ParticleFlowCandidate.fBits", ParticleFlowCandidate_fBits, &b_ParticleFlowCandidate_fBits);
   fChain->SetBranchAddress("ParticleFlowCandidate.PID", ParticleFlowCandidate_PID, &b_ParticleFlowCandidate_PID);
   fChain->SetBranchAddress("ParticleFlowCandidate.Charge", ParticleFlowCandidate_Charge, &b_ParticleFlowCandidate_Charge);
   fChain->SetBranchAddress("ParticleFlowCandidate.IsPU", ParticleFlowCandidate_IsPU, &b_ParticleFlowCandidate_IsPU);
   fChain->SetBranchAddress("ParticleFlowCandidate.IsRecoPU", ParticleFlowCandidate_IsRecoPU, &b_ParticleFlowCandidate_IsRecoPU);
   fChain->SetBranchAddress("ParticleFlowCandidate.HardEnergyFraction", ParticleFlowCandidate_HardEnergyFraction, &b_ParticleFlowCandidate_HardEnergyFraction);
   fChain->SetBranchAddress("ParticleFlowCandidate.E", ParticleFlowCandidate_E, &b_ParticleFlowCandidate_E);
   fChain->SetBranchAddress("ParticleFlowCandidate.P", ParticleFlowCandidate_P, &b_ParticleFlowCandidate_P);
   fChain->SetBranchAddress("ParticleFlowCandidate.PT", ParticleFlowCandidate_PT, &b_ParticleFlowCandidate_PT);
   fChain->SetBranchAddress("ParticleFlowCandidate.Eta", ParticleFlowCandidate_Eta, &b_ParticleFlowCandidate_Eta);
   fChain->SetBranchAddress("ParticleFlowCandidate.Phi", ParticleFlowCandidate_Phi, &b_ParticleFlowCandidate_Phi);
   fChain->SetBranchAddress("ParticleFlowCandidate.CtgTheta", ParticleFlowCandidate_CtgTheta, &b_ParticleFlowCandidate_CtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.C", ParticleFlowCandidate_C, &b_ParticleFlowCandidate_C);
   fChain->SetBranchAddress("ParticleFlowCandidate.Mass", ParticleFlowCandidate_Mass, &b_ParticleFlowCandidate_Mass);
   fChain->SetBranchAddress("ParticleFlowCandidate.EtaOuter", ParticleFlowCandidate_EtaOuter, &b_ParticleFlowCandidate_EtaOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.PhiOuter", ParticleFlowCandidate_PhiOuter, &b_ParticleFlowCandidate_PhiOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.T", ParticleFlowCandidate_T, &b_ParticleFlowCandidate_T);
   fChain->SetBranchAddress("ParticleFlowCandidate.X", ParticleFlowCandidate_X, &b_ParticleFlowCandidate_X);
   fChain->SetBranchAddress("ParticleFlowCandidate.Y", ParticleFlowCandidate_Y, &b_ParticleFlowCandidate_Y);
   fChain->SetBranchAddress("ParticleFlowCandidate.Z", ParticleFlowCandidate_Z, &b_ParticleFlowCandidate_Z);
   fChain->SetBranchAddress("ParticleFlowCandidate.TOuter", ParticleFlowCandidate_TOuter, &b_ParticleFlowCandidate_TOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.XOuter", ParticleFlowCandidate_XOuter, &b_ParticleFlowCandidate_XOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.YOuter", ParticleFlowCandidate_YOuter, &b_ParticleFlowCandidate_YOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.ZOuter", ParticleFlowCandidate_ZOuter, &b_ParticleFlowCandidate_ZOuter);
   fChain->SetBranchAddress("ParticleFlowCandidate.Xd", ParticleFlowCandidate_Xd, &b_ParticleFlowCandidate_Xd);
   fChain->SetBranchAddress("ParticleFlowCandidate.Yd", ParticleFlowCandidate_Yd, &b_ParticleFlowCandidate_Yd);
   fChain->SetBranchAddress("ParticleFlowCandidate.Zd", ParticleFlowCandidate_Zd, &b_ParticleFlowCandidate_Zd);
   fChain->SetBranchAddress("ParticleFlowCandidate.XFirstHit", ParticleFlowCandidate_XFirstHit, &b_ParticleFlowCandidate_XFirstHit);
   fChain->SetBranchAddress("ParticleFlowCandidate.YFirstHit", ParticleFlowCandidate_YFirstHit, &b_ParticleFlowCandidate_YFirstHit);
   fChain->SetBranchAddress("ParticleFlowCandidate.ZFirstHit", ParticleFlowCandidate_ZFirstHit, &b_ParticleFlowCandidate_ZFirstHit);
   fChain->SetBranchAddress("ParticleFlowCandidate.L", ParticleFlowCandidate_L, &b_ParticleFlowCandidate_L);
   fChain->SetBranchAddress("ParticleFlowCandidate.D0", ParticleFlowCandidate_D0, &b_ParticleFlowCandidate_D0);
   fChain->SetBranchAddress("ParticleFlowCandidate.DZ", ParticleFlowCandidate_DZ, &b_ParticleFlowCandidate_DZ);
   fChain->SetBranchAddress("ParticleFlowCandidate.Nclusters", ParticleFlowCandidate_Nclusters, &b_ParticleFlowCandidate_Nclusters);
   fChain->SetBranchAddress("ParticleFlowCandidate.dNdx", ParticleFlowCandidate_dNdx, &b_ParticleFlowCandidate_dNdx);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorP", ParticleFlowCandidate_ErrorP, &b_ParticleFlowCandidate_ErrorP);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorPT", ParticleFlowCandidate_ErrorPT, &b_ParticleFlowCandidate_ErrorPT);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorPhi", ParticleFlowCandidate_ErrorPhi, &b_ParticleFlowCandidate_ErrorPhi);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorCtgTheta", ParticleFlowCandidate_ErrorCtgTheta, &b_ParticleFlowCandidate_ErrorCtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorT", ParticleFlowCandidate_ErrorT, &b_ParticleFlowCandidate_ErrorT);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorD0", ParticleFlowCandidate_ErrorD0, &b_ParticleFlowCandidate_ErrorD0);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorDZ", ParticleFlowCandidate_ErrorDZ, &b_ParticleFlowCandidate_ErrorDZ);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorC", ParticleFlowCandidate_ErrorC, &b_ParticleFlowCandidate_ErrorC);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorD0Phi", ParticleFlowCandidate_ErrorD0Phi, &b_ParticleFlowCandidate_ErrorD0Phi);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorD0C", ParticleFlowCandidate_ErrorD0C, &b_ParticleFlowCandidate_ErrorD0C);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorD0DZ", ParticleFlowCandidate_ErrorD0DZ, &b_ParticleFlowCandidate_ErrorD0DZ);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorD0CtgTheta", ParticleFlowCandidate_ErrorD0CtgTheta, &b_ParticleFlowCandidate_ErrorD0CtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorPhiC", ParticleFlowCandidate_ErrorPhiC, &b_ParticleFlowCandidate_ErrorPhiC);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorPhiDZ", ParticleFlowCandidate_ErrorPhiDZ, &b_ParticleFlowCandidate_ErrorPhiDZ);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorPhiCtgTheta", ParticleFlowCandidate_ErrorPhiCtgTheta, &b_ParticleFlowCandidate_ErrorPhiCtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorCDZ", ParticleFlowCandidate_ErrorCDZ, &b_ParticleFlowCandidate_ErrorCDZ);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorCCtgTheta", ParticleFlowCandidate_ErrorCCtgTheta, &b_ParticleFlowCandidate_ErrorCCtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.ErrorDZCtgTheta", ParticleFlowCandidate_ErrorDZCtgTheta, &b_ParticleFlowCandidate_ErrorDZCtgTheta);
   fChain->SetBranchAddress("ParticleFlowCandidate.VertexIndex", ParticleFlowCandidate_VertexIndex, &b_ParticleFlowCandidate_VertexIndex);
   fChain->SetBranchAddress("ParticleFlowCandidate.NTimeHits", ParticleFlowCandidate_NTimeHits, &b_ParticleFlowCandidate_NTimeHits);
   fChain->SetBranchAddress("ParticleFlowCandidate.Eem", ParticleFlowCandidate_Eem, &b_ParticleFlowCandidate_Eem);
   fChain->SetBranchAddress("ParticleFlowCandidate.Ehad", ParticleFlowCandidate_Ehad, &b_ParticleFlowCandidate_Ehad);
   fChain->SetBranchAddress("ParticleFlowCandidate.Etrk", ParticleFlowCandidate_Etrk, &b_ParticleFlowCandidate_Etrk);
   fChain->SetBranchAddress("ParticleFlowCandidate.Edges[4]", ParticleFlowCandidate_Edges, &b_ParticleFlowCandidate_Edges);
   fChain->SetBranchAddress("ParticleFlowCandidate.Particles", ParticleFlowCandidate_Particles, &b_ParticleFlowCandidate_Particles);
   fChain->SetBranchAddress("ParticleFlowCandidate_size", &ParticleFlowCandidate_size, &b_ParticleFlowCandidate_size);
   fChain->SetBranchAddress("Tower", &Tower_, &b_Tower_);
   fChain->SetBranchAddress("Tower.fUniqueID", Tower_fUniqueID, &b_Tower_fUniqueID);
   fChain->SetBranchAddress("Tower.fBits", Tower_fBits, &b_Tower_fBits);
   fChain->SetBranchAddress("Tower.ET", Tower_ET, &b_Tower_ET);
   fChain->SetBranchAddress("Tower.Eta", Tower_Eta, &b_Tower_Eta);
   fChain->SetBranchAddress("Tower.Phi", Tower_Phi, &b_Tower_Phi);
   fChain->SetBranchAddress("Tower.E", Tower_E, &b_Tower_E);
   fChain->SetBranchAddress("Tower.T", Tower_T, &b_Tower_T);
   fChain->SetBranchAddress("Tower.X", Tower_X, &b_Tower_X);
   fChain->SetBranchAddress("Tower.Y", Tower_Y, &b_Tower_Y);
   fChain->SetBranchAddress("Tower.Z", Tower_Z, &b_Tower_Z);
   fChain->SetBranchAddress("Tower.NTimeHits", Tower_NTimeHits, &b_Tower_NTimeHits);
   fChain->SetBranchAddress("Tower.Eem", Tower_Eem, &b_Tower_Eem);
   fChain->SetBranchAddress("Tower.Ehad", Tower_Ehad, &b_Tower_Ehad);
   fChain->SetBranchAddress("Tower.Etrk", Tower_Etrk, &b_Tower_Etrk);
   fChain->SetBranchAddress("Tower.Edges[4]", Tower_Edges, &b_Tower_Edges);
   fChain->SetBranchAddress("Tower.IsPU", Tower_IsPU, &b_Tower_IsPU);
   fChain->SetBranchAddress("Tower.IsRecoPU", Tower_IsRecoPU, &b_Tower_IsRecoPU);
   fChain->SetBranchAddress("Tower.HardEnergyFraction", Tower_HardEnergyFraction, &b_Tower_HardEnergyFraction);
   fChain->SetBranchAddress("Tower.Particles", Tower_Particles, &b_Tower_Particles);
   fChain->SetBranchAddress("Tower_size", &Tower_size, &b_Tower_size);
   fChain->SetBranchAddress("Electron", &Electron_, &b_Electron_);
   fChain->SetBranchAddress("Electron.fUniqueID", Electron_fUniqueID, &b_Electron_fUniqueID);
   fChain->SetBranchAddress("Electron.fBits", Electron_fBits, &b_Electron_fBits);
   fChain->SetBranchAddress("Electron.PT", Electron_PT, &b_Electron_PT);
   fChain->SetBranchAddress("Electron.Eta", Electron_Eta, &b_Electron_Eta);
   fChain->SetBranchAddress("Electron.Phi", Electron_Phi, &b_Electron_Phi);
   fChain->SetBranchAddress("Electron.T", Electron_T, &b_Electron_T);
   fChain->SetBranchAddress("Electron.Charge", Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron.EhadOverEem", Electron_EhadOverEem, &b_Electron_EhadOverEem);
   fChain->SetBranchAddress("Electron.Particle", Electron_Particle, &b_Electron_Particle);
   fChain->SetBranchAddress("Electron.IsolationVar", Electron_IsolationVar, &b_Electron_IsolationVar);
   fChain->SetBranchAddress("Electron.IsolationVarRhoCorr", Electron_IsolationVarRhoCorr, &b_Electron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Electron.SumPtCharged", Electron_SumPtCharged, &b_Electron_SumPtCharged);
   fChain->SetBranchAddress("Electron.SumPtNeutral", Electron_SumPtNeutral, &b_Electron_SumPtNeutral);
   fChain->SetBranchAddress("Electron.SumPtChargedPU", Electron_SumPtChargedPU, &b_Electron_SumPtChargedPU);
   fChain->SetBranchAddress("Electron.SumPt", Electron_SumPt, &b_Electron_SumPt);
   fChain->SetBranchAddress("Electron.D0", Electron_D0, &b_Electron_D0);
   fChain->SetBranchAddress("Electron.DZ", Electron_DZ, &b_Electron_DZ);
   fChain->SetBranchAddress("Electron.ErrorD0", Electron_ErrorD0, &b_Electron_ErrorD0);
   fChain->SetBranchAddress("Electron.ErrorDZ", Electron_ErrorDZ, &b_Electron_ErrorDZ);
   fChain->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.T", Muon_T, &b_Muon_T);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon.Particle", Muon_Particle, &b_Muon_Particle);
   fChain->SetBranchAddress("Muon.IsolationVar", Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Muon.IsolationVarRhoCorr", Muon_IsolationVarRhoCorr, &b_Muon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Muon.SumPtCharged", Muon_SumPtCharged, &b_Muon_SumPtCharged);
   fChain->SetBranchAddress("Muon.SumPtNeutral", Muon_SumPtNeutral, &b_Muon_SumPtNeutral);
   fChain->SetBranchAddress("Muon.SumPtChargedPU", Muon_SumPtChargedPU, &b_Muon_SumPtChargedPU);
   fChain->SetBranchAddress("Muon.SumPt", Muon_SumPt, &b_Muon_SumPt);
   fChain->SetBranchAddress("Muon.D0", Muon_D0, &b_Muon_D0);
   fChain->SetBranchAddress("Muon.DZ", Muon_DZ, &b_Muon_DZ);
   fChain->SetBranchAddress("Muon.ErrorD0", Muon_ErrorD0, &b_Muon_ErrorD0);
   fChain->SetBranchAddress("Muon.ErrorDZ", Muon_ErrorDZ, &b_Muon_ErrorDZ);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.E", Photon_E, &b_Photon_E);
   fChain->SetBranchAddress("Photon.T", Photon_T, &b_Photon_T);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   fChain->SetBranchAddress("Photon.Particles", Photon_Particles, &b_Photon_Particles);
   fChain->SetBranchAddress("Photon.IsolationVar", Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("Photon.IsolationVarRhoCorr", Photon_IsolationVarRhoCorr, &b_Photon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Photon.SumPtCharged", Photon_SumPtCharged, &b_Photon_SumPtCharged);
   fChain->SetBranchAddress("Photon.SumPtNeutral", Photon_SumPtNeutral, &b_Photon_SumPtNeutral);
   fChain->SetBranchAddress("Photon.SumPtChargedPU", Photon_SumPtChargedPU, &b_Photon_SumPtChargedPU);
   fChain->SetBranchAddress("Photon.SumPt", Photon_SumPt, &b_Photon_SumPt);
   fChain->SetBranchAddress("Photon.Status", Photon_Status, &b_Photon_Status);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.T", Jet_T, &b_Jet_T);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.DeltaEta", Jet_DeltaEta, &b_Jet_DeltaEta);
   fChain->SetBranchAddress("Jet.DeltaPhi", Jet_DeltaPhi, &b_Jet_DeltaPhi);
   fChain->SetBranchAddress("Jet.Flavor", Jet_Flavor, &b_Jet_Flavor);
   fChain->SetBranchAddress("Jet.FlavorAlgo", Jet_FlavorAlgo, &b_Jet_FlavorAlgo);
   fChain->SetBranchAddress("Jet.FlavorPhys", Jet_FlavorPhys, &b_Jet_FlavorPhys);
   fChain->SetBranchAddress("Jet.TauFlavor", Jet_TauFlavor, &b_Jet_TauFlavor);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.BTagAlgo", Jet_BTagAlgo, &b_Jet_BTagAlgo);
   fChain->SetBranchAddress("Jet.BTagPhys", Jet_BTagPhys, &b_Jet_BTagPhys);
   fChain->SetBranchAddress("Jet.TauTag", Jet_TauTag, &b_Jet_TauTag);
   fChain->SetBranchAddress("Jet.TauWeight", Jet_TauWeight, &b_Jet_TauWeight);
   fChain->SetBranchAddress("Jet.Charge", Jet_Charge, &b_Jet_Charge);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.NCharged", Jet_NCharged, &b_Jet_NCharged);
   fChain->SetBranchAddress("Jet.NNeutrals", Jet_NNeutrals, &b_Jet_NNeutrals);
   fChain->SetBranchAddress("Jet.NeutralEnergyFraction", Jet_NeutralEnergyFraction, &b_Jet_NeutralEnergyFraction);
   fChain->SetBranchAddress("Jet.ChargedEnergyFraction", Jet_ChargedEnergyFraction, &b_Jet_ChargedEnergyFraction);
   fChain->SetBranchAddress("Jet.Beta", Jet_Beta, &b_Jet_Beta);
   fChain->SetBranchAddress("Jet.BetaStar", Jet_BetaStar, &b_Jet_BetaStar);
   fChain->SetBranchAddress("Jet.MeanSqDeltaR", Jet_MeanSqDeltaR, &b_Jet_MeanSqDeltaR);
   fChain->SetBranchAddress("Jet.PTD", Jet_PTD, &b_Jet_PTD);
   fChain->SetBranchAddress("Jet.FracPt[5]", Jet_FracPt, &b_Jet_FracPt);
   fChain->SetBranchAddress("Jet.Tau[5]", Jet_Tau, &b_Jet_Tau);
   fChain->SetBranchAddress("Jet.SoftDroppedJet", Jet_SoftDroppedJet, &b_Jet_SoftDroppedJet);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet1", Jet_SoftDroppedSubJet1, &b_Jet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("Jet.SoftDroppedSubJet2", Jet_SoftDroppedSubJet2, &b_Jet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("Jet.TrimmedP4[5]", Jet_TrimmedP4, &b_Jet_TrimmedP4);
   fChain->SetBranchAddress("Jet.PrunedP4[5]", Jet_PrunedP4, &b_Jet_PrunedP4);
   fChain->SetBranchAddress("Jet.SoftDroppedP4[5]", Jet_SoftDroppedP4, &b_Jet_SoftDroppedP4);
   fChain->SetBranchAddress("Jet.NSubJetsTrimmed", Jet_NSubJetsTrimmed, &b_Jet_NSubJetsTrimmed);
   fChain->SetBranchAddress("Jet.NSubJetsPruned", Jet_NSubJetsPruned, &b_Jet_NSubJetsPruned);
   fChain->SetBranchAddress("Jet.NSubJetsSoftDropped", Jet_NSubJetsSoftDropped, &b_Jet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("Jet.ExclYmerge12", Jet_ExclYmerge12, &b_Jet_ExclYmerge12);
   fChain->SetBranchAddress("Jet.ExclYmerge23", Jet_ExclYmerge23, &b_Jet_ExclYmerge23);
   fChain->SetBranchAddress("Jet.ExclYmerge34", Jet_ExclYmerge34, &b_Jet_ExclYmerge34);
   fChain->SetBranchAddress("Jet.ExclYmerge45", Jet_ExclYmerge45, &b_Jet_ExclYmerge45);
   fChain->SetBranchAddress("Jet.ExclYmerge56", Jet_ExclYmerge56, &b_Jet_ExclYmerge56);
   fChain->SetBranchAddress("Jet.Constituents", Jet_Constituents, &b_Jet_Constituents);
   fChain->SetBranchAddress("Jet.Particles", Jet_Particles, &b_Jet_Particles);
   fChain->SetBranchAddress("Jet.Area", Jet_Area, &b_Jet_Area);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("MissingET", &MissingET_, &b_MissingET_);
   fChain->SetBranchAddress("MissingET.fUniqueID", MissingET_fUniqueID, &b_MissingET_fUniqueID);
   fChain->SetBranchAddress("MissingET.fBits", MissingET_fBits, &b_MissingET_fBits);
   fChain->SetBranchAddress("MissingET.MET", MissingET_MET, &b_MissingET_MET);
   fChain->SetBranchAddress("MissingET.Eta", MissingET_Eta, &b_MissingET_Eta);
   fChain->SetBranchAddress("MissingET.Phi", MissingET_Phi, &b_MissingET_Phi);
   fChain->SetBranchAddress("MissingET_size", &MissingET_size, &b_MissingET_size);
   fChain->SetBranchAddress("GenJet", &GenJet_, &b_GenJet_);
   fChain->SetBranchAddress("GenJet.fUniqueID", GenJet_fUniqueID, &b_GenJet_fUniqueID);
   fChain->SetBranchAddress("GenJet.fBits", GenJet_fBits, &b_GenJet_fBits);
   fChain->SetBranchAddress("GenJet.PT", GenJet_PT, &b_GenJet_PT);
   fChain->SetBranchAddress("GenJet.Eta", GenJet_Eta, &b_GenJet_Eta);
   fChain->SetBranchAddress("GenJet.Phi", GenJet_Phi, &b_GenJet_Phi);
   fChain->SetBranchAddress("GenJet.T", GenJet_T, &b_GenJet_T);
   fChain->SetBranchAddress("GenJet.Mass", GenJet_Mass, &b_GenJet_Mass);
   fChain->SetBranchAddress("GenJet.DeltaEta", GenJet_DeltaEta, &b_GenJet_DeltaEta);
   fChain->SetBranchAddress("GenJet.DeltaPhi", GenJet_DeltaPhi, &b_GenJet_DeltaPhi);
   fChain->SetBranchAddress("GenJet.Flavor", GenJet_Flavor, &b_GenJet_Flavor);
   fChain->SetBranchAddress("GenJet.FlavorAlgo", GenJet_FlavorAlgo, &b_GenJet_FlavorAlgo);
   fChain->SetBranchAddress("GenJet.FlavorPhys", GenJet_FlavorPhys, &b_GenJet_FlavorPhys);
   fChain->SetBranchAddress("GenJet.TauFlavor", GenJet_TauFlavor, &b_GenJet_TauFlavor);
   fChain->SetBranchAddress("GenJet.BTag", GenJet_BTag, &b_GenJet_BTag);
   fChain->SetBranchAddress("GenJet.BTagAlgo", GenJet_BTagAlgo, &b_GenJet_BTagAlgo);
   fChain->SetBranchAddress("GenJet.BTagPhys", GenJet_BTagPhys, &b_GenJet_BTagPhys);
   fChain->SetBranchAddress("GenJet.TauTag", GenJet_TauTag, &b_GenJet_TauTag);
   fChain->SetBranchAddress("GenJet.TauWeight", GenJet_TauWeight, &b_GenJet_TauWeight);
   fChain->SetBranchAddress("GenJet.Charge", GenJet_Charge, &b_GenJet_Charge);
   fChain->SetBranchAddress("GenJet.EhadOverEem", GenJet_EhadOverEem, &b_GenJet_EhadOverEem);
   fChain->SetBranchAddress("GenJet.NCharged", GenJet_NCharged, &b_GenJet_NCharged);
   fChain->SetBranchAddress("GenJet.NNeutrals", GenJet_NNeutrals, &b_GenJet_NNeutrals);
   fChain->SetBranchAddress("GenJet.NeutralEnergyFraction", GenJet_NeutralEnergyFraction, &b_GenJet_NeutralEnergyFraction);
   fChain->SetBranchAddress("GenJet.ChargedEnergyFraction", GenJet_ChargedEnergyFraction, &b_GenJet_ChargedEnergyFraction);
   fChain->SetBranchAddress("GenJet.Beta", GenJet_Beta, &b_GenJet_Beta);
   fChain->SetBranchAddress("GenJet.BetaStar", GenJet_BetaStar, &b_GenJet_BetaStar);
   fChain->SetBranchAddress("GenJet.MeanSqDeltaR", GenJet_MeanSqDeltaR, &b_GenJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenJet.PTD", GenJet_PTD, &b_GenJet_PTD);
   fChain->SetBranchAddress("GenJet.FracPt[5]", GenJet_FracPt, &b_GenJet_FracPt);
   fChain->SetBranchAddress("GenJet.Tau[5]", GenJet_Tau, &b_GenJet_Tau);
   fChain->SetBranchAddress("GenJet.SoftDroppedJet", GenJet_SoftDroppedJet, &b_GenJet_SoftDroppedJet);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet1", GenJet_SoftDroppedSubJet1, &b_GenJet_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenJet.SoftDroppedSubJet2", GenJet_SoftDroppedSubJet2, &b_GenJet_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenJet.TrimmedP4[5]", GenJet_TrimmedP4, &b_GenJet_TrimmedP4);
   fChain->SetBranchAddress("GenJet.PrunedP4[5]", GenJet_PrunedP4, &b_GenJet_PrunedP4);
   fChain->SetBranchAddress("GenJet.SoftDroppedP4[5]", GenJet_SoftDroppedP4, &b_GenJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenJet.NSubJetsTrimmed", GenJet_NSubJetsTrimmed, &b_GenJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenJet.NSubJetsPruned", GenJet_NSubJetsPruned, &b_GenJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenJet.NSubJetsSoftDropped", GenJet_NSubJetsSoftDropped, &b_GenJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenJet.ExclYmerge12", GenJet_ExclYmerge12, &b_GenJet_ExclYmerge12);
   fChain->SetBranchAddress("GenJet.ExclYmerge23", GenJet_ExclYmerge23, &b_GenJet_ExclYmerge23);
   fChain->SetBranchAddress("GenJet.ExclYmerge34", GenJet_ExclYmerge34, &b_GenJet_ExclYmerge34);
   fChain->SetBranchAddress("GenJet.ExclYmerge45", GenJet_ExclYmerge45, &b_GenJet_ExclYmerge45);
   fChain->SetBranchAddress("GenJet.ExclYmerge56", GenJet_ExclYmerge56, &b_GenJet_ExclYmerge56);
   fChain->SetBranchAddress("GenJet.Constituents", GenJet_Constituents, &b_GenJet_Constituents);
   fChain->SetBranchAddress("GenJet.Particles", GenJet_Particles, &b_GenJet_Particles);
   fChain->SetBranchAddress("GenJet.Area", GenJet_Area, &b_GenJet_Area);
   fChain->SetBranchAddress("GenJet_size", &GenJet_size, &b_GenJet_size);
   fChain->SetBranchAddress("GenMissingET", &GenMissingET_, &b_GenMissingET_);
   fChain->SetBranchAddress("GenMissingET.fUniqueID", GenMissingET_fUniqueID, &b_GenMissingET_fUniqueID);
   fChain->SetBranchAddress("GenMissingET.fBits", GenMissingET_fBits, &b_GenMissingET_fBits);
   fChain->SetBranchAddress("GenMissingET.MET", GenMissingET_MET, &b_GenMissingET_MET);
   fChain->SetBranchAddress("GenMissingET.Eta", GenMissingET_Eta, &b_GenMissingET_Eta);
   fChain->SetBranchAddress("GenMissingET.Phi", GenMissingET_Phi, &b_GenMissingET_Phi);
   fChain->SetBranchAddress("GenMissingET_size", &GenMissingET_size, &b_GenMissingET_size);
   fChain->SetBranchAddress("GenJetDurhamN2", &GenJetDurhamN2_, &b_GenJetDurhamN2_);
   fChain->SetBranchAddress("GenJetDurhamN2.fUniqueID", GenJetDurhamN2_fUniqueID, &b_GenJetDurhamN2_fUniqueID);
   fChain->SetBranchAddress("GenJetDurhamN2.fBits", GenJetDurhamN2_fBits, &b_GenJetDurhamN2_fBits);
   fChain->SetBranchAddress("GenJetDurhamN2.PT", GenJetDurhamN2_PT, &b_GenJetDurhamN2_PT);
   fChain->SetBranchAddress("GenJetDurhamN2.Eta", GenJetDurhamN2_Eta, &b_GenJetDurhamN2_Eta);
   fChain->SetBranchAddress("GenJetDurhamN2.Phi", GenJetDurhamN2_Phi, &b_GenJetDurhamN2_Phi);
   fChain->SetBranchAddress("GenJetDurhamN2.T", GenJetDurhamN2_T, &b_GenJetDurhamN2_T);
   fChain->SetBranchAddress("GenJetDurhamN2.Mass", GenJetDurhamN2_Mass, &b_GenJetDurhamN2_Mass);
   fChain->SetBranchAddress("GenJetDurhamN2.DeltaEta", GenJetDurhamN2_DeltaEta, &b_GenJetDurhamN2_DeltaEta);
   fChain->SetBranchAddress("GenJetDurhamN2.DeltaPhi", GenJetDurhamN2_DeltaPhi, &b_GenJetDurhamN2_DeltaPhi);
   fChain->SetBranchAddress("GenJetDurhamN2.Flavor", GenJetDurhamN2_Flavor, &b_GenJetDurhamN2_Flavor);
   fChain->SetBranchAddress("GenJetDurhamN2.FlavorAlgo", GenJetDurhamN2_FlavorAlgo, &b_GenJetDurhamN2_FlavorAlgo);
   fChain->SetBranchAddress("GenJetDurhamN2.FlavorPhys", GenJetDurhamN2_FlavorPhys, &b_GenJetDurhamN2_FlavorPhys);
   fChain->SetBranchAddress("GenJetDurhamN2.TauFlavor", GenJetDurhamN2_TauFlavor, &b_GenJetDurhamN2_TauFlavor);
   fChain->SetBranchAddress("GenJetDurhamN2.BTag", GenJetDurhamN2_BTag, &b_GenJetDurhamN2_BTag);
   fChain->SetBranchAddress("GenJetDurhamN2.BTagAlgo", GenJetDurhamN2_BTagAlgo, &b_GenJetDurhamN2_BTagAlgo);
   fChain->SetBranchAddress("GenJetDurhamN2.BTagPhys", GenJetDurhamN2_BTagPhys, &b_GenJetDurhamN2_BTagPhys);
   fChain->SetBranchAddress("GenJetDurhamN2.TauTag", GenJetDurhamN2_TauTag, &b_GenJetDurhamN2_TauTag);
   fChain->SetBranchAddress("GenJetDurhamN2.TauWeight", GenJetDurhamN2_TauWeight, &b_GenJetDurhamN2_TauWeight);
   fChain->SetBranchAddress("GenJetDurhamN2.Charge", GenJetDurhamN2_Charge, &b_GenJetDurhamN2_Charge);
   fChain->SetBranchAddress("GenJetDurhamN2.EhadOverEem", GenJetDurhamN2_EhadOverEem, &b_GenJetDurhamN2_EhadOverEem);
   fChain->SetBranchAddress("GenJetDurhamN2.NCharged", GenJetDurhamN2_NCharged, &b_GenJetDurhamN2_NCharged);
   fChain->SetBranchAddress("GenJetDurhamN2.NNeutrals", GenJetDurhamN2_NNeutrals, &b_GenJetDurhamN2_NNeutrals);
   fChain->SetBranchAddress("GenJetDurhamN2.NeutralEnergyFraction", GenJetDurhamN2_NeutralEnergyFraction, &b_GenJetDurhamN2_NeutralEnergyFraction);
   fChain->SetBranchAddress("GenJetDurhamN2.ChargedEnergyFraction", GenJetDurhamN2_ChargedEnergyFraction, &b_GenJetDurhamN2_ChargedEnergyFraction);
   fChain->SetBranchAddress("GenJetDurhamN2.Beta", GenJetDurhamN2_Beta, &b_GenJetDurhamN2_Beta);
   fChain->SetBranchAddress("GenJetDurhamN2.BetaStar", GenJetDurhamN2_BetaStar, &b_GenJetDurhamN2_BetaStar);
   fChain->SetBranchAddress("GenJetDurhamN2.MeanSqDeltaR", GenJetDurhamN2_MeanSqDeltaR, &b_GenJetDurhamN2_MeanSqDeltaR);
   fChain->SetBranchAddress("GenJetDurhamN2.PTD", GenJetDurhamN2_PTD, &b_GenJetDurhamN2_PTD);
   fChain->SetBranchAddress("GenJetDurhamN2.FracPt[5]", GenJetDurhamN2_FracPt, &b_GenJetDurhamN2_FracPt);
   fChain->SetBranchAddress("GenJetDurhamN2.Tau[5]", GenJetDurhamN2_Tau, &b_GenJetDurhamN2_Tau);
   fChain->SetBranchAddress("GenJetDurhamN2.SoftDroppedJet", GenJetDurhamN2_SoftDroppedJet, &b_GenJetDurhamN2_SoftDroppedJet);
   fChain->SetBranchAddress("GenJetDurhamN2.SoftDroppedSubJet1", GenJetDurhamN2_SoftDroppedSubJet1, &b_GenJetDurhamN2_SoftDroppedSubJet1);
   fChain->SetBranchAddress("GenJetDurhamN2.SoftDroppedSubJet2", GenJetDurhamN2_SoftDroppedSubJet2, &b_GenJetDurhamN2_SoftDroppedSubJet2);
   fChain->SetBranchAddress("GenJetDurhamN2.TrimmedP4[5]", GenJetDurhamN2_TrimmedP4, &b_GenJetDurhamN2_TrimmedP4);
   fChain->SetBranchAddress("GenJetDurhamN2.PrunedP4[5]", GenJetDurhamN2_PrunedP4, &b_GenJetDurhamN2_PrunedP4);
   fChain->SetBranchAddress("GenJetDurhamN2.SoftDroppedP4[5]", GenJetDurhamN2_SoftDroppedP4, &b_GenJetDurhamN2_SoftDroppedP4);
   fChain->SetBranchAddress("GenJetDurhamN2.NSubJetsTrimmed", GenJetDurhamN2_NSubJetsTrimmed, &b_GenJetDurhamN2_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenJetDurhamN2.NSubJetsPruned", GenJetDurhamN2_NSubJetsPruned, &b_GenJetDurhamN2_NSubJetsPruned);
   fChain->SetBranchAddress("GenJetDurhamN2.NSubJetsSoftDropped", GenJetDurhamN2_NSubJetsSoftDropped, &b_GenJetDurhamN2_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenJetDurhamN2.ExclYmerge12", GenJetDurhamN2_ExclYmerge12, &b_GenJetDurhamN2_ExclYmerge12);
   fChain->SetBranchAddress("GenJetDurhamN2.ExclYmerge23", GenJetDurhamN2_ExclYmerge23, &b_GenJetDurhamN2_ExclYmerge23);
   fChain->SetBranchAddress("GenJetDurhamN2.ExclYmerge34", GenJetDurhamN2_ExclYmerge34, &b_GenJetDurhamN2_ExclYmerge34);
   fChain->SetBranchAddress("GenJetDurhamN2.ExclYmerge45", GenJetDurhamN2_ExclYmerge45, &b_GenJetDurhamN2_ExclYmerge45);
   fChain->SetBranchAddress("GenJetDurhamN2.ExclYmerge56", GenJetDurhamN2_ExclYmerge56, &b_GenJetDurhamN2_ExclYmerge56);
   fChain->SetBranchAddress("GenJetDurhamN2.Constituents", GenJetDurhamN2_Constituents, &b_GenJetDurhamN2_Constituents);
   fChain->SetBranchAddress("GenJetDurhamN2.Particles", GenJetDurhamN2_Particles, &b_GenJetDurhamN2_Particles);
   fChain->SetBranchAddress("GenJetDurhamN2.Area", GenJetDurhamN2_Area, &b_GenJetDurhamN2_Area);
   fChain->SetBranchAddress("GenJetDurhamN2_size", &GenJetDurhamN2_size, &b_GenJetDurhamN2_size);
   fChain->SetBranchAddress("JetDurhamN2", &JetDurhamN2_, &b_JetDurhamN2_);
   fChain->SetBranchAddress("JetDurhamN2.fUniqueID", JetDurhamN2_fUniqueID, &b_JetDurhamN2_fUniqueID);
   fChain->SetBranchAddress("JetDurhamN2.fBits", JetDurhamN2_fBits, &b_JetDurhamN2_fBits);
   fChain->SetBranchAddress("JetDurhamN2.PT", JetDurhamN2_PT, &b_JetDurhamN2_PT);
   fChain->SetBranchAddress("JetDurhamN2.Eta", JetDurhamN2_Eta, &b_JetDurhamN2_Eta);
   fChain->SetBranchAddress("JetDurhamN2.Phi", JetDurhamN2_Phi, &b_JetDurhamN2_Phi);
   fChain->SetBranchAddress("JetDurhamN2.T", JetDurhamN2_T, &b_JetDurhamN2_T);
   fChain->SetBranchAddress("JetDurhamN2.Mass", JetDurhamN2_Mass, &b_JetDurhamN2_Mass);
   fChain->SetBranchAddress("JetDurhamN2.DeltaEta", JetDurhamN2_DeltaEta, &b_JetDurhamN2_DeltaEta);
   fChain->SetBranchAddress("JetDurhamN2.DeltaPhi", JetDurhamN2_DeltaPhi, &b_JetDurhamN2_DeltaPhi);
   fChain->SetBranchAddress("JetDurhamN2.Flavor", JetDurhamN2_Flavor, &b_JetDurhamN2_Flavor);
   fChain->SetBranchAddress("JetDurhamN2.FlavorAlgo", JetDurhamN2_FlavorAlgo, &b_JetDurhamN2_FlavorAlgo);
   fChain->SetBranchAddress("JetDurhamN2.FlavorPhys", JetDurhamN2_FlavorPhys, &b_JetDurhamN2_FlavorPhys);
   fChain->SetBranchAddress("JetDurhamN2.TauFlavor", JetDurhamN2_TauFlavor, &b_JetDurhamN2_TauFlavor);
   fChain->SetBranchAddress("JetDurhamN2.BTag", JetDurhamN2_BTag, &b_JetDurhamN2_BTag);
   fChain->SetBranchAddress("JetDurhamN2.BTagAlgo", JetDurhamN2_BTagAlgo, &b_JetDurhamN2_BTagAlgo);
   fChain->SetBranchAddress("JetDurhamN2.BTagPhys", JetDurhamN2_BTagPhys, &b_JetDurhamN2_BTagPhys);
   fChain->SetBranchAddress("JetDurhamN2.TauTag", JetDurhamN2_TauTag, &b_JetDurhamN2_TauTag);
   fChain->SetBranchAddress("JetDurhamN2.TauWeight", JetDurhamN2_TauWeight, &b_JetDurhamN2_TauWeight);
   fChain->SetBranchAddress("JetDurhamN2.Charge", JetDurhamN2_Charge, &b_JetDurhamN2_Charge);
   fChain->SetBranchAddress("JetDurhamN2.EhadOverEem", JetDurhamN2_EhadOverEem, &b_JetDurhamN2_EhadOverEem);
   fChain->SetBranchAddress("JetDurhamN2.NCharged", JetDurhamN2_NCharged, &b_JetDurhamN2_NCharged);
   fChain->SetBranchAddress("JetDurhamN2.NNeutrals", JetDurhamN2_NNeutrals, &b_JetDurhamN2_NNeutrals);
   fChain->SetBranchAddress("JetDurhamN2.NeutralEnergyFraction", JetDurhamN2_NeutralEnergyFraction, &b_JetDurhamN2_NeutralEnergyFraction);
   fChain->SetBranchAddress("JetDurhamN2.ChargedEnergyFraction", JetDurhamN2_ChargedEnergyFraction, &b_JetDurhamN2_ChargedEnergyFraction);
   fChain->SetBranchAddress("JetDurhamN2.Beta", JetDurhamN2_Beta, &b_JetDurhamN2_Beta);
   fChain->SetBranchAddress("JetDurhamN2.BetaStar", JetDurhamN2_BetaStar, &b_JetDurhamN2_BetaStar);
   fChain->SetBranchAddress("JetDurhamN2.MeanSqDeltaR", JetDurhamN2_MeanSqDeltaR, &b_JetDurhamN2_MeanSqDeltaR);
   fChain->SetBranchAddress("JetDurhamN2.PTD", JetDurhamN2_PTD, &b_JetDurhamN2_PTD);
   fChain->SetBranchAddress("JetDurhamN2.FracPt[5]", JetDurhamN2_FracPt, &b_JetDurhamN2_FracPt);
   fChain->SetBranchAddress("JetDurhamN2.Tau[5]", JetDurhamN2_Tau, &b_JetDurhamN2_Tau);
   fChain->SetBranchAddress("JetDurhamN2.SoftDroppedJet", JetDurhamN2_SoftDroppedJet, &b_JetDurhamN2_SoftDroppedJet);
   fChain->SetBranchAddress("JetDurhamN2.SoftDroppedSubJet1", JetDurhamN2_SoftDroppedSubJet1, &b_JetDurhamN2_SoftDroppedSubJet1);
   fChain->SetBranchAddress("JetDurhamN2.SoftDroppedSubJet2", JetDurhamN2_SoftDroppedSubJet2, &b_JetDurhamN2_SoftDroppedSubJet2);
   fChain->SetBranchAddress("JetDurhamN2.TrimmedP4[5]", JetDurhamN2_TrimmedP4, &b_JetDurhamN2_TrimmedP4);
   fChain->SetBranchAddress("JetDurhamN2.PrunedP4[5]", JetDurhamN2_PrunedP4, &b_JetDurhamN2_PrunedP4);
   fChain->SetBranchAddress("JetDurhamN2.SoftDroppedP4[5]", JetDurhamN2_SoftDroppedP4, &b_JetDurhamN2_SoftDroppedP4);
   fChain->SetBranchAddress("JetDurhamN2.NSubJetsTrimmed", JetDurhamN2_NSubJetsTrimmed, &b_JetDurhamN2_NSubJetsTrimmed);
   fChain->SetBranchAddress("JetDurhamN2.NSubJetsPruned", JetDurhamN2_NSubJetsPruned, &b_JetDurhamN2_NSubJetsPruned);
   fChain->SetBranchAddress("JetDurhamN2.NSubJetsSoftDropped", JetDurhamN2_NSubJetsSoftDropped, &b_JetDurhamN2_NSubJetsSoftDropped);
   fChain->SetBranchAddress("JetDurhamN2.ExclYmerge12", JetDurhamN2_ExclYmerge12, &b_JetDurhamN2_ExclYmerge12);
   fChain->SetBranchAddress("JetDurhamN2.ExclYmerge23", JetDurhamN2_ExclYmerge23, &b_JetDurhamN2_ExclYmerge23);
   fChain->SetBranchAddress("JetDurhamN2.ExclYmerge34", JetDurhamN2_ExclYmerge34, &b_JetDurhamN2_ExclYmerge34);
   fChain->SetBranchAddress("JetDurhamN2.ExclYmerge45", JetDurhamN2_ExclYmerge45, &b_JetDurhamN2_ExclYmerge45);
   fChain->SetBranchAddress("JetDurhamN2.ExclYmerge56", JetDurhamN2_ExclYmerge56, &b_JetDurhamN2_ExclYmerge56);
   fChain->SetBranchAddress("JetDurhamN2.Constituents", JetDurhamN2_Constituents, &b_JetDurhamN2_Constituents);
   fChain->SetBranchAddress("JetDurhamN2.Particles", JetDurhamN2_Particles, &b_JetDurhamN2_Particles);
   fChain->SetBranchAddress("JetDurhamN2.Area", JetDurhamN2_Area, &b_JetDurhamN2_Area);
   fChain->SetBranchAddress("JetDurhamN2_size", &JetDurhamN2_size, &b_JetDurhamN2_size);
   Notify();
}

Bool_t Delphes::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Delphes::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Delphes::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Delphes_cxx
