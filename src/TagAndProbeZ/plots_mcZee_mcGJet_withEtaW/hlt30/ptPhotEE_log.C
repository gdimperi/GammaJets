{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Sep 27 22:34:46 2014) by ROOT version5.32/00
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
   
   TH1F *ptPhot_mc_Z_EE__4 = new TH1F("ptPhot_mc_Z_EE__4","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__4->SetBinContent(9,0.46424);
   ptPhot_mc_Z_EE__4->SetBinContent(10,0.3206329);
   ptPhot_mc_Z_EE__4->SetBinContent(11,0.1262979);
   ptPhot_mc_Z_EE__4->SetBinContent(12,0.05770441);
   ptPhot_mc_Z_EE__4->SetBinContent(13,0.03112478);
   ptPhot_mc_Z_EE__4->SetBinError(9,0.00144298);
   ptPhot_mc_Z_EE__4->SetBinError(10,0.001182136);
   ptPhot_mc_Z_EE__4->SetBinError(11,0.000740401);
   ptPhot_mc_Z_EE__4->SetBinError(12,0.0005036819);
   ptPhot_mc_Z_EE__4->SetBinError(13,0.000371561);
   ptPhot_mc_Z_EE__4->SetMinimum(3.213069e-07);
   ptPhot_mc_Z_EE__4->SetMaximum(2.599744);
   ptPhot_mc_Z_EE__4->SetEntries(259310);
   ptPhot_mc_Z_EE__4->SetDirectory(0);
   ptPhot_mc_Z_EE__4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__4->SetMarkerColor(ci);
   ptPhot_mc_Z_EE__4->SetMarkerStyle(20);
   ptPhot_mc_Z_EE__4->SetMarkerSize(0.7);
   ptPhot_mc_Z_EE__4->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EE__4->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EE__4->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EE__4->Draw("PE");
   
   TH1F *ptPhot_mc_Signal_EE__5 = new TH1F("ptPhot_mc_Signal_EE__5","ptPhot_mc_Signal_EE",60,0,300);
   ptPhot_mc_Signal_EE__5->SetBinContent(9,0.3945364);
   ptPhot_mc_Signal_EE__5->SetBinContent(10,0.2501762);
   ptPhot_mc_Signal_EE__5->SetBinContent(11,0.164081);
   ptPhot_mc_Signal_EE__5->SetBinContent(12,0.1124097);
   ptPhot_mc_Signal_EE__5->SetBinContent(13,0.07879675);
   ptPhot_mc_Signal_EE__5->SetBinError(9,0.003165031);
   ptPhot_mc_Signal_EE__5->SetBinError(10,0.002296044);
   ptPhot_mc_Signal_EE__5->SetBinError(11,0.00167646);
   ptPhot_mc_Signal_EE__5->SetBinError(12,0.001255476);
   ptPhot_mc_Signal_EE__5->SetBinError(13,0.0009568176);
   ptPhot_mc_Signal_EE__5->SetEntries(477019);
   ptPhot_mc_Signal_EE__5->SetDirectory(0);
   ptPhot_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetLineColor(ci);
   ptPhot_mc_Signal_EE__5->SetLineWidth(2);
   ptPhot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EE__6 = new TH1F("ptPhot_mc_Z_EE__6","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__6->SetBinContent(9,0.46424);
   ptPhot_mc_Z_EE__6->SetBinContent(10,0.3206329);
   ptPhot_mc_Z_EE__6->SetBinContent(11,0.1262979);
   ptPhot_mc_Z_EE__6->SetBinContent(12,0.05770441);
   ptPhot_mc_Z_EE__6->SetBinContent(13,0.03112478);
   ptPhot_mc_Z_EE__6->SetBinError(9,0.00144298);
   ptPhot_mc_Z_EE__6->SetBinError(10,0.001182136);
   ptPhot_mc_Z_EE__6->SetBinError(11,0.000740401);
   ptPhot_mc_Z_EE__6->SetBinError(12,0.0005036819);
   ptPhot_mc_Z_EE__6->SetBinError(13,0.000371561);
   ptPhot_mc_Z_EE__6->SetMinimum(3.213069e-07);
   ptPhot_mc_Z_EE__6->SetMaximum(2.599744);
   ptPhot_mc_Z_EE__6->SetEntries(259310);
   ptPhot_mc_Z_EE__6->SetDirectory(0);
   ptPhot_mc_Z_EE__6->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ptPhot_mc_Z_EE__6->SetMarkerColor(ci);
   ptPhot_mc_Z_EE__6->SetMarkerStyle(20);
   ptPhot_mc_Z_EE__6->SetMarkerSize(0.7);
   ptPhot_mc_Z_EE__6->GetXaxis()->SetTitle("#gamma p_{T} (GeV)");
   ptPhot_mc_Z_EE__6->GetYaxis()->SetTitle("Entries/5.0");
   ptPhot_mc_Z_EE__6->GetYaxis()->SetTitleOffset(0.9);
   ptPhot_mc_Z_EE__6->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,3.443837e-315,3.450755e-315,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","EE","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ptPhot_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("ptPhot_mc_Signal_EE","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_EE",60,0,300);
   ratio->SetBinContent(9,1.176672);
   ratio->SetBinContent(10,1.281628);
   ratio->SetBinContent(11,0.769729);
   ratio->SetBinContent(12,0.5133402);
   ratio->SetBinContent(13,0.3950008);
   ratio->SetBinError(9,0.01012323);
   ratio->SetBinError(10,0.01267604);
   ratio->SetBinError(11,0.009067121);
   ratio->SetBinError(12,0.007276594);
   ratio->SetBinError(13,0.006726153);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(38572.9);
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
   
   TH1F *ratio = new TH1F("ratio","ptPhot_mc_Z_EE",60,0,300);
   ratio->SetBinContent(9,1.176672);
   ratio->SetBinContent(10,1.281628);
   ratio->SetBinContent(11,0.769729);
   ratio->SetBinContent(12,0.5133402);
   ratio->SetBinContent(13,0.3950008);
   ratio->SetBinError(9,0.01012323);
   ratio->SetBinError(10,0.01267604);
   ratio->SetBinError(11,0.009067121);
   ratio->SetBinError(12,0.007276594);
   ratio->SetBinError(13,0.006726153);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(38572.9);
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
