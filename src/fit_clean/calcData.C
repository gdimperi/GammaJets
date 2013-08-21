#include "TChain.h"
#include "string.h"
#include "TCanvas.h"


void calcData(){

  TChain* data = new TChain("finalTree");
  string hlt = "hltcut90";
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon-Run2012A-recover-06Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012B-13Jul2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-24Aug2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-EcalRecover_11Dec2012_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012C-PromptReco-v2_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  data->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/Photon_Run2012D-PromptReco-v1_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  
  data->Draw("combinedPfIso03Phot>>h1(240, -5., 15.)", "abs(etaPhot)<1.4442 && mvaIdPhot>0.711099");
  
}

