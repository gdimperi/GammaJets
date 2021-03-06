{
//=========Macro generated from canvas: ptPhot/ptPhot
//=========  (Sat Nov 29 19:43:01 2014) by ROOT version5.32/00
   TCanvas *ptPhot = new TCanvas("ptPhot", "ptPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   ptPhot->SetHighLightColor(2);
   ptPhot->Range(-48.75,-0.04789331,326.25,0.4310398);
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
   ptPhot_mc_Z_EE__4->SetBinContent(9,0.3638537);
   ptPhot_mc_Z_EE__4->SetBinContent(10,0.2658052);
   ptPhot_mc_Z_EE__4->SetBinContent(11,0.1781363);
   ptPhot_mc_Z_EE__4->SetBinContent(12,0.1155045);
   ptPhot_mc_Z_EE__4->SetBinContent(13,0.07670031);
   ptPhot_mc_Z_EE__4->SetBinError(9,0.005608924);
   ptPhot_mc_Z_EE__4->SetBinError(10,0.004812824);
   ptPhot_mc_Z_EE__4->SetBinError(11,0.004997189);
   ptPhot_mc_Z_EE__4->SetBinError(12,0.005064212);
   ptPhot_mc_Z_EE__4->SetBinError(13,0.004768508);
   ptPhot_mc_Z_EE__4->SetMinimum(8.212117e-07);
   ptPhot_mc_Z_EE__4->SetMaximum(2.037581);
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
   ptPhot_mc_Signal_EE__5->SetBinContent(37,0.1353129);
   ptPhot_mc_Signal_EE__5->SetBinContent(38,0.1179997);
   ptPhot_mc_Signal_EE__5->SetBinContent(39,0.1001438);
   ptPhot_mc_Signal_EE__5->SetBinContent(40,0.08374488);
   ptPhot_mc_Signal_EE__5->SetBinContent(41,0.07518861);
   ptPhot_mc_Signal_EE__5->SetBinContent(42,0.06494479);
   ptPhot_mc_Signal_EE__5->SetBinContent(43,0.05673375);
   ptPhot_mc_Signal_EE__5->SetBinContent(44,0.04978185);
   ptPhot_mc_Signal_EE__5->SetBinContent(45,0.04494115);
   ptPhot_mc_Signal_EE__5->SetBinContent(46,0.03659115);
   ptPhot_mc_Signal_EE__5->SetBinContent(47,0.03464949);
   ptPhot_mc_Signal_EE__5->SetBinContent(48,0.02893599);
   ptPhot_mc_Signal_EE__5->SetBinContent(49,0.02480607);
   ptPhot_mc_Signal_EE__5->SetBinContent(50,0.02352413);
   ptPhot_mc_Signal_EE__5->SetBinContent(51,0.01991479);
   ptPhot_mc_Signal_EE__5->SetBinContent(52,0.01776614);
   ptPhot_mc_Signal_EE__5->SetBinContent(53,0.01648403);
   ptPhot_mc_Signal_EE__5->SetBinContent(54,0.01359555);
   ptPhot_mc_Signal_EE__5->SetBinContent(55,0.01211151);
   ptPhot_mc_Signal_EE__5->SetBinContent(56,0.01094302);
   ptPhot_mc_Signal_EE__5->SetBinContent(57,0.009421254);
   ptPhot_mc_Signal_EE__5->SetBinContent(58,0.008324602);
   ptPhot_mc_Signal_EE__5->SetBinContent(59,0.007702187);
   ptPhot_mc_Signal_EE__5->SetBinContent(60,0.006438614);
   ptPhot_mc_Signal_EE__5->SetBinContent(61,0.05372359);
   ptPhot_mc_Signal_EE__5->SetBinError(37,0.002269268);
   ptPhot_mc_Signal_EE__5->SetBinError(38,0.002041112);
   ptPhot_mc_Signal_EE__5->SetBinError(39,0.001513421);
   ptPhot_mc_Signal_EE__5->SetBinError(40,0.000701368);
   ptPhot_mc_Signal_EE__5->SetBinError(41,0.001251002);
   ptPhot_mc_Signal_EE__5->SetBinError(42,0.0007952729);
   ptPhot_mc_Signal_EE__5->SetBinError(43,0.0009726156);
   ptPhot_mc_Signal_EE__5->SetBinError(44,0.001010997);
   ptPhot_mc_Signal_EE__5->SetBinError(45,0.001471862);
   ptPhot_mc_Signal_EE__5->SetBinError(46,0.0004644073);
   ptPhot_mc_Signal_EE__5->SetBinError(47,0.001105859);
   ptPhot_mc_Signal_EE__5->SetBinError(48,0.000353129);
   ptPhot_mc_Signal_EE__5->SetBinError(49,0.0003194672);
   ptPhot_mc_Signal_EE__5->SetBinError(50,0.0008794873);
   ptPhot_mc_Signal_EE__5->SetBinError(51,0.0002872274);
   ptPhot_mc_Signal_EE__5->SetBinError(52,0.0002549589);
   ptPhot_mc_Signal_EE__5->SetBinError(53,0.0008677307);
   ptPhot_mc_Signal_EE__5->SetBinError(54,0.0002212018);
   ptPhot_mc_Signal_EE__5->SetBinError(55,0.0002062857);
   ptPhot_mc_Signal_EE__5->SetBinError(56,0.0001965497);
   ptPhot_mc_Signal_EE__5->SetBinError(57,0.0001711255);
   ptPhot_mc_Signal_EE__5->SetBinError(58,0.0001559851);
   ptPhot_mc_Signal_EE__5->SetBinError(59,0.0001612226);
   ptPhot_mc_Signal_EE__5->SetBinError(60,0.0001272059);
   ptPhot_mc_Signal_EE__5->SetBinError(61,0.000280624);
   ptPhot_mc_Signal_EE__5->SetEntries(640592);
   ptPhot_mc_Signal_EE__5->SetDirectory(0);
   ptPhot_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   ptPhot_mc_Signal_EE__5->SetLineColor(ci);
   ptPhot_mc_Signal_EE__5->SetLineWidth(2);
   ptPhot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *ptPhot_mc_Z_EE__6 = new TH1F("ptPhot_mc_Z_EE__6","ptPhot_mc_Z_EE",60,0,300);
   ptPhot_mc_Z_EE__6->SetBinContent(9,0.3638537);
   ptPhot_mc_Z_EE__6->SetBinContent(10,0.2658052);
   ptPhot_mc_Z_EE__6->SetBinContent(11,0.1781363);
   ptPhot_mc_Z_EE__6->SetBinContent(12,0.1155045);
   ptPhot_mc_Z_EE__6->SetBinContent(13,0.07670031);
   ptPhot_mc_Z_EE__6->SetBinError(9,0.005608924);
   ptPhot_mc_Z_EE__6->SetBinError(10,0.004812824);
   ptPhot_mc_Z_EE__6->SetBinError(11,0.004997189);
   ptPhot_mc_Z_EE__6->SetBinError(12,0.005064212);
   ptPhot_mc_Z_EE__6->SetBinError(13,0.004768508);
   ptPhot_mc_Z_EE__6->SetMinimum(8.212117e-07);
   ptPhot_mc_Z_EE__6->SetMaximum(2.037581);
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
