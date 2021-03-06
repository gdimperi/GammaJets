{
//=========Macro generated from canvas: mvaIdPhot/mvaIdPhot
//=========  (Wed Sep 17 23:45:23 2014) by ROOT version5.32/00
   TCanvas *mvaIdPhot = new TCanvas("mvaIdPhot", "mvaIdPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mvaIdPhot->SetHighLightColor(2);
   mvaIdPhot->Range(-0.1625,-0.02316799,1.0875,0.2085119);
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
   
   TH1F *mvaIdPhot_mc_Z_EB__34 = new TH1F("mvaIdPhot_mc_Z_EB__34","mvaIdPhot_mc_Z_EB",100,0,1);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(84,0.009470511);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(85,0.02314884);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(86,0.02682404);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(87,0.03213878);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(88,0.03854281);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(89,0.0464199);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(90,0.05677462);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(91,0.06988731);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(92,0.08728952);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(93,0.1161279);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(94,0.1546529);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(95,0.1782007);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(96,0.1245578);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(97,0.03251288);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(98,0.002760184);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(99,0.0004913248);
   mvaIdPhot_mc_Z_EB__34->SetBinContent(100,0.0001999249);
   mvaIdPhot_mc_Z_EB__34->SetBinError(84,7.196645e-05);
   mvaIdPhot_mc_Z_EB__34->SetBinError(85,0.000112388);
   mvaIdPhot_mc_Z_EB__34->SetBinError(86,0.0001229361);
   mvaIdPhot_mc_Z_EB__34->SetBinError(87,0.0001402372);
   mvaIdPhot_mc_Z_EB__34->SetBinError(88,0.0001598261);
   mvaIdPhot_mc_Z_EB__34->SetBinError(89,0.0001812285);
   mvaIdPhot_mc_Z_EB__34->SetBinError(90,0.0002053604);
   mvaIdPhot_mc_Z_EB__34->SetBinError(91,0.0002350041);
   mvaIdPhot_mc_Z_EB__34->SetBinError(92,0.0002762045);
   mvaIdPhot_mc_Z_EB__34->SetBinError(93,0.0003442663);
   mvaIdPhot_mc_Z_EB__34->SetBinError(94,0.0004420024);
   mvaIdPhot_mc_Z_EB__34->SetBinError(95,0.0005238191);
   mvaIdPhot_mc_Z_EB__34->SetBinError(96,0.000474102);
   mvaIdPhot_mc_Z_EB__34->SetBinError(97,0.0002561804);
   mvaIdPhot_mc_Z_EB__34->SetBinError(98,7.041685e-05);
   mvaIdPhot_mc_Z_EB__34->SetBinError(99,2.490509e-05);
   mvaIdPhot_mc_Z_EB__34->SetBinError(100,1.155091e-05);
   mvaIdPhot_mc_Z_EB__34->SetMinimum(2.175154e-08);
   mvaIdPhot_mc_Z_EB__34->SetMaximum(0.9979239);
   mvaIdPhot_mc_Z_EB__34->SetEntries(1538084);
   mvaIdPhot_mc_Z_EB__34->SetDirectory(0);
   mvaIdPhot_mc_Z_EB__34->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__34->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EB__34->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EB__34->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EB__34->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EB__34->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EB__34->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EB__34->Draw("PE");
   
   TH1F *mvaIdPhot_mc_Signal_EB__35 = new TH1F("mvaIdPhot_mc_Signal_EB__35","mvaIdPhot_mc_Signal_EB",100,0,1);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(84,0.003530319);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(85,0.00916055);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(86,0.01239901);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(87,0.01561915);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(88,0.02051066);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(89,0.02652904);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(90,0.03466091);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(91,0.04722031);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(92,0.06478857);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(93,0.09977923);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(94,0.1714815);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(95,0.2455675);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(96,0.1981975);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(97,0.04662991);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(98,0.003594388);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(99,0.0002988638);
   mvaIdPhot_mc_Signal_EB__35->SetBinContent(100,3.261739e-05);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(84,6.35228e-05);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(85,0.0001048737);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(86,0.0003642352);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(87,0.0002175747);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(88,0.0003605993);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(89,0.0003929003);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(90,0.0004311816);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(91,0.0005826888);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(92,0.0005581141);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(93,0.0005733166);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(94,0.0008640399);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(95,0.001043751);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(96,0.0009110653);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(97,0.000388721);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(98,6.460978e-05);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(99,1.56361e-05);
   mvaIdPhot_mc_Signal_EB__35->SetBinError(100,4.315644e-06);
   mvaIdPhot_mc_Signal_EB__35->SetEntries(5244647);
   mvaIdPhot_mc_Signal_EB__35->SetDirectory(0);
   mvaIdPhot_mc_Signal_EB__35->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EB__35->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EB__35->SetLineColor(ci);
   mvaIdPhot_mc_Signal_EB__35->SetLineWidth(2);
   mvaIdPhot_mc_Signal_EB__35->Draw("HSAME");
   
   TH1F *mvaIdPhot_mc_Z_EB__36 = new TH1F("mvaIdPhot_mc_Z_EB__36","mvaIdPhot_mc_Z_EB",100,0,1);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(84,0.009470511);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(85,0.02314884);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(86,0.02682404);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(87,0.03213878);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(88,0.03854281);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(89,0.0464199);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(90,0.05677462);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(91,0.06988731);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(92,0.08728952);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(93,0.1161279);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(94,0.1546529);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(95,0.1782007);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(96,0.1245578);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(97,0.03251288);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(98,0.002760184);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(99,0.0004913248);
   mvaIdPhot_mc_Z_EB__36->SetBinContent(100,0.0001999249);
   mvaIdPhot_mc_Z_EB__36->SetBinError(84,7.196645e-05);
   mvaIdPhot_mc_Z_EB__36->SetBinError(85,0.000112388);
   mvaIdPhot_mc_Z_EB__36->SetBinError(86,0.0001229361);
   mvaIdPhot_mc_Z_EB__36->SetBinError(87,0.0001402372);
   mvaIdPhot_mc_Z_EB__36->SetBinError(88,0.0001598261);
   mvaIdPhot_mc_Z_EB__36->SetBinError(89,0.0001812285);
   mvaIdPhot_mc_Z_EB__36->SetBinError(90,0.0002053604);
   mvaIdPhot_mc_Z_EB__36->SetBinError(91,0.0002350041);
   mvaIdPhot_mc_Z_EB__36->SetBinError(92,0.0002762045);
   mvaIdPhot_mc_Z_EB__36->SetBinError(93,0.0003442663);
   mvaIdPhot_mc_Z_EB__36->SetBinError(94,0.0004420024);
   mvaIdPhot_mc_Z_EB__36->SetBinError(95,0.0005238191);
   mvaIdPhot_mc_Z_EB__36->SetBinError(96,0.000474102);
   mvaIdPhot_mc_Z_EB__36->SetBinError(97,0.0002561804);
   mvaIdPhot_mc_Z_EB__36->SetBinError(98,7.041685e-05);
   mvaIdPhot_mc_Z_EB__36->SetBinError(99,2.490509e-05);
   mvaIdPhot_mc_Z_EB__36->SetBinError(100,1.155091e-05);
   mvaIdPhot_mc_Z_EB__36->SetMinimum(2.175154e-08);
   mvaIdPhot_mc_Z_EB__36->SetMaximum(0.9979239);
   mvaIdPhot_mc_Z_EB__36->SetEntries(1538084);
   mvaIdPhot_mc_Z_EB__36->SetDirectory(0);
   mvaIdPhot_mc_Z_EB__36->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__36->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__36->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EB__36->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EB__36->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EB__36->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EB__36->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EB__36->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EB__36->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.346344e-310,4.244024e-314,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("mvaIdPhot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mvaIdPhot_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","mvaIdPhot_mc_Z_EB",100,0,1);
   ratio->SetBinContent(84,2.682622);
   ratio->SetBinContent(85,2.527014);
   ratio->SetBinContent(86,2.163402);
   ratio->SetBinContent(87,2.057653);
   ratio->SetBinContent(88,1.87916);
   ratio->SetBinContent(89,1.749776);
   ratio->SetBinContent(90,1.638002);
   ratio->SetBinContent(91,1.480027);
   ratio->SetBinContent(92,1.347298);
   ratio->SetBinContent(93,1.163848);
   ratio->SetBinContent(94,0.9018639);
   ratio->SetBinContent(95,0.7256688);
   ratio->SetBinContent(96,0.628453);
   ratio->SetBinContent(97,0.6972539);
   ratio->SetBinContent(98,0.7679151);
   ratio->SetBinContent(99,1.643976);
   ratio->SetBinContent(100,6.129396);
   ratio->SetBinError(84,0.05239779);
   ratio->SetBinError(85,0.03142423);
   ratio->SetBinError(86,0.06432122);
   ratio->SetBinError(87,0.03003644);
   ratio->SetBinError(88,0.03394416);
   ratio->SetBinError(89,0.02679981);
   ratio->SetBinError(90,0.02122063);
   ratio->SetBinError(91,0.01892917);
   ratio->SetBinError(92,0.01236436);
   ratio->SetBinError(93,0.007524918);
   ratio->SetBinError(94,0.005224323);
   ratio->SetBinError(95,0.003750114);
   ratio->SetBinError(96,0.003750655);
   ratio->SetBinError(97,0.007998025);
   ratio->SetBinError(98,0.02396524);
   ratio->SetBinError(99,0.1197585);
   ratio->SetBinError(100,0.8849357);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1124.999);
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
   
   TH1F *ratio = new TH1F("ratio","mvaIdPhot_mc_Z_EB",100,0,1);
   ratio->SetBinContent(84,2.682622);
   ratio->SetBinContent(85,2.527014);
   ratio->SetBinContent(86,2.163402);
   ratio->SetBinContent(87,2.057653);
   ratio->SetBinContent(88,1.87916);
   ratio->SetBinContent(89,1.749776);
   ratio->SetBinContent(90,1.638002);
   ratio->SetBinContent(91,1.480027);
   ratio->SetBinContent(92,1.347298);
   ratio->SetBinContent(93,1.163848);
   ratio->SetBinContent(94,0.9018639);
   ratio->SetBinContent(95,0.7256688);
   ratio->SetBinContent(96,0.628453);
   ratio->SetBinContent(97,0.6972539);
   ratio->SetBinContent(98,0.7679151);
   ratio->SetBinContent(99,1.643976);
   ratio->SetBinContent(100,6.129396);
   ratio->SetBinError(84,0.05239779);
   ratio->SetBinError(85,0.03142423);
   ratio->SetBinError(86,0.06432122);
   ratio->SetBinError(87,0.03003644);
   ratio->SetBinError(88,0.03394416);
   ratio->SetBinError(89,0.02679981);
   ratio->SetBinError(90,0.02122063);
   ratio->SetBinError(91,0.01892917);
   ratio->SetBinError(92,0.01236436);
   ratio->SetBinError(93,0.007524918);
   ratio->SetBinError(94,0.005224323);
   ratio->SetBinError(95,0.003750114);
   ratio->SetBinError(96,0.003750655);
   ratio->SetBinError(97,0.007998025);
   ratio->SetBinError(98,0.02396524);
   ratio->SetBinError(99,0.1197585);
   ratio->SetBinError(100,0.8849357);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1124.999);
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
