#include "RooPolynomial.h"
#include "RooGaussian.h"
#include "RooExponential.h"
#include "RooLandau.h"
#include "RooRealVar.h"
#include "RooArgList.h"
#include "RooArgSet.h"
#include "RooFFTConvPdf.h"
#include "RooPlot.h"
#include "TCanvas.h"
#include "RooProdPdf.h"
#include "RooExtendPdf.h"
#include "string"
#include "TFile.h"
#include "TH1F.h"
#include "RooAbsReal.h"
#include "RooDataHist.h"
#include "TChain.h"
#include "TTree.h"
#include "RooDataSet.h"
#include "RooAddPdf.h"
#include "RooRealConstant.h"
#include "RooCategory.h"
#include "RooSimultaneous.h"
#include "RooWorkspace.h"
#include "RooFitResult.h"
#include "RooHistPdf.h"
#include "RooCBmyCrujff.h"
#include "RooCBShape.h"
#include "RooMinuit.h"
#include "TMath.h"
#include "RooFormulaVar.h"
#include "TGraphErrors.h"
#include "vector"
#include "TLatex.h"
#include "TLegend.h"

void plotPurity(){

  string inputdir = "fitData_weightedDataCS_config2/";
  string inputdir_w1 = "fitData_weightedDataCS_config2_w1/";
  string inputdir_w2 = "fitData_weightedDataCS_config2_w2/";
  string inputdir_FPR = "fitData_weightedDataCS_FPR_config2/";
  string inputdir_FPR_w1 = "fitData_weightedDataCS_FPR_config2_w1/";
  string inputdir_FPR_w2 = "fitData_weightedDataCS_FPR_config2_w2/";
  string inputdir_nonParam = "fitData_nonParam_config3/";
  string inputdir_nonParam_w1 = "fitData_nonParam_config3_w1/";
  string inputdir_nonParam_w2 = "fitData_nonParam_config3_w2/";
  string inputdir_nonParam_FPR = "fitData_nonParam_FPR_config3/";
  string inputdir_nonParam_FPR_w1 = "fitData_nonParam_FPR_config3_w1/";
  string inputdir_nonParam_FPR_w2 = "fitData_nonParam_FPR_config3_w2/";
  string outputdir = "./";

  vector<RooWorkspace*> w (14);
  vector<string> limits (15);
  vector<TFile*> f(14);
  Double_t* pt = new Double_t[14];
  Double_t* err_pt = new Double_t[14];
  Double_t* purity = new Double_t[14];
  Double_t* err_purity = new Double_t[14];

  vector<RooWorkspace*> w_w1 (14);
  vector<TFile*> f_w1(14);
  Double_t* purity_w1 = new Double_t[14];
  Double_t* err_purity_w1 = new Double_t[14];

  vector<RooWorkspace*> w_w2 (14);
  vector<TFile*> f_w2(14);
  Double_t* purity_w2 = new Double_t[14];
  Double_t* err_purity_w2 = new Double_t[14];

  vector<RooWorkspace*> w_FPR (14);
  vector<TFile*> f_FPR(14);
  Double_t* purity_FPR = new Double_t[14];
  Double_t* err_purity_FPR = new Double_t[14];

  vector<RooWorkspace*> w_FPR_w1 (14);
  vector<TFile*> f_FPR_w1(14);
  Double_t* purity_FPR_w1 = new Double_t[14];
  Double_t* err_purity_FPR_w1 = new Double_t[14];

  vector<RooWorkspace*> w_FPR_w2 (14);
  vector<TFile*> f_FPR_w2(14);
  Double_t* purity_FPR_w2 = new Double_t[14];
  Double_t* err_purity_FPR_w2 = new Double_t[14];

  vector<RooWorkspace*> w_nonParam (14);
  vector<TFile*> f_nonParam(14);
  Double_t* purity_nonParam = new Double_t[14];
  Double_t* err_purity_nonParam = new Double_t[14];

  vector<RooWorkspace*> w_nonParam_w1 (14);
  vector<TFile*> f_nonParam_w1(14);
  Double_t* purity_nonParam_w1 = new Double_t[14];
  Double_t* err_purity_nonParam_w1 = new Double_t[14];

  vector<RooWorkspace*> w_nonParam_w2 (14);
  vector<TFile*> f_nonParam_w2(14);
  Double_t* purity_nonParam_w2 = new Double_t[14];
  Double_t* err_purity_nonParam_w2 = new Double_t[14];

  vector<RooWorkspace*> w_nonParam_FPR (14);
  vector<TFile*> f_nonParam_FPR(14);
  Double_t* purity_nonParam_FPR = new Double_t[14];
  Double_t* err_purity_nonParam_FPR = new Double_t[14];

  vector<RooWorkspace*> w_nonParam_FPR_w1 (14);
  vector<TFile*> f_nonParam_FPR_w1(14);
  Double_t* purity_nonParam_FPR_w1 = new Double_t[14];
  Double_t* err_purity_nonParam_FPR_w1 = new Double_t[14];

  vector<RooWorkspace*> w_nonParam_FPR_w2 (14);
  vector<TFile*> f_nonParam_FPR_w2(14);
  Double_t* purity_nonParam_FPR_w2 = new Double_t[14];
  Double_t* err_purity_nonParam_FPR_w2 = new Double_t[14];

  double purity_mc[14] = {0.538631, 0.610058, 0.68744, 0.723365, 0.771, 0.781373, 0.775929, 0.807222, 0.803787, 0.807683, 0.838527, 0.855121, 0.886747, 0.903301};

  pt[0]=43.5;
  pt[1]=56.;
  pt[2]=69.;
  pt[3]=81.5;
  pt[4]=92.;
  pt[5]=96.5;
  pt[6]=102.;
  pt[7]=107.5;
  pt[8]=113.5;
  pt[9]=121.5;
  pt[10]=132.5;
  pt[11]=152.;
  pt[12]=172.5;
  pt[13]=590;

  err_pt[0]=3.5;
  err_pt[1]=8.;
  err_pt[2]=4.;
  err_pt[3]=8.5;
  err_pt[4]=2.;
  err_pt[5]=2.5;
  err_pt[6]=3.;
  err_pt[7]=2.5;
  err_pt[8]=3.5;
  err_pt[9]=4.5;
  err_pt[10]=6.5;
  err_pt[11]=13;
  err_pt[12]=7.5;
  err_pt[13]=410.;
  
  limits[0]="40";
  limits[1]="47";
  limits[2]="65";
  limits[3]="73";
  limits[4]="90";
  limits[5]="94";
  limits[6]="99";
  limits[7]="105";
  limits[8]="110";
  limits[9]="117";
  limits[10]="126";
  limits[11]="139";
  limits[12]="165";
  limits[13]="180";
  limits[14]="1000";
  

  for(int i=0; i<w.size(); i++){
    f[i] = new TFile((inputdir+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w[i] =(RooWorkspace*)f[i]->Get("w_data");
    purity[i] = ((RooRealVar*)w[i]->var("frac_scut"))->getVal();
    err_purity[i] = ((RooRealVar*)w[i]->var("frac_scut"))->getError();

    f_w1[i] = new TFile((inputdir_w1+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_w1[i] =(RooWorkspace*)f_w1[i]->Get("w_data");
    purity_w1[i] = ((RooRealVar*)w_w1[i]->var("frac_scut"))->getVal();
    err_purity_w1[i] = ((RooRealVar*)w_w1[i]->var("frac_scut"))->getError();

    f_w2[i] = new TFile((inputdir_w2+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_w2[i] =(RooWorkspace*)f_w2[i]->Get("w_data");
    purity_w2[i] = ((RooRealVar*)w_w2[i]->var("frac_scut"))->getVal();
    err_purity_w2[i] = ((RooRealVar*)w_w2[i]->var("frac_scut"))->getError();

    f_FPR[i] = new TFile((inputdir_FPR+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_FPR[i] =(RooWorkspace*)f_FPR[i]->Get("w_data");
    purity_FPR[i] = ((RooRealVar*)w_FPR[i]->var("frac_scut"))->getVal();
    err_purity_FPR[i] = ((RooRealVar*)w_FPR[i]->var("frac_scut"))->getError();

    f_FPR_w1[i] = new TFile((inputdir_FPR_w1+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_FPR_w1[i] =(RooWorkspace*)f_FPR_w1[i]->Get("w_data");
    purity_FPR_w1[i] = ((RooRealVar*)w_FPR_w1[i]->var("frac_scut"))->getVal();
    err_purity_FPR_w1[i] = ((RooRealVar*)w_FPR_w1[i]->var("frac_scut"))->getError();

    f_FPR_w2[i] = new TFile((inputdir_FPR_w2+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_FPR_w2[i] =(RooWorkspace*)f_FPR_w2[i]->Get("w_data");
    purity_FPR_w2[i] = ((RooRealVar*)w_FPR_w2[i]->var("frac_scut"))->getVal();
    err_purity_FPR_w2[i] = ((RooRealVar*)w_FPR_w2[i]->var("frac_scut"))->getError();

    f_nonParam[i] = new TFile((inputdir_nonParam+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam[i] =(RooWorkspace*)f_nonParam[i]->Get("w_data");
    purity_nonParam[i] = ((RooRealVar*)w_nonParam[i]->var("frac_scut"))->getVal();
    err_purity_nonParam[i] = ((RooRealVar*)w_nonParam[i]->var("frac_scut"))->getError();

    f_nonParam_w1[i] = new TFile((inputdir_nonParam_w1+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam_w1[i] =(RooWorkspace*)f_nonParam_w1[i]->Get("w_data");
    purity_nonParam_w1[i] = ((RooRealVar*)w_nonParam_w1[i]->var("frac_scut"))->getVal();
    err_purity_nonParam_w1[i] = ((RooRealVar*)w_nonParam_w1[i]->var("frac_scut"))->getError();

    f_nonParam_w2[i] = new TFile((inputdir_nonParam_w2+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam_w2[i] =(RooWorkspace*)f_nonParam_w2[i]->Get("w_data");
    purity_nonParam_w2[i] = ((RooRealVar*)w_nonParam_w2[i]->var("frac_scut"))->getVal();
    err_purity_nonParam_w2[i] = ((RooRealVar*)w_nonParam_w2[i]->var("frac_scut"))->getError();

    f_nonParam_FPR[i] = new TFile((inputdir_nonParam_FPR+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam_FPR[i] =(RooWorkspace*)f_nonParam_FPR[i]->Get("w_data");
    purity_nonParam_FPR[i] = ((RooRealVar*)w_nonParam_FPR[i]->var("frac_scut"))->getVal();
    err_purity_nonParam_FPR[i] = ((RooRealVar*)w_nonParam_FPR[i]->var("frac_scut"))->getError();

    f_nonParam_FPR_w1[i] = new TFile((inputdir_nonParam_FPR_w1+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam_FPR_w1[i] =(RooWorkspace*)f_nonParam_FPR_w1[i]->Get("w_data");
    purity_nonParam_FPR_w1[i] = ((RooRealVar*)w_nonParam_FPR_w1[i]->var("frac_scut"))->getVal();
    err_purity_nonParam_FPR_w1[i] = ((RooRealVar*)w_nonParam_FPR_w1[i]->var("frac_scut"))->getError();

    f_nonParam_FPR_w2[i] = new TFile((inputdir_nonParam_FPR_w2+"workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w_nonParam_FPR_w2[i] =(RooWorkspace*)f_nonParam_FPR_w2[i]->Get("w_data");
    purity_nonParam_FPR_w2[i] = ((RooRealVar*)w_nonParam_FPR_w2[i]->var("frac_scut"))->getVal();
    err_purity_nonParam_FPR_w2[i] = ((RooRealVar*)w_nonParam_FPR_w2[i]->var("frac_scut"))->getError();

  }

  TGraphErrors* g = new TGraphErrors(14, pt, purity, err_pt, err_purity);
  g->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g->GetYaxis()->SetTitle("purity");
  g->SetMarkerStyle(20);
  g->SetMarkerSize(0.5);

  TGraphErrors* g_w1 = new TGraphErrors(14, pt, purity_w1, err_pt, err_purity_w1);
  g_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_w1->GetYaxis()->SetTitle("purity");
  g_w1->SetMarkerStyle(32);

  TGraphErrors* g_w2 = new TGraphErrors(14, pt, purity_w2, err_pt, err_purity_w2);
  g_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_w2->GetYaxis()->SetTitle("purity");
  g_w2->SetMarkerStyle(26);


  TGraphErrors* g_FPR = new TGraphErrors(14, pt, purity_FPR, err_pt, err_purity_FPR);
  g_FPR->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR->GetYaxis()->SetTitle("purity");
  //g_FPR->SetLineColor(kGreen-6);
  //g_FPR->SetMarkerColor(kGreen-6);
  g_FPR->SetMarkerStyle(20);
  g_FPR->SetMarkerSize(0.5);

  TGraphErrors* g_FPR_w1 = new TGraphErrors(14, pt, purity_FPR_w1, err_pt, err_purity_FPR_w1);
  g_FPR_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR_w1->GetYaxis()->SetTitle("purity");
  //g_FPR_w1->SetLineColor(kGreen-6);
  //g_FPR_w1->SetMarkerColor(kGreen-6);
  g_FPR_w1->SetMarkerStyle(32);

  TGraphErrors* g_FPR_w2 = new TGraphErrors(14, pt, purity_FPR_w2, err_pt, err_purity_FPR_w2);
  g_FPR_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR_w2->GetYaxis()->SetTitle("purity");
  //g_FPR_w2->SetLineColor(kGreen-6);
  //g_FPR_w2->SetMarkerColor(kGreen-6);
  g_FPR_w2->SetMarkerStyle(26);

  TGraphErrors* g_nonParam = new TGraphErrors(14, pt, purity_nonParam, err_pt, err_purity_nonParam);
  g_nonParam->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam->GetYaxis()->SetTitle("purity");
  g_nonParam->SetLineColor(kMagenta);
  g_nonParam->SetMarkerColor(kMagenta);
  g_nonParam->SetMarkerStyle(20);
  g_nonParam->SetMarkerSize(0.5);


  TGraphErrors* g_nonParam_w1 = new TGraphErrors(14, pt, purity_nonParam_w1, err_pt, err_purity_nonParam_w1);
  g_nonParam_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam_w1->GetYaxis()->SetTitle("purity");
  g_nonParam_w1->SetLineColor(kMagenta);
  g_nonParam_w1->SetMarkerColor(kMagenta);
  g_nonParam_w1->SetMarkerStyle(32);

  TGraphErrors* g_nonParam_w2 = new TGraphErrors(14, pt, purity_nonParam_w2, err_pt, err_purity_nonParam_w2);
  g_nonParam_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam_w2->GetYaxis()->SetTitle("purity");
  g_nonParam_w2->SetLineColor(kMagenta);
  g_nonParam_w2->SetMarkerColor(kMagenta);
  g_nonParam_w2->SetMarkerStyle(26);

  TGraphErrors* g_nonParam_FPR = new TGraphErrors(14, pt, purity_nonParam_FPR, err_pt, err_purity_nonParam_FPR);
  g_nonParam_FPR->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam_FPR->GetYaxis()->SetTitle("purity");
  //g_nonParam_FPR->SetLineColor(kBlue);  
  //g_nonParam_FPR->SetMarkerColor(kBlue);
  g_nonParam_FPR->SetLineColor(kMagenta);  
  g_nonParam_FPR->SetMarkerColor(kMagenta);
  g_nonParam_FPR->SetMarkerStyle(20);
  g_nonParam_FPR->SetMarkerSize(0.5);

  TGraphErrors* g_nonParam_FPR_w1 = new TGraphErrors(14, pt, purity_nonParam_FPR_w1, err_pt, err_purity_nonParam_FPR_w1);
  g_nonParam_FPR_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam_FPR_w1->GetYaxis()->SetTitle("purity");
  //g_nonParam_FPR_w1->SetLineColor(kBlue);
  //g_nonParam_FPR_w1->SetMarkerColor(kBlue);
  g_nonParam_FPR_w1->SetLineColor(kMagenta);  
  g_nonParam_FPR_w1->SetMarkerColor(kMagenta);
  g_nonParam_FPR_w1->SetMarkerStyle(32);

  TGraphErrors* g_nonParam_FPR_w2 = new TGraphErrors(14, pt, purity_nonParam_FPR_w2, err_pt, err_purity_nonParam_FPR_w2);
  g_nonParam_FPR_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_nonParam_FPR_w2->GetYaxis()->SetTitle("purity");
  //g_nonParam_FPR_w2->SetLineColor(kBlue);
  //g_nonParam_FPR_w2->SetMarkerColor(kBlue);
  g_nonParam_FPR_w2->SetLineColor(kMagenta);  
  g_nonParam_FPR_w2->SetMarkerColor(kMagenta);
  g_nonParam_FPR_w2->SetMarkerStyle(26);

  TGraph* g_mc = new TGraph(14, pt, purity_mc);
  g_mc->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_mc->GetYaxis()->SetTitle("purity");
  g_mc->SetMarkerStyle(24);

  TLegend* leg = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg->SetFillColor(-1);
  leg->SetLineWidth(0);
  leg->SetLineColor(0);

  /*  
  leg->AddEntry(g, "fitting combinedPFIso03", "p");
  leg->AddEntry(g_w1, "fitting combinedPFIso03, w1", "p");
  leg->AddEntry(g_w2, "fitting combinedPFIso03, w2", "p");
  */
  leg->AddEntry(g_FPR, "fitting combinedPFIso03 FPR", "p");
  leg->AddEntry(g_FPR_w1, "fitting combinedPFIso03 FPR, w1", "p");
  leg->AddEntry(g_FPR_w2, "fitting combinedPFIso03 FPR, w2", "p");
  /*
  leg->AddEntry(g_nonParam, "fitting combinedPFIso03, non param.", "p");
  leg->AddEntry(g_nonParam_w1, "fitting combinedPFIso03, non param. w1", "p");
  leg->AddEntry(g_nonParam_w2, "fitting combinedPFIso03, non param. w2", "p");
  */
  leg->AddEntry(g_nonParam_FPR, "fitting combinedPFIso03 FPR, non param.", "p");
  leg->AddEntry(g_nonParam_FPR_w1, "fitting combinedPFIso03 FPR, non param. w1", "p");
  leg->AddEntry(g_nonParam_FPR_w2, "fitting combinedPFIso03 FPR, non param. w2", "p");
  
  //leg->AddEntry(g_mc, "purity MC", "p");
  
  TCanvas* c = new TCanvas("","", 1);
  c->SetLogx();
  g->GetYaxis()->SetRangeUser(0.2,1.);
  g_FPR->GetYaxis()->SetRangeUser(0.2,1.);
  g_nonParam->GetYaxis()->SetRangeUser(0.2,1.);
  g_nonParam_FPR->GetYaxis()->SetRangeUser(0.2,1.);
  /*
  g->Draw("apsame");
  g_w1->Draw("psame");
  g_w2->Draw("psame");
  */
  g_FPR->Draw("apsame");
  g_FPR_w1->Draw("psame");
  g_FPR_w2->Draw("psame");
  /*
  g_nonParam->Draw("psame");
  g_nonParam_w1->Draw("psame");
  g_nonParam_w2->Draw("psame");
  */
  g_nonParam_FPR->Draw("psame");
  g_nonParam_FPR_w1->Draw("psame");
  g_nonParam_FPR_w2->Draw("psame");
  
  //g_mc->Draw("psame");

  leg->Draw();
  TLatex* tex_m = new TLatex();
  tex_m->SetNDC();
  tex_m->SetTextAlign(12);
  tex_m->SetTextSize(0.037);
  tex_m->SetLineWidth(2);
  tex_m->DrawLatex(0.25,0.94,"CMS Preliminary 8 TeV");
  
  c->SaveAs((outputdir+"purity_comparison_FPR.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_FPR.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_comparison_FPR_log.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_FPR_log.pdf").c_str());

  c->Clear();

  // ----------- parametric fit non FPR --------------------

  TLegend* leg_param = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg_param->SetFillColor(-1);
  leg_param->SetLineWidth(0);
  leg_param->SetLineColor(0);

  leg_param->AddEntry(g, "fitting combinedPFIso03", "p");
  leg_param->AddEntry(g_w1, "fitting combinedPFIso03, w1", "p");
  leg_param->AddEntry(g_w2, "fitting combinedPFIso03, w2", "p");
  
  g->Draw("apsame");
  g_w1->Draw("psame");
  g_w2->Draw("psame");
  leg_param->Draw();

  c->SetLogy(0);
  c->SaveAs((outputdir+"purity_comparison_param.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_param.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_comparison_param_log.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_param_log.pdf").c_str());

  c->Clear();


  
  // ----------- parametric fit  FPR  -----------------

  TLegend* leg_param_FPR = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg_param_FPR->SetFillColor(-1);
  leg_param_FPR->SetLineWidth(0);
  leg_param_FPR->SetLineColor(0);

  leg_param_FPR->AddEntry(g_FPR, "fitting combinedPFIso03 FPR", "p");
  leg_param_FPR->AddEntry(g_FPR_w1, "fitting combinedPFIso03 FPR, w1", "p");
  leg_param_FPR->AddEntry(g_FPR_w2, "fitting combinedPFIso03 FPR, w2", "p");
  
  g_FPR->Draw("apsame");
  g_FPR_w1->Draw("psame");
  g_FPR_w2->Draw("psame");
  leg_param_FPR->Draw();

  c->SetLogy(0);
  c->SaveAs((outputdir+"purity_comparison_param_FPR.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_param_FPR.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_comparison_param_FPR_log.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_param_FPR_log.pdf").c_str());

  c->Clear();
  

  // -------------non parametric fit non FPR ----------

  TLegend* leg_nonParam = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg_nonParam->SetFillColor(-1);
  leg_nonParam->SetLineWidth(0);
  leg_nonParam->SetLineColor(0);

  leg_nonParam->AddEntry(g_nonParam, "fitting combinedPFIso03, non param.", "p");
  leg_nonParam->AddEntry(g_nonParam_w1, "fitting combinedPFIso03, non param. w1", "p");
  leg_nonParam->AddEntry(g_nonParam_w2, "fitting combinedPFIso03, non param. w2", "p");
  
  g_nonParam->Draw("apsame");
  g_nonParam_w1->Draw("psame");
  g_nonParam_w2->Draw("psame");
  leg_nonParam->Draw();
  
  c->SetLogy(0);
  c->SaveAs((outputdir+"purity_comparison_nonParam.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_nonParam.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_comparison_nonParam_log.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_nonParam_log.pdf").c_str());

  c->Clear();


  // ------------non parametric fit FPR -----------

  TLegend* leg_nonParam_FPR = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg_nonParam_FPR->SetFillColor(-1);
  leg_nonParam_FPR->SetLineWidth(0);
  leg_nonParam_FPR->SetLineColor(0);

  leg_nonParam_FPR->AddEntry(g_nonParam_FPR, "fitting combinedPFIso03 FPR, non param.", "p");
  leg_nonParam_FPR->AddEntry(g_nonParam_FPR_w1, "fitting combinedPFIso03 FPR, non param. w1", "p");
  leg_nonParam_FPR->AddEntry(g_nonParam_FPR_w2, "fitting combinedPFIso03 FPR, non param. w2", "p");

  g_nonParam_FPR->Draw("apsame");
  g_nonParam_FPR_w1->Draw("psame");
  g_nonParam_FPR_w2->Draw("psame");
  leg_nonParam_FPR->Draw();


  c->SetLogy(0);
  c->SaveAs((outputdir+"purity_comparison_nonParam_FPR.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_nonParam_FPR.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_comparison_nonParam_FPR_log.png").c_str());
  c->SaveAs((outputdir+"purity_comparison_nonParam_FPR_log.pdf").c_str());

  c->Clear();
  c->Close();

}
