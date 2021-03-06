{
//=========Macro generated from canvas: etaPhot/etaPhot
//=========  (Sun Sep 28 11:59:19 2014) by ROOT version5.32/00
   TCanvas *etaPhot = new TCanvas("etaPhot", "etaPhot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   etaPhot->SetHighLightColor(2);
   etaPhot->Range(-3.975,-0.008006472,3.525,0.07205825);
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
   etaPhot_mc_Z_EE__4->SetBinContent(6,0.03450701);
   etaPhot_mc_Z_EE__4->SetBinContent(7,0.04829737);
   etaPhot_mc_Z_EE__4->SetBinContent(8,0.05084035);
   etaPhot_mc_Z_EE__4->SetBinContent(9,0.05559295);
   etaPhot_mc_Z_EE__4->SetBinContent(10,0.05853741);
   etaPhot_mc_Z_EE__4->SetBinContent(11,0.05866364);
   etaPhot_mc_Z_EE__4->SetBinContent(12,0.05379273);
   etaPhot_mc_Z_EE__4->SetBinContent(13,0.05677915);
   etaPhot_mc_Z_EE__4->SetBinContent(14,0.06089276);
   etaPhot_mc_Z_EE__4->SetBinContent(15,0.01995042);
   etaPhot_mc_Z_EE__4->SetBinContent(46,0.01946203);
   etaPhot_mc_Z_EE__4->SetBinContent(47,0.05501885);
   etaPhot_mc_Z_EE__4->SetBinContent(48,0.05532762);
   etaPhot_mc_Z_EE__4->SetBinContent(49,0.05618143);
   etaPhot_mc_Z_EE__4->SetBinContent(50,0.06027168);
   etaPhot_mc_Z_EE__4->SetBinContent(51,0.06016908);
   etaPhot_mc_Z_EE__4->SetBinContent(52,0.05759303);
   etaPhot_mc_Z_EE__4->SetBinContent(53,0.05242018);
   etaPhot_mc_Z_EE__4->SetBinContent(54,0.05056109);
   etaPhot_mc_Z_EE__4->SetBinContent(55,0.03514124);
   etaPhot_mc_Z_EE__4->SetBinError(6,0.0004880427);
   etaPhot_mc_Z_EE__4->SetBinError(7,0.0006285737);
   etaPhot_mc_Z_EE__4->SetBinError(8,0.0006681459);
   etaPhot_mc_Z_EE__4->SetBinError(9,0.0007274695);
   etaPhot_mc_Z_EE__4->SetBinError(10,0.0007660379);
   etaPhot_mc_Z_EE__4->SetBinError(11,0.0007648083);
   etaPhot_mc_Z_EE__4->SetBinError(12,0.0007319399);
   etaPhot_mc_Z_EE__4->SetBinError(13,0.0007640416);
   etaPhot_mc_Z_EE__4->SetBinError(14,0.0008714466);
   etaPhot_mc_Z_EE__4->SetBinError(15,0.0005298877);
   etaPhot_mc_Z_EE__4->SetBinError(46,0.0005195881);
   etaPhot_mc_Z_EE__4->SetBinError(47,0.0008538733);
   etaPhot_mc_Z_EE__4->SetBinError(48,0.0007588434);
   etaPhot_mc_Z_EE__4->SetBinError(49,0.0007641478);
   etaPhot_mc_Z_EE__4->SetBinError(50,0.0007859871);
   etaPhot_mc_Z_EE__4->SetBinError(51,0.000779984);
   etaPhot_mc_Z_EE__4->SetBinError(52,0.0007444659);
   etaPhot_mc_Z_EE__4->SetBinError(53,0.0006801042);
   etaPhot_mc_Z_EE__4->SetBinError(54,0.0006496689);
   etaPhot_mc_Z_EE__4->SetBinError(55,0.0004950012);
   etaPhot_mc_Z_EE__4->SetMinimum(1.010647e-07);
   etaPhot_mc_Z_EE__4->SetMaximum(0.3409995);
   etaPhot_mc_Z_EE__4->SetEntries(258604);
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
   etaPhot_mc_Z_EE__6->SetBinContent(6,0.03450701);
   etaPhot_mc_Z_EE__6->SetBinContent(7,0.04829737);
   etaPhot_mc_Z_EE__6->SetBinContent(8,0.05084035);
   etaPhot_mc_Z_EE__6->SetBinContent(9,0.05559295);
   etaPhot_mc_Z_EE__6->SetBinContent(10,0.05853741);
   etaPhot_mc_Z_EE__6->SetBinContent(11,0.05866364);
   etaPhot_mc_Z_EE__6->SetBinContent(12,0.05379273);
   etaPhot_mc_Z_EE__6->SetBinContent(13,0.05677915);
   etaPhot_mc_Z_EE__6->SetBinContent(14,0.06089276);
   etaPhot_mc_Z_EE__6->SetBinContent(15,0.01995042);
   etaPhot_mc_Z_EE__6->SetBinContent(46,0.01946203);
   etaPhot_mc_Z_EE__6->SetBinContent(47,0.05501885);
   etaPhot_mc_Z_EE__6->SetBinContent(48,0.05532762);
   etaPhot_mc_Z_EE__6->SetBinContent(49,0.05618143);
   etaPhot_mc_Z_EE__6->SetBinContent(50,0.06027168);
   etaPhot_mc_Z_EE__6->SetBinContent(51,0.06016908);
   etaPhot_mc_Z_EE__6->SetBinContent(52,0.05759303);
   etaPhot_mc_Z_EE__6->SetBinContent(53,0.05242018);
   etaPhot_mc_Z_EE__6->SetBinContent(54,0.05056109);
   etaPhot_mc_Z_EE__6->SetBinContent(55,0.03514124);
   etaPhot_mc_Z_EE__6->SetBinError(6,0.0004880427);
   etaPhot_mc_Z_EE__6->SetBinError(7,0.0006285737);
   etaPhot_mc_Z_EE__6->SetBinError(8,0.0006681459);
   etaPhot_mc_Z_EE__6->SetBinError(9,0.0007274695);
   etaPhot_mc_Z_EE__6->SetBinError(10,0.0007660379);
   etaPhot_mc_Z_EE__6->SetBinError(11,0.0007648083);
   etaPhot_mc_Z_EE__6->SetBinError(12,0.0007319399);
   etaPhot_mc_Z_EE__6->SetBinError(13,0.0007640416);
   etaPhot_mc_Z_EE__6->SetBinError(14,0.0008714466);
   etaPhot_mc_Z_EE__6->SetBinError(15,0.0005298877);
   etaPhot_mc_Z_EE__6->SetBinError(46,0.0005195881);
   etaPhot_mc_Z_EE__6->SetBinError(47,0.0008538733);
   etaPhot_mc_Z_EE__6->SetBinError(48,0.0007588434);
   etaPhot_mc_Z_EE__6->SetBinError(49,0.0007641478);
   etaPhot_mc_Z_EE__6->SetBinError(50,0.0007859871);
   etaPhot_mc_Z_EE__6->SetBinError(51,0.000779984);
   etaPhot_mc_Z_EE__6->SetBinError(52,0.0007444659);
   etaPhot_mc_Z_EE__6->SetBinError(53,0.0006801042);
   etaPhot_mc_Z_EE__6->SetBinError(54,0.0006496689);
   etaPhot_mc_Z_EE__6->SetBinError(55,0.0004950012);
   etaPhot_mc_Z_EE__6->SetMinimum(1.010647e-07);
   etaPhot_mc_Z_EE__6->SetMaximum(0.3409995);
   etaPhot_mc_Z_EE__6->SetEntries(258604);
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
   
   TLegend *leg = new TLegend(1.184667e-312,1.184667e-312,2.121996e-314,nan,NULL,"brNDC");
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
   ratio->SetBinContent(6,0.7852756);
   ratio->SetBinContent(7,0.8556978);
   ratio->SetBinContent(8,0.9278808);
   ratio->SetBinContent(9,1.002748);
   ratio->SetBinContent(10,1.085281);
   ratio->SetBinContent(11,1.0263);
   ratio->SetBinContent(12,1.027595);
   ratio->SetBinContent(13,1.068684);
   ratio->SetBinContent(14,1.159651);
   ratio->SetBinContent(15,1.115292);
   ratio->SetBinContent(46,1.198158);
   ratio->SetBinContent(47,1.147134);
   ratio->SetBinContent(48,1.050832);
   ratio->SetBinContent(49,1.066346);
   ratio->SetBinContent(50,1.093187);
   ratio->SetBinContent(51,1.025544);
   ratio->SetBinContent(52,1.019817);
   ratio->SetBinContent(53,0.8840268);
   ratio->SetBinContent(54,0.8497338);
   ratio->SetBinContent(55,0.8025094);
   ratio->SetBinError(6,0.01648779);
   ratio->SetBinError(7,0.02024036);
   ratio->SetBinError(8,0.0219869);
   ratio->SetBinError(9,0.02359229);
   ratio->SetBinError(10,0.02572318);
   ratio->SetBinError(11,0.02440274);
   ratio->SetBinError(12,0.02449433);
   ratio->SetBinError(13,0.02602557);
   ratio->SetBinError(14,0.02846069);
   ratio->SetBinError(15,0.05062287);
   ratio->SetBinError(46,0.05302387);
   ratio->SetBinError(47,0.02944917);
   ratio->SetBinError(48,0.02583092);
   ratio->SetBinError(49,0.02528491);
   ratio->SetBinError(50,0.02558729);
   ratio->SetBinError(51,0.0241331);
   ratio->SetBinError(52,0.02395731);
   ratio->SetBinError(53,0.02096296);
   ratio->SetBinError(54,0.01976751);
   ratio->SetBinError(55,0.01680297);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(26239.76);
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
   ratio->SetBinContent(6,0.7852756);
   ratio->SetBinContent(7,0.8556978);
   ratio->SetBinContent(8,0.9278808);
   ratio->SetBinContent(9,1.002748);
   ratio->SetBinContent(10,1.085281);
   ratio->SetBinContent(11,1.0263);
   ratio->SetBinContent(12,1.027595);
   ratio->SetBinContent(13,1.068684);
   ratio->SetBinContent(14,1.159651);
   ratio->SetBinContent(15,1.115292);
   ratio->SetBinContent(46,1.198158);
   ratio->SetBinContent(47,1.147134);
   ratio->SetBinContent(48,1.050832);
   ratio->SetBinContent(49,1.066346);
   ratio->SetBinContent(50,1.093187);
   ratio->SetBinContent(51,1.025544);
   ratio->SetBinContent(52,1.019817);
   ratio->SetBinContent(53,0.8840268);
   ratio->SetBinContent(54,0.8497338);
   ratio->SetBinContent(55,0.8025094);
   ratio->SetBinError(6,0.01648779);
   ratio->SetBinError(7,0.02024036);
   ratio->SetBinError(8,0.0219869);
   ratio->SetBinError(9,0.02359229);
   ratio->SetBinError(10,0.02572318);
   ratio->SetBinError(11,0.02440274);
   ratio->SetBinError(12,0.02449433);
   ratio->SetBinError(13,0.02602557);
   ratio->SetBinError(14,0.02846069);
   ratio->SetBinError(15,0.05062287);
   ratio->SetBinError(46,0.05302387);
   ratio->SetBinError(47,0.02944917);
   ratio->SetBinError(48,0.02583092);
   ratio->SetBinError(49,0.02528491);
   ratio->SetBinError(50,0.02558729);
   ratio->SetBinError(51,0.0241331);
   ratio->SetBinError(52,0.02395731);
   ratio->SetBinError(53,0.02096296);
   ratio->SetBinError(54,0.01976751);
   ratio->SetBinError(55,0.01680297);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(26239.76);
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
