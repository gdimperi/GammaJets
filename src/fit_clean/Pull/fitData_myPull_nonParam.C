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
#include "RooMCStudy.h"
#include "TObjString.h"
#include "TVector.h"
#include "RooRandom.h"
#include "RooFormulaVar.h"
#include "RooKeysPdf.h"

using namespace RooFit;

//string workdir="pull_weightedDataCS_config1/";
//string workdir_input="../";
void fitData_myPull(string ptMin, string ptMax, int numEv, double purity, int config,  string workdir_input, string workdir);
int main(){
  return 0;
}

void fitData_myPull(string ptMin, string ptMax, int numEv, double purity, int config,  string workdir_input, string workdir){
  int numFits = 1000;

  TFile* outFile = new TFile((workdir+"pullOutFile_pt"+ptMin+"_"+ptMax+".root").c_str(), "RECREATE");

  TTree* tree_toys = new TTree("tree_toys", "tree_toys"); 

  double val_CBC_mean;      
  double val_CBC_sigma;   
  //double val_CBC_alphaC;  
  double val_CBC_alphaCB; 
  double val_CBC_n;       
  double val_frac_scut;	 
  double val_N_scut;	 
  double val_N_sig;

  double realVal_CBC_mean;       
  double realVal_CBC_sigma;   	 
  //double realVal_CBC_alphaC;  	 
  double realVal_CBC_alphaCB; 	 
  double realVal_CBC_n;       	 
  double realVal_frac_scut;	 
  double realVal_N_scut;	 
  double realVal_N_sig;
	 			 
  double err_CBC_mean;      
  double err_CBC_sigma;   
  //double err_CBC_alphaC;  
  double err_CBC_alphaCB; 
  double err_CBC_n;       
  double err_frac_scut;	 
  double err_N_scut;   
  double err_N_sig;

  tree_toys->Branch("val_CBC_mean", &val_CBC_mean, "val_CBC_mean/D");
  tree_toys->Branch("val_CBC_sigma", &val_CBC_sigma, "val_CBC_sigma/D");
  //tree_toys->Branch("val_CBC_alphaC", &val_CBC_alphaC, "val_CBC_alphaC/D");
  tree_toys->Branch("val_CBC_alphaCB", &val_CBC_alphaCB, "val_CBC_alphaCB/D");
  tree_toys->Branch("val_CBC_n", &val_CBC_n, "val_CBC_n/D");
  tree_toys->Branch("val_frac_scut", &val_frac_scut, "val_frac_scut/D");
  tree_toys->Branch("val_N_scut", &val_N_scut, "val_N_scut/D");
  tree_toys->Branch("val_N_sig", &val_N_sig, "val_N_sig/D");

  tree_toys->Branch("realVal_CBC_mean", &realVal_CBC_mean, "realVal_CBC_mean/D");
  tree_toys->Branch("realVal_CBC_sigma", &realVal_CBC_sigma, "realVal_CBC_sigma/D");
  //tree_toys->Branch("realVal_CBC_alphaC", &realVal_CBC_alphaC, "realVal_CBC_alphaC/D");
  tree_toys->Branch("realVal_CBC_alphaCB", &realVal_CBC_alphaCB, "realVal_CBC_alphaCB/D");
  tree_toys->Branch("realVal_CBC_n", &realVal_CBC_n, "realVal_CBC_n/D");
  tree_toys->Branch("realVal_frac_scut", &realVal_frac_scut, "realVal_frac_scut/D");
  tree_toys->Branch("realVal_N_scut", &realVal_N_scut, "realVal_N_scut/D");
  tree_toys->Branch("realVal_N_sig", &realVal_N_sig, "realVal_N_sig/D");
		     			 				     			 
  tree_toys->Branch("err_CBC_mean", &err_CBC_mean, "err_CBC_mean/D");
  tree_toys->Branch("err_CBC_sigma", &err_CBC_sigma, "err_CBC_sigma/D");
  //tree_toys->Branch("err_CBC_alphaC", &err_CBC_alphaC, "err_CBC_alphaC/D");
  tree_toys->Branch("err_CBC_alphaCB", &err_CBC_alphaCB, "err_CBC_alphaCB/D");
  tree_toys->Branch("err_CBC_n", &err_CBC_n, "err_CBC_n/D");
  tree_toys->Branch("err_frac_scut", &err_frac_scut, "err_frac_scut/D");
  tree_toys->Branch("err_N_scut", &err_N_scut, "err_N_scut/D");
  tree_toys->Branch("err_N_sig", &err_N_sig, "err_N_sig/D");


  
  RooRealVar combinedPfIsoFPR03Phot("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);

  RooArgSet argSet("argSet");

  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(ptPhot);
  argSet.add(weight);

  combinedPfIsoFPR03Phot.setBins(121);
  etaPhot.setBins(120);
  mvaIdPhot.setBins(180);
  isMatchedPhot.setBins(3);
  ptPhot.setBins(1200);
  weight.setBins(1000);

  //models from fitted MC
  TFile* f_ws_sig = new TFile((workdir_input+"workspace_fit_EB_sig_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");
  cout << "workspace bg   :   " << workdir_input<<"workspace_fit_EB_bg_WP095_pt"<<ptMin<<"_"<<ptMax<<".root" << endl;
  TFile* f_ws_bg = new TFile((workdir_input+"workspace_fit_EB_bg_WP095_pt"+ptMin+"_"+ptMax+".root").c_str(), "READ");


  RooWorkspace* w_sig =(RooWorkspace*)f_ws_sig->Get("w_sig");
  RooWorkspace* w_bg =(RooWorkspace*)f_ws_bg->Get("w_bg");


  //model sig
  RooRealVar pull_CBC_mean("pull_CBC_mean", "pull_CBC_mean", w_sig->var("CBC_mean")->getVal(), -2., 3.) ;	 
  RooRealVar pull_CBC_sigma("pull_CBC_sigma", "pull_CBC_sigma", w_sig->var("CBC_sigma")->getVal(), 0., 3.);	 
  RooRealVar pull_CBC_alphaCB("pull_CBC_alphaCB", "pull_CBC_alphaCB", w_sig->var("CBC_alphaCB")->getVal(), -4., 0.);
  RooRealVar pull_CBC_n("pull_CBC_n", "pull_CBC_n", w_sig->var("CBC_n")->getVal(), 0., 100.);      

  RooCBShape model_sig("model_sig", "model_sig", combinedPfIsoFPR03Phot, pull_CBC_mean, pull_CBC_sigma, pull_CBC_alphaCB, pull_CBC_n);

  //model bg
  RooKeysPdf model_bg = *((RooKeysPdf*)w_bg->pdf("kest3"));
  model_bg.SetName("model_bg");
  model_bg.SetTitle("model_bg");


  RooRealVar frac_scut("frac_scut", "frac_scut", purity, 0., 1.);
  RooRealVar N_scut("N_scut", "expected number of ev for scut", 12000., 0., 100000000.);

  RooFormulaVar N_sig("N_sig","N_sig","@0*@1",RooArgList(N_scut,frac_scut));

  realVal_CBC_mean    = pull_CBC_mean    .getVal();
  realVal_CBC_sigma   = pull_CBC_sigma   .getVal();	 
  //  realVal_CBC_alphaC  = pull_CBC_alphaC  .getVal();	 
  realVal_CBC_alphaCB = pull_CBC_alphaCB .getVal();	 
  realVal_CBC_n       = pull_CBC_n       .getVal();	 
  realVal_frac_scut   = purity;	  
  realVal_N_scut      = numEv;	   
  realVal_N_sig      = purity*numEv;



  for(int numfit=0; numfit<numFits; numfit++){

    //model for signal    
    pull_CBC_mean    .setVal(realVal_CBC_mean);
    pull_CBC_sigma   .setVal(realVal_CBC_sigma);
    //pull_CBC_alphaC  .setVal(realVal_CBC_alphaC);
    pull_CBC_alphaCB .setVal(realVal_CBC_alphaCB);
    pull_CBC_n       .setVal(realVal_CBC_n);
    
    //signal template parameters
    //all fixed TO CHANGE------------   
    if (config==0){
      pull_CBC_mean.setConstant(kTRUE);
      pull_CBC_sigma.setConstant(kTRUE);
      pull_CBC_alphaCB.setConstant(kTRUE);
      pull_CBC_n.setConstant(kTRUE);
        
    }

    if(config==1){
      pull_CBC_sigma.setConstant(kTRUE);
      pull_CBC_alphaCB.setConstant(kTRUE);
      pull_CBC_n.setConstant(kTRUE);
    }
    if(config==2){
      pull_CBC_alphaCB.setConstant(kTRUE);
      pull_CBC_n.setConstant(kTRUE);
    }
    if(config==3){
      pull_CBC_n.setConstant(kTRUE);
    }
   
    

    //adding and extending models                                                                                                                                                                           
    //option 1: adding sig and bg and extending their sum                                                                                                                                                    
    frac_scut.setVal(purity);   
    
    RooAddPdf model_scut("model_scut", "model_scut", model_sig, model_bg, frac_scut);//using fit templates from MC
    

    N_scut.setVal(12000.);
    RooExtendPdf ext_model_scut("ext_model_scut", "ext_model_scut", model_scut, N_scut);
    //option 2: extending separately sig and bg and then adding them together
    /*  RooRealVar N_sig("N_sig", "expected number of ev for signal", 14000., 10., 100000000.);
	RooRealVar N_bg("N_bg", "expected number of ev for background", 14000., 10., 100000000.);
	RooAddPdf ext_model_scut("ext_model_scut", "ext_model_scut", RooArgList(model_sig_scut, model_bg_scut), RooArgList(N_sig, N_bg));
    */
    
    RooDataSet* set =  model_scut.generate(combinedPfIsoFPR03Phot, RooRandom::randomGenerator()->Poisson(numEv));
    RooDataHist hset("hset", "hset", combinedPfIsoFPR03Phot, *set);
    RooFitResult* result = ext_model_scut.fitTo(*set, Save(), Range(-5.,15.), Extended(kTRUE), SumW2Error(kFALSE));

    val_CBC_mean    = pull_CBC_mean    .getVal();
    val_CBC_sigma   = pull_CBC_sigma   .getVal();	 
    //    val_CBC_alphaC  = pull_CBC_alphaC  .getVal();	 
    val_CBC_alphaCB = pull_CBC_alphaCB .getVal();	 
    val_CBC_n       = pull_CBC_n       .getVal();	 
    val_frac_scut   = frac_scut   .getVal();	  
    val_N_scut      = N_scut      .getVal();	   
    val_N_sig       = N_sig       .getVal();

    err_CBC_mean    = pull_CBC_mean    .getError();
    err_CBC_sigma   = pull_CBC_sigma   .getError();	 
    // err_CBC_alphaC  = pull_CBC_alphaC  .getError();	 
    err_CBC_alphaCB = pull_CBC_alphaCB .getError();	 
    err_CBC_n       = pull_CBC_n       .getError();	 
    err_frac_scut   = frac_scut   .getError();	  
    err_N_scut      = N_scut      .getError();	   
    err_N_sig       = N_sig       .getPropagatedError(*result);

    tree_toys->Fill();
    
  }
  outFile->cd();
  tree_toys->Write();
  outFile->Write();
  outFile->Close();

}
