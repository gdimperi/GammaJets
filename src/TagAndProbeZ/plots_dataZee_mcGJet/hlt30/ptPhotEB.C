{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 18:09:29 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04731645,326.25,0.425848);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_dataZ_EB__7 = new TH1F("ptPhot_dataZ_EB__7","ptPhot_dataZ_EB",60,0,300);
   ptPhot_dataZ_EB__7->SetBinContent(9,0.3904746);
   ptPhot_dataZ_EB__7->SetBinContent(10,0.2537389);
   ptPhot_dataZ_EB__7->SetBinContent(11,0.1656756);
   ptPhot_dataZ_EB__7->SetBinContent(12,0.1116998);
   ptPhot_dataZ_EB__7->SetBinContent(13,0.07841107);
   ptPhot_dataZ_EB__7->SetBinError(9,0.003190637);
   ptPhot_dataZ_EB__7->SetBinError(10,0.002633006);
   ptPhot_dataZ_EB__7->SetBinError(11,0.002701564);
   ptPhot_dataZ_EB__7->SetBinError(12,0.00261941);
   ptPhot_dataZ_EB__7->SetBinError(13,0.002518964);
   ptPhot_dataZ_EB__7->SetEntries(53105);
   ptPhot_dataZ_EB__7->SetDirectory(0);
   ptPhot_dataZ_EB__7->SetStats(0);
   ptPhot_dataZ_EB__7->SetMarkerStyle(20);
   ptPhot_dataZ_EB__7->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__7->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__8 = new TH1F("ptPhot_mc_Signal_EB__8","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__8->SetBinContent(9,0.396226);
   ptPhot_mc_Signal_EB__8->SetBinContent(10,0.2526188);
   ptPhot_mc_Signal_EB__8->SetBinContent(11,0.1649032);
   ptPhot_mc_Signal_EB__8->SetBinContent(12,0.1097666);
   ptPhot_mc_Signal_EB__8->SetBinContent(13,0.07648544);
   ptPhot_mc_Signal_EB__8->SetBinError(9,0.00237459);
   ptPhot_mc_Signal_EB__8->SetBinError(10,0.001752864);
   ptPhot_mc_Signal_EB__8->SetBinError(11,0.001291758);
   ptPhot_mc_Signal_EB__8->SetBinError(12,0.0009316857);
   ptPhot_mc_Signal_EB__8->SetBinError(13,0.0007217295);
   ptPhot_mc_Signal_EB__8->SetEntries(836234);
   ptPhot_mc_Signal_EB__8->SetDirectory(0);
   ptPhot_mc_Signal_EB__8->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EB__8->SetLineColor(ci);
   ptPhot_mc_Signal_EB__8->SetLineWidth(2);
   ptPhot_mc_Signal_EB__8->Draw("HSAME");
   
   TH1F *ptPhot_dataZ_EB__9 = new TH1F("ptPhot_dataZ_EB__9","ptPhot_dataZ_EB",60,0,300);
   ptPhot_dataZ_EB__9->SetBinContent(9,0.3904746);
   ptPhot_dataZ_EB__9->SetBinContent(10,0.2537389);
   ptPhot_dataZ_EB__9->SetBinContent(11,0.1656756);
   ptPhot_dataZ_EB__9->SetBinContent(12,0.1116998);
   ptPhot_dataZ_EB__9->SetBinContent(13,0.07841107);
   ptPhot_dataZ_EB__9->SetBinError(9,0.003190637);
   ptPhot_dataZ_EB__9->SetBinError(10,0.002633006);
   ptPhot_dataZ_EB__9->SetBinError(11,0.002701564);
   ptPhot_dataZ_EB__9->SetBinError(12,0.00261941);
   ptPhot_dataZ_EB__9->SetBinError(13,0.002518964);
   ptPhot_dataZ_EB__9->SetMinimum(0);
   ptPhot_dataZ_EB__9->SetMaximum(0.5466644);
   ptPhot_dataZ_EB__9->SetEntries(53105);
   ptPhot_dataZ_EB__9->SetDirectory(0);
   ptPhot_dataZ_EB__9->SetStats(0);
   ptPhot_dataZ_EB__9->SetMarkerStyle(20);
   ptPhot_dataZ_EB__9->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__9->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_dataZ_EB__9->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_dataZ_EB__9->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_dataZ_EB__9->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.365083e-310,4.96863e+132,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("ptPhot_dataZ_EB","DataZ Z #rightarrow ee","PL");
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
