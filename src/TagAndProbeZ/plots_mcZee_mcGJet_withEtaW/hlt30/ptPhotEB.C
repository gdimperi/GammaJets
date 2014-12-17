{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Sep 27 22:34:50 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.06543698,326.25,0.5889328);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_EB__13 = new TH1F("ptPhot_mc_Z_EB__13","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__13->SetBinContent(9,0.502934);
   ptPhot_mc_Z_EB__13->SetBinContent(10,0.3036157);
   ptPhot_mc_Z_EB__13->SetBinContent(11,0.1127219);
   ptPhot_mc_Z_EB__13->SetBinContent(12,0.05205825);
   ptPhot_mc_Z_EB__13->SetBinContent(13,0.02867012);
   ptPhot_mc_Z_EB__13->SetBinError(9,0.0008587395);
   ptPhot_mc_Z_EB__13->SetBinError(10,0.0006618503);
   ptPhot_mc_Z_EB__13->SetBinError(11,0.0004039774);
   ptPhot_mc_Z_EB__13->SetBinError(12,0.0002758663);
   ptPhot_mc_Z_EB__13->SetBinError(13,0.0002058331);
   ptPhot_mc_Z_EB__13->SetEntries(787500);
   ptPhot_mc_Z_EB__13->SetDirectory(0);
   ptPhot_mc_Z_EB__13->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__13->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__13->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__13->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__13->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__13->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__14 = new TH1F("ptPhot_mc_Signal_EB__14","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__14->SetBinContent(9,0.396226);
   ptPhot_mc_Signal_EB__14->SetBinContent(10,0.2526188);
   ptPhot_mc_Signal_EB__14->SetBinContent(11,0.1649032);
   ptPhot_mc_Signal_EB__14->SetBinContent(12,0.1097666);
   ptPhot_mc_Signal_EB__14->SetBinContent(13,0.07648544);
   ptPhot_mc_Signal_EB__14->SetBinError(9,0.00237459);
   ptPhot_mc_Signal_EB__14->SetBinError(10,0.001752864);
   ptPhot_mc_Signal_EB__14->SetBinError(11,0.001291758);
   ptPhot_mc_Signal_EB__14->SetBinError(12,0.0009316857);
   ptPhot_mc_Signal_EB__14->SetBinError(13,0.0007217295);
   ptPhot_mc_Signal_EB__14->SetEntries(836234);
   ptPhot_mc_Signal_EB__14->SetDirectory(0);
   ptPhot_mc_Signal_EB__14->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__14->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__14->SetLineColor(ci);
   ptPhot_mc_Signal_EB__14->SetLineWidth(2);
   ptPhot_mc_Signal_EB__14->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EB__15 = new TH1F("ptPhot_mc_Z_EB__15","ptPhot_mc_Z_EB",60,0,300);
   ptPhot_mc_Z_EB__15->SetBinContent(9,0.502934);
   ptPhot_mc_Z_EB__15->SetBinContent(10,0.3036157);
   ptPhot_mc_Z_EB__15->SetBinContent(11,0.1127219);
   ptPhot_mc_Z_EB__15->SetBinContent(12,0.05205825);
   ptPhot_mc_Z_EB__15->SetBinContent(13,0.02867012);
   ptPhot_mc_Z_EB__15->SetBinError(9,0.0008587395);
   ptPhot_mc_Z_EB__15->SetBinError(10,0.0006618503);
   ptPhot_mc_Z_EB__15->SetBinError(11,0.0004039774);
   ptPhot_mc_Z_EB__15->SetBinError(12,0.0002758663);
   ptPhot_mc_Z_EB__15->SetBinError(13,0.0002058331);
   ptPhot_mc_Z_EB__15->SetMinimum(0);
   ptPhot_mc_Z_EB__15->SetMaximum(0.7041077);
   ptPhot_mc_Z_EB__15->SetEntries(787500);
   ptPhot_mc_Z_EB__15->SetDirectory(0);
   ptPhot_mc_Z_EB__15->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__15->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EB__15->SetMarkerColor(ci);
   ptPhot_mc_Z_EB__15->SetMarkerStyle(20);
   ptPhot_mc_Z_EB__15->SetMarkerSize(0.7);
   ptPhot_mc_Z_EB__15->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EB__15->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EB__15->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_EB__15->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,2.874273e-315,2.874316e-315,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","EB","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ptPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EB","signal #gamma + jet","F");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.94,"CMS Preliminary #sqrt{s}=8 TeV");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.037);
   tex->SetLineWidth(2);
   tex->Draw();
   ptPhot->Modified();
   ptPhot->cd();
   ptPhot->SetSelected(ptPhot);
}
