{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Mon Mar  3 23:30:08 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,3.056729,3.525,4.352475);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(30);
   grae->SetName("divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB");
   grae->SetTitle("etaPhot_mc_Bkg_EB_recoAndID");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff00ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);
   grae->SetPoint(0,-1.45,0.4426139);
   grae->SetPointError(0,0.05,0.05,0.03724024,0.03724024);
   grae->SetPoint(1,-1.35,0.3980718);
   grae->SetPointError(1,0.05,0.05,0.0149661,0.0149661);
   grae->SetPoint(2,-1.25,0.3797445);
   grae->SetPointError(2,0.05,0.05,0.02072367,0.02072367);
   grae->SetPoint(3,-1.15,0.4118425);
   grae->SetPointError(3,0.05,0.05,0.01976268,0.01976268);
   grae->SetPoint(4,-1.05,0.3836944);
   grae->SetPointError(4,0.05,0.05,0.01932315,0.01932315);
   grae->SetPoint(5,-0.95,0.3809055);
   grae->SetPointError(5,0.05,0.05,0.02139765,0.02139765);
   grae->SetPoint(6,-0.85,0.3395238);
   grae->SetPointError(6,0.05,0.05,0.01269106,0.01269106);
   grae->SetPoint(7,-0.75,0.366314);
   grae->SetPointError(7,0.05,0.05,0.02017903,0.02017903);
   grae->SetPoint(8,-0.65,0.3631179);
   grae->SetPointError(8,0.05,0.05,0.01738842,0.01738842);
   grae->SetPoint(9,-0.55,0.341258);
   grae->SetPointError(9,0.05,0.05,0.0116436,0.0116436);
   grae->SetPoint(10,-0.45,0.3513276);
   grae->SetPointError(10,0.05,0.05,0.02287761,0.02287761);
   grae->SetPoint(11,-0.35,0.329265);
   grae->SetPointError(11,0.05,0.05,0.01284398,0.01284398);
   grae->SetPoint(12,-0.25,0.3656386);
   grae->SetPointError(12,0.05,0.05,0.01974379,0.01974379);
   grae->SetPoint(13,-0.15,0.3272635);
   grae->SetPointError(13,0.05,0.05,0.01421711,0.01421711);
   grae->SetPoint(14,-0.05,0.3887945);
   grae->SetPointError(14,0.05,0.05,0.02408947,0.02408947);
   grae->SetPoint(15,0.05,0.341122);
   grae->SetPointError(15,0.05,0.05,0.01734982,0.01734982);
   grae->SetPoint(16,0.15,0.3597383);
   grae->SetPointError(16,0.05,0.05,0.01137996,0.01137996);
   grae->SetPoint(17,0.25,0.3280121);
   grae->SetPointError(17,0.05,0.05,0.01323324,0.01323324);
   grae->SetPoint(18,0.35,0.3214063);
   grae->SetPointError(18,0.05,0.05,0.01166846,0.01166846);
   grae->SetPoint(19,0.45,0.3130619);
   grae->SetPointError(19,0.05,0.05,0.01870916,0.01870916);
   grae->SetPoint(20,0.55,0.3707311);
   grae->SetPointError(20,0.05,0.05,0.01943017,0.01943017);
   grae->SetPoint(21,0.65,0.3581814);
   grae->SetPointError(21,0.05,0.05,0.021598,0.021598);
   grae->SetPoint(22,0.75,0.3689957);
   grae->SetPointError(22,0.05,0.05,0.02281703,0.02281703);
   grae->SetPoint(23,0.85,0.3628793);
   grae->SetPointError(23,0.05,0.05,0.0159808,0.0159808);
   grae->SetPoint(24,0.95,0.3633001);
   grae->SetPointError(24,0.05,0.05,0.01735642,0.01735642);
   grae->SetPoint(25,1.05,0.3815109);
   grae->SetPointError(25,0.05,0.05,0.02165165,0.02165165);
   grae->SetPoint(26,1.15,0.4023365);
   grae->SetPointError(26,0.05,0.05,0.02196623,0.02196623);
   grae->SetPoint(27,1.25,0.3732933);
   grae->SetPointError(27,0.05,0.05,0.01624019,0.01624019);
   grae->SetPoint(28,1.35,0.3896256);
   grae->SetPointError(28,0.05,0.05,0.01876271,0.01876271);
   grae->SetPoint(29,1.45,0.4124263);
   grae->SetPointError(29,0.05,0.05,0.01802058,0.01802058);
   
   TH1F *Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12 = new TH1F("Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12","etaPhot_mc_Bkg_EB_recoAndID",100,-1.8,1.8);
   Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12->SetMinimum(0);
   Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12->SetMaximum(1);
   Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12->SetDirectory(0);
   Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12->SetStats(0);
   Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12->GetXaxis()->SetTitle("#gamma #eta");
   grae->SetHistogram(Graph_divide_etaPhot_mc_Bkg_EB_recoAndID_by_etaPhot_mc_Bkg_EB12);
   
   grae->Draw("ap");
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
