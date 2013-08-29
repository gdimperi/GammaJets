
#include <TFile.h>
#include <TCanvas.h>
#include <TH2.h>
#include <string>
#include <iostream>

using namespace std;

void find_wp(string file){

  TFile* f_input = new TFile("plots_eff_withRho2/plots_mvaIdPhot.root");
  TH1D* h0 = (TH1D*)f_input->Get("mvaIdPhot_mc_Signal_EE_all");
  const Int_t nq = 3;
  Double_t xq[nq];
  Double_t yq[nq];
  double step=0.05;
  double temp=0;
  for(Int_t i=0; i<nq; i++){//step and temp needed to make xq[i] = 0.05, 0.1, 0.2
    xq[i] = temp + step;
    h0->GetQuantiles(nq, yq, xq);
    step = (i+1)*0.05;
    temp = xq[i];
  }
  for(Int_t i=0; i<nq; i++){
    cout<<xq[i]<<" "<<yq[i]<<endl;
    }
}
