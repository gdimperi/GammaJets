#define TagAndProbeAnalysis_cxx
#include "TagAndProbeAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <string>
#include <TLorentzVector.h>

using namespace std;

void TagAndProbeAnalysis::Loop()
{
  if (fChain == 0) return;

  readR9Weights();
  readEtaWeights();
  read_nvtxWeights();

//   //puweight files
//   TFile* pileupWeights_allHLT = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_allHLT.root", "read");
//   TFile* pileupWeights_HLT30 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT30_CaloIdVL.root", "read");
//   TFile* pileupWeights_HLT50 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT50_CaloIdVL.root", "read");
//   TFile* pileupWeights_HLT75 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT75_CaloIdVL.root", "read");
//   TFile* pileupWeights_HLT90 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT90_CaloIdVL.root", "read");
//   TFile* pileupWeights_HLT135 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT135.root", "read");
//   TFile* pileupWeights_HLT150 = new TFile("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/scripts/puFiles/PileupWeights_HLT150.root", "read");

//   TH1D* h_weights_all = (TH1D*)pileupWeights_allHLT->Get("weights");  
//   TH1D* h_weights_hlt30 = (TH1D*)pileupWeights_HLT30->Get("weights");  
//   TH1D* h_weights_hlt50 = (TH1D*)pileupWeights_HLT50->Get("weights");  
//   TH1D* h_weights_hlt75 = (TH1D*)pileupWeights_HLT75->Get("weights");  
//   TH1D* h_weights_hlt90 = (TH1D*)pileupWeights_HLT90->Get("weights");  
//   TH1D* h_weights_hlt135 = (TH1D*)pileupWeights_HLT135->Get("weights");  
//   TH1D* h_weights_hlt150 = (TH1D*)pileupWeights_HLT150->Get("weights");  


  // output file
  TFile *outFile[7];
  outFile[0] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+".root","RECREATE");
  outFile[1] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"30.root","RECREATE");
  outFile[2] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"50.root","RECREATE");
  outFile[3] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"75.root","RECREATE");
  outFile[4] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"90.root","RECREATE");
  outFile[5] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"135.root","RECREATE");
  outFile[6] = new TFile(outFileNamePrefix+"_tag"+tagTightnessLevel+(mcMatch==0 ? "" : "_mcMatch"+TString::Format("%d",mcMatch))+"_HLT"+"150.root","RECREATE");

  // output trees declaration
  TTree *myTree[7];
  for (int ii=0; ii<7; ii++) {
    outFile[ii]->cd();
    TDirectory* outputDirectory = outFile[ii]->mkdir("myTaPDir");
    outputDirectory->cd();
    myTree[ii] = new TTree();
    myTree[ii] -> SetName("myTree");
  }

  float mass;
  float probe_eta, probe_abseta, probe_phi, probe_pt, probe_r9;
  int numvtx;
  float rho;
  float r9weight_EB;
  float r9weight_EE;
  float etaWeight;
  float nvtxWeight;
  float puW;
  float puW30, puW50, puW75, puW90, puW135, puW150;  
  int okLooseElePtEta,  okLooseEleID;
  int okMediumElePtEta, okMediumEleID; 
  int okTightElePtEta,  okTightEleID; 
  int okMVA_005, okMVA_01, okMVA_02;
  int hasPromptElectronMatched;
  float probe_pid_scetawid, probe_pid_scphiwid;
  float probe_sEtaEta, probe_sEtaPhi;
  float probe_s4Ratio, probe_etasc;
  float probe_rr;
  float probe_mvaId;
  float probe_charged03,      probe_neutral03,      probe_photon03;         
  float probe_fprCharged03,   probe_fprNeutral03,   probe_fprPhoton03;
  float probe_fprRCCharged03, probe_fprRCNeutral03, probe_fprRCPhoton03;
  float probe_combinedPfIso03, probe_combinedPfIsoFPR03;
  int npu_;

  for (int ii=0; ii<5; ii++) {
    myTree[ii] -> Branch("mass",&mass,"mass/F");
    myTree[ii] -> Branch("probe_eta",&probe_eta,"probe_eta/F");
    myTree[ii] -> Branch("probe_abseta",&probe_abseta,"probe_abseta/F");
    myTree[ii] -> Branch("probe_phi",&probe_phi,"probe_phi/F");
    myTree[ii] -> Branch("probe_pt",&probe_pt,"probe_pt/F");
    myTree[ii] -> Branch("probe_r9",&probe_r9,"probe_r9/F");
    myTree[ii] -> Branch("probe_pid_scetawid",&probe_pid_scetawid,"probe_pid_scetawid/F");
    myTree[ii] -> Branch("probe_pid_scphiwid",&probe_pid_scphiwid,"probe_pid_scphiwid/F");
    myTree[ii] -> Branch("probe_sEtaEta",&probe_sEtaEta,"probe_sEtaEta/F");
    myTree[ii] -> Branch("probe_sEtaPhi",&probe_sEtaPhi,"probe_sEtaPhi/F");
    myTree[ii] -> Branch("probe_s4Ratio",&probe_s4Ratio,"probe_s4Ratio/F");
    myTree[ii] -> Branch("probe_etasc",&probe_etasc,"probe_etasc/F");
    myTree[ii] -> Branch("probe_rr",&probe_rr,"probe_rr/F");
    myTree[ii] -> Branch("probe_mvaId",&probe_mvaId,"probe_mvaId/F"); 
    myTree[ii] -> Branch("probe_charged03",&probe_charged03,"probe_charged03/F"); 
    myTree[ii] -> Branch("probe_neutral03",&probe_neutral03,"probe_neutral03/F"); 
    myTree[ii] -> Branch("probe_photon03", &probe_photon03, "probe_photon03/F"); 
    myTree[ii] -> Branch("probe_combinedPfIso03",&probe_combinedPfIso03,"probe_combinedPfIso03/F");
    myTree[ii] -> Branch("probe_fprCharged03",&probe_fprCharged03,"probe_fprCharged03/F"); 
    myTree[ii] -> Branch("probe_fprNeutral03",&probe_fprNeutral03,"probe_fprNeutral03/F"); 
    myTree[ii] -> Branch("probe_fprPhoton03", &probe_fprPhoton03, "probe_fprPhoton03/F"); 
    myTree[ii] -> Branch("probe_combinedPfIsoFPR03",&probe_combinedPfIsoFPR03,"probe_combinedPfIsoFPR03/F");
    myTree[ii] -> Branch("probe_fprRCCharged03",&probe_fprRCCharged03,"probe_fprRCCharged03/F"); 
    myTree[ii] -> Branch("probe_fprRCNeutral03",&probe_fprRCNeutral03,"probe_fprRCNeutral03/F"); 
    myTree[ii] -> Branch("probe_fprRCPhoton03", &probe_fprRCPhoton03, "probe_fprRCPhoton03/F"); 
    myTree[ii] -> Branch("numvtx",&numvtx,"numvtx/I");
    myTree[ii] -> Branch("rho",&rho,"rho/F");
    myTree[ii] -> Branch("npu",&npu_,"npu/I");
    myTree[ii] -> Branch("puW",  &puW,  "puW/F");
    myTree[ii] -> Branch("r9WeightEB",  &r9weight_EB,  "r9WeightEB/F");
    myTree[ii] -> Branch("r9WeightEE",  &r9weight_EE,  "r9WeightEE/F");
    myTree[ii] -> Branch("etaWeight",  &etaWeight,  "etaWeight/F");
    myTree[ii] -> Branch("nvtxWeight",  &nvtxWeight,  "nvtxWeight/F");
    myTree[ii] -> Branch("puW30", &puW30, "puW30/F");
    myTree[ii] -> Branch("puW50", &puW50, "puW50/F");
    myTree[ii] -> Branch("puW75", &puW75, "puW75/F");
    myTree[ii] -> Branch("puW90", &puW90, "puW90/F");
    myTree[ii] -> Branch("puW135",&puW135,"puW135/F");
    myTree[ii] -> Branch("puW150",&puW150,"puW150/F");
    myTree[ii] -> Branch("okLooseElePtEta",&okLooseElePtEta,"okLooseElePtEta/I");
    myTree[ii] -> Branch("okLooseEleID",&okLooseEleID,"okLooseEleID/I");
    myTree[ii] -> Branch("okMediumElePtEta",&okMediumElePtEta,"okMediumElePtEta/I");
    myTree[ii] -> Branch("okMediumEleID",&okMediumEleID,"okMediumEleID/I");
    myTree[ii] -> Branch("okTightElePtEta",&okTightElePtEta,"okTightElePtEta/I");
    myTree[ii] -> Branch("okTightEleID",&okTightEleID,"okTightEleID/I");
    myTree[ii] -> Branch("okMVA_005",&okMVA_005,"okMVA_005/I");
    myTree[ii] -> Branch("okMVA_01",&okMVA_01,"okMVA_01/I");
    myTree[ii] -> Branch("okMVA_02",&okMVA_02,"okMVA_02/I");
    myTree[ii] -> Branch("hasPromptElectronMatched",&hasPromptElectronMatched,"hasPromptElectronMatched/I");
  }

  // Loop over events
  Long64_t nentries = fChain->GetEntriesFast();
  Long64_t nbytes = 0, nb = 0;

  cout << "Going to loop over " << nentries << " events" << endl;
  cout << endl;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);

    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

    if (jentry%5000==0) cout << "Read entry " << jentry << endl;

    for (int iEle=0; iEle<nEle; iEle++) {
      
      if (isMC && mcMatch)
	if (!isGenMatchEle[iEle])
	  continue;

      //cout << "debug: found one electron" << endl;

      if (tagTightnessLevel=="Tight")
	{
	  if (!isTagTightEle[iEle])
	    continue;
	}
      else if (tagTightnessLevel=="Medium")
	{
	  if (!isTagMediumEle[iEle])
	    continue;
	}
      else if (tagTightnessLevel=="Loose")
	{
	  if (!isTagLooseEle[iEle])
	    continue;
	}
      else
	{
	  std::cout << "Tag Selection undefined" << std::endl;
	  exit(-1);
	}


      // we ask:
      // the event to fire one of the two T&P HLT paths
      // the tag electron to match the hard leg of the fired HLT path 
      // both on data and on MC

      //giulia debug
      //bool hltMatch = true;
      bool hltMatch = false;
      if (isHLT_TandP_Ele17() && isTrig17Mass50MatchedEle[iEle]) hltMatch = true;  
      if (isHLT_TandP_Ele20() && isTrig20Mass50MatchedEle[iEle]) hltMatch = true;  
      if (!hltMatch) continue;

      TLorentzVector theEle;
      theEle.SetPtEtaPhiM(electron_pt[iEle], electron_eta[iEle], electron_phi[iEle], 0.);

      for (int iPho=0; iPho<nPhot; iPho++) {
	if (isMC && mcMatch)
	  if (!isGenMatchPhot[iPho])
	    continue;
	//cout << "debug: found one photon" << endl;

	//apply preselection as probe selection for photons (should be loosened to measure preselection SF)
	if (!isProbePreselPhot[iPho])
	  continue;

	//cout << "debug: found one preselected photon" << endl;

	TLorentzVector thePho;
	thePho.SetPtEtaPhiE(ptPhot[iPho], etaPhot[iPho], phiPhot[iPho], ePhot[iPho]);
      
	TLorentzVector theTaP = theEle + thePho;
	float theMass = theTaP.M();
      
	//giulia -- debug
	if (fabs(theMass-91.181)>DeltaMZ)
	  continue;

	// filling the tree
	mass = theMass;
	
	probe_eta    = etascPhot[iPho];
	probe_abseta = fabs(etascPhot[iPho]);
	probe_phi    = phiPhot[iPho];
	probe_pt     = ptPhot[iPho];
	probe_r9     = r9Phot[iPho];
	
	probe_pid_scetawid = pid_scetawid[iPho];
	probe_pid_scphiwid = pid_scphiwid[iPho];
	probe_sEtaEta      = sEtaEtaPhot[iPho];
	probe_sEtaPhi      = sEtaPhiPhot[iPho];
	probe_s4Ratio      = s4RatioPhot[iPho];
	probe_etasc        = etascPhot[iPho];
	probe_rr           = sigmaRRPhot[iPho]; 
	probe_mvaId        = mvaIDPhot[iPho]; 

	probe_charged03   = pid_pfIsoCharged03ForCiC[iPho]; 
	probe_neutral03   = pid_pfIsoNeutrals03ForCiC[iPho]; 
	probe_photon03    = pid_pfIsoPhotons03ForCiC[iPho]; 
	probe_combinedPfIso03  = combinedPfIso03(iPho);

	probe_fprCharged03   = pid_pfIsoFPRCharged03[iPho]; 
	probe_fprNeutral03   = pid_pfIsoFPRNeutral03[iPho]; 
	probe_fprPhoton03    = pid_pfIsoFPRPhoton03[iPho]; 
	probe_combinedPfIsoFPR03  = combinedPfIso03(pid_pfIsoFPRCharged03[iPho],pid_pfIsoFPRNeutral03[iPho],pid_pfIsoFPRPhoton03[iPho],iPho);

	probe_fprRCCharged03 = pid_pfIsoFPRRandomConeCharged03[iPho]; 
	probe_fprRCNeutral03 = pid_pfIsoFPRRandomConeNeutral03[iPho]; 
	probe_fprRCPhoton03  = pid_pfIsoFPRRandomConePhoton03[iPho]; 

	numvtx = nvtx;
	rho=rhoAllJets;
	npu_ = npu;
	//cout << "debug: filled event and photon variables" << endl;	

	if(isMC) {
	  puW    = pu_weight;
 	  puW30  = pu_weight30;
 	  puW50  = pu_weight50;
 	  puW75  = pu_weight75;
 	  puW90  = pu_weight90;
 	  puW135 = pu_weight135;
 	  puW150 = pu_weight150;
	  
	  
// 	  puW    = (Double_t)(h_weights_all->GetBinContent(h_weights_all->FindBin(nvtx)));
//  	  puW30  = (Double_t)(h_weights_hlt30->GetBinContent(h_weights_hlt30->FindBin(nvtx)));
//  	  puW50  = (Double_t)(h_weights_hlt50->GetBinContent(h_weights_hlt50->FindBin(nvtx)));
//  	  puW75  = (Double_t)(h_weights_hlt75->GetBinContent(h_weights_hlt75->FindBin(nvtx)));
//  	  puW90  = (Double_t)(h_weights_hlt90->GetBinContent(h_weights_hlt90->FindBin(nvtx)));
//  	  puW135 = (Double_t)(h_weights_hlt135->GetBinContent(h_weights_hlt135->FindBin(nvtx)));
//  	  puW150 = (Double_t)(h_weights_hlt150->GetBinContent(h_weights_hlt150->FindBin(nvtx)));

	  //cout << "puW = " << puW << endl;

	} else {
	  puW    = 1.;
	  puW30  = 1.;
	  puW50  = 1.;
	  puW75  = 1.;
	  puW90  = 1.;
	  puW135 = 1.;
	  puW150 = 1.;
	}

	//cout << "debug: filled puW variables" << endl;	
	if (r9Reweight)
	  {
	    r9weight_EB=r9weights_EB->GetBinContent(r9weights_EB->FindBin(r9Phot[iPho]));
	    r9weight_EE=r9weights_EE->GetBinContent(r9weights_EE->FindBin(r9Phot[iPho]));
	  }
	else
	  {
	    r9weight_EB=1.;
	    r9weight_EE=1.;
	  }

	//cout << "debug: filled r9 weights variables" << endl;	

	//cout << "debug : bool etaReweight = " << etaReweight << endl;
	if(etaReweight) {

	  etaWeight=h_etaWeight->GetBinContent(h_etaWeight->FindBin(etascPhot[iPho]));
	  
	}
	else etaWeight=1.;

	//cout << "debug: filled eta weights variables" << endl;	

	//cout << "debug : bool nvtxReweight = " << etaReweight << endl;
	if(nvtxReweight) {
	  nvtxWeight=h_nvtxWeight->GetBinContent(h_nvtxWeight->FindBin(nvtx));
	  //cout << "debug : nvtxweight = " << nvtxWeight << endl; 
	}
	else nvtxWeight=1.;
	
	//cout << "debug: filled nvtx weights variables" << endl;	

	okLooseElePtEta  = 1;
	okLooseEleID     = isProbeLoosePhot[iPho];
	okMediumElePtEta = 1;
	okMediumEleID    = isProbeMediumPhot[iPho];
	okTightElePtEta  = 1;
	okTightEleID     = isProbeTightPhot[iPho];

	hasPromptElectronMatched = hasMatchedPromptElePhot[iPho];

	// MVA WPs
	okMVA_005 = 0;
	okMVA_01  = 0;
	okMVA_02  = 0;
	// new WPs by Giulia (Jan 2014) 
	if (isEBPhot[iPho]) {
	  if ( mvaIDPhot[iPho]>0.83548 ) okMVA_005 = 1;
	  if ( mvaIDPhot[iPho]>0.87602 ) okMVA_01  = 1;
	  if ( mvaIDPhot[iPho]>0.90774 ) okMVA_02  = 1;
	} else {
	  if ( mvaIDPhot[iPho]>0.87382 ) okMVA_005 = 1;
	  if ( mvaIDPhot[iPho]>0.90492 ) okMVA_01  = 1;
	  if ( mvaIDPhot[iPho]>0.92864 ) okMVA_02  = 1;
	}

	//cout << "debug: filled all tree leaves" << endl;	
	
	// check HLT and pT range
	if (!isMC) {
	  myTree[0]->Fill();
	  if ( isHLT_30()  && ptPhot[iPho]>=40 && ptPhot[iPho]<65 )       myTree[1]->Fill();
	  if ( isHLT_50()  && ptPhot[iPho]>=65 && ptPhot[iPho]<90 )       myTree[2]->Fill();
	  if ( isHLT_75()  && ptPhot[iPho]>=90 && ptPhot[iPho]<105 )      myTree[3]->Fill();
	  if ( isHLT_90()  && ptPhot[iPho]>=105 && ptPhot[iPho]<165 )     myTree[4]->Fill();
	  if ( isHLT_135() && ptPhot[iPho]>=165 && ptPhot[iPho]<180 )     myTree[5]->Fill();
	  if ( isHLT_150() && ptPhot[iPho]>=180 && ptPhot[iPho]<200000 )  myTree[6]->Fill();
	}

	if (isMC) {
	  myTree[0]->Fill();
	  if ( ptPhot[iPho]>=40 && ptPhot[iPho]<65 )      myTree[1]->Fill();
	  if ( ptPhot[iPho]>=65 && ptPhot[iPho]<90 )      myTree[2]->Fill();
	  if ( ptPhot[iPho]>=90 && ptPhot[iPho]<105 )     myTree[3]->Fill();
	  if ( ptPhot[iPho]>=105 && ptPhot[iPho]<165 )    myTree[4]->Fill();
	  if ( ptPhot[iPho]>=165 && ptPhot[iPho]<180 )    myTree[5]->Fill();
	  if ( ptPhot[iPho]>=180 && ptPhot[iPho]<200000 ) myTree[6]->Fill();
	}
      
      } // loop over photons
      //cout << "debug: done loop over photons" << endl;	

    }   // loop over electrons
    //cout << "debug: done loop over electrons" << endl;	
  }
  
  //cout << "debug: done loop over entries" << endl;	

  for (int ii=0; ii<7; ii++) {
    outFile[ii]->cd("myTaPDir");
    myTree[ii]->Write();
    outFile[ii]->Close();
  }
}

bool TagAndProbeAnalysis::isHLT_TandP_Ele20() {  

  bool isok = false;   


  for (int ii=0; ii<firedHLTNames->size(); ii++) {

    std::string input((*firedHLTNames)[ii]);
    int thestr = 0;
    for(thestr = input.find("HLT_Ele20_CaloIdVT_CaloIsoVT_TrkIdT_TrkIsoVT_SC4_Mass50_v", 0); 
	thestr != string::npos; 
	thestr = input.find("HLT_Ele20_CaloIdVT_CaloIsoVT_TrkIdT_TrkIsoVT_SC4_Mass50_v", thestr)) {
      return true;
    }
  }

  return isok;
}

bool TagAndProbeAnalysis::isHLT_TandP_Ele17() {  

  bool isok = false;   

  for (int ii=0; ii<firedHLTNames->size(); ii++) {
    std::string input((*firedHLTNames)[ii]);
    int thestr = 0;
    for(thestr = input.find("HLT_Ele17_CaloIdVT_CaloIsoVT_TrkIdT_TrkIsoVT_Ele8_Mass50_v", 0); 
	thestr != string::npos; 
	thestr = input.find("HLT_Ele17_CaloIdVT_CaloIsoVT_TrkIdT_TrkIsoVT_Ele8_Mass50_v", thestr)) {
      return true;
    }
  }

  return isok;
}

bool TagAndProbeAnalysis::isHLT_30() {

  bool isok = false;
  for (int ii=0; ii<firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v11") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v12") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v13") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v14") isok=true;
  }
  return isok;
}

bool TagAndProbeAnalysis::isHLT_50() {

  bool isok = false;
  for (int ii=0; ii<firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v7")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v8")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v9")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v10") isok=true;
  }
  return isok;
}

bool TagAndProbeAnalysis::isHLT_75() {

  bool isok = false;
  for (int ii=0; ii<firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v10") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v11") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v12") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v13") isok=true;
  }
  return isok;
}

bool TagAndProbeAnalysis::isHLT_90() {

  bool isok = false;
  for (int ii=0; ii<firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v7")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v8")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v9")  isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v10") isok=true;
  }
  return isok;
}

bool TagAndProbeAnalysis::isHLT_135() {

  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v4") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v5") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v6") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v7") isok=true;
  }
  return isok;
}

bool TagAndProbeAnalysis::isHLT_150() {

  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v1") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v2") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v3") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v4") isok=true;
  }
  return isok;
}

void TagAndProbeAnalysis::readR9Weights()
{
  if (!r9Reweight)
    return;
  
  TFile *f=TFile::Open(r9WeightsFile);

  r9weights_EB=(TH1F*)f->Get("R9WeightEBAll");
  r9weights_EE=(TH1F*)f->Get("R9WeightEEAll");

  //Just do a smoothing of the weights
  r9weights_EB->Rebin(2);
  r9weights_EE->Rebin(2);

  r9weights_EB->Smooth(4);
  r9weights_EE->Smooth(4);
}

void TagAndProbeAnalysis::readEtaWeights()
{
  if (!etaReweight)
    return;
  
  TFile *f=TFile::Open(etaWeightsFile);

  h_etaWeight=(TH1F*)f->Get("weights");
  h_etaWeight->SetName("h_etaWeight");

  //Just do a smoothing of the weights
  //etaWeight->Smooth();
  //don't apply smoothing because eta has cuts and smoothing changes significantly weights next to the cuts 

}



void TagAndProbeAnalysis::read_nvtxWeights()
{
  if (!nvtxReweight)
    return;
  
  TFile *f=TFile::Open(nvtxWeightsFile);

  h_nvtxWeight=(TH1F*)f->Get("weights");
  h_nvtxWeight->SetName("h_nvtxWeight");

  //Just do a smoothing of the weights
  //etaWeight->Smooth();
  //don't apply smoothing because eta has cuts and smoothing changes significantly weights next to the cuts 

}




Float_t TagAndProbeAnalysis::combinedPfIso03(const int& pho)
{
  float EA_charged[7] = { 0.012, 0.010, 0.014, 0.012, 0.016, 0.020, 0.012};
  float EA_neutral[7] = { 0.030, 0.057, 0.039, 0.015, 0.024, 0.039, 0.072};
  float EA_photons[7] = { 0.148, 0.130, 0.112, 0.216, 0.262, 0.260, 0.266};

  int theEAregion_fG = effectiveAreaRegion(etascPhot[pho]); 
  return pid_pfIsoCharged03ForCiC[pho] - rhoAllJets*EA_charged[theEAregion_fG] + pid_pfIsoNeutrals03ForCiC[pho] - rhoAllJets*EA_neutral[theEAregion_fG]  + pid_pfIsoPhotons03ForCiC[pho] - rhoAllJets*EA_photons[theEAregion_fG];    
}

Float_t TagAndProbeAnalysis::combinedPfIso03(float isoCharged03, float isoNeutral03, float isoPhoton03, const int& pho)
{
  float EA_charged[7] = { 0.012, 0.010, 0.014, 0.012, 0.016, 0.020, 0.012};
  float EA_neutral[7] = { 0.030, 0.057, 0.039, 0.015, 0.024, 0.039, 0.072};
  float EA_photons[7] = { 0.148, 0.130, 0.112, 0.216, 0.262, 0.260, 0.266};

  int theEAregion_fG = effectiveAreaRegion(etascPhot[pho]);
  return isoCharged03 - rhoAllJets*EA_charged[theEAregion_fG] + isoNeutral03 - rhoAllJets*EA_neutral[theEAregion_fG]  + isoPhoton03 - rhoAllJets*EA_photons[theEAregion_fG];
}

// for effective area calculation                                                                                                                                                  
Int_t TagAndProbeAnalysis::effectiveAreaRegion(float theEta) {
  
  int theEAregion = 999;
  if (fabs(theEta)<1.) theEAregion = 0;
  if (fabs(theEta)<1.479 && fabs(theEta)>1.)    theEAregion = 1;
  if (fabs(theEta)<2.    && fabs(theEta)>1.479) theEAregion = 2;
  if (fabs(theEta)<2.2   && fabs(theEta)>2.0)   theEAregion = 3;
  if (fabs(theEta)<2.3   && fabs(theEta)>2.2)   theEAregion = 4;
  if (fabs(theEta)<2.4   && fabs(theEta)>2.3)   theEAregion = 5;
  if (fabs(theEta)>2.4) theEAregion = 6;
  return theEAregion;
}
