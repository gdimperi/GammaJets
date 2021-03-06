{
//=========Macro generated from canvas: mvaIdPhot/mvaIdPhot
//=========  (Sat Nov 29 19:52:20 2014) by ROOT version5.32/00
   TCanvas *mvaIdPhot = new TCanvas("mvaIdPhot", "mvaIdPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mvaIdPhot->SetHighLightColor(2);
   mvaIdPhot->Range(-0.1625,-0.02868578,1.0875,0.258172);
   mvaIdPhot->SetFillColor(0);
   mvaIdPhot->SetBorderMode(0);
   mvaIdPhot->SetBorderSize(2);
   mvaIdPhot->SetTickx(1);
   mvaIdPhot->SetLeftMargin(0.13);
   mvaIdPhot->SetRightMargin(0.07);
   mvaIdPhot->SetFrameFillStyle(0);
   mvaIdPhot->SetFrameBorderMode(0);
  
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
   
   TH1F *mvaIdPhot_mc_Z_EE__16 = new TH1F("mvaIdPhot_mc_Z_EE__16","mvaIdPhot_mc_Z_EE",100,0,1);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(88,0.02046719);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(89,0.03724532);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(90,0.04578642);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(91,0.05385317);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(92,0.06555559);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(93,0.08949734);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(94,0.1157701);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(95,0.1659847);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(96,0.2151788);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(97,0.1456157);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(98,0.04199744);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(99,0.002428432);
   mvaIdPhot_mc_Z_EE__16->SetBinContent(100,0.0006198285);
   mvaIdPhot_mc_Z_EE__16->SetBinError(88,0.000826311);
   mvaIdPhot_mc_Z_EE__16->SetBinError(89,0.001188982);
   mvaIdPhot_mc_Z_EE__16->SetBinError(90,0.001491176);
   mvaIdPhot_mc_Z_EE__16->SetBinError(91,0.001914392);
   mvaIdPhot_mc_Z_EE__16->SetBinError(92,0.00180323);
   mvaIdPhot_mc_Z_EE__16->SetBinError(93,0.003248814);
   mvaIdPhot_mc_Z_EE__16->SetBinError(94,0.003275162);
   mvaIdPhot_mc_Z_EE__16->SetBinError(95,0.004670717);
   mvaIdPhot_mc_Z_EE__16->SetBinError(96,0.006111552);
   mvaIdPhot_mc_Z_EE__16->SetBinError(97,0.005436399);
   mvaIdPhot_mc_Z_EE__16->SetBinError(98,0.002589865);
   mvaIdPhot_mc_Z_EE__16->SetBinError(99,0.0004933126);
   mvaIdPhot_mc_Z_EE__16->SetBinError(100,0.0004219942);
   mvaIdPhot_mc_Z_EE__16->SetMinimum(8.242172e-07);
   mvaIdPhot_mc_Z_EE__16->SetMaximum(1.205001);
   mvaIdPhot_mc_Z_EE__16->SetEntries(25857);
   mvaIdPhot_mc_Z_EE__16->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__16->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__16->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__16->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__16->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__16->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EE__16->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EE__16->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EE__16->Draw("PE");
   
   TH1F *mvaIdPhot_mc_Signal_EE__17 = new TH1F("mvaIdPhot_mc_Signal_EE__17","mvaIdPhot_mc_Signal_EE",100,0,1);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(88,0.008909267);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(89,0.01766744);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(90,0.02589172);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(91,0.0360433);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(92,0.04616742);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(93,0.06578018);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(94,0.08825834);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(95,0.1247027);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(96,0.1789954);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(97,0.2113278);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(98,0.1679607);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(99,0.02712378);
   mvaIdPhot_mc_Signal_EE__17->SetBinContent(100,0.001171919);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(88,0.0003902085);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(89,0.0005220253);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(90,0.0006684748);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(91,0.0007764572);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(92,0.0008333709);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(93,0.002251464);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(94,0.001168751);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(95,0.001324612);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(96,0.00231808);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(97,0.002463477);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(98,0.002134194);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(99,0.0004919189);
   mvaIdPhot_mc_Signal_EE__17->SetBinError(100,0.0001629847);
   mvaIdPhot_mc_Signal_EE__17->SetEntries(564048);
   mvaIdPhot_mc_Signal_EE__17->SetDirectory(0);
   mvaIdPhot_mc_Signal_EE__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__17->SetLineColor(ci);
   mvaIdPhot_mc_Signal_EE__17->SetLineWidth(2);
   mvaIdPhot_mc_Signal_EE__17->Draw("HSAME");
   
   TH1F *mvaIdPhot_mc_Z_EE__18 = new TH1F("mvaIdPhot_mc_Z_EE__18","mvaIdPhot_mc_Z_EE",100,0,1);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(88,0.02046719);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(89,0.03724532);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(90,0.04578642);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(91,0.05385317);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(92,0.06555559);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(93,0.08949734);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(94,0.1157701);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(95,0.1659847);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(96,0.2151788);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(97,0.1456157);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(98,0.04199744);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(99,0.002428432);
   mvaIdPhot_mc_Z_EE__18->SetBinContent(100,0.0006198285);
   mvaIdPhot_mc_Z_EE__18->SetBinError(88,0.000826311);
   mvaIdPhot_mc_Z_EE__18->SetBinError(89,0.001188982);
   mvaIdPhot_mc_Z_EE__18->SetBinError(90,0.001491176);
   mvaIdPhot_mc_Z_EE__18->SetBinError(91,0.001914392);
   mvaIdPhot_mc_Z_EE__18->SetBinError(92,0.00180323);
   mvaIdPhot_mc_Z_EE__18->SetBinError(93,0.003248814);
   mvaIdPhot_mc_Z_EE__18->SetBinError(94,0.003275162);
   mvaIdPhot_mc_Z_EE__18->SetBinError(95,0.004670717);
   mvaIdPhot_mc_Z_EE__18->SetBinError(96,0.006111552);
   mvaIdPhot_mc_Z_EE__18->SetBinError(97,0.005436399);
   mvaIdPhot_mc_Z_EE__18->SetBinError(98,0.002589865);
   mvaIdPhot_mc_Z_EE__18->SetBinError(99,0.0004933126);
   mvaIdPhot_mc_Z_EE__18->SetBinError(100,0.0004219942);
   mvaIdPhot_mc_Z_EE__18->SetMinimum(8.242172e-07);
   mvaIdPhot_mc_Z_EE__18->SetMaximum(1.205001);
   mvaIdPhot_mc_Z_EE__18->SetEntries(25857);
   mvaIdPhot_mc_Z_EE__18->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__18->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__18->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__18->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__18->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__18->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__18->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EE__18->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EE__18->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EE__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("mvaIdPhot_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mvaIdPhot_mc_Signal_EE","signal #gamma + jet","F");
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
   mvaIdPhot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","mvaIdPhot_mc_Z_EE",100,0,1);
   ratio->SetBinContent(88,2.297292);
   ratio->SetBinContent(89,2.108133);
   ratio->SetBinContent(90,1.768381);
   ratio->SetBinContent(91,1.494124);
   ratio->SetBinContent(92,1.419954);
   ratio->SetBinContent(93,1.360552);
   ratio->SetBinContent(94,1.311719);
   ratio->SetBinContent(95,1.331043);
   ratio->SetBinContent(96,1.202147);
   ratio->SetBinContent(97,0.6890514);
   ratio->SetBinContent(98,0.2500433);
   ratio->SetBinContent(99,0.08953147);
   ratio->SetBinContent(100,0.5289006);
   ratio->SetBinError(88,0.1368424);
   ratio->SetBinError(89,0.09170066);
   ratio->SetBinError(90,0.07349433);
   ratio->SetBinError(91,0.06210525);
   ratio->SetBinError(92,0.04671776);
   ratio->SetBinError(93,0.06788094);
   ratio->SetBinError(94,0.04097305);
   ratio->SetBinError(95,0.0400345);
   ratio->SetBinError(96,0.0375255);
   ratio->SetBinError(97,0.02694981);
   ratio->SetBinError(98,0.01574339);
   ratio->SetBinError(99,0.0182598);
   ratio->SetBinError(100,0.3675244);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1363.599);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma MVA output");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","mvaIdPhot_mc_Z_EE",100,0,1);
   ratio->SetBinContent(88,2.297292);
   ratio->SetBinContent(89,2.108133);
   ratio->SetBinContent(90,1.768381);
   ratio->SetBinContent(91,1.494124);
   ratio->SetBinContent(92,1.419954);
   ratio->SetBinContent(93,1.360552);
   ratio->SetBinContent(94,1.311719);
   ratio->SetBinContent(95,1.331043);
   ratio->SetBinContent(96,1.202147);
   ratio->SetBinContent(97,0.6890514);
   ratio->SetBinContent(98,0.2500433);
   ratio->SetBinContent(99,0.08953147);
   ratio->SetBinContent(100,0.5289006);
   ratio->SetBinError(88,0.1368424);
   ratio->SetBinError(89,0.09170066);
   ratio->SetBinError(90,0.07349433);
   ratio->SetBinError(91,0.06210525);
   ratio->SetBinError(92,0.04671776);
   ratio->SetBinError(93,0.06788094);
   ratio->SetBinError(94,0.04097305);
   ratio->SetBinError(95,0.0400345);
   ratio->SetBinError(96,0.0375255);
   ratio->SetBinError(97,0.02694981);
   ratio->SetBinError(98,0.01574339);
   ratio->SetBinError(99,0.0182598);
   ratio->SetBinError(100,0.3675244);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1363.599);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma MVA output");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   mvaIdPhot->cd();
   mvaIdPhot->Modified();
   mvaIdPhot->cd();
   mvaIdPhot->SetSelected(mvaIdPhot);
}
