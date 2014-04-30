{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Wed Feb  5 21:49:40 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(0,0,1,1);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20);
   grae->SetName("divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE");
   grae->SetTitle("etaPhot_mc_Signal_EE_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-2.45,0.9329859);
   grae->SetPointError(0,0.05,0.05,0.002585812,0.002585812);
   grae->SetPoint(1,-2.35,0.9170159);
   grae->SetPointError(1,0.05,0.05,0.005722177,0.005722177);
   grae->SetPoint(2,-2.25,0.9284479);
   grae->SetPointError(2,0.05,0.05,0.002513488,0.002513488);
   grae->SetPoint(3,-2.15,0.944241);
   grae->SetPointError(3,0.05,0.05,0.002079481,0.002079481);
   grae->SetPoint(4,-2.05,0.9423874);
   grae->SetPointError(4,0.05,0.05,0.005338686,0.005338686);
   grae->SetPoint(5,-1.95,0.9537068);
   grae->SetPointError(5,0.05,0.05,0.001303549,0.001303549);
   grae->SetPoint(6,-1.85,0.9532051);
   grae->SetPointError(6,0.05,0.05,0.003453249,0.003453249);
   grae->SetPoint(7,-1.75,0.9621168);
   grae->SetPointError(7,0.05,0.05,0.0009638987,0.0009638987);
   grae->SetPoint(8,-1.65,0.9693001);
   grae->SetPointError(8,0.05,0.05,0.0007417114,0.0007417114);
   grae->SetPoint(9,-1.55,0.9678365);
   grae->SetPointError(9,0.05,0.05,0.001608283,0.001608283);
   grae->SetPoint(10,1.55,0.9742552);
   grae->SetPointError(10,0.05,0.05,0.0013327,0.0013327);
   grae->SetPoint(11,1.65,0.9655307);
   grae->SetPointError(11,0.05,0.05,0.0009391919,0.0009391919);
   grae->SetPoint(12,1.75,0.9532118);
   grae->SetPointError(12,0.05,0.05,0.003141725,0.003141725);
   grae->SetPoint(13,1.85,0.9585239);
   grae->SetPointError(13,0.05,0.05,0.001130119,0.001130119);
   grae->SetPoint(14,1.95,0.9542875);
   grae->SetPointError(14,0.05,0.05,0.001255764,0.001255764);
   grae->SetPoint(15,2.05,0.9555735);
   grae->SetPointError(15,0.05,0.05,0.001372128,0.001372128);
   grae->SetPoint(16,2.15,0.9416856);
   grae->SetPointError(16,0.05,0.05,0.00198978,0.00198978);
   grae->SetPoint(17,2.25,0.9312113);
   grae->SetPointError(17,0.05,0.05,0.002257692,0.002257692);
   grae->SetPoint(18,2.35,0.919443);
   grae->SetPointError(18,0.05,0.05,0.00335591,0.00335591);
   grae->SetPoint(19,2.45,0.927886);
   grae->SetPointError(19,0.05,0.05,0.002918911,0.002918911);
   
   TH1F *Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4 = new TH1F("Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4","etaPhot_mc_Signal_EE_recoAndID",100,-3,3);
   Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4->SetMinimum(0);
   Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4->SetMaximum(1);
   Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4->SetDirectory(0);
   Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4->SetStats(0);
   grae->SetHistogram(Graph_divide_etaPhot_mc_EESignal__recoAndID_by_etaPhot_mc_Signal_EE4);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
