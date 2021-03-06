#include "TTree.h"
#include "TCanvas.h"
#include "string"
#include "vector"
#include "TFile.h"
#include "TH1F.h"
#include "TStyle.h"

void plotPull(string ptMin, string ptMax){

  //string workdir="allFixed/";
  string workdir="pull_dataReweight/";

  TFile* file_in = new TFile((workdir+"pullOutFile_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");
  TTree* tree = (TTree*)file_in->Get("tree_toys");

  vector<string> vars(15);
  
  vars[0]  = "CBC_mean";
  vars[1]  = "CBC_sigma";
  vars[2]  = "CBC_alphaC";
  vars[3]  = "CBC_alphaCB";
  vars[4]  = "CBC_n";
  vars[5]  = "cbmean";
  vars[6]  = "cbsigma";
  vars[7]  = "cbalpha_s";
  vars[8]  = "cbn_s";
  vars[9]  = "frac_s";
  vars[10] = "gaussmean";
  vars[11] = "gausssigma";
  vars[12] = "frac_scut";
  vars[13] = "N_scut";
  vars[14] = "N_sig";

  vector<TH1F*> histos(15);
  for(int i=0; i<histos.size(); i++){
    histos[i] = new TH1F(("h_"+vars[i]).c_str(), ("h_"+vars[i]).c_str(), 500, -5., 5.);
  }

  vector<TH1F*> histos_err(15);
  for(int i=0; i<histos_err.size(); i++){
    histos_err[i] = new TH1F(("h_err_"+vars[i]).c_str(), ("h_err_"+vars[i]).c_str(), 100, 0., 1.);
  }

  TCanvas c;

  gStyle->SetOptFit(111111);
  for(int i=0; i<vars.size(); i++){
    tree->Draw(("(val_"+vars[i]+" - realVal_"+vars[i]+")/err_"+vars[i]+">>h(200, -5, 5").c_str());
    histos[i] = (TH1F*)((TH1F*)gDirectory->Get("h"))->Clone(histos[i]->GetName());
    histos[i]->Fit("gaus", "LL");
    histos[i]->Draw();
    c.SaveAs((workdir+"pull_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".root").c_str());
    c.SaveAs((workdir+"pull_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".png").c_str());
    c.SaveAs((workdir+"pull_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".pdf").c_str());

    tree->Draw(("err_"+vars[i]+"/val_"+vars[i]+">>h()").c_str());
    histos_err[i] = (TH1F*)((TH1F*)gDirectory->Get("h"))->Clone(histos_err[i]->GetName());
    histos_err[i]->Draw();
    c.SaveAs((workdir+"err_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".root").c_str());
    c.SaveAs((workdir+"err_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".png").c_str());
    c.SaveAs((workdir+"err_"+vars[i]+"_pt"+ptMin+"_"+ptMax+".pdf").c_str());

    
  }
  

}
