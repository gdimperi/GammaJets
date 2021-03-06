{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Wed Dec  3 10:37:44 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.01783288,3.525,0.1604959);
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
   
   TH1F *etaPhot_mc_Z_EE__4 = new TH1F("etaPhot_mc_Z_EE__4","etaPhot_mc_Z_EE",60,-3,3);
   etaPhot_mc_Z_EE__4->SetBinContent(6,0.002835674);
   etaPhot_mc_Z_EE__4->SetBinContent(7,0.004186708);
   etaPhot_mc_Z_EE__4->SetBinContent(8,0.004171391);
   etaPhot_mc_Z_EE__4->SetBinContent(9,0.004301743);
   etaPhot_mc_Z_EE__4->SetBinContent(10,0.003385916);
   etaPhot_mc_Z_EE__4->SetBinContent(11,0.1313736);
   etaPhot_mc_Z_EE__4->SetBinContent(12,0.1059235);
   etaPhot_mc_Z_EE__4->SetBinContent(13,0.09236584);
   etaPhot_mc_Z_EE__4->SetBinContent(14,0.1096815);
   etaPhot_mc_Z_EE__4->SetBinContent(15,0.04154748);
   etaPhot_mc_Z_EE__4->SetBinContent(46,0.0414449);
   etaPhot_mc_Z_EE__4->SetBinContent(47,0.1061292);
   etaPhot_mc_Z_EE__4->SetBinContent(48,0.09355596);
   etaPhot_mc_Z_EE__4->SetBinContent(49,0.1052025);
   etaPhot_mc_Z_EE__4->SetBinContent(50,0.1357752);
   etaPhot_mc_Z_EE__4->SetBinContent(51,0.003417409);
   etaPhot_mc_Z_EE__4->SetBinContent(52,0.003980722);
   etaPhot_mc_Z_EE__4->SetBinContent(53,0.003938277);
   etaPhot_mc_Z_EE__4->SetBinContent(54,0.004089507);
   etaPhot_mc_Z_EE__4->SetBinContent(55,0.002693061);
   etaPhot_mc_Z_EE__4->SetBinError(6,4.745779e-05);
   etaPhot_mc_Z_EE__4->SetBinError(7,6.636005e-05);
   etaPhot_mc_Z_EE__4->SetBinError(8,6.851917e-05);
   etaPhot_mc_Z_EE__4->SetBinError(9,7.06744e-05);
   etaPhot_mc_Z_EE__4->SetBinError(10,5.6027e-05);
   etaPhot_mc_Z_EE__4->SetBinError(11,0.00175857);
   etaPhot_mc_Z_EE__4->SetBinError(12,0.001564498);
   etaPhot_mc_Z_EE__4->SetBinError(13,0.001378461);
   etaPhot_mc_Z_EE__4->SetBinError(14,0.00212435);
   etaPhot_mc_Z_EE__4->SetBinError(15,0.001475369);
   etaPhot_mc_Z_EE__4->SetBinError(46,0.001506427);
   etaPhot_mc_Z_EE__4->SetBinError(47,0.002120873);
   etaPhot_mc_Z_EE__4->SetBinError(48,0.001489919);
   etaPhot_mc_Z_EE__4->SetBinError(49,0.001544895);
   etaPhot_mc_Z_EE__4->SetBinError(50,0.001792735);
   etaPhot_mc_Z_EE__4->SetBinError(51,5.57486e-05);
   etaPhot_mc_Z_EE__4->SetBinError(52,6.328409e-05);
   etaPhot_mc_Z_EE__4->SetBinError(53,6.080424e-05);
   etaPhot_mc_Z_EE__4->SetBinError(54,6.094686e-05);
   etaPhot_mc_Z_EE__4->SetBinError(55,4.257131e-05);
   etaPhot_mc_Z_EE__4->SetMinimum(3.316233e-07);
   etaPhot_mc_Z_EE__4->SetMaximum(0.7603412);
   etaPhot_mc_Z_EE__4->SetEntries(458246);
   etaPhot_mc_Z_EE__4->SetDirectory(0);
   etaPhot_mc_Z_EE__4->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EE__4->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EE__4->SetMarkerColor(ci);
   etaPhot_mc_Z_EE__4->SetMarkerStyle(20);
   etaPhot_mc_Z_EE__4->SetMarkerSize(0.7);
   etaPhot_mc_Z_EE__4->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EE__4->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EE__4->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EE__4->Draw("PE");
   
   TH1F *etaPhot_mc_Signal_EE__5 = new TH1F("etaPhot_mc_Signal_EE__5","etaPhot_mc_Signal_EE",60,-3,3);
   etaPhot_mc_Signal_EE__5->SetBinContent(6,0.03733908);
   etaPhot_mc_Signal_EE__5->SetBinContent(7,0.04917197);
   etaPhot_mc_Signal_EE__5->SetBinContent(8,0.05153122);
   etaPhot_mc_Signal_EE__5->SetBinContent(9,0.05192754);
   etaPhot_mc_Signal_EE__5->SetBinContent(10,0.05465744);
   etaPhot_mc_Signal_EE__5->SetBinContent(11,0.0578225);
   etaPhot_mc_Signal_EE__5->SetBinContent(12,0.0558912);
   etaPhot_mc_Signal_EE__5->SetBinContent(13,0.06133277);
   etaPhot_mc_Signal_EE__5->SetBinContent(14,0.05961673);
   etaPhot_mc_Signal_EE__5->SetBinContent(15,0.01969788);
   etaPhot_mc_Signal_EE__5->SetBinContent(46,0.01940943);
   etaPhot_mc_Signal_EE__5->SetBinContent(47,0.05769532);
   etaPhot_mc_Signal_EE__5->SetBinContent(48,0.0554693);
   etaPhot_mc_Signal_EE__5->SetBinContent(49,0.05720741);
   etaPhot_mc_Signal_EE__5->SetBinContent(50,0.05823844);
   etaPhot_mc_Signal_EE__5->SetBinContent(51,0.05684411);
   etaPhot_mc_Signal_EE__5->SetBinContent(52,0.05487205);
   etaPhot_mc_Signal_EE__5->SetBinContent(53,0.05235107);
   etaPhot_mc_Signal_EE__5->SetBinContent(54,0.05130983);
   etaPhot_mc_Signal_EE__5->SetBinContent(55,0.0376147);
   etaPhot_mc_Signal_EE__5->SetBinError(6,0.0005214183);
   etaPhot_mc_Signal_EE__5->SetBinError(7,0.002496677);
   etaPhot_mc_Signal_EE__5->SetBinError(8,0.001731583);
   etaPhot_mc_Signal_EE__5->SetBinError(9,0.0008618118);
   etaPhot_mc_Signal_EE__5->SetBinError(10,0.0008944373);
   etaPhot_mc_Signal_EE__5->SetBinError(11,0.0009245077);
   etaPhot_mc_Signal_EE__5->SetBinError(12,0.0008271315);
   etaPhot_mc_Signal_EE__5->SetBinError(13,0.001816654);
   etaPhot_mc_Signal_EE__5->SetBinError(14,0.0008880979);
   etaPhot_mc_Signal_EE__5->SetBinError(15,0.0005105804);
   etaPhot_mc_Signal_EE__5->SetBinError(46,0.0005498932);
   etaPhot_mc_Signal_EE__5->SetBinError(47,0.0009265964);
   etaPhot_mc_Signal_EE__5->SetBinError(48,0.0008193356);
   etaPhot_mc_Signal_EE__5->SetBinError(49,0.0008923361);
   etaPhot_mc_Signal_EE__5->SetBinError(50,0.0008773393);
   etaPhot_mc_Signal_EE__5->SetBinError(51,0.0009013677);
   etaPhot_mc_Signal_EE__5->SetBinError(52,0.002087884);
   etaPhot_mc_Signal_EE__5->SetBinError(53,0.0009318858);
   etaPhot_mc_Signal_EE__5->SetBinError(54,0.001954897);
   etaPhot_mc_Signal_EE__5->SetBinError(55,0.0005092675);
   etaPhot_mc_Signal_EE__5->SetEntries(592312);
   etaPhot_mc_Signal_EE__5->SetDirectory(0);
   etaPhot_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EE__5->SetLineColor(ci);
   etaPhot_mc_Signal_EE__5->SetLineWidth(2);
   etaPhot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *etaPhot_mc_Z_EE__6 = new TH1F("etaPhot_mc_Z_EE__6","etaPhot_mc_Z_EE",60,-3,3);
   etaPhot_mc_Z_EE__6->SetBinContent(6,0.002835674);
   etaPhot_mc_Z_EE__6->SetBinContent(7,0.004186708);
   etaPhot_mc_Z_EE__6->SetBinContent(8,0.004171391);
   etaPhot_mc_Z_EE__6->SetBinContent(9,0.004301743);
   etaPhot_mc_Z_EE__6->SetBinContent(10,0.003385916);
   etaPhot_mc_Z_EE__6->SetBinContent(11,0.1313736);
   etaPhot_mc_Z_EE__6->SetBinContent(12,0.1059235);
   etaPhot_mc_Z_EE__6->SetBinContent(13,0.09236584);
   etaPhot_mc_Z_EE__6->SetBinContent(14,0.1096815);
   etaPhot_mc_Z_EE__6->SetBinContent(15,0.04154748);
   etaPhot_mc_Z_EE__6->SetBinContent(46,0.0414449);
   etaPhot_mc_Z_EE__6->SetBinContent(47,0.1061292);
   etaPhot_mc_Z_EE__6->SetBinContent(48,0.09355596);
   etaPhot_mc_Z_EE__6->SetBinContent(49,0.1052025);
   etaPhot_mc_Z_EE__6->SetBinContent(50,0.1357752);
   etaPhot_mc_Z_EE__6->SetBinContent(51,0.003417409);
   etaPhot_mc_Z_EE__6->SetBinContent(52,0.003980722);
   etaPhot_mc_Z_EE__6->SetBinContent(53,0.003938277);
   etaPhot_mc_Z_EE__6->SetBinContent(54,0.004089507);
   etaPhot_mc_Z_EE__6->SetBinContent(55,0.002693061);
   etaPhot_mc_Z_EE__6->SetBinError(6,4.745779e-05);
   etaPhot_mc_Z_EE__6->SetBinError(7,6.636005e-05);
   etaPhot_mc_Z_EE__6->SetBinError(8,6.851917e-05);
   etaPhot_mc_Z_EE__6->SetBinError(9,7.06744e-05);
   etaPhot_mc_Z_EE__6->SetBinError(10,5.6027e-05);
   etaPhot_mc_Z_EE__6->SetBinError(11,0.00175857);
   etaPhot_mc_Z_EE__6->SetBinError(12,0.001564498);
   etaPhot_mc_Z_EE__6->SetBinError(13,0.001378461);
   etaPhot_mc_Z_EE__6->SetBinError(14,0.00212435);
   etaPhot_mc_Z_EE__6->SetBinError(15,0.001475369);
   etaPhot_mc_Z_EE__6->SetBinError(46,0.001506427);
   etaPhot_mc_Z_EE__6->SetBinError(47,0.002120873);
   etaPhot_mc_Z_EE__6->SetBinError(48,0.001489919);
   etaPhot_mc_Z_EE__6->SetBinError(49,0.001544895);
   etaPhot_mc_Z_EE__6->SetBinError(50,0.001792735);
   etaPhot_mc_Z_EE__6->SetBinError(51,5.57486e-05);
   etaPhot_mc_Z_EE__6->SetBinError(52,6.328409e-05);
   etaPhot_mc_Z_EE__6->SetBinError(53,6.080424e-05);
   etaPhot_mc_Z_EE__6->SetBinError(54,6.094686e-05);
   etaPhot_mc_Z_EE__6->SetBinError(55,4.257131e-05);
   etaPhot_mc_Z_EE__6->SetMinimum(3.316233e-07);
   etaPhot_mc_Z_EE__6->SetMaximum(0.7603412);
   etaPhot_mc_Z_EE__6->SetEntries(458246);
   etaPhot_mc_Z_EE__6->SetDirectory(0);
   etaPhot_mc_Z_EE__6->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EE__6->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   etaPhot_mc_Z_EE__6->SetMarkerColor(ci);
   etaPhot_mc_Z_EE__6->SetMarkerStyle(20);
   etaPhot_mc_Z_EE__6->SetMarkerSize(0.7);
   etaPhot_mc_Z_EE__6->GetXaxis()->SetTitle("#gamma #eta");
   etaPhot_mc_Z_EE__6->GetYaxis()->SetTitle("Entries/0.1");
   etaPhot_mc_Z_EE__6->GetYaxis()->SetTitleOffset(0.9);
   etaPhot_mc_Z_EE__6->Draw("PESAME");
   
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
   entry=leg->AddEntry("etaPhot_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("etaPhot_mc_Signal_EE","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EE",60,-3,3);
   ratio->SetBinContent(6,0.07594386);
   ratio->SetBinContent(7,0.0851442);
   ratio->SetBinContent(8,0.08094881);
   ratio->SetBinContent(9,0.08284126);
   ratio->SetBinContent(10,0.06194795);
   ratio->SetBinContent(11,2.272015);
   ratio->SetBinContent(12,1.895173);
   ratio->SetBinContent(13,1.505978);
   ratio->SetBinContent(14,1.839777);
   ratio->SetBinContent(15,2.109236);
   ratio->SetBinContent(46,2.135297);
   ratio->SetBinContent(47,1.839477);
   ratio->SetBinContent(48,1.686626);
   ratio->SetBinContent(49,1.838966);
   ratio->SetBinContent(50,2.331367);
   ratio->SetBinContent(51,0.06011897);
   ratio->SetBinContent(52,0.07254553);
   ratio->SetBinContent(53,0.07522821);
   ratio->SetBinContent(54,0.07970222);
   ratio->SetBinContent(55,0.07159598);
   ratio->SetBinError(6,0.001655329);
   ratio->SetBinError(7,0.004528894);
   ratio->SetBinError(8,0.003027688);
   ratio->SetBinError(9,0.00193459);
   ratio->SetBinError(10,0.001441671);
   ratio->SetBinError(11,0.04737708);
   ratio->SetBinError(12,0.03962517);
   ratio->SetBinError(13,0.0499487);
   ratio->SetBinError(14,0.04495414);
   ratio->SetBinError(15,0.09273126);
   ratio->SetBinError(46,0.09840485);
   ratio->SetBinError(47,0.04715969);
   ratio->SetBinError(48,0.03663518);
   ratio->SetBinError(49,0.03939656);
   ratio->SetBinError(50,0.04670189);
   ratio->SetBinError(51,0.001367699);
   ratio->SetBinError(52,0.002991605);
   ratio->SetBinError(53,0.001772637);
   ratio->SetBinError(54,0.003260693);
   ratio->SetBinError(55,0.001490145);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(12009.05);
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
   
   TH1F *ratio = new TH1F("ratio","etaPhot_mc_Z_EE",60,-3,3);
   ratio->SetBinContent(6,0.07594386);
   ratio->SetBinContent(7,0.0851442);
   ratio->SetBinContent(8,0.08094881);
   ratio->SetBinContent(9,0.08284126);
   ratio->SetBinContent(10,0.06194795);
   ratio->SetBinContent(11,2.272015);
   ratio->SetBinContent(12,1.895173);
   ratio->SetBinContent(13,1.505978);
   ratio->SetBinContent(14,1.839777);
   ratio->SetBinContent(15,2.109236);
   ratio->SetBinContent(46,2.135297);
   ratio->SetBinContent(47,1.839477);
   ratio->SetBinContent(48,1.686626);
   ratio->SetBinContent(49,1.838966);
   ratio->SetBinContent(50,2.331367);
   ratio->SetBinContent(51,0.06011897);
   ratio->SetBinContent(52,0.07254553);
   ratio->SetBinContent(53,0.07522821);
   ratio->SetBinContent(54,0.07970222);
   ratio->SetBinContent(55,0.07159598);
   ratio->SetBinError(6,0.001655329);
   ratio->SetBinError(7,0.004528894);
   ratio->SetBinError(8,0.003027688);
   ratio->SetBinError(9,0.00193459);
   ratio->SetBinError(10,0.001441671);
   ratio->SetBinError(11,0.04737708);
   ratio->SetBinError(12,0.03962517);
   ratio->SetBinError(13,0.0499487);
   ratio->SetBinError(14,0.04495414);
   ratio->SetBinError(15,0.09273126);
   ratio->SetBinError(46,0.09840485);
   ratio->SetBinError(47,0.04715969);
   ratio->SetBinError(48,0.03663518);
   ratio->SetBinError(49,0.03939656);
   ratio->SetBinError(50,0.04670189);
   ratio->SetBinError(51,0.001367699);
   ratio->SetBinError(52,0.002991605);
   ratio->SetBinError(53,0.001772637);
   ratio->SetBinError(54,0.003260693);
   ratio->SetBinError(55,0.001490145);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(12009.05);
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
