#include <sstream>
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

  // string inputdir = "fit_data_nonParam/";
//   string inputdir_w1 = "fit_data_nonParam_w1/";
//   string inputdir_w2 = "fit_data_nonParam_w2/";
//   string inputdir_FPR = "fit_data_nonParam_FPR/";
//   string inputdir_FPR_w1 = "fit_data_nonParam_FPR_w1/";
//   string inputdir_FPR_w2 = "fit_data_nonParam_FPR_w2/";
  string inputdir = "test/";
  string inputdir_w1 = "test/";
  string inputdir_w2 = "test/";
  string inputdir_FPR = "test/";
  string inputdir_FPR_w1 = "test/";
  string inputdir_FPR_w2 = "test/";


  string outputdir = "./test_plots_purity/";

  vector<RooWorkspace*> w (61);
  vector<string> limits_EB (62);
  vector<TFile*> f(61);
  Double_t* pt_EB = new Double_t[61];
  Double_t* err_pt_EB = new Double_t[61];
  Double_t* purity_EB = new Double_t[61];
  Double_t* err_purity_EB = new Double_t[61];

  vector<RooWorkspace*> w_w1 (61);
  vector<TFile*> f_w1(61);
  Double_t* purity_EB_w1 = new Double_t[61];
  Double_t* err_purity_EB_w1 = new Double_t[61];

  vector<RooWorkspace*> w_w2 (61);
  vector<TFile*> f_w2(61);
  Double_t* purity_EB_w2 = new Double_t[61];
  Double_t* err_purity_EB_w2 = new Double_t[61];

  //FPR
  vector<RooWorkspace*> w_FPR (61);
  vector<TFile*> f_FPR(61);
  Double_t* purity_EB_FPR = new Double_t[61];
  Double_t* err_purity_EB_FPR = new Double_t[61];

  vector<RooWorkspace*> w_FPR_w1 (61);
  vector<TFile*> f_FPR_w1(61);
  Double_t* purity_EB_FPR_w1 = new Double_t[61];
  Double_t* err_purity_EB_FPR_w1 = new Double_t[61];

  vector<RooWorkspace*> w_FPR_w2 (61);
  vector<TFile*> f_FPR_w2(61);
  Double_t* purity_EB_FPR_w2 = new Double_t[61];
  Double_t* err_purity_EB_FPR_w2 = new Double_t[61];



//   vector<RooWorkspace*> w_nonParam (60);
//   vector<TFile*> f_nonParam(60);
//   Double_t* purity_nonParam = new Double_t[60];
//   Double_t* err_purity_nonParam = new Double_t[60];

//   vector<RooWorkspace*> w_nonParam_w1 (60);
//   vector<TFile*> f_nonParam_w1(60);
//   Double_t* purity_nonParam_w1 = new Double_t[60];
//   Double_t* err_purity_nonParam_w1 = new Double_t[60];

//   vector<RooWorkspace*> w_nonParam_w2 (60);
//   vector<TFile*> f_nonParam_w2(60);
//   Double_t* purity_nonParam_w2 = new Double_t[60];
//   Double_t* err_purity_nonParam_w2 = new Double_t[60];

  int j=0;
  int limit = 0;

  pt_EB[0]	=43.5	;
  pt_EB[1]	=56.	;
  pt_EB[2]	=69.	;
  pt_EB[3]	=81.5	;
  pt_EB[4]	=92.	;
  pt_EB[5]	=96.5	;
  pt_EB[6]	=102.	;
  pt_EB[7]	=107.5	;
  pt_EB[8]	=113.5	;
  pt_EB[9]	=121.5	;
  pt_EB[10]	=132.5	;
  pt_EB[11]	=152.	;
  pt_EB[12]	=160.	;
  for(int i=13; i<28; i++){ //15 with step of 1
    pt_EB[i]	=165.5+j;
    j++;
  }
  j=0;
  for(int i=27; i<43; i++) { //15 with step of 2

    cout << "i = " << i  << "    j = " << j << endl;
    pt_EB[i]	=181.+2.*j;
    j++;
  }
  j=0;
  for(int i=43; i<55; i++){ //12 with step of 5
    cout << "i = " << i  << "    j = " << j << endl;
    pt_EB[i]	= 212.5+5.*j;
    j++;
  }
  j=0;
  pt_EB[55]	=280.;
  pt_EB[56]	=300.;
  pt_EB[57]	=325.;
  pt_EB[58]	=360.;
  pt_EB[59]	=430.;
  pt_EB[60]	=530.;
 


//   pt_EE[0]	=;
//   pt_EE[1]	=;
//   pt_EE[2]	=;
//   pt_EE[3]	=;
//   pt_EE[4]	=;
//   pt_EE[5]	=;
//   pt_EE[6]	=;
//   pt_EE[7]	=;
//   pt_EE[8]	=;
//   pt_EE[9]	=;
//   pt_EE[10]	=;
//   pt_EE[11]	=;
//   pt_EE[12]	=;
//   pt_EE[13]	=;
//   pt_EE[14]	=;
//   pt_EE[15]	=;
//   pt_EE[16]	=;
//   pt_EE[17]	=;
//   pt_EE[18]	=;


  // err_pt[0]=3.5;
//   err_pt[1]=8.;
//   err_pt[2]=4.;
//   err_pt[3]=8.5;
//   err_pt[4]=2.;
//   err_pt[5]=2.5;
//   err_pt[6]=3.;
//   err_pt[7]=2.5;
//   err_pt[8]=3.5;
//   err_pt[9]=4.5;
//   err_pt[10]=6.5;
//   err_pt[11]=13;
//   err_pt[12]=7.5;
//   err_pt[13]=410.;

  for(int i=0; i<61; i++) {
    err_pt_EB[i]=0;
  }
  
  limits_EB[0]="40";
  limits_EB[1]="47";
  limits_EB[2]="65";
  limits_EB[3]="73";
  limits_EB[4]="90";
  limits_EB[5]="94";
  limits_EB[6]="99";
  limits_EB[7]="105";
  limits_EB[8]="110";
  limits_EB[9]="117";
  limits_EB[10]="126";
  limits_EB[11]="139";
  limits_EB[12]="155";
  j=0;
  for(int i=13; i<28; i++){ //15 with step of 1
    limit	=165+j;
    std::stringstream buffer;
    buffer <<  limit ;
    limits_EB[i] = buffer.str(); 
    cout << "limits_EB["<<i<< "] = " <<  limits_EB[i] << endl;

    j++;
  }
  j=0;
  for(int i=28; i<43; i++) { //15 with step of 2
    limit	=180.+2.*j;
    std::stringstream buffer;
    buffer <<  limit ;
    limits_EB[i] = buffer.str(); 
    cout << "limits_EB["<<i<< "] = " <<  limits_EB[i] << endl;
    j++;
  }
  j=0;
  for(int i=43; i<55; i++){ //12 with step of 5
    limit	= 210.+5.*j;
    std::stringstream buffer;
    buffer <<  limit ;
    limits_EB[i] = buffer.str(); 
    cout << "limits_EB["<<i<< "] = " <<  limits_EB[i] << endl;
    j++;
  }  
  j=0;
  limits_EB[55]	="270";
  limits_EB[56]	="290";
  limits_EB[57]	="310";
  limits_EB[58]	="340";
  limits_EB[59]	="380";
  limits_EB[60]	="480";
  limits_EB[61]	="1000";

 

  for(int i=0; i<w.size(); i++){
    f[i] = new TFile((inputdir+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w[i] =(RooWorkspace*)f[i]->Get("w_data");
    purity_EB[i] = ((RooRealVar*)w[i]->var("frac_scut"))->getVal();
    err_purity_EB[i] = ((RooRealVar*)w[i]->var("frac_scut"))->getError();

    f_w1[i] = new TFile((inputdir_w1+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w_w1[i] =(RooWorkspace*)f_w1[i]->Get("w_data");
    purity_EB_w1[i] = ((RooRealVar*)w_w1[i]->var("frac_scut"))->getVal();
    err_purity_EB_w1[i] = ((RooRealVar*)w_w1[i]->var("frac_scut"))->getError();

    f_w2[i] = new TFile((inputdir_w2+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w_w2[i] =(RooWorkspace*)f_w2[i]->Get("w_data");
    purity_EB_w2[i] = ((RooRealVar*)w_w2[i]->var("frac_scut"))->getVal();
    err_purity_EB_w2[i] = ((RooRealVar*)w_w2[i]->var("frac_scut"))->getError();

    f_FPR[i] = new TFile((inputdir_FPR+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w_FPR[i] =(RooWorkspace*)f_FPR[i]->Get("w_data");
    purity_EB_FPR[i] = ((RooRealVar*)w_FPR[i]->var("frac_scut"))->getVal();
    err_purity_EB_FPR[i] = ((RooRealVar*)w_FPR[i]->var("frac_scut"))->getError();

    f_FPR_w1[i] = new TFile((inputdir_FPR_w1+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w_FPR_w1[i] =(RooWorkspace*)f_FPR_w1[i]->Get("w_data");
    purity_EB_FPR_w1[i] = ((RooRealVar*)w_FPR_w1[i]->var("frac_scut"))->getVal();
    err_purity_EB_FPR_w1[i] = ((RooRealVar*)w_FPR_w1[i]->var("frac_scut"))->getError();

    f_FPR_w2[i] = new TFile((inputdir_FPR_w2+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
    w_FPR_w2[i] =(RooWorkspace*)f_FPR_w2[i]->Get("w_data");
    purity_EB_FPR_w2[i] = ((RooRealVar*)w_FPR_w2[i]->var("frac_scut"))->getVal();
    err_purity_EB_FPR_w2[i] = ((RooRealVar*)w_FPR_w2[i]->var("frac_scut"))->getError();

//     f_nonParam[i] = new TFile((inputdir_nonParam+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam[i] =(RooWorkspace*)f_nonParam[i]->Get("w_data");
//     purity_EB_nonParam[i] = ((RooRealVar*)w_nonParam[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam[i] = ((RooRealVar*)w_nonParam[i]->var("frac_scut"))->getError();

//     f_nonParam_w1[i] = new TFile((inputdir_nonParam_w1+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam_w1[i] =(RooWorkspace*)f_nonParam_w1[i]->Get("w_data");
//     purity_EB_nonParam_w1[i] = ((RooRealVar*)w_nonParam_w1[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam_w1[i] = ((RooRealVar*)w_nonParam_w1[i]->var("frac_scut"))->getError();

//     f_nonParam_w2[i] = new TFile((inputdir_nonParam_w2+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam_w2[i] =(RooWorkspace*)f_nonParam_w2[i]->Get("w_data");
//     purity_EB_nonParam_w2[i] = ((RooRealVar*)w_nonParam_w2[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam_w2[i] = ((RooRealVar*)w_nonParam_w2[i]->var("frac_scut"))->getError();

//     f_nonParam_FPR[i] = new TFile((inputdir_nonParam_FPR+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam_FPR[i] =(RooWorkspace*)f_nonParam_FPR[i]->Get("w_data");
//     purity_EB_nonParam_FPR[i] = ((RooRealVar*)w_nonParam_FPR[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam_FPR[i] = ((RooRealVar*)w_nonParam_FPR[i]->var("frac_scut"))->getError();

//     f_nonParam_FPR_w1[i] = new TFile((inputdir_nonParam_FPR_w1+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam_FPR_w1[i] =(RooWorkspace*)f_nonParam_FPR_w1[i]->Get("w_data");
//     purity_EB_nonParam_FPR_w1[i] = ((RooRealVar*)w_nonParam_FPR_w1[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam_FPR_w1[i] = ((RooRealVar*)w_nonParam_FPR_w1[i]->var("frac_scut"))->getError();

//     f_nonParam_FPR_w2[i] = new TFile((inputdir_nonParam_FPR_w2+"workspace_fit_EB_data_WP095_pt"+limits_EB[i]+"_"+limits_EB[i+1]+".root").c_str(), "READ");
//     w_nonParam_FPR_w2[i] =(RooWorkspace*)f_nonParam_FPR_w2[i]->Get("w_data");
//     purity_EB_nonParam_FPR_w2[i] = ((RooRealVar*)w_nonParam_FPR_w2[i]->var("frac_scut"))->getVal();
//     err_purity_EB_nonParam_FPR_w2[i] = ((RooRealVar*)w_nonParam_FPR_w2[i]->var("frac_scut"))->getError();

  }

  TGraphErrors* g = new TGraphErrors(61, pt_EB, purity_EB, err_pt_EB, err_purity_EB);
  g->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g->GetYaxis()->SetTitle("purity_EB");
  g->SetMarkerStyle(20);
  g->SetMarkerSize(0.5);

  TGraphErrors* g_w1 = new TGraphErrors(61, pt_EB, purity_EB_w1, err_pt_EB, err_purity_EB_w1);
  g_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_w1->GetYaxis()->SetTitle("purity_EB");
  g_w1->SetMarkerStyle(32);

  TGraphErrors* g_w2 = new TGraphErrors(61, pt_EB, purity_EB_w2, err_pt_EB, err_purity_EB_w2);
  g_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_w2->GetYaxis()->SetTitle("purity_EB");
  g_w2->SetMarkerStyle(26);


  TGraphErrors* g_FPR = new TGraphErrors(61, pt_EB, purity_EB_FPR, err_pt_EB, err_purity_EB_FPR);
  g_FPR->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR->GetYaxis()->SetTitle("purity_EB");
  //g_FPR->SetLineColor(kGreen-6);
  //g_FPR->SetMarkerColor(kGreen-6);
  g_FPR->SetMarkerStyle(20);
  g_FPR->SetMarkerSize(0.5);

  TGraphErrors* g_FPR_w1 = new TGraphErrors(61, pt_EB, purity_EB_FPR_w1, err_pt_EB, err_purity_EB_FPR_w1);
  g_FPR_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR_w1->GetYaxis()->SetTitle("purity_EB");
  //g_FPR_w1->SetLineColor(kGreen-6);
  //g_FPR_w1->SetMarkerColor(kGreen-6);
  g_FPR_w1->SetMarkerStyle(32);

  TGraphErrors* g_FPR_w2 = new TGraphErrors(61, pt_EB, purity_EB_FPR_w2, err_pt_EB, err_purity_EB_FPR_w2);
  g_FPR_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g_FPR_w2->GetYaxis()->SetTitle("purity_EB");
  //g_FPR_w2->SetLineColor(kGreen-6);
  //g_FPR_w2->SetMarkerColor(kGreen-6);
  g_FPR_w2->SetMarkerStyle(26);



//   TGraphErrors* g_nonParam = new TGraphErrors(14, pt_EB, purity_EB_nonParam, err_pt_EB, err_purity_EB_nonParam);
//   g_nonParam->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam->GetYaxis()->SetTitle("purity_EB");
//   g_nonParam->SetLineColor(kMagenta);
//   g_nonParam->SetMarkerColor(kMagenta);
//   g_nonParam->SetMarkerStyle(20);
//   g_nonParam->SetMarkerSize(0.5);


//   TGraphErrors* g_nonParam_w1 = new TGraphErrors(14, pt_EB, purity_EB_nonParam_w1, err_pt_EB, err_purity_EB_nonParam_w1);
//   g_nonParam_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam_w1->GetYaxis()->SetTitle("purity_EB");
//   g_nonParam_w1->SetLineColor(kMagenta);
//   g_nonParam_w1->SetMarkerColor(kMagenta);
//   g_nonParam_w1->SetMarkerStyle(32);

//   TGraphErrors* g_nonParam_w2 = new TGraphErrors(14, pt_EB, purity_EB_nonParam_w2, err_pt_EB, err_purity_EB_nonParam_w2);
//   g_nonParam_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam_w2->GetYaxis()->SetTitle("purity_EB");
//   g_nonParam_w2->SetLineColor(kMagenta);
//   g_nonParam_w2->SetMarkerColor(kMagenta);
//   g_nonParam_w2->SetMarkerStyle(26);

  // TGraphErrors* g_nonParam_FPR = new TGraphErrors(14, pt_EB, purity_EB_nonParam_FPR, err_pt_EB, err_purity_EB_nonParam_FPR);
//   g_nonParam_FPR->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam_FPR->GetYaxis()->SetTitle("purity_EB");
//   //g_nonParam_FPR->SetLineColor(kBlue);  
//   //g_nonParam_FPR->SetMarkerColor(kBlue);
//   g_nonParam_FPR->SetLineColor(kMagenta);  
//   g_nonParam_FPR->SetMarkerColor(kMagenta);
//   g_nonParam_FPR->SetMarkerStyle(20);
//   g_nonParam_FPR->SetMarkerSize(0.5);

//   TGraphErrors* g_nonParam_FPR_w1 = new TGraphErrors(14, pt_EB, purity_EB_nonParam_FPR_w1, err_pt_EB, err_purity_EB_nonParam_FPR_w1);
//   g_nonParam_FPR_w1->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam_FPR_w1->GetYaxis()->SetTitle("purity_EB");
//   //g_nonParam_FPR_w1->SetLineColor(kBlue);
//   //g_nonParam_FPR_w1->SetMarkerColor(kBlue);
//   g_nonParam_FPR_w1->SetLineColor(kMagenta);  
//   g_nonParam_FPR_w1->SetMarkerColor(kMagenta);
//   g_nonParam_FPR_w1->SetMarkerStyle(32);

//   TGraphErrors* g_nonParam_FPR_w2 = new TGraphErrors(14, pt_EB, purity_EB_nonParam_FPR_w2, err_pt_EB, err_purity_EB_nonParam_FPR_w2);
//   g_nonParam_FPR_w2->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_nonParam_FPR_w2->GetYaxis()->SetTitle("purity_EB");
//   //g_nonParam_FPR_w2->SetLineColor(kBlue);
//   //g_nonParam_FPR_w2->SetMarkerColor(kBlue);
//   g_nonParam_FPR_w2->SetLineColor(kMagenta);  
//   g_nonParam_FPR_w2->SetMarkerColor(kMagenta);
//   g_nonParam_FPR_w2->SetMarkerStyle(26);

//   TGraph* g_mc = new TGraph(14, pt_EB, purity_EB_mc);
//   g_mc->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
//   g_mc->GetYaxis()->SetTitle("purity_EB");
//   g_mc->SetMarkerStyle(24);

  TLegend* leg = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg->SetFillColor(-1);
  leg->SetLineWidth(0);
  leg->SetLineColor(0);

    
  leg->AddEntry(g, "fitting combinedPFIso03", "p");
  leg->AddEntry(g_w1, "fitting combinedPFIso03, w1", "p");
  leg->AddEntry(g_w2, "fitting combinedPFIso03, w2", "p");
/*  
  leg->AddEntry(g_FPR, "fitting combinedPFIso03 FPR", "p");
  leg->AddEntry(g_FPR_w1, "fitting combinedPFIso03 FPR, w1", "p");
  leg->AddEntry(g_FPR_w2, "fitting combinedPFIso03 FPR, w2", "p");
  
  leg->AddEntry(g_nonParam, "fitting combinedPFIso03, non param.", "p");
  leg->AddEntry(g_nonParam_w1, "fitting combinedPFIso03, non param. w1", "p");
  leg->AddEntry(g_nonParam_w2, "fitting combinedPFIso03, non param. w2", "p");
  
  leg->AddEntry(g_nonParam_FPR, "fitting combinedPFIso03 FPR, non param.", "p");
  leg->AddEntry(g_nonParam_FPR_w1, "fitting combinedPFIso03 FPR, non param. w1", "p");
  leg->AddEntry(g_nonParam_FPR_w2, "fitting combinedPFIso03 FPR, non param. w2", "p");
  */
  //leg->AddEntry(g_mc, "purity_EB MC", "p");
  
  TCanvas* c = new TCanvas("","", 1);
  //c->SetLogx();
  g->GetXaxis()->SetRangeUser(40.,1000.);
  g->GetYaxis()->SetRangeUser(0.2,1.);
  g_FPR->GetXaxis()->SetRangeUser(40.,1000.);
  g_FPR->GetYaxis()->SetRangeUser(0.2,1.);
  //g_nonParam->GetYaxis()->SetRangeUser(0.2,1.);
  //g_nonParam_FPR->GetYaxis()->SetRangeUser(0.2,1.);
  
  g->Draw("apsame");
  g_w1->Draw("psame");
  g_w2->Draw("psame");

  /*  
  g_FPR->Draw("apsame");
  g_FPR_w1->Draw("psame");
  g_FPR_w2->Draw("psame");

  g_nonParam->Draw("psame");
  g_nonParam_w1->Draw("psame");
  g_nonParam_w2->Draw("psame");
  
  g_nonParam_FPR->Draw("psame");
  g_nonParam_FPR_w1->Draw("psame");
  g_nonParam_FPR_w2->Draw("psame");
  */
  //g_mc->Draw("psame");

  leg->Draw();
  TLatex* tex_m = new TLatex();
  tex_m->SetNDC();
  tex_m->SetTextAlign(12);
  tex_m->SetTextSize(0.037);
  tex_m->SetLineWidth(2);
  tex_m->DrawLatex(0.25,0.94,"CMS Preliminary 8 TeV");
  
  c->SaveAs((outputdir+"purity_EB_comparison.png").c_str());
  c->SaveAs((outputdir+"purity_EB_comparison.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_EB_comparison_log.png").c_str());
  c->SaveAs((outputdir+"purity_EB_comparison_log.pdf").c_str());

  c->Clear();

//   // ----------- all non parametric, non FPR --------------------

//   TLegend* leg = new TLegend(0.3, 0.15, 0.88, 0.5);
//   leg->SetFillColor(-1);
//   leg->SetLineWidth(0);
//   leg->SetLineColor(0);

//   leg->AddEntry(g, "fitting combinedPFIso03", "p");
//   leg->AddEntry(g_w1, "fitting combinedPFIso03, w1", "p");
//   leg->AddEntry(g_w2, "fitting combinedPFIso03, w2", "p");
  
//   g->Draw("apsame");
//   g_w1->Draw("psame");
//   g_w2->Draw("psame");
//   leg->Draw();

//   c->SetLogy(0);
//   c->SaveAs((outputdir+"purity_EB_comparison.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison.pdf").c_str());

//   c->SetLogy();
//   c->SaveAs((outputdir+"purity_EB_comparison_log.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison_log.pdf").c_str());

//   c->Clear();


  
  // ----------- parametric fit  FPR  -----------------

  TLegend* leg_FPR = new TLegend(0.3, 0.15, 0.88, 0.5);
  leg_FPR->SetFillColor(-1);
  leg_FPR->SetLineWidth(0);
  leg_FPR->SetLineColor(0);

  leg_FPR->AddEntry(g_FPR, "fitting combinedPFIso03 FPR", "p");
  leg_FPR->AddEntry(g_FPR_w1, "fitting combinedPFIso03 FPR, w1", "p");
  leg_FPR->AddEntry(g_FPR_w2, "fitting combinedPFIso03 FPR, w2", "p");

  g_FPR->Draw("apsame");
  //g_FPR_w1->Draw("psame");
  //g_FPR_w2->Draw("psame");
  //leg_FPR->Draw();

  c->SetLogy(0);
  c->SaveAs((outputdir+"purity_EB_comparison_FPR.png").c_str());
  c->SaveAs((outputdir+"purity_EB_comparison_FPR.pdf").c_str());

  c->SetLogy();
  c->SaveAs((outputdir+"purity_EB_comparison_FPR_log.png").c_str());
  c->SaveAs((outputdir+"purity_EB_comparison_FPR_log.pdf").c_str());

  c->Clear();
  

//   // -------------non parametric fit non FPR ----------

//   TLegend* leg_nonParam = new TLegend(0.3, 0.15, 0.88, 0.5);
//   leg_nonParam->SetFillColor(-1);
//   leg_nonParam->SetLineWidth(0);
//   leg_nonParam->SetLineColor(0);

//   leg_nonParam->AddEntry(g_nonParam, "fitting combinedPFIso03, non param.", "p");
//   leg_nonParam->AddEntry(g_nonParam_w1, "fitting combinedPFIso03, non param. w1", "p");
//   leg_nonParam->AddEntry(g_nonParam_w2, "fitting combinedPFIso03, non param. w2", "p");
  
//   g_nonParam->Draw("apsame");
//   g_nonParam_w1->Draw("psame");
//   g_nonParam_w2->Draw("psame");
//   leg_nonParam->Draw();
  
//   c->SetLogy(0);
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam.pdf").c_str());

//   c->SetLogy();
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_log.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_log.pdf").c_str());

//   c->Clear();


//   // ------------non parametric fit FPR -----------

//   TLegend* leg_nonParam_FPR = new TLegend(0.3, 0.15, 0.88, 0.5);
//   leg_nonParam_FPR->SetFillColor(-1);
//   leg_nonParam_FPR->SetLineWidth(0);
//   leg_nonParam_FPR->SetLineColor(0);

//   leg_nonParam_FPR->AddEntry(g_nonParam_FPR, "fitting combinedPFIso03 FPR, non param.", "p");
//   leg_nonParam_FPR->AddEntry(g_nonParam_FPR_w1, "fitting combinedPFIso03 FPR, non param. w1", "p");
//   leg_nonParam_FPR->AddEntry(g_nonParam_FPR_w2, "fitting combinedPFIso03 FPR, non param. w2", "p");

//   g_nonParam_FPR->Draw("apsame");
//   g_nonParam_FPR_w1->Draw("psame");
//   g_nonParam_FPR_w2->Draw("psame");
//   leg_nonParam_FPR->Draw();


//   c->SetLogy(0);
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_FPR.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_FPR.pdf").c_str());

//   c->SetLogy();
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_FPR_log.png").c_str());
//   c->SaveAs((outputdir+"purity_EB_comparison_nonParam_FPR_log.pdf").c_str());

//   c->Clear();
  c->Close();

}
