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

void plotNsig(){

  vector<RooWorkspace*> w (13);
  vector<string> limits (14);
  vector<TFile*> f(13);
  Double_t* nsig = new Double_t[13];
  Double_t* err_nsig = new Double_t[13];
  Double_t* pt = new Double_t[13];
  Double_t* err_pt = new Double_t[13];
  Double_t* norm_lumi = new Double_t[13];
  Double_t* scale_fact = new Double_t[13];

  norm_lumi[0]=2.831017;
  norm_lumi[1]=2.831017;
  norm_lumi[2]=22.020492;
  norm_lumi[3]=22.020492;
  norm_lumi[4]=132.115;
  norm_lumi[5]=132.115;
  norm_lumi[6]=132.115;
  norm_lumi[7]=276.515;
  norm_lumi[9]=276.515;
  norm_lumi[8]=276.515;
  norm_lumi[10]=276.515;
  norm_lumi[11]=276.515;
  norm_lumi[12]=276.515;

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
  pt[11]=151.;
  pt[12]=210.;

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
  err_pt[11]=12.;
  err_pt[12]=47.;
  
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
  limits[12]="163";
  limits[13]="1000";

  scale_fact[0]=   0.997614 * 0.989847; //scF_presel * sc_F_sel_okMVA005  
  scale_fact[1]=   0.999025 * 0.993679; //scF_presel * sc_F_sel_okMVA005
  scale_fact[2]=   0.999965 * 0.993734; //scF_presel * sc_F_sel_okMVA005
  scale_fact[3]=   1.00087  * 0.993787; //scF_presel * sc_F_sel_okMVA005
  scale_fact[4]=   1.00163  * 0.993832; //scF_presel * sc_F_sel_okMVA005
  scale_fact[5]=   1.00195  * 0.993851; //scF_presel * sc_F_sel_okMVA005
  scale_fact[6]=   1.00235  * 0.993875; //scF_presel * sc_F_sel_okMVA005
  scale_fact[7]=   1.00275  * 0.993898; //scF_presel * sc_F_sel_okMVA005
  scale_fact[8]=   1.00318  * 0.993924; //scF_presel * sc_F_sel_okMVA005
  scale_fact[9]=   1.00376  * 0.993958; //scF_presel * sc_F_sel_okMVA005
  scale_fact[10]=  1.00401  * 0.993973; //scF_presel * sc_F_sel_okMVA005
  scale_fact[11]=  1.00401  * 0.993973; //scF_presel * sc_F_sel_okMVA005
  scale_fact[12]=  1.00401  * 0.993973; //scF_presel * sc_F_sel_okMVA005

  

  for(int i=0; i<w.size(); i++){
    f[i] = new TFile(("workspace_fit_EB_data_WP095_pt"+limits[i]+"_"+limits[i+1]+".root").c_str(), "READ");
    w[i] =(RooWorkspace*)f[i]->Get("w_data");
    nsig[i] = (((RooRealVar*)w[i]->var("N_sig_real"))->getVal())/(2.*err_pt[i]*norm_lumi[i]*scale_fact[i]);
    err_nsig[i] = (((RooRealVar*)w[i]->var("N_sig_real"))->getError())/(2.*err_pt[i]*norm_lumi[i]*scale_fact[i]);
  }

  TGraphErrors* g = new TGraphErrors(13, pt, nsig, err_pt, err_nsig);
  g->GetXaxis()->SetTitle("p_{T}^{#gamma} [GeV]");
  g->GetYaxis()->SetTitle("d #sigma/d p_{T}^{#gamma} (ev[pb])/[GeV]");

  TCanvas* c = new TCanvas("","", 1);
  g->Draw("ap");
  TLatex* tex_m = new TLatex();
  tex_m->SetNDC();
  tex_m->SetTextAlign(12);
  tex_m->SetTextSize(0.037);
  tex_m->SetLineWidth(2);
  tex_m->DrawLatex(0.25,0.94,"CMS Preliminary 8 TeV");
  c->SaveAs("plotNsig.png");
  c->SaveAs("plotNsig.pdf");

  c->SetLogy();
  c->SaveAs("plotNsig_log.png");
  c->SaveAs("plotNsig_log.pdf");

}
