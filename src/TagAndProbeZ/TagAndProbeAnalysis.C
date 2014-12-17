#define TagAndProbeAnalysis_cxx
#include "TagAndProbeAnalysis.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <iostream>
#include <sstream>
#include <string>
#include <TLorentzVector.h>

using namespace std;

//////////////////////////////////////////////////////////////////////////////////////////
// ______ _   _ _____    _          _                          _       _     _         _ 
// | ___ \ | | |  __ \  (_)        (_)                        (_)     | |   | |       | |
// | |_/ / | | | |  \/   _ _ __     _ ___  ___   __      _____ _  __ _| |__ | |_ ___  | |
// | ___ \ | | | | __   | | '_ \   | / __|/ _ \  \ \ /\ / / _ \ |/ _` | '_ \| __/ __| | |
// | |_/ / |_| | |_\ \  | | | | |  | \__ \ (_) |  \ V  V /  __/ | (_| | | | | |_\__ \ |_|
// \____/ \___/ \____/  |_|_| |_|  |_|___/\___/    \_/\_/ \___|_|\__, |_| |_|\__|___/ (_)
//                                                                __/ |                  
//                                                               |___/                   
///////////////////////////////////////////////////////////////////////////////////////////

//calculation of iso weights is wrong! removed branch in tree, code to be cleaned!

void TagAndProbeAnalysis::Loop( int red_factor )
{
  if (fChain == 0) return;

  readR9Weights();
  readEtaWeights();
  read_nvtxWeights();
  read_rhoWeights();
  read_ptWeights();
  cout << "now read iso weight file" << endl;
  read_isoWeights_dataZ_40_65_to_mcPhot();

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
  float r9weight_EB_hlt30;
  float r9weight_EB_hlt50;
  float r9weight_EB_hlt75;
  float r9weight_EB_hlt90;
  float r9weight_EB_hlt135;
  float r9weight_EB_hlt150;
  float r9weight_EE_hlt30;
  float r9weight_EE_hlt50;
  float r9weight_EE_hlt75;
  float r9weight_EE_hlt90;
  float r9weight_EE_hlt135;
  float r9weight_EE_hlt150;
  float etaWeight;
  float nvtxWeight;
  float rhoWeight30, rhoWeight50, rhoWeight75, rhoWeight90, rhoWeight135, rhoWeight150;
  float ptWeight;
  //float isoWeight_EB, isoWeight_EE;
  float isoWeight_dataZ_mcPhot;
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
  float combinedPfIso03Phot, combinedPfIsoFPR03Phot;
  int npu_;


  float bin_low_edge_EB[61] = {40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480};
  float bin_high_edge_EB[61] ={47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000};
  float bin_low_edge_EE[18]={40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 };
  float bin_high_edge_EE[18]={65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000 };

  float isoW_EB[61];
  float isoW_EE[18];
  string name_h_isoW_EB[61];
  string name_h_isoW_EE[18];
  string name_branch_isoW_EB[61];
  string name_branch_isoW_EE[18];

  std::ostringstream stringtmp;
  for(int i=0; i<61; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    name_h_isoW_EB[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();
  }
  for(int i=0; i<18; i++){
    stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    name_h_isoW_EE[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();
  }

  for(int i=0; i<61; i++){
    stringtmp << "isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    name_branch_isoW_EB[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();
  }
  for(int i=0; i<18; i++){
    stringtmp << "isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    name_branch_isoW_EE[i] = stringtmp.str();
    stringtmp.str("");
    stringtmp.clear();
  }

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
    myTree[ii] -> Branch("combinedPfIso03Phot",&combinedPfIso03Phot,"combinedPfIso03Phot/F");
    myTree[ii] -> Branch("combinedPfIsoFPR03Phot",&combinedPfIsoFPR03Phot,"combinedPfIsoFPR03Phot/F");
    myTree[ii] -> Branch("numvtx",&numvtx,"numvtx/I");
    myTree[ii] -> Branch("rho",&rho,"rho/F");
    myTree[ii] -> Branch("npu",&npu_,"npu/I");
    myTree[ii] -> Branch("puW",  &puW,  "puW/F");
    myTree[ii] -> Branch("r9WeightEB_hlt30",  &r9weight_EB_hlt30,  "r9WeightEB_hlt30/F");
    myTree[ii] -> Branch("r9WeightEB_hlt50",  &r9weight_EB_hlt50,  "r9WeightEB_hlt50/F");
    myTree[ii] -> Branch("r9WeightEB_hlt75",  &r9weight_EB_hlt75,  "r9WeightEB_hlt75/F");
    myTree[ii] -> Branch("r9WeightEB_hlt90",  &r9weight_EB_hlt90,  "r9WeightEB_hlt90/F");
    myTree[ii] -> Branch("r9WeightEB_hlt135",  &r9weight_EB_hlt135,  "r9WeightEB_hlt135/F");
    myTree[ii] -> Branch("r9WeightEB_hlt150",  &r9weight_EB_hlt150,  "r9WeightEB_hlt150/F");
    myTree[ii] -> Branch("r9WeightEE_hlt30",  &r9weight_EE_hlt30,  "r9WeightEE_hlt30/F");
    myTree[ii] -> Branch("r9WeightEE_hlt50",  &r9weight_EE_hlt50,  "r9WeightEE_hlt50/F");
    myTree[ii] -> Branch("r9WeightEE_hlt75",  &r9weight_EE_hlt75,  "r9WeightEE_hlt75/F");
    myTree[ii] -> Branch("r9WeightEE_hlt90",  &r9weight_EE_hlt90,  "r9WeightEE_hlt90/F");
    myTree[ii] -> Branch("r9WeightEE_hlt135",  &r9weight_EE_hlt135,  "r9WeightEE_hlt135/F");
    myTree[ii] -> Branch("r9WeightEE_hlt150",  &r9weight_EE_hlt150,  "r9WeightEE_hlt150/F");
    myTree[ii] -> Branch("etaWeight",  &etaWeight,  "etaWeight/F");
    myTree[ii] -> Branch("nvtxWeight",  &nvtxWeight,  "nvtxWeight/F");
    myTree[ii] -> Branch("rhoWeight30",  &rhoWeight30,  "rhoWeight30/F");
    myTree[ii] -> Branch("rhoWeight50",  &rhoWeight50,  "rhoWeight50/F");
    myTree[ii] -> Branch("rhoWeight75",  &rhoWeight75,  "rhoWeight75/F");
    myTree[ii] -> Branch("rhoWeight90",  &rhoWeight90,  "rhoWeight90/F");
    myTree[ii] -> Branch("rhoWeight135",  &rhoWeight135,  "rhoWeight135/F");
    myTree[ii] -> Branch("rhoWeight150",  &rhoWeight150,  "rhoWeight150/F");
    myTree[ii] -> Branch("puW30", &puW30, "puW30/F");
    myTree[ii] -> Branch("puW50", &puW50, "puW50/F");
    myTree[ii] -> Branch("puW75", &puW75, "puW75/F");
    myTree[ii] -> Branch("puW90", &puW90, "puW90/F");
    myTree[ii] -> Branch("puW135",&puW135,"puW135/F");
    myTree[ii] -> Branch("puW150",&puW150,"puW150/F");
    myTree[ii] -> Branch("ptWeight_40_65",&ptWeight,"ptWeight_40_65/F");
    //myTree[ii] -> Branch("isoWeight_dataZ_mcPhot",&isoWeight_dataZ_mcPhot,"isoWeight_dataZ_mcPhot/F");
    for(int jj=0; jj<61; jj++){
      myTree[ii] -> Branch((name_branch_isoW_EB[jj]).c_str(),&isoW_EB[jj],(name_branch_isoW_EB[jj]+"/F").c_str());
    }
    for(int jj=0; jj<18; jj++){
      myTree[ii] -> Branch((name_branch_isoW_EE[jj]).c_str(),&isoW_EE[jj],(name_branch_isoW_EE[jj]+"/F").c_str());
    }
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
  cout << "red_factor " << red_factor << " events" << endl;
  cout << endl;

  int n_electron_passed = 0;

  for (Long64_t jentry=0; jentry<nentries; jentry++) {
    Long64_t ientry = LoadTree(jentry);

    //reduce statistics
    if(red_factor>0 && jentry%red_factor!=0 ) continue;

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
	combinedPfIso03Phot  = combinedPfIso03(iPho);


	probe_fprCharged03   = pid_pfIsoFPRCharged03[iPho]; 
	probe_fprNeutral03   = pid_pfIsoFPRNeutral03[iPho]; 
	probe_fprPhoton03    = pid_pfIsoFPRPhoton03[iPho]; 
	probe_combinedPfIsoFPR03  = combinedPfIso03(pid_pfIsoFPRCharged03[iPho],pid_pfIsoFPRNeutral03[iPho],pid_pfIsoFPRPhoton03[iPho],iPho);
	combinedPfIsoFPR03Phot  = combinedPfIso03(pid_pfIsoFPRCharged03[iPho],pid_pfIsoFPRNeutral03[iPho],pid_pfIsoFPRPhoton03[iPho],iPho);

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
	    if(TMath::Abs(probe_eta)<1.){
	      r9weight_EB_hlt30 =h_R9Weight_lowEB_hlt30 ->GetBinContent((Int_t)h_R9Weight_lowEB_hlt30 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt50 =h_R9Weight_lowEB_hlt50 ->GetBinContent((Int_t)h_R9Weight_lowEB_hlt50 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt75 =h_R9Weight_lowEB_hlt75 ->GetBinContent((Int_t)h_R9Weight_lowEB_hlt75 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt90 =h_R9Weight_lowEB_hlt90 ->GetBinContent((Int_t)h_R9Weight_lowEB_hlt90 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt135=h_R9Weight_lowEB_hlt135->GetBinContent((Int_t)h_R9Weight_lowEB_hlt135->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt150=h_R9Weight_lowEB_hlt150->GetBinContent((Int_t)h_R9Weight_lowEB_hlt150->FindBin(r9Phot[iPho]));
	    }	    
	    if(TMath::Abs(probe_eta)>1. && TMath::Abs(probe_eta)<1.4442){
	      r9weight_EB_hlt30 =h_R9Weight_highEB_hlt30 ->GetBinContent((Int_t)h_R9Weight_highEB_hlt30 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt50 =h_R9Weight_highEB_hlt50 ->GetBinContent((Int_t)h_R9Weight_highEB_hlt50 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt75 =h_R9Weight_highEB_hlt75 ->GetBinContent((Int_t)h_R9Weight_highEB_hlt75 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt90 =h_R9Weight_highEB_hlt90 ->GetBinContent((Int_t)h_R9Weight_highEB_hlt90 ->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt135=h_R9Weight_highEB_hlt135->GetBinContent((Int_t)h_R9Weight_highEB_hlt135->FindBin(r9Phot[iPho]));
	      r9weight_EB_hlt150=h_R9Weight_highEB_hlt150->GetBinContent((Int_t)h_R9Weight_highEB_hlt150->FindBin(r9Phot[iPho]));
	    }
	    if(TMath::Abs(probe_eta)>1.566 && TMath::Abs(probe_eta)<2.){
	      r9weight_EE_hlt30 =h_R9Weight_lowEE_hlt30 ->GetBinContent((Int_t)h_R9Weight_lowEE_hlt30 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt50 =h_R9Weight_lowEE_hlt50 ->GetBinContent((Int_t)h_R9Weight_lowEE_hlt50 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt75 =h_R9Weight_lowEE_hlt75 ->GetBinContent((Int_t)h_R9Weight_lowEE_hlt75 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt90 =h_R9Weight_lowEE_hlt90 ->GetBinContent((Int_t)h_R9Weight_lowEE_hlt90 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt135=h_R9Weight_lowEE_hlt135->GetBinContent((Int_t)h_R9Weight_lowEE_hlt135->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt150=h_R9Weight_lowEE_hlt150->GetBinContent((Int_t)h_R9Weight_lowEE_hlt150->FindBin(r9Phot[iPho]));
	    }
	    if(TMath::Abs(probe_eta)>2. && TMath::Abs(probe_eta)<2.5){
	      r9weight_EE_hlt30 =h_R9Weight_highEE_hlt30 ->GetBinContent((Int_t)h_R9Weight_highEE_hlt30 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt50 =h_R9Weight_highEE_hlt50 ->GetBinContent((Int_t)h_R9Weight_highEE_hlt50 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt75 =h_R9Weight_highEE_hlt75 ->GetBinContent((Int_t)h_R9Weight_highEE_hlt75 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt90 =h_R9Weight_highEE_hlt90 ->GetBinContent((Int_t)h_R9Weight_highEE_hlt90 ->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt135=h_R9Weight_highEE_hlt135->GetBinContent((Int_t)h_R9Weight_highEE_hlt135->FindBin(r9Phot[iPho]));
	      r9weight_EE_hlt150=h_R9Weight_highEE_hlt150->GetBinContent((Int_t)h_R9Weight_highEE_hlt150->FindBin(r9Phot[iPho]));
	    }
	  }
	//r9weight_EB=r9weights_EB->GetBinContent((Int_t)r9weights_EB->FindBin(r9Phot[iPho]));
	//r9weight_EE=r9weights_EE->GetBinContent((Int_t)r9weights_EE->FindBin(r9Phot[iPho]));
      
	else
	  {

	    r9weight_EB_hlt30 =1.;
	    r9weight_EB_hlt50 =1.;
	    r9weight_EB_hlt75 =1.;
	    r9weight_EB_hlt90 =1.;
	    r9weight_EB_hlt135=1.;
	    r9weight_EB_hlt150=1.;
	    
	    
	    r9weight_EE_hlt30 =1.;
	    r9weight_EE_hlt50 =1.;
	    r9weight_EE_hlt75 = 1.;
	    r9weight_EE_hlt90 =1.;
	    r9weight_EE_hlt135=1.;
	    r9weight_EE_hlt150=1.;
	    // r9weight_EB=1.;
	    //    r9weight_EE=1.;
	  }




//      if(nvtxReweight) {
// 	  nvtxWeight=h_nvtxWeight->GetBinContent(h_nvtxWeight->FindBin(nvtx));
// 	  //cout << "debug : nvtxweight = " << nvtxWeight << endl; 
// 	}
//	else nvtxWeight=1.;
	//cout << "debug: filled nvtx weights variables" << endl;	


	if(isMC && rhoReweight) {
	  rhoWeight30=h_rhoWeight_mc_hlt30->GetBinContent((Int_t)h_rhoWeight_mc_hlt30->FindBin(rho));
	  rhoWeight50=h_rhoWeight_mc_hlt50->GetBinContent((Int_t)h_rhoWeight_mc_hlt50->FindBin(rho));
	  rhoWeight75=h_rhoWeight_mc_hlt75->GetBinContent((Int_t)h_rhoWeight_mc_hlt75->FindBin(rho));
	  rhoWeight90=h_rhoWeight_mc_hlt90->GetBinContent((Int_t)h_rhoWeight_mc_hlt90->FindBin(rho));
	  rhoWeight135=h_rhoWeight_mc_hlt135->GetBinContent((Int_t)h_rhoWeight_mc_hlt135->FindBin(rho));
	  rhoWeight150=h_rhoWeight_mc_hlt150->GetBinContent((Int_t)h_rhoWeight_mc_hlt150->FindBin(rho));
	}
	else if(!isMC && rhoReweight){
	  rhoWeight30=h_rhoWeight_data_hlt30->GetBinContent((Int_t)h_rhoWeight_data_hlt30->FindBin(rho));
	  rhoWeight50=h_rhoWeight_data_hlt50->GetBinContent((Int_t)h_rhoWeight_data_hlt50->FindBin(rho));
	  rhoWeight75=h_rhoWeight_data_hlt75->GetBinContent((Int_t)h_rhoWeight_data_hlt75->FindBin(rho));
	  rhoWeight90=h_rhoWeight_data_hlt90->GetBinContent((Int_t)h_rhoWeight_data_hlt90->FindBin(rho));
	  rhoWeight135=h_rhoWeight_data_hlt135->GetBinContent((Int_t)h_rhoWeight_data_hlt135->FindBin(rho));
	  rhoWeight150=h_rhoWeight_data_hlt150->GetBinContent((Int_t)h_rhoWeight_data_hlt150->FindBin(rho));
	}
	else {
	  rhoWeight30=1.;
	  rhoWeight50=1.;
	  rhoWeight75=1.;
	  rhoWeight90=1.;
	  rhoWeight135=1.;
	  rhoWeight150=1.;
	}

	//cout << "debug : bool etaReweight = " << etaReweight << endl;
	if(etaReweight) {
	  etaWeight=h_etaWeight->GetBinContent((Int_t)h_etaWeight->FindBin(etascPhot[iPho]));
	}
	else etaWeight=1.;

	if(ptReweight){
	  ptWeight=h_ptWeight->GetBinContent((Int_t)h_ptWeight->FindBin(ptPhot[iPho]));
	}


	if(isoReweight  ){

	  for(int jj=0; jj<61; jj++){
	    isoW_EB[jj] = h_isoWeight_EB[jj]->GetBinContent((Int_t)h_isoWeight_EB[jj]->FindBin(probe_combinedPfIsoFPR03));
	  }
	  for(int jj=0; jj<18; jj++){
	    isoW_EE[jj] = h_isoWeight_EE[jj]->GetBinContent((Int_t)h_isoWeight_EE[jj]->FindBin(probe_combinedPfIsoFPR03));
	  }
	  //not working
// 	  if( fabs(probe_eta)<1.4442 ) {
//  	    for(int i=0; i<61; i++){
//  	      if( probe_pt>bin_low_edge_EB[i] && probe_pt<bin_high_edge_EB[i] ) {

// 		isoWeight_dataZ_mcPhot= h_isoWeight_EB[i]->GetBinContent((Int_t)h_isoWeight_EB[i]->FindBin(probe_combinedPfIsoFPR03));
// 		break;
// 	      }
//  	    }
//  	  }
//  	  else if ( fabs(probe_eta)>1.556 && fabs(probe_eta)<2.5){
//  	    for (int i =0; i<18; i++){
//  	      if( probe_pt>bin_low_edge_EE[i] && probe_pt<bin_high_edge_EE[i] ) {

// 		isoWeight_dataZ_mcPhot= h_isoWeight_EE[i]->GetBinContent((Int_t)h_isoWeight_EE[i]->FindBin(probe_combinedPfIsoFPR03));
// 		break;
// 	      }
//  	    }
//  	  }
// 	  else {
// 	    cout << "filling isoWeight_dataZ_mcPhot with 1 " << endl;
// 	    isoWeight_dataZ_mcPhot= 1.;
// 	  }

	}
	else{
	  for(int jj=0; jj<61; jj++){
	    isoW_EB[jj] = 1.;
	  }
	  for(int jj=0; jj<18; jj++){
	    isoW_EE[jj] = 1;
	  }

	}

	  // isoWeight_dataZ_mcPhot= 1.;
	//isoWeight_dataZ_mcPhot= 1.;
	//cout << "iso weight  " << isoWeight_dataZ_mcPhot << endl;


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
	
	// check HLT and pT range
	if (!isMC) {
	  myTree[0]->Fill();
	  if ( /*isHLT_30()  &&*/ ptPhot[iPho]>=40 && ptPhot[iPho]<65 )       myTree[1]->Fill();
	  if ( /*isHLT_50()  &&*/ ptPhot[iPho]>=65 && ptPhot[iPho]<90 )       myTree[2]->Fill();
	  if ( /*isHLT_75()  &&*/ ptPhot[iPho]>=90 && ptPhot[iPho]<105 )      myTree[3]->Fill();
	  if ( /*isHLT_90()  &&*/ ptPhot[iPho]>=105 && ptPhot[iPho]<165 )     myTree[4]->Fill();
	  if ( /*isHLT_135() &&*/ ptPhot[iPho]>=165 && ptPhot[iPho]<180 )     myTree[5]->Fill();
	  if ( /*isHLT_150() &&*/ ptPhot[iPho]>=180 && ptPhot[iPho]<200000 )  myTree[6]->Fill();
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
  
  cout << "debug: done loop over entries" << endl;	
  
  for (int ii=0; ii<7; ii++) {
    outFile[ii]->cd("myTaPDir");
    myTree[ii]->Write();
    cout << "tree written" << endl;
    outFile[ii]->Close();
    cout << "file closed" << endl;
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
  //to read Shervin's file
  //r9weights_EB=(TH1F*)f->Get("R9WeightEBAll");
  //r9weights_EE=(TH1F*)f->Get("R9WeightEEAll");

  //Just do a smoothing of the weights
  //r9weights_EB->Rebin(2);
  //r9weights_EE->Rebin(2);

  //r9weights_EB->Smooth(4);
  //r9weights_EE->Smooth(4);

  //to read new file
  h_R9Weight_lowEB_hlt30 =(TH1F*)f->Get("weights_lowEB_hlt30");
  h_R9Weight_lowEB_hlt30 ->SetName("h_R9Weight_lowEB_hlt30");
  h_R9Weight_lowEB_hlt50 =(TH1F*)f->Get("weights_lowEB_hlt50");
  h_R9Weight_lowEB_hlt50 ->SetName("h_R9Weight_lowEB_hlt50");
  h_R9Weight_lowEB_hlt75 =(TH1F*)f->Get("weights_lowEB_hlt75");
  h_R9Weight_lowEB_hlt75 ->SetName("h_R9Weight_lowEB_hlt75");
  h_R9Weight_lowEB_hlt90 =(TH1F*)f->Get("weights_lowEB_hlt90");
  h_R9Weight_lowEB_hlt90 ->SetName("h_R9Weight_lowEB_hlt90");
  h_R9Weight_lowEB_hlt135=(TH1F*)f->Get("weights_lowEB_hlt135");
  h_R9Weight_lowEB_hlt135->SetName("h_R9Weight_lowEB_hlt135");
  h_R9Weight_lowEB_hlt150=(TH1F*)f->Get("weights_lowEB_hlt150");
  h_R9Weight_lowEB_hlt150->SetName("h_R9Weight_lowEB_hlt150");

  h_R9Weight_highEB_hlt30 =(TH1F*)f->Get("weights_highEB_hlt30");
  h_R9Weight_highEB_hlt30 ->SetName("h_R9Weight_highEB_hlt30");
  h_R9Weight_highEB_hlt50 =(TH1F*)f->Get("weights_highEB_hlt50");
  h_R9Weight_highEB_hlt50 ->SetName("h_R9Weight_highEB_hlt50");
  h_R9Weight_highEB_hlt75 =(TH1F*)f->Get("weights_highEB_hlt75");
  h_R9Weight_highEB_hlt75 ->SetName("h_R9Weight_highEB_hlt75");
  h_R9Weight_highEB_hlt90 =(TH1F*)f->Get("weights_highEB_hlt90");
  h_R9Weight_highEB_hlt90 ->SetName("h_R9Weight_highEB_hlt90");
  h_R9Weight_highEB_hlt135=(TH1F*)f->Get("weights_highEB_hlt135");
  h_R9Weight_highEB_hlt135->SetName("h_R9Weight_highEB_hlt135");
  h_R9Weight_highEB_hlt150=(TH1F*)f->Get("weights_highEB_hlt150");
  h_R9Weight_highEB_hlt150->SetName("h_R9Weight_highEB_hlt150");


  h_R9Weight_lowEE_hlt30 =(TH1F*)f->Get("weights_lowEE_hlt30");
  h_R9Weight_lowEE_hlt30 ->SetName("h_R9Weight_lowEE_hlt30");
  h_R9Weight_lowEE_hlt50 =(TH1F*)f->Get("weights_lowEE_hlt50");
  h_R9Weight_lowEE_hlt50 ->SetName("h_R9Weight_lowEE_hlt50");
  h_R9Weight_lowEE_hlt75 =(TH1F*)f->Get("weights_lowEE_hlt75");
  h_R9Weight_lowEE_hlt75 ->SetName("h_R9Weight_lowEE_hlt75");
  h_R9Weight_lowEE_hlt90 =(TH1F*)f->Get("weights_lowEE_hlt90");
  h_R9Weight_lowEE_hlt90 ->SetName("h_R9Weight_lowEE_hlt90");
  h_R9Weight_lowEE_hlt135=(TH1F*)f->Get("weights_lowEE_hlt135");
  h_R9Weight_lowEE_hlt135->SetName("h_R9Weight_lowEE_hlt135");
  h_R9Weight_lowEE_hlt150=(TH1F*)f->Get("weights_lowEE_hlt150");
  h_R9Weight_lowEE_hlt150->SetName("h_R9Weight_lowEE_hlt150");

  h_R9Weight_highEE_hlt30 =(TH1F*)f->Get("weights_highEE_hlt30");
  h_R9Weight_highEE_hlt30 ->SetName("h_R9Weight_highEE_hlt30");
  h_R9Weight_highEE_hlt50 =(TH1F*)f->Get("weights_highEE_hlt50");
  h_R9Weight_highEE_hlt50 ->SetName("h_R9Weight_highEE_hlt50");
  h_R9Weight_highEE_hlt75 =(TH1F*)f->Get("weights_highEE_hlt75");
  h_R9Weight_highEE_hlt75 ->SetName("h_R9Weight_highEE_hlt75");
  h_R9Weight_highEE_hlt90 =(TH1F*)f->Get("weights_highEE_hlt90");
  h_R9Weight_highEE_hlt90 ->SetName("h_R9Weight_highEE_hlt90");
  h_R9Weight_highEE_hlt135=(TH1F*)f->Get("weights_highEE_hlt135");
  h_R9Weight_highEE_hlt135->SetName("h_R9Weight_highEE_hlt135");
  h_R9Weight_highEE_hlt150=(TH1F*)f->Get("weights_highEE_hlt150");
  h_R9Weight_highEE_hlt150->SetName("h_R9Weight_highEE_hlt150");

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


void TagAndProbeAnalysis::read_ptWeights()
{
  if (!ptReweight)
    return;
  
  TFile *f=TFile::Open(ptWeightsFile);

  h_ptWeight=(TH1F*)f->Get("weights");
  h_ptWeight->SetName("h_ptWeight");
  //Just do a smoothing of the weights
  h_ptWeight->Smooth();


}


void TagAndProbeAnalysis::read_nvtxWeights()
{
  if (!nvtxReweight)
    return;
  
  TFile *f=TFile::Open(nvtxWeightsFile);

  h_nvtxWeight=(TH1F*)f->Get("weights");
  h_nvtxWeight->SetName("h_nvtxWeight");

}

void TagAndProbeAnalysis::read_rhoWeights()
{

  cout << "debug: read weights" << endl;
  if (!rhoReweight)
    return;
  
  TFile *f=TFile::Open(rhoWeightsFile);

  h_rhoWeight_mc_hlt30=(TH1F*)f->Get("weights_mc_hlt30");
  h_rhoWeight_mc_hlt30->SetName("h_rhoWeight_mc_hlt30");
  h_rhoWeight_mc_hlt50=(TH1F*)f->Get("weights_mc_hlt50");
  h_rhoWeight_mc_hlt50->SetName("h_rhoWeight_mc_hlt50");
  h_rhoWeight_mc_hlt75=(TH1F*)f->Get("weights_mc_hlt75");
  h_rhoWeight_mc_hlt75->SetName("h_rhoWeight_mc_hlt75");
  h_rhoWeight_mc_hlt90=(TH1F*)f->Get("weights_mc_hlt90");
  h_rhoWeight_mc_hlt90->SetName("h_rhoWeight_mc_hlt90");
  h_rhoWeight_mc_hlt135=(TH1F*)f->Get("weights_mc_hlt135");
  h_rhoWeight_mc_hlt135->SetName("h_rhoWeight_mc_hlt135");
  h_rhoWeight_mc_hlt150=(TH1F*)f->Get("weights_mc_hlt150");
  h_rhoWeight_mc_hlt150->SetName("h_rhoWeight_mc_hlt150");

  h_rhoWeight_data_hlt30=(TH1F*)f->Get("weights_data_hlt30");
  h_rhoWeight_data_hlt30->SetName("h_rhoWeight_data_hlt30");
  h_rhoWeight_data_hlt50=(TH1F*)f->Get("weights_data_hlt50");
  h_rhoWeight_data_hlt50->SetName("h_rhoWeight_data_hlt50");
  h_rhoWeight_data_hlt75=(TH1F*)f->Get("weights_data_hlt75");
  h_rhoWeight_data_hlt75->SetName("h_rhoWeight_data_hlt75");
  h_rhoWeight_data_hlt90=(TH1F*)f->Get("weights_data_hlt90");
  h_rhoWeight_data_hlt90->SetName("h_rhoWeight_data_hlt90");
  h_rhoWeight_data_hlt135=(TH1F*)f->Get("weights_data_hlt135");
  h_rhoWeight_data_hlt135->SetName("h_rhoWeight_data_hlt135");
  h_rhoWeight_data_hlt150=(TH1F*)f->Get("weights_data_hlt150");
  h_rhoWeight_data_hlt150->SetName("h_rhoWeight_data_hlt150");

  //Just do a smoothing of the weights
 
  h_rhoWeight_mc_hlt30->Smooth();
  h_rhoWeight_mc_hlt50->Smooth();
  h_rhoWeight_mc_hlt75->Smooth();
  h_rhoWeight_mc_hlt90->Smooth();
  h_rhoWeight_mc_hlt135->Smooth();
  h_rhoWeight_mc_hlt150->Smooth();
  h_rhoWeight_data_hlt30->Smooth();
  h_rhoWeight_data_hlt50->Smooth();
  h_rhoWeight_data_hlt75->Smooth();
  h_rhoWeight_data_hlt90->Smooth();
  h_rhoWeight_data_hlt135->Smooth();
  h_rhoWeight_data_hlt150->Smooth();

}


void TagAndProbeAnalysis::read_isoWeights_dataZ_40_65_to_mcPhot()
{

  std::ostringstream stringtmp;
  cout << "debug: read weights" << endl;
  if (!isoReweight)
    return;

  float bin_low_edge_EB[61] = {40,47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480};
  float bin_high_edge_EB[61] ={47,65,73,90,94,99,105,110,117,126,139,155,165,166,167,168,169,170,171,172,173,174,175,176,177,178,179,180,182,184,186,188,190,192,194,196,198,200,202,204,206,208,210,215,220,225,230,235,240,245,250,255,260,265,270,290,310,340,380,480,1000};
  float bin_low_edge_EE[18]={40,65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270 };
  float bin_high_edge_EE[18]={65,90,105,126,165,168,172,176,180,186,192,198,206,215,225,240,270,1000 };


  TFile *f=TFile::Open(isoWeightsFile);
  cout << "open " << isoWeightsFile << endl;


  for (int i=0; i<61; i++){
    stringtmp << "h_isoW_EB_bin_"<< bin_low_edge_EB[i] << "_" << bin_high_edge_EB[i] ; 
    cout << stringtmp.str()  << endl;
    h_isoWeight_EB[i]=(TH1F*)f->Get((stringtmp.str()).c_str());
    if(h_isoWeight_EB[i]==0) cout << "WARNING: failed to get histogram " << endl;
    stringtmp.str("");
    stringtmp.clear();
    h_isoWeight_EB[i]->Smooth();
  }

  for (int i=0; i<18; i++){
    stringtmp << "h_isoW_EE_bin_"<< bin_low_edge_EE[i] << "_" << bin_high_edge_EE[i] ; 
    cout << stringtmp.str()  << endl;
    h_isoWeight_EE[i]=(TH1F*)f->Get((stringtmp.str()).c_str());
    if(h_isoWeight_EE[i]==0) cout << "WARNING: failed to get histogram " << endl;
    stringtmp.str("");
    stringtmp.clear();
    h_isoWeight_EE[i]->Smooth();
  }


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
