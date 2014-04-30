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


vector<int> calculateBinEdge(TH1F* BDToutput, int nstep);
vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge);


vector<int> calculateBinEdge(TH1F* BDToutput, int nstep) {

  vector<int> binEdge;
  binEdge.push_back(1); 
  int bin_edge=1;
  double entries = (double)BDToutput->Integral(0,(int)BDToutput->GetNbinsX());
  double step_entries = (double)entries/(double)nstep;
  double sum_content=0;
  double total(0), total_sum(0);
  int i=1; int i_bdt_bin=0;
  std::cout << "entries = " << entries << "    entries per step = " << step_entries << std::endl;
  std::cout << "nBins = " << (int)BDToutput->GetNbinsX() << std::endl;
  std::cout << "binEdge[0] = " << 1 << std::endl;

  for(i=1; i<=(int)BDToutput->GetNbinsX(); i++){
    //std::cout << i << "bin content = " << (int)BDToutput->GetBinContent(i) << std::endl;
    sum_content+=(double)BDToutput->GetBinContent(i);
    total+=(double)BDToutput->GetBinContent(i);

    if(sum_content>step_entries) {
      cout << "sum content precedent bin = " << (sum_content-(double)BDToutput->GetBinContent(i)) << " <   step_entries = " << step_entries << endl;
      //if(i_bdt_bin<10) {
      bin_edge=i+1;
      i_bdt_bin++;
      std::cout<< "sum_content = " << sum_content << std::endl;
      std::cout<< "bin edge " << i_bdt_bin << " = " << bin_edge << std::endl;
      binEdge.push_back(bin_edge);
      total_sum+=sum_content;
      sum_content=0;
      //}
      if(i_bdt_bin==10) cout << "ERROR: unexpected extra bin!!" << endl;


    }
        
  }

  total_sum+=sum_content;
  std::cout << "total sum (should be = entries) = " << total_sum << endl;
  std::cout << "total = " << total << endl;
  std::cout << "final bin sum_content = " << sum_content << endl;   
  std::cout << "n mva bins = " << i_bdt_bin << endl;
  
 
  return binEdge;
}

vector<double> calculateBDTEdge(TH1F* BDToutput, vector<int> binEdge){
 
  vector<double> BDTEdge;
  double BDT_edge;
  for (int i=0; i<binEdge.size(); i++){
    BDT_edge =  (double)BDToutput->GetBinLowEdge(binEdge[i]);
    BDTEdge.push_back( BDT_edge );
    std::cout<< "BDT edge = " << BDT_edge << std::endl;
  }

  return BDTEdge;
}

