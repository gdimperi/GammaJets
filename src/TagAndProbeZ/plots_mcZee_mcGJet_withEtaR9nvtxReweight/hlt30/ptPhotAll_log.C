{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sun Sep 28 11:59:21 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.06526457,326.25,0.5873811);
   ptPhot->SetFillColor(0);
   ptPhot->SetBorderMode(0);
   ptPhot->SetBorderSize(2);
   ptPhot->SetTickx(1);
   ptPhot->SetLeftMargin(0.13);
   ptPhot->SetRightMargin(0.07);
   ptPhot->SetFrameFillStyle(0);
   ptPhot->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0,0,1,1);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetFrameBorderMode(0);
   
   TH1F *ptPhot_mc_Z_All__10 = new TH1F("ptPhot_mc_Z_All__10","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__10->SetBinContent(9,0.502863);
   ptPhot_mc_Z_All__10->SetBinContent(10,0.3082578);
   ptPhot_mc_Z_All__10->SetBinContent(11,0.113044);
   ptPhot_mc_Z_All__10->SetBinContent(12,0.04962875);
   ptPhot_mc_Z_All__10->SetBinContent(13,0.02620645);
   ptPhot_mc_Z_All__10->SetBinError(9,0.0006064284);
   ptPhot_mc_Z_All__10->SetBinError(10,0.0004711962);
   ptPhot_mc_Z_All__10->SetBinError(11,0.0002855016);
   ptPhot_mc_Z_All__10->SetBinError(12,0.0001893489);
   ptPhot_mc_Z_All__10->SetBinError(13,0.0001378618);
   ptPhot_mc_Z_All__10->SetMinimum(5.748131e-08);
   ptPhot_mc_Z_All__10->SetMaximum(2.816033);
   ptPhot_mc_Z_All__10->SetEntries(1581075);
   ptPhot_mc_Z_All__10->SetDirectory(0);
   ptPhot_mc_Z_All__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__10->SetMarkerColor(ci);
   ptPhot_mc_Z_All__10->SetMarkerStyle(20);
   ptPhot_mc_Z_All__10->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__10->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_All__10->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_All__10->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_All__10->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_All__11 = new TH1F("ptPhot_mc_Signal_All__11","ptPhot_mc_Signal_All",60,0,300);
   ptPhot_mc_Signal_All__11->SetBinContent(9,0.41235);
   ptPhot_mc_Signal_All__11->SetBinContent(10,0.2516643);
   ptPhot_mc_Signal_All__11->SetBinContent(11,0.1599358);
   ptPhot_mc_Signal_All__11->SetBinContent(12,0.1041431);
   ptPhot_mc_Signal_All__11->SetBinContent(13,0.07190679);
   ptPhot_mc_Signal_All__11->SetBinError(9,0.001759898);
   ptPhot_mc_Signal_All__11->SetBinError(10,0.001265382);
   ptPhot_mc_Signal_All__11->SetBinError(11,0.0009236326);
   ptPhot_mc_Signal_All__11->SetBinError(12,0.0006619324);
   ptPhot_mc_Signal_All__11->SetBinError(13,0.0005137944);
   ptPhot_mc_Signal_All__11->SetEntries(1617535);
   ptPhot_mc_Signal_All__11->SetDirectory(0);
   ptPhot_mc_Signal_All__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetLineColor(ci);
   ptPhot_mc_Signal_All__11->SetLineWidth(2);
   ptPhot_mc_Signal_All__11->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__12 = new TH1F("ptPhot_mc_Z_All__12","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__12->SetBinContent(9,0.502863);
   ptPhot_mc_Z_All__12->SetBinContent(10,0.3082578);
   ptPhot_mc_Z_All__12->SetBinContent(11,0.113044);
   ptPhot_mc_Z_All__12->SetBinContent(12,0.04962875);
   ptPhot_mc_Z_All__12->SetBinContent(13,0.02620645);
   ptPhot_mc_Z_All__12->SetBinError(9,0.0006064284);
   ptPhot_mc_Z_All__12->SetBinError(10,0.0004711962);
   ptPhot_mc_Z_All__12->SetBinError(11,0.0002855016);
   ptPhot_mc_Z_All__12->SetBinError(12,0.0001893489);
   ptPhot_mc_Z_All__12->SetBinError(13,0.0001378618);
   ptPhot_mc_Z_All__12->SetMinimum(5.748131e-08);
   ptPhot_mc_Z_All__12->SetMaximum(2.816033);
   ptPhot_mc_Z_All__12->SetEntries(1581075);
   ptPhot_mc_Z_All__12->SetDirectory(0);
   ptPhot_mc_Z_All__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_All__12->SetMarkerColor(ci);
   ptPhot_mc_Z_All__12->SetMarkerStyle(20);
   ptPhot_mc_Z_All__12->SetMarkerSize(0.7);
   ptPhot_mc_Z_All__12->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_All__12->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_All__12->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_All__12->Draw("PESAME");
   
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
   pad1->Modified();
   ptPhot->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "pad2",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0,0,1,1);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetGridy();
   pad2->SetBottomMargin(0.2);
   pad2->SetFrameBorderMode(0);
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_All",60,0,300);
   ratio->SetBinContent(9,1.219505);
   ratio->SetBinContent(10,1.224877);
   ratio->SetBinContent(11,0.7068086);
   ratio->SetBinContent(12,0.4765437);
   ratio->SetBinContent(13,0.3644502);
   ratio->SetBinError(9,0.0054086);
   ratio->SetBinError(10,0.006437062);
   ratio->SetBinError(11,0.004455105);
   ratio->SetBinError(12,0.003532701);
   ratio->SetBinError(13,0.003233745);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(140451.3);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,300,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_All",60,0,300);
   ratio->SetBinContent(9,1.219505);
   ratio->SetBinContent(10,1.224877);
   ratio->SetBinContent(11,0.7068086);
   ratio->SetBinContent(12,0.4765437);
   ratio->SetBinContent(13,0.3644502);
   ratio->SetBinError(9,0.0054086);
   ratio->SetBinError(10,0.006437062);
   ratio->SetBinError(11,0.004455105);
   ratio->SetBinError(12,0.003532701);
   ratio->SetBinError(13,0.003233745);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(140451.3);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   ptPhot->cd();
   ptPhot->Modified();
   ptPhot->cd();
   ptPhot->SetSelected(ptPhot);
}
