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
#include "RooKeysPdf.h"
#include "RooNDKeysPdf.h"
#include "RooProdPdf.h"


using namespace RooFit;

int main()
{
  return 0;
}

void fitDebug(string cut, string filename, string hlt, bool binned){

  //loading MC to fit
  TChain data("finalTree");
  /*
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-120to170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-1400to1800_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());  
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-170to300_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-300to470_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-30to50_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-470to800_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-50to80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  //data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-800to1400_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-80to120_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_170_250_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_20_30_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_250_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_30_80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_80_170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  */
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT30/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  /*
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT50/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT75/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT90/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT135/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_B_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_Q_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_O_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_C_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_H_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_G_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_N_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_D_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_E_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_R_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_S_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/Photon_Run2012C-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/Photon_Run2012A-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_T_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_A_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_L_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_I_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_M_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_F_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/SinglePhotonParked_Run2012D-22Jan2013_P_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data.Add(("/cmsrm/pc24/gdimperi/GammaJets/ridottissime_isoPF03_5/HLT150/Photon_Run2012B-22Jan2013_"+hlt+"_hltiso0_mvaWP4.root").c_str());

  */  

  RooRealVar combinedPfIso03Phot("combinedPfIso03Phot", "combinedPfIso03Phot", -7., 15.);
  RooRealVar etaPhot("etaPhot", "etaPhot", -2.5, 2.5);
  RooRealVar mvaIdPhot("mvaIdPhot", "mvaIdPhot", -1.,1.);
  RooRealVar isMatchedPhot("isMatchedPhot","isMatchedPhot", -1., 2.);
  RooRealVar ptPhot("ptPhot", "ptPhot", 0., 1000.);
  RooRealVar weight("weight","weight", 0., 100.);

  RooArgSet argSet("argSet");
  //creating set of variables for the datasets
  std::cout<<"Creating RooArgSet with variables for fit"<<std::endl;
  argSet.add(combinedPfIso03Phot);
  argSet.add(etaPhot);
  argSet.add(mvaIdPhot);
  argSet.add(isMatchedPhot);
  argSet.add(ptPhot);
  argSet.add(weight);

  //binning variables
  std::cout<<"Binning variables for eventual binned fit"<<std::endl;
  combinedPfIso03Phot.setBins(121);
  etaPhot.setBins(120);
  mvaIdPhot.setBins(180);
  isMatchedPhot.setBins(3);
  ptPhot.setBins(1200);
  weight.setBins(10000000);

  //creating complete dataset
  std::cout<<"Reading trees of data into a complete general dataset"<<std::endl;
  RooDataSet allSet("allSet", "allSet", argSet, WeightVar("weight"), RooFit::Import(data));


  std::cout<<"Complete dataset "<<allSet.GetName()<<" created"<<std::endl;

  //reducing complete dataset to interesting ones
  std::cout<<"Reducing complete dataset to smaller interesting ones"<<std::endl;
  RooDataSet* d_bkg= (RooDataSet*)allSet.reduce((cut+" && mvaIdPhot<0.6 && mvaIdPhot>-0.6").c_str());
  d_bkg->SetName("d_bkg");
  std::cout<<"Reduced dataset "<<d_bkg->GetName()<<" created with cut "<<cut<<" && -0.6 < mvaIdPhot < 0.6"<<std::endl;
  std::cout<<"d_bkg entries: "<<d_bkg->sumEntries()<<std::endl;
  /*
  //binning datasets to obtain roodatahists
  std::cout<<"Converting RooDataSets in RooDataHists for eventual binned fit"<<std::endl;
  RooDataHist dh_s("dh_s", "dh_s", RooArgSet(combinedPfIso03Phot, weight), *d_s);
  std::cout<<"Reduced datahist with name "<<dh_s.GetName()<<std::endl;
  std::cout<<dh_s.sum(kTRUE)<<std::endl;

  RooDataHist dh_r("dh_r", "dh_r", RooArgSet(combinedPfIso03Phot, weight), *d_r);
  std::cout<<"Reduced datahist with name "<<dh_r.GetName()<<std::endl;
  std::cout<<dh_r.sum(kTRUE)<<std::endl;
  */

  // Create adaptive kernel estimation pdf. In this configuration the input data
  // is mirrored over the boundaries to minimize edge effects in distribution
  // that do not fall to zero towards the edges
  RooKeysPdf kest1("kest1","kest1",combinedPfIso03Phot,*d_bkg,RooKeysPdf::MirrorBoth) ;

  // An adaptive kernel estimation pdf on the same data without mirroring option
  // for comparison
  RooKeysPdf kest2("kest2","kest2",combinedPfIso03Phot,*d_bkg,RooKeysPdf::NoMirror) ;


  // Adaptive kernel estimation pdf with increased bandwidth scale factor
  // (promotes smoothness over detail preservation)
  RooKeysPdf kest3("kest1","kest1",combinedPfIso03Phot,*d_bkg,RooKeysPdf::MirrorBoth,2) ;


  // Plot kernel estimation pdfs with and without mirroring over data
  RooPlot* frame = combinedPfIso03Phot.frame(Title("Adaptive kernel estimation pdf with and w/o mirroring"),Bins(20)) ;
  d_bkg->plotOn(frame) ;
  kest1.plotOn(frame) ;    
  kest2.plotOn(frame,LineStyle(kDashed),LineColor(kRed)) ;    


  // Plot kernel estimation pdfs with regular and increased bandwidth
  RooPlot* frame2 = combinedPfIso03Phot.frame(Title("Adaptive kernel estimation pdf with regular, increased bandwidth")) ;
  kest1.plotOn(frame2) ;    
  kest3.plotOn(frame2,LineColor(kMagenta)) ;



  /*
  //fit
  RooFitResult* result;
  //unbinned
  if(!binned) result =  simPdf.fitTo(srcut, Save(), Range(-5.,15.), SumW2Error(kFALSE));
  //binned
  //if(binned)  result =  simPdf.fitTo(srcut_h, Save(), Range(-5.,15.), SumW2Error(kFALSE));

  //drawing results
  RooPlot* frame_s = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, scut region"));

  if(!binned) srcut.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  //if(binned)  srcut_h.plotOn(frame_s, Cut("sample==sample::scut"), Name("mc_scut"));
  simPdf.plotOn(frame_s,Name("pdf_s"),LineColor(kCyan),Slice(sample,"scut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_cb_s"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_s, RooFit::LineColor(kMagenta), Slice(sample,"scut"), Components("my_gauss_s"),ProjWData(sample,srcut));

  RooPlot* frame_r = combinedPfIso03Phot.frame(RooFit::Title("Fit to combinedPfIso03Phot, rcut region"));

  if(!binned) srcut.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  //if(binned)  srcut_h.plotOn(frame_r, Cut("sample==sample::rcut"), Name("mc_rcut"));
  
  simPdf.plotOn(frame_r,Name("pdf_r"),LineColor(kCyan),Slice(sample,"rcut"),ProjWData(sample,srcut)) ;
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_cb_r"),ProjWData(sample,srcut));
  simPdf.plotOn(frame_r, RooFit::LineColor(kMagenta), Slice(sample,"rcut"), Components("my_gauss_r"),ProjWData(sample,srcut));
  
  frame_s->SetMinimum(0.00001);
  frame_r->SetMinimum(0.00001);
  //  frame->SetMaximum(30000.);
  */
  TCanvas* c = new TCanvas();
  c->SetTitle(frame->GetTitle());
  frame->Draw("");
  c->SaveAs((filename+"_frame1.png").c_str());
  //c->SaveAs((filename+"_frame1.root").c_str());

  frame2->Draw("");
  c->SaveAs((filename+"_frame2.png").c_str());

  /*
  Double_t chi2 = frame_s->chiSquare("pdf_s", "mc_scut", 6);

  std::cout<<"ChiSquared value, scut: "<<chi2<<std::endl;

  c->SetTitle(frame_r->GetTitle());
  frame_r->Draw("");
  c->SaveAs((filename+"_r.png").c_str());
  c->SaveAs((filename+"_r.root").c_str());

  chi2 = frame_r->chiSquare("pdf_r", "mc_rcut", 6);

  std::cout<<"ChiSquared value, rcut: "<<chi2<<std::endl;

  c->SetLogy();
  c->SetTitle(frame_s->GetTitle());
  frame_s->Draw("");
  c->SaveAs((filename+"_s_log.png").c_str());
  c->SaveAs((filename+"_s_log.root").c_str());

  frame_r->Draw("");
  c->SetTitle(frame_r->GetTitle());
  c->SaveAs((filename+"_r_log.png").c_str());
  c->SaveAs((filename+"_r_log.root").c_str());

  TFile* f_fitRes = new TFile(("fitResult_"+filename+".root").c_str(), "RECREATE");
  result->Write();
  //  f_fitRes->Write();
  f_fitRes->Close();
  RooWorkspace* w_bg = new RooWorkspace("w_bg", "workspace");

  w_bg->import(srcut);
  w_bg->import(simPdf);
  w_bg->import(combinedPfIso03Phot);

  w_bg->Print();

  w_bg->writeToFile(("workspace_"+filename+".root").c_str());
  */
}
