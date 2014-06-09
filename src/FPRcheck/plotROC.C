#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <TCanvas.h>
#include <TFile.h>
#include <TH1.h>
#include <TGraph.h>
#include <TLegend.h>
#include <TAttLine.h>
#include <TAttFill.h>
#include <THStack.h>
#include <TColor.h>
#include <TGraph.h>
#include <TPaveStats.h>
#include <TStyle.h>

void plotROC(){

  TFile* input_nonFPR = new TFile("output_combinedPfIso04Phot_extRange.root", "read");
  TFile* input_FPR = new TFile("output_combinedPfIsoFPR04Phot_extRange.root", "read");
  string plotsDir = "plots/";
  //string plotsDir = "plots_onlyG/";
  //string plotsDir = "plots_withIsoChCut/";
  //string plotsDir = "plots_withIsoChCut_noW/";

  TGraph* g_nonFPR_EB;
  TGraph* g_nonFPR_EE;
  TGraph* g_FPR_EB;
  TGraph* g_FPR_EE;
  TH1* h_sig_nonFPR_EB;
  TH1* h_bg_nonFPR_EB; 
  TH1* h_sig_nonFPR_EE;
  TH1* h_bg_nonFPR_EE; 
  TH1* h_sig_FPR_EB;   
  TH1* h_bg_FPR_EB;    
  TH1* h_sig_FPR_EE;   
  TH1* h_bg_FPR_EE;    

  //istogrammi
  h_sig_nonFPR_EB=(TH1F*)input_nonFPR->Get("sig_barrel");
  h_bg_nonFPR_EB =(TH1F*)input_nonFPR->Get("bg_barrel"); 
  h_sig_nonFPR_EE=(TH1F*)input_nonFPR->Get("sig_endcap");
  h_bg_nonFPR_EE =(TH1F*)input_nonFPR->Get("bg_endcap"); 
  h_sig_FPR_EB   =(TH1F*)input_FPR->Get("sig_barrel");
  h_bg_FPR_EB    =(TH1F*)input_FPR->Get("bg_barrel"); 
  h_sig_FPR_EE   =(TH1F*)input_FPR->Get("sig_endcap");
  h_bg_FPR_EE    =(TH1F*)input_FPR->Get("bg_endcap"); 

  h_sig_nonFPR_EB->SetName("h_sig_nonFPR_EB");
  h_bg_nonFPR_EB ->SetName("h_bg_nonFPR_EB");
  h_sig_nonFPR_EE->SetName("h_sig_nonFPR_EE");
  h_bg_nonFPR_EE ->SetName("h_bg_nonFPR_EE");
  h_sig_FPR_EB   ->SetName("h_sig_FPR_EB");
  h_bg_FPR_EB    ->SetName("h_bg_FPR_EB");
  h_sig_FPR_EE   ->SetName("h_sig_FPR_EE");
  h_bg_FPR_EE    ->SetName("h_bg_FPR_EE");

  h_sig_nonFPR_EB->SetLineColor(kBlue);
  h_bg_nonFPR_EB ->SetLineColor(kRed);
  h_sig_nonFPR_EE->SetLineColor(kBlue);
  h_bg_nonFPR_EE ->SetLineColor(kRed);
  h_sig_FPR_EB   ->SetLineColor(kBlue);
  h_bg_FPR_EB    ->SetLineColor(kRed);
  h_sig_FPR_EE   ->SetLineColor(kBlue);
  h_bg_FPR_EE    ->SetLineColor(kRed);

  TCanvas* c_nonFPR_EB = new TCanvas("c_nonFPR_EB", "", 1);
  TCanvas* c_nonFPR_EE = new TCanvas("c_nonFPR_EE", "", 1);
  TCanvas* c_FPR_EB = new TCanvas("c_FPR_EB", "", 1);
  TCanvas* c_FPR_EE = new TCanvas("c_FPR_EE", "", 1);

  TLegend* leg_h = new TLegend(0.55,0.65,0.8,0.8);
  gStyle->SetOptStat(0);
  leg_h->SetFillColor(0);
  leg_h->SetBorderSize(0);
  leg_h->AddEntry(h_sig_FPR_EB, "signal", "l");
  leg_h->AddEntry(h_bg_FPR_EB, "background", "l");

  c_nonFPR_EB->cd();
  h_sig_nonFPR_EB->DrawNormalized();
  h_bg_nonFPR_EB->DrawNormalized("same");
  leg_h->Draw();
  c_nonFPR_EB->SaveAs((plotsDir+"plot_histo_nonFPR_EB.png").c_str());
  c_nonFPR_EB->SetLogy();
  c_nonFPR_EB->SaveAs((plotsDir+"plot_histo_nonFPR_EB_log.png").c_str());
  c_nonFPR_EB->Close();

  c_nonFPR_EE->cd();
  h_sig_nonFPR_EE->DrawNormalized();
  h_bg_nonFPR_EE->DrawNormalized("same");
  leg_h->Draw();
  c_nonFPR_EE->SaveAs((plotsDir+"plot_histo_nonFPR_EE.png").c_str());
  c_nonFPR_EE->SetLogy();
  c_nonFPR_EE->SaveAs((plotsDir+"plot_histo_nonFPR_EE_log.png").c_str());
  c_nonFPR_EE->Close();

  c_FPR_EB->cd();
  h_sig_FPR_EB->DrawNormalized();
  h_bg_FPR_EB->DrawNormalized("same");
  leg_h->Draw();
  c_FPR_EB->SaveAs((plotsDir+"plot_histo_FPR_EB.png").c_str());
  c_FPR_EB->SetLogy();
  c_FPR_EB->SaveAs((plotsDir+"plot_histo_FPR_EB_log.png").c_str());
  c_FPR_EB->Close();

  c_FPR_EE->cd();
  h_sig_FPR_EE->DrawNormalized();
  h_bg_FPR_EE->DrawNormalized("same");
  leg_h->Draw();
  c_FPR_EE->SaveAs((plotsDir+"plot_histo_FPR_EE.png").c_str());
  c_FPR_EE->SetLogy();
  c_FPR_EE->SaveAs((plotsDir+"plot_histo_FPR_EE_log.png").c_str());
  c_FPR_EE->Close();

  //grafici
  g_nonFPR_EB = (TGraph*)input_nonFPR->Get("graph_ROC_barrel");
  g_nonFPR_EE = (TGraph*)input_nonFPR->Get("graph_ROC_endcap");
  g_FPR_EB    = (TGraph*)input_FPR->Get("graph_ROC_barrel");
  g_FPR_EE    = (TGraph*)input_FPR->Get("graph_ROC_endcap");

  g_nonFPR_EB->SetName("g_nonFPR_EB");
  g_nonFPR_EE->SetName("g_nonFPR_EE");
  g_FPR_EB->SetName("g_FPR_EB");
  g_FPR_EE->SetName("g_FPR_EE");

  g_nonFPR_EB ->SetMarkerStyle(20);  
  g_nonFPR_EE ->SetMarkerStyle(20);  
  g_FPR_EB   ->SetMarkerStyle(20);  
  g_FPR_EE   ->SetMarkerStyle(20);  

  g_nonFPR_EB ->SetMarkerColor(kBlue);  
  g_nonFPR_EE ->SetMarkerColor(kBlue);  
  g_FPR_EB   ->SetMarkerColor(kRed);  
  g_FPR_EE   ->SetMarkerColor(kRed);  

  TCanvas* c_EB = new TCanvas("c_EB", "", 1);
  TCanvas* c_EE = new TCanvas("c_EE", "", 1);

  TLegend* leg = new TLegend(0.2,0.25,0.6,0.4);
  gStyle->SetOptStat(0);
  leg->SetFillColor(0);
  leg->SetBorderSize(0);
  leg->AddEntry(g_nonFPR_EB, "combinedPFIso04", "p");
  leg->AddEntry(g_FPR_EB, "combinedPFIso04 with FPR", "p");

  c_EB->cd();
  g_nonFPR_EB->Draw("AP");
  g_FPR_EB->Draw("Psame");
  leg->Draw();
  c_EB->SaveAs((plotsDir+"plotROC_isoPF04_EB.png").c_str());
  c_EB->Close();

  c_EE->cd();
  g_nonFPR_EE->Draw("AP");
  g_FPR_EE->Draw("Psame");
  leg->Draw();
  c_EE->SaveAs((plotsDir+"plotROC_isoPF04_EE.png").c_str());
  c_EE->Close();

}
