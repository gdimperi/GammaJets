//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Sat Jun  7 11:28:53 2014 by ROOT version 5.32/00
// from TTree finalTree/finalTree
// found on file: /cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_withCone04//QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root
//////////////////////////////////////////////////////////

#ifndef IsoFPRchecks_h
#define IsoFPRchecks_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TTree.h>
#include <TFile.h>
#include <TLegend.h>
#include <TROOT.h>
#include <TMath.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <TLorentzVector.h>
#include <TAttLine.h>
#include <TAttFill.h>
#include <THStack.h>
#include <TColor.h>
#include <TGraph.h>
#include <TPaveStats.h>


// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class IsoFPRchecks {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          sampleIndex;
   UInt_t          run;
   UInt_t          lumi;
   UInt_t          event;
   UInt_t          nvtx;
   Float_t         weight;
   Float_t         rho;
   Float_t         ptPhotGen;
   Float_t         etaPhotGen;
   Float_t         iso03PhotGen;
   Float_t         iso04PhotGen;
   Int_t           isRecoMatchedPhotGen;
   Float_t         ptPhot;
   Int_t           isMatchedPhot;
   Int_t           isPreselectedPhot;
   Int_t           isSelectedPhot;
   Float_t         etaPhot;
   Float_t         mvaIdPhot;
   Float_t         sEtaEtaPhot;
   Float_t         combinedPfIso03Phot;
   Int_t           isIsolatedGenPhot;
   Float_t         iso03_gen;
   Float_t         pid_jurECAL03;
   Float_t         pid_twrHCAL03;
   Float_t         pid_hlwTrack03;
   Float_t         pid_pfIsoCharged03ForCiC;
   Float_t         pid_pfIsoPhotons03ForCiC;
   Float_t         pid_pfIsoNeutrals03ForCiC;
   Float_t         correctedPfIsoCharged03;
   Float_t         correctedPfIsoNeutrals03;
   Float_t         correctedPfIsoPhotons03;
   Float_t         pid_pfIsoFPRCharged03_presel;
   Float_t         pid_pfIsoFPRNeutral03_presel;
   Float_t         pid_pfIsoFPRPhoton03_presel;
   Float_t         correctedPfIsoFPRCharged03;
   Float_t         correctedPfIsoFPRNeutrals03;
   Float_t         correctedPfIsoFPRPhotons03;
   Float_t         pid_pfIsoFPRRandomConeCharged03_presel;
   Float_t         pid_pfIsoFPRRandomConeNeutral03_presel;
   Float_t         pid_pfIsoFPRRandomConePhoton03_presel;
   Float_t         correctedPfIsoFPRRandomConeCharged03;
   Float_t         correctedPfIsoFPRRandomConeNeutrals03;
   Float_t         correctedPfIsoFPRRandomConePhotons03;
   Float_t         combinedPfIsoFPR03Phot;
   Float_t         combinedPfIsoFPRRandomCone03Phot;
   Float_t         pid_pfIsoCharged04ForCiC;
   Float_t         pid_pfIsoPhotons04ForCiC;
   Float_t         pid_pfIsoNeutrals04ForCiC;
   Float_t         pid_pfIsoFPRCharged04_presel;
   Float_t         pid_pfIsoFPRNeutral04_presel;
   Float_t         pid_pfIsoFPRPhoton04_presel;
   Float_t         pid_pfIsoFPRRandomConeCharged04_presel;
   Float_t         pid_pfIsoFPRRandomConeNeutral04_presel;
   Float_t         pid_pfIsoFPRRandomConePhoton04_presel;
   Float_t         combinedPfIsoFPR04Phot;
   Float_t         combinedPfIsoFPRRandomCone04Phot;

   // List of branches
   TBranch        *b_sampleIndex;   //!
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_nvtx;   //!
   TBranch        *b_weght;   //!
   TBranch        *b_rho;   //!
   TBranch        *b_ptPhotGen;   //!
   TBranch        *b_etaPhotGen;   //!
   TBranch        *b_iso03PhotGen;   //!
   TBranch        *b_iso04PhotGen;   //!
   TBranch        *b_isRecoMatchedPhotGen;   //!
   TBranch        *b_ptPhot;   //!
   TBranch        *b_isMatchedPhot;   //!
   TBranch        *b_isPreselectedPhot;   //!
   TBranch        *b_isSelectedPhot;   //!
   TBranch        *b_etaPhot;   //!
   TBranch        *b_mvaIdPhot;   //!
   TBranch        *b_sEtaEtaPhot;   //!
   TBranch        *b_combinedPfIso03Phot;   //!
   TBranch        *b_isIsolatedGenPhot;   //!
   TBranch        *b_iso03_gen;   //!
   TBranch        *b_pid_jurECAL03;   //!
   TBranch        *b_pid_twrHCAL03;   //!
   TBranch        *b_pid_hlwTrack03;   //!
   TBranch        *b_pid_pfIsoCharged03ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons03ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals03ForCiC;   //!
   TBranch        *b_correctedPfIsoCharged03;   //!
   TBranch        *b_correctedPfIsoNeutrals03;   //!
   TBranch        *b_correctedPfIsoPhotons03;   //!
   TBranch        *b_pid_pfIsoFPRCharged03_presel;   //!
   TBranch        *b_pid_pfIsoFPRNeutral03_presel;   //!
   TBranch        *b_pid_pfIsoFPRPhoton03_presel;   //!
   TBranch        *b_correctedPfIsoFPRCharged03;   //!
   TBranch        *b_correctedPfIsoFPRNeutrals03;   //!
   TBranch        *b_correctedPfIsoFPRPhotons03;   //!
   TBranch        *b_pid_pfIsoFPRRandomConeCharged03_presel;   //!
   TBranch        *b_pid_pfIsoFPRRandomConeNeutral03_presel;   //!
   TBranch        *b_pid_pfIsoFPRRandomConePhoton03_presel;   //!
   TBranch        *b_correctedPfIsoFPRRandomConeCharged03;   //!
   TBranch        *b_correctedPfIsoFPRRandomConeNeutrals03;   //!
   TBranch        *b_correctedPfIsoFPRRandomConePhotons03;   //!
   TBranch        *b_combinedPfIsoFPR03Phot;   //!
   TBranch        *b_combinedPfIsoFPRRandomCone03Phot;   //!
   TBranch        *b_pid_pfIsoCharged04ForCiC;   //!
   TBranch        *b_pid_pfIsoPhotons04ForCiC;   //!
   TBranch        *b_pid_pfIsoNeutrals04ForCiC;   //!
   TBranch        *b_pid_pfIsoFPRCharged04_presel;   //!
   TBranch        *b_pid_pfIsoFPRNeutral04_presel;   //!
   TBranch        *b_pid_pfIsoFPRPhoton04_presel;   //!
   TBranch        *b_pid_pfIsoFPRRandomConeCharged04_presel;   //!
   TBranch        *b_pid_pfIsoFPRRandomConeNeutral04_presel;   //!
   TBranch        *b_pid_pfIsoFPRRandomConePhoton04_presel;   //!
   TBranch        *b_combinedPfIsoFPR04Phot;   //!
   TBranch        *b_combinedPfIsoFPRRandomCone04Phot;   //!

   IsoFPRchecks(TTree *tree=0);
   virtual ~IsoFPRchecks();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

   virtual Double_t ReturnValue(string var);
   virtual void     CreateROC(string var, Int_t npoints, Double_t xmin, Double_t xmax, string name_output);
};

#endif

#ifdef IsoFPRchecks_cxx
IsoFPRchecks::IsoFPRchecks(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_withCone04//QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_withCone04//QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");
      }
      f->GetObject("finalTree",tree);

   }
   Init(tree);
}

IsoFPRchecks::~IsoFPRchecks()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t IsoFPRchecks::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t IsoFPRchecks::LoadTree(Long64_t entry)
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

void IsoFPRchecks::Init(TTree *tree)
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

   fChain->SetBranchAddress("sampleIndex", &sampleIndex, &b_sampleIndex);
   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("nvtx", &nvtx, &b_nvtx);
   fChain->SetBranchAddress("weight", &weight, &b_weght);
   fChain->SetBranchAddress("rho", &rho, &b_rho);
   fChain->SetBranchAddress("ptPhotGen", &ptPhotGen, &b_ptPhotGen);
   fChain->SetBranchAddress("etaPhotGen", &etaPhotGen, &b_etaPhotGen);
   fChain->SetBranchAddress("iso03PhotGen", &iso03PhotGen, &b_iso03PhotGen);
   fChain->SetBranchAddress("iso04PhotGen", &iso04PhotGen, &b_iso04PhotGen);
   fChain->SetBranchAddress("isRecoMatchedPhotGen", &isRecoMatchedPhotGen, &b_isRecoMatchedPhotGen);
   fChain->SetBranchAddress("ptPhot", &ptPhot, &b_ptPhot);
   fChain->SetBranchAddress("isMatchedPhot", &isMatchedPhot, &b_isMatchedPhot);
   fChain->SetBranchAddress("isPreselectedPhot", &isPreselectedPhot, &b_isPreselectedPhot);
   fChain->SetBranchAddress("isSelectedPhot", &isSelectedPhot, &b_isSelectedPhot);
   fChain->SetBranchAddress("etaPhot", &etaPhot, &b_etaPhot);
   fChain->SetBranchAddress("mvaIdPhot", &mvaIdPhot, &b_mvaIdPhot);
   fChain->SetBranchAddress("sEtaEtaPhot", &sEtaEtaPhot, &b_sEtaEtaPhot);
   fChain->SetBranchAddress("combinedPfIso03Phot", &combinedPfIso03Phot, &b_combinedPfIso03Phot);
   fChain->SetBranchAddress("isIsolatedGenPhot", &isIsolatedGenPhot, &b_isIsolatedGenPhot);
   fChain->SetBranchAddress("iso03_gen", &iso03_gen, &b_iso03_gen);
   fChain->SetBranchAddress("pid_jurECAL03", &pid_jurECAL03, &b_pid_jurECAL03);
   fChain->SetBranchAddress("pid_twrHCAL03", &pid_twrHCAL03, &b_pid_twrHCAL03);
   fChain->SetBranchAddress("pid_hlwTrack03", &pid_hlwTrack03, &b_pid_hlwTrack03);
   fChain->SetBranchAddress("pid_pfIsoCharged03ForCiC", &pid_pfIsoCharged03ForCiC, &b_pid_pfIsoCharged03ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons03ForCiC", &pid_pfIsoPhotons03ForCiC, &b_pid_pfIsoPhotons03ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals03ForCiC", &pid_pfIsoNeutrals03ForCiC, &b_pid_pfIsoNeutrals03ForCiC);
   fChain->SetBranchAddress("correctedPfIsoCharged03", &correctedPfIsoCharged03, &b_correctedPfIsoCharged03);
   fChain->SetBranchAddress("correctedPfIsoNeutrals03", &correctedPfIsoNeutrals03, &b_correctedPfIsoNeutrals03);
   fChain->SetBranchAddress("correctedPfIsoPhotons03", &correctedPfIsoPhotons03, &b_correctedPfIsoPhotons03);
   fChain->SetBranchAddress("pid_pfIsoFPRCharged03_presel", &pid_pfIsoFPRCharged03_presel, &b_pid_pfIsoFPRCharged03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRNeutral03_presel", &pid_pfIsoFPRNeutral03_presel, &b_pid_pfIsoFPRNeutral03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRPhoton03_presel", &pid_pfIsoFPRPhoton03_presel, &b_pid_pfIsoFPRPhoton03_presel);
   fChain->SetBranchAddress("correctedPfIsoFPRCharged03", &correctedPfIsoFPRCharged03, &b_correctedPfIsoFPRCharged03);
   fChain->SetBranchAddress("correctedPfIsoFPRNeutrals03", &correctedPfIsoFPRNeutrals03, &b_correctedPfIsoFPRNeutrals03);
   fChain->SetBranchAddress("correctedPfIsoFPRPhotons03", &correctedPfIsoFPRPhotons03, &b_correctedPfIsoFPRPhotons03);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeCharged03_presel", &pid_pfIsoFPRRandomConeCharged03_presel, &b_pid_pfIsoFPRRandomConeCharged03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeNeutral03_presel", &pid_pfIsoFPRRandomConeNeutral03_presel, &b_pid_pfIsoFPRRandomConeNeutral03_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConePhoton03_presel", &pid_pfIsoFPRRandomConePhoton03_presel, &b_pid_pfIsoFPRRandomConePhoton03_presel);
   fChain->SetBranchAddress("correctedPfIsoFPRRandomConeCharged03", &correctedPfIsoFPRRandomConeCharged03, &b_correctedPfIsoFPRRandomConeCharged03);
   fChain->SetBranchAddress("correctedPfIsoFPRRandomConeNeutrals03", &correctedPfIsoFPRRandomConeNeutrals03, &b_correctedPfIsoFPRRandomConeNeutrals03);
   fChain->SetBranchAddress("correctedPfIsoFPRRandomConePhotons03", &correctedPfIsoFPRRandomConePhotons03, &b_correctedPfIsoFPRRandomConePhotons03);
   fChain->SetBranchAddress("combinedPfIsoFPR03Phot", &combinedPfIsoFPR03Phot, &b_combinedPfIsoFPR03Phot);
   fChain->SetBranchAddress("combinedPfIsoFPRRandomCone03Phot", &combinedPfIsoFPRRandomCone03Phot, &b_combinedPfIsoFPRRandomCone03Phot);
   fChain->SetBranchAddress("pid_pfIsoCharged04ForCiC", &pid_pfIsoCharged04ForCiC, &b_pid_pfIsoCharged04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoPhotons04ForCiC", &pid_pfIsoPhotons04ForCiC, &b_pid_pfIsoPhotons04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoNeutrals04ForCiC", &pid_pfIsoNeutrals04ForCiC, &b_pid_pfIsoNeutrals04ForCiC);
   fChain->SetBranchAddress("pid_pfIsoFPRCharged04_presel", &pid_pfIsoFPRCharged04_presel, &b_pid_pfIsoFPRCharged04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRNeutral04_presel", &pid_pfIsoFPRNeutral04_presel, &b_pid_pfIsoFPRNeutral04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRPhoton04_presel", &pid_pfIsoFPRPhoton04_presel, &b_pid_pfIsoFPRPhoton04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeCharged04_presel", &pid_pfIsoFPRRandomConeCharged04_presel, &b_pid_pfIsoFPRRandomConeCharged04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConeNeutral04_presel", &pid_pfIsoFPRRandomConeNeutral04_presel, &b_pid_pfIsoFPRRandomConeNeutral04_presel);
   fChain->SetBranchAddress("pid_pfIsoFPRRandomConePhoton04_presel", &pid_pfIsoFPRRandomConePhoton04_presel, &b_pid_pfIsoFPRRandomConePhoton04_presel);
   fChain->SetBranchAddress("combinedPfIsoFPR04Phot", &combinedPfIsoFPR04Phot, &b_combinedPfIsoFPR04Phot);
   fChain->SetBranchAddress("combinedPfIsoFPRRandomCone04Phot", &combinedPfIsoFPRRandomCone04Phot, &b_combinedPfIsoFPRRandomCone04Phot);
   Notify();
}

Bool_t IsoFPRchecks::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void IsoFPRchecks::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t IsoFPRchecks::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}

#endif // #ifdef IsoFPRchecks_cxx
