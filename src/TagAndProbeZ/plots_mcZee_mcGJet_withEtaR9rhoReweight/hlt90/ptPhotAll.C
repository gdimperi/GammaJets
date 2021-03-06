{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Wed Oct  1 11:18:45 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.02437754,326.25,0.2193979);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_All__7 = new TH1F("ptPhot_mc_Z_All__7","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__7->SetBinContent(22,0.1975394);
   ptPhot_mc_Z_All__7->SetBinContent(23,0.1466687);
   ptPhot_mc_Z_All__7->SetBinContent(24,0.128826);
   ptPhot_mc_Z_All__7->SetBinContent(25,0.1014766);
   ptPhot_mc_Z_All__7->SetBinContent(26,0.08537061);
   ptPhot_mc_Z_All__7->SetBinContent(27,0.07706736);
   ptPhot_mc_Z_All__7->SetBinContent(28,0.06471076);
   ptPhot_mc_Z_All__7->SetBinContent(29,0.0565167);
   ptPhot_mc_Z_All__7->SetBinContent(30,0.04513711);
   ptPhot_mc_Z_All__7->SetBinContent(31,0.03703522);
   ptPhot_mc_Z_All__7->SetBinContent(32,0.03213319);
   ptPhot_mc_Z_All__7->SetBinContent(33,0.02751829);
   ptPhot_mc_Z_All__7->SetBinError(22,0.004755324);
   ptPhot_mc_Z_All__7->SetBinError(23,0.004055182);
   ptPhot_mc_Z_All__7->SetBinError(24,0.00383818);
   ptPhot_mc_Z_All__7->SetBinError(25,0.003439);
   ptPhot_mc_Z_All__7->SetBinError(26,0.003140919);
   ptPhot_mc_Z_All__7->SetBinError(27,0.002977808);
   ptPhot_mc_Z_All__7->SetBinError(28,0.002714114);
   ptPhot_mc_Z_All__7->SetBinError(29,0.002533138);
   ptPhot_mc_Z_All__7->SetBinError(30,0.002258664);
   ptPhot_mc_Z_All__7->SetBinError(31,0.002033761);
   ptPhot_mc_Z_All__7->SetBinError(32,0.001894595);
   ptPhot_mc_Z_All__7->SetBinError(33,0.001766165);
   ptPhot_mc_Z_All__7->SetEntries(10171);
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
   ptPhot_mc_Signal_All__8->SetBinContent(22,0.2004365);
   ptPhot_mc_Signal_All__8->SetBinContent(23,0.1613049);
   ptPhot_mc_Signal_All__8->SetBinContent(24,0.1295722);
   ptPhot_mc_Signal_All__8->SetBinContent(25,0.1052848);
   ptPhot_mc_Signal_All__8->SetBinContent(26,0.08727723);
   ptPhot_mc_Signal_All__8->SetBinContent(27,0.07218276);
   ptPhot_mc_Signal_All__8->SetBinContent(28,0.05999228);
   ptPhot_mc_Signal_All__8->SetBinContent(29,0.05046637);
   ptPhot_mc_Signal_All__8->SetBinContent(30,0.04154933);
   ptPhot_mc_Signal_All__8->SetBinContent(31,0.03549016);
   ptPhot_mc_Signal_All__8->SetBinContent(32,0.03041868);
   ptPhot_mc_Signal_All__8->SetBinContent(33,0.0260249);
   ptPhot_mc_Signal_All__8->SetBinError(22,0.001849647);
   ptPhot_mc_Signal_All__8->SetBinError(23,0.001307021);
   ptPhot_mc_Signal_All__8->SetBinError(24,0.0009901684);
   ptPhot_mc_Signal_All__8->SetBinError(25,0.0007022379);
   ptPhot_mc_Signal_All__8->SetBinError(26,0.0006083856);
   ptPhot_mc_Signal_All__8->SetBinError(27,0.0005287686);
   ptPhot_mc_Signal_All__8->SetBinError(28,0.0004717228);
   ptPhot_mc_Signal_All__8->SetBinError(29,0.0004055109);
   ptPhot_mc_Signal_All__8->SetBinError(30,0.0003278272);
   ptPhot_mc_Signal_All__8->SetBinError(31,0.0002903876);
   ptPhot_mc_Signal_All__8->SetBinError(32,0.0002632007);
   ptPhot_mc_Signal_All__8->SetBinError(33,0.0002360972);
   ptPhot_mc_Signal_All__8->SetEntries(1709353);
   ptPhot_mc_Signal_All__8->SetDirectory(0);
   ptPhot_mc_Signal_All__8->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__8->SetLineColor(ci);
   ptPhot_mc_Signal_All__8->SetLineWidth(2);
   ptPhot_mc_Signal_All__8->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__9 = new TH1F("ptPhot_mc_Z_All__9","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__9->SetBinContent(22,0.1975394);
   ptPhot_mc_Z_All__9->SetBinContent(23,0.1466687);
   ptPhot_mc_Z_All__9->SetBinContent(24,0.128826);
   ptPhot_mc_Z_All__9->SetBinContent(25,0.1014766);
   ptPhot_mc_Z_All__9->SetBinContent(26,0.08537061);
   ptPhot_mc_Z_All__9->SetBinContent(27,0.07706736);
   ptPhot_mc_Z_All__9->SetBinContent(28,0.06471076);
   ptPhot_mc_Z_All__9->SetBinContent(29,0.0565167);
   ptPhot_mc_Z_All__9->SetBinContent(30,0.04513711);
   ptPhot_mc_Z_All__9->SetBinContent(31,0.03703522);
   ptPhot_mc_Z_All__9->SetBinContent(32,0.03213319);
   ptPhot_mc_Z_All__9->SetBinContent(33,0.02751829);
   ptPhot_mc_Z_All__9->SetBinError(22,0.004755324);
   ptPhot_mc_Z_All__9->SetBinError(23,0.004055182);
   ptPhot_mc_Z_All__9->SetBinError(24,0.00383818);
   ptPhot_mc_Z_All__9->SetBinError(25,0.003439);
   ptPhot_mc_Z_All__9->SetBinError(26,0.003140919);
   ptPhot_mc_Z_All__9->SetBinError(27,0.002977808);
   ptPhot_mc_Z_All__9->SetBinError(28,0.002714114);
   ptPhot_mc_Z_All__9->SetBinError(29,0.002533138);
   ptPhot_mc_Z_All__9->SetBinError(30,0.002258664);
   ptPhot_mc_Z_All__9->SetBinError(31,0.002033761);
   ptPhot_mc_Z_All__9->SetBinError(32,0.001894595);
   ptPhot_mc_Z_All__9->SetBinError(33,0.001766165);
   ptPhot_mc_Z_All__9->SetMinimum(0);
   ptPhot_mc_Z_All__9->SetMaximum(0.2765552);
   ptPhot_mc_Z_All__9->SetEntries(10171);
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
