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

using namespace RooFit;

//string workdir="pull_weightedDataCS_config1/";
//string workdir_input="../";

void fitData_myPull(string ptMin, string ptMax, int numEv, double purity, int config,  string workdir_input, string workdir){
  int numFits = 1000;

  TFile* outFile = new TFile((workdir+"pullOutFile_pt"+ptMin+"_"+ptMax+".root").c_str(), "RECREATE");

  TTree* tree_toys = new TTree("tree_toys", "tree_toys"); 

  double val_CBC_mean;      
  double val_CBC_sigma;   
  //double val_CBC_alphaC;  
  double val_CBC_alphaCB; 
  double val_CBC_n;       
  double val_cbmean;     
  double val_cbsigma;    
  double val_cbalpha;  
  double val_cbn;      
  double val_frac;     
  double val_gaussmean;  
  double val_gausssigma; 
  double val_frac_scut;	 
  double val_N_scut;	 
  double val_N_sig;

  double realVal_CBC_mean;       
  double realVal_CBC_sigma;   	 
  //double realVal_CBC_alphaC;  	 
  double realVal_CBC_alphaCB; 	 
  double realVal_CBC_n;       	 
  double realVal_cbmean;     	 
  double realVal_cbsigma;    	 
  double realVal_cbalpha;  	 
  double realVal_cbn;      	 
  double realVal_frac;     	 
  double realVal_gaussmean;  	 
  double realVal_gausssigma; 	 
  double realVal_frac_scut;	 
  double realVal_N_scut;	 
  double realVal_N_sig;
	 			 
  double err_CBC_mean;      
  double err_CBC_sigma;   
  double err_CBC_alphaC;  
  double err_CBC_alphaCB; 
  double err_CBC_n;       
  double err_cbmean;     
  double err_cbsigma;    
  double err_cbalpha;  
  double err_cbn;      
  double err_frac;     
  double err_gaussmean;  
  double err_gausssigma; 
  double err_frac_scut;	 
  double err_N_scut;   
  double err_N_sig;

  tree_toys->Branch("val_CBC_mean", &val_CBC_mean, "val_CBC_mean/D");
  tree_toys->Branch("val_CBC_sigma", &val_CBC_sigma, "val_CBC_sigma/D");
  //tree_toys->Branch("val_CBC_alphaC", &val_CBC_alphaC, "val_CBC_alphaC/D");
  tree_toys->Branch("val_CBC_alphaCB", &val_CBC_alphaCB, "val_CBC_alphaCB/D");
  tree_toys->Branch("val_CBC_n", &val_CBC_n, "val_CBC_n/D");
  tree_toys->Branch("val_cbmean", &val_cbmean, "val_cbmean/D");
  tree_toys->Branch("val_cbsigma", &val_cbsigma, "val_cbsigma/D");
  tree_toys->Branch("val_cbalpha", &val_cbalpha, "val_cbalpha/D");
  tree_toys->Branch("val_cbn", &val_cbn, "val_cbn/D");
  tree_toys->Branch("val_frac", &val_frac, "val_frac/D");
  tree_toys->Branch("val_gaussmean", &val_gaussmean, "val_gaussmean/D");
  tree_toys->Branch("val_gausssigma", &val_gausssigma, "val_gausssigma/D");
  tree_toys->Branch("val_frac_scut", &val_frac_scut, "val_frac_scut/D");
  tree_toys->Branch("val_N_scut", &val_N_scut, "val_N_scut/D");
  tree_toys->Branch("val_N_sig", &val_N_sig, "val_N_sig/D");

  tree_toys->Branch("realVal_CBC_mean", &realVal_CBC_mean, "realVal_CBC_mean/D");
  tree_toys->Branch("realVal_CBC_sigma", &realVal_CBC_sigma, "realVal_CBC_sigma/D");
  //tree_toys->Branch("realVal_CBC_alphaC", &realVal_CBC_alphaC, "realVal_CBC_alphaC/D");
  tree_toys->Branch("realVal_CBC_alphaCB", &realVal_CBC_alphaCB, "realVal_CBC_alphaCB/D");
  tree_toys->Branch("realVal_CBC_n", &realVal_CBC_n, "realVal_CBC_n/D");
  tree_toys->Branch("realVal_cbmean", &realVal_cbmean, "realVal_cbmean/D");
  tree_toys->Branch("realVal_cbsigma", &realVal_cbsigma, "realVal_cbsigma/D");
  tree_toys->Branch("realVal_cbalpha", &realVal_cbalpha, "realVal_cbalpha/D");
  tree_toys->Branch("realVal_cbn", &realVal_cbn, "realVal_cbn/D");
  tree_toys->Branch("realVal_frac", &realVal_frac, "realVal_frac/D");
  tree_toys->Branch("realVal_gaussmean", &realVal_gaussmean, "realVal_gaussmean/D");
  tree_toys->Branch("realVal_gausssigma", &realVal_gausssigma, "realVal_gausssigma/D");
  tree_toys->Branch("realVal_frac_scut", &realVal_frac_scut, "realVal_frac_scut/D");
  tree_toys->Branch("realVal_N_scut", &realVal_N_scut, "realVal_N_scut/D");
  tree_toys->Branch("realVal_N_sig", &realVal_N_sig, "realVal_N_sig/D");
		     			 				     			 
  tree_toys->Branch("err_CBC_mean", &err_CBC_mean, "err_CBC_mean/D");
  tree_toys->Branch("err_CBC_sigma", &err_CBC_sigma, "err_CBC_sigma/D");
  //tree_toys->Branch("err_CBC_alphaC", &err_CBC_alphaC, "err_CBC_alphaC/D");
  tree_toys->Branch("err_CBC_alphaCB", &err_CBC_alphaCB, "err_CBC_alphaCB/D");
  tree_toys->Branch("err_CBC_n", &err_CBC_n, "err_CBC_n/D");
  tree_toys->Branch("err_cbmean", &err_cbmean, "err_cbmean/D");
  tree_toys->Branch("err_cbsigma", &err_cbsigma, "err_cbsigma/D");
  tree_toys->Branch("err_cbalpha", &err_cbalpha, "err_cbalpha/D");
  tree_toys->Branch("err_cbn", &err_cbn, "err_cbn/D");
  tree_toys->Branch("err_frac", &err_frac, "err_frac/D");
  tree_toys->Branch("err_gaussmean", &err_gaussmean, "err_gaussmean/D");
  tree_toys->Branch("err_gausssigma", &err_gausssigma, "err_gausssigma/D");
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
  cout << "workspace bg   :   " << workdir_input<<"workspace_fit_EB_bg_WP095_pt"<<ptMin<<"_"<<ptMax<<"_dataReweight.root" << endl;
  TFile* f_ws_bg = new TFile((workdir_input+"workspace_fit_EB_bg_WP095_pt"+ptMin+"_"+ptMax+"_dataReweight.root").c_str(), "READ");


  RooWorkspace* w_sig =(RooWorkspace*)f_ws_sig->Get("w_sig");
  RooWorkspace* w_bg =(RooWorkspace*)f_ws_bg->Get("w_bg");


  //model sig
  RooRealVar pull_CBC_mean("pull_CBC_mean", "pull_CBC_mean", w_sig->var("CBC_mean")->getVal(), -2., 3.) ;	 
  RooRealVar pull_CBC_sigma("pull_CBC_sigma", "pull_CBC_sigma", w_sig->var("CBC_sigma")->getVal(), 0., 3.);	 
  RooRealVar pull_CBC_alphaCB("pull_CBC_alphaCB", "pull_CBC_alphaCB", w_sig->var("CBC_alphaCB")->getVal(), -4., 0.);
  RooRealVar pull_CBC_n("pull_CBC_n", "pull_CBC_n", w_sig->var("CBC_n")->getVal(), 0., 100.);      

  RooCBShape model_sig("model_sig", "model_sig", combinedPfIsoFPR03Phot, pull_CBC_mean, pull_CBC_sigma, pull_CBC_alphaCB, pull_CBC_n);

  //model bg
  RooRealVar pull_cbmean("pull_cbmean", "pull_cbmean", w_bg->var("cbmean")->getVal(), -1., 4.) ;	  
  RooRealVar pull_cbsigma("pull_cbsigma", "pull_cbsigma", w_bg->var("cbsigma")->getVal(), 1., 6.);  	  
  RooRealVar pull_cbalpha("pull_cbalpha", "pull_cbalpha", w_bg->var("cbalpha")->getVal(), -5, 0.);  	  
  RooRealVar pull_cbn("pull_cbn", "pull_cbn", w_bg->var("cbn")->getVal(), 0., 500.);  	  

  RooCBShape cb_bg("cb_bg", "cb_bg", combinedPfIsoFPR03Phot, pull_cbmean, pull_cbsigma, pull_cbalpha, pull_cbn);

  RooRealVar pull_gaussmean("pull_gaussmean", "pull_gaussmean", w_bg->var("gaussmean")->getVal(), -3., 1.);    
  RooRealVar pull_gausssigma("pull_gausssigma", "pull_gausssigma", w_bg->var("gausssigma")->getVal(), 0., 5.);  
  RooGaussian gauss_bg("gauss_bg", "gauss_bg", combinedPfIsoFPR03Phot, pull_gaussmean, pull_gausssigma); 

  RooRealVar pull_frac("pull_frac", "pull_frac", w_bg->var("frac")->getVal(), 0., 1.);  	  

  RooAddPdf model_bg("model_bg", "model_bg", cb_bg, gauss_bg, pull_frac);

  RooRealVar frac_scut("frac_scut", "frac_scut", purity, 0., 1.);
  RooRealVar N_scut("N_scut", "expected number of ev for scut", 12000., 0., 100000000.);

  RooFormulaVar N_sig("N_sig","N_sig","@0*@1",RooArgList(N_scut,frac_scut));

  realVal_CBC_mean    = pull_CBC_mean    .getVal();
  realVal_CBC_sigma   = pull_CBC_sigma   .getVal();	 
  //  realVal_CBC_alphaC  = pull_CBC_alphaC  .getVal();	 
  realVal_CBC_alphaCB = pull_CBC_alphaCB .getVal();	 
  realVal_CBC_n       = pull_CBC_n       .getVal();	 
  realVal_cbmean      = pull_cbmean      .getVal();	 
  realVal_cbsigma     = pull_cbsigma     .getVal();	 
  realVal_cbalpha   = pull_cbalpha   .getVal();	   
  realVal_cbn       = pull_cbn       .getVal();	 
  realVal_frac      = pull_frac      .getVal();	 

  realVal_gaussmean   = pull_gaussmean   .getVal();	 
  realVal_gausssigma  = pull_gausssigma  .getVal();	 
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
    
    
    //model for background
    pull_cbmean     .setVal(realVal_cbmean);
    pull_cbsigma    .setVal(realVal_cbsigma);
    pull_cbalpha  .setVal(realVal_cbalpha); 
    pull_cbn      .setVal(realVal_cbn);	  
    pull_frac     .setVal(realVal_frac);    
 
    pull_gaussmean  .setVal(realVal_gaussmean);
    pull_gausssigma .setVal(realVal_gausssigma); 


    //all fixed TO CHANGE   
    if (config==0){
      pull_CBC_mean.setConstant(kTRUE);
      pull_CBC_sigma.setConstant(kTRUE);
      pull_cbmean.setConstant(kTRUE);
      pull_gaussmean.setConstant(kTRUE);
    }

    if(config==1){
      pull_CBC_sigma.setConstant(kTRUE);
      pull_cbmean.setConstant(kTRUE);
      pull_gaussmean.setConstant(kTRUE);
    }
    if(config==2){
      pull_cbmean.setConstant(kTRUE);
      pull_gaussmean.setConstant(kTRUE);
    }
    if(config==3){
      pull_gaussmean.setConstant(kTRUE);  
    }

    
    //signal template parameters
    pull_CBC_alphaCB.setConstant(kTRUE);
    pull_CBC_n.setConstant(kTRUE);
    
    //bkg template parameters
    pull_cbsigma.setConstant(kTRUE);     
    pull_cbalpha.setConstant(kTRUE);    
    pull_cbn.setConstant(kTRUE);        
    pull_frac.setConstant(kTRUE);       
    pull_gausssigma.setConstant(kTRUE);     
    

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
    val_cbmean      = pull_cbmean      .getVal();	 
    val_cbsigma     = pull_cbsigma     .getVal();	 
    val_cbalpha   = pull_cbalpha   .getVal();	 
    val_cbn       = pull_cbn       .getVal();	 
    val_frac      = pull_frac      .getVal();	 
    val_gaussmean   = pull_gaussmean   .getVal();	 
    val_gausssigma  = pull_gausssigma  .getVal();	 
    val_frac_scut   = frac_scut   .getVal();	  
    val_N_scut      = N_scut      .getVal();	   
    val_N_sig       = N_sig       .getVal();

    err_CBC_mean    = pull_CBC_mean    .getError();
    err_CBC_sigma   = pull_CBC_sigma   .getError();	 
    // err_CBC_alphaC  = pull_CBC_alphaC  .getError();	 
    err_CBC_alphaCB = pull_CBC_alphaCB .getError();	 
    err_CBC_n       = pull_CBC_n       .getError();	 
    err_cbmean      = pull_cbmean      .getError();	 
    err_cbsigma     = pull_cbsigma     .getError();	 
    err_cbalpha   = pull_cbalpha   .getError();	 
    err_cbn       = pull_cbn       .getError();	 
    err_frac      = pull_frac      .getError();	 
    err_gaussmean   = pull_gaussmean   .getError();	 
    err_gausssigma  = pull_gausssigma  .getError();	 
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
