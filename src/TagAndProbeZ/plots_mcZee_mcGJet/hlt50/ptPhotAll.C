{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Thu Sep 18 00:09:05 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04822428,326.25,0.4340185);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_All__7 = new TH1F("ptPhot_mc_Z_All__7","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__7->SetBinContent(14,0.3822359);
   ptPhot_mc_Z_All__7->SetBinContent(15,0.2456484);
   ptPhot_mc_Z_All__7->SetBinContent(16,0.1679907);
   ptPhot_mc_Z_All__7->SetBinContent(17,0.1180533);
   ptPhot_mc_Z_All__7->SetBinContent(18,0.08607177);
   ptPhot_mc_Z_All__7->SetBinError(14,0.00248542);
   ptPhot_mc_Z_All__7->SetBinError(15,0.001991738);
   ptPhot_mc_Z_All__7->SetBinError(16,0.001647294);
   ptPhot_mc_Z_All__7->SetBinError(17,0.001380933);
   ptPhot_mc_Z_All__7->SetBinError(18,0.001180608);
   ptPhot_mc_Z_All__7->SetEntries(64314);
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
   ptPhot_mc_Signal_All__8->SetBinContent(14,0.3416983);
   ptPhot_mc_Signal_All__8->SetBinContent(15,0.2442794);
   ptPhot_mc_Signal_All__8->SetBinContent(16,0.1793998);
   ptPhot_mc_Signal_All__8->SetBinContent(17,0.1325285);
   ptPhot_mc_Signal_All__8->SetBinContent(18,0.102094);
   ptPhot_mc_Signal_All__8->SetBinError(14,0.002709669);
   ptPhot_mc_Signal_All__8->SetBinError(15,0.002012682);
   ptPhot_mc_Signal_All__8->SetBinError(16,0.001547287);
   ptPhot_mc_Signal_All__8->SetBinError(17,0.001116659);
   ptPhot_mc_Signal_All__8->SetBinError(18,0.0008893087);
   ptPhot_mc_Signal_All__8->SetEntries(1081887);
   ptPhot_mc_Signal_All__8->SetDirectory(0);
   ptPhot_mc_Signal_All__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetLineColor(ci);
   ptPhot_mc_Signal_All__8->SetLineWidth(2);
   ptPhot_mc_Signal_All__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__9 = new TH1F("ptPhot_mc_Z_All__9","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__9->SetBinContent(14,0.3822359);
   ptPhot_mc_Z_All__9->SetBinContent(15,0.2456484);
   ptPhot_mc_Z_All__9->SetBinContent(16,0.1679907);
   ptPhot_mc_Z_All__9->SetBinContent(17,0.1180533);
   ptPhot_mc_Z_All__9->SetBinContent(18,0.08607177);
   ptPhot_mc_Z_All__9->SetBinError(14,0.00248542);
   ptPhot_mc_Z_All__9->SetBinError(15,0.001991738);
   ptPhot_mc_Z_All__9->SetBinError(16,0.001647294);
   ptPhot_mc_Z_All__9->SetBinError(17,0.001380933);
   ptPhot_mc_Z_All__9->SetBinError(18,0.001180608);
   ptPhot_mc_Z_All__9->SetMinimum(0);
   ptPhot_mc_Z_All__9->SetMaximum(0.5351302);
   ptPhot_mc_Z_All__9->SetEntries(64314);
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
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
