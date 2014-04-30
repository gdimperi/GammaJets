#define splitTree_cxx
#include "splitTree.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>


#include "TTree.h"
#include "TFile.h"
#include "TH1.h"

void splitTree::Loop(TFile* newfile)
{
//   In a ROOT session, you can do:
//      Root > .L splitTree.C
//      Root > splitTree t
//      Root > t.GetEntry(12); // Fill t data members with entry number 12
//      Root > t.Show();       // Show values of entry 12
//      Root > t.Show(16);     // Read and show values of entry 16
//      Root > t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

   //Get old file, old tree and set top branch address
   //TFile *oldfile = new TFile("", "READ");
   
   //Long64_t nentries = AnaTree->GetEntries();
   //Event *event   = 0;
   //AnaTree->SetBranchAddress("event",&event);

   //Create a new file + a clone of old tree in new file
   //TFile *newfile = new TFile("","recreate");
   newfile->cd();

   TTree* AnaTree_train = fChain->CloneTree(0);
   AnaTree_train->Branch("isIsolatedGenPhot",isIsolatedGenPhot_,"isIsolatedGenPhot[nPhot_presel]/I");
   AnaTree_train->SetName("AnaTree_train");

   TTree* AnaTree_test = fChain->CloneTree(0);
   AnaTree_test->Branch("isIsolatedGenPhot",isIsolatedGenPhot_,"isIsolatedGenPhot[nPhot_presel]/I");
   AnaTree_test->SetName("AnaTree_test");

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      if(jentry%50000 == 0)
	std::cout << "processing " << jentry << " of " << nentries << " entries" << std::endl;
      // if (Cut(ientry) < 0) continue;
      //AnaTree->GetEntry(jentry);
      //if (event->GetNtrack() > 605) newtree->Fill();
      //event->Clear();
      for(int i=0; i<nPhot_presel; i++)
	isIsolatedGenPhot_[i] = isIsolatedGenPhot(i);
      

      if(jentry%2==0) {
	AnaTree_train->Fill();
      }
      else AnaTree_test->Fill();

   }

   //newtree->Print();
   //newtree->AutoSave();
   AnaTree_train->Write();
   AnaTree_test->Write();

   //delete newfile;



}
