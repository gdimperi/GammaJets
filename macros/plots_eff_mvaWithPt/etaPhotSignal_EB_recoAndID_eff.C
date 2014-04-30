{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Wed Feb  5 21:43:00 2014) by ROOT version5.32/00
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
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(30);
   grae->SetName("divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB");
   grae->SetTitle("etaPhot_mc_Signal_EB_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#00ffff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-1.45,0.7324729);
   grae->SetPointError(0,0.05,0.05,0.00400347,0.00400347);
   grae->SetPoint(1,-1.35,0.6717891);
   grae->SetPointError(1,0.05,0.05,0.002646929,0.002646929);
   grae->SetPoint(2,-1.25,0.6482363);
   grae->SetPointError(2,0.05,0.05,0.002398787,0.002398787);
   grae->SetPoint(3,-1.15,0.6856218);
   grae->SetPointError(3,0.05,0.05,0.002154224,0.002154224);
   grae->SetPoint(4,-1.05,0.6812274);
   grae->SetPointError(4,0.05,0.05,0.001907865,0.001907865);
   grae->SetPoint(5,-0.95,0.6746459);
   grae->SetPointError(5,0.05,0.05,0.001790431,0.001790431);
   grae->SetPoint(6,-0.85,0.669016);
   grae->SetPointError(6,0.05,0.05,0.001679757,0.001679757);
   grae->SetPoint(7,-0.75,0.6597486);
   grae->SetPointError(7,0.05,0.05,0.001671212,0.001671212);
   grae->SetPoint(8,-0.65,0.6793569);
   grae->SetPointError(8,0.05,0.05,0.001516515,0.001516515);
   grae->SetPoint(9,-0.55,0.656561);
   grae->SetPointError(9,0.05,0.05,0.00148635,0.00148635);
   grae->SetPoint(10,-0.45,0.6238129);
   grae->SetPointError(10,0.05,0.05,0.001499658,0.001499658);
   grae->SetPoint(11,-0.35,0.6378411);
   grae->SetPointError(11,0.05,0.05,0.001452353,0.001452353);
   grae->SetPoint(12,-0.25,0.6429534);
   grae->SetPointError(12,0.05,0.05,0.001424522,0.001424522);
   grae->SetPoint(13,-0.15,0.601091);
   grae->SetPointError(13,0.05,0.05,0.001441527,0.001441527);
   grae->SetPoint(14,-0.05,0.4933318);
   grae->SetPointError(14,0.05,0.05,0.00147726,0.00147726);
   grae->SetPoint(15,0.05,0.6269775);
   grae->SetPointError(15,0.05,0.05,0.001427964,0.001427964);
   grae->SetPoint(16,0.15,0.5979137);
   grae->SetPointError(16,0.05,0.05,0.001430087,0.001430087);
   grae->SetPoint(17,0.25,0.6331945);
   grae->SetPointError(17,0.05,0.05,0.00141725,0.00141725);
   grae->SetPoint(18,0.35,0.6291528);
   grae->SetPointError(18,0.05,0.05,0.00144504,0.00144504);
   grae->SetPoint(19,0.45,0.5992608);
   grae->SetPointError(19,0.05,0.05,0.001520606,0.001520606);
   grae->SetPoint(20,0.55,0.6476565);
   grae->SetPointError(20,0.05,0.05,0.001488775,0.001488775);
   grae->SetPoint(21,0.65,0.6827853);
   grae->SetPointError(21,0.05,0.05,0.001506223,0.001506223);
   grae->SetPoint(22,0.75,0.6990591);
   grae->SetPointError(22,0.05,0.05,0.00161356,0.00161356);
   grae->SetPoint(23,0.85,0.7164233);
   grae->SetPointError(23,0.05,0.05,0.001601686,0.001601686);
   grae->SetPoint(24,0.95,0.7370228);
   grae->SetPointError(24,0.05,0.05,0.00168981,0.00168981);
   grae->SetPoint(25,1.05,0.756397);
   grae->SetPointError(25,0.05,0.05,0.001784856,0.001784856);
   grae->SetPoint(26,1.15,0.7961602);
   grae->SetPointError(26,0.05,0.05,0.001872462,0.001872462);
   grae->SetPoint(27,1.25,0.7920536);
   grae->SetPointError(27,0.05,0.05,0.002079169,0.002079169);
   grae->SetPoint(28,1.35,0.7871235);
   grae->SetPointError(28,0.05,0.05,0.002311834,0.002311834);
   grae->SetPoint(29,1.45,0.8398097);
   grae->SetPointError(29,0.05,0.05,0.003543798,0.003543798);
   
   TH1F *Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4 = new TH1F("Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4","etaPhot_mc_Signal_EB_recoAndID",100,-1.8,1.8);
   Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4->SetMinimum(0);
   Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4->SetMaximum(1);
   Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4->SetDirectory(0);
   Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4->SetStats(0);
   grae->SetHistogram(Graph_divide_etaPhot_mc_EBSignal__recoAndID_by_etaPhot_mc_Signal_EB4);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
