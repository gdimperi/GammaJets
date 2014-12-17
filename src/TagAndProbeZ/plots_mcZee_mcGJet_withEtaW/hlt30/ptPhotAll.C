{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Sep 27 22:34:48 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.06036632,326.25,0.5432968);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_All__7 = new TH1F("ptPhot_mc_Z_All__7","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__7->SetBinContent(9,0.5041912);
   ptPhot_mc_Z_All__7->SetBinContent(10,0.3065865);
   ptPhot_mc_Z_All__7->SetBinContent(11,0.11263);
   ptPhot_mc_Z_All__7->SetBinContent(12,0.05000274);
   ptPhot_mc_Z_All__7->SetBinContent(13,0.02658963);
   ptPhot_mc_Z_All__7->SetBinError(9,0.0006083669);
   ptPhot_mc_Z_All__7->SetBinError(10,0.0004694047);
   ptPhot_mc_Z_All__7->SetBinError(11,0.000284768);
   ptPhot_mc_Z_All__7->SetBinError(12,0.0001908609);
   ptPhot_mc_Z_All__7->SetBinError(13,0.0001397975);
   ptPhot_mc_Z_All__7->SetEntries(1581076);
   ptPhot_mc_Z_All__7->SetDirectory(0);
   ptPhot_mc_Z_All__7->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__7->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__7->SetMarkerColor(ci);
   ptPhot_mc_Z_All__7->SetMarkerStyle(20);
   ptPhot_mc_Z_All__7->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__7->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_All__8 = new TH1F("ptPhot_mc_Signal_All__8","ptPhot_mc_Signal_All",60,0,300);
   ptPhot_mc_Signal_All__8->SetBinContent(9,0.41235);
   ptPhot_mc_Signal_All__8->SetBinContent(10,0.2516643);
   ptPhot_mc_Signal_All__8->SetBinContent(11,0.1599358);
   ptPhot_mc_Signal_All__8->SetBinContent(12,0.1041431);
   ptPhot_mc_Signal_All__8->SetBinContent(13,0.07190679);
   ptPhot_mc_Signal_All__8->SetBinError(9,0.001759898);
   ptPhot_mc_Signal_All__8->SetBinError(10,0.001265382);
   ptPhot_mc_Signal_All__8->SetBinError(11,0.0009236326);
   ptPhot_mc_Signal_All__8->SetBinError(12,0.0006619324);
   ptPhot_mc_Signal_All__8->SetBinError(13,0.0005137944);
   ptPhot_mc_Signal_All__8->SetEntries(1617535);
   ptPhot_mc_Signal_All__8->SetDirectory(0);
   ptPhot_mc_Signal_All__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetLineColor(ci);
   ptPhot_mc_Signal_All__8->SetLineWidth(2);
   ptPhot_mc_Signal_All__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__9 = new TH1F("ptPhot_mc_Z_All__9","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__9->SetBinContent(9,0.5041912);
   ptPhot_mc_Z_All__9->SetBinContent(10,0.3065865);
   ptPhot_mc_Z_All__9->SetBinContent(11,0.11263);
   ptPhot_mc_Z_All__9->SetBinContent(12,0.05000274);
   ptPhot_mc_Z_All__9->SetBinContent(13,0.02658963);
   ptPhot_mc_Z_All__9->SetBinError(9,0.0006083669);
   ptPhot_mc_Z_All__9->SetBinError(10,0.0004694047);
   ptPhot_mc_Z_All__9->SetBinError(11,0.000284768);
   ptPhot_mc_Z_All__9->SetBinError(12,0.0001908609);
   ptPhot_mc_Z_All__9->SetBinError(13,0.0001397975);
   ptPhot_mc_Z_All__9->SetMinimum(0);
   ptPhot_mc_Z_All__9->SetMaximum(0.7058676);
   ptPhot_mc_Z_All__9->SetEntries(1581076);
   ptPhot_mc_Z_All__9->SetDirectory(0);
   ptPhot_mc_Z_All__9->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__9->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__9->SetMarkerColor(ci);
   ptPhot_mc_Z_All__9->SetMarkerStyle(20);
   ptPhot_mc_Z_All__9->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__9->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_All__9->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_All__9->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_mc_Z_All__9->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,1.895892e-315,3.443837e-315,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","All","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ptPhot_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_All","signal #gamma + jet","F");
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
