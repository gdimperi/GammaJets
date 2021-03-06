{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 17:29:59 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.05989706,326.25,0.5390735);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
   
   TH1F *ptPhot_dataZ_EB__7 = new TH1F("ptPhot_dataZ_EB__7","ptPhot_dataZ_EB",60,0,300);
   ptPhot_dataZ_EB__7->SetBinContent(9,0.4889239);
   ptPhot_dataZ_EB__7->SetBinContent(10,0.3063753);
   ptPhot_dataZ_EB__7->SetBinContent(11,0.1178897);
   ptPhot_dataZ_EB__7->SetBinContent(12,0.05579524);
   ptPhot_dataZ_EB__7->SetBinContent(13,0.03101589);
   ptPhot_dataZ_EB__7->SetBinError(9,0.001231443);
   ptPhot_dataZ_EB__7->SetBinError(10,0.0009683027);
   ptPhot_dataZ_EB__7->SetBinError(11,0.0005958905);
   ptPhot_dataZ_EB__7->SetBinError(12,0.0004077397);
   ptPhot_dataZ_EB__7->SetBinError(13,0.0003003749);
   ptPhot_dataZ_EB__7->SetEntries(533189);
   ptPhot_dataZ_EB__7->SetDirectory(0);
   ptPhot_dataZ_EB__7->SetStats(0);
   ptPhot_dataZ_EB__7->SetMarkerStyle(20);
   ptPhot_dataZ_EB__7->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__7->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EB__8 = new TH1F("ptPhot_mc_Signal_EB__8","ptPhot_mc_Signal_EB",60,0,300);
   ptPhot_mc_Signal_EB__8->SetBinContent(22,0.1929361);
   ptPhot_mc_Signal_EB__8->SetBinContent(23,0.1587142);
   ptPhot_mc_Signal_EB__8->SetBinContent(24,0.1287216);
   ptPhot_mc_Signal_EB__8->SetBinContent(25,0.105088);
   ptPhot_mc_Signal_EB__8->SetBinContent(26,0.08795859);
   ptPhot_mc_Signal_EB__8->SetBinContent(27,0.07295357);
   ptPhot_mc_Signal_EB__8->SetBinContent(28,0.06190776);
   ptPhot_mc_Signal_EB__8->SetBinContent(29,0.05168139);
   ptPhot_mc_Signal_EB__8->SetBinContent(30,0.04340463);
   ptPhot_mc_Signal_EB__8->SetBinContent(31,0.03688936);
   ptPhot_mc_Signal_EB__8->SetBinContent(32,0.03189266);
   ptPhot_mc_Signal_EB__8->SetBinContent(33,0.02785216);
   ptPhot_mc_Signal_EB__8->SetBinError(22,0.001958993);
   ptPhot_mc_Signal_EB__8->SetBinError(23,0.001507613);
   ptPhot_mc_Signal_EB__8->SetBinError(24,0.001032429);
   ptPhot_mc_Signal_EB__8->SetBinError(25,0.0008458023);
   ptPhot_mc_Signal_EB__8->SetBinError(26,0.0007493154);
   ptPhot_mc_Signal_EB__8->SetBinError(27,0.0006252217);
   ptPhot_mc_Signal_EB__8->SetBinError(28,0.0005926454);
   ptPhot_mc_Signal_EB__8->SetBinError(29,0.0004793943);
   ptPhot_mc_Signal_EB__8->SetBinError(30,0.0004094691);
   ptPhot_mc_Signal_EB__8->SetBinError(31,0.0003382839);
   ptPhot_mc_Signal_EB__8->SetBinError(32,0.0003189249);
   ptPhot_mc_Signal_EB__8->SetBinError(33,0.0003152081);
   ptPhot_mc_Signal_EB__8->SetEntries(1049663);
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
   ptPhot_dataZ_EB__9->SetBinContent(9,0.4889239);
   ptPhot_dataZ_EB__9->SetBinContent(10,0.3063753);
   ptPhot_dataZ_EB__9->SetBinContent(11,0.1178897);
   ptPhot_dataZ_EB__9->SetBinContent(12,0.05579524);
   ptPhot_dataZ_EB__9->SetBinContent(13,0.03101589);
   ptPhot_dataZ_EB__9->SetBinError(9,0.001231443);
   ptPhot_dataZ_EB__9->SetBinError(10,0.0009683027);
   ptPhot_dataZ_EB__9->SetBinError(11,0.0005958905);
   ptPhot_dataZ_EB__9->SetBinError(12,0.0004077397);
   ptPhot_dataZ_EB__9->SetBinError(13,0.0003003749);
   ptPhot_dataZ_EB__9->SetMinimum(0);
   ptPhot_dataZ_EB__9->SetMaximum(0.6844935);
   ptPhot_dataZ_EB__9->SetEntries(533189);
   ptPhot_dataZ_EB__9->SetDirectory(0);
   ptPhot_dataZ_EB__9->SetStats(0);
   ptPhot_dataZ_EB__9->SetMarkerStyle(20);
   ptPhot_dataZ_EB__9->SetMarkerSize(0.7);
   ptPhot_dataZ_EB__9->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_dataZ_EB__9->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_dataZ_EB__9->GetYaxis()->SetTitleOffset(1.5);
   ptPhot_dataZ_EB__9->Draw("PESAME");
   
   TLegend *leg = new TLegend(8.926861e-11,4.448918e-12,2.023542e-13,1.412939e-14,NULL,"brNDC");
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
