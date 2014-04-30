#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include "iostream"

void closurePlot_dataAndMc(){

  //string outputDir = "plots_preselIso4/";
  //string outputDir = "plots_preselIso5/";
  string outputDir = "plots_tightPresel3/";

  // mc 
  TChain mcChain("myTrees_withWeight");
  mcChain.Add("outputWithWeight_tightPresel3/gjTrees_withWeights.root");
  mcChain.Add("outputWithWeight_tightPresel3/qcdTrees_withWeights.root");

  // data
  TChain dataChain("myTrees_withWeight");
  dataChain.Add("outputWithWeight_tightPresel3/data2012ABCD_withWeights.root");



  // -----------------------------------------------------------------------------
  // only to check the closure: bkg MC in the bkg region
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_notPassMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "", 60, -5., 15.);

  // for the real analysis: bkg MC in the sgn region
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EB = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EB"   , "", 60, -5., 15.);
  TH1F* mc_combFPR03Phot_isNotMatched_passMVA_EE = new TH1F("mc_combFPR03Phot_isNotMatched_passMVA_EE"   , "", 60, -5., 15.);

  // for the real analysis: data in the bkg region
  TH1F* data_combFPR03Phot_notPassMVA_EB = new TH1F("data_combFPR03Phot_notPassMVA_EB", "", 60, -5., 15.);
  TH1F* data_combFPR03Phot_notPassMVA_EE = new TH1F("data_combFPR03Phot_notPassMVA_EE", "", 60, -5., 15.);


  // -----------------------------------------------------------------------------
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> Sumw2();

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> Sumw2();
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> Sumw2();

  data_combFPR03Phot_notPassMVA_EB -> Sumw2();
  data_combFPR03Phot_notPassMVA_EE -> Sumw2();


  
  // -----------------------------------------------------------------------------
  cout << "start projecting" << endl;
  
  //inclusive
  /*
  // only to check the closure: bkg MC in the bkg region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "combinedPfIsoFPR03Phot", "( ((isoW_EB>0 && isoW_EB<100) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-1. && mvaIdPhot<0.83548) )*weight*isoW_EB");   
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "combinedPfIsoFPR03Phot", "( (isoW_EE>0 && isoW_EE<100) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-1. && mvaIdPhot<0.87382) )*weight*isoW_EE");

  // for the real analysis: bkg MC in the sgn region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EB", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548) )*weight");
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EE", "combinedPfIsoFPR03Phot", "( (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382) )*weight");

  // for the real analysis: data in the bkg region 
  dataChain.Project("data_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", "( (isoW_EB>0 && isoW_EB<100) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>-1. && mvaIdPhot<0.83548) )*isoW_EB");
  dataChain.Project("data_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", "( (isoW_EE>0 && isoW_EE<100) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>-1. && mvaIdPhot<0.87382) )*isoW_EE");
  */


  //HLT30
// only to check the closure: bkg MC in the bkg region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EB", "combinedPfIsoFPR03Phot", "( (ptPhot>40. && ptPhot<65.) && (isoW_EB_pt40_65>0 && isoW_EB_pt40_65<100) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>0 && mvaIdPhot<0.6) )*weight*isoW_EB_pt40_65");   
  mcChain.Project("mc_combFPR03Phot_isNotMatched_notPassMVA_EE", "combinedPfIsoFPR03Phot", "( (ptPhot>40. && ptPhot<65.) && (isoW_EE_pt40_65>0 && isoW_EE_pt40_65<100) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>0. && mvaIdPhot<0.6) )*weight*isoW_EE_pt40_65");

  // for the real analysis: bkg MC in the sgn region
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EB", "combinedPfIsoFPR03Phot", "((ptPhot>40. && ptPhot<65.) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot<1. && mvaIdPhot>0.83548) )*weight");
  mcChain.Project("mc_combFPR03Phot_isNotMatched_passMVA_EE", "combinedPfIsoFPR03Phot", "((ptPhot>40. && ptPhot<65.) && (weight>0 && weight<15000) && !isIsolatedGenPhot && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot<1. && mvaIdPhot>0.87382) )*weight");

  // for the real analysis: data in the bkg region 
  dataChain.Project("data_combFPR03Phot_notPassMVA_EB", "combinedPfIsoFPR03Phot", "((ptPhot>40. && ptPhot<65.) && (isoW_EB_pt40_65>0 && isoW_EB_pt40_65<100) && (TMath::Abs(etaPhot)<1.4442) && (mvaIdPhot>0 && mvaIdPhot<0.6) )*isoW_EB_pt40_65");
  dataChain.Project("data_combFPR03Phot_notPassMVA_EE", "combinedPfIsoFPR03Phot", "((ptPhot>40. && ptPhot<65.) && (isoW_EE_pt40_65>0 && isoW_EE_pt40_65<100) && (TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5) && (mvaIdPhot>0 && mvaIdPhot<0.6) )*isoW_EE_pt40_65");



  cout << "done with projecting" << endl;

  /*  debug
  int entries = mc_combFPR03Phot_isNotMatched_passMVA_EB->GetEntries();
  cout << "mc_combFPR03Phot_isNotMatched_passMVA_EB entries = " << entries << endl;
  entries = mc_combFPR03Phot_isNotMatched_passMVA_EE->GetEntries();
  cout << "mc_combFPR03Phot_isNotMatched_passMVA_EE entries = " << entries << endl;

  entries = mc_combFPR03Phot_isNotMatched_notPassMVA_EB->GetEntries();
  cout << "mc_combFPR03Phot_isNotMatched_notPassMVA_EB entries = " << entries << endl;
  entries = mc_combFPR03Phot_isNotMatched_notPassMVA_EE->GetEntries();
  cout << "mc_combFPR03Phot_isNotMatched_notPassMVA_EE entries = " << entries << endl;
  */


  // Now plotting: cosmetics
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> SetFillColor(kGreen-9);
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> SetFillColor(kGreen-9);

  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerStyle(20);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerColor(2);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB -> SetMarkerSize(0.8);
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE -> SetMarkerSize(0.8);

  data_combFPR03Phot_notPassMVA_EB -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerStyle(20);
  data_combFPR03Phot_notPassMVA_EB -> SetMarkerSize(0.8);
  data_combFPR03Phot_notPassMVA_EE -> SetMarkerSize(0.8);

  // titles 
  mc_combFPR03Phot_isNotMatched_passMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  mc_combFPR03Phot_isNotMatched_passMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  //
  data_combFPR03Phot_notPassMVA_EB -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");
  data_combFPR03Phot_notPassMVA_EE -> GetXaxis()->SetTitle("combined PFiso FPR [GeV]");


  // plots
  TLegend* leg=new TLegend(0.5,0.6,0.85, 0.8);
  leg->SetBorderSize(0);
  leg->SetFillColor(0);
  leg->AddEntry(data_combFPR03Phot_notPassMVA_EB, "weighted data (in bkg region)", "p");
  leg->AddEntry(mc_combFPR03Phot_isNotMatched_passMVA_EB, "MC in signal region", "l");

  TCanvas* c1 = new TCanvas("c1", "closureData EB", 1);
  c1->Divide(2,2);
  c1->cd(1); data_combFPR03Phot_notPassMVA_EB->DrawNormalized("pE");
  c1->cd(2); mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  c1->cd(3); 
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EB->DrawNormalized("samepE");
  c1->SaveAs((outputDir+"dataMC_isoEB.png").c_str());

  TCanvas* c2 = new TCanvas("c2", "by def, EB", 1);
  c2->Divide(2,2);
  c2->cd(1); mc_combFPR03Phot_isNotMatched_notPassMVA_EB->DrawNormalized("pE");
  c2->cd(2); mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  c2->cd(3); 
  mc_combFPR03Phot_isNotMatched_passMVA_EB->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EB->DrawNormalized("pEsame");
  c2->SaveAs((outputDir+"closure_isoEB.png").c_str());

  TCanvas* c11 = new TCanvas("c11", "closureData EE", 1);
  c11->Divide(2,2);
  c11->cd(1); data_combFPR03Phot_notPassMVA_EE->DrawNormalized("pE");
  c11->cd(2); mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  c11->cd(3); 
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  data_combFPR03Phot_notPassMVA_EE->DrawNormalized("samepE");
  c11->SaveAs((outputDir+"dataMC_isoEE.png").c_str());

  TCanvas* c12 = new TCanvas("c12", "by def, EE", 1);
  c12->Divide(2,2);
  c12->cd(1); mc_combFPR03Phot_isNotMatched_notPassMVA_EE->DrawNormalized("pE");
  c12->cd(2); mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  c12->cd(3); 
  mc_combFPR03Phot_isNotMatched_passMVA_EE->DrawNormalized("hist");
  mc_combFPR03Phot_isNotMatched_notPassMVA_EE->DrawNormalized("pEsame");
  c12->SaveAs((outputDir+"closure_isoEE.png").c_str());
}
