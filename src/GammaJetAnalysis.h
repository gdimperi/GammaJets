//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu May 16 15:56:09 2013 by ROOT version 5.32/00
// from TTree AnaTree/Reduced tree for final analysis
// found on file: /xrootdfs/cms/local/crovelli/GammaJets/reduced/redntp.53xv2.cicpfloose.noCorrections.GammaJets_newNtuples_v5/merged/redntp_G_Pt-120to170_TuneZ2star_8TeV_pythia6.root
//////////////////////////////////////////////////////////

#ifndef GammaJetAnalysis_h
#define GammaJetAnalysis_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include "TMVA/Reader.h"

// Fixed size dimensions of array or collections stored in the TTree if any.


class GammaJetAnalysis {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

#include "RedNtpFormat.h"   

   int            sampleIndex;
   TString        sampleName;
   float          sampleSize; //number of original entries before selection
   float          kfac; //kfactor
   float          xsec; //pb
   float          normLumi;//pb^(-1)

   TString mvaWeights_EB;
   TString mvaWeights_EE;

   TString       selectionType;
   // Cuts values                   

   float ptphot1_mincut;
   float ptphot1_maxcut;
/*    int ebcat; */
/*    int r9cat; */
   int hltcut;
   bool hltiso;
   int mvaIDWP;

   bool  isMVAinitialized;

   TFile*         outFile;
   TString        outputFile;

#include "FinalTree.h"   

   bool dopureweight;

   bool isHLT_30(bool isoCut);
   bool isHLT_50(bool isoCut);
   bool isHLT_75(bool isoCut);
   bool isHLT_90(bool isoCut);
   bool isHLT_135();
   bool isHLT_150();
   bool passHLT(bool isoCut);
   int effectiveAreaRegion(float theEta);
   int   isIsolatedGenPhot(const int& phot);
   float isoGen03(const int& phot);
   float GetPUWeight();
   float GetSampleWeight();

   std::vector<int> sortedPtPhotons();
   std::vector<int> sortedPtGenPhotons();
   std::vector<int> preselectedPhotons(const std::vector<int>& photons);
   std::vector<int> selectedPhotons(const std::vector<int>& photons);
   float combinedPfIso03(const int& phot);
   float combinedPfIso03(float isoCharged03, float isoNeutral03, float isoPhoton03, const int& pho);
   float correctedPfIsoCharged03(float* isoCharged03, const int& phot);
   float correctedPfIsoNeutrals03(float* isoNeutral03, const int& phot);
   float correctedPfIsoPhotons03(float* isoPhoton03, const int& phot);

   // To read photon ID MVA
   void SetAllMVA(); 
   Float_t PhotonIDMVA(Int_t iPhoton);

   TTree* finalTree;
   void BookFinalTree();

   void FillTreeEvent(float weight);
   void FillTreePhot(const int& ipho,bool isPreselected, bool isSelected);
   void FillTreeGenPhot(const int& ipho);

   TMVA::Reader *tmvaReaderID_Single_Barrel, *tmvaReaderID_Single_Endcap;
   float tmva_photonid_etawidth, tmva_photonid_phiwidth;
   float tmva_photonid_sieie,    tmva_photonid_sieip;
   float tmva_photonid_s4ratio,  tmva_photonid_r9;
   float tmva_photonid_pt,       tmva_photonid_sceta;
   float tmva_photonid_rr;
   float tmva_photonid_nPhot, tmva_photonid_isMatchedPhot, tmva_photonid_ptWeight; 
   float tmva_photonid_eventrho;

   GammaJetAnalysis(TTree *tree=0);
   virtual ~GammaJetAnalysis();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef GammaJetAnalysis_cxx
GammaJetAnalysis::GammaJetAnalysis(TTree *tree) : fChain(0) , hltiso(true), isMVAinitialized(false), dopureweight(true) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/reduced/redntp.53xv6_data_CERN.gjetpresel.noCorr.v2/redntp_Photon_Run2012A-22Jan2013-v1.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/reduced/redntp.53xv6_data_CERN.gjetpresel.noCorr.v2/redntp_Photon_Run2012A-22Jan2013-v1.root");
      }
      f->GetObject("AnaTree",tree);

   }
   Init(tree);
}

GammaJetAnalysis::~GammaJetAnalysis()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t GammaJetAnalysis::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t GammaJetAnalysis::LoadTree(Long64_t entry)
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

void GammaJetAnalysis::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   firedHLTNames = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("LOGamma", &LOGamma, &b_LOGamma);
   fChain->SetBranchAddress("ISRGamma", &ISRGamma, &b_ISRGamma);
   fChain->SetBranchAddress("FSRGamma", &FSRGamma, &b_FSRGamma);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("NtotEvents", &NtotEvents, &b_NtotEvents);
   fChain->SetBranchAddress("xsection", &xsection, &b_xsection);
   fChain->SetBranchAddress("EquivLumi", &EquivLumi, &b_EquivLumi);
   fChain->SetBranchAddress("SampleID", &SampleID, &b_SampleID);
   fChain->SetBranchAddress("pu_weight", &pu_weight, &b_pu_weight);
   fChain->SetBranchAddress("pu_weight30", &pu_weight30, &b_pu_weight30);
   fChain->SetBranchAddress("pu_weight50", &pu_weight50, &b_pu_weight50);
   fChain->SetBranchAddress("pu_weight75", &pu_weight75, &b_pu_weight75);
   fChain->SetBranchAddress("pu_weight90", &pu_weight90, &b_pu_weight90);
   fChain->SetBranchAddress("pu_weight135", &pu_weight135, &b_pu_weight135);
   fChain->SetBranchAddress("pu_weight150", &pu_weight150, &b_pu_weight150);
   fChain->SetBranchAddress("nPhot_gen", &nPhot_gen, &b_nPhot_gen);
   fChain->SetBranchAddress("deltaRMatch_gen", deltaRMatch_gen, &b_deltaRMatch_gen);
   fChain->SetBranchAddress("ptTrueMatch_gen", ptTrueMatch_gen, &b_ptTrueMatch_gen);
   fChain->SetBranchAddress("etaMatch_gen", etaMatch_gen, &b_etaMatch_gen);
   fChain->SetBranchAddress("phiMatch_gen", phiMatch_gen, &b_phiMatch_gen);
   fChain->SetBranchAddress("ptRecoMatch_gen", ptRecoMatch_gen, &b_ptRecoMatch_gen);
   fChain->SetBranchAddress("iRecoPhotMatch_gen", iRecoPhotMatch_gen, &b_iRecoPhotMatch_gen);
   fChain->SetBranchAddress("iso02_gen", iso02_gen, &b_iso02_gen);
   fChain->SetBranchAddress("iso03_gen", iso03_gen, &b_iso03_gen);
   fChain->SetBranchAddress("iso04_gen", iso04_gen, &b_iso04_gen);
   fChain->SetBranchAddress("iso05_gen", iso05_gen, &b_iso05_gen);
   fChain->SetBranchAddress("nPhot_presel", &nPhot_presel, &b_nPhot_presel);
   fChain->SetBranchAddress("ptPhot_presel", ptPhot_presel, &b_ptPhot_presel);
   fChain->SetBranchAddress("ePhot_presel", ePhot_presel, &b_ePhot_presel);
   fChain->SetBranchAddress("etascPhot_presel  ", etascPhot_presel  , &b_etascPhot_presel  );
   fChain->SetBranchAddress("etaPhot_presel", etaPhot_presel, &b_etaPhot_presel);
   fChain->SetBranchAddress("phiPhot_presel", phiPhot_presel, &b_phiPhot_presel);
   fChain->SetBranchAddress("pid_jurECAL03_presel", pid_jurECAL03_presel, &b_pid_jurECAL03_presel);
   fChain->SetBranchAddress("pid_twrHCAL03_presel", pid_twrHCAL03_presel, &b_pid_twrHCAL03_presel);
   fChain->SetBranchAddress("pid_hlwTrack03_presel", pid_hlwTrack03_presel, &b_pid_hlwTrack03_presel);
   fChain->SetBranchAddress("pid_jurECAL04_presel", pid_jurECAL04_presel, &b_pid_jurECAL04_presel);
   fChain->SetBranchAddress("pid_twrHCAL04_presel", pid_twrHCAL04_presel, &b_pid_twrHCAL04_presel);
   fChain->SetBranchAddress("pid_hlwTrack04_presel", pid_hlwTrack04_presel, &b_pid_hlwTrack04_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged01ForCiC_presel", pid_pfIsoCharged01ForCiC_presel, &b_pid_pfIsoCharged01ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged02ForCiC_presel", pid_pfIsoCharged02ForCiC_presel, &b_pid_pfIsoCharged02ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged03ForCiC_presel", pid_pfIsoCharged03ForCiC_presel, &b_pid_pfIsoCharged03ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged04ForCiC_presel", pid_pfIsoCharged04ForCiC_presel, &b_pid_pfIsoCharged04ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged05ForCiC_presel", pid_pfIsoCharged05ForCiC_presel, &b_pid_pfIsoCharged05ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoCharged06ForCiC_presel", pid_pfIsoCharged06ForCiC_presel, &b_pid_pfIsoCharged06ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons01ForCiC_presel", pid_pfIsoPhotons01ForCiC_presel, &b_pid_pfIsoPhotons01ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons02ForCiC_presel", pid_pfIsoPhotons02ForCiC_presel, &b_pid_pfIsoPhotons02ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons03ForCiC_presel", pid_pfIsoPhotons03ForCiC_presel, &b_pid_pfIsoPhotons03ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons04ForCiC_presel", pid_pfIsoPhotons04ForCiC_presel, &b_pid_pfIsoPhotons04ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons05ForCiC_presel", pid_pfIsoPhotons05ForCiC_presel, &b_pid_pfIsoPhotons05ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoPhotons06ForCiC_presel", pid_pfIsoPhotons06ForCiC_presel, &b_pid_pfIsoPhotons06ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals01ForCiC_presel", pid_pfIsoNeutrals01ForCiC_presel, &b_pid_pfIsoNeutrals01ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals02ForCiC_presel", pid_pfIsoNeutrals02ForCiC_presel, &b_pid_pfIsoNeutrals02ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals03ForCiC_presel", pid_pfIsoNeutrals03ForCiC_presel, &b_pid_pfIsoNeutrals03ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals04ForCiC_presel", pid_pfIsoNeutrals04ForCiC_presel, &b_pid_pfIsoNeutrals04ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals05ForCiC_presel", pid_pfIsoNeutrals05ForCiC_presel, &b_pid_pfIsoNeutrals05ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoNeutrals06ForCiC_presel", pid_pfIsoNeutrals06ForCiC_presel, &b_pid_pfIsoNeutrals06ForCiC_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRCharged03_presel", pid_pfIsoFPRCharged03_presel, &b_pid_pfIsoFPRCharged03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRNeutral03_presel", pid_pfIsoFPRNeutral03_presel, &b_pid_pfIsoFPRNeutral03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRPhoton03_presel", pid_pfIsoFPRPhoton03_presel, &b_pid_pfIsoFPRPhoton03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeCharged03_presel", pid_pfIsoFPRRandomConeCharged03_presel, &b_pid_pfIsoFPRRandomConeCharged03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeNeutral03_presel", pid_pfIsoFPRRandomConeNeutral03_presel, &b_pid_pfIsoFPRRandomConeNeutral03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConePhoton03_presel", pid_pfIsoFPRRandomConePhoton03_presel, &b_pid_pfIsoFPRRandomConePhoton03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRCharged04_presel", pid_pfIsoFPRCharged04_presel, &b_pid_pfIsoFPRCharged04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRNeutral04_presel", pid_pfIsoFPRNeutral04_presel, &b_pid_pfIsoFPRNeutral04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRPhoton04_presel", pid_pfIsoFPRPhoton04_presel, &b_pid_pfIsoFPRPhoton04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeCharged04_presel", pid_pfIsoFPRRandomConeCharged04_presel, &b_pid_pfIsoFPRRandomConeCharged04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeNeutral04_presel", pid_pfIsoFPRRandomConeNeutral04_presel, &b_pid_pfIsoFPRRandomConeNeutral04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConePhoton04_presel", pid_pfIsoFPRRandomConePhoton04_presel, &b_pid_pfIsoFPRRandomConePhoton04_presel);
   fChain->SetBranchAddress("pid_scetawid_presel", pid_scetawid_presel, &b_pid_scetawid_presel);
   fChain->SetBranchAddress("pid_scphiwid_presel", pid_scphiwid_presel, &b_pid_scphiwid_presel);
   fChain->SetBranchAddress("pid_lambdaRatio_presel", pid_lambdaRatio_presel, &b_pid_lambdaRatio_presel);
   fChain->SetBranchAddress("pid_HoverE_presel", pid_HoverE_presel, &b_pid_HoverE_presel);
   fChain->SetBranchAddress("sEtaEtaPhot_presel", sEtaEtaPhot_presel, &b_sEtaEtaPhot_presel);
   fChain->SetBranchAddress("sEtaPhiPhot_presel", sEtaPhiPhot_presel, &b_sEtaPhiPhot_presel);
   fChain->SetBranchAddress("s4RatioPhot_presel", s4RatioPhot_presel, &b_s4RatioPhot_presel);
   fChain->SetBranchAddress("r9Phot_presel", r9Phot_presel, &b_r9Phot_presel);
   fChain->SetBranchAddress("rhoAllJets", &rhoAllJets, &b_rhoAllJets);
   fChain->SetBranchAddress("rhoPF", &rhoPF, &b_rhoPF);
   fChain->SetBranchAddress("rr_presel", rr_presel, &b_rr_presel);
   fChain->SetBranchAddress("isMatchedPhot", isMatchedPhot, &b_isMatchedPhot);
   fChain->SetBranchAddress("iMatchedPhot", iMatchedPhot, &b_iMatchedPhot);
   fChain->SetBranchAddress("isTrig20CaloVLMatchedPhot", isTrig20CaloVLMatchedPhot, &b_isTrig20CaloVLMatchedPhot);
   fChain->SetBranchAddress("isTrig30CaloVLMatchedPhot", isTrig30CaloVLMatchedPhot, &b_isTrig30CaloVLMatchedPhot);
   fChain->SetBranchAddress("isTrig50CaloVLMatchedPhot", isTrig50CaloVLMatchedPhot, &b_isTrig50CaloVLMatchedPhot);
   fChain->SetBranchAddress("isTrig75CaloVLMatchedPhot", isTrig75CaloVLMatchedPhot, &b_isTrig75CaloVLMatchedPhot);
   fChain->SetBranchAddress("isTrig90CaloVLMatchedPhot", isTrig90CaloVLMatchedPhot, &b_isTrig90CaloVLMatchedPhot);
   fChain->SetBranchAddress("vtxId", &vtxId, &b_vtxId);
   fChain->SetBranchAddress("firedHLTNames", &firedHLTNames, &b_firedHLTNames);
   Notify();
}

Bool_t GammaJetAnalysis::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void GammaJetAnalysis::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t GammaJetAnalysis::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef GammaJetAnalysis_cxx
