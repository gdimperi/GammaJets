#include "TFile.h"
#include "TCanvas.h"
#include "TChain.h"
#include "TTree.h"
#include "TLegend.h"
#include "TH1F.h"
#include "TStyle.h"

#include <algorithm>
#include "iostream"

void makePlot_isoWeight(){

  string outputDir = "histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/";

  TFile* inputFile_hlt30 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt30.root", "read");
  TFile* inputFile_hlt50 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt50.root", "read");
  TFile* inputFile_hlt75 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt75.root", "read");
  TFile* inputFile_hlt90 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt90.root", "read");
  TFile* inputFile_hlt135 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt135.root", "read");
  TFile* inputFile_hlt150 = new TFile("histo_v6/genIso4/isoWeight/tightPresel2/weightsFPR_rebin/isoWeights_hlt150.root", "read");

  TH1F* isoWeight_hlt30_EB = (TH1F*)inputFile_hlt30->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt30_EE = (TH1F*)inputFile_hlt30->Get("h_isoWeight_EE");
  TH1F* isoWeight_hlt50_EB = (TH1F*)inputFile_hlt50->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt50_EE = (TH1F*)inputFile_hlt50->Get("h_isoWeight_EE");
  TH1F* isoWeight_hlt75_EB = (TH1F*)inputFile_hlt75->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt75_EE = (TH1F*)inputFile_hlt75->Get("h_isoWeight_EE");
  TH1F* isoWeight_hlt90_EB = (TH1F*)inputFile_hlt90->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt90_EE = (TH1F*)inputFile_hlt90->Get("h_isoWeight_EE");
  TH1F* isoWeight_hlt135_EB = (TH1F*)inputFile_hlt135->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt135_EE = (TH1F*)inputFile_hlt135->Get("h_isoWeight_EE");
  TH1F* isoWeight_hlt150_EB = (TH1F*)inputFile_hlt150->Get("h_isoWeight_EB");
  TH1F* isoWeight_hlt150_EE = (TH1F*)inputFile_hlt150->Get("h_isoWeight_EE");


  TH1F* isoWeight1_hlt30_EB = (TH1F*)inputFile_hlt30->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt30_EE = (TH1F*)inputFile_hlt30->Get("h_isoWeight1_EE");
  /*
  TH1F* isoWeight1_hlt50_EB = (TH1F*)inputFile_hlt50->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt50_EE = (TH1F*)inputFile_hlt50->Get("h_isoWeight1_EE");
  TH1F* isoWeight1_hlt75_EB = (TH1F*)inputFile_hlt75->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt75_EE = (TH1F*)inputFile_hlt75->Get("h_isoWeight1_EE");
  TH1F* isoWeight1_hlt90_EB = (TH1F*)inputFile_hlt90->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt90_EE = (TH1F*)inputFile_hlt90->Get("h_isoWeight1_EE");
  TH1F* isoWeight1_hlt135_EB = (TH1F*)inputFile_hlt135->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt135_EE = (TH1F*)inputFile_hlt135->Get("h_isoWeight1_EE");
  TH1F* isoWeight1_hlt150_EB = (TH1F*)inputFile_hlt150->Get("h_isoWeight1_EB");
  TH1F* isoWeight1_hlt150_EE = (TH1F*)inputFile_hlt150->Get("h_isoWeight1_EE");
  */

  TH1F* isoWeight2_hlt30_EB = (TH1F*)inputFile_hlt30->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt30_EE = (TH1F*)inputFile_hlt30->Get("h_isoWeight2_EE");
  /*
  TH1F* isoWeight2_hlt50_EB = (TH1F*)inputFile_hlt50->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt50_EE = (TH1F*)inputFile_hlt50->Get("h_isoWeight2_EE");
  TH1F* isoWeight2_hlt75_EB = (TH1F*)inputFile_hlt75->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt75_EE = (TH1F*)inputFile_hlt75->Get("h_isoWeight2_EE");
  TH1F* isoWeight2_hlt90_EB = (TH1F*)inputFile_hlt90->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt90_EE = (TH1F*)inputFile_hlt90->Get("h_isoWeight2_EE");
  TH1F* isoWeight2_hlt135_EB = (TH1F*)inputFile_hlt135->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt135_EE = (TH1F*)inputFile_hlt135->Get("h_isoWeight2_EE");
  TH1F* isoWeight2_hlt150_EB = (TH1F*)inputFile_hlt150->Get("h_isoWeight2_EB");
  TH1F* isoWeight2_hlt150_EE = (TH1F*)inputFile_hlt150->Get("h_isoWeight2_EE");
  */

  isoWeight1_hlt30_EB->SetMarkerStyle(4);
  isoWeight1_hlt30_EE->SetMarkerStyle(4);
  isoWeight1_hlt30_EB->SetLineWidth(2);
  isoWeight1_hlt30_EE->SetLineWidth(2);
  /*
  isoWeight1_hlt50_EB->SetMarkerstyle(4);
  isoWeight1_hlt75_EB->SetMarkerstyle(4);  
  isoWeight1_hlt90_EB->SetMarkerstyle(4);
  isoWeight1_hlt135_EB->SetMarkerstyle(4);
  isoWeight1_hlt150_EB->SetMarkerstyle(4);

  isoWeight1_hlt50_EE->SetMarkerstyle(4);
  isoWeight1_hlt75_EE->SetMarkerstyle(4);
  isoWeight1_hlt90_EE->SetMarkerstyle(4);
  isoWeight1_hlt135_EE->SetMarkerstyle(4);
  isoWeight1_hlt150_EE->SetMarkerstyle(4);
  */
  isoWeight2_hlt30_EB->SetMarkerStyle(4);
  isoWeight2_hlt30_EE->SetMarkerStyle(4);
  isoWeight2_hlt30_EB->SetLineWidth(2);
  isoWeight2_hlt30_EE->SetLineWidth(2);
  /*
  isoWeight2_hlt50_EB->SetMarkerstyle(4);
  isoWeight2_hlt75_EB->SetMarkerstyle(4);  
  isoWeight2_hlt90_EB->SetMarkerstyle(4);
  isoWeight2_hlt135_EB->SetMarkerstyle(4);
  isoWeight2_hlt150_EB->SetMarkerstyle(4);

  isoWeight2_hlt50_EE->SetMarkerstyle(4);
  isoWeight2_hlt75_EE->SetMarkerstyle(4);
  isoWeight2_hlt90_EE->SetMarkerstyle(4);
  isoWeight2_hlt135_EE->SetMarkerstyle(4);
  isoWeight2_hlt150_EE->SetMarkerstyle(4);
  */

  
  isoWeight_hlt30_EB->SetMarkerColor(kCyan);
  isoWeight_hlt30_EB->SetLineColor(kCyan);
  isoWeight_hlt50_EB->SetMarkerColor(kGreen);
  isoWeight_hlt50_EB->SetLineColor(kGreen);
  isoWeight_hlt75_EB->SetMarkerColor(kBlue);
  isoWeight_hlt75_EB->SetLineColor(kBlue);
  isoWeight_hlt90_EB->SetMarkerColor(kMagenta);
  isoWeight_hlt90_EB->SetLineColor(kMagenta);
  isoWeight_hlt135_EB->SetMarkerColor(kTeal+3);
  isoWeight_hlt135_EB->SetLineColor(kTeal+3);
  isoWeight_hlt150_EB->SetMarkerColor(kPink);
  isoWeight_hlt150_EB->SetLineColor(kPink);

 
  isoWeight_hlt30_EE->SetMarkerColor(kCyan);
  isoWeight_hlt30_EE->SetLineColor(kCyan);
  isoWeight_hlt50_EE->SetMarkerColor(kGreen);
  isoWeight_hlt50_EE->SetLineColor(kGreen);
  isoWeight_hlt75_EE->SetMarkerColor(kBlue);
  isoWeight_hlt75_EE->SetLineColor(kBlue);
  isoWeight_hlt90_EE->SetMarkerColor(kMagenta);
  isoWeight_hlt90_EE->SetLineColor(kMagenta);
  isoWeight_hlt135_EE->SetMarkerColor(kTeal+3);
  isoWeight_hlt135_EE->SetLineColor(kTeal+3);
  isoWeight_hlt150_EE->SetMarkerColor(kPink);
  isoWeight_hlt150_EE->SetLineColor(kPink);

  TLegend* leg = new TLegend(0.5, 0.65, 0.85, 0.85);
  leg->SetFillColor(0);
  leg->SetLineWidth(0);
  leg->AddEntry(isoWeight_hlt30_EB, "hlt30", "p");
  leg->AddEntry(isoWeight_hlt50_EB, "hlt50", "p");
  leg->AddEntry(isoWeight_hlt75_EB, "hlt75", "p");
  leg->AddEntry(isoWeight_hlt90_EB, "hlt90", "p");
  leg->AddEntry(isoWeight_hlt135_EB, "hlt135", "p");
  leg->AddEntry(isoWeight_hlt150_EB, "hlt150", "p");
  leg->AddEntry(isoWeight1_hlt30_EB, "w1 and w2 for hlt30", "p");

  TCanvas* c1 = new TCanvas("c1", "", 1);
  c1->cd();

  /*
  //get maximum to adjust the range
  double max30 = isoWeight_hlt30_EB->GetMaximum();
  double max50 = isoWeight_hlt50_EB->GetMaximum();
  double max75 = isoWeight_hlt75_EB->GetMaximum();
  double max90 = isoWeight_hlt90_EB->GetMaximum();
  double max135 = isoWeight_hlt135_EB->GetMaximum();
  double max150 = isoWeight_hlt150_EB->GetMaximum();
  double max_[6] = {max30,max50,max75,max90,max135,max150};
  double returnMax = max_element(max_,max_+5);

  double min30 = isoWeight_hlt30_EB->GetMinimum();
  double min50 = isoWeight_hlt50_EB->GetMinimum();
  double min75 = isoWeight_hlt75_EB->GetMinimum();
  double min90 = isoWeight_hlt90_EB->GetMinimum();
  double min135 = isoWeight_hlt135_EB->GetMinimum();
  double min150 = isoWeight_hlt150_EB->GetMinimum();
  double min_[6] = {min30,min50,min75,min90,min135,min150};
  double returnMin = min_element(min_,min_+5);
  */

  isoWeight_hlt150_EB->GetYaxis()->SetRangeUser(-1., 5.);
  isoWeight_hlt150_EB->Draw("pe1");
  isoWeight_hlt135_EB->Draw("pe1same");
  isoWeight_hlt90_EB->Draw("pe1same");
  isoWeight_hlt75_EB->Draw("pe1same");
  isoWeight_hlt50_EB->Draw("pe1same");
  isoWeight_hlt30_EB->Draw("pe1same");
  isoWeight1_hlt30_EB->Draw("pe1same");
  isoWeight2_hlt30_EB->Draw("pe1same");
  leg->Draw();
  c1->SaveAs((outputDir+"isoWeight_all_EB.png").c_str());
  c1->Clear();

  /*
  max30 = isoWeight_hlt30_EE->GetMaximum();
  max50 = isoWeight_hlt50_EE->GetMaximum();
  max75 = isoWeight_hlt75_EE->GetMaximum();
  max90 = isoWeight_hlt90_EE->GetMaximum();
  max135 = isoWeight_hlt135_EE->GetMaximum();
  max150 = isoWeight_hlt150_EE->GetMaximum();
  max_[6] = {max30,max50,max75,max90,max135,max150};
  returnMax = max_element(max_,max_+5);

  min30 = isoWeight_hlt30_EE->GetMinimum();
  min50 = isoWeight_hlt50_EE->GetMinimum();
  min75 = isoWeight_hlt75_EE->GetMinimum();
  min90 = isoWeight_hlt90_EE->GetMinimum();
  min135 = isoWeight_hlt135_EE->GetMinimum();
  min150 = isoWeight_hlt150_EE->GetMinimum();
  min_[6] = {min30,min50,min75,min90,min135,min150};
  returnMin = min_element(min_,min_+5);
  */

  isoWeight_hlt150_EE->GetYaxis()->SetRangeUser(-1., 5.);
  isoWeight_hlt150_EE->Draw("pe1");
  isoWeight_hlt135_EE->Draw("pe1same");
  isoWeight_hlt90_EE->Draw("pe1same");
  isoWeight_hlt75_EE->Draw("pe1same");
  isoWeight_hlt50_EE->Draw("pe1same");
  isoWeight_hlt30_EE->Draw("pe1same");
  isoWeight1_hlt30_EE->Draw("pe1same");
  isoWeight2_hlt30_EE->Draw("pe1same");
  leg->Draw();
  c1->SaveAs((outputDir+"isoWeight_all_EE.png").c_str());
  c1->Clear();

  c1->Close();

}

