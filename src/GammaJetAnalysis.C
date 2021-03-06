#define GammaJetAnalysis_cxx
#include "GammaJetAnalysis.h"
#include <TH2.h>
#include <TMath.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TVector3.h>
#include <TStopwatch.h>


void GammaJetAnalysis::Loop()
{
  std::cout << "****** Running with the following cuts ******" << std::endl;
  std::cout << "selectionType " << selectionType << std::endl;
  std::cout << "ptphot1_mincut " << ptphot1_mincut << std::endl;
  std::cout << "ptphot1_maxcut " << ptphot1_maxcut << std::endl;
  std::cout << "hltcut " << hltcut << std::endl;
  std::cout << "hltiso " << hltiso << std::endl;
  std::cout << "mvaIDWP " << mvaIDWP << std::endl;
  std::cout << "mvaIDweights " << mvaWeights_EB << ", " << mvaWeights_EE << std::endl;
  std::cout << "*********************************************" << std::endl;

   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   //Initialize
   SetAllMVA();
   BookFinalTree();   

   Long64_t nbytes = 0, nb = 0;
   Long64_t npassing = 0; 
   TStopwatch timer;
   timer.Start();
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      if (jentry%50000==0) std::cout << "Analyzing event " << sampleName << " " << jentry << "/" << nentries << " (" <<  setprecision(4) << jentry*100./nentries << "%)" << std::endl;

      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
      
      //////////// Selection //////////////
      // Inclusive photon selection

      // patological events
      if (npu>=60) continue;    

      // first vertex must be good
      if (vtxId<0 && selectionType!="efficiencyStudy") continue;

      // HLT
      if (!passHLT(hltiso) && selectionType!="efficiencyStudy") continue;
      
      std::vector<int> photons=sortedPtPhotons();    
      if (photons.size()<1 && selectionType!="efficiencyStudy")
	continue;
      
      std::vector<int> preselectPhotons=preselectedPhotons(photons);
      if (preselectPhotons.size()<1 && selectionType!="efficiencyStudy")
	continue;
      
      // if ( photons.size() != preselectPhotons.size() ) { 
      // cout << "chiara: secondo me c'e' un problema. I fotoni in photons devono essere gia' preselezionati" << endl;
      // continue;
      //}
      
      std::vector<int> selectPhotons=selectedPhotons(preselectPhotons);
      if (selectPhotons.size()<1 && selectionType!="efficiencyStudy")
	continue;

      // ptcut to restrict to the wanted range - matching HLT
      if (selectPhotons.size()>0)
	{
	  if (ptPhot_presel[selectPhotons[0]]<ptphot1_mincut && selectionType!="efficiencyStudy") continue;	
	  if (ptPhot_presel[selectPhotons[0]]>ptphot1_maxcut && selectionType!="efficiencyStudy") continue;	
	}

      // ======================================================
      if (selectionType=="efficiencyStudy")
	{
	  //now matching with the selected photon
	  if (nPhot_gen<1)
	    continue;
	  std::vector<int> genPhotons=sortedPtGenPhotons();
	  int i_nPhot=-1;
	  
	  if (iRecoPhotMatch_gen[0]>-1)
	    {
	      for(int j=0; j<(int)photons.size(); j++)
		{
		  if (photons[j]==iRecoPhotMatch_gen[0])
		    {
		      i_nPhot=j;    
		      break;
		    }
		}
	    }
	  
	  bool isPresel=false;
	  bool isSel=false;
	  
	  FillTreeGenPhot(genPhotons[0]); 
	  if (i_nPhot>-1)
	    {
	      for(int j=0; j<(int)preselectPhotons.size(); j++)
		if (preselectPhotons[j]==i_nPhot)
		  {
		    isPresel=true;
		    break;
		  }
	      for(int j=0; j<(int)selectPhotons.size(); j++)
		if (selectPhotons[j]==i_nPhot)
		  {
		    isSel=true;
		    break;
		  }
	      FillTreePhot(photons[i_nPhot],isPresel,isSel);   
	    }                                                   
	  else
	    FillTreePhot(-1,-1,-1);
	}
      else
	{
	  FillTreePhot(selectPhotons[0],1,1);                // NB: mi pare che selectPhotons[0] sia l'indice nella collezione di _presel              
	  if (iMatchedPhot[selectPhotons[0]]>-1)
	    FillTreeGenPhot(iMatchedPhot[selectPhotons[0]]);   
	  else
	    FillTreeGenPhot(-1);
	}
      //////////// End selection //////////////

       ++npassing;
       float weight(1);
       weight *= GetPUWeight()*GetSampleWeight();
       if(weight==0)
	 std::cout << "weightPU = " << GetPUWeight() << "  sampleWeight = " << GetSampleWeight() <<  endl;

       //Filling Tree
       FillTreeEvent(weight);
       finalTree->Fill();
   }
   timer.Stop();   
   std::cout << "Fraction of events passing the selection in sample " << sampleName <<  ":\t" <<  setprecision(4) << npassing*100./nentries*1. << "%" << std::endl;
   std::cout << "Processed events/s (CPU Time):\t" << setprecision(6) << (float) nentries/timer.CpuTime() << " Hz" << std::endl; 
   std::cout << "Processed events/s (Real Time):\t" << setprecision(6) << (float) nentries/timer.RealTime() << " Hz" << std::endl; 
   std::cout << "Bandwidth used:\t" << setprecision(6) << (float) nbytes/(1024*1024)/timer.RealTime() << " MB/s" << std::endl; 

   //Write output
   finalTree->Write();
   outFile->Write();
   std::cout << "Written output into:\t" << outputFile << std::endl;
   outFile->Close();
}

// to compute photonID MVA
Float_t GammaJetAnalysis::PhotonIDMVA(Int_t iPhoton) 
{

  Float_t mva = 999.;
  
  tmva_photonid_etawidth     = pid_scetawid_presel[iPhoton];
  tmva_photonid_phiwidth     = pid_scphiwid_presel[iPhoton];
  tmva_photonid_sieie        = sEtaEtaPhot_presel[iPhoton];  
  tmva_photonid_sieip        = sEtaPhiPhot_presel[iPhoton];
  tmva_photonid_s4ratio      = s4RatioPhot_presel[iPhoton];
  tmva_photonid_r9           = r9Phot_presel[iPhoton];
  tmva_photonid_pt           = ptPhot_presel[iPhoton];
  tmva_photonid_sceta        = etascPhot_presel[iPhoton];
  tmva_photonid_eventrho     = rhoAllJets;   
  tmva_photonid_rr           = rr_presel[iPhoton];    

  bool isEBphot = true;
  if (fabs(etascPhot_presel[iPhoton])>1.479) isEBphot = false; 

  if (isEBphot)
    mva = tmvaReaderID_Single_Barrel->EvaluateMVA("BDT");   
  else
    mva = tmvaReaderID_Single_Endcap->EvaluateMVA("BDT");
  
  return mva;
}

void GammaJetAnalysis::SetAllMVA() {
  
  if (isMVAinitialized) return;
  
  tmvaReaderID_Single_Barrel = new TMVA::Reader("!Color:Silent");

  tmvaReaderID_Single_Barrel->AddVariable("pid_scetawid_presel", &tmva_photonid_etawidth );
  tmvaReaderID_Single_Barrel->AddVariable("pid_scphiwid_presel", &tmva_photonid_phiwidth );
  tmvaReaderID_Single_Barrel->AddVariable("sEtaEtaPhot_presel",  &tmva_photonid_sieie );
  tmvaReaderID_Single_Barrel->AddVariable("sEtaPhiPhot_presel",  &tmva_photonid_sieip );
  tmvaReaderID_Single_Barrel->AddVariable("s4RatioPhot_presel",  &tmva_photonid_s4ratio );
  tmvaReaderID_Single_Barrel->AddVariable("r9Phot_presel",       &tmva_photonid_r9 );
  tmvaReaderID_Single_Barrel->AddVariable("etascPhot_presel",    &tmva_photonid_sceta );
  tmvaReaderID_Single_Barrel->AddVariable("rhoAllJets",          &tmva_photonid_eventrho );
  tmvaReaderID_Single_Barrel->AddSpectator("nPhot_presel",       &tmva_photonid_nPhot );
  tmvaReaderID_Single_Barrel->AddSpectator("isMatchedPhot",      &tmva_photonid_isMatchedPhot );
  tmvaReaderID_Single_Barrel->AddSpectator("ptWeight",           &tmva_photonid_ptWeight );
  tmvaReaderID_Single_Barrel->AddSpectator("ptPhot_presel",      &tmva_photonid_pt );

  tmvaReaderID_Single_Endcap = new TMVA::Reader("!Color:Silent");

  tmvaReaderID_Single_Endcap->AddVariable("pid_scetawid_presel", &tmva_photonid_etawidth );
  tmvaReaderID_Single_Endcap->AddVariable("pid_scphiwid_presel", &tmva_photonid_phiwidth );
  tmvaReaderID_Single_Endcap->AddVariable("sEtaEtaPhot_presel",  &tmva_photonid_sieie );
  tmvaReaderID_Single_Endcap->AddVariable("sEtaPhiPhot_presel",  &tmva_photonid_sieip );
  tmvaReaderID_Single_Endcap->AddVariable("s4RatioPhot_presel",  &tmva_photonid_s4ratio );
  tmvaReaderID_Single_Endcap->AddVariable("r9Phot_presel",       &tmva_photonid_r9 );
  tmvaReaderID_Single_Endcap->AddVariable("etascPhot_presel",    &tmva_photonid_sceta );
  tmvaReaderID_Single_Endcap->AddVariable("rhoAllJets",          &tmva_photonid_eventrho );
  tmvaReaderID_Single_Endcap->AddVariable("rr_presel",           &tmva_photonid_rr );
  tmvaReaderID_Single_Endcap->AddSpectator("nPhot_presel",       &tmva_photonid_nPhot );
  tmvaReaderID_Single_Endcap->AddSpectator("isMatchedPhot",      &tmva_photonid_isMatchedPhot );
  tmvaReaderID_Single_Endcap->AddSpectator("ptWeight",           &tmva_photonid_ptWeight );
  tmvaReaderID_Single_Endcap->AddSpectator("ptPhot_presel",      &tmva_photonid_pt );

  std::cout << "Booking PhotonID EB MVA with file " << mvaWeights_EB << std::endl; 
  tmvaReaderID_Single_Barrel->BookMVA("BDT",mvaWeights_EB);
  std::cout << "Booking PhotonID EE MVA with file " << mvaWeights_EE << std::endl;
  tmvaReaderID_Single_Endcap->BookMVA("BDT",mvaWeights_EE);

  isMVAinitialized=true;
  return;
}

bool GammaJetAnalysis::isHLT_30(bool isoCut) {

  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if (isoCut)
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_IsoL_v16") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_IsoL_v17") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_IsoL_v18") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_IsoL_v19") isok=true;
      }
    else
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v11") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v12") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v13") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon30_CaloIdVL_v14") isok=true;
      }
  }
  return isok;
}

bool GammaJetAnalysis::isHLT_50(bool isoCut) {
  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if (isoCut)
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_IsoL_v14") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_IsoL_v15") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_IsoL_v16") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_IsoL_v17") isok=true;
      }
    else
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v7") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v8") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v9") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon50_CaloIdVL_v10") isok=true;
      }
  }
  return isok;
}

bool GammaJetAnalysis::isHLT_75(bool isoCut) {
  
  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if (isoCut)
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_IsoL_v15") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_IsoL_v16") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_IsoL_v17") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_IsoL_v18") isok=true;
      }
    else
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v10") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v11") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v12") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon75_CaloIdVL_v13") isok=true;
      }
  }
  return isok;
}

bool GammaJetAnalysis::isHLT_90(bool isoCut) {
  
  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if (isoCut)
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_IsoL_v12") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_IsoL_v13") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_IsoL_v14") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_IsoL_v15") isok=true;
      }
    else
      {
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v7") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v8") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v9") isok=true;
	if ( (*firedHLTNames)[ii]=="HLT_Photon90_CaloIdVL_v10") isok=true;
      }
  }
  return isok;
}

bool GammaJetAnalysis::isHLT_135() {

  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v4") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v5") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v6") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon135_v7") isok=true;
  }
  return isok;
}

bool GammaJetAnalysis::isHLT_150() {

  bool isok = false;
  for (int ii=0; ii<(int)firedHLTNames->size(); ii++) {
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v1") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v2") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v3") isok=true;
    if ( (*firedHLTNames)[ii]=="HLT_Photon150_v4") isok=true;
  }
  return isok;
}

// for effective area calculation
int GammaJetAnalysis::effectiveAreaRegion(float theEta) {

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

// is isolated phot gen level                                                                                           
int GammaJetAnalysis::isIsolatedGenPhot(const int& phot){

  int isogen = 0;
  if(nPhot_gen>0 && isMatchedPhot[phot]>0){ //isMC and the reco photon is matched with gen                             
    if(iso03_gen[iMatchedPhot[phot]]<4.) isogen =1;
  }
  
  return isogen;
}

// gen level photon isolation                                                                                          
float GammaJetAnalysis::isoGen03(const int& phot){

  float isogen03 = -999.;
  if(nPhot_gen>0 && isMatchedPhot[phot]>0){ //isMC and the reco photon is matched with gen                             
    isogen03 = iso03_gen[iMatchedPhot[phot]];
  }

  return isogen03;
}


// void GammaJetAnalysis::SetPuWeights(bool isData,std::string puWeightFile) {

//   if (isData)
//     return;
  
//   if (puWeightFile == "") {
//     std::cout << "you need a weights file to use this function" << std::endl;
//     return;
//   }

//   std::cout << "PU REWEIGHTING:: Using file " << puWeightFile << std::endl;
  
//   TFile *f_pu  = new TFile(puWeightFile.c_str(),"READ");
  
//   TH1D *puweights = 0;
//   TH1D *gen_pu = 0;

//   gen_pu= (TH1D*) f_pu->Get("generated_pu");
//   puweights= (TH1D*) f_pu->Get("weights");
  
//   if (!puweights || !gen_pu)  {
//     std::cout << "weights histograms  not found in file " << puWeightFile << std::endl;
//     return;
//   }
  
//   TH1D* weightedPU= (TH1D*)gen_pu->Clone("weightedPU");
//   weightedPU->Multiply(puweights);

//   //Rescaling weights in order to preserve same integral of events
//   TH1D* weights= (TH1D*)puweights->Clone("rescaledWeights");
//   weights->Scale( gen_pu->Integral(1,MAX_PU_REWEIGHT) / weightedPU->Integral(1,MAX_PU_REWEIGHT) );
		  
//   float sumPuWeights=0.;

//   for (int i = 0; i<MAX_PU_REWEIGHT; i++) {
//     weight=weights->GetBinContent(i+1);
//     sumPuWeights+=weight;
//     puweights_.push_back(weight);
//   }
// }

void GammaJetAnalysis::BookFinalTree()
{
  outFile=TFile::Open(outputFile,"recreate");
  outFile->cd();
   
  finalTree=new TTree("finalTree","finalTree");

  finalTree->Branch("sampleIndex",&finalTree_sampleIndex,"sampleIndex/i");
  finalTree->Branch("run",&finalTree_run,"run/i");
  finalTree->Branch("lumi",&finalTree_lumi,"lumi/i");
  finalTree->Branch("event",&finalTree_event,"event/i");
  finalTree->Branch("nvtx",&finalTree_nvtx,"nvtx/i");
  finalTree->Branch("npu",&finalTree_npu,"npu/i");
  finalTree->Branch("weight",&finalTree_weight,"weght/F");
  finalTree->Branch("rho",&finalTree_rho,"rho/F");

  finalTree->Branch("ptPhotGen",&finalTree_ptPhotGen,"ptPhotGen/F");
  finalTree->Branch("etaPhotGen",&finalTree_etaPhotGen,"etaPhotGen/F");
  finalTree->Branch("iso03PhotGen",&finalTree_iso03PhotGen,"iso03PhotGen/F");
  finalTree->Branch("iso04PhotGen",&finalTree_iso04PhotGen,"iso04PhotGen/F");
  finalTree->Branch("isRecoMatchedPhotGen",&finalTree_isRecoMatchedPhotGen,"isRecoMatchedPhotGen/I");

  finalTree->Branch("ptPhot",&finalTree_ptPhot,"ptPhot/F");
  finalTree->Branch("isMatchedPhot",&finalTree_isMatchedPhot,"isMatchedPhot/I");
  finalTree->Branch("isPreselectedPhot",&finalTree_isPreselectedPhot,"isPreselectedPhot/I");
  finalTree->Branch("isSelectedPhot",&finalTree_isSelectedPhot,"isSelectedPhot/I");
  finalTree->Branch("etaPhot",&finalTree_etaPhot,"etaPhot/F");
  finalTree->Branch("mvaIdPhot",&finalTree_mvaIdPhot,"mvaIdPhot/F");
  finalTree->Branch("sEtaEtaPhot",&finalTree_setaetaPhot,"sEtaEtaPhot/F");
  finalTree->Branch("r9Phot",&finalTree_r9Phot,"r9Phot/F");

  finalTree->Branch("combinedPfIso03Phot",&finalTree_combinedPfIso03Phot,"combinedPfIso03Phot/F");
  finalTree->Branch("isIsolatedGenPhot",&finalTree_isIsolatedGenPhot,"isIsolatedGenPhot/I");
  finalTree->Branch("iso03_gen", &finalTree_iso03_gen, "iso03_gen/F");

  finalTree->Branch("pid_jurECAL03",&finalTree_pid_jurECAL03,"pid_jurECAL03/F");
  finalTree->Branch("pid_twrHCAL03",&finalTree_pid_twrHCAL03,"pid_twrHCAL03/F");
  finalTree->Branch("pid_hlwTrack03",&finalTree_pid_hlwTrack03,"pid_hlwTrack03/F");

  finalTree->Branch("pid_pfIsoCharged03ForCiC",&finalTree_pid_pfIsoCharged03ForCiC,"pid_pfIsoCharged03ForCiC/F");
  finalTree->Branch("pid_pfIsoPhotons03ForCiC",&finalTree_pid_pfIsoPhotons03ForCiC,"pid_pfIsoPhotons03ForCiC/F");
  finalTree->Branch("pid_pfIsoNeutrals03ForCiC",&finalTree_pid_pfIsoNeutrals03ForCiC,"pid_pfIsoNeutrals03ForCiC/F");

  finalTree->Branch("correctedPfIsoCharged03",&finalTree_correctedPfIsoCharged03,"correctedPfIsoCharged03/F");
  finalTree->Branch("correctedPfIsoNeutrals03",&finalTree_correctedPfIsoNeutrals03,"correctedPfIsoNeutrals03/F");
  finalTree->Branch("correctedPfIsoPhotons03",&finalTree_correctedPfIsoPhotons03,"correctedPfIsoPhotons03/F");

  finalTree->Branch("pid_pfIsoFPRCharged03_presel",&finalTree_pid_pfIsoFPRCharged03,"pid_pfIsoFPRCharged03_presel/F");
  finalTree->Branch("pid_pfIsoFPRNeutral03_presel",&finalTree_pid_pfIsoFPRNeutral03,"pid_pfIsoFPRNeutral03_presel/F");
  finalTree->Branch("pid_pfIsoFPRPhoton03_presel",&finalTree_pid_pfIsoFPRPhoton03,"pid_pfIsoFPRPhoton03_presel/F");

  finalTree->Branch("correctedPfIsoFPRCharged03",&finalTree_correctedPfIsoFPRCharged03,"correctedPfIsoFPRCharged03/F");
  finalTree->Branch("correctedPfIsoFPRNeutrals03",&finalTree_correctedPfIsoFPRNeutrals03,"correctedPfIsoFPRNeutrals03/F");
  finalTree->Branch("correctedPfIsoFPRPhotons03",&finalTree_correctedPfIsoFPRPhotons03,"correctedPfIsoFPRPhotons03/F");

  finalTree->Branch("pid_pfIsoFPRRandomConeCharged03_presel",&finalTree_pid_pfIsoFPRRandomConeCharged03,"pid_pfIsoFPRRandomConeCharged03_presel/F");
  finalTree->Branch("pid_pfIsoFPRRandomConeNeutral03_presel",&finalTree_pid_pfIsoFPRRandomConeNeutral03,"pid_pfIsoFPRRandomConeNeutral03_presel/F");
  finalTree->Branch("pid_pfIsoFPRRandomConePhoton03_presel",&finalTree_pid_pfIsoFPRRandomConePhoton03,"pid_pfIsoFPRRandomConePhoton03_presel/F");

  finalTree->Branch("correctedPfIsoFPRRandomConeCharged03",&finalTree_correctedPfIsoFPRRandomConeCharged03,"correctedPfIsoFPRRandomConeCharged03/F");
  finalTree->Branch("correctedPfIsoFPRRandomConeNeutrals03",&finalTree_correctedPfIsoFPRRandomConeNeutrals03,"correctedPfIsoFPRRandomConeNeutrals03/F");
  finalTree->Branch("correctedPfIsoFPRRandomConePhotons03",&finalTree_correctedPfIsoFPRRandomConePhotons03,"correctedPfIsoFPRRandomConePhotons03/F");

  finalTree->Branch("combinedPfIsoFPR03Phot",&finalTree_combinedPfIsoFPR03,"combinedPfIsoFPR03Phot/F");
  finalTree->Branch("combinedPfIsoFPRRandomCone03Phot",&finalTree_combinedPfIsoFPRRandomCone03,"combinedPfIsoFPRRandomCone03Phot/F");

  //adding cone 0.4 for FPR crosscheck
  finalTree->Branch("pid_pfIsoCharged04ForCiC",&finalTree_pid_pfIsoCharged04ForCiC,"pid_pfIsoCharged04ForCiC/F");
  finalTree->Branch("pid_pfIsoPhotons04ForCiC",&finalTree_pid_pfIsoPhotons04ForCiC,"pid_pfIsoPhotons04ForCiC/F");
  finalTree->Branch("pid_pfIsoNeutrals04ForCiC",&finalTree_pid_pfIsoNeutrals04ForCiC,"pid_pfIsoNeutrals04ForCiC/F");

  finalTree->Branch("pid_pfIsoFPRCharged04_presel",&finalTree_pid_pfIsoFPRCharged04,"pid_pfIsoFPRCharged04_presel/F");
  finalTree->Branch("pid_pfIsoFPRNeutral04_presel",&finalTree_pid_pfIsoFPRNeutral04,"pid_pfIsoFPRNeutral04_presel/F");
  finalTree->Branch("pid_pfIsoFPRPhoton04_presel",&finalTree_pid_pfIsoFPRPhoton04,"pid_pfIsoFPRPhoton04_presel/F");

  finalTree->Branch("pid_pfIsoFPRRandomConeCharged04_presel",&finalTree_pid_pfIsoFPRRandomConeCharged04,"pid_pfIsoFPRRandomConeCharged04_presel/F");
  finalTree->Branch("pid_pfIsoFPRRandomConeNeutral04_presel",&finalTree_pid_pfIsoFPRRandomConeNeutral04,"pid_pfIsoFPRRandomConeNeutral04_presel/F");
  finalTree->Branch("pid_pfIsoFPRRandomConePhoton04_presel",&finalTree_pid_pfIsoFPRRandomConePhoton04,"pid_pfIsoFPRRandomConePhoton04_presel/F");

  finalTree->Branch("combinedPfIsoFPR04Phot",&finalTree_combinedPfIsoFPR04,"combinedPfIsoFPR04Phot/F");
  finalTree->Branch("combinedPfIsoFPRRandomCone04Phot",&finalTree_combinedPfIsoFPRRandomCone04,"combinedPfIsoFPRRandomCone04Phot/F");


}

std::vector<int> GammaJetAnalysis::preselectedPhotons(const std::vector<int>& photons)
{
  std::vector<int> selPhotons;

  for (int ipho=0;ipho<(int)photons.size();++ipho)
    {
      int theEAregion = effectiveAreaRegion(etaPhot_presel[photons[ipho]]); 
      if (theEAregion>6) continue;
      
      float preselECAL    = pid_jurECAL03_presel[photons[ipho]]  - 0.012*ptPhot_presel[photons[ipho]];  
      float preselHCAL    = pid_twrHCAL03_presel[photons[ipho]]  - 0.005*ptPhot_presel[photons[ipho]]; 
      float preselTracker = pid_hlwTrack03_presel[photons[ipho]] - 0.002*ptPhot_presel[photons[ipho]]; 

      if ( preselECAL > 50.)    continue;
      if ( preselHCAL > 50.)    continue;
      if ( preselTracker > 50.) continue;

      // should be 02, but currently off in the ntuples 
      //if (pid_pfIsoCharged03ForCiC_presel[photons[ipho]]>4.) continue;
      // treshold raised from 4 --> 5 GeV totake into account bigger cone
      
      if (pid_pfIsoCharged03ForCiC_presel[photons[ipho]]>5.) continue;

      if ( theEAregion<2) {  // EB
	if ( pid_HoverE_presel[photons[ipho]]>0.075 )   continue;
	if ( sEtaEtaPhot_presel[photons[ipho]]>0.014 ) continue;
      } else {     // EE
	if(pid_HoverE_presel[photons[ipho]]>0.075)      continue;
	if (sEtaEtaPhot_presel[photons[ipho]]>0.034)   continue;
      }
      selPhotons.push_back(photons[ipho]);
    }
  return selPhotons;
}

std::vector<int> GammaJetAnalysis::selectedPhotons(const std::vector<int>& photons)
{
  std::vector<int> selPhotons;
  double mva_cut_EB[4] = {0.892656, 0.844931, 0.766479, -1.};//corresponding to sig eff 0.80, 0.90, 0.95, 1.
  double mva_cut_EE[4] = {0.871778, 0.778579, 0.601807, -1.};//corresponding to sig eff 0.80, 0.90, 0.95, 1.

  for (int ipho=0;ipho<(int)photons.size();++ipho)
    {
      int theEAregion = effectiveAreaRegion(etaPhot_presel[photons[ipho]]); 
      if (theEAregion>6) continue;
      // photon ID MVA
      float theIdMva = PhotonIDMVA(photons[ipho]);
      //cuts on photon ID mva for fixed signal eff

      //selection 0.9 eff for signal
      if(theEAregion<2){//EB
	if(mvaIDWP>0 && theIdMva < mva_cut_EB[mvaIDWP-1]) continue;
	if(mvaIDWP<0 && theIdMva > mva_cut_EB[abs(mvaIDWP)-1]) continue;
      }
      else{//EE
	if(mvaIDWP>0 && theIdMva < mva_cut_EE[mvaIDWP-1]) continue;
	if(mvaIDWP<0 && theIdMva > mva_cut_EE[abs(mvaIDWP)-1]) continue;
      }
      
      selPhotons.push_back(photons[ipho]);
    }
  return selPhotons;
}

float GammaJetAnalysis::combinedPfIso03(const int& pho)
{
  float EA_charged[7] = { 0.012, 0.010, 0.014, 0.012, 0.016, 0.020, 0.012};
  float EA_neutral[7] = { 0.030, 0.057, 0.039, 0.015, 0.024, 0.039, 0.072};
  float EA_photons[7] = { 0.148, 0.130, 0.112, 0.216, 0.262, 0.260, 0.266};

  int theEAregion_fG = effectiveAreaRegion(etascPhot_presel[pho]); 
  return pid_pfIsoCharged03ForCiC_presel[pho] - rhoAllJets*EA_charged[theEAregion_fG] + pid_pfIsoNeutrals03ForCiC_presel[pho] - rhoAllJets*EA_neutral[theEAregion_fG]  + pid_pfIsoPhotons03ForCiC_presel[pho] - rhoAllJets*EA_photons[theEAregion_fG];    
}

float GammaJetAnalysis::combinedPfIso03(float isoCharged03, float isoNeutral03, float isoPhoton03, const int& pho)
{
  float EA_charged[7] = { 0.012, 0.010, 0.014, 0.012, 0.016, 0.020, 0.012};
  float EA_neutral[7] = { 0.030, 0.057, 0.039, 0.015, 0.024, 0.039, 0.072};
  float EA_photons[7] = { 0.148, 0.130, 0.112, 0.216, 0.262, 0.260, 0.266};

  int theEAregion_fG = effectiveAreaRegion(etascPhot_presel[pho]);
  return isoCharged03 - rhoAllJets*EA_charged[theEAregion_fG] + isoNeutral03 - rhoAllJets*EA_neutral[theEAregion_fG]  + isoPhoton03 - rhoAllJets*EA_photons[theEAregion_fG];
}

float GammaJetAnalysis::correctedPfIsoCharged03(float* isoCharged03, const int& pho)
{
  float EA_charged[7] = { 0.012, 0.010, 0.014, 0.012, 0.016, 0.020, 0.012};
  int theEAregion_fG  = effectiveAreaRegion(etascPhot_presel[pho]);    
  return isoCharged03[pho] - rhoAllJets*EA_charged[theEAregion_fG];
}

float GammaJetAnalysis::correctedPfIsoNeutrals03(float* isoNeutrals03, const int& pho)
{
  float EA_neutral[7] = { 0.030, 0.057, 0.039, 0.015, 0.024, 0.039, 0.072};
  int theEAregion_fG  = effectiveAreaRegion(etascPhot_presel[pho]);       
  return isoNeutrals03[pho] - rhoAllJets*EA_neutral[theEAregion_fG];
}

float GammaJetAnalysis::correctedPfIsoPhotons03(float* isoPhotons03, const int& pho)
{
  float EA_photons[7] = { 0.148, 0.130, 0.112, 0.216, 0.262, 0.260, 0.266};
  int theEAregion_fG  = effectiveAreaRegion(etascPhot_presel[pho]);      
  return isoPhotons03[pho] - rhoAllJets*EA_photons[theEAregion_fG];
}

std::vector<int> GammaJetAnalysis::sortedPtPhotons()
{
  std::vector<int> sortedPhotons;
  int sorted_index[nPhot_presel];
  TMath::Sort(nPhot_presel,ptPhot_presel,sorted_index);
  for (int ipho=0;ipho<nPhot_presel;++ipho)
    sortedPhotons.push_back(sorted_index[ipho]);
  return sortedPhotons;
}

std::vector<int> GammaJetAnalysis::sortedPtGenPhotons()
{
  std::vector<int> sortedGenPhotons;
  int sorted_index[nPhot_gen];
  TMath::Sort(nPhot_gen,ptTrueMatch_gen,sorted_index);
  for (int ipho=0;ipho<nPhot_gen;++ipho)
    sortedGenPhotons.push_back(sorted_index[ipho]);
  return sortedGenPhotons;
}

bool GammaJetAnalysis::passHLT(bool isoCut)
{
  // HLT selection - for data only
  if ( sampleIndex==0 && hltcut==30 && !isHLT_30(isoCut) )  return false;
  if ( sampleIndex==0 && hltcut==50 && !isHLT_50(isoCut) )  return false;
  if ( sampleIndex==0 && hltcut==75 && !isHLT_75(isoCut) )  return false;
  if ( sampleIndex==0 && hltcut==90 && !isHLT_90(isoCut) )  return false;
  if ( sampleIndex==0 && hltcut==135 && !isHLT_135() )      return false;
  if ( sampleIndex==0 && hltcut==150 && !isHLT_150() )      return false;  
  return true;
}

float GammaJetAnalysis::GetPUWeight()
{
  float weight=1;
  if (sampleIndex!=0 && dopureweight && hltcut==0)   weight *= pu_weight;        // inclusive weight
  if (sampleIndex!=0 && dopureweight && hltcut==30)  weight *= pu_weight30;
  if (sampleIndex!=0 && dopureweight && hltcut==50)  weight *= pu_weight50;
  if (sampleIndex!=0 && dopureweight && hltcut==75)  weight *= pu_weight75;
  if (sampleIndex!=0 && dopureweight && hltcut==90)  weight *= pu_weight90;
  if (sampleIndex!=0 && dopureweight && hltcut==135) weight *= pu_weight135;   
  if (sampleIndex!=0 && dopureweight && hltcut==150) weight *= pu_weight150;   
  return weight;
}

float GammaJetAnalysis::GetSampleWeight()
{
  float weight=1;
  if (sampleIndex!=0) weight *= normLumi*xsec*kfac/sampleSize;
  return weight;
}

void GammaJetAnalysis::FillTreeEvent(float weight)
{
  finalTree_sampleIndex=sampleIndex;
  finalTree_run=run;
  finalTree_lumi=lumi;  
  finalTree_event=event;
  finalTree_nvtx=nvtx;
  finalTree_npu=npu;
  finalTree_weight=weight;
  finalTree_rho=rhoAllJets;
  return;
}

void GammaJetAnalysis::FillTreePhot(const int& phot,bool isPresel, bool isSel)
{
  if (phot>-1)
    {
      finalTree_etaPhot=etascPhot_presel[phot];
      finalTree_ptPhot=ptPhot_presel[phot];
      finalTree_isMatchedPhot=isMatchedPhot[phot];    
      finalTree_mvaIdPhot=PhotonIDMVA(phot);          
      finalTree_setaetaPhot=sEtaEtaPhot_presel[phot];
      finalTree_r9Phot=r9Phot_presel[phot];
      finalTree_combinedPfIso03Phot=combinedPfIso03(phot);   
      finalTree_isPreselectedPhot=isPresel;
      finalTree_isSelectedPhot=isSel;

      finalTree_isIsolatedGenPhot=isIsolatedGenPhot(phot);     
      finalTree_iso03_gen=isoGen03(phot);                      

      finalTree_pid_jurECAL03=pid_jurECAL03_presel[phot];
      finalTree_pid_twrHCAL03=pid_twrHCAL03_presel[phot];
      finalTree_pid_hlwTrack03=pid_hlwTrack03_presel[phot];

      finalTree_pid_pfIsoCharged03ForCiC=pid_pfIsoCharged03ForCiC_presel[phot];
      finalTree_pid_pfIsoPhotons03ForCiC=pid_pfIsoPhotons03ForCiC_presel[phot];
      finalTree_pid_pfIsoNeutrals03ForCiC=pid_pfIsoNeutrals03ForCiC_presel[phot];

      finalTree_pid_pfIsoFPRCharged03=pid_pfIsoFPRCharged03_presel[phot];
      finalTree_pid_pfIsoFPRPhoton03 =pid_pfIsoFPRPhoton03_presel[phot] ;
      finalTree_pid_pfIsoFPRNeutral03=pid_pfIsoFPRNeutral03_presel[phot];

      finalTree_pid_pfIsoFPRRandomConeCharged03=pid_pfIsoFPRRandomConeCharged03_presel[phot];
      finalTree_pid_pfIsoFPRRandomConePhoton03 =pid_pfIsoFPRRandomConePhoton03_presel[phot] ;
      finalTree_pid_pfIsoFPRRandomConeNeutral03=pid_pfIsoFPRRandomConeNeutral03_presel[phot];

      finalTree_correctedPfIsoCharged03  = correctedPfIsoCharged03(pid_pfIsoCharged03ForCiC_presel,phot);     
      finalTree_correctedPfIsoNeutrals03 = correctedPfIsoNeutrals03(pid_pfIsoNeutrals03ForCiC_presel,phot);
      finalTree_correctedPfIsoPhotons03  = correctedPfIsoPhotons03(pid_pfIsoPhotons03ForCiC_presel,phot);

      finalTree_correctedPfIsoFPRCharged03  = correctedPfIsoCharged03(pid_pfIsoFPRCharged03_presel,phot);
      finalTree_correctedPfIsoFPRNeutrals03 = correctedPfIsoNeutrals03(pid_pfIsoFPRNeutral03_presel,phot);
      finalTree_correctedPfIsoFPRPhotons03  = correctedPfIsoPhotons03(pid_pfIsoFPRPhoton03_presel,phot);

      finalTree_correctedPfIsoFPRRandomConeCharged03  = correctedPfIsoCharged03(pid_pfIsoFPRRandomConeCharged03_presel,phot);
      finalTree_correctedPfIsoFPRRandomConeNeutrals03 = correctedPfIsoNeutrals03(pid_pfIsoFPRRandomConeNeutral03_presel,phot);
      finalTree_correctedPfIsoFPRRandomConePhotons03  = correctedPfIsoPhotons03(pid_pfIsoFPRRandomConePhoton03_presel,phot);

      finalTree_combinedPfIsoFPR03=combinedPfIso03(pid_pfIsoFPRCharged03_presel[phot],pid_pfIsoFPRNeutral03_presel[phot],pid_pfIsoFPRPhoton03_presel[phot],phot);        
      finalTree_combinedPfIsoFPRRandomCone03=combinedPfIso03(pid_pfIsoFPRRandomConeCharged03_presel[phot],pid_pfIsoFPRRandomConeNeutral03_presel[phot],pid_pfIsoFPRRandomConePhoton03_presel[phot],phot);        

      //adding cone 0.4
      finalTree_pid_pfIsoCharged04ForCiC=pid_pfIsoCharged04ForCiC_presel[phot];
      finalTree_pid_pfIsoPhotons04ForCiC=pid_pfIsoPhotons04ForCiC_presel[phot];
      finalTree_pid_pfIsoNeutrals04ForCiC=pid_pfIsoNeutrals04ForCiC_presel[phot];

      finalTree_pid_pfIsoFPRCharged04=pid_pfIsoFPRCharged04_presel[phot];
      finalTree_pid_pfIsoFPRPhoton04 =pid_pfIsoFPRPhoton04_presel[phot] ;
      finalTree_pid_pfIsoFPRNeutral04=pid_pfIsoFPRNeutral04_presel[phot];

      finalTree_pid_pfIsoFPRRandomConeCharged04=pid_pfIsoFPRRandomConeCharged04_presel[phot];
      finalTree_pid_pfIsoFPRRandomConePhoton04 =pid_pfIsoFPRRandomConePhoton04_presel[phot] ;
      finalTree_pid_pfIsoFPRRandomConeNeutral04=pid_pfIsoFPRRandomConeNeutral04_presel[phot];
      //just summing wo pu correction 
      finalTree_combinedPfIsoFPR04=pid_pfIsoFPRCharged04_presel[phot] + pid_pfIsoFPRNeutral04_presel[phot] + pid_pfIsoFPRPhoton04_presel[phot],phot;        
      finalTree_combinedPfIsoFPRRandomCone04=pid_pfIsoFPRRandomConeCharged04_presel[phot] + pid_pfIsoFPRRandomConeNeutral04_presel[phot] + pid_pfIsoFPRRandomConePhoton04_presel[phot],phot;        


    }
  else
    {
      finalTree_etaPhot=-999;
      finalTree_ptPhot=-999;
      finalTree_isMatchedPhot=-999;
      finalTree_mvaIdPhot=-999;
      finalTree_setaetaPhot=-999;
      finalTree_r9Phot=-999;
      finalTree_combinedPfIso03Phot=-999;
      finalTree_isPreselectedPhot=-999;
      finalTree_isSelectedPhot=-999;
      finalTree_isIsolatedGenPhot=-999;
      finalTree_iso03_gen=-999.;
      finalTree_pid_jurECAL03=-999.;
      finalTree_pid_twrHCAL03=-999.;
      finalTree_pid_hlwTrack03=-999.;
      finalTree_pid_pfIsoCharged03ForCiC=-999.;
      finalTree_pid_pfIsoPhotons03ForCiC=-999.;
      finalTree_pid_pfIsoNeutrals03ForCiC=-999.;
      finalTree_pid_pfIsoFPRCharged03=-999.;
      finalTree_pid_pfIsoFPRPhoton03=-999.;
      finalTree_pid_pfIsoFPRNeutral03=-999.;
      finalTree_pid_pfIsoFPRRandomConeCharged03=-999.;
      finalTree_pid_pfIsoFPRRandomConePhoton03=-999.;
      finalTree_pid_pfIsoFPRRandomConeNeutral03=-999.;
      finalTree_correctedPfIsoCharged03=-999.;
      finalTree_correctedPfIsoNeutrals03=-999.;
      finalTree_correctedPfIsoPhotons03=-999.;
      finalTree_correctedPfIsoFPRCharged03=-999.;
      finalTree_correctedPfIsoFPRNeutrals03=-999.;
      finalTree_correctedPfIsoFPRPhotons03=-999.;
      finalTree_correctedPfIsoFPRRandomConeCharged03=-999.;
      finalTree_correctedPfIsoFPRRandomConeNeutrals03=-999.;
      finalTree_correctedPfIsoFPRRandomConePhotons03=-999.;
      finalTree_combinedPfIsoFPR03=-999.;
      finalTree_combinedPfIsoFPRRandomCone03=-999.;
      //adding 0.4 cone
      finalTree_pid_pfIsoCharged04ForCiC=-999.;
      finalTree_pid_pfIsoPhotons04ForCiC=-999.;
      finalTree_pid_pfIsoNeutrals04ForCiC=-999.;
      finalTree_pid_pfIsoFPRCharged04=-999.;
      finalTree_pid_pfIsoFPRPhoton04=-999.;
      finalTree_pid_pfIsoFPRNeutral04=-999.;
      finalTree_pid_pfIsoFPRRandomConeCharged04=-999.;
      finalTree_pid_pfIsoFPRRandomConePhoton04=-999.;
      finalTree_pid_pfIsoFPRRandomConeNeutral04=-999.;
      finalTree_combinedPfIsoFPR04=-999.;
      finalTree_combinedPfIsoFPRRandomCone04=-999.;
    }
  
  return;
}

void GammaJetAnalysis::FillTreeGenPhot(const int& genphot)
{
  if (genphot>-1)
    {
      finalTree_etaPhotGen=etaMatch_gen[genphot];
      finalTree_ptPhotGen=ptTrueMatch_gen[genphot];
      finalTree_iso03PhotGen=iso03_gen[genphot];
      finalTree_iso04PhotGen=iso04_gen[genphot];
      finalTree_isRecoMatchedPhotGen=iRecoPhotMatch_gen[genphot];
    }
  else
    {
      finalTree_etaPhotGen=-1;
      finalTree_ptPhotGen=-1;
      finalTree_iso03PhotGen=-1;
      finalTree_iso04PhotGen=-1;
    }
  
  return;
}
