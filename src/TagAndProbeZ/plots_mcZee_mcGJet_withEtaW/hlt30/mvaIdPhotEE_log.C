{
//=========Macro generated from canvas: mvaIdPhot/mvaIdPhot
//=========  (Sat Sep 27 22:34:53 2014) by ROOT version5.32/00
   TCanvas *mvaIdPhot = new TCanvas("mvaIdPhot", "mvaIdPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mvaIdPhot->SetHighLightColor(2);
   mvaIdPhot->Range(-0.1625,-0.01739928,1.0875,0.1565935);
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
   
   TH1F *mvaIdPhot_mc_Z_EE__22 = new TH1F("mvaIdPhot_mc_Z_EE__22","mvaIdPhot_mc_Z_EE",100,0,1);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(88,0.04341291);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(89,0.07877868);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(90,0.08965385);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(91,0.09958158);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(92,0.1090687);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(93,0.1210191);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(94,0.1296297);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(95,0.1334557);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(96,0.1166962);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(97,0.06180502);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(98,0.01521917);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(99,0.001287866);
   mvaIdPhot_mc_Z_EE__22->SetBinContent(100,0.0003915116);
   mvaIdPhot_mc_Z_EE__22->SetBinError(88,0.0004420765);
   mvaIdPhot_mc_Z_EE__22->SetBinError(89,0.0005960813);
   mvaIdPhot_mc_Z_EE__22->SetBinError(90,0.000636399);
   mvaIdPhot_mc_Z_EE__22->SetBinError(91,0.000668758);
   mvaIdPhot_mc_Z_EE__22->SetBinError(92,0.0006975827);
   mvaIdPhot_mc_Z_EE__22->SetBinError(93,0.0007327086);
   mvaIdPhot_mc_Z_EE__22->SetBinError(94,0.0007561011);
   mvaIdPhot_mc_Z_EE__22->SetBinError(95,0.0007672538);
   mvaIdPhot_mc_Z_EE__22->SetBinError(96,0.0007148218);
   mvaIdPhot_mc_Z_EE__22->SetBinError(97,0.0005082165);
   mvaIdPhot_mc_Z_EE__22->SetBinError(98,0.0002390232);
   mvaIdPhot_mc_Z_EE__22->SetBinError(99,7.018305e-05);
   mvaIdPhot_mc_Z_EE__22->SetBinError(100,3.874317e-05);
   mvaIdPhot_mc_Z_EE__22->SetMinimum(3.213092e-07);
   mvaIdPhot_mc_Z_EE__22->SetMaximum(0.7473521);
   mvaIdPhot_mc_Z_EE__22->SetEntries(259310);
   mvaIdPhot_mc_Z_EE__22->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__22->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__22->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__22->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__22->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__22->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__22->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EE__22->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EE__22->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EE__22->Draw("PE");
   
   TH1F *mvaIdPhot_mc_Signal_EE__23 = new TH1F("mvaIdPhot_mc_Signal_EE__23","mvaIdPhot_mc_Signal_EE",100,0,1);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(88,0.02138857);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(89,0.04067176);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(90,0.04702836);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(91,0.05702628);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(92,0.06517136);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(93,0.08215329);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(94,0.0995056);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(95,0.1286851);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(96,0.167931);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(97,0.169404);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(98,0.1032666);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(99,0.01639218);
   mvaIdPhot_mc_Signal_EE__23->SetBinContent(100,0.00137587);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(88,0.0006823549);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(89,0.0009601921);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(90,0.001015747);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(91,0.001112381);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(92,0.001131234);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(93,0.001324507);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(94,0.001403256);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(95,0.001651421);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(96,0.001855484);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(97,0.001855064);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(98,0.001413519);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(99,0.0005529875);
   mvaIdPhot_mc_Signal_EE__23->SetBinError(100,0.0001347129);
   mvaIdPhot_mc_Signal_EE__23->SetEntries(477019);
   mvaIdPhot_mc_Signal_EE__23->SetDirectory(0);
   mvaIdPhot_mc_Signal_EE__23->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EE__23->SetLineColor(ci);
   mvaIdPhot_mc_Signal_EE__23->SetLineWidth(2);
   mvaIdPhot_mc_Signal_EE__23->Draw("HSAME");
   
   TH1F *mvaIdPhot_mc_Z_EE__24 = new TH1F("mvaIdPhot_mc_Z_EE__24","mvaIdPhot_mc_Z_EE",100,0,1);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(88,0.04341291);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(89,0.07877868);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(90,0.08965385);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(91,0.09958158);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(92,0.1090687);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(93,0.1210191);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(94,0.1296297);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(95,0.1334557);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(96,0.1166962);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(97,0.06180502);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(98,0.01521917);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(99,0.001287866);
   mvaIdPhot_mc_Z_EE__24->SetBinContent(100,0.0003915116);
   mvaIdPhot_mc_Z_EE__24->SetBinError(88,0.0004420765);
   mvaIdPhot_mc_Z_EE__24->SetBinError(89,0.0005960813);
   mvaIdPhot_mc_Z_EE__24->SetBinError(90,0.000636399);
   mvaIdPhot_mc_Z_EE__24->SetBinError(91,0.000668758);
   mvaIdPhot_mc_Z_EE__24->SetBinError(92,0.0006975827);
   mvaIdPhot_mc_Z_EE__24->SetBinError(93,0.0007327086);
   mvaIdPhot_mc_Z_EE__24->SetBinError(94,0.0007561011);
   mvaIdPhot_mc_Z_EE__24->SetBinError(95,0.0007672538);
   mvaIdPhot_mc_Z_EE__24->SetBinError(96,0.0007148218);
   mvaIdPhot_mc_Z_EE__24->SetBinError(97,0.0005082165);
   mvaIdPhot_mc_Z_EE__24->SetBinError(98,0.0002390232);
   mvaIdPhot_mc_Z_EE__24->SetBinError(99,7.018305e-05);
   mvaIdPhot_mc_Z_EE__24->SetBinError(100,3.874317e-05);
   mvaIdPhot_mc_Z_EE__24->SetMinimum(3.213092e-07);
   mvaIdPhot_mc_Z_EE__24->SetMaximum(0.7473521);
   mvaIdPhot_mc_Z_EE__24->SetEntries(259310);
   mvaIdPhot_mc_Z_EE__24->SetDirectory(0);
   mvaIdPhot_mc_Z_EE__24->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EE__24->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EE__24->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EE__24->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EE__24->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EE__24->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EE__24->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EE__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,1.845439e-315,2.874421e-315,NULL,"brNDC");
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
   ratio->SetBinContent(88,2.029725);
   ratio->SetBinContent(89,1.936938);
   ratio->SetBinContent(90,1.906378);
   ratio->SetBinContent(91,1.74624);
   ratio->SetBinContent(92,1.673568);
   ratio->SetBinContent(93,1.473089);
   ratio->SetBinContent(94,1.302737);
   ratio->SetBinContent(95,1.037072);
   ratio->SetBinContent(96,0.6949059);
   ratio->SetBinContent(97,0.364838);
   ratio->SetBinContent(98,0.1473774);
   ratio->SetBinContent(99,0.07856584);
   ratio->SetBinContent(100,0.2845556);
   ratio->SetBinError(88,0.06797253);
   ratio->SetBinError(89,0.04801909);
   ratio->SetBinError(90,0.04334181);
   ratio->SetBinError(91,0.03602518);
   ratio->SetBinError(92,0.03095878);
   ratio->SetBinError(93,0.02536914);
   ratio->SetBinError(94,0.01988097);
   ratio->SetBinError(95,0.01458329);
   ratio->SetBinError(96,0.008779055);
   ratio->SetBinError(97,0.004996152);
   ratio->SetBinError(98,0.003070345);
   ratio->SetBinError(99,0.005035459);
   ratio->SetBinError(100,0.0396128);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(15364.45);
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
   ratio->SetBinContent(88,2.029725);
   ratio->SetBinContent(89,1.936938);
   ratio->SetBinContent(90,1.906378);
   ratio->SetBinContent(91,1.74624);
   ratio->SetBinContent(92,1.673568);
   ratio->SetBinContent(93,1.473089);
   ratio->SetBinContent(94,1.302737);
   ratio->SetBinContent(95,1.037072);
   ratio->SetBinContent(96,0.6949059);
   ratio->SetBinContent(97,0.364838);
   ratio->SetBinContent(98,0.1473774);
   ratio->SetBinContent(99,0.07856584);
   ratio->SetBinContent(100,0.2845556);
   ratio->SetBinError(88,0.06797253);
   ratio->SetBinError(89,0.04801909);
   ratio->SetBinError(90,0.04334181);
   ratio->SetBinError(91,0.03602518);
   ratio->SetBinError(92,0.03095878);
   ratio->SetBinError(93,0.02536914);
   ratio->SetBinError(94,0.01988097);
   ratio->SetBinError(95,0.01458329);
   ratio->SetBinError(96,0.008779055);
   ratio->SetBinError(97,0.004996152);
   ratio->SetBinError(98,0.003070345);
   ratio->SetBinError(99,0.005035459);
   ratio->SetBinError(100,0.0396128);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(15364.45);
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
