{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Fri Dec  5 12:51:49 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.004761302,3.525,0.04285171);
   etaPhot->SetFillColor(0);
   etaPhot->SetBorderMode(0);
   etaPhot->SetBorderSize(2);
   etaPhot->SetTickx(1);
   etaPhot->SetLeftMargin(0.13);
   etaPhot->SetRightMargin(0.07);
   etaPhot->SetFrameFillStyle(0);
   etaPhot->SetFrameBorderMode(0);
  
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
   
   TH1F *etaPhot_mc_Z_EB__10 = new TH1F("etaPhot_mc_Z_EB__10","etaPhot_mc_Z_EB",60,-3,3);
   etaPhot_mc_Z_EB__10->SetBinContent(16,0.0145761);
   etaPhot_mc_Z_EB__10->SetBinContent(17,0.03443357);
   etaPhot_mc_Z_EB__10->SetBinContent(18,0.03433329);
   etaPhot_mc_Z_EB__10->SetBinContent(19,0.03194697);
   etaPhot_mc_Z_EB__10->SetBinContent(20,0.03544886);
   etaPhot_mc_Z_EB__10->SetBinContent(21,0.03491462);
   etaPhot_mc_Z_EB__10->SetBinContent(22,0.03638402);
   etaPhot_mc_Z_EB__10->SetBinContent(23,0.03272377);
   etaPhot_mc_Z_EB__10->SetBinContent(24,0.03564235);
   etaPhot_mc_Z_EB__10->SetBinContent(25,0.03648384);
   etaPhot_mc_Z_EB__10->SetBinContent(26,0.03449318);
   etaPhot_mc_Z_EB__10->SetBinContent(27,0.03512185);
   etaPhot_mc_Z_EB__10->SetBinContent(28,0.03521841);
   etaPhot_mc_Z_EB__10->SetBinContent(29,0.03508708);
   etaPhot_mc_Z_EB__10->SetBinContent(30,0.03308883);
   etaPhot_mc_Z_EB__10->SetBinContent(31,0.03391197);
   etaPhot_mc_Z_EB__10->SetBinContent(32,0.03534528);
   etaPhot_mc_Z_EB__10->SetBinContent(33,0.03549964);
   etaPhot_mc_Z_EB__10->SetBinContent(34,0.03570626);
   etaPhot_mc_Z_EB__10->SetBinContent(35,0.03440642);
   etaPhot_mc_Z_EB__10->SetBinContent(36,0.03554814);
   etaPhot_mc_Z_EB__10->SetBinContent(37,0.03636048);
   etaPhot_mc_Z_EB__10->SetBinContent(38,0.03289445);
   etaPhot_mc_Z_EB__10->SetBinContent(39,0.03569064);
   etaPhot_mc_Z_EB__10->SetBinContent(40,0.03480365);
   etaPhot_mc_Z_EB__10->SetBinContent(41,0.03494145);
   etaPhot_mc_Z_EB__10->SetBinContent(42,0.03246196);
   etaPhot_mc_Z_EB__10->SetBinContent(43,0.03456455);
   etaPhot_mc_Z_EB__10->SetBinContent(44,0.0337553);
   etaPhot_mc_Z_EB__10->SetBinContent(45,0.01421308);
   etaPhot_mc_Z_EB__10->SetBinError(16,0.0001744371);
   etaPhot_mc_Z_EB__10->SetBinError(17,0.0002694832);
   etaPhot_mc_Z_EB__10->SetBinError(18,0.0002640637);
   etaPhot_mc_Z_EB__10->SetBinError(19,0.0002477323);
   etaPhot_mc_Z_EB__10->SetBinError(20,0.0002558378);
   etaPhot_mc_Z_EB__10->SetBinError(21,0.0002501452);
   etaPhot_mc_Z_EB__10->SetBinError(22,0.0002534428);
   etaPhot_mc_Z_EB__10->SetBinError(23,0.0002337455);
   etaPhot_mc_Z_EB__10->SetBinError(24,0.0002436425);
   etaPhot_mc_Z_EB__10->SetBinError(25,0.0002461946);
   etaPhot_mc_Z_EB__10->SetBinError(26,0.0002356984);
   etaPhot_mc_Z_EB__10->SetBinError(27,0.000238489);
   etaPhot_mc_Z_EB__10->SetBinError(28,0.0002372062);
   etaPhot_mc_Z_EB__10->SetBinError(29,0.0002375568);
   etaPhot_mc_Z_EB__10->SetBinError(30,0.0002272889);
   etaPhot_mc_Z_EB__10->SetBinError(31,0.0002291805);
   etaPhot_mc_Z_EB__10->SetBinError(32,0.0002350283);
   etaPhot_mc_Z_EB__10->SetBinError(33,0.0002371416);
   etaPhot_mc_Z_EB__10->SetBinError(34,0.0002411488);
   etaPhot_mc_Z_EB__10->SetBinError(35,0.000235245);
   etaPhot_mc_Z_EB__10->SetBinError(36,0.0002400953);
   etaPhot_mc_Z_EB__10->SetBinError(37,0.0002471791);
   etaPhot_mc_Z_EB__10->SetBinError(38,0.0002338055);
   etaPhot_mc_Z_EB__10->SetBinError(39,0.0002492722);
   etaPhot_mc_Z_EB__10->SetBinError(40,0.000250253);
   etaPhot_mc_Z_EB__10->SetBinError(41,0.0002532263);
   etaPhot_mc_Z_EB__10->SetBinError(42,0.0002518984);
   etaPhot_mc_Z_EB__10->SetBinError(43,0.0002678819);
   etaPhot_mc_Z_EB__10->SetBinError(44,0.000264921);
   etaPhot_mc_Z_EB__10->SetBinError(45,0.0001750007);
   etaPhot_mc_Z_EB__10->SetMinimum(1.582057e-07);
   etaPhot_mc_Z_EB__10->SetMaximum(0.2043095);
   etaPhot_mc_Z_EB__10->SetEntries(607274);
   etaPhot_mc_Z_EB__10->SetDirectory(0);
   etaPhot_mc_Z_EB__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__10->SetMarkerColor(ci);
   etaPhot_mc_Z_EB__10->SetMarkerStyle(20);
   etaPhot_mc_Z_EB__10->SetMarkerSize(0.7);
   etaPhot_mc_Z_EB__10->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EB__10->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EB__10->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EB__10->Draw("PE");
   
   TH1F *etaPhot_mc_Signal_EB__11 = new TH1F("etaPhot_mc_Signal_EB__11","etaPhot_mc_Signal_EB",60,-3,3);
   etaPhot_mc_Signal_EB__11->SetBinContent(16,0.01441071);
   etaPhot_mc_Signal_EB__11->SetBinContent(17,0.0346862);
   etaPhot_mc_Signal_EB__11->SetBinContent(18,0.03414968);
   etaPhot_mc_Signal_EB__11->SetBinContent(19,0.03267818);
   etaPhot_mc_Signal_EB__11->SetBinContent(20,0.03589622);
   etaPhot_mc_Signal_EB__11->SetBinContent(21,0.03510012);
   etaPhot_mc_Signal_EB__11->SetBinContent(22,0.03754067);
   etaPhot_mc_Signal_EB__11->SetBinContent(23,0.03239455);
   etaPhot_mc_Signal_EB__11->SetBinContent(24,0.03584125);
   etaPhot_mc_Signal_EB__11->SetBinContent(25,0.03578648);
   etaPhot_mc_Signal_EB__11->SetBinContent(26,0.03415695);
   etaPhot_mc_Signal_EB__11->SetBinContent(27,0.03464866);
   etaPhot_mc_Signal_EB__11->SetBinContent(28,0.03523532);
   etaPhot_mc_Signal_EB__11->SetBinContent(29,0.03477451);
   etaPhot_mc_Signal_EB__11->SetBinContent(30,0.03272133);
   etaPhot_mc_Signal_EB__11->SetBinContent(31,0.03338517);
   etaPhot_mc_Signal_EB__11->SetBinContent(32,0.03484904);
   etaPhot_mc_Signal_EB__11->SetBinContent(33,0.03473699);
   etaPhot_mc_Signal_EB__11->SetBinContent(34,0.03522563);
   etaPhot_mc_Signal_EB__11->SetBinContent(35,0.03370098);
   etaPhot_mc_Signal_EB__11->SetBinContent(36,0.03563103);
   etaPhot_mc_Signal_EB__11->SetBinContent(37,0.03608475);
   etaPhot_mc_Signal_EB__11->SetBinContent(38,0.03307004);
   etaPhot_mc_Signal_EB__11->SetBinContent(39,0.03582764);
   etaPhot_mc_Signal_EB__11->SetBinContent(40,0.03501789);
   etaPhot_mc_Signal_EB__11->SetBinContent(41,0.0351964);
   etaPhot_mc_Signal_EB__11->SetBinContent(42,0.03237715);
   etaPhot_mc_Signal_EB__11->SetBinContent(43,0.03587468);
   etaPhot_mc_Signal_EB__11->SetBinContent(44,0.03418415);
   etaPhot_mc_Signal_EB__11->SetBinContent(45,0.01481764);
   etaPhot_mc_Signal_EB__11->SetBinError(16,0.0001683277);
   etaPhot_mc_Signal_EB__11->SetBinError(17,0.0005228078);
   etaPhot_mc_Signal_EB__11->SetBinError(18,0.0002530489);
   etaPhot_mc_Signal_EB__11->SetBinError(19,0.0004024874);
   etaPhot_mc_Signal_EB__11->SetBinError(20,0.0004643695);
   etaPhot_mc_Signal_EB__11->SetBinError(21,0.0004279913);
   etaPhot_mc_Signal_EB__11->SetBinError(22,0.0007898028);
   etaPhot_mc_Signal_EB__11->SetBinError(23,0.0004093292);
   etaPhot_mc_Signal_EB__11->SetBinError(24,0.0004933215);
   etaPhot_mc_Signal_EB__11->SetBinError(25,0.0004464924);
   etaPhot_mc_Signal_EB__11->SetBinError(26,0.0004900757);
   etaPhot_mc_Signal_EB__11->SetBinError(27,0.0004102016);
   etaPhot_mc_Signal_EB__11->SetBinError(28,0.0004728509);
   etaPhot_mc_Signal_EB__11->SetBinError(29,0.0006805831);
   etaPhot_mc_Signal_EB__11->SetBinError(30,0.0003529979);
   etaPhot_mc_Signal_EB__11->SetBinError(31,0.0003186034);
   etaPhot_mc_Signal_EB__11->SetBinError(32,0.0002516046);
   etaPhot_mc_Signal_EB__11->SetBinError(33,0.0002456698);
   etaPhot_mc_Signal_EB__11->SetBinError(34,0.0005020495);
   etaPhot_mc_Signal_EB__11->SetBinError(35,0.0004133654);
   etaPhot_mc_Signal_EB__11->SetBinError(36,0.0004411312);
   etaPhot_mc_Signal_EB__11->SetBinError(37,0.0005385184);
   etaPhot_mc_Signal_EB__11->SetBinError(38,0.0004258388);
   etaPhot_mc_Signal_EB__11->SetBinError(39,0.0003995276);
   etaPhot_mc_Signal_EB__11->SetBinError(40,0.0004084645);
   etaPhot_mc_Signal_EB__11->SetBinError(41,0.000415558);
   etaPhot_mc_Signal_EB__11->SetBinError(42,0.0002452916);
   etaPhot_mc_Signal_EB__11->SetBinError(43,0.0006488282);
   etaPhot_mc_Signal_EB__11->SetBinError(44,0.0003655404);
   etaPhot_mc_Signal_EB__11->SetBinError(45,0.0005214591);
   etaPhot_mc_Signal_EB__11->SetEntries(2269836);
   etaPhot_mc_Signal_EB__11->SetDirectory(0);
   etaPhot_mc_Signal_EB__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EB__11->SetLineColor(ci);
   etaPhot_mc_Signal_EB__11->SetLineWidth(2);
   etaPhot_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *etaPhot_mc_Z_EB__12 = new TH1F("etaPhot_mc_Z_EB__12","etaPhot_mc_Z_EB",60,-3,3);
   etaPhot_mc_Z_EB__12->SetBinContent(16,0.0145761);
   etaPhot_mc_Z_EB__12->SetBinContent(17,0.03443357);
   etaPhot_mc_Z_EB__12->SetBinContent(18,0.03433329);
   etaPhot_mc_Z_EB__12->SetBinContent(19,0.03194697);
   etaPhot_mc_Z_EB__12->SetBinContent(20,0.03544886);
   etaPhot_mc_Z_EB__12->SetBinContent(21,0.03491462);
   etaPhot_mc_Z_EB__12->SetBinContent(22,0.03638402);
   etaPhot_mc_Z_EB__12->SetBinContent(23,0.03272377);
   etaPhot_mc_Z_EB__12->SetBinContent(24,0.03564235);
   etaPhot_mc_Z_EB__12->SetBinContent(25,0.03648384);
   etaPhot_mc_Z_EB__12->SetBinContent(26,0.03449318);
   etaPhot_mc_Z_EB__12->SetBinContent(27,0.03512185);
   etaPhot_mc_Z_EB__12->SetBinContent(28,0.03521841);
   etaPhot_mc_Z_EB__12->SetBinContent(29,0.03508708);
   etaPhot_mc_Z_EB__12->SetBinContent(30,0.03308883);
   etaPhot_mc_Z_EB__12->SetBinContent(31,0.03391197);
   etaPhot_mc_Z_EB__12->SetBinContent(32,0.03534528);
   etaPhot_mc_Z_EB__12->SetBinContent(33,0.03549964);
   etaPhot_mc_Z_EB__12->SetBinContent(34,0.03570626);
   etaPhot_mc_Z_EB__12->SetBinContent(35,0.03440642);
   etaPhot_mc_Z_EB__12->SetBinContent(36,0.03554814);
   etaPhot_mc_Z_EB__12->SetBinContent(37,0.03636048);
   etaPhot_mc_Z_EB__12->SetBinContent(38,0.03289445);
   etaPhot_mc_Z_EB__12->SetBinContent(39,0.03569064);
   etaPhot_mc_Z_EB__12->SetBinContent(40,0.03480365);
   etaPhot_mc_Z_EB__12->SetBinContent(41,0.03494145);
   etaPhot_mc_Z_EB__12->SetBinContent(42,0.03246196);
   etaPhot_mc_Z_EB__12->SetBinContent(43,0.03456455);
   etaPhot_mc_Z_EB__12->SetBinContent(44,0.0337553);
   etaPhot_mc_Z_EB__12->SetBinContent(45,0.01421308);
   etaPhot_mc_Z_EB__12->SetBinError(16,0.0001744371);
   etaPhot_mc_Z_EB__12->SetBinError(17,0.0002694832);
   etaPhot_mc_Z_EB__12->SetBinError(18,0.0002640637);
   etaPhot_mc_Z_EB__12->SetBinError(19,0.0002477323);
   etaPhot_mc_Z_EB__12->SetBinError(20,0.0002558378);
   etaPhot_mc_Z_EB__12->SetBinError(21,0.0002501452);
   etaPhot_mc_Z_EB__12->SetBinError(22,0.0002534428);
   etaPhot_mc_Z_EB__12->SetBinError(23,0.0002337455);
   etaPhot_mc_Z_EB__12->SetBinError(24,0.0002436425);
   etaPhot_mc_Z_EB__12->SetBinError(25,0.0002461946);
   etaPhot_mc_Z_EB__12->SetBinError(26,0.0002356984);
   etaPhot_mc_Z_EB__12->SetBinError(27,0.000238489);
   etaPhot_mc_Z_EB__12->SetBinError(28,0.0002372062);
   etaPhot_mc_Z_EB__12->SetBinError(29,0.0002375568);
   etaPhot_mc_Z_EB__12->SetBinError(30,0.0002272889);
   etaPhot_mc_Z_EB__12->SetBinError(31,0.0002291805);
   etaPhot_mc_Z_EB__12->SetBinError(32,0.0002350283);
   etaPhot_mc_Z_EB__12->SetBinError(33,0.0002371416);
   etaPhot_mc_Z_EB__12->SetBinError(34,0.0002411488);
   etaPhot_mc_Z_EB__12->SetBinError(35,0.000235245);
   etaPhot_mc_Z_EB__12->SetBinError(36,0.0002400953);
   etaPhot_mc_Z_EB__12->SetBinError(37,0.0002471791);
   etaPhot_mc_Z_EB__12->SetBinError(38,0.0002338055);
   etaPhot_mc_Z_EB__12->SetBinError(39,0.0002492722);
   etaPhot_mc_Z_EB__12->SetBinError(40,0.000250253);
   etaPhot_mc_Z_EB__12->SetBinError(41,0.0002532263);
   etaPhot_mc_Z_EB__12->SetBinError(42,0.0002518984);
   etaPhot_mc_Z_EB__12->SetBinError(43,0.0002678819);
   etaPhot_mc_Z_EB__12->SetBinError(44,0.000264921);
   etaPhot_mc_Z_EB__12->SetBinError(45,0.0001750007);
   etaPhot_mc_Z_EB__12->SetMinimum(1.582057e-07);
   etaPhot_mc_Z_EB__12->SetMaximum(0.2043095);
   etaPhot_mc_Z_EB__12->SetEntries(607274);
   etaPhot_mc_Z_EB__12->SetDirectory(0);
   etaPhot_mc_Z_EB__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EB__12->SetMarkerColor(ci);
   etaPhot_mc_Z_EB__12->SetMarkerStyle(20);
   etaPhot_mc_Z_EB__12->SetMarkerSize(0.7);
   etaPhot_mc_Z_EB__12->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EB__12->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EB__12->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.527341e+179,1.842955e+11,6.085328e+247,1.020296e+243,NULL,"brNDC");
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
   entry=leg->AddEntry("etaPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("etaPhot_mc_Signal_EB","signal #gamma + jet","F");
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
   etaPhot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EB",60,-3,3);
   ratio->SetBinContent(16,1.011477);
   ratio->SetBinContent(17,0.9927166);
   ratio->SetBinContent(18,1.005377);
   ratio->SetBinContent(19,0.9776238);
   ratio->SetBinContent(20,0.9875374);
   ratio->SetBinContent(21,0.9947151);
   ratio->SetBinContent(22,0.9691894);
   ratio->SetBinContent(23,1.010163);
   ratio->SetBinContent(24,0.9944506);
   ratio->SetBinContent(25,1.019487);
   ratio->SetBinContent(26,1.009844);
   ratio->SetBinContent(27,1.013657);
   ratio->SetBinContent(28,0.9995201);
   ratio->SetBinContent(29,1.008988);
   ratio->SetBinContent(30,1.011231);
   ratio->SetBinContent(31,1.015779);
   ratio->SetBinContent(32,1.01424);
   ratio->SetBinContent(33,1.021955);
   ratio->SetBinContent(34,1.013645);
   ratio->SetBinContent(35,1.020932);
   ratio->SetBinContent(36,0.9976736);
   ratio->SetBinContent(37,1.007641);
   ratio->SetBinContent(38,0.9946902);
   ratio->SetBinContent(39,0.9961761);
   ratio->SetBinContent(40,0.9938821);
   ratio->SetBinContent(41,0.9927563);
   ratio->SetBinContent(42,1.002619);
   ratio->SetBinContent(43,0.9634804);
   ratio->SetBinContent(44,0.9874548);
   ratio->SetBinContent(45,0.9592);
   ratio->SetBinError(16,0.01691487);
   ratio->SetBinError(17,0.01685951);
   ratio->SetBinError(18,0.01073742);
   ratio->SetBinError(19,0.01422881);
   ratio->SetBinError(20,0.01462883);
   ratio->SetBinError(21,0.01406774);
   ratio->SetBinError(22,0.02147896);
   ratio->SetBinError(23,0.01466248);
   ratio->SetBinError(24,0.01528278);
   ratio->SetBinError(25,0.01446094);
   ratio->SetBinError(26,0.01604828);
   ratio->SetBinError(27,0.01383439);
   ratio->SetBinError(28,0.01500796);
   ratio->SetBinError(29,0.02089547);
   ratio->SetBinError(30,0.01293289);
   ratio->SetBinError(31,0.01187836);
   ratio->SetBinError(32,0.009955162);
   ratio->SetBinError(33,0.009941952);
   ratio->SetBinError(34,0.01598678);
   ratio->SetBinError(35,0.01433655);
   ratio->SetBinError(36,0.01407022);
   ratio->SetBinError(37,0.0165244);
   ratio->SetBinError(38,0.0146302);
   ratio->SetBinError(39,0.01310768);
   ratio->SetBinError(40,0.01361878);
   ratio->SetBinError(41,0.01375326);
   ratio->SetBinError(42,0.01087328);
   ratio->SetBinError(43,0.018958);
   ratio->SetBinError(44,0.01309789);
   ratio->SetBinError(45,0.03576237);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(117448.1);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-3,1,3,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EB",60,-3,3);
   ratio->SetBinContent(16,1.011477);
   ratio->SetBinContent(17,0.9927166);
   ratio->SetBinContent(18,1.005377);
   ratio->SetBinContent(19,0.9776238);
   ratio->SetBinContent(20,0.9875374);
   ratio->SetBinContent(21,0.9947151);
   ratio->SetBinContent(22,0.9691894);
   ratio->SetBinContent(23,1.010163);
   ratio->SetBinContent(24,0.9944506);
   ratio->SetBinContent(25,1.019487);
   ratio->SetBinContent(26,1.009844);
   ratio->SetBinContent(27,1.013657);
   ratio->SetBinContent(28,0.9995201);
   ratio->SetBinContent(29,1.008988);
   ratio->SetBinContent(30,1.011231);
   ratio->SetBinContent(31,1.015779);
   ratio->SetBinContent(32,1.01424);
   ratio->SetBinContent(33,1.021955);
   ratio->SetBinContent(34,1.013645);
   ratio->SetBinContent(35,1.020932);
   ratio->SetBinContent(36,0.9976736);
   ratio->SetBinContent(37,1.007641);
   ratio->SetBinContent(38,0.9946902);
   ratio->SetBinContent(39,0.9961761);
   ratio->SetBinContent(40,0.9938821);
   ratio->SetBinContent(41,0.9927563);
   ratio->SetBinContent(42,1.002619);
   ratio->SetBinContent(43,0.9634804);
   ratio->SetBinContent(44,0.9874548);
   ratio->SetBinContent(45,0.9592);
   ratio->SetBinError(16,0.01691487);
   ratio->SetBinError(17,0.01685951);
   ratio->SetBinError(18,0.01073742);
   ratio->SetBinError(19,0.01422881);
   ratio->SetBinError(20,0.01462883);
   ratio->SetBinError(21,0.01406774);
   ratio->SetBinError(22,0.02147896);
   ratio->SetBinError(23,0.01466248);
   ratio->SetBinError(24,0.01528278);
   ratio->SetBinError(25,0.01446094);
   ratio->SetBinError(26,0.01604828);
   ratio->SetBinError(27,0.01383439);
   ratio->SetBinError(28,0.01500796);
   ratio->SetBinError(29,0.02089547);
   ratio->SetBinError(30,0.01293289);
   ratio->SetBinError(31,0.01187836);
   ratio->SetBinError(32,0.009955162);
   ratio->SetBinError(33,0.009941952);
   ratio->SetBinError(34,0.01598678);
   ratio->SetBinError(35,0.01433655);
   ratio->SetBinError(36,0.01407022);
   ratio->SetBinError(37,0.0165244);
   ratio->SetBinError(38,0.0146302);
   ratio->SetBinError(39,0.01310768);
   ratio->SetBinError(40,0.01361878);
   ratio->SetBinError(41,0.01375326);
   ratio->SetBinError(42,0.01087328);
   ratio->SetBinError(43,0.018958);
   ratio->SetBinError(44,0.01309789);
   ratio->SetBinError(45,0.03576237);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(117448.1);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("#gamma #eta");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   etaPhot->cd();
   etaPhot->Modified();
   etaPhot->cd();
   etaPhot->SetSelected(etaPhot);
}
