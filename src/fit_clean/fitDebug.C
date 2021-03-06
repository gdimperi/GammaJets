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
#include "RooCBShape.h"
#include "RooCBmyCrujff.h"
#include "TChain.h"
#include "TTree.h"
#include "RooDataSet.h"
#include "RooAddPdf.h"
#include "RooRealConstant.h"
#include "RooCategory.h"
#include "RooSimultaneous.h"
#include "RooWorkspace.h"
#include "RooFitResult.h"
#include "RooGlobalFunc.h"
#include "TPaveLabel.h"

using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug(string cut, string filename, string hlt, bool binned){

  string workdir = "fit_FPR/";

  //loading MC to fit
  TChain mc("finalTree");
  /*
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-120to170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-1400to1800_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());  
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-170to300_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-300to470_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-30to50_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-470to800_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-50to80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-800to1400_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-80to120_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_170_250_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_20_30_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_250_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_30_80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_80_170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  */

  if(hlt=="hltcut30"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-170to300_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-120to170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-30to50_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-50to80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-300to470_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-80to120_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/G_Pt-15to30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root"); 
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_80_170_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_170_250_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_30_80_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_20_30_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/QCDEM_Pt_250_350_8TeV_pythia6_hltcut30_hltiso0_mvaWP4.root"); 
  }
  if(hlt=="hltcut50"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-170to300_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-120to170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-30to50_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-50to80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-300to470_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-80to120_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/G_Pt-15to30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_80_170_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_170_250_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_30_80_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_20_30_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/QCDEM_Pt_250_350_8TeV_pythia6_hltcut50_hltiso0_mvaWP4.root"); 
  }
  if(hlt=="hltcut75"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-170to300_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-120to170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-30to50_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-50to80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-300to470_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-80to120_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/G_Pt-15to30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_80_170_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_170_250_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_30_80_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_20_30_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/QCDEM_Pt_250_350_8TeV_pythia6_hltcut75_hltiso0_mvaWP4.root"); 
  }
  if(hlt=="hltcut90"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-170to300_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-120to170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-30to50_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-50to80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-300to470_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-80to120_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/G_Pt-15to30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_80_170_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_170_250_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_30_80_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_20_30_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/QCDEM_Pt_250_350_8TeV_pythia6_hltcut90_hltiso0_mvaWP4.root"); 
  }
  if(hlt=="hltcut135"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-170to300_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-120to170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-30to50_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-50to80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-300to470_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-80to120_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/G_Pt-15to30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_80_170_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_170_250_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_30_80_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_20_30_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/QCDEM_Pt_250_350_8TeV_pythia6_hltcut135_hltiso0_mvaWP4.root"); 
  }
  if(hlt=="hltcut150"){
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-170to300_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-120to170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-30to50_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-50to80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-300to470_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");  
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-80to120_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");   
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/G_Pt-15to30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");    
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_80_170_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_170_250_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_30_80_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_20_30_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root");	
    mc.Add("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/QCDEM_Pt_250_350_8TeV_pythia6_hltcut150_hltiso0_mvaWP4.root"); 
  }


  RooRealVar combinedPfIsoFPR03Phot("combinedPfIsoFPR03Phot", "combinedPfIsoFPR03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);

  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(combinedPfIsoFPR03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(ptPhot);
  argSet.add(weight);

  //binning variables
  std::cout<<"Binning variables for eventual binned fit"<<std::endl;
  combinedPfIsoFPR03Phot.setBins(121);
  etaPhot.setBins(120);
  mvaIdPhot.setBins(180);
  isMatchedPhot.setBins(3);
  ptPhot.setBins(1200);
  weight.setBins(10000000);

  //creating complete dataset
  std::cout<<"Reading trees of MC into a complete general dataset"<<std::endl;
  RooDataSet allSet("allSet", "allSet", argSet, WeightVar("weight"), RooFit::Import(mc));


  std::cout<<"Complete dataset "<<allSet.GetName()<<" created"<<std::endl;

  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;
  //RooDataSet* d_s = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot>0.711099").c_str());
  //new WP95 barrel
  RooDataSet* d_s = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot>0.83548").c_str());
  d_s->SetName("d_s");
  std::cout<<"Reduced dataset "<<d_s->GetName()<<" created with cut "<<cut<<" && mvaIdPhot>0.711099"<<std::endl;
  //RooDataSet* d_r = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot<0.711099").c_str());
  RooDataSet* d_r = (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  d_r->SetName("d_r");
  std::cout<<"Reduced dataset "<<d_s->GetName()<<" created with cut "<<cut<<" && -0.6 < mvaIdPhot < 0.6"<<std::endl;
  std::cout<<"d_s entries: "<<d_s->sumEntries()<<std::endl;
  std::cout<<"d_r entries: "<<d_r->sumEntries()<<std::endl;
  /*
  //binning datasets to obtain roodatahists
  std::cout<<"Converting RooDataSets in RooDataHists for eventual binned fit"<<std::endl;
  RooDataHist dh_s("dh_s", "dh_s", RooArgSet(combinedPfIsoFPR03Phot, weight), *d_s);
  std::cout<<"Reduced datahist with name "<<dh_s.GetName()<<std::endl;
  std::cout<<dh_s.sum(kTRUE)<<std::endl;

  RooDataHist dh_r("dh_r", "dh_r", RooArgSet(combinedPfIsoFPR03Phot, weight), *d_r);
  std::cout<<"Reduced datahist with name "<<dh_r.GetName()<<std::endl;
  std::cout<<dh_r.sum(kTRUE)<<std::endl;
  */
  //simultaneous sample for sim fit
  RooCategory sample("sample","sample");
  sample.defineType("scut");
  sample.defineType("rcut"); 

  std::cout<<"Creating multiple dataset for simultaneous unbinned fit:"<<std::endl;
  RooDataSet srcut("srcut","both s and r cut",argSet, WeightVar("weight"), Index(sample),Import("scut", *d_s),Import("rcut", *d_r));
  std::cout<<"Name: "<<srcut.GetName()<<std::endl;
  std::cout<<"Entries: "<<srcut.sumEntries()<<std::endl;
  srcut.Print();
  /*std::cout<<"Creating multiple datahist for simultaneous binned fit"<<std::endl;
  RooDataHist srcut_h("srcut_h","both s and r cut, binned",RooArgSet(combinedPfIsoFPR03Phot,weight), WeightVar("weight"), Index(sample),Import("scut", dh_s),Import("rcut", dh_r));
  std::cout<<"Name: "<<srcut_h.GetName()<<std::endl;
  std::cout<<"Entries: "<<srcut_h.sumEntries()<<std::endl;
  */

  //models for fit
  //gaussian
  RooRealVar gaussmean("gaussmean","gaussmean", -1., -10., 20.);
  RooRealVar gausssigma("gausssigma", "gausssigma", 1., 0., 20.);

  RooGaussian my_gauss_s("my_gauss_s", "my_gauss_s", combinedPfIsoFPR03Phot, gaussmean, gausssigma);

  RooGaussian my_gauss_r("my_gauss_r", "my_gauss_r", combinedPfIsoFPR03Phot, gaussmean, gausssigma);

  //crystalBall
  RooRealVar cbmean("cbmean", "cbmean", -1., -5., 15.);
  RooRealVar cbsigma("cbsigma", "cbsigma", 1., 0., 20.);

  RooRealVar cbalpha_s("cbalpha_s", "cbaplha_s", -1., -1000., 0.);
  RooRealVar cbn_s("cbn_s","cbn_s",10., 0., 1000.);

  RooRealVar cbalpha_r("cbalpha_r", "cbaplha_r", -1., -1000., 0.);
  RooRealVar cbn_r("cbn_r","cbn_r",10., 0., 1000.);

  RooCBShape my_cb_s("my_cb_s", "my_cb_s",  combinedPfIsoFPR03Phot, cbmean, cbsigma, cbalpha_s, cbn_s);
  
  RooCBShape my_cb_r("my_cb_r", "my_cb_r",  combinedPfIsoFPR03Phot, cbmean, cbsigma, cbalpha_r, cbn_r);

  RooRealVar frac_s("frac_s", "frac_s", 0.5, 0., 1.);
  RooRealVar frac_r("frac_r", "frac_r", 0.5, 0., 1.);

  //adding gauss to cb for both fit regions
  RooAddPdf my_add_s("my_add_s", "my_add_s", my_cb_s, my_gauss_s, frac_s);
  RooAddPdf my_add_r("my_add_r", "my_add_r", my_cb_r, my_gauss_r, frac_r);

  //creating simultaneous fit model
  RooSimultaneous simPdf("simPdf", "simultaneous pdfs, scut and rcut", sample);
  simPdf.addPdf(my_add_s, "scut");
  simPdf.addPdf(my_add_r, "rcut");

  //fit
  RooFitResult* result;
  //unbinned
  if(!binned) result =  simPdf.fitTo(srcut, Save(), Range(-5.,15.), SumW2Error(kFALSE));
  //binned
  //if(binned)  result =  simPdf.fitTo(srcut_h, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  //drawing results
  RooPlot* frame_s = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, scut region"));

  if(!binned) srcut.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  //if(binned)  srcut_h.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  simPdf.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan),Slice(sample,"scut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_cb_s"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_gauss_s"),ProjWData(sample,srcut));

  RooPlot* frame_r = combinedPfIsoFPR03Phot.frame(RooFit::Title("Fit to combinedPfIsoFPR03Phot, rcut region"));

  if(!binned) srcut.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  //if(binned)  srcut_h.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  
  simPdf.plotOn(frame_r,Name("pdf_r"),LineColor(kCyan),Slice(sample,"rcut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_cb_r"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_gauss_r"),ProjWData(sample,srcut));
  
  frame_s->SetMinimum(0.00001);
  frame_r->SetMinimum(0.00001);
  //  frame->SetMaximum(30000.);

  TCanvas* c = new TCanvas();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  c->SaveAs((workdir+filename+"_s.png").c_str());
  c->SaveAs((workdir+filename+"_s.root").c_str());

  Double_t chi2 = frame_s->chiSquare("pdf_s", "mc_scut", 6);
  TPaveLabel *t1_s = new TPaveLabel(0.7,0.45,0.93,0.60, Form("#chi^{2}_{scut}/dof = %.3f", chi2),"brNDC");
  t1_s->SetFillColor(0);
  t1_s->SetLineWidth(0);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetTitle(frame_r->GetTitle());
  frame_r->Draw("");
  c->SaveAs((workdir+filename+"_r.png").c_str());
  c->SaveAs((workdir+filename+"_r.root").c_str());

  chi2 = frame_r->chiSquare("pdf_r", "mc_rcut", 6);

  
  TPaveLabel *t1_r = new TPaveLabel(0.7,0.45,0.93,0.60, Form("#chi^{2}_{rcut}/dof = %.3f", chi2),"brNDC");
  t1_r->SetFillColor(0);
  t1_r->SetLineWidth(0);


  std::cout<<"ChiSquared value, rcut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  t1_s->Draw();
  c->SaveAs((workdir+filename+"_s_log.png").c_str());
  c->SaveAs((workdir+filename+"_s_log.root").c_str());

  frame_r->Draw("");
  t1_r->Draw();
  c->SetTitle(frame_r->GetTitle());
  c->SaveAs((workdir+filename+"_r_log.png").c_str());
  c->SaveAs((workdir+filename+"_r_log.root").c_str());

  TFile* f_fitRes = new TFile((workdir+"fitResult_"+filename+".root").c_str(), "RECREATE");
  result->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  RooWorkspace* w_bg = new RooWorkspace("w_bg", "workspace");

  w_bg->import(srcut);
  w_bg->import(simPdf);
  w_bg->import(combinedPfIsoFPR03Phot);

  w_bg->Print();

  w_bg->writeToFile((workdir+"workspace_"+filename+".root").c_str());

}
