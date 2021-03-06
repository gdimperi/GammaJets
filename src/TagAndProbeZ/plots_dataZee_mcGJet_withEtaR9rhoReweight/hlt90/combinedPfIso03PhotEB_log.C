{
//=========Macro generated from canvas: combinedPfIso03Phot/combinedPfIso03Phot
//=========  (Sun Nov 30 23:09:59 2014) by ROOT version5.32/00
   TCanvas *combinedPfIso03Phot = new TCanvas("combinedPfIso03Phot", "combinedPfIso03Phot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   combinedPfIso03Phot->SetHighLightColor(2);
   combinedPfIso03Phot->Range(-8.25,-0.04051238,16.75,0.3646114);
   combinedPfIso03Phot->SetFillColor(0);
   combinedPfIso03Phot->SetBorderMode(0);
   combinedPfIso03Phot->SetBorderSize(2);
   combinedPfIso03Phot->SetTickx(1);
   combinedPfIso03Phot->SetLeftMargin(0.13);
   combinedPfIso03Phot->SetRightMargin(0.07);
   combinedPfIso03Phot->SetFrameFillStyle(0);
   combinedPfIso03Phot->SetFrameBorderMode(0);
  
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
   
   TH1F *combinedPfIso03Phot_dataZ_EB__22 = new TH1F("combinedPfIso03Phot_dataZ_EB__22","combinedPfIso03Phot_dataZ_EB",20,-5,15);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(0,0.0001150934);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(1,0.001687944);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(2,0.01718258);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(3,0.1019356);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(4,0.2979761);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(5,0.3116033);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(6,0.1510963);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(7,0.06459224);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(8,0.02737254);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(9,0.01311865);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(10,0.006034721);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(11,0.002960007);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(12,0.001686006);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(13,0.0009061436);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(14,0.0006277802);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(15,0.0003756593);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(16,0.0002686332);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(17,0.0001984786);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(18,0.0001809026);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(19,0.0001028334);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(20,9.356659e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinContent(21,0.0003077516);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(0,2.42778e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(1,8.371448e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(2,0.0002441516);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(3,0.0005575077);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(4,0.0009175857);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(5,0.0009207504);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(6,0.0006347289);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(7,0.0004117127);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(8,0.0002691358);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(9,0.0001867018);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(10,0.0001257478);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(11,8.667695e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(12,6.817964e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(13,4.466857e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(14,4.107322e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(15,2.999309e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(16,2.703907e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(17,2.36424e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(18,2.625884e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(19,1.330231e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(20,1.3206e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetBinError(21,2.300083e-05);
   combinedPfIso03Phot_dataZ_EB__22->SetMinimum(1.386088e-07);
   combinedPfIso03Phot_dataZ_EB__22->SetMaximum(1.744978);
   combinedPfIso03Phot_dataZ_EB__22->SetEntries(784094);
   combinedPfIso03Phot_dataZ_EB__22->SetDirectory(0);
   combinedPfIso03Phot_dataZ_EB__22->SetStats(0);
   combinedPfIso03Phot_dataZ_EB__22->SetMarkerStyle(20);
   combinedPfIso03Phot_dataZ_EB__22->SetMarkerSize(0.7);
   combinedPfIso03Phot_dataZ_EB__22->GetXaxis()->SetTitle("combined PfIso #DeltaR=0.3 (GeV)");
   combinedPfIso03Phot_dataZ_EB__22->GetYaxis()->SetTitle("Entries/1.0");
   combinedPfIso03Phot_dataZ_EB__22->GetYaxis()->SetTitleOffset(0.9);
   combinedPfIso03Phot_dataZ_EB__22->Draw("PE");
   
   TH1F *combinedPfIso03Phot_mc_Signal_EB__23 = new TH1F("combinedPfIso03Phot_mc_Signal_EB__23","combinedPfIso03Phot_mc_Signal_EB",20,-5,15);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(0,0.0007768786);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(1,0.005368077);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(2,0.03300208);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(3,0.1230723);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(4,0.2821833);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(5,0.2783042);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(6,0.1440839);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(7,0.06505676);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(8,0.02978137);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(9,0.01528243);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(10,0.008023762);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(11,0.004877793);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(12,0.003675031);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(13,0.002210225);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(14,0.001888514);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(15,0.0009900987);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(16,0.0009216571);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(17,0.0004871755);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(18,0.0003966865);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(19,0.0002052929);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(20,0.000189292);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinContent(21,0.001980102);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(0,6.014863e-05);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(1,0.0001476744);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(2,0.0009696194);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(3,0.0008215927);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(4,0.001898022);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(5,0.001357271);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(6,0.001011328);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(7,0.00072252);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(8,0.000510703);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(9,0.0004395883);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(10,0.0003146086);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(11,0.0002486884);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(12,0.00026346);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(13,0.0001781352);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(14,0.0002088142);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(15,0.0001175786);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(16,0.0001517643);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(17,9.566136e-05);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(18,0.000101317);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(19,6.686957e-05);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(20,6.869967e-05);
   combinedPfIso03Phot_mc_Signal_EB__23->SetBinError(21,0.0002251132);
   combinedPfIso03Phot_mc_Signal_EB__23->SetEntries(1117041);
   combinedPfIso03Phot_mc_Signal_EB__23->SetDirectory(0);
   combinedPfIso03Phot_mc_Signal_EB__23->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   combinedPfIso03Phot_mc_Signal_EB__23->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   combinedPfIso03Phot_mc_Signal_EB__23->SetLineColor(ci);
   combinedPfIso03Phot_mc_Signal_EB__23->SetLineWidth(2);
   combinedPfIso03Phot_mc_Signal_EB__23->Draw("HSAME");
   
   TH1F *combinedPfIso03Phot_dataZ_EB__24 = new TH1F("combinedPfIso03Phot_dataZ_EB__24","combinedPfIso03Phot_dataZ_EB",20,-5,15);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(0,0.0001150934);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(1,0.001687944);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(2,0.01718258);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(3,0.1019356);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(4,0.2979761);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(5,0.3116033);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(6,0.1510963);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(7,0.06459224);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(8,0.02737254);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(9,0.01311865);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(10,0.006034721);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(11,0.002960007);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(12,0.001686006);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(13,0.0009061436);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(14,0.0006277802);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(15,0.0003756593);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(16,0.0002686332);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(17,0.0001984786);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(18,0.0001809026);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(19,0.0001028334);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(20,9.356659e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinContent(21,0.0003077516);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(0,2.42778e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(1,8.371448e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(2,0.0002441516);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(3,0.0005575077);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(4,0.0009175857);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(5,0.0009207504);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(6,0.0006347289);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(7,0.0004117127);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(8,0.0002691358);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(9,0.0001867018);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(10,0.0001257478);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(11,8.667695e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(12,6.817964e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(13,4.466857e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(14,4.107322e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(15,2.999309e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(16,2.703907e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(17,2.36424e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(18,2.625884e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(19,1.330231e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(20,1.3206e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetBinError(21,2.300083e-05);
   combinedPfIso03Phot_dataZ_EB__24->SetMinimum(1.386088e-07);
   combinedPfIso03Phot_dataZ_EB__24->SetMaximum(1.744978);
   combinedPfIso03Phot_dataZ_EB__24->SetEntries(784094);
   combinedPfIso03Phot_dataZ_EB__24->SetDirectory(0);
   combinedPfIso03Phot_dataZ_EB__24->SetStats(0);
   combinedPfIso03Phot_dataZ_EB__24->SetMarkerStyle(20);
   combinedPfIso03Phot_dataZ_EB__24->SetMarkerSize(0.7);
   combinedPfIso03Phot_dataZ_EB__24->GetXaxis()->SetTitle("combined PfIso #DeltaR=0.3 (GeV)");
   combinedPfIso03Phot_dataZ_EB__24->GetYaxis()->SetTitle("Entries/1.0");
   combinedPfIso03Phot_dataZ_EB__24->GetYaxis()->SetTitleOffset(0.9);
   combinedPfIso03Phot_dataZ_EB__24->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.336889e-310,4.244024e-314,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("combinedPfIso03Phot_dataZ_EB","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("combinedPfIso03Phot_mc_Signal_EB","signal #gamma + jet","F");
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
   combinedPfIso03Phot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","combinedPfIso03Phot_dataZ_EB",20,-5,15);
   ratio->SetBinContent(0,0.1481485);
   ratio->SetBinContent(1,0.314441);
   ratio->SetBinContent(2,0.5206515);
   ratio->SetBinContent(3,0.8282577);
   ratio->SetBinContent(4,1.055967);
   ratio->SetBinContent(5,1.11965);
   ratio->SetBinContent(6,1.048668);
   ratio->SetBinContent(7,0.9928598);
   ratio->SetBinContent(8,0.9191161);
   ratio->SetBinContent(9,0.8584139);
   ratio->SetBinContent(10,0.7521062);
   ratio->SetBinContent(11,0.6068332);
   ratio->SetBinContent(12,0.4587732);
   ratio->SetBinContent(13,0.409978);
   ratio->SetBinContent(14,0.3324201);
   ratio->SetBinContent(15,0.379416);
   ratio->SetBinContent(16,0.2914676);
   ratio->SetBinContent(17,0.4074067);
   ratio->SetBinContent(18,0.4560342);
   ratio->SetBinContent(19,0.5009109);
   ratio->SetBinContent(20,0.4942978);
   ratio->SetBinContent(21,0.1554221);
   ratio->SetBinError(0,0.03328896);
   ratio->SetBinError(1,0.01783328);
   ratio->SetBinError(2,0.01699207);
   ratio->SetBinError(3,0.007147875);
   ratio->SetBinError(4,0.007811617);
   ratio->SetBinError(5,0.006384539);
   ratio->SetBinError(6,0.00857818);
   ratio->SetBinError(7,0.0127137);
   ratio->SetBinError(8,0.01816836);
   ratio->SetBinError(9,0.02754864);
   ratio->SetBinError(10,0.03339547);
   ratio->SetBinError(11,0.03567862);
   ratio->SetBinError(12,0.03776073);
   ratio->SetBinError(13,0.03873312);
   ratio->SetBinError(14,0.04270847);
   ratio->SetBinError(15,0.05429392);
   ratio->SetBinError(16,0.05625078);
   ratio->SetBinError(17,0.09356709);
   ratio->SetBinError(18,0.133971);
   ratio->SetBinError(19,0.1755562);
   ratio->SetBinError(20,0.1924834);
   ratio->SetBinError(21,0.0211458);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1478.549);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("combined PfIso #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-5,1,15,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","combinedPfIso03Phot_dataZ_EB",20,-5,15);
   ratio->SetBinContent(0,0.1481485);
   ratio->SetBinContent(1,0.314441);
   ratio->SetBinContent(2,0.5206515);
   ratio->SetBinContent(3,0.8282577);
   ratio->SetBinContent(4,1.055967);
   ratio->SetBinContent(5,1.11965);
   ratio->SetBinContent(6,1.048668);
   ratio->SetBinContent(7,0.9928598);
   ratio->SetBinContent(8,0.9191161);
   ratio->SetBinContent(9,0.8584139);
   ratio->SetBinContent(10,0.7521062);
   ratio->SetBinContent(11,0.6068332);
   ratio->SetBinContent(12,0.4587732);
   ratio->SetBinContent(13,0.409978);
   ratio->SetBinContent(14,0.3324201);
   ratio->SetBinContent(15,0.379416);
   ratio->SetBinContent(16,0.2914676);
   ratio->SetBinContent(17,0.4074067);
   ratio->SetBinContent(18,0.4560342);
   ratio->SetBinContent(19,0.5009109);
   ratio->SetBinContent(20,0.4942978);
   ratio->SetBinContent(21,0.1554221);
   ratio->SetBinError(0,0.03328896);
   ratio->SetBinError(1,0.01783328);
   ratio->SetBinError(2,0.01699207);
   ratio->SetBinError(3,0.007147875);
   ratio->SetBinError(4,0.007811617);
   ratio->SetBinError(5,0.006384539);
   ratio->SetBinError(6,0.00857818);
   ratio->SetBinError(7,0.0127137);
   ratio->SetBinError(8,0.01816836);
   ratio->SetBinError(9,0.02754864);
   ratio->SetBinError(10,0.03339547);
   ratio->SetBinError(11,0.03567862);
   ratio->SetBinError(12,0.03776073);
   ratio->SetBinError(13,0.03873312);
   ratio->SetBinError(14,0.04270847);
   ratio->SetBinError(15,0.05429392);
   ratio->SetBinError(16,0.05625078);
   ratio->SetBinError(17,0.09356709);
   ratio->SetBinError(18,0.133971);
   ratio->SetBinError(19,0.1755562);
   ratio->SetBinError(20,0.1924834);
   ratio->SetBinError(21,0.0211458);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1478.549);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("combined PfIso #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   combinedPfIso03Phot->cd();
   combinedPfIso03Phot->Modified();
   combinedPfIso03Phot->cd();
   combinedPfIso03Phot->SetSelected(combinedPfIso03Phot);
}
