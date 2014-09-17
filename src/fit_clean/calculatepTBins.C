#include "TChain.h"
#include "string.h"
#include "TCanvas.h"


void calculatepTBins(){

  TChain* mc = new TChain("finalTree");
  string hlt = "hltcut30";
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-120to170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-170to300_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-30to50_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-50to80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/G_Pt-80to120_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_170_250_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_20_30_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_250_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_30_80_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_350_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());  
  mc->Add(("root://pccmsrm27.cern.ch///cms/local/vtavolar/GammaJets/output_newPreselLooseIso2/QCDEM_Pt_80_170_8TeV_pythia6_"+hlt+"_hltiso0_mvaWP4.root").c_str());
    
  mc->Draw("combinedPfIso03Phot>>hsig(240, -5., 15.)", "(abs(etaPhot)<1.4442 && mvaIdPhot>0.711099 && isMatchedPhot==1 && ptPhot>40. && ptPhot<47.)*weight");
  mc->Draw("combinedPfIso03Phot>>hbg(240, -5., 15.)", "(abs(etaPhot)<1.4442 && mvaIdPhot>0.711099 && isMatchedPhot==0  && ptPhot>40. && ptPhot<47.)*weight");
  
}

