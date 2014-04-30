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

void makePlot_mvaIso(int isEB, int hlt){

  gStyle->SetOptStat(0);
  
  char filename[100];
  TFile* inputFile;
  if(isEB){
    sprintf(filename, "histo_v6/genIso4/mvaIso_hlt%d_histo_EB.root", hlt);
    inputFile = new TFile(filename, "READ");
    
  }
  else if(!isEB) {
    sprintf(filename, "histo_v6/genIso4/mvaIso_hlt%d_histo_EE.root", hlt);
    inputFile = new TFile(filename, "READ");
    
  }

  TH2F* correl_plot_data          = (TH2F*)inputFile->Get("correl_plot_data");
  TH2F* correl_plot_mc            = (TH2F*)inputFile->Get("correl_plot_mc");
  correl_plot_data      ->GetYaxis()->SetTitle("combined PF iso 03  [GeV]");
  correl_plot_mc        ->GetYaxis()->SetTitle("combined PF iso 03  [GeV]");

  TProfile* profile_correl_plot_data          = (TProfile*)inputFile->Get("profile_correl_plot_data");		
  TProfile* profile_correl_plot_mc            = (TProfile*)inputFile->Get("profile_correl_plot_mc");		

  //correl isoFPR with BDT
  TH2F* correl_plot_isoFPR_data        = (TH2F*)inputFile->Get("correl_plot_isoFPR_data");
  TH2F* correl_plot_isoFPR_mc          = (TH2F*)inputFile->Get("correl_plot_isoFPR_mc");
  correl_plot_isoFPR_data        ->GetYaxis()->SetTitle("combined PF iso 03 with FPR [GeV]");
  correl_plot_isoFPR_mc          ->GetYaxis()->SetTitle("combined PF iso 03 with FPR [GeV]");

  TProfile* profile_correl_plot_isoFPR_data = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR_data");	
  TProfile* profile_correl_plot_isoFPR_mc   = (TProfile*)inputFile->Get("profile_correl_plot_isoFPR_mc");	

  
  if(hlt==30)
    cout << "*******  40 < pt < 65 *********" << endl;
  if(hlt==50)
    cout << "*******  65 < pt < 90 *********" << endl;
  if(hlt==75)
    cout << "*******  90 < pt < 105 *********" << endl;
  if(hlt==90)
    cout << "*******  105 < pt < 165 *********" << endl;
  if(hlt==135)
    cout << "*******  165 <  pt < 180 *********" << endl;


  //**************** drawing on canvas ******************
  string outputDir;
  //if(hlt==0)  outputDir = "histo_v6/genIso4/all/";
  if(hlt==30)   outputDir = "histo_v6/genIso4/HLT30_bkg/";
  //else if(hlt==50)   outputDir = "histo_v6/genIso4/HLT50/";
  //else if(hlt==75)   outputDir = "histo_v6/genIso4/HLT75/";
  //else if(hlt==90)   outputDir = "histo_v6/genIso4/HLT90/";
  //else if(hlt==135)  outputDir = "histo_v6/genIso4/HLT135/";
  //else if(hlt==150)  outputDir = "histo_v6/genIso4/HLT150/";

  TCanvas c1,c2;
  string region;
  
  if(isEB) region = "EB";
  else region = "EE";  

  if(isEB){
    correl_plot_data			->GetXaxis()->SetRangeUser(-1.,0.83548);
    correl_plot_mc  			->GetXaxis()->SetRangeUser(-1.,0.83548);
    correl_plot_isoFPR_data		->GetXaxis()->SetRangeUser(-1.,0.83548);
    correl_plot_isoFPR_mc  		->GetXaxis()->SetRangeUser(-1.,0.83548);
    profile_correl_plot_data		->GetXaxis()->SetRangeUser(-1.,0.83548);
    profile_correl_plot_mc		->GetXaxis()->SetRangeUser(-1.,0.83548);
    profile_correl_plot_isoFPR_data	->GetXaxis()->SetRangeUser(-1.,0.83548);
    profile_correl_plot_isoFPR_mc	->GetXaxis()->SetRangeUser(-1.,0.83548);
  }
  else{
    correl_plot_data			->GetXaxis()->SetRangeUser(-1.,0.87382);
    correl_plot_mc  			->GetXaxis()->SetRangeUser(-1.,0.87382);
    correl_plot_isoFPR_data		->GetXaxis()->SetRangeUser(-1.,0.87382);
    correl_plot_isoFPR_mc  		->GetXaxis()->SetRangeUser(-1.,0.87382);
    profile_correl_plot_data		->GetXaxis()->SetRangeUser(-1.,0.87382);
    profile_correl_plot_mc		->GetXaxis()->SetRangeUser(-1.,0.87382);
    profile_correl_plot_isoFPR_data	->GetXaxis()->SetRangeUser(-1.,0.87382);
    profile_correl_plot_isoFPR_mc	->GetXaxis()->SetRangeUser(-1.,0.87382);
  }


  c2.cd();
  c2.SetLogz();

  correl_plot_data->Draw("COLZ");
  profile_correl_plot_data->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_data.png").c_str());
  c2.Clear();
  
  correl_plot_mc->Draw("COLZ");
  profile_correl_plot_mc->Draw("ESAME");

  c2.SaveAs((outputDir+"correl_mvaIso_"+region+"_mc.png").c_str());
  c2.Clear();
  
  //correl iso FPR with BDT
  correl_plot_isoFPR_data->Draw("COLZ");
  profile_correl_plot_isoFPR_data->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_data.png").c_str());
  c2.Clear();

  correl_plot_isoFPR_mc->Draw("COLZ");
  profile_correl_plot_isoFPR_mc->Draw("ESAME");
  c2.SaveAs((outputDir+"correl_mvaIsoFPR_"+region+"_mc.png").c_str());
  c2.Clear();
  c2.Close();
    

  ///////////////

  profile_correl_plot_data		->GetYaxis()->SetRangeUser(-3.,6.);
  profile_correl_plot_mc		->GetYaxis()->SetRangeUser(-3.,6.);
  profile_correl_plot_isoFPR_data	->GetYaxis()->SetRangeUser(-3.,6.);
  profile_correl_plot_isoFPR_mc		->GetYaxis()->SetRangeUser(-3.,6.);

  profile_correl_plot_mc->SetMarkerColor(kBlue);
  profile_correl_plot_data->SetMarkerColor(kRed);
  profile_correl_plot_isoFPR_mc->SetMarkerColor(kBlue);
  profile_correl_plot_isoFPR_data->SetMarkerColor(kRed);
  
  TLegend* leg = new TLegend(0.6,0.7,0.85,0.85);
  leg->SetFillColor(0); 
  leg->SetBorderSize(0);
  leg->SetTextSize(0.045);

  leg->AddEntry(profile_correl_plot_isoFPR_data, "data", "p");
  leg->AddEntry(profile_correl_plot_isoFPR_mc, "mc", "p");


  c1.cd();

  profile_correl_plot_mc->Draw("p");
  profile_correl_plot_data->Draw("psame");
  leg->Draw();
  c1.SaveAs((outputDir+"profile_dataMC_isoMva"+region+".png").c_str());
  c1.Clear();

  profile_correl_plot_isoFPR_mc->Draw("p");
  profile_correl_plot_isoFPR_data->Draw("psame");
  leg->Draw();
  c1.SaveAs((outputDir+"profile_dataMC_isoFPRmva"+region+".png").c_str());
  c1.Clear();

  c1.Close();


}
