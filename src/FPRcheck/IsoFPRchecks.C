#define IsoFPRchecks_cxx
#include "IsoFPRchecks.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
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


void IsoFPRchecks::Loop()
{
//   In a ROOT session, you can do:
//      Root > .L IsoFPRchecks.C
//      Root > IsoFPRchecks t
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
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
   }
}

void IsoFPRchecks::ScatterPlotsIso()
{
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  Long64_t nbytes = 0, nb = 0;
  
  TH2F* h2_isoCh03 = new TH2F("h2_isoCh03", "", 120, -5-, 30., 120, -5-, 30.);
  TH2F* h2_isoNe03 = new TH2F("h2_isoNe03", "", 120, -5-, 30., 120, -5-, 30.);
  TH2F* h2_isoPh03 = new TH2F("h2_isoPh03", "", 120, -5-, 30., 120, -5-, 30.);


  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    h2_isoCh03->Fill("pid_pfIsoCharged03ForCiC","pid_pfIsoFPRCharged03_presel",weight);
    h2_isoNe03->Fill("pid_pfIsoNeutrals03ForCiC","pid_pfIsoNeutrals03_presel", weight);
    h2_isoPh03->Fill("pid_pfIsoPhotons03ForCiC","pid_pfIsoFPRPhotons03_presel",weight)
  }
}

void IsoFPRchecks::CreateROC(string var, Int_t npoints, Double_t xmin, Double_t xmax, string name_output)
{
  if (fChain == 0) return;
  
  Long64_t nentries = fChain->GetEntriesFast();
  
  Long64_t nbytes = 0, nb = 0;
  
  TH1F* hist_sig_barrel = new TH1F("sig_barrel", "sig_barrel", npoints, xmin, xmax);
  TH1F* hist_bg_barrel  = new TH1F("bg_barrel", "bg_barrel", npoints, xmin, xmax);
				
  TH1F* hist_sig_endcap = new TH1F("sig_endcap", "sig_endcap", npoints, xmin, xmax);
  TH1F* hist_bg_endcap  = new TH1F("bg_endcap", "bg_endcap", npoints, xmin, xmax);


  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    //reintroducing chargedIsoPF03 cut - test
    //if (pid_pfIsoCharged03ForCiC>5) continue;

    if(TMath::Abs(etaPhot)<1.4442){
      if(isIsolatedGenPhot==1){
	hist_sig_barrel->Fill(ReturnValue(var), weight);
	//cout << "var = " << ReturnValue(var) << endl;
	
      }
      if(isIsolatedGenPhot==0){
	  hist_bg_barrel->Fill(ReturnValue(var), weight);
      }
    }
    if(TMath::Abs(etaPhot)>1.566 && TMath::Abs(etaPhot)<2.5){
      if(isIsolatedGenPhot==1){
	hist_sig_endcap->Fill(ReturnValue(var), weight);
      }
      if(isIsolatedGenPhot==0){
	hist_bg_endcap->Fill(ReturnValue(var), weight);
      }
      
    }
    // if (Cut(ientry) < 0) continue;
  }
  

  cout<<"barrel "<<hist_sig_barrel->GetEntries()<<" sig "<<hist_bg_barrel->GetEntries()<<" bg"<<endl;
  cout<<"endcaps "<<hist_sig_endcap->GetEntries()<<" sig "<<hist_bg_endcap->GetEntries()<<" bg"<<endl;
  
  Int_t Nbins_sig_barrel = 0, Nbins_bg_barrel = 0, Nbins_sig_endcap = 0, Nbins_bg_endcap = 0;
  Nbins_sig_barrel = hist_sig_barrel->GetNbinsX() - 2;//number of bins - undeflow&overflow bins
  Nbins_bg_barrel  = hist_bg_barrel->GetNbinsX() - 2;
  Nbins_sig_endcap = hist_sig_endcap->GetNbinsX() - 2;
  Nbins_bg_endcap  = hist_bg_endcap->GetNbinsX() - 2; 

  Double_t denominator_sig_barrel = 0., denominator_bg_barrel = 0., denominator_sig_endcap = 0., denominator_bg_endcap = 0.;
  denominator_sig_barrel = hist_sig_barrel->Integral(0, Nbins_sig_barrel + 1);
  denominator_bg_barrel  = hist_bg_barrel->Integral(0, Nbins_bg_barrel + 1);
  denominator_sig_endcap = hist_sig_endcap->Integral(0, Nbins_sig_endcap + 1);
  denominator_bg_endcap  = hist_bg_endcap->Integral(0, Nbins_bg_endcap + 1);
  
  Double_t eff_sig_barrel[npoints]; //eff for signal of cut on ptPhot. Prova ad usa new per allocare dinam la memoria poter inizializzare a 0
  Double_t eff_bg_barrel[npoints]; //what about initialization?
  
  Double_t eff_sig_endcap[npoints];
  Double_t eff_bg_endcap[npoints]; 

  for(Int_t i=0; i<npoints; i++){
    eff_sig_barrel[i] = hist_sig_barrel->Integral(0,i)/denominator_sig_barrel;
    eff_bg_barrel[i]  = 1 - hist_bg_barrel->Integral(0,i)/denominator_bg_barrel; //actually 1 - eff, ready for ROC curve
    eff_sig_endcap[i] = hist_sig_endcap->Integral(0,i)/denominator_sig_endcap;
    eff_bg_endcap[i]  = 1 - hist_bg_endcap->Integral(0,i)/denominator_bg_endcap;
  }

  for(Int_t i=0; i<npoints; i++){
    cout<<eff_sig_endcap[i]<<" "<<eff_bg_endcap[i]<<endl;  
  }
  
  TGraph* graph_ROC_barrel = new TGraph(npoints, eff_sig_barrel, eff_bg_barrel);
  graph_ROC_barrel->SetName("graph_ROC_barrel");
  TCanvas* canvas_ROC_barrel = new TCanvas("canvas_ROC_barrel", "", 1);                 
  TGraph* graph_ROC_endcap = new TGraph(npoints, eff_sig_endcap, eff_bg_endcap);
  graph_ROC_endcap->SetName("graph_ROC_endcap");
  TCanvas* canvas_ROC_endcap = new TCanvas("canvas_ROC_endcap", "", 1);                 
  
  TFile* file_output = new TFile(name_output.c_str(),"RECREATE");
  file_output->cd();

  hist_sig_barrel ->Write();
  hist_bg_barrel  ->Write();
			
  hist_sig_endcap ->Write();
  hist_bg_endcap  ->Write();
  
  string dir = "graphs";
  
  ostringstream ostr;
  ostr << npoints; 
  string str_npoints = ostr.str();
  
  ostr.str("");
  ostr.clear();
  ostr << xmin;
  string str_xmin = ostr.str();
  
  ostr.str("");
  ostr.clear();
  ostr.flush();
  ostr << xmax;
  string str_xmax = ostr.str();
  
  
  canvas_ROC_barrel->cd();
  TPaveText *pt = new TPaveText(.05,.05,.45,.30);
  pt->SetFillColor(0);
  pt->SetLineColor(0);
  pt->AddText((str_npoints+" equidistant points from").c_str());
  pt->AddText((var+">"+str_xmin+" to "+var+">"+str_xmax).c_str());


  graph_ROC_barrel->SetMarkerSize(0.8);
  graph_ROC_barrel->SetTitle(("ROC curve for cut on "+var+", BARREL").c_str());	
  graph_ROC_barrel->GetXaxis()->SetTitle("#epsilon_{sig}");	
  graph_ROC_barrel->GetXaxis()->SetLimits(0., 1.);	
  graph_ROC_barrel->GetYaxis()->SetTitle("1 - #epsilon_{bg}");	
  graph_ROC_barrel->GetYaxis()->SetRangeUser(0., 1.);	
  graph_ROC_barrel->Draw("A*");
  pt->Draw();
  canvas_ROC_barrel->Write();
  canvas_ROC_barrel->SaveAs((dir+"/graph_ROC_"+var+"_barrel.png").c_str());

  canvas_ROC_endcap->cd();
  graph_ROC_endcap->SetMarkerSize(0.8);
  graph_ROC_endcap->SetTitle(("ROC curve for cut on "+var+", ENDCAP").c_str());	
  graph_ROC_endcap->GetXaxis()->SetTitle("#epsilon_{sig}");	
  graph_ROC_endcap->GetXaxis()->SetLimits(0., 1.);	
  graph_ROC_endcap->GetYaxis()->SetTitle("1 - #epsilon_{bg}");	
  graph_ROC_endcap->GetYaxis()->SetRangeUser(0., 1.);
  graph_ROC_endcap->Draw("A*");
  pt->Draw();
  canvas_ROC_endcap->Write();
  canvas_ROC_endcap->SaveAs((dir+"/graph_ROC_"+var+"_endcap.png").c_str());
  

  canvas_ROC_barrel->Close();
  canvas_ROC_endcap->Close();

  graph_ROC_barrel->Write();
  graph_ROC_endcap->Write();

  
}

Double_t IsoFPRchecks::ReturnValue(string var){
  if(var.compare("pid_pfIsoCharged04ForCiC")==0){
    return pid_pfIsoCharged04ForCiC;
  }
  else if(var.compare("pid_pfIsoPhotons04ForCiC")==0){
    return pid_pfIsoPhotons04ForCiC;
  }
  else if(var.compare("pid_pfIsoNeutrals04ForCiC")==0){
    return pid_pfIsoNeutrals04ForCiC;
  }
  else if(var.compare("combinedPfIso04Phot")==0){
    return (pid_pfIsoCharged04ForCiC + pid_pfIsoNeutrals04ForCiC + pid_pfIsoPhotons04ForCiC);
  }
  else if(var.compare("pid_pfIsoFPRCharged04_presel")==0){
    return pid_pfIsoFPRCharged04_presel;
  }
  else if(var.compare("pid_pfIsoFPRNeutral04_presel")==0){
    return pid_pfIsoFPRNeutral04_presel;
  }
  else if(var.compare("pid_pfIsoFPRPhoton04_presel")==0){
    return pid_pfIsoFPRPhoton04_presel;
  }
  else if(var.compare("combinedPfIsoFPR04Phot")==0){
    return combinedPfIsoFPR04Phot;
  }

  if(var.compare("pid_pfIsoCharged03ForCiC")==0){
    return pid_pfIsoCharged03ForCiC;
  }
  else if(var.compare("pid_pfIsoPhotons03ForCiC")==0){
    return pid_pfIsoPhotons03ForCiC;
  }
  else if(var.compare("pid_pfIsoNeutrals03ForCiC")==0){
    return pid_pfIsoNeutrals03ForCiC;
  }
  else if(var.compare("combinedPfIso03Phot")==0){
    //return (pid_pfIsoCharged03ForCiC + pid_pfIsoNeutrals03ForCiC + pid_pfIsoPhotons03ForCiC);
    return combinedPfIso03Phot;//
  }
  else if(var.compare("pid_pfIsoFPRCharged03_presel")==0){
    return pid_pfIsoFPRCharged03_presel;
  }
  else if(var.compare("pid_pfIsoFPRNeutral03_presel")==0){
    return pid_pfIsoFPRNeutral03_presel;
  }
  else if(var.compare("pid_pfIsoFPRPhoton03_presel")==0){
    return pid_pfIsoFPRPhoton03_presel;
  }
  else if(var.compare("combinedPfIsoFPR03Phot")==0){
    //return (pid_pfIsoFPRCharged03_presel + pid_pfIsoFPRNeutral03_presel + pid_pfIsoFPRPhoton03_presel);
    return combinedPfIsoFPR03Phot;//
  }


}

