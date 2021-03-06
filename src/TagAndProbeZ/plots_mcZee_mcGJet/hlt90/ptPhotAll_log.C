{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Thu Sep 18 00:10:49 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.02622705,326.25,0.2360434);
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
   ptPhot_mc_Z_All__10->SetBinContent(22,0.1977987);
   ptPhot_mc_Z_All__10->SetBinContent(23,0.148562);
   ptPhot_mc_Z_All__10->SetBinContent(24,0.1288951);
   ptPhot_mc_Z_All__10->SetBinContent(25,0.1000406);
   ptPhot_mc_Z_All__10->SetBinContent(26,0.08488343);
   ptPhot_mc_Z_All__10->SetBinContent(27,0.07680886);
   ptPhot_mc_Z_All__10->SetBinContent(28,0.06472739);
   ptPhot_mc_Z_All__10->SetBinContent(29,0.0568767);
   ptPhot_mc_Z_All__10->SetBinContent(30,0.04491968);
   ptPhot_mc_Z_All__10->SetBinContent(31,0.03713287);
   ptPhot_mc_Z_All__10->SetBinContent(32,0.03192475);
   ptPhot_mc_Z_All__10->SetBinContent(33,0.02742992);
   ptPhot_mc_Z_All__10->SetBinError(22,0.004524275);
   ptPhot_mc_Z_All__10->SetBinError(23,0.003907102);
   ptPhot_mc_Z_All__10->SetBinError(24,0.003641617);
   ptPhot_mc_Z_All__10->SetBinError(25,0.003221389);
   ptPhot_mc_Z_All__10->SetBinError(26,0.002965656);
   ptPhot_mc_Z_All__10->SetBinError(27,0.002812908);
   ptPhot_mc_Z_All__10->SetBinError(28,0.002580043);
   ptPhot_mc_Z_All__10->SetBinError(29,0.002419952);
   ptPhot_mc_Z_All__10->SetBinError(30,0.002135977);
   ptPhot_mc_Z_All__10->SetBinError(31,0.001941095);
   ptPhot_mc_Z_All__10->SetBinError(32,0.001793259);
   ptPhot_mc_Z_All__10->SetBinError(33,0.001673507);
   ptPhot_mc_Z_All__10->SetMinimum(9.308457e-06);
   ptPhot_mc_Z_All__10->SetMaximum(1.107673);
   ptPhot_mc_Z_All__10->SetEntries(10171);
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
   ptPhot_mc_Signal_All__11->SetBinContent(22,0.2004365);
   ptPhot_mc_Signal_All__11->SetBinContent(23,0.1613049);
   ptPhot_mc_Signal_All__11->SetBinContent(24,0.1295722);
   ptPhot_mc_Signal_All__11->SetBinContent(25,0.1052848);
   ptPhot_mc_Signal_All__11->SetBinContent(26,0.08727723);
   ptPhot_mc_Signal_All__11->SetBinContent(27,0.07218276);
   ptPhot_mc_Signal_All__11->SetBinContent(28,0.05999228);
   ptPhot_mc_Signal_All__11->SetBinContent(29,0.05046637);
   ptPhot_mc_Signal_All__11->SetBinContent(30,0.04154933);
   ptPhot_mc_Signal_All__11->SetBinContent(31,0.03549016);
   ptPhot_mc_Signal_All__11->SetBinContent(32,0.03041868);
   ptPhot_mc_Signal_All__11->SetBinContent(33,0.0260249);
   ptPhot_mc_Signal_All__11->SetBinError(22,0.001849647);
   ptPhot_mc_Signal_All__11->SetBinError(23,0.001307021);
   ptPhot_mc_Signal_All__11->SetBinError(24,0.0009901684);
   ptPhot_mc_Signal_All__11->SetBinError(25,0.0007022379);
   ptPhot_mc_Signal_All__11->SetBinError(26,0.0006083856);
   ptPhot_mc_Signal_All__11->SetBinError(27,0.0005287686);
   ptPhot_mc_Signal_All__11->SetBinError(28,0.0004717228);
   ptPhot_mc_Signal_All__11->SetBinError(29,0.0004055109);
   ptPhot_mc_Signal_All__11->SetBinError(30,0.0003278272);
   ptPhot_mc_Signal_All__11->SetBinError(31,0.0002903876);
   ptPhot_mc_Signal_All__11->SetBinError(32,0.0002632007);
   ptPhot_mc_Signal_All__11->SetBinError(33,0.0002360972);
   ptPhot_mc_Signal_All__11->SetEntries(1709353);
   ptPhot_mc_Signal_All__11->SetDirectory(0);
   ptPhot_mc_Signal_All__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_All__11->SetLineColor(ci);
   ptPhot_mc_Signal_All__11->SetLineWidth(2);
   ptPhot_mc_Signal_All__11->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_All__12 = new TH1F("ptPhot_mc_Z_All__12","ptPhot_mc_Z_All",60,0,300);
   ptPhot_mc_Z_All__12->SetBinContent(22,0.1977987);
   ptPhot_mc_Z_All__12->SetBinContent(23,0.148562);
   ptPhot_mc_Z_All__12->SetBinContent(24,0.1288951);
   ptPhot_mc_Z_All__12->SetBinContent(25,0.1000406);
   ptPhot_mc_Z_All__12->SetBinContent(26,0.08488343);
   ptPhot_mc_Z_All__12->SetBinContent(27,0.07680886);
   ptPhot_mc_Z_All__12->SetBinContent(28,0.06472739);
   ptPhot_mc_Z_All__12->SetBinContent(29,0.0568767);
   ptPhot_mc_Z_All__12->SetBinContent(30,0.04491968);
   ptPhot_mc_Z_All__12->SetBinContent(31,0.03713287);
   ptPhot_mc_Z_All__12->SetBinContent(32,0.03192475);
   ptPhot_mc_Z_All__12->SetBinContent(33,0.02742992);
   ptPhot_mc_Z_All__12->SetBinError(22,0.004524275);
   ptPhot_mc_Z_All__12->SetBinError(23,0.003907102);
   ptPhot_mc_Z_All__12->SetBinError(24,0.003641617);
   ptPhot_mc_Z_All__12->SetBinError(25,0.003221389);
   ptPhot_mc_Z_All__12->SetBinError(26,0.002965656);
   ptPhot_mc_Z_All__12->SetBinError(27,0.002812908);
   ptPhot_mc_Z_All__12->SetBinError(28,0.002580043);
   ptPhot_mc_Z_All__12->SetBinError(29,0.002419952);
   ptPhot_mc_Z_All__12->SetBinError(30,0.002135977);
   ptPhot_mc_Z_All__12->SetBinError(31,0.001941095);
   ptPhot_mc_Z_All__12->SetBinError(32,0.001793259);
   ptPhot_mc_Z_All__12->SetBinError(33,0.001673507);
   ptPhot_mc_Z_All__12->SetMinimum(9.308457e-06);
   ptPhot_mc_Z_All__12->SetMaximum(1.107673);
   ptPhot_mc_Z_All__12->SetEntries(10171);
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
   
   TLegend *leg = new TLegend(5.253812e-11,6.663084e-12,7.096039e-13,2.140176e-14,NULL,"brNDC");
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
   ratio->SetBinContent(22,0.9868397);
   ratio->SetBinContent(23,0.9210017);
   ratio->SetBinContent(24,0.9947745);
   ratio->SetBinContent(25,0.9501903);
   ratio->SetBinContent(26,0.9725725);
   ratio->SetBinContent(27,1.064089);
   ratio->SetBinContent(28,1.078929);
   ratio->SetBinContent(29,1.127022);
   ratio->SetBinContent(30,1.081117);
   ratio->SetBinContent(31,1.046286);
   ratio->SetBinContent(32,1.049511);
   ratio->SetBinContent(33,1.053987);
   ratio->SetBinError(22,0.02433991);
   ratio->SetBinError(23,0.02534541);
   ratio->SetBinError(24,0.02911488);
   ratio->SetBinError(25,0.03124639);
   ratio->SetBinError(26,0.03464944);
   ratio->SetBinError(27,0.03974119);
   ratio->SetBinError(28,0.04383503);
   ratio->SetBinError(29,0.04879942);
   ratio->SetBinError(30,0.05211111);
   ratio->SetBinError(31,0.05535984);
   ratio->SetBinError(32,0.05964786);
   ratio->SetBinError(33,0.06501108);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(6409.2);
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
   ratio->SetBinContent(22,0.9868397);
   ratio->SetBinContent(23,0.9210017);
   ratio->SetBinContent(24,0.9947745);
   ratio->SetBinContent(25,0.9501903);
   ratio->SetBinContent(26,0.9725725);
   ratio->SetBinContent(27,1.064089);
   ratio->SetBinContent(28,1.078929);
   ratio->SetBinContent(29,1.127022);
   ratio->SetBinContent(30,1.081117);
   ratio->SetBinContent(31,1.046286);
   ratio->SetBinContent(32,1.049511);
   ratio->SetBinContent(33,1.053987);
   ratio->SetBinError(22,0.02433991);
   ratio->SetBinError(23,0.02534541);
   ratio->SetBinError(24,0.02911488);
   ratio->SetBinError(25,0.03124639);
   ratio->SetBinError(26,0.03464944);
   ratio->SetBinError(27,0.03974119);
   ratio->SetBinError(28,0.04383503);
   ratio->SetBinError(29,0.04879942);
   ratio->SetBinError(30,0.05211111);
   ratio->SetBinError(31,0.05535984);
   ratio->SetBinError(32,0.05964786);
   ratio->SetBinError(33,0.06501108);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(6409.2);
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
