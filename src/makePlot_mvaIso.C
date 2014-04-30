#include "TCanvas.h"
#include "string"
#include "sstream"
#include "iostream"
#include "cstdio"
#include "TFile.h"
#include "TH2F.h"
#include "TChain.h"
#include "TTree.h"
#include "TStyle.h"
#include "TColor.h"
#include "TMath.h"
#include "TProfile.h"
#include "TLegend.h"
#include "TF1.h"

#include "mvaIsoCorrel.h"

void makePlot_mvaIso(int isEB, int isSig){
  
  TFile* inputFile;
  if(isEB){
    if (isSig)
      inputFile = new TFile("histo_v6/genIso/mvaIso_histo_EB_isMatch.root", "READ");
    else if(!isSig)
      inputFile = new TFile("histo_v6/genIso/mvaIso_histo_EB_isNotMatch.root", "READ");
  }
  else if(!isEB) {
 if (isSig)
      inputFile = new TFile("histo_v6/genIso/mvaIso_histo_EE_isMatch.root", "READ");
    else if(!isSig)
      inputFile = new TFile("histo_v6/genIso/mvaIso_histo_EE_isNotMatch.root", "READ");
  }

  TH2F* correl_plot            = (TH2F*)inputFile->Get("correl_plot");
  TH2F* correl_plot_isoCharged = (TH2F*)inputFile->Get("correl_plot_isoCharged");
  TH2F* correl_plot_isoNeutrals= (TH2F*)inputFile->Get("correl_plot_isoNeutrals");
  TH2F* correl_plot_isoPhotons = (TH2F*)inputFile->Get("correl_plot_isoPhotons");

  TH2F* correl_plot_pt30_60            = (TH2F*)inputFile->Get("correl_plot_pt30_60");
  TH2F* correl_plot_isoCharged_pt30_60 = (TH2F*)inputFile->Get("correl_plot_isoCharged_pt30_60");
  TH2F* correl_plot_isoNeutrals_pt30_60= (TH2F*)inputFile->Get("correl_plot_isoNeutrals_pt30_60");
  TH2F* correl_plot_isoPhotons_pt30_60 = (TH2F*)inputFile->Get("correl_plot_isoPhotons_pt30_60");

  TH2F* correl_plot_pt60_100            = (TH2F*)inputFile->Get("correl_plot_pt60_100");
  TH2F* correl_plot_isoCharged_pt60_100 = (TH2F*)inputFile->Get("correl_plot_isoCharged_pt60_100");
  TH2F* correl_plot_isoNeutrals_pt60_100= (TH2F*)inputFile->Get("correl_plot_isoNeutrals_pt60_100");
  TH2F* correl_plot_isoPhotons_pt60_100 = (TH2F*)inputFile->Get("correl_plot_isoPhotons_pt60_100");

  TH2F* correl_plot_pt100            = (TH2F*)inputFile->Get("correl_plot_pt100");
  TH2F* correl_plot_isoCharged_pt100 = (TH2F*)inputFile->Get("correl_plot_isoCharged_pt100");
  TH2F* correl_plot_isoNeutrals_pt100= (TH2F*)inputFile->Get("correl_plot_isoNeutrals_pt100");
  TH2F* correl_plot_isoPhotons_pt100 = (TH2F*)inputFile->Get("correl_plot_isoPhotons_pt100");

  TProfile* profile_correl_plot            = (TProfile*)inputFile->Get("profile_correl_plot");		
  TProfile* profile_correl_plot_isoCharged = (TProfile*)inputFile->Get("profile_correl_plot_isoCharged");	
  TProfile* profile_correl_plot_isoNeutrals= (TProfile*)inputFile->Get("profile_correl_plot_isoNeutrals");
  TProfile* profile_correl_plot_isoPhotons = (TProfile*)inputFile->Get("profile_correl_plot_isoPhotons"); 

  TProfile* profile_correl_plot_pt30_60            = (TProfile*)inputFile->Get("profile_correl_plot_pt30_60");		
  TProfile* profile_correl_plot_isoCharged_pt30_60 = (TProfile*)inputFile->Get("profile_correl_plot_isoCharged_pt30_60");	
  TProfile* profile_correl_plot_isoNeutrals_pt30_60= (TProfile*)inputFile->Get("profile_correl_plot_isoNeutrals_pt30_60");
  TProfile* profile_correl_plot_isoPhotons_pt30_60 = (TProfile*)inputFile->Get("profile_correl_plot_isoPhotons_pt30_60"); 

  TProfile* profile_correl_plot_pt60_100            = (TProfile*)inputFile->Get("profile_correl_plot_pt60_100");		
  TProfile* profile_correl_plot_isoCharged_pt60_100 = (TProfile*)inputFile->Get("profile_correl_plot_isoCharged_pt60_100");
  TProfile* profile_correl_plot_isoNeutrals_pt60_100= (TProfile*)inputFile->Get("profile_correl_plot_isoNeutrals_pt60_100");
  TProfile* profile_correl_plot_isoPhotons_pt60_100 = (TProfile*)inputFile->Get("profile_correl_plot_isoPhotons_pt60_100"); 

  TProfile* profile_correl_plot_pt100            = (TProfile*)inputFile->Get("profile_correl_plot_pt100");	
  TProfile* profile_correl_plot_isoCharged_pt100 = (TProfile*)inputFile->Get("profile_correl_plot_isoCharged_pt100");
  TProfile* profile_correl_plot_isoNeutrals_pt100= (TProfile*)inputFile->Get("profile_correl_plot_isoNeutrals_pt100");
  TProfile* profile_correl_plot_isoPhotons_pt100 = (TProfile*)inputFile->Get("profile_correl_plot_isoPhotons_pt100"); 

  //correl isoFPR with BDT
  TH2F* correl_plot_isoFPR = (TH2F*)inputFile->Get("correl_plot_isoFPR");
  TH2F* correl_plot_isoFPRCharged = (TH2F*)inputFile->Get("correl_plot_isoFPRCharged");
  TH2F* correl_plot_isoFPRNeutrals= (TH2F*)inputFile->Get("correl_plot_isoFPRNeutrals");
  TH2F* correl_plot_isoFPRPhotons = (TH2F*)inputFile->Get("correl_plot_isoFPRPhotons");

  TH2F* correl_plot_isoFPR_pt30_60 = (TH2F*)inputFile->Get("correl_plot_isoFPR_pt30_60");
  TH2F* correl_plot_isoFPRCharged_pt30_60 = (TH2F*)inputFile->Get("correl_plot_isoFPRCharged_pt30_60");
  TH2F* correl_plot_isoFPRNeutrals_pt30_60= (TH2F*)inputFile->Get("correl_plot_isoFPRNeutrals_pt30_60");
  TH2F* correl_plot_isoFPRPhotons_pt30_60 = (TH2F*)inputFile->Get("correl_plot_isoFPRPhotons_pt30_60");

  TH2F* correl_plot_isoFPR_pt60_100 = (TH2F*)inputFile->Get("correl_plot_isoFPR_pt60_100");
  TH2F* correl_plot_isoFPRCharged_pt60_100 = (TH2F*)inputFile->Get("correl_plot_isoFPRCharged_pt60_100");
  TH2F* correl_plot_isoFPRNeutrals_pt60_100= (TH2F*)inputFile->Get("correl_plot_isoFPRNeutrals_pt60_100");
  TH2F* correl_plot_isoFPRPhotons_pt60_100 = (TH2F*)inputFile->Get("correl_plot_isoFPRPhotons_pt60_100");

  TH2F* correl_plot_isoFPR_pt100 = (TH2F*)inputFile->Get("correl_plot_isoFPR_pt100");
  TH2F* correl_plot_isoFPRCharged_pt100 = (TH2F*)inputFile->Get("correl_plot_isoFPRCharged_pt100");
  TH2F* correl_plot_isoFPRNeutrals_pt100= (TH2F*)inputFile->Get("correl_plot_isoFPRNeutrals_pt100");
  TH2F* correl_plot_isoFPRPhotons_pt100 = (TH2F*)inputFile->Get("correl_plot_isoFPRPhotons_pt100");

  TProfile* profile_correl_plot_isoFPR = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR");	
  TProfile* profile_correl_plot_isoFPRCharged = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRCharged");	
  TProfile* profile_correl_plot_isoFPRNeutrals= (TProfile*)inputFile->Get("profile_correl_plot_isoFPRNeutrals");
  TProfile* profile_correl_plot_isoFPRPhotons = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRPhotons"); 

  TProfile* profile_correl_plot_isoFPR_pt30_60 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR_pt30_60");	
  TProfile* profile_correl_plot_isoFPRCharged_pt30_60 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRCharged_pt30_60");	
  TProfile* profile_correl_plot_isoFPRNeutrals_pt30_60= (TProfile*)inputFile->Get("profile_correl_plot_isoFPRNeutrals_pt30_60");
  TProfile* profile_correl_plot_isoFPRPhotons_pt30_60 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRPhotons_pt30_60"); 

  TProfile* profile_correl_plot_isoFPR_pt60_100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR_pt60_100");
  TProfile* profile_correl_plot_isoFPRCharged_pt60_100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRCharged_pt60_100");
  TProfile* profile_correl_plot_isoFPRNeutrals_pt60_100= (TProfile*)inputFile->Get("profile_correl_plot_isoFPRNeutrals_pt60_100");
  TProfile* profile_correl_plot_isoFPRPhotons_pt60_100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRPhotons_pt60_100"); 

  TProfile* profile_correl_plot_isoFPR_pt100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR_pt100");
  TProfile* profile_correl_plot_isoFPRCharged_pt100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRCharged_pt100");
  TProfile* profile_correl_plot_isoFPRNeutrals_pt100= (TProfile*)inputFile->Get("profile_correl_plot_isoFPRNeutrals_pt100");
  TProfile* profile_correl_plot_isoFPRPhotons_pt100 = (TProfile*)inputFile->Get("profile_correl_plot_isoFPRPhotons_pt100");  

  //FPRRandomCone VS FPR
  TH2F* isoFPRvsIsoFPRRandomCone_combined03 = (TH2F*)inputFile->Get("isoFPRvsIsoFPRRandomCone_combined03");
  TH2F* isoFPRvsIsoFPRRandomCone_charged03  = (TH2F*)inputFile->Get("isoFPRvsIsoFPRRandomCone_charged03"); 
  TH2F* isoFPRvsIsoFPRRandomCone_neutrals03 = (TH2F*)inputFile->Get("isoFPRvsIsoFPRRandomCone_neutrals03");
  TH2F* isoFPRvsIsoFPRRandomCone_photons03  = (TH2F*)inputFile->Get("isoFPRvsIsoFPRRandomCone_photons03"); 
  TProfile* profile_isoFPRvsIsoFPRRandomCone_combined03= (TProfile*)inputFile->Get("profile_isoFPRvsIsoFPRRandomCone_combined03");
  TProfile* profile_isoFPRvsIsoFPRRandomCone_charged03 = (TProfile*)inputFile->Get("profile_isoFPRvsIsoFPRRandomCone_charged03"); 
  TProfile* profile_isoFPRvsIsoFPRRandomCone_neutrals03= (TProfile*)inputFile->Get("profile_isoFPRvsIsoFPRRandomCone_neutrals03");
  TProfile* profile_isoFPRvsIsoFPRRandomCone_photons03 = (TProfile*)inputFile->Get("profile_isoFPRvsIsoFPRRandomCone_photons03");  


  
  TH1F* BDToutput          = (TH1F*)inputFile->Get("BDToutput");
  TH1F* BDToutput_pt30_60  = (TH1F*)inputFile->Get("BDToutput_pt30_60");
  TH1F* BDToutput_pt60_100 = (TH1F*)inputFile->Get("BDToutput_pt60_100");
  TH1F* BDToutput_pt100    = (TH1F*)inputFile->Get("BDToutput_pt100");

  TH1F* isoCombined_BDT_bin0 = (TH1F*)inputFile->Get("isoCombined_BDT_bin0");
  TH1F* isoCombined_BDT_bin1 = (TH1F*)inputFile->Get("isoCombined_BDT_bin1");
  TH1F* isoCombined_BDT_bin2 = (TH1F*)inputFile->Get("isoCombined_BDT_bin2");
  TH1F* isoCombined_BDT_bin3 = (TH1F*)inputFile->Get("isoCombined_BDT_bin3");
  TH1F* isoCombined_BDT_bin4 = (TH1F*)inputFile->Get("isoCombined_BDT_bin4");
  TH1F* isoCombined_BDT_bin5 = (TH1F*)inputFile->Get("isoCombined_BDT_bin5");
  TH1F* isoCombined_BDT_bin6 = (TH1F*)inputFile->Get("isoCombined_BDT_bin6");
  TH1F* isoCombined_BDT_bin7 = (TH1F*)inputFile->Get("isoCombined_BDT_bin7");
  TH1F* isoCombined_BDT_bin8 = (TH1F*)inputFile->Get("isoCombined_BDT_bin8");
  TH1F* isoCombined_BDT_bin9 = (TH1F*)inputFile->Get("isoCombined_BDT_bin9");

  // iso combined in pt bins and mva bins
  TH1F* isoCombined_pt30_60_BDT_bin0 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin0");
  TH1F* isoCombined_pt30_60_BDT_bin1 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin1");
  TH1F* isoCombined_pt30_60_BDT_bin2 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin2");
  TH1F* isoCombined_pt30_60_BDT_bin3 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin3");
  TH1F* isoCombined_pt30_60_BDT_bin4 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin4");
  TH1F* isoCombined_pt30_60_BDT_bin5 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin5");
  TH1F* isoCombined_pt30_60_BDT_bin6 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin6");
  TH1F* isoCombined_pt30_60_BDT_bin7 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin7");
  TH1F* isoCombined_pt30_60_BDT_bin8 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin8");
  TH1F* isoCombined_pt30_60_BDT_bin9 = (TH1F*)inputFile->Get("isoCombined_pt30_60_BDT_bin9");

  TH1F* isoCombined_pt60_100_BDT_bin0 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin0");
  TH1F* isoCombined_pt60_100_BDT_bin1 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin1");
  TH1F* isoCombined_pt60_100_BDT_bin2 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin2");
  TH1F* isoCombined_pt60_100_BDT_bin3 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin3");
  TH1F* isoCombined_pt60_100_BDT_bin4 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin4");
  TH1F* isoCombined_pt60_100_BDT_bin5 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin5");
  TH1F* isoCombined_pt60_100_BDT_bin6 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin6");
  TH1F* isoCombined_pt60_100_BDT_bin7 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin7");
  TH1F* isoCombined_pt60_100_BDT_bin8 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin8");
  TH1F* isoCombined_pt60_100_BDT_bin9 = (TH1F*)inputFile->Get("isoCombined_pt60_100_BDT_bin9");

  TH1F* isoCombined_pt100_BDT_bin0 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin0");
  TH1F* isoCombined_pt100_BDT_bin1 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin1");
  TH1F* isoCombined_pt100_BDT_bin2 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin2");
  TH1F* isoCombined_pt100_BDT_bin3 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin3");
  TH1F* isoCombined_pt100_BDT_bin4 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin4");
  TH1F* isoCombined_pt100_BDT_bin5 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin5");
  TH1F* isoCombined_pt100_BDT_bin6 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin6");
  TH1F* isoCombined_pt100_BDT_bin7 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin7");
  TH1F* isoCombined_pt100_BDT_bin8 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin8");
  TH1F* isoCombined_pt100_BDT_bin9 = (TH1F*)inputFile->Get("isoCombined_pt100_BDT_bin9");

  //iso charged in pt bins and mva bins
  TH1F* isoPfCharged03_BDT_bin0 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin0");
  TH1F* isoPfCharged03_BDT_bin1 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin1");
  TH1F* isoPfCharged03_BDT_bin2 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin2");
  TH1F* isoPfCharged03_BDT_bin3 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin3");
  TH1F* isoPfCharged03_BDT_bin4 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin4");
  TH1F* isoPfCharged03_BDT_bin5 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin5");
  TH1F* isoPfCharged03_BDT_bin6 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin6");
  TH1F* isoPfCharged03_BDT_bin7 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin7");
  TH1F* isoPfCharged03_BDT_bin8 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin8");
  TH1F* isoPfCharged03_BDT_bin9 = (TH1F*)inputFile->Get("isoPfCharged03_BDT_bin9");

  TH1F* isoPfCharged03_pt30_60_BDT_bin0 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin0");
  TH1F* isoPfCharged03_pt30_60_BDT_bin1 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin1");
  TH1F* isoPfCharged03_pt30_60_BDT_bin2 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin2");
  TH1F* isoPfCharged03_pt30_60_BDT_bin3 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin3");
  TH1F* isoPfCharged03_pt30_60_BDT_bin4 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin4");
  TH1F* isoPfCharged03_pt30_60_BDT_bin5 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin5");
  TH1F* isoPfCharged03_pt30_60_BDT_bin6 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin6");
  TH1F* isoPfCharged03_pt30_60_BDT_bin7 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin7");
  TH1F* isoPfCharged03_pt30_60_BDT_bin8 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin8");
  TH1F* isoPfCharged03_pt30_60_BDT_bin9 = (TH1F*)inputFile->Get("isoPfCharged03_pt30_60_BDT_bin9");

  TH1F* isoPfCharged03_pt60_100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin0");
  TH1F* isoPfCharged03_pt60_100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin1");
  TH1F* isoPfCharged03_pt60_100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin2");
  TH1F* isoPfCharged03_pt60_100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin3");
  TH1F* isoPfCharged03_pt60_100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin4");
  TH1F* isoPfCharged03_pt60_100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin5");
  TH1F* isoPfCharged03_pt60_100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin6");
  TH1F* isoPfCharged03_pt60_100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin7");
  TH1F* isoPfCharged03_pt60_100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin8");
  TH1F* isoPfCharged03_pt60_100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfCharged03_pt60_100_BDT_bin9");

  TH1F* isoPfCharged03_pt100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin0");
  TH1F* isoPfCharged03_pt100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin1");
  TH1F* isoPfCharged03_pt100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin2");
  TH1F* isoPfCharged03_pt100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin3");
  TH1F* isoPfCharged03_pt100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin4");
  TH1F* isoPfCharged03_pt100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin5");
  TH1F* isoPfCharged03_pt100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin6");
  TH1F* isoPfCharged03_pt100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin7");
  TH1F* isoPfCharged03_pt100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin8");
  TH1F* isoPfCharged03_pt100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfCharged03_pt100_BDT_bin9");

  //iso neutrals in pt bins and mva bins
  TH1F* isoPfNeutrals03_BDT_bin0 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin0");
  TH1F* isoPfNeutrals03_BDT_bin1 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin1");
  TH1F* isoPfNeutrals03_BDT_bin2 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin2");
  TH1F* isoPfNeutrals03_BDT_bin3 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin3");
  TH1F* isoPfNeutrals03_BDT_bin4 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin4");
  TH1F* isoPfNeutrals03_BDT_bin5 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin5");
  TH1F* isoPfNeutrals03_BDT_bin6 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin6");
  TH1F* isoPfNeutrals03_BDT_bin7 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin7");
  TH1F* isoPfNeutrals03_BDT_bin8 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin8");
  TH1F* isoPfNeutrals03_BDT_bin9 = (TH1F*)inputFile->Get("isoPfNeutrals03_BDT_bin9");

  TH1F* isoPfNeutrals03_pt30_60_BDT_bin0 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin0");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin1 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin1");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin2 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin2");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin3 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin3");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin4 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin4");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin5 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin5");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin6 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin6");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin7 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin7");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin8 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin8");
  TH1F* isoPfNeutrals03_pt30_60_BDT_bin9 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt30_60_BDT_bin9");

  TH1F* isoPfNeutrals03_pt60_100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin0");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin1");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin2");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin3");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin4");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin5");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin6");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin7");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin8");
  TH1F* isoPfNeutrals03_pt60_100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt60_100_BDT_bin9");

  TH1F* isoPfNeutrals03_pt100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin0");
  TH1F* isoPfNeutrals03_pt100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin1");
  TH1F* isoPfNeutrals03_pt100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin2");
  TH1F* isoPfNeutrals03_pt100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin3");
  TH1F* isoPfNeutrals03_pt100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin4");
  TH1F* isoPfNeutrals03_pt100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin5");
  TH1F* isoPfNeutrals03_pt100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin6");
  TH1F* isoPfNeutrals03_pt100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin7");
  TH1F* isoPfNeutrals03_pt100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin8");
  TH1F* isoPfNeutrals03_pt100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfNeutrals03_pt100_BDT_bin9");

  //iso photons in pt bins and mva bins
  TH1F* isoPfPhotons03_BDT_bin0 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin0");
  TH1F* isoPfPhotons03_BDT_bin1 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin1");
  TH1F* isoPfPhotons03_BDT_bin2 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin2");
  TH1F* isoPfPhotons03_BDT_bin3 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin3");
  TH1F* isoPfPhotons03_BDT_bin4 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin4");
  TH1F* isoPfPhotons03_BDT_bin5 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin5");
  TH1F* isoPfPhotons03_BDT_bin6 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin6");
  TH1F* isoPfPhotons03_BDT_bin7 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin7");
  TH1F* isoPfPhotons03_BDT_bin8 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin8");
  TH1F* isoPfPhotons03_BDT_bin9 = (TH1F*)inputFile->Get("isoPfPhotons03_BDT_bin9");

  TH1F* isoPfPhotons03_pt30_60_BDT_bin0 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin0");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin1 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin1");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin2 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin2");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin3 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin3");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin4 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin4");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin5 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin5");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin6 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin6");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin7 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin7");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin8 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin8");
  TH1F* isoPfPhotons03_pt30_60_BDT_bin9 = (TH1F*)inputFile->Get("isoPfPhotons03_pt30_60_BDT_bin9");

  TH1F* isoPfPhotons03_pt60_100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin0");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin1");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin2");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin3");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin4");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin5");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin6");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin7");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin8");
  TH1F* isoPfPhotons03_pt60_100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfPhotons03_pt60_100_BDT_bin9");

  TH1F* isoPfPhotons03_pt100_BDT_bin0 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin0");
  TH1F* isoPfPhotons03_pt100_BDT_bin1 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin1");
  TH1F* isoPfPhotons03_pt100_BDT_bin2 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin2");
  TH1F* isoPfPhotons03_pt100_BDT_bin3 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin3");
  TH1F* isoPfPhotons03_pt100_BDT_bin4 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin4");
  TH1F* isoPfPhotons03_pt100_BDT_bin5 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin5");
  TH1F* isoPfPhotons03_pt100_BDT_bin6 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin6");
  TH1F* isoPfPhotons03_pt100_BDT_bin7 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin7");
  TH1F* isoPfPhotons03_pt100_BDT_bin8 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin8");
  TH1F* isoPfPhotons03_pt100_BDT_bin9 = (TH1F*)inputFile->Get("isoPfPhotons03_pt100_BDT_bin9");

  //FPR
  TH1F* isoFPRCombined_BDT_bin0 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin0");
  TH1F* isoFPRCombined_BDT_bin1 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin1");
  TH1F* isoFPRCombined_BDT_bin2 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin2");
  TH1F* isoFPRCombined_BDT_bin3 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin3");
  TH1F* isoFPRCombined_BDT_bin4 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin4");
  TH1F* isoFPRCombined_BDT_bin5 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin5");
  TH1F* isoFPRCombined_BDT_bin6 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin6");
  TH1F* isoFPRCombined_BDT_bin7 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin7");
  TH1F* isoFPRCombined_BDT_bin8 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin8");
  TH1F* isoFPRCombined_BDT_bin9 = (TH1F*)inputFile->Get("isoFPRCombined_BDT_bin9");

  TH1F* isoFPRPfCharged03_BDT_bin0 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin0");
  TH1F* isoFPRPfCharged03_BDT_bin1 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin1");
  TH1F* isoFPRPfCharged03_BDT_bin2 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin2");
  TH1F* isoFPRPfCharged03_BDT_bin3 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin3");
  TH1F* isoFPRPfCharged03_BDT_bin4 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin4");
  TH1F* isoFPRPfCharged03_BDT_bin5 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin5");
  TH1F* isoFPRPfCharged03_BDT_bin6 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin6");
  TH1F* isoFPRPfCharged03_BDT_bin7 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin7");
  TH1F* isoFPRPfCharged03_BDT_bin8 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin8");
  TH1F* isoFPRPfCharged03_BDT_bin9 = (TH1F*)inputFile->Get("isoFPRPfCharged03_BDT_bin9");

  TH1F* isoFPRPfNeutrals03_BDT_bin0 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin0");
  TH1F* isoFPRPfNeutrals03_BDT_bin1 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin1");
  TH1F* isoFPRPfNeutrals03_BDT_bin2 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin2");
  TH1F* isoFPRPfNeutrals03_BDT_bin3 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin3");
  TH1F* isoFPRPfNeutrals03_BDT_bin4 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin4");
  TH1F* isoFPRPfNeutrals03_BDT_bin5 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin5");
  TH1F* isoFPRPfNeutrals03_BDT_bin6 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin6");
  TH1F* isoFPRPfNeutrals03_BDT_bin7 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin7");
  TH1F* isoFPRPfNeutrals03_BDT_bin8 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin8");
  TH1F* isoFPRPfNeutrals03_BDT_bin9 = (TH1F*)inputFile->Get("isoFPRPfNeutrals03_BDT_bin9");

  TH1F* isoFPRPfPhotons03_BDT_bin0 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin0");
  TH1F* isoFPRPfPhotons03_BDT_bin1 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin1");
  TH1F* isoFPRPfPhotons03_BDT_bin2 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin2");
  TH1F* isoFPRPfPhotons03_BDT_bin3 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin3");
  TH1F* isoFPRPfPhotons03_BDT_bin4 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin4");
  TH1F* isoFPRPfPhotons03_BDT_bin5 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin5");
  TH1F* isoFPRPfPhotons03_BDT_bin6 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin6");
  TH1F* isoFPRPfPhotons03_BDT_bin7 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin7");
  TH1F* isoFPRPfPhotons03_BDT_bin8 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin8");
  TH1F* isoFPRPfPhotons03_BDT_bin9 = (TH1F*)inputFile->Get("isoFPRPfPhotons03_BDT_bin9");

  /*
  string ecalRegion;
  if(isEB==1) ecalRegion = "(TMath::Abs(etaPhot)<1.4442)";
  else ecalRegion = "(TMath::Abs(etaPhot)>1.479 && TMath::Abs(etaPhot)<2.5)";

  string SBconditions;
  if(isSig==1) SBconditions = "isMatchedPhot";
  else SBconditions = "!isMatchedPhot";
  */

  vector<int> binEdge, binEdge_pt30_60, binEdge_pt60_100, binEdge_pt100;
  vector<double> BDTEdge, BDTEdge_pt30_60, BDTEdge_pt60_100, BDTEdge_pt100;
  cout << "*******  all pt *********" << endl;
  binEdge = calculateBinEdge(BDToutput,10);
  BDTEdge = calculateBDTEdge(BDToutput, binEdge);

  cout << "*******  30 < pt < 60*********" << endl;
  binEdge_pt30_60 = calculateBinEdge(BDToutput_pt30_60,10);
  BDTEdge_pt30_60 = calculateBDTEdge(BDToutput_pt30_60, binEdge_pt30_60);

  cout << "*******  60 < pt < 100*********" << endl;
  binEdge_pt60_100 = calculateBinEdge(BDToutput_pt60_100,10);
  BDTEdge_pt60_100 = calculateBDTEdge(BDToutput_pt60_100, binEdge_pt60_100);

  cout << "*******   pt > 100*********" << endl;
  binEdge_pt100 = calculateBinEdge(BDToutput_pt100,10);
  BDTEdge_pt100 = calculateBDTEdge(BDToutput_pt100, binEdge_pt100);




  isoCombined_BDT_bin0->SetLineColor(kBlue);
  isoCombined_BDT_bin1->SetLineColor(kAzure);
  isoCombined_BDT_bin2->SetLineColor(kCyan);
  isoCombined_BDT_bin3->SetLineColor(kTeal  );
  isoCombined_BDT_bin4->SetLineColor(kGreen );
  isoCombined_BDT_bin5->SetLineColor(kSpring);
  isoCombined_BDT_bin6->SetLineColor(kYellow);
  isoCombined_BDT_bin7->SetLineColor(kOrange);
  isoCombined_BDT_bin8->SetLineColor(kRed);
  isoCombined_BDT_bin9->SetLineColor(kPink);

  isoCombined_BDT_bin0->SetLineWidth(2);
  isoCombined_BDT_bin1->SetLineWidth(2);
  isoCombined_BDT_bin2->SetLineWidth(2);
  isoCombined_BDT_bin3->SetLineWidth(2);
  isoCombined_BDT_bin4->SetLineWidth(2);
  isoCombined_BDT_bin5->SetLineWidth(2);
  isoCombined_BDT_bin6->SetLineWidth(2);
  isoCombined_BDT_bin7->SetLineWidth(2);
  isoCombined_BDT_bin8->SetLineWidth(2);
  isoCombined_BDT_bin9->SetLineWidth(2);

  isoCombined_BDT_bin9->GetXaxis()->SetTitle("isoCombinedPF03");
  isoCombined_BDT_bin9->GetYaxis()->SetTitle("arb. units");
  
  isoPfCharged03_BDT_bin0->SetLineColor(kBlue);
  isoPfCharged03_BDT_bin1->SetLineColor(kAzure);
  isoPfCharged03_BDT_bin2->SetLineColor(kCyan);
  isoPfCharged03_BDT_bin3->SetLineColor(kTeal  );
  isoPfCharged03_BDT_bin4->SetLineColor(kGreen );
  isoPfCharged03_BDT_bin5->SetLineColor(kSpring);
  isoPfCharged03_BDT_bin6->SetLineColor(kYellow);
  isoPfCharged03_BDT_bin7->SetLineColor(kOrange);
  isoPfCharged03_BDT_bin8->SetLineColor(kRed);
  isoPfCharged03_BDT_bin9->SetLineColor(kPink);

  isoPfCharged03_BDT_bin0->SetLineWidth(2);
  isoPfCharged03_BDT_bin1->SetLineWidth(2);
  isoPfCharged03_BDT_bin2->SetLineWidth(2);
  isoPfCharged03_BDT_bin3->SetLineWidth(2);
  isoPfCharged03_BDT_bin4->SetLineWidth(2);
  isoPfCharged03_BDT_bin5->SetLineWidth(2);
  isoPfCharged03_BDT_bin6->SetLineWidth(2);
  isoPfCharged03_BDT_bin7->SetLineWidth(2);
  isoPfCharged03_BDT_bin8->SetLineWidth(2);
  isoPfCharged03_BDT_bin9->SetLineWidth(2);

  isoPfCharged03_BDT_bin9->GetXaxis()->SetTitle("isoPfCharged03");
  isoPfCharged03_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfNeutrals03_BDT_bin0->SetLineColor(kBlue);
  isoPfNeutrals03_BDT_bin1->SetLineColor(kAzure);
  isoPfNeutrals03_BDT_bin2->SetLineColor(kCyan);
  isoPfNeutrals03_BDT_bin3->SetLineColor(kTeal  );
  isoPfNeutrals03_BDT_bin4->SetLineColor(kGreen );
  isoPfNeutrals03_BDT_bin5->SetLineColor(kSpring);
  isoPfNeutrals03_BDT_bin6->SetLineColor(kYellow);
  isoPfNeutrals03_BDT_bin7->SetLineColor(kOrange);
  isoPfNeutrals03_BDT_bin8->SetLineColor(kRed);
  isoPfNeutrals03_BDT_bin9->SetLineColor(kPink);

  isoPfNeutrals03_BDT_bin0->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin1->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin2->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin3->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin4->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin5->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin6->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin7->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin8->SetLineWidth(2);
  isoPfNeutrals03_BDT_bin9->SetLineWidth(2);

  isoPfNeutrals03_BDT_bin9->GetXaxis()->SetTitle("isoPfNeutrals03");
  isoPfNeutrals03_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfPhotons03_BDT_bin0->SetLineColor(kBlue);
  isoPfPhotons03_BDT_bin1->SetLineColor(kAzure);
  isoPfPhotons03_BDT_bin2->SetLineColor(kCyan);
  isoPfPhotons03_BDT_bin3->SetLineColor(kTeal  );
  isoPfPhotons03_BDT_bin4->SetLineColor(kGreen );
  isoPfPhotons03_BDT_bin5->SetLineColor(kSpring);
  isoPfPhotons03_BDT_bin6->SetLineColor(kYellow);
  isoPfPhotons03_BDT_bin7->SetLineColor(kOrange);
  isoPfPhotons03_BDT_bin8->SetLineColor(kRed);
  isoPfPhotons03_BDT_bin9->SetLineColor(kPink);

  isoPfPhotons03_BDT_bin0->SetLineWidth(2);
  isoPfPhotons03_BDT_bin1->SetLineWidth(2);
  isoPfPhotons03_BDT_bin2->SetLineWidth(2);
  isoPfPhotons03_BDT_bin3->SetLineWidth(2);
  isoPfPhotons03_BDT_bin4->SetLineWidth(2);
  isoPfPhotons03_BDT_bin5->SetLineWidth(2);
  isoPfPhotons03_BDT_bin6->SetLineWidth(2);
  isoPfPhotons03_BDT_bin7->SetLineWidth(2);
  isoPfPhotons03_BDT_bin8->SetLineWidth(2);
  isoPfPhotons03_BDT_bin9->SetLineWidth(2);

  isoPfPhotons03_BDT_bin9->GetXaxis()->SetTitle("isoPfPhotons03");
  isoPfPhotons03_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  //FPR
  isoFPRCombined_BDT_bin0->SetLineColor(kBlue);
  isoFPRCombined_BDT_bin1->SetLineColor(kAzure);
  isoFPRCombined_BDT_bin2->SetLineColor(kCyan);
  isoFPRCombined_BDT_bin3->SetLineColor(kTeal  );
  isoFPRCombined_BDT_bin4->SetLineColor(kGreen );
  isoFPRCombined_BDT_bin5->SetLineColor(kSpring);
  isoFPRCombined_BDT_bin6->SetLineColor(kYellow);
  isoFPRCombined_BDT_bin7->SetLineColor(kOrange);
  isoFPRCombined_BDT_bin8->SetLineColor(kRed);
  isoFPRCombined_BDT_bin9->SetLineColor(kPink);

  isoFPRCombined_BDT_bin0->SetLineWidth(2);
  isoFPRCombined_BDT_bin1->SetLineWidth(2);
  isoFPRCombined_BDT_bin2->SetLineWidth(2);
  isoFPRCombined_BDT_bin3->SetLineWidth(2);
  isoFPRCombined_BDT_bin4->SetLineWidth(2);
  isoFPRCombined_BDT_bin5->SetLineWidth(2);
  isoFPRCombined_BDT_bin6->SetLineWidth(2);
  isoFPRCombined_BDT_bin7->SetLineWidth(2);
  isoFPRCombined_BDT_bin8->SetLineWidth(2);
  isoFPRCombined_BDT_bin9->SetLineWidth(2);

  isoFPRCombined_BDT_bin9->GetXaxis()->SetTitle("isoFPRCombinedPF03");
  isoFPRCombined_BDT_bin9->GetYaxis()->SetTitle("arb. units");
  
  isoFPRPfCharged03_BDT_bin0->SetLineColor(kBlue);
  isoFPRPfCharged03_BDT_bin1->SetLineColor(kAzure);
  isoFPRPfCharged03_BDT_bin2->SetLineColor(kCyan);
  isoFPRPfCharged03_BDT_bin3->SetLineColor(kTeal  );
  isoFPRPfCharged03_BDT_bin4->SetLineColor(kGreen );
  isoFPRPfCharged03_BDT_bin5->SetLineColor(kSpring);
  isoFPRPfCharged03_BDT_bin6->SetLineColor(kYellow);
  isoFPRPfCharged03_BDT_bin7->SetLineColor(kOrange);
  isoFPRPfCharged03_BDT_bin8->SetLineColor(kRed);
  isoFPRPfCharged03_BDT_bin9->SetLineColor(kPink);

  isoFPRPfCharged03_BDT_bin0->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin1->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin2->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin3->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin4->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin5->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin6->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin7->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin8->SetLineWidth(2);
  isoFPRPfCharged03_BDT_bin9->SetLineWidth(2);

  isoFPRPfCharged03_BDT_bin9->GetXaxis()->SetTitle("isoFPRPfCharged03");
  isoFPRPfCharged03_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoFPRPfNeutrals03_BDT_bin0->SetLineColor(kBlue);
  isoFPRPfNeutrals03_BDT_bin1->SetLineColor(kAzure);
  isoFPRPfNeutrals03_BDT_bin2->SetLineColor(kCyan);
  isoFPRPfNeutrals03_BDT_bin3->SetLineColor(kTeal  );
  isoFPRPfNeutrals03_BDT_bin4->SetLineColor(kGreen );
  isoFPRPfNeutrals03_BDT_bin5->SetLineColor(kSpring);
  isoFPRPfNeutrals03_BDT_bin6->SetLineColor(kYellow);
  isoFPRPfNeutrals03_BDT_bin7->SetLineColor(kOrange);
  isoFPRPfNeutrals03_BDT_bin8->SetLineColor(kRed);
  isoFPRPfNeutrals03_BDT_bin9->SetLineColor(kPink);

  isoFPRPfNeutrals03_BDT_bin0->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin1->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin2->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin3->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin4->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin5->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin6->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin7->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin8->SetLineWidth(2);
  isoFPRPfNeutrals03_BDT_bin9->SetLineWidth(2);

  isoFPRPfNeutrals03_BDT_bin9->GetXaxis()->SetTitle("isoFPRPfNeutrals03");
  isoFPRPfNeutrals03_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoFPRPfPhotons03_BDT_bin0->SetLineColor(kBlue);
  isoFPRPfPhotons03_BDT_bin1->SetLineColor(kAzure);
  isoFPRPfPhotons03_BDT_bin2->SetLineColor(kCyan);
  isoFPRPfPhotons03_BDT_bin3->SetLineColor(kTeal  );
  isoFPRPfPhotons03_BDT_bin4->SetLineColor(kGreen );
  isoFPRPfPhotons03_BDT_bin5->SetLineColor(kSpring);
  isoFPRPfPhotons03_BDT_bin6->SetLineColor(kYellow);
  isoFPRPfPhotons03_BDT_bin7->SetLineColor(kOrange);
  isoFPRPfPhotons03_BDT_bin8->SetLineColor(kRed);
  isoFPRPfPhotons03_BDT_bin9->SetLineColor(kPink);

  isoFPRPfPhotons03_BDT_bin0->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin1->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin2->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin3->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin4->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin5->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin6->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin7->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin8->SetLineWidth(2);
  isoFPRPfPhotons03_BDT_bin9->SetLineWidth(2);

  isoFPRPfPhotons03_BDT_bin9->GetXaxis()->SetTitle("isoFPRPfPhotons03");
  isoFPRPfPhotons03_BDT_bin9->GetYaxis()->SetTitle("arb. units");


  TLegend* leg = new TLegend(0.4,0.5,0.85,0.85);
  leg->SetFillColor(0); 
  leg->SetBorderSize(0);
  //leg->SetTextSize(0.045);

  char caption[10][100];
  //char histoname[50][10];
  for(int i=0; i<9; i++){
    sprintf(caption[i], "%f < BDT output < %f", BDTEdge[i], BDTEdge[i+1]);
    //sprintf(histoname[][i], "isoCombined_BDT_bin%d", i);
  }  
  sprintf(caption[9], "%f < BDT output < 1.", BDTEdge[9] );

  leg->AddEntry(isoCombined_BDT_bin0, caption[0], "l");
  leg->AddEntry(isoCombined_BDT_bin1, caption[1], "l");
  leg->AddEntry(isoCombined_BDT_bin2, caption[2], "l");
  leg->AddEntry(isoCombined_BDT_bin3, caption[3], "l");
  leg->AddEntry(isoCombined_BDT_bin4, caption[4], "l");
  leg->AddEntry(isoCombined_BDT_bin5, caption[5], "l");
  leg->AddEntry(isoCombined_BDT_bin6, caption[6], "l");
  leg->AddEntry(isoCombined_BDT_bin7, caption[7], "l");
  leg->AddEntry(isoCombined_BDT_bin8, caption[8], "l");
  leg->AddEntry(isoCombined_BDT_bin9, caption[9], "l");


  isoCombined_pt30_60_BDT_bin0->SetLineColor(kBlue);
  isoCombined_pt30_60_BDT_bin1->SetLineColor(kAzure);
  isoCombined_pt30_60_BDT_bin2->SetLineColor(kCyan);
  isoCombined_pt30_60_BDT_bin3->SetLineColor(kTeal  );
  isoCombined_pt30_60_BDT_bin4->SetLineColor(kGreen );
  isoCombined_pt30_60_BDT_bin5->SetLineColor(kSpring);
  isoCombined_pt30_60_BDT_bin6->SetLineColor(kYellow);
  isoCombined_pt30_60_BDT_bin7->SetLineColor(kOrange);
  isoCombined_pt30_60_BDT_bin8->SetLineColor(kRed);
  isoCombined_pt30_60_BDT_bin9->SetLineColor(kPink);

  isoCombined_pt30_60_BDT_bin0->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin1->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin2->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin3->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin4->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin5->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin6->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin7->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin8->SetLineWidth(2);
  isoCombined_pt30_60_BDT_bin9->SetLineWidth(2);

  isoCombined_pt30_60_BDT_bin9->GetXaxis()->SetTitle("isoCombinedPF03");
  isoCombined_pt30_60_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfCharged03_pt30_60_BDT_bin0->SetLineColor(kBlue);
  isoPfCharged03_pt30_60_BDT_bin1->SetLineColor(kAzure);
  isoPfCharged03_pt30_60_BDT_bin2->SetLineColor(kCyan);
  isoPfCharged03_pt30_60_BDT_bin3->SetLineColor(kTeal  );
  isoPfCharged03_pt30_60_BDT_bin4->SetLineColor(kGreen );
  isoPfCharged03_pt30_60_BDT_bin5->SetLineColor(kSpring);
  isoPfCharged03_pt30_60_BDT_bin6->SetLineColor(kYellow);
  isoPfCharged03_pt30_60_BDT_bin7->SetLineColor(kOrange);
  isoPfCharged03_pt30_60_BDT_bin8->SetLineColor(kRed);
  isoPfCharged03_pt30_60_BDT_bin9->SetLineColor(kPink);

  isoPfCharged03_pt30_60_BDT_bin0->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin1->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin2->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin3->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin4->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin5->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin6->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin7->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin8->SetLineWidth(2);
  isoPfCharged03_pt30_60_BDT_bin9->SetLineWidth(2);

  isoPfCharged03_pt30_60_BDT_bin9->GetXaxis()->SetTitle("isoPfCharged03");
  isoPfCharged03_pt30_60_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfNeutrals03_pt30_60_BDT_bin0->SetLineColor(kBlue);
  isoPfNeutrals03_pt30_60_BDT_bin1->SetLineColor(kAzure);
  isoPfNeutrals03_pt30_60_BDT_bin2->SetLineColor(kCyan);
  isoPfNeutrals03_pt30_60_BDT_bin3->SetLineColor(kTeal  );
  isoPfNeutrals03_pt30_60_BDT_bin4->SetLineColor(kGreen );
  isoPfNeutrals03_pt30_60_BDT_bin5->SetLineColor(kSpring);
  isoPfNeutrals03_pt30_60_BDT_bin6->SetLineColor(kYellow);
  isoPfNeutrals03_pt30_60_BDT_bin7->SetLineColor(kOrange);
  isoPfNeutrals03_pt30_60_BDT_bin8->SetLineColor(kRed);
  isoPfNeutrals03_pt30_60_BDT_bin9->SetLineColor(kPink);

  isoPfNeutrals03_pt30_60_BDT_bin0->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin1->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin2->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin3->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin4->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin5->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin6->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin7->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin8->SetLineWidth(2);
  isoPfNeutrals03_pt30_60_BDT_bin9->SetLineWidth(2);

  isoPfNeutrals03_pt30_60_BDT_bin9->GetXaxis()->SetTitle("isoPfNeutrals03");
  isoPfNeutrals03_pt30_60_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfPhotons03_pt30_60_BDT_bin0->SetLineColor(kBlue);
  isoPfPhotons03_pt30_60_BDT_bin1->SetLineColor(kAzure);
  isoPfPhotons03_pt30_60_BDT_bin2->SetLineColor(kCyan);
  isoPfPhotons03_pt30_60_BDT_bin3->SetLineColor(kTeal  );
  isoPfPhotons03_pt30_60_BDT_bin4->SetLineColor(kGreen );
  isoPfPhotons03_pt30_60_BDT_bin5->SetLineColor(kSpring);
  isoPfPhotons03_pt30_60_BDT_bin6->SetLineColor(kYellow);
  isoPfPhotons03_pt30_60_BDT_bin7->SetLineColor(kOrange);
  isoPfPhotons03_pt30_60_BDT_bin8->SetLineColor(kRed);
  isoPfPhotons03_pt30_60_BDT_bin9->SetLineColor(kPink);

  isoPfPhotons03_pt30_60_BDT_bin0->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin1->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin2->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin3->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin4->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin5->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin6->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin7->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin8->SetLineWidth(2);
  isoPfPhotons03_pt30_60_BDT_bin9->SetLineWidth(2);

  isoPfPhotons03_pt30_60_BDT_bin9->GetXaxis()->SetTitle("isoPfPhotons03");
  isoPfPhotons03_pt30_60_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  TLegend* leg_pt30_60 = new TLegend(0.4,0.5,0.85,0.85);
  leg_pt30_60->SetFillColor(0); 
  leg_pt30_60->SetBorderSize(0);
  //leg_pt30_60->SetTextSize(0.045);

  isoCombined_pt60_100_BDT_bin0->SetLineColor(kBlue);
  isoCombined_pt60_100_BDT_bin1->SetLineColor(kAzure);
  isoCombined_pt60_100_BDT_bin2->SetLineColor(kCyan);
  isoCombined_pt60_100_BDT_bin3->SetLineColor(kTeal  );
  isoCombined_pt60_100_BDT_bin4->SetLineColor(kGreen );
  isoCombined_pt60_100_BDT_bin5->SetLineColor(kSpring);
  isoCombined_pt60_100_BDT_bin6->SetLineColor(kYellow);
  isoCombined_pt60_100_BDT_bin7->SetLineColor(kOrange);
  isoCombined_pt60_100_BDT_bin8->SetLineColor(kRed);
  isoCombined_pt60_100_BDT_bin9->SetLineColor(kPink);

  isoCombined_pt60_100_BDT_bin0->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin1->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin2->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin3->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin4->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin5->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin6->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin7->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin8->SetLineWidth(2);
  isoCombined_pt60_100_BDT_bin9->SetLineWidth(2);

  isoCombined_pt60_100_BDT_bin9->GetXaxis()->SetTitle("isoCombinedPF03");
  isoCombined_pt60_100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfCharged03_pt60_100_BDT_bin0->SetLineColor(kBlue);
  isoPfCharged03_pt60_100_BDT_bin1->SetLineColor(kAzure);
  isoPfCharged03_pt60_100_BDT_bin2->SetLineColor(kCyan);
  isoPfCharged03_pt60_100_BDT_bin3->SetLineColor(kTeal  );
  isoPfCharged03_pt60_100_BDT_bin4->SetLineColor(kGreen );
  isoPfCharged03_pt60_100_BDT_bin5->SetLineColor(kSpring);
  isoPfCharged03_pt60_100_BDT_bin6->SetLineColor(kYellow);
  isoPfCharged03_pt60_100_BDT_bin7->SetLineColor(kOrange);
  isoPfCharged03_pt60_100_BDT_bin8->SetLineColor(kRed);
  isoPfCharged03_pt60_100_BDT_bin9->SetLineColor(kPink);

  isoPfCharged03_pt60_100_BDT_bin0->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin1->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin2->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin3->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin4->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin5->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin6->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin7->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin8->SetLineWidth(2);
  isoPfCharged03_pt60_100_BDT_bin9->SetLineWidth(2);

  isoPfCharged03_pt60_100_BDT_bin9->GetXaxis()->SetTitle("isoPfCharged03");
  isoPfCharged03_pt60_100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfNeutrals03_pt60_100_BDT_bin0->SetLineColor(kBlue);
  isoPfNeutrals03_pt60_100_BDT_bin1->SetLineColor(kAzure);
  isoPfNeutrals03_pt60_100_BDT_bin2->SetLineColor(kCyan);
  isoPfNeutrals03_pt60_100_BDT_bin3->SetLineColor(kTeal  );
  isoPfNeutrals03_pt60_100_BDT_bin4->SetLineColor(kGreen );
  isoPfNeutrals03_pt60_100_BDT_bin5->SetLineColor(kSpring);
  isoPfNeutrals03_pt60_100_BDT_bin6->SetLineColor(kYellow);
  isoPfNeutrals03_pt60_100_BDT_bin7->SetLineColor(kOrange);
  isoPfNeutrals03_pt60_100_BDT_bin8->SetLineColor(kRed);
  isoPfNeutrals03_pt60_100_BDT_bin9->SetLineColor(kPink);

  isoPfNeutrals03_pt60_100_BDT_bin0->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin1->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin2->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin3->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin4->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin5->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin6->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin7->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin8->SetLineWidth(2);
  isoPfNeutrals03_pt60_100_BDT_bin9->SetLineWidth(2);

  isoPfNeutrals03_pt60_100_BDT_bin9->GetXaxis()->SetTitle("isoPfNeutrals03");
  isoPfNeutrals03_pt60_100_BDT_bin9->GetYaxis()->SetTitle("arb. units");


  isoPfPhotons03_pt60_100_BDT_bin0->SetLineColor(kBlue);
  isoPfPhotons03_pt60_100_BDT_bin1->SetLineColor(kAzure);
  isoPfPhotons03_pt60_100_BDT_bin2->SetLineColor(kCyan);
  isoPfPhotons03_pt60_100_BDT_bin3->SetLineColor(kTeal  );
  isoPfPhotons03_pt60_100_BDT_bin4->SetLineColor(kGreen );
  isoPfPhotons03_pt60_100_BDT_bin5->SetLineColor(kSpring);
  isoPfPhotons03_pt60_100_BDT_bin6->SetLineColor(kYellow);
  isoPfPhotons03_pt60_100_BDT_bin7->SetLineColor(kOrange);
  isoPfPhotons03_pt60_100_BDT_bin8->SetLineColor(kRed);
  isoPfPhotons03_pt60_100_BDT_bin9->SetLineColor(kPink);

  isoPfPhotons03_pt60_100_BDT_bin0->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin1->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin2->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin3->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin4->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin5->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin6->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin7->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin8->SetLineWidth(2);
  isoPfPhotons03_pt60_100_BDT_bin9->SetLineWidth(2);

  isoPfPhotons03_pt60_100_BDT_bin9->GetXaxis()->SetTitle("isoPfPhotons03");
  isoPfPhotons03_pt60_100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  
  for(int i=0; i<9; i++){
    sprintf(caption[i], "%f < BDT output < %f", BDTEdge_pt30_60[i], BDTEdge_pt30_60[i+1]);
  }  
  sprintf(caption[9], "%f < BDT output < 1.", BDTEdge_pt30_60[9] );

  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin0, caption[0], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin1, caption[1], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin2, caption[2], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin3, caption[3], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin4, caption[4], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin5, caption[5], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin6, caption[6], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin7, caption[7], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin8, caption[8], "l");
  leg_pt30_60->AddEntry(isoCombined_pt30_60_BDT_bin9, caption[9], "l");


  TLegend* leg_pt60_100 = new TLegend(0.4,0.5,0.85,0.85);
  leg_pt60_100->SetFillColor(0); 
  leg_pt60_100->SetBorderSize(0);
  //leg_pt60_100->SetTextSize(0.045);

  
  for(int i=0; i<9; i++){
    sprintf(caption[i], "%f < BDT output < %f", BDTEdge_pt60_100[i], BDTEdge_pt60_100[i+1]);
  }  
  sprintf(caption[9], "%f < BDT output < 1.", BDTEdge_pt60_100[9] );

  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin0, caption[0], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin1, caption[1], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin2, caption[2], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin3, caption[3], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin4, caption[4], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin5, caption[5], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin6, caption[6], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin7, caption[7], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin8, caption[8], "l");
  leg_pt60_100->AddEntry(isoCombined_pt60_100_BDT_bin9, caption[9], "l");



  TLegend* leg_pt100 = new TLegend(0.4,0.5,0.85,0.85);
  leg_pt100->SetFillColor(0); 
  leg_pt100->SetBorderSize(0);
  //leg_pt100->SetTextSize(0.045);

  
  for(int i=0; i<9; i++){
    sprintf(caption[i], "%f < BDT output < %f", BDTEdge_pt100[i], BDTEdge_pt100[i+1]);
  }  
  sprintf(caption[9], "%f < BDT output < 1.", BDTEdge_pt100[9] );

  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin0, caption[0], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin1, caption[1], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin2, caption[2], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin3, caption[3], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin4, caption[4], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin5, caption[5], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin6, caption[6], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin7, caption[7], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin8, caption[8], "l");
  leg_pt100->AddEntry(isoCombined_pt100_BDT_bin9, caption[9], "l");

  
  isoCombined_pt100_BDT_bin0->SetLineColor(kBlue);
  isoCombined_pt100_BDT_bin1->SetLineColor(kAzure);
  isoCombined_pt100_BDT_bin2->SetLineColor(kCyan);
  isoCombined_pt100_BDT_bin3->SetLineColor(kTeal  );
  isoCombined_pt100_BDT_bin4->SetLineColor(kGreen );
  isoCombined_pt100_BDT_bin5->SetLineColor(kSpring);
  isoCombined_pt100_BDT_bin6->SetLineColor(kYellow);
  isoCombined_pt100_BDT_bin7->SetLineColor(kOrange);
  isoCombined_pt100_BDT_bin8->SetLineColor(kRed);
  isoCombined_pt100_BDT_bin9->SetLineColor(kPink);

  isoCombined_pt100_BDT_bin0->SetLineWidth(2);
  isoCombined_pt100_BDT_bin1->SetLineWidth(2);
  isoCombined_pt100_BDT_bin2->SetLineWidth(2);
  isoCombined_pt100_BDT_bin3->SetLineWidth(2);
  isoCombined_pt100_BDT_bin4->SetLineWidth(2);
  isoCombined_pt100_BDT_bin5->SetLineWidth(2);
  isoCombined_pt100_BDT_bin6->SetLineWidth(2);
  isoCombined_pt100_BDT_bin7->SetLineWidth(2);
  isoCombined_pt100_BDT_bin8->SetLineWidth(2);
  isoCombined_pt100_BDT_bin9->SetLineWidth(2);

  isoCombined_pt100_BDT_bin9->GetXaxis()->SetTitle("isoCombinedPF03");
  isoCombined_pt100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfCharged03_pt100_BDT_bin0->SetLineColor(kBlue);
  isoPfCharged03_pt100_BDT_bin1->SetLineColor(kAzure);
  isoPfCharged03_pt100_BDT_bin2->SetLineColor(kCyan);
  isoPfCharged03_pt100_BDT_bin3->SetLineColor(kTeal  );
  isoPfCharged03_pt100_BDT_bin4->SetLineColor(kGreen );
  isoPfCharged03_pt100_BDT_bin5->SetLineColor(kSpring);
  isoPfCharged03_pt100_BDT_bin6->SetLineColor(kYellow);
  isoPfCharged03_pt100_BDT_bin7->SetLineColor(kOrange);
  isoPfCharged03_pt100_BDT_bin8->SetLineColor(kRed);
  isoPfCharged03_pt100_BDT_bin9->SetLineColor(kPink);

  isoPfCharged03_pt100_BDT_bin0->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin1->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin2->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin3->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin4->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin5->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin6->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin7->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin8->SetLineWidth(2);
  isoPfCharged03_pt100_BDT_bin9->SetLineWidth(2);

  isoPfCharged03_pt100_BDT_bin9->GetXaxis()->SetTitle("isoPfCharged03");
  isoPfCharged03_pt100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfNeutrals03_pt100_BDT_bin0->SetLineColor(kBlue);
  isoPfNeutrals03_pt100_BDT_bin1->SetLineColor(kAzure);
  isoPfNeutrals03_pt100_BDT_bin2->SetLineColor(kCyan);
  isoPfNeutrals03_pt100_BDT_bin3->SetLineColor(kTeal  );
  isoPfNeutrals03_pt100_BDT_bin4->SetLineColor(kGreen );
  isoPfNeutrals03_pt100_BDT_bin5->SetLineColor(kSpring);
  isoPfNeutrals03_pt100_BDT_bin6->SetLineColor(kYellow);
  isoPfNeutrals03_pt100_BDT_bin7->SetLineColor(kOrange);
  isoPfNeutrals03_pt100_BDT_bin8->SetLineColor(kRed);
  isoPfNeutrals03_pt100_BDT_bin9->SetLineColor(kPink);

  isoPfNeutrals03_pt100_BDT_bin0->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin1->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin2->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin3->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin4->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin5->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin6->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin7->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin8->SetLineWidth(2);
  isoPfNeutrals03_pt100_BDT_bin9->SetLineWidth(2);

  isoPfNeutrals03_pt100_BDT_bin9->GetXaxis()->SetTitle("isoPfNeutrals03");
  isoPfNeutrals03_pt100_BDT_bin9->GetYaxis()->SetTitle("arb. units");

  isoPfPhotons03_pt100_BDT_bin0->SetLineColor(kBlue);
  isoPfPhotons03_pt100_BDT_bin1->SetLineColor(kAzure);
  isoPfPhotons03_pt100_BDT_bin2->SetLineColor(kCyan);
  isoPfPhotons03_pt100_BDT_bin3->SetLineColor(kTeal  );
  isoPfPhotons03_pt100_BDT_bin4->SetLineColor(kGreen );
  isoPfPhotons03_pt100_BDT_bin5->SetLineColor(kSpring);
  isoPfPhotons03_pt100_BDT_bin6->SetLineColor(kYellow);
  isoPfPhotons03_pt100_BDT_bin7->SetLineColor(kOrange);
  isoPfPhotons03_pt100_BDT_bin8->SetLineColor(kRed);
  isoPfPhotons03_pt100_BDT_bin9->SetLineColor(kPink);

  isoPfPhotons03_pt100_BDT_bin0->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin1->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin2->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin3->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin4->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin5->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin6->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin7->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin8->SetLineWidth(2);
  isoPfPhotons03_pt100_BDT_bin9->SetLineWidth(2);

  isoPfPhotons03_pt100_BDT_bin9->GetXaxis()->SetTitle("isoPfPhotons03");
  isoPfPhotons03_pt100_BDT_bin9->GetYaxis()->SetTitle("arb. units");


  //**************** drawing on canvas ******************
  string outputDir = "histo_v6/genIso/";

  TCanvas c1, c2;
  string match;
  string region;

  if(isSig) match = "isMatch";
  else match = "isNotMatch";
  if(isEB) region = "EB";
  else region = "EE";  

  c2.cd();
  correl_plot->Draw("COLZ");
  profile_correl_plot->Draw("ESAME");
  c2.SetLogz();
  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_"+match+".png").c_str());
  //c2.SaveAs(outputDir+"correl_mvaIso_EE_isMatch.pdf");
  //c2.SaveAs(outputDir+"correl_mvaIso_EE_isMatch.root");
  c2.Clear();
    
  correl_plot_isoCharged->Draw("COLZ");
  profile_correl_plot_isoCharged->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoCharged_"+region+"_"+match+".png").c_str());
  c2.Clear();
    
  correl_plot_isoNeutrals->Draw("COLZ");
  profile_correl_plot_isoNeutrals->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoNeutrals_"+region+"_"+match+".png").c_str());
  //c2.SaveAs(outputDir+"correl_mvaIsoNeutrals_EE_isMatch.pdf");
  //c2.SaveAs(outputDir+"correl_mvaIsoNeutrals_EE_isMatch.root");
  c2.Clear();
    
  correl_plot_isoPhotons->Draw("COLZ");
  profile_correl_plot_isoPhotons->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoPhotons_"+region+"_"+match+".png").c_str());
  //c2.SaveAs(outputDir+"correl_mvaIsoPhotons_EE_isMatch.pdf");
  //c2.SaveAs(outputDir+"correl_mvaIsoPhotons__EE_isMatch.root");
  c2.Clear();

  correl_plot_pt30_60->Draw("COLZ");
  profile_correl_plot_pt30_60->Draw("ESAME");
  c2.SetLogz();
  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
    
  correl_plot_isoCharged_pt30_60->Draw("COLZ");
  profile_correl_plot_isoCharged_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoCharged_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
    
  correl_plot_isoNeutrals_pt30_60->Draw("COLZ");
  profile_correl_plot_isoNeutrals_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoNeutrals_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
    
  correl_plot_isoPhotons_pt30_60->Draw("COLZ");
  profile_correl_plot_isoPhotons_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoPhotons_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();

  correl_plot_pt60_100->Draw("COLZ");
  profile_correl_plot_pt60_100->Draw("ESAME");
  c2.SetLogz();
  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
    
  correl_plot_isoCharged_pt60_100->Draw("COLZ");
  profile_correl_plot_isoCharged_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoCharged_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
    
  correl_plot_isoNeutrals_pt60_100->Draw("COLZ");
  profile_correl_plot_isoNeutrals_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoNeutrals_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
    
  correl_plot_isoPhotons_pt60_100->Draw("COLZ");
  profile_correl_plot_isoPhotons_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoPhotons_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();

  correl_plot_pt100->Draw("COLZ");
  profile_correl_plot_pt100->Draw("ESAME");
  c2.SetLogz();
  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();
    
  correl_plot_isoCharged_pt100->Draw("COLZ");
  profile_correl_plot_isoCharged_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoCharged_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();
    
  correl_plot_isoNeutrals_pt100->Draw("COLZ");
  profile_correl_plot_isoNeutrals_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoNeutrals_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();
    
  correl_plot_isoPhotons_pt100->Draw("COLZ");
  profile_correl_plot_isoPhotons_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoPhotons_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();

  //correl iso FPR with BDT
  correl_plot_isoFPR->Draw("COLZ");
  profile_correl_plot_isoFPR->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_"+match+".png").c_str());
  c2.Clear();

  correl_plot_isoFPRCharged->Draw("COLZ");
  profile_correl_plot_isoFPRCharged->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRCharged_"+region+"_"+match+".png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRNeutrals->Draw("COLZ");
  profile_correl_plot_isoFPRNeutrals->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRNeutrals_"+region+"_"+match+".png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRPhotons->Draw("COLZ");
  profile_correl_plot_isoFPRPhotons->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRPhotons_"+region+"_"+match+".png").c_str());
  c2.Clear();

  correl_plot_isoFPR_pt30_60->Draw("COLZ");
  profile_correl_plot_isoFPR_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
 
  correl_plot_isoFPRCharged_pt30_60->Draw("COLZ");
  profile_correl_plot_isoFPRCharged_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRCharged_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRNeutrals_pt30_60->Draw("COLZ");
  profile_correl_plot_isoFPRNeutrals_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRNeutrals_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRPhotons_pt30_60->Draw("COLZ");
  profile_correl_plot_isoFPRPhotons_pt30_60->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRPhotons_"+region+"_"+match+"_pt30_60.png").c_str());
  c2.Clear();

  correl_plot_isoFPR_pt60_100->Draw("COLZ");
  profile_correl_plot_isoFPR_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
  
  correl_plot_isoFPRCharged_pt60_100->Draw("COLZ");
  profile_correl_plot_isoFPRCharged_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRCharged_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRNeutrals_pt60_100->Draw("COLZ");
  profile_correl_plot_isoFPRNeutrals_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRNeutrals_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRPhotons_pt60_100->Draw("COLZ");
  profile_correl_plot_isoFPRPhotons_pt60_100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRPhotons_"+region+"_"+match+"_pt60_100.png").c_str());
  c2.Clear();

  correl_plot_isoFPR_pt100->Draw("COLZ");
  profile_correl_plot_isoFPR_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();

  correl_plot_isoFPRCharged_pt100->Draw("COLZ");
  profile_correl_plot_isoFPRCharged_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRCharged_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRNeutrals_pt100->Draw("COLZ");
  profile_correl_plot_isoFPRNeutrals_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRNeutrals_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();
    
  correl_plot_isoFPRPhotons_pt100->Draw("COLZ");
  profile_correl_plot_isoFPRPhotons_pt100->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPRPhotons_"+region+"_"+match+"_pt100.png").c_str());
  c2.Clear();

  //closure test for FPR iso

  /*
  isoFPRvsIsoFPRRandomCone_combined03->Draw("COLZ");
  profile_isoFPRvsIsoFPRRandomCone_combined03->Draw("ESAME");
  c2.SaveAs((outputDir+"isoFPRvsIsoFPRRandomCone_combined03_"+region+"_"+match+".png").c_str());
  c2.Clear();

  isoFPRvsIsoFPRRandomCone_charged03->Draw("COLZ");
  profile_isoFPRvsIsoFPRRandomCone_charged03->Draw("ESAME");
  c2.SaveAs((outputDir+"isoFPRvsIsoFPRRandomCone_charged03_"+region+"_"+match+".png").c_str());
  c2.Clear();

  isoFPRvsIsoFPRRandomCone_neutrals03->Draw("COLZ");
  profile_isoFPRvsIsoFPRRandomCone_neutrals03->Draw("ESAME");
  c2.SaveAs((outputDir+"isoFPRvsIsoFPRRandomCone_neutrals03_"+region+"_"+match+".png").c_str());
  c2.Clear();

  isoFPRvsIsoFPRRandomCone_photons03->Draw("COLZ");
  profile_isoFPRvsIsoFPRRandomCone_photons03->Draw("ESAME");
  c2.SaveAs((outputDir+"isoFPRvsIsoFPRRandomCone_photons03_"+region+"_"+match+".png").c_str());
  c2.Clear();
  */

  c2.Close();
    

  ///////////////
  c1.cd();
  BDToutput->Draw();
  c1.SaveAs((outputDir+"BDToutput_"+region+"_"+match+".png").c_str());
  c1.Clear();

  BDToutput_pt30_60->Draw();
  c1.SaveAs((outputDir+"BDToutput_"+region+"_"+match+"_pt30_60.png").c_str());
  c1.Clear();

  BDToutput_pt60_100->Draw();
  c1.SaveAs((outputDir+"BDToutput_"+region+"_"+match+"_pt60_100.png").c_str());
  c1.Clear();

  BDToutput_pt100->Draw();
  c1.SaveAs((outputDir+"BDToutput_"+region+"_"+match+"_pt100.png").c_str());
  c1.Clear();

  isoCombined_BDT_bin9->DrawNormalized();
  isoCombined_BDT_bin8->DrawNormalized("same");
  isoCombined_BDT_bin7->DrawNormalized("same");
  isoCombined_BDT_bin6->DrawNormalized("same");
  isoCombined_BDT_bin5->DrawNormalized("same");
  isoCombined_BDT_bin4->DrawNormalized("same");
  isoCombined_BDT_bin3->DrawNormalized("same");
  isoCombined_BDT_bin2->DrawNormalized("same");
  isoCombined_BDT_bin1->DrawNormalized("same");
  isoCombined_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoCombined_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  leg->Draw(); 
  c1.SaveAs("legend.png");

  isoPfCharged03_BDT_bin9->DrawNormalized();
  isoPfCharged03_BDT_bin8->DrawNormalized("same");
  isoPfCharged03_BDT_bin7->DrawNormalized("same");
  isoPfCharged03_BDT_bin6->DrawNormalized("same");
  isoPfCharged03_BDT_bin5->DrawNormalized("same");
  isoPfCharged03_BDT_bin4->DrawNormalized("same");
  isoPfCharged03_BDT_bin3->DrawNormalized("same");
  isoPfCharged03_BDT_bin2->DrawNormalized("same");
  isoPfCharged03_BDT_bin1->DrawNormalized("same");
  isoPfCharged03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoPfCharged03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  
  isoPfNeutrals03_BDT_bin9->DrawNormalized();
  isoPfNeutrals03_BDT_bin8->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin7->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin6->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin5->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin4->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin3->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin2->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin1->DrawNormalized("same");
  isoPfNeutrals03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoPfNeutrals03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 
  isoPfPhotons03_BDT_bin9->DrawNormalized();
  isoPfPhotons03_BDT_bin8->DrawNormalized("same");
  isoPfPhotons03_BDT_bin7->DrawNormalized("same");
  isoPfPhotons03_BDT_bin6->DrawNormalized("same");
  isoPfPhotons03_BDT_bin5->DrawNormalized("same");
  isoPfPhotons03_BDT_bin4->DrawNormalized("same");
  isoPfPhotons03_BDT_bin3->DrawNormalized("same");
  isoPfPhotons03_BDT_bin2->DrawNormalized("same");
  isoPfPhotons03_BDT_bin1->DrawNormalized("same");
  isoPfPhotons03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoPfPhotons03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 

  //FPR
  isoFPRCombined_BDT_bin9->DrawNormalized();
  isoFPRCombined_BDT_bin8->DrawNormalized("same");
  isoFPRCombined_BDT_bin7->DrawNormalized("same");
  isoFPRCombined_BDT_bin6->DrawNormalized("same");
  isoFPRCombined_BDT_bin5->DrawNormalized("same");
  isoFPRCombined_BDT_bin4->DrawNormalized("same");
  isoFPRCombined_BDT_bin3->DrawNormalized("same");
  isoFPRCombined_BDT_bin2->DrawNormalized("same");
  isoFPRCombined_BDT_bin1->DrawNormalized("same");
  isoFPRCombined_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoFPRCombined_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  leg->Draw(); 
  c1.SaveAs("legend.png");

  isoFPRPfCharged03_BDT_bin9->DrawNormalized();
  isoFPRPfCharged03_BDT_bin8->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin7->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin6->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin5->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin4->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin3->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin2->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin1->DrawNormalized("same");
  isoFPRPfCharged03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoFPRPfCharged03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  
  isoFPRPfNeutrals03_BDT_bin9->DrawNormalized();
  isoFPRPfNeutrals03_BDT_bin8->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin7->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin6->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin5->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin4->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin3->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin2->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin1->DrawNormalized("same");
  isoFPRPfNeutrals03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoFPRPfNeutrals03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 
  isoFPRPfPhotons03_BDT_bin9->DrawNormalized();
  isoFPRPfPhotons03_BDT_bin8->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin7->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin6->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin5->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin4->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin3->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin2->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin1->DrawNormalized("same");
  isoFPRPfPhotons03_BDT_bin0->DrawNormalized("same");  
  leg->Draw(); 
  c1.SaveAs((outputDir+"isoFPRPfPhotons03_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();


  ///////////
  isoCombined_pt30_60_BDT_bin9->DrawNormalized();
  isoCombined_pt30_60_BDT_bin8->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin7->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin6->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin5->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin4->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin3->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin2->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin1->DrawNormalized("same");
  isoCombined_pt30_60_BDT_bin0->DrawNormalized("same");  
  leg_pt30_60->Draw(); 
  c1.SaveAs((outputDir+"isoCombined_pt30_60_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  leg_pt30_60->Draw(); 
  c1.SaveAs("legend_pt30_60.png");

  isoPfCharged03_pt30_60_BDT_bin9->DrawNormalized();
  isoPfCharged03_pt30_60_BDT_bin8->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin7->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin6->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin5->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin4->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin3->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin2->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin1->DrawNormalized("same");
  isoPfCharged03_pt30_60_BDT_bin0->DrawNormalized("same");  
  leg_pt30_60->Draw(); 
  c1.SaveAs((outputDir+"isoPfCharged03_pt30_60_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  
  isoPfNeutrals03_pt30_60_BDT_bin9->DrawNormalized();
  isoPfNeutrals03_pt30_60_BDT_bin8->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin7->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin6->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin5->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin4->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin3->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin2->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin1->DrawNormalized("same");
  isoPfNeutrals03_pt30_60_BDT_bin0->DrawNormalized("same");  
  leg_pt30_60->Draw(); 
  c1.SaveAs((outputDir+"isoPfNeutrals03_pt30_60_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 
  isoPfPhotons03_pt30_60_BDT_bin9->DrawNormalized();
  isoPfPhotons03_pt30_60_BDT_bin8->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin7->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin6->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin5->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin4->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin3->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin2->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin1->DrawNormalized("same");
  isoPfPhotons03_pt30_60_BDT_bin0->DrawNormalized("same");  
  leg_pt30_60->Draw(); 
  c1.SaveAs((outputDir+"isoPfPhotons03_pt30_60_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();


  isoCombined_pt60_100_BDT_bin9->DrawNormalized();
  isoCombined_pt60_100_BDT_bin8->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin7->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin6->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin5->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin4->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin3->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin2->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin1->DrawNormalized("same");
  isoCombined_pt60_100_BDT_bin0->DrawNormalized("same");  
  leg_pt60_100->Draw(); 
  c1.SaveAs((outputDir+"isoCombined_pt60_100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  leg_pt60_100->Draw(); 
  c1.SaveAs("legend_pt60_100.png");

  isoPfCharged03_pt60_100_BDT_bin9->DrawNormalized();
  isoPfCharged03_pt60_100_BDT_bin8->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin7->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin6->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin5->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin4->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin3->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin2->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin1->DrawNormalized("same");
  isoPfCharged03_pt60_100_BDT_bin0->DrawNormalized("same");  
  leg_pt60_100->Draw(); 
  c1.SaveAs((outputDir+"isoPfCharged03_pt60_100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  
  isoPfNeutrals03_pt60_100_BDT_bin9->DrawNormalized();
  isoPfNeutrals03_pt60_100_BDT_bin8->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin7->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin6->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin5->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin4->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin3->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin2->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin1->DrawNormalized("same");
  isoPfNeutrals03_pt60_100_BDT_bin0->DrawNormalized("same");  
  leg_pt60_100->Draw(); 
  c1.SaveAs((outputDir+"isoPfNeutrals03_pt60_100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 
  isoPfPhotons03_pt60_100_BDT_bin9->DrawNormalized();
  isoPfPhotons03_pt60_100_BDT_bin8->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin7->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin6->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin5->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin4->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin3->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin2->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin1->DrawNormalized("same");
  isoPfPhotons03_pt60_100_BDT_bin0->DrawNormalized("same");  
  leg_pt60_100->Draw(); 
  c1.SaveAs((outputDir+"isoPfPhotons03_pt60_100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();


  isoCombined_pt100_BDT_bin9->DrawNormalized();
  isoCombined_pt100_BDT_bin8->DrawNormalized("same");
  isoCombined_pt100_BDT_bin7->DrawNormalized("same");
  isoCombined_pt100_BDT_bin6->DrawNormalized("same");
  isoCombined_pt100_BDT_bin5->DrawNormalized("same");
  isoCombined_pt100_BDT_bin4->DrawNormalized("same");
  isoCombined_pt100_BDT_bin3->DrawNormalized("same");
  isoCombined_pt100_BDT_bin2->DrawNormalized("same");
  isoCombined_pt100_BDT_bin1->DrawNormalized("same");
  isoCombined_pt100_BDT_bin0->DrawNormalized("same");  
  leg_pt100->Draw(); 
  c1.SaveAs((outputDir+"isoCombined_pt100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  leg_pt100->Draw(); 
  c1.SaveAs("legend_pt100.png");

  isoPfCharged03_pt100_BDT_bin9->DrawNormalized();
  isoPfCharged03_pt100_BDT_bin8->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin7->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin6->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin5->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin4->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin3->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin2->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin1->DrawNormalized("same");
  isoPfCharged03_pt100_BDT_bin0->DrawNormalized("same");  
  leg_pt100->Draw(); 
  c1.SaveAs((outputDir+"isoPfCharged03_pt100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
  
  isoPfNeutrals03_pt100_BDT_bin9->DrawNormalized();
  isoPfNeutrals03_pt100_BDT_bin8->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin7->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin6->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin5->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin4->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin3->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin2->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin1->DrawNormalized("same");
  isoPfNeutrals03_pt100_BDT_bin0->DrawNormalized("same");  
  leg_pt100->Draw(); 
  c1.SaveAs((outputDir+"isoPfNeutrals03_pt100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();
 
  isoPfPhotons03_pt100_BDT_bin9->DrawNormalized();
  isoPfPhotons03_pt100_BDT_bin8->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin7->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin6->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin5->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin4->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin3->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin2->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin1->DrawNormalized("same");
  isoPfPhotons03_pt100_BDT_bin0->DrawNormalized("same");  
  leg_pt100->Draw(); 
  c1.SaveAs((outputDir+"isoPfPhotons03_pt100_BDTbins_"+region+"_"+match+".png").c_str());
  c1.Clear();

  c1.Close();


}
