{
//=========Macro generated from canvas: mvaIdPhot/mvaIdPhot
//=========  (Sat Nov 29 19:50:55 2014) by ROOT version5.32/00
   TCanvas *mvaIdPhot = new TCanvas("mvaIdPhot", "mvaIdPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   mvaIdPhot->SetHighLightColor(2);
   mvaIdPhot->Range(-0.1625,-0.0223549,1.0875,0.2011941);
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
   
   TH1F *mvaIdPhot_mc_Z_EB__22 = new TH1F("mvaIdPhot_mc_Z_EB__22","mvaIdPhot_mc_Z_EB",100,0,1);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(84,0.01083178);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(85,0.02553041);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(86,0.02860596);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(87,0.03427823);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(88,0.04203629);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(89,0.04978982);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(90,0.0627911);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(91,0.07430404);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(92,0.09036074);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(93,0.1164702);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(94,0.1548771);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(95,0.170085);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(96,0.1116694);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(97,0.02615317);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(98,0.001949774);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(99,0.0001669814);
   mvaIdPhot_mc_Z_EB__22->SetBinContent(100,9.997507e-05);
   mvaIdPhot_mc_Z_EB__22->SetBinError(84,0.0003802759);
   mvaIdPhot_mc_Z_EB__22->SetBinError(85,0.0005777646);
   mvaIdPhot_mc_Z_EB__22->SetBinError(86,0.0006081475);
   mvaIdPhot_mc_Z_EB__22->SetBinError(87,0.000721412);
   mvaIdPhot_mc_Z_EB__22->SetBinError(88,0.0008073776);
   mvaIdPhot_mc_Z_EB__22->SetBinError(89,0.0009283443);
   mvaIdPhot_mc_Z_EB__22->SetBinError(90,0.001058563);
   mvaIdPhot_mc_Z_EB__22->SetBinError(91,0.001177788);
   mvaIdPhot_mc_Z_EB__22->SetBinError(92,0.00132972);
   mvaIdPhot_mc_Z_EB__22->SetBinError(93,0.001639456);
   mvaIdPhot_mc_Z_EB__22->SetBinError(94,0.002084318);
   mvaIdPhot_mc_Z_EB__22->SetBinError(95,0.002367072);
   mvaIdPhot_mc_Z_EB__22->SetBinError(96,0.002131496);
   mvaIdPhot_mc_Z_EB__22->SetBinError(97,0.001074602);
   mvaIdPhot_mc_Z_EB__22->SetBinError(98,0.0002652199);
   mvaIdPhot_mc_Z_EB__22->SetBinError(99,4.518515e-05);
   mvaIdPhot_mc_Z_EB__22->SetBinError(100,3.470583e-05);
   mvaIdPhot_mc_Z_EB__22->SetMinimum(4.464099e-07);
   mvaIdPhot_mc_Z_EB__22->SetMaximum(0.952476);
   mvaIdPhot_mc_Z_EB__22->SetEntries(78590);
   mvaIdPhot_mc_Z_EB__22->SetDirectory(0);
   mvaIdPhot_mc_Z_EB__22->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__22->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__22->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EB__22->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EB__22->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EB__22->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EB__22->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EB__22->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EB__22->Draw("PE");
   
   TH1F *mvaIdPhot_mc_Signal_EB__23 = new TH1F("mvaIdPhot_mc_Signal_EB__23","mvaIdPhot_mc_Signal_EB",100,0,1);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(84,0.006759648);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(85,0.01747285);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(86,0.0196441);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(87,0.02700288);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(88,0.02886447);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(89,0.0374439);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(90,0.04680089);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(91,0.05894586);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(92,0.07652114);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(93,0.1048009);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(94,0.1545861);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(95,0.2052536);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(96,0.165643);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(97,0.04677785);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(98,0.003118338);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(99,0.000297384);
   mvaIdPhot_mc_Signal_EB__23->SetBinContent(100,6.712453e-05);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(84,0.0003661214);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(85,0.0006934029);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(86,0.0004844178);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(87,0.001064422);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(88,0.000588093);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(89,0.0009865665);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(90,0.001134123);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(91,0.001351279);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(92,0.001554151);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(93,0.001736207);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(94,0.002053478);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(95,0.002283252);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(96,0.002037147);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(97,0.001357412);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(98,0.0001160231);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(99,3.081052e-05);
   mvaIdPhot_mc_Signal_EB__23->SetBinError(100,1.019027e-05);
   mvaIdPhot_mc_Signal_EB__23->SetEntries(605584);
   mvaIdPhot_mc_Signal_EB__23->SetDirectory(0);
   mvaIdPhot_mc_Signal_EB__23->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EB__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   mvaIdPhot_mc_Signal_EB__23->SetLineColor(ci);
   mvaIdPhot_mc_Signal_EB__23->SetLineWidth(2);
   mvaIdPhot_mc_Signal_EB__23->Draw("HSAME");
   
   TH1F *mvaIdPhot_mc_Z_EB__24 = new TH1F("mvaIdPhot_mc_Z_EB__24","mvaIdPhot_mc_Z_EB",100,0,1);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(84,0.01083178);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(85,0.02553041);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(86,0.02860596);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(87,0.03427823);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(88,0.04203629);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(89,0.04978982);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(90,0.0627911);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(91,0.07430404);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(92,0.09036074);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(93,0.1164702);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(94,0.1548771);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(95,0.170085);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(96,0.1116694);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(97,0.02615317);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(98,0.001949774);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(99,0.0001669814);
   mvaIdPhot_mc_Z_EB__24->SetBinContent(100,9.997507e-05);
   mvaIdPhot_mc_Z_EB__24->SetBinError(84,0.0003802759);
   mvaIdPhot_mc_Z_EB__24->SetBinError(85,0.0005777646);
   mvaIdPhot_mc_Z_EB__24->SetBinError(86,0.0006081475);
   mvaIdPhot_mc_Z_EB__24->SetBinError(87,0.000721412);
   mvaIdPhot_mc_Z_EB__24->SetBinError(88,0.0008073776);
   mvaIdPhot_mc_Z_EB__24->SetBinError(89,0.0009283443);
   mvaIdPhot_mc_Z_EB__24->SetBinError(90,0.001058563);
   mvaIdPhot_mc_Z_EB__24->SetBinError(91,0.001177788);
   mvaIdPhot_mc_Z_EB__24->SetBinError(92,0.00132972);
   mvaIdPhot_mc_Z_EB__24->SetBinError(93,0.001639456);
   mvaIdPhot_mc_Z_EB__24->SetBinError(94,0.002084318);
   mvaIdPhot_mc_Z_EB__24->SetBinError(95,0.002367072);
   mvaIdPhot_mc_Z_EB__24->SetBinError(96,0.002131496);
   mvaIdPhot_mc_Z_EB__24->SetBinError(97,0.001074602);
   mvaIdPhot_mc_Z_EB__24->SetBinError(98,0.0002652199);
   mvaIdPhot_mc_Z_EB__24->SetBinError(99,4.518515e-05);
   mvaIdPhot_mc_Z_EB__24->SetBinError(100,3.470583e-05);
   mvaIdPhot_mc_Z_EB__24->SetMinimum(4.464099e-07);
   mvaIdPhot_mc_Z_EB__24->SetMaximum(0.952476);
   mvaIdPhot_mc_Z_EB__24->SetEntries(78590);
   mvaIdPhot_mc_Z_EB__24->SetDirectory(0);
   mvaIdPhot_mc_Z_EB__24->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__24->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   mvaIdPhot_mc_Z_EB__24->SetMarkerColor(ci);
   mvaIdPhot_mc_Z_EB__24->SetMarkerStyle(20);
   mvaIdPhot_mc_Z_EB__24->SetMarkerSize(0.7);
   mvaIdPhot_mc_Z_EB__24->GetXaxis()->SetTitle("#gamma MVA output");
   mvaIdPhot_mc_Z_EB__24->GetYaxis()->SetTitle("Entries/0.01");
   mvaIdPhot_mc_Z_EB__24->GetYaxis()->SetTitleOffset(0.9);
   mvaIdPhot_mc_Z_EB__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
   ratio->SetBinContent(84,1.602418);
   ratio->SetBinContent(85,1.461148);
   ratio->SetBinContent(86,1.456212);
   ratio->SetBinContent(87,1.269429);
   ratio->SetBinContent(88,1.456333);
   ratio->SetBinContent(89,1.329718);
   ratio->SetBinContent(90,1.341665);
   ratio->SetBinContent(91,1.260547);
   ratio->SetBinContent(92,1.18086);
   ratio->SetBinContent(93,1.111348);
   ratio->SetBinContent(94,1.001882);
   ratio->SetBinContent(95,0.8286577);
   ratio->SetBinContent(96,0.674157);
   ratio->SetBinContent(97,0.559093);
   ratio->SetBinContent(98,0.6252607);
   ratio->SetBinContent(99,0.5615011);
   ratio->SetBinContent(100,1.489397);
   ratio->SetBinError(84,0.1034291);
   ratio->SetBinError(85,0.06675068);
   ratio->SetBinError(86,0.0474123);
   ratio->SetBinError(87,0.05672471);
   ratio->SetBinError(88,0.04077754);
   ratio->SetBinError(89,0.04292034);
   ratio->SetBinError(90,0.03960626);
   ratio->SetBinError(91,0.03513209);
   ratio->SetBinError(92,0.02961702);
   ratio->SetBinError(93,0.02415987);
   ratio->SetBinError(94,0.01894516);
   ratio->SetBinError(95,0.01476377);
   ratio->SetBinError(96,0.01530776);
   ratio->SetBinError(97,0.02812381);
   ratio->SetBinError(98,0.08817596);
   ratio->SetBinError(99,0.1626981);
   ratio->SetBinError(100,0.564315);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(964.2604);
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
   ratio->SetBinContent(84,1.602418);
   ratio->SetBinContent(85,1.461148);
   ratio->SetBinContent(86,1.456212);
   ratio->SetBinContent(87,1.269429);
   ratio->SetBinContent(88,1.456333);
   ratio->SetBinContent(89,1.329718);
   ratio->SetBinContent(90,1.341665);
   ratio->SetBinContent(91,1.260547);
   ratio->SetBinContent(92,1.18086);
   ratio->SetBinContent(93,1.111348);
   ratio->SetBinContent(94,1.001882);
   ratio->SetBinContent(95,0.8286577);
   ratio->SetBinContent(96,0.674157);
   ratio->SetBinContent(97,0.559093);
   ratio->SetBinContent(98,0.6252607);
   ratio->SetBinContent(99,0.5615011);
   ratio->SetBinContent(100,1.489397);
   ratio->SetBinError(84,0.1034291);
   ratio->SetBinError(85,0.06675068);
   ratio->SetBinError(86,0.0474123);
   ratio->SetBinError(87,0.05672471);
   ratio->SetBinError(88,0.04077754);
   ratio->SetBinError(89,0.04292034);
   ratio->SetBinError(90,0.03960626);
   ratio->SetBinError(91,0.03513209);
   ratio->SetBinError(92,0.02961702);
   ratio->SetBinError(93,0.02415987);
   ratio->SetBinError(94,0.01894516);
   ratio->SetBinError(95,0.01476377);
   ratio->SetBinError(96,0.01530776);
   ratio->SetBinError(97,0.02812381);
   ratio->SetBinError(98,0.08817596);
   ratio->SetBinError(99,0.1626981);
   ratio->SetBinError(100,0.564315);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(964.2604);
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
