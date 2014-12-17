{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 19:50:50 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04783647,326.25,0.4305282);
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
   ptPhot_mc_Z_EE__4->SetBinContent(9,0.363397);
   ptPhot_mc_Z_EE__4->SetBinContent(10,0.2661369);
   ptPhot_mc_Z_EE__4->SetBinContent(11,0.1780276);
   ptPhot_mc_Z_EE__4->SetBinContent(12,0.1156095);
   ptPhot_mc_Z_EE__4->SetBinContent(13,0.07682897);
   ptPhot_mc_Z_EE__4->SetBinError(9,0.005627194);
   ptPhot_mc_Z_EE__4->SetBinError(10,0.004845566);
   ptPhot_mc_Z_EE__4->SetBinError(11,0.004987142);
   ptPhot_mc_Z_EE__4->SetBinError(12,0.005079414);
   ptPhot_mc_Z_EE__4->SetBinError(13,0.004784634);
   ptPhot_mc_Z_EE__4->SetMinimum(8.253146e-07);
   ptPhot_mc_Z_EE__4->SetMaximum(2.035023);
   ptPhot_mc_Z_EE__4->SetEntries(25857);
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
   ptPhot_mc_Signal_EE__5->SetBinContent(14,0.3334108);
   ptPhot_mc_Signal_EE__5->SetBinContent(15,0.2479397);
   ptPhot_mc_Signal_EE__5->SetBinContent(16,0.1794609);
   ptPhot_mc_Signal_EE__5->SetBinContent(17,0.134536);
   ptPhot_mc_Signal_EE__5->SetBinContent(18,0.1046526);
   ptPhot_mc_Signal_EE__5->SetBinError(14,0.004537297);
   ptPhot_mc_Signal_EE__5->SetBinError(15,0.0036419);
   ptPhot_mc_Signal_EE__5->SetBinError(16,0.002614725);
   ptPhot_mc_Signal_EE__5->SetBinError(17,0.001957456);
   ptPhot_mc_Signal_EE__5->SetBinError(18,0.00151383);
   ptPhot_mc_Signal_EE__5->SetEntries(353605);
   ptPhot_mc_Signal_EE__5->SetDirectory(0);
   ptPhot_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetLineColor(ci);
   ptPhot_mc_Signal_EE__5->SetLineWidth(2);
   ptPhot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EE__6 = new TH1F("ptPhot_mc_Z_EE__6","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__6->SetBinContent(9,0.363397);
   ptPhot_mc_Z_EE__6->SetBinContent(10,0.2661369);
   ptPhot_mc_Z_EE__6->SetBinContent(11,0.1780276);
   ptPhot_mc_Z_EE__6->SetBinContent(12,0.1156095);
   ptPhot_mc_Z_EE__6->SetBinContent(13,0.07682897);
   ptPhot_mc_Z_EE__6->SetBinError(9,0.005627194);
   ptPhot_mc_Z_EE__6->SetBinError(10,0.004845566);
   ptPhot_mc_Z_EE__6->SetBinError(11,0.004987142);
   ptPhot_mc_Z_EE__6->SetBinError(12,0.005079414);
   ptPhot_mc_Z_EE__6->SetBinError(13,0.004784634);
   ptPhot_mc_Z_EE__6->SetMinimum(8.253146e-07);
   ptPhot_mc_Z_EE__6->SetMaximum(2.035023);
   ptPhot_mc_Z_EE__6->SetEntries(25857);
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
   
   TLegend *leg = new TLegend(1.167098e-312,1.184667e-312,1.897212e-321,9.48606e-322,NULL,"brNDC");
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
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
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
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
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
