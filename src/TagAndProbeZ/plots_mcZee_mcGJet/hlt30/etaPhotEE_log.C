{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Sat Nov 29 18:21:10 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.009237239,3.525,0.08313514);
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
   etaPhot_mc_Z_EE__4->SetBinContent(6,0.0271346);
   etaPhot_mc_Z_EE__4->SetBinContent(7,0.04180348);
   etaPhot_mc_Z_EE__4->SetBinContent(8,0.04942924);
   etaPhot_mc_Z_EE__4->SetBinContent(9,0.05142972);
   etaPhot_mc_Z_EE__4->SetBinContent(10,0.0585532);
   etaPhot_mc_Z_EE__4->SetBinContent(11,0.0682404);
   etaPhot_mc_Z_EE__4->SetBinContent(12,0.05685515);
   etaPhot_mc_Z_EE__4->SetBinContent(13,0.06055799);
   etaPhot_mc_Z_EE__4->SetBinContent(14,0.06630222);
   etaPhot_mc_Z_EE__4->SetBinContent(15,0.03146363);
   etaPhot_mc_Z_EE__4->SetBinContent(46,0.01714807);
   etaPhot_mc_Z_EE__4->SetBinContent(47,0.05722749);
   etaPhot_mc_Z_EE__4->SetBinContent(48,0.05914941);
   etaPhot_mc_Z_EE__4->SetBinContent(49,0.06082145);
   etaPhot_mc_Z_EE__4->SetBinContent(50,0.06478597);
   etaPhot_mc_Z_EE__4->SetBinContent(51,0.05638672);
   etaPhot_mc_Z_EE__4->SetBinContent(52,0.05417198);
   etaPhot_mc_Z_EE__4->SetBinContent(53,0.04423661);
   etaPhot_mc_Z_EE__4->SetBinContent(54,0.04241139);
   etaPhot_mc_Z_EE__4->SetBinContent(55,0.03189128);
   etaPhot_mc_Z_EE__4->SetBinError(6,0.001312075);
   etaPhot_mc_Z_EE__4->SetBinError(7,0.001866815);
   etaPhot_mc_Z_EE__4->SetBinError(8,0.002366692);
   etaPhot_mc_Z_EE__4->SetBinError(9,0.002330277);
   etaPhot_mc_Z_EE__4->SetBinError(10,0.0027308);
   etaPhot_mc_Z_EE__4->SetBinError(11,0.00301829);
   etaPhot_mc_Z_EE__4->SetBinError(12,0.002443517);
   etaPhot_mc_Z_EE__4->SetBinError(13,0.002745156);
   etaPhot_mc_Z_EE__4->SetBinError(14,0.003469946);
   etaPhot_mc_Z_EE__4->SetBinError(15,0.00330211);
   etaPhot_mc_Z_EE__4->SetBinError(46,0.001301206);
   etaPhot_mc_Z_EE__4->SetBinError(47,0.003178267);
   etaPhot_mc_Z_EE__4->SetBinError(48,0.002885269);
   etaPhot_mc_Z_EE__4->SetBinError(49,0.003044034);
   etaPhot_mc_Z_EE__4->SetBinError(50,0.002953189);
   etaPhot_mc_Z_EE__4->SetBinError(51,0.002424111);
   etaPhot_mc_Z_EE__4->SetBinError(52,0.002353411);
   etaPhot_mc_Z_EE__4->SetBinError(53,0.001906519);
   etaPhot_mc_Z_EE__4->SetBinError(54,0.001904419);
   etaPhot_mc_Z_EE__4->SetBinError(55,0.001614171);
   etaPhot_mc_Z_EE__4->SetMinimum(8.257652e-07);
   etaPhot_mc_Z_EE__4->SetMaximum(0.3821463);
   etaPhot_mc_Z_EE__4->SetEntries(25857);
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
   etaPhot_mc_Signal_EE__5->SetBinContent(6,0.04394254);
   etaPhot_mc_Signal_EE__5->SetBinContent(7,0.05644209);
   etaPhot_mc_Signal_EE__5->SetBinContent(8,0.05479189);
   etaPhot_mc_Signal_EE__5->SetBinContent(9,0.05544057);
   etaPhot_mc_Signal_EE__5->SetBinContent(10,0.05393758);
   etaPhot_mc_Signal_EE__5->SetBinContent(11,0.05716034);
   etaPhot_mc_Signal_EE__5->SetBinContent(12,0.0523482);
   etaPhot_mc_Signal_EE__5->SetBinContent(13,0.05313);
   etaPhot_mc_Signal_EE__5->SetBinContent(14,0.05250955);
   etaPhot_mc_Signal_EE__5->SetBinContent(15,0.01788807);
   etaPhot_mc_Signal_EE__5->SetBinContent(46,0.01624329);
   etaPhot_mc_Signal_EE__5->SetBinContent(47,0.04796199);
   etaPhot_mc_Signal_EE__5->SetBinContent(48,0.05265125);
   etaPhot_mc_Signal_EE__5->SetBinContent(49,0.05268591);
   etaPhot_mc_Signal_EE__5->SetBinContent(50,0.05513393);
   etaPhot_mc_Signal_EE__5->SetBinContent(51,0.05867041);
   etaPhot_mc_Signal_EE__5->SetBinContent(52,0.05647388);
   etaPhot_mc_Signal_EE__5->SetBinContent(53,0.05929705);
   etaPhot_mc_Signal_EE__5->SetBinContent(54,0.05950226);
   etaPhot_mc_Signal_EE__5->SetBinContent(55,0.04378919);
   etaPhot_mc_Signal_EE__5->SetBinError(6,0.0006818982);
   etaPhot_mc_Signal_EE__5->SetBinError(7,0.001114803);
   etaPhot_mc_Signal_EE__5->SetBinError(8,0.001080358);
   etaPhot_mc_Signal_EE__5->SetBinError(9,0.001084023);
   etaPhot_mc_Signal_EE__5->SetBinError(10,0.001065902);
   etaPhot_mc_Signal_EE__5->SetBinError(11,0.00113661);
   etaPhot_mc_Signal_EE__5->SetBinError(12,0.001024529);
   etaPhot_mc_Signal_EE__5->SetBinError(13,0.00107841);
   etaPhot_mc_Signal_EE__5->SetBinError(14,0.001046934);
   etaPhot_mc_Signal_EE__5->SetBinError(15,0.000658414);
   etaPhot_mc_Signal_EE__5->SetBinError(46,0.0005732987);
   etaPhot_mc_Signal_EE__5->SetBinError(47,0.000980807);
   etaPhot_mc_Signal_EE__5->SetBinError(48,0.001074049);
   etaPhot_mc_Signal_EE__5->SetBinError(49,0.00102331);
   etaPhot_mc_Signal_EE__5->SetBinError(50,0.001071624);
   etaPhot_mc_Signal_EE__5->SetBinError(51,0.001152258);
   etaPhot_mc_Signal_EE__5->SetBinError(52,0.001107772);
   etaPhot_mc_Signal_EE__5->SetBinError(53,0.001176984);
   etaPhot_mc_Signal_EE__5->SetBinError(54,0.001153905);
   etaPhot_mc_Signal_EE__5->SetBinError(55,0.0006783574);
   etaPhot_mc_Signal_EE__5->SetEntries(477019);
   etaPhot_mc_Signal_EE__5->SetDirectory(0);
   etaPhot_mc_Signal_EE__5->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   etaPhot_mc_Signal_EE__5->SetLineColor(ci);
   etaPhot_mc_Signal_EE__5->SetLineWidth(2);
   etaPhot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *etaPhot_mc_Z_EE__6 = new TH1F("etaPhot_mc_Z_EE__6","etaPhot_mc_Z_EE",60,-3,3);
   etaPhot_mc_Z_EE__6->SetBinContent(6,0.0271346);
   etaPhot_mc_Z_EE__6->SetBinContent(7,0.04180348);
   etaPhot_mc_Z_EE__6->SetBinContent(8,0.04942924);
   etaPhot_mc_Z_EE__6->SetBinContent(9,0.05142972);
   etaPhot_mc_Z_EE__6->SetBinContent(10,0.0585532);
   etaPhot_mc_Z_EE__6->SetBinContent(11,0.0682404);
   etaPhot_mc_Z_EE__6->SetBinContent(12,0.05685515);
   etaPhot_mc_Z_EE__6->SetBinContent(13,0.06055799);
   etaPhot_mc_Z_EE__6->SetBinContent(14,0.06630222);
   etaPhot_mc_Z_EE__6->SetBinContent(15,0.03146363);
   etaPhot_mc_Z_EE__6->SetBinContent(46,0.01714807);
   etaPhot_mc_Z_EE__6->SetBinContent(47,0.05722749);
   etaPhot_mc_Z_EE__6->SetBinContent(48,0.05914941);
   etaPhot_mc_Z_EE__6->SetBinContent(49,0.06082145);
   etaPhot_mc_Z_EE__6->SetBinContent(50,0.06478597);
   etaPhot_mc_Z_EE__6->SetBinContent(51,0.05638672);
   etaPhot_mc_Z_EE__6->SetBinContent(52,0.05417198);
   etaPhot_mc_Z_EE__6->SetBinContent(53,0.04423661);
   etaPhot_mc_Z_EE__6->SetBinContent(54,0.04241139);
   etaPhot_mc_Z_EE__6->SetBinContent(55,0.03189128);
   etaPhot_mc_Z_EE__6->SetBinError(6,0.001312075);
   etaPhot_mc_Z_EE__6->SetBinError(7,0.001866815);
   etaPhot_mc_Z_EE__6->SetBinError(8,0.002366692);
   etaPhot_mc_Z_EE__6->SetBinError(9,0.002330277);
   etaPhot_mc_Z_EE__6->SetBinError(10,0.0027308);
   etaPhot_mc_Z_EE__6->SetBinError(11,0.00301829);
   etaPhot_mc_Z_EE__6->SetBinError(12,0.002443517);
   etaPhot_mc_Z_EE__6->SetBinError(13,0.002745156);
   etaPhot_mc_Z_EE__6->SetBinError(14,0.003469946);
   etaPhot_mc_Z_EE__6->SetBinError(15,0.00330211);
   etaPhot_mc_Z_EE__6->SetBinError(46,0.001301206);
   etaPhot_mc_Z_EE__6->SetBinError(47,0.003178267);
   etaPhot_mc_Z_EE__6->SetBinError(48,0.002885269);
   etaPhot_mc_Z_EE__6->SetBinError(49,0.003044034);
   etaPhot_mc_Z_EE__6->SetBinError(50,0.002953189);
   etaPhot_mc_Z_EE__6->SetBinError(51,0.002424111);
   etaPhot_mc_Z_EE__6->SetBinError(52,0.002353411);
   etaPhot_mc_Z_EE__6->SetBinError(53,0.001906519);
   etaPhot_mc_Z_EE__6->SetBinError(54,0.001904419);
   etaPhot_mc_Z_EE__6->SetBinError(55,0.001614171);
   etaPhot_mc_Z_EE__6->SetMinimum(8.257652e-07);
   etaPhot_mc_Z_EE__6->SetMaximum(0.3821463);
   etaPhot_mc_Z_EE__6->SetEntries(25857);
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
   ratio->SetBinContent(6,0.6175018);
   ratio->SetBinContent(7,0.7406438);
   ratio->SetBinContent(8,0.9021269);
   ratio->SetBinContent(9,0.9276548);
   ratio->SetBinContent(10,1.085573);
   ratio->SetBinContent(11,1.193842);
   ratio->SetBinContent(12,1.086096);
   ratio->SetBinContent(13,1.139808);
   ratio->SetBinContent(14,1.26267);
   ratio->SetBinContent(15,1.758917);
   ratio->SetBinContent(46,1.055702);
   ratio->SetBinContent(47,1.193184);
   ratio->SetBinContent(48,1.123419);
   ratio->SetBinContent(49,1.154416);
   ratio->SetBinContent(50,1.175065);
   ratio->SetBinContent(51,0.9610759);
   ratio->SetBinContent(52,0.9592395);
   ratio->SetBinContent(53,0.746017);
   ratio->SetBinContent(54,0.7127694);
   ratio->SetBinContent(55,0.728291);
   ratio->SetBinError(6,0.0313588);
   ratio->SetBinError(7,0.03616553);
   ratio->SetBinError(8,0.04671337);
   ratio->SetBinError(9,0.04577866);
   ratio->SetBinError(10,0.05498645);
   ratio->SetBinError(11,0.0578947);
   ratio->SetBinError(12,0.05129021);
   ratio->SetBinError(13,0.05661178);
   ratio->SetBinError(14,0.07071521);
   ratio->SetBinError(15,0.1956221);
   ratio->SetBinError(46,0.08834883);
   ratio->SetBinError(47,0.07061589);
   ratio->SetBinError(48,0.05939853);
   ratio->SetBinError(49,0.06197524);
   ratio->SetBinError(50,0.05822999);
   ratio->SetBinError(51,0.04542464);
   ratio->SetBinError(52,0.04572361);
   ratio->SetBinError(53,0.03539799);
   ratio->SetBinError(54,0.03486307);
   ratio->SetBinError(55,0.03855022);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(4495.127);
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
   ratio->SetBinContent(6,0.6175018);
   ratio->SetBinContent(7,0.7406438);
   ratio->SetBinContent(8,0.9021269);
   ratio->SetBinContent(9,0.9276548);
   ratio->SetBinContent(10,1.085573);
   ratio->SetBinContent(11,1.193842);
   ratio->SetBinContent(12,1.086096);
   ratio->SetBinContent(13,1.139808);
   ratio->SetBinContent(14,1.26267);
   ratio->SetBinContent(15,1.758917);
   ratio->SetBinContent(46,1.055702);
   ratio->SetBinContent(47,1.193184);
   ratio->SetBinContent(48,1.123419);
   ratio->SetBinContent(49,1.154416);
   ratio->SetBinContent(50,1.175065);
   ratio->SetBinContent(51,0.9610759);
   ratio->SetBinContent(52,0.9592395);
   ratio->SetBinContent(53,0.746017);
   ratio->SetBinContent(54,0.7127694);
   ratio->SetBinContent(55,0.728291);
   ratio->SetBinError(6,0.0313588);
   ratio->SetBinError(7,0.03616553);
   ratio->SetBinError(8,0.04671337);
   ratio->SetBinError(9,0.04577866);
   ratio->SetBinError(10,0.05498645);
   ratio->SetBinError(11,0.0578947);
   ratio->SetBinError(12,0.05129021);
   ratio->SetBinError(13,0.05661178);
   ratio->SetBinError(14,0.07071521);
   ratio->SetBinError(15,0.1956221);
   ratio->SetBinError(46,0.08834883);
   ratio->SetBinError(47,0.07061589);
   ratio->SetBinError(48,0.05939853);
   ratio->SetBinError(49,0.06197524);
   ratio->SetBinError(50,0.05822999);
   ratio->SetBinError(51,0.04542464);
   ratio->SetBinError(52,0.04572361);
   ratio->SetBinError(53,0.03539799);
   ratio->SetBinError(54,0.03486307);
   ratio->SetBinError(55,0.03855022);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(4495.127);
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
