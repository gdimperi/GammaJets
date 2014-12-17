//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Oct 15 00:06:22 2014 by ROOT version 5.32/00
// from TTree myTree/
// found on file: /cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root
//////////////////////////////////////////////////////////

#ifndef TestClass_h
#define TestClass_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class TestClass {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         mass;
   Float_t         probe_eta;
   Float_t         probe_abseta;
   Float_t         probe_phi;
   Float_t         probe_pt;
   Float_t         probe_r9;
   Float_t         probe_pid_scetawid;
   Float_t         probe_pid_scphiwid;
   Float_t         probe_sEtaEta;
   Float_t         probe_sEtaPhi;
   Float_t         probe_s4Ratio;
   Float_t         probe_etasc;
   Float_t         probe_rr;
   Float_t         probe_mvaId;
   Float_t         probe_charged03;
   Float_t         probe_neutral03;
   Float_t         probe_photon03;
   Float_t         probe_combinedPfIso03;
   Float_t         probe_fprCharged03;
   Float_t         probe_fprNeutral03;
   Float_t         probe_fprPhoton03;
   Float_t         probe_combinedPfIsoFPR03;
   Float_t         probe_fprRCCharged03;
   Float_t         probe_fprRCNeutral03;
   Float_t         probe_fprRCPhoton03;
   Int_t           numvtx;
   Float_t         rho;
   Int_t           npu;
   Float_t         puW;
   Float_t         r9WeightEB;
   Float_t         r9WeightEE;
   Float_t         etaWeight;
   Float_t         rhoWeight30;
   Float_t         rhoWeight50;
   Float_t         rhoWeight75;
   Float_t         rhoWeight90;
   Float_t         rhoWeight135;
   Float_t         rhoWeight150;
   Float_t         puW30;
   Float_t         puW50;
   Float_t         puW75;
   Float_t         puW90;
   Float_t         puW135;
   Float_t         puW150;
   Int_t           okLooseElePtEta;
   Int_t           okLooseEleID;
   Int_t           okMediumElePtEta;
   Int_t           okMediumEleID;
   Int_t           okTightElePtEta;
   Int_t           okTightEleID;
   Int_t           okMVA_005;
   Int_t           okMVA_01;
   Int_t           okMVA_02;
   Int_t           hasPromptElectronMatched;

   // List of branches
   TBranch        *b_mass;   //!
   TBranch        *b_probe_eta;   //!
   TBranch        *b_probe_abseta;   //!
   TBranch        *b_probe_phi;   //!
   TBranch        *b_probe_pt;   //!
   TBranch        *b_probe_r9;   //!
   TBranch        *b_probe_pid_scetawid;   //!
   TBranch        *b_probe_pid_scphiwid;   //!
   TBranch        *b_probe_sEtaEta;   //!
   TBranch        *b_probe_sEtaPhi;   //!
   TBranch        *b_probe_s4Ratio;   //!
   TBranch        *b_probe_etasc;   //!
   TBranch        *b_probe_rr;   //!
   TBranch        *b_probe_mvaId;   //!
   TBranch        *b_probe_charged03;   //!
   TBranch        *b_probe_neutral03;   //!
   TBranch        *b_probe_photon03;   //!
   TBranch        *b_probe_combinedPfIso03;   //!
   TBranch        *b_probe_fprCharged03;   //!
   TBranch        *b_probe_fprNeutral03;   //!
   TBranch        *b_probe_fprPhoton03;   //!
   TBranch        *b_probe_combinedPfIsoFPR03;   //!
   TBranch        *b_probe_fprRCCharged03;   //!
   TBranch        *b_probe_fprRCNeutral03;   //!
   TBranch        *b_probe_fprRCPhoton03;   //!
   TBranch        *b_numvtx;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_npu;   //!
   TBranch        *b_puW;   //!
   TBranch        *b_r9WeightEB;   //!
   TBranch        *b_r9WeightEE;   //!
   TBranch        *b_etaWeight;   //!
   TBranch        *b_rhoWeight30;   //!
   TBranch        *b_rhoWeight50;   //!
   TBranch        *b_rhoWeight75;   //!
   TBranch        *b_rhoWeight90;   //!
   TBranch        *b_rhoWeight135;   //!
   TBranch        *b_rhoWeight150;   //!
   TBranch        *b_puW30;   //!
   TBranch        *b_puW50;   //!
   TBranch        *b_puW75;   //!
   TBranch        *b_puW90;   //!
   TBranch        *b_puW135;   //!
   TBranch        *b_puW150;   //!
   TBranch        *b_okLooseElePtEta;   //!
   TBranch        *b_okLooseEleID;   //!
   TBranch        *b_okMediumElePtEta;   //!
   TBranch        *b_okMediumEleID;   //!
   TBranch        *b_okTightElePtEta;   //!
   TBranch        *b_okTightEleID;   //!
   TBranch        *b_okMVA_005;   //!
   TBranch        *b_okMVA_01;   //!
   TBranch        *b_okMVA_02;   //!
   TBranch        *b_hasPromptElectronMatched;   //!

   TestClass(TTree *tree=0);
   virtual ~TestClass();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TTree* data_ele_new);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef TestClass_cxx
TestClass::TestClass(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/src/TagAndProbeZ/output_analyzer/DoubleElectron_Run2012All_tagTight_HLT30.root:/myTaPDir");
      dir->GetObject("myTree",tree);

   }
   Init(tree);
}

TestClass::~TestClass()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t TestClass::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t TestClass::LoadTree(Long64_t entry)
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

void TestClass::Init(TTree *tree)
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

   fChain->SetBranchAddress("mass", &mass, &b_mass);
   fChain->SetBranchAddress("probe_eta", &probe_eta, &b_probe_eta);
   fChain->SetBranchAddress("probe_abseta", &probe_abseta, &b_probe_abseta);
   fChain->SetBranchAddress("probe_phi", &probe_phi, &b_probe_phi);
   fChain->SetBranchAddress("probe_pt", &probe_pt, &b_probe_pt);
   fChain->SetBranchAddress("probe_r9", &probe_r9, &b_probe_r9);
   fChain->SetBranchAddress("probe_pid_scetawid", &probe_pid_scetawid, &b_probe_pid_scetawid);
   fChain->SetBranchAddress("probe_pid_scphiwid", &probe_pid_scphiwid, &b_probe_pid_scphiwid);
   fChain->SetBranchAddress("probe_sEtaEta", &probe_sEtaEta, &b_probe_sEtaEta);
   fChain->SetBranchAddress("probe_sEtaPhi", &probe_sEtaPhi, &b_probe_sEtaPhi);
   fChain->SetBranchAddress("probe_s4Ratio", &probe_s4Ratio, &b_probe_s4Ratio);
   fChain->SetBranchAddress("probe_etasc", &probe_etasc, &b_probe_etasc);
   fChain->SetBranchAddress("probe_rr", &probe_rr, &b_probe_rr);
   fChain->SetBranchAddress("probe_mvaId", &probe_mvaId, &b_probe_mvaId);
   fChain->SetBranchAddress("probe_charged03", &probe_charged03, &b_probe_charged03);
   fChain->SetBranchAddress("probe_neutral03", &probe_neutral03, &b_probe_neutral03);
   fChain->SetBranchAddress("probe_photon03", &probe_photon03, &b_probe_photon03);
   fChain->SetBranchAddress("probe_combinedPfIso03", &probe_combinedPfIso03, &b_probe_combinedPfIso03);
   fChain->SetBranchAddress("probe_fprCharged03", &probe_fprCharged03, &b_probe_fprCharged03);
   fChain->SetBranchAddress("probe_fprNeutral03", &probe_fprNeutral03, &b_probe_fprNeutral03);
   fChain->SetBranchAddress("probe_fprPhoton03", &probe_fprPhoton03, &b_probe_fprPhoton03);
   fChain->SetBranchAddress("probe_combinedPfIsoFPR03", &probe_combinedPfIsoFPR03, &b_probe_combinedPfIsoFPR03);
   fChain->SetBranchAddress("probe_fprRCCharged03", &probe_fprRCCharged03, &b_probe_fprRCCharged03);
   fChain->SetBranchAddress("probe_fprRCNeutral03", &probe_fprRCNeutral03, &b_probe_fprRCNeutral03);
   fChain->SetBranchAddress("probe_fprRCPhoton03", &probe_fprRCPhoton03, &b_probe_fprRCPhoton03);
   fChain->SetBranchAddress("numvtx", &numvtx, &b_numvtx);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("npu", &npu, &b_npu);
   fChain->SetBranchAddress("puW", &puW, &b_puW);
   fChain->SetBranchAddress("r9WeightEB", &r9WeightEB, &b_r9WeightEB);
   fChain->SetBranchAddress("r9WeightEE", &r9WeightEE, &b_r9WeightEE);
   fChain->SetBranchAddress("etaWeight", &etaWeight, &b_etaWeight);
   fChain->SetBranchAddress("rhoWeight30", &rhoWeight30, &b_rhoWeight30);
   fChain->SetBranchAddress("rhoWeight50", &rhoWeight50, &b_rhoWeight50);
   fChain->SetBranchAddress("rhoWeight75", &rhoWeight75, &b_rhoWeight75);
   fChain->SetBranchAddress("rhoWeight90", &rhoWeight90, &b_rhoWeight90);
   fChain->SetBranchAddress("rhoWeight135", &rhoWeight135, &b_rhoWeight135);
   fChain->SetBranchAddress("rhoWeight150", &rhoWeight150, &b_rhoWeight150);
   fChain->SetBranchAddress("puW30", &puW30, &b_puW30);
   fChain->SetBranchAddress("puW50", &puW50, &b_puW50);
   fChain->SetBranchAddress("puW75", &puW75, &b_puW75);
   fChain->SetBranchAddress("puW90", &puW90, &b_puW90);
   fChain->SetBranchAddress("puW135", &puW135, &b_puW135);
   fChain->SetBranchAddress("puW150", &puW150, &b_puW150);
   fChain->SetBranchAddress("okLooseElePtEta", &okLooseElePtEta, &b_okLooseElePtEta);
   fChain->SetBranchAddress("okLooseEleID", &okLooseEleID, &b_okLooseEleID);
   fChain->SetBranchAddress("okMediumElePtEta", &okMediumElePtEta, &b_okMediumElePtEta);
   fChain->SetBranchAddress("okMediumEleID", &okMediumEleID, &b_okMediumEleID);
   fChain->SetBranchAddress("okTightElePtEta", &okTightElePtEta, &b_okTightElePtEta);
   fChain->SetBranchAddress("okTightEleID", &okTightEleID, &b_okTightEleID);
   fChain->SetBranchAddress("okMVA_005", &okMVA_005, &b_okMVA_005);
   fChain->SetBranchAddress("okMVA_01", &okMVA_01, &b_okMVA_01);
   fChain->SetBranchAddress("okMVA_02", &okMVA_02, &b_okMVA_02);
   fChain->SetBranchAddress("hasPromptElectronMatched", &hasPromptElectronMatched, &b_hasPromptElectronMatched);
   Notify();
}

Bool_t TestClass::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void TestClass::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t TestClass::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef TestClass_cxx
