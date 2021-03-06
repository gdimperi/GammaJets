{
//=========Macro generated from canvas: nvtx/nvtx
//=========  (Sat Sep 27 23:43:35 2014) by ROOT version5.32/00
   TCanvas *nvtx = new TCanvas("nvtx", "nvtx",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   nvtx->SetHighLightColor(2);
   nvtx->Range(-7.1625,-0.01041438,44.0875,0.09372941);
   nvtx->SetFillColor(0);
   nvtx->SetBorderMode(0);
   nvtx->SetBorderSize(2);
   nvtx->SetTickx(1);
   nvtx->SetLeftMargin(0.13);
   nvtx->SetRightMargin(0.07);
   nvtx->SetFrameFillStyle(0);
   nvtx->SetFrameBorderMode(0);
  
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
   
   TH1F *nvtx_mc_Z_EE__58 = new TH1F("nvtx_mc_Z_EE__58","nvtx_mc_Z_EE",41,-0.5,40.5);
   nvtx_mc_Z_EE__58->SetBinContent(2,0.0001042446);
   nvtx_mc_Z_EE__58->SetBinContent(3,0.0006160406);
   nvtx_mc_Z_EE__58->SetBinContent(4,0.002465669);
   nvtx_mc_Z_EE__58->SetBinContent(5,0.006796618);
   nvtx_mc_Z_EE__58->SetBinContent(6,0.01378306);
   nvtx_mc_Z_EE__58->SetBinContent(7,0.02351148);
   nvtx_mc_Z_EE__58->SetBinContent(8,0.03611845);
   nvtx_mc_Z_EE__58->SetBinContent(9,0.04828625);
   nvtx_mc_Z_EE__58->SetBinContent(10,0.06230611);
   nvtx_mc_Z_EE__58->SetBinContent(11,0.06871084);
   nvtx_mc_Z_EE__58->SetBinContent(12,0.07465502);
   nvtx_mc_Z_EE__58->SetBinContent(13,0.07938229);
   nvtx_mc_Z_EE__58->SetBinContent(14,0.078843);
   nvtx_mc_Z_EE__58->SetBinContent(15,0.07553589);
   nvtx_mc_Z_EE__58->SetBinContent(16,0.0720852);
   nvtx_mc_Z_EE__58->SetBinContent(17,0.06416221);
   nvtx_mc_Z_EE__58->SetBinContent(18,0.05729808);
   nvtx_mc_Z_EE__58->SetBinContent(19,0.05084545);
   nvtx_mc_Z_EE__58->SetBinContent(20,0.04231124);
   nvtx_mc_Z_EE__58->SetBinContent(21,0.03547349);
   nvtx_mc_Z_EE__58->SetBinContent(22,0.02812929);
   nvtx_mc_Z_EE__58->SetBinContent(23,0.02175586);
   nvtx_mc_Z_EE__58->SetBinContent(24,0.01712482);
   nvtx_mc_Z_EE__58->SetBinContent(25,0.01257291);
   nvtx_mc_Z_EE__58->SetBinContent(26,0.008548667);
   nvtx_mc_Z_EE__58->SetBinContent(27,0.006118021);
   nvtx_mc_Z_EE__58->SetBinContent(28,0.004373562);
   nvtx_mc_Z_EE__58->SetBinContent(29,0.002865003);
   nvtx_mc_Z_EE__58->SetBinContent(30,0.002048018);
   nvtx_mc_Z_EE__58->SetBinContent(31,0.001171891);
   nvtx_mc_Z_EE__58->SetBinContent(32,0.0007770142);
   nvtx_mc_Z_EE__58->SetBinContent(33,0.0004449842);
   nvtx_mc_Z_EE__58->SetBinContent(34,0.0003179225);
   nvtx_mc_Z_EE__58->SetBinContent(35,0.0001887914);
   nvtx_mc_Z_EE__58->SetBinContent(36,0.0001147806);
   nvtx_mc_Z_EE__58->SetBinContent(37,5.540559e-05);
   nvtx_mc_Z_EE__58->SetBinContent(38,4.399103e-05);
   nvtx_mc_Z_EE__58->SetBinContent(39,2.591926e-05);
   nvtx_mc_Z_EE__58->SetBinContent(40,1.831754e-05);
   nvtx_mc_Z_EE__58->SetBinContent(41,1.420976e-05);
   nvtx_mc_Z_EE__58->SetBinContent(42,4.727471e-05);
   nvtx_mc_Z_EE__58->SetBinError(2,3.287138e-05);
   nvtx_mc_Z_EE__58->SetBinError(3,7.550013e-05);
   nvtx_mc_Z_EE__58->SetBinError(4,0.0001515146);
   nvtx_mc_Z_EE__58->SetBinError(5,0.0002644818);
   nvtx_mc_Z_EE__58->SetBinError(6,0.0003935527);
   nvtx_mc_Z_EE__58->SetBinError(7,0.0005391155);
   nvtx_mc_Z_EE__58->SetBinError(8,0.0006775261);
   nvtx_mc_Z_EE__58->SetBinError(9,0.000793243);
   nvtx_mc_Z_EE__58->SetBinError(10,0.0008935585);
   nvtx_mc_Z_EE__58->SetBinError(11,0.0009064852);
   nvtx_mc_Z_EE__58->SetBinError(12,0.0009391578);
   nvtx_mc_Z_EE__58->SetBinError(13,0.0009571989);
   nvtx_mc_Z_EE__58->SetBinError(14,0.0009254938);
   nvtx_mc_Z_EE__58->SetBinError(15,0.000901618);
   nvtx_mc_Z_EE__58->SetBinError(16,0.0008704865);
   nvtx_mc_Z_EE__58->SetBinError(17,0.0007901559);
   nvtx_mc_Z_EE__58->SetBinError(18,0.0007313827);
   nvtx_mc_Z_EE__58->SetBinError(19,0.0006838194);
   nvtx_mc_Z_EE__58->SetBinError(20,0.0006084549);
   nvtx_mc_Z_EE__58->SetBinError(21,0.0005440845);
   nvtx_mc_Z_EE__58->SetBinError(22,0.0004656595);
   nvtx_mc_Z_EE__58->SetBinError(23,0.0004027409);
   nvtx_mc_Z_EE__58->SetBinError(24,0.0003403051);
   nvtx_mc_Z_EE__58->SetBinError(25,0.0002817374);
   nvtx_mc_Z_EE__58->SetBinError(26,0.0002064617);
   nvtx_mc_Z_EE__58->SetBinError(27,0.0001708218);
   nvtx_mc_Z_EE__58->SetBinError(28,0.000139541);
   nvtx_mc_Z_EE__58->SetBinError(29,0.000104804);
   nvtx_mc_Z_EE__58->SetBinError(30,8.798847e-05);
   nvtx_mc_Z_EE__58->SetBinError(31,5.448366e-05);
   nvtx_mc_Z_EE__58->SetBinError(32,4.27088e-05);
   nvtx_mc_Z_EE__58->SetBinError(33,3.096202e-05);
   nvtx_mc_Z_EE__58->SetBinError(34,2.237421e-05);
   nvtx_mc_Z_EE__58->SetBinError(35,2.022463e-05);
   nvtx_mc_Z_EE__58->SetBinError(36,1.349081e-05);
   nvtx_mc_Z_EE__58->SetBinError(37,7.058329e-06);
   nvtx_mc_Z_EE__58->SetBinError(38,6.145711e-06);
   nvtx_mc_Z_EE__58->SetBinError(39,6.587979e-06);
   nvtx_mc_Z_EE__58->SetBinError(40,4.15459e-06);
   nvtx_mc_Z_EE__58->SetBinError(41,4.151512e-06);
   nvtx_mc_Z_EE__58->SetBinError(42,9.4797e-06);
   nvtx_mc_Z_EE__58->SetMinimum(9.305167e-08);
   nvtx_mc_Z_EE__58->SetMaximum(0.4445408);
   nvtx_mc_Z_EE__58->SetEntries(258605);
   nvtx_mc_Z_EE__58->SetDirectory(0);
   nvtx_mc_Z_EE__58->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__58->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__58->SetMarkerColor(ci);
   nvtx_mc_Z_EE__58->SetMarkerStyle(20);
   nvtx_mc_Z_EE__58->SetMarkerSize(0.7);
   nvtx_mc_Z_EE__58->GetXaxis()->SetTitle("nvtx");
   nvtx_mc_Z_EE__58->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_mc_Z_EE__58->GetYaxis()->SetTitleOffset(0.9);
   nvtx_mc_Z_EE__58->Draw("PE");
   
   TH1F *nvtx_mc_Signal_EE__59 = new TH1F("nvtx_mc_Signal_EE__59","nvtx_mc_Signal_EE",41,-0.5,40.5);
   nvtx_mc_Signal_EE__59->SetBinContent(2,3.406424e-05);
   nvtx_mc_Signal_EE__59->SetBinContent(3,0.0003252409);
   nvtx_mc_Signal_EE__59->SetBinContent(4,0.001404545);
   nvtx_mc_Signal_EE__59->SetBinContent(5,0.003614445);
   nvtx_mc_Signal_EE__59->SetBinContent(6,0.008149916);
   nvtx_mc_Signal_EE__59->SetBinContent(7,0.01511948);
   nvtx_mc_Signal_EE__59->SetBinContent(8,0.02243139);
   nvtx_mc_Signal_EE__59->SetBinContent(9,0.03400424);
   nvtx_mc_Signal_EE__59->SetBinContent(10,0.0442716);
   nvtx_mc_Signal_EE__59->SetBinContent(11,0.05254716);
   nvtx_mc_Signal_EE__59->SetBinContent(12,0.05985773);
   nvtx_mc_Signal_EE__59->SetBinContent(13,0.063825);
   nvtx_mc_Signal_EE__59->SetBinContent(14,0.06908706);
   nvtx_mc_Signal_EE__59->SetBinContent(15,0.07179696);
   nvtx_mc_Signal_EE__59->SetBinContent(16,0.07147436);
   nvtx_mc_Signal_EE__59->SetBinContent(17,0.06694309);
   nvtx_mc_Signal_EE__59->SetBinContent(18,0.06524103);
   nvtx_mc_Signal_EE__59->SetBinContent(19,0.05901604);
   nvtx_mc_Signal_EE__59->SetBinContent(20,0.05366473);
   nvtx_mc_Signal_EE__59->SetBinContent(21,0.04806547);
   nvtx_mc_Signal_EE__59->SetBinContent(22,0.04170194);
   nvtx_mc_Signal_EE__59->SetBinContent(23,0.03399872);
   nvtx_mc_Signal_EE__59->SetBinContent(24,0.02679428);
   nvtx_mc_Signal_EE__59->SetBinContent(25,0.02250615);
   nvtx_mc_Signal_EE__59->SetBinContent(26,0.01767259);
   nvtx_mc_Signal_EE__59->SetBinContent(27,0.01373465);
   nvtx_mc_Signal_EE__59->SetBinContent(28,0.009470897);
   nvtx_mc_Signal_EE__59->SetBinContent(29,0.007067232);
   nvtx_mc_Signal_EE__59->SetBinContent(30,0.004865745);
   nvtx_mc_Signal_EE__59->SetBinContent(31,0.003876131);
   nvtx_mc_Signal_EE__59->SetBinContent(32,0.002574348);
   nvtx_mc_Signal_EE__59->SetBinContent(33,0.001737856);
   nvtx_mc_Signal_EE__59->SetBinContent(34,0.001143162);
   nvtx_mc_Signal_EE__59->SetBinContent(35,0.0008331885);
   nvtx_mc_Signal_EE__59->SetBinContent(36,0.0004361874);
   nvtx_mc_Signal_EE__59->SetBinContent(37,0.0002702046);
   nvtx_mc_Signal_EE__59->SetBinContent(38,0.0001961533);
   nvtx_mc_Signal_EE__59->SetBinContent(39,0.0001223099);
   nvtx_mc_Signal_EE__59->SetBinContent(40,6.12529e-05);
   nvtx_mc_Signal_EE__59->SetBinContent(41,6.345553e-05);
   nvtx_mc_Signal_EE__59->SetBinContent(42,0.0001206481);
   nvtx_mc_Signal_EE__59->SetBinError(2,9.723598e-06);
   nvtx_mc_Signal_EE__59->SetBinError(3,3.129834e-05);
   nvtx_mc_Signal_EE__59->SetBinError(4,0.0001423314);
   nvtx_mc_Signal_EE__59->SetBinError(5,0.0002402657);
   nvtx_mc_Signal_EE__59->SetBinError(6,0.0004137749);
   nvtx_mc_Signal_EE__59->SetBinError(7,0.0005663462);
   nvtx_mc_Signal_EE__59->SetBinError(8,0.000695767);
   nvtx_mc_Signal_EE__59->SetBinError(9,0.0009024529);
   nvtx_mc_Signal_EE__59->SetBinError(10,0.001048701);
   nvtx_mc_Signal_EE__59->SetBinError(11,0.001131308);
   nvtx_mc_Signal_EE__59->SetBinError(12,0.001187675);
   nvtx_mc_Signal_EE__59->SetBinError(13,0.00117761);
   nvtx_mc_Signal_EE__59->SetBinError(14,0.001249973);
   nvtx_mc_Signal_EE__59->SetBinError(15,0.001251565);
   nvtx_mc_Signal_EE__59->SetBinError(16,0.001268038);
   nvtx_mc_Signal_EE__59->SetBinError(17,0.00116552);
   nvtx_mc_Signal_EE__59->SetBinError(18,0.001185915);
   nvtx_mc_Signal_EE__59->SetBinError(19,0.001096805);
   nvtx_mc_Signal_EE__59->SetBinError(20,0.001023917);
   nvtx_mc_Signal_EE__59->SetBinError(21,0.0009661017);
   nvtx_mc_Signal_EE__59->SetBinError(22,0.0008945465);
   nvtx_mc_Signal_EE__59->SetBinError(23,0.0007653208);
   nvtx_mc_Signal_EE__59->SetBinError(24,0.0006300668);
   nvtx_mc_Signal_EE__59->SetBinError(25,0.0005855297);
   nvtx_mc_Signal_EE__59->SetBinError(26,0.0005006037);
   nvtx_mc_Signal_EE__59->SetBinError(27,0.0004314106);
   nvtx_mc_Signal_EE__59->SetBinError(28,0.0003218019);
   nvtx_mc_Signal_EE__59->SetBinError(29,0.0002684973);
   nvtx_mc_Signal_EE__59->SetBinError(30,0.0002033682);
   nvtx_mc_Signal_EE__59->SetBinError(31,0.000192049);
   nvtx_mc_Signal_EE__59->SetBinError(32,0.0001401469);
   nvtx_mc_Signal_EE__59->SetBinError(33,0.0001115345);
   nvtx_mc_Signal_EE__59->SetBinError(34,8.386084e-05);
   nvtx_mc_Signal_EE__59->SetBinError(35,7.118017e-05);
   nvtx_mc_Signal_EE__59->SetBinError(36,3.528513e-05);
   nvtx_mc_Signal_EE__59->SetBinError(37,2.132455e-05);
   nvtx_mc_Signal_EE__59->SetBinError(38,1.937765e-05);
   nvtx_mc_Signal_EE__59->SetBinError(39,1.501676e-05);
   nvtx_mc_Signal_EE__59->SetBinError(40,5.492066e-06);
   nvtx_mc_Signal_EE__59->SetBinError(41,1.152773e-05);
   nvtx_mc_Signal_EE__59->SetBinError(42,1.79761e-05);
   nvtx_mc_Signal_EE__59->SetEntries(477019);
   nvtx_mc_Signal_EE__59->SetDirectory(0);
   nvtx_mc_Signal_EE__59->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__59->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   nvtx_mc_Signal_EE__59->SetLineColor(ci);
   nvtx_mc_Signal_EE__59->SetLineWidth(2);
   nvtx_mc_Signal_EE__59->Draw("HSAME");
   
   TH1F *nvtx_mc_Z_EE__60 = new TH1F("nvtx_mc_Z_EE__60","nvtx_mc_Z_EE",41,-0.5,40.5);
   nvtx_mc_Z_EE__60->SetBinContent(2,0.0001042446);
   nvtx_mc_Z_EE__60->SetBinContent(3,0.0006160406);
   nvtx_mc_Z_EE__60->SetBinContent(4,0.002465669);
   nvtx_mc_Z_EE__60->SetBinContent(5,0.006796618);
   nvtx_mc_Z_EE__60->SetBinContent(6,0.01378306);
   nvtx_mc_Z_EE__60->SetBinContent(7,0.02351148);
   nvtx_mc_Z_EE__60->SetBinContent(8,0.03611845);
   nvtx_mc_Z_EE__60->SetBinContent(9,0.04828625);
   nvtx_mc_Z_EE__60->SetBinContent(10,0.06230611);
   nvtx_mc_Z_EE__60->SetBinContent(11,0.06871084);
   nvtx_mc_Z_EE__60->SetBinContent(12,0.07465502);
   nvtx_mc_Z_EE__60->SetBinContent(13,0.07938229);
   nvtx_mc_Z_EE__60->SetBinContent(14,0.078843);
   nvtx_mc_Z_EE__60->SetBinContent(15,0.07553589);
   nvtx_mc_Z_EE__60->SetBinContent(16,0.0720852);
   nvtx_mc_Z_EE__60->SetBinContent(17,0.06416221);
   nvtx_mc_Z_EE__60->SetBinContent(18,0.05729808);
   nvtx_mc_Z_EE__60->SetBinContent(19,0.05084545);
   nvtx_mc_Z_EE__60->SetBinContent(20,0.04231124);
   nvtx_mc_Z_EE__60->SetBinContent(21,0.03547349);
   nvtx_mc_Z_EE__60->SetBinContent(22,0.02812929);
   nvtx_mc_Z_EE__60->SetBinContent(23,0.02175586);
   nvtx_mc_Z_EE__60->SetBinContent(24,0.01712482);
   nvtx_mc_Z_EE__60->SetBinContent(25,0.01257291);
   nvtx_mc_Z_EE__60->SetBinContent(26,0.008548667);
   nvtx_mc_Z_EE__60->SetBinContent(27,0.006118021);
   nvtx_mc_Z_EE__60->SetBinContent(28,0.004373562);
   nvtx_mc_Z_EE__60->SetBinContent(29,0.002865003);
   nvtx_mc_Z_EE__60->SetBinContent(30,0.002048018);
   nvtx_mc_Z_EE__60->SetBinContent(31,0.001171891);
   nvtx_mc_Z_EE__60->SetBinContent(32,0.0007770142);
   nvtx_mc_Z_EE__60->SetBinContent(33,0.0004449842);
   nvtx_mc_Z_EE__60->SetBinContent(34,0.0003179225);
   nvtx_mc_Z_EE__60->SetBinContent(35,0.0001887914);
   nvtx_mc_Z_EE__60->SetBinContent(36,0.0001147806);
   nvtx_mc_Z_EE__60->SetBinContent(37,5.540559e-05);
   nvtx_mc_Z_EE__60->SetBinContent(38,4.399103e-05);
   nvtx_mc_Z_EE__60->SetBinContent(39,2.591926e-05);
   nvtx_mc_Z_EE__60->SetBinContent(40,1.831754e-05);
   nvtx_mc_Z_EE__60->SetBinContent(41,1.420976e-05);
   nvtx_mc_Z_EE__60->SetBinContent(42,4.727471e-05);
   nvtx_mc_Z_EE__60->SetBinError(2,3.287138e-05);
   nvtx_mc_Z_EE__60->SetBinError(3,7.550013e-05);
   nvtx_mc_Z_EE__60->SetBinError(4,0.0001515146);
   nvtx_mc_Z_EE__60->SetBinError(5,0.0002644818);
   nvtx_mc_Z_EE__60->SetBinError(6,0.0003935527);
   nvtx_mc_Z_EE__60->SetBinError(7,0.0005391155);
   nvtx_mc_Z_EE__60->SetBinError(8,0.0006775261);
   nvtx_mc_Z_EE__60->SetBinError(9,0.000793243);
   nvtx_mc_Z_EE__60->SetBinError(10,0.0008935585);
   nvtx_mc_Z_EE__60->SetBinError(11,0.0009064852);
   nvtx_mc_Z_EE__60->SetBinError(12,0.0009391578);
   nvtx_mc_Z_EE__60->SetBinError(13,0.0009571989);
   nvtx_mc_Z_EE__60->SetBinError(14,0.0009254938);
   nvtx_mc_Z_EE__60->SetBinError(15,0.000901618);
   nvtx_mc_Z_EE__60->SetBinError(16,0.0008704865);
   nvtx_mc_Z_EE__60->SetBinError(17,0.0007901559);
   nvtx_mc_Z_EE__60->SetBinError(18,0.0007313827);
   nvtx_mc_Z_EE__60->SetBinError(19,0.0006838194);
   nvtx_mc_Z_EE__60->SetBinError(20,0.0006084549);
   nvtx_mc_Z_EE__60->SetBinError(21,0.0005440845);
   nvtx_mc_Z_EE__60->SetBinError(22,0.0004656595);
   nvtx_mc_Z_EE__60->SetBinError(23,0.0004027409);
   nvtx_mc_Z_EE__60->SetBinError(24,0.0003403051);
   nvtx_mc_Z_EE__60->SetBinError(25,0.0002817374);
   nvtx_mc_Z_EE__60->SetBinError(26,0.0002064617);
   nvtx_mc_Z_EE__60->SetBinError(27,0.0001708218);
   nvtx_mc_Z_EE__60->SetBinError(28,0.000139541);
   nvtx_mc_Z_EE__60->SetBinError(29,0.000104804);
   nvtx_mc_Z_EE__60->SetBinError(30,8.798847e-05);
   nvtx_mc_Z_EE__60->SetBinError(31,5.448366e-05);
   nvtx_mc_Z_EE__60->SetBinError(32,4.27088e-05);
   nvtx_mc_Z_EE__60->SetBinError(33,3.096202e-05);
   nvtx_mc_Z_EE__60->SetBinError(34,2.237421e-05);
   nvtx_mc_Z_EE__60->SetBinError(35,2.022463e-05);
   nvtx_mc_Z_EE__60->SetBinError(36,1.349081e-05);
   nvtx_mc_Z_EE__60->SetBinError(37,7.058329e-06);
   nvtx_mc_Z_EE__60->SetBinError(38,6.145711e-06);
   nvtx_mc_Z_EE__60->SetBinError(39,6.587979e-06);
   nvtx_mc_Z_EE__60->SetBinError(40,4.15459e-06);
   nvtx_mc_Z_EE__60->SetBinError(41,4.151512e-06);
   nvtx_mc_Z_EE__60->SetBinError(42,9.4797e-06);
   nvtx_mc_Z_EE__60->SetMinimum(9.305167e-08);
   nvtx_mc_Z_EE__60->SetMaximum(0.4445408);
   nvtx_mc_Z_EE__60->SetEntries(258605);
   nvtx_mc_Z_EE__60->SetDirectory(0);
   nvtx_mc_Z_EE__60->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__60->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   nvtx_mc_Z_EE__60->SetMarkerColor(ci);
   nvtx_mc_Z_EE__60->SetMarkerStyle(20);
   nvtx_mc_Z_EE__60->SetMarkerSize(0.7);
   nvtx_mc_Z_EE__60->GetXaxis()->SetTitle("nvtx");
   nvtx_mc_Z_EE__60->GetYaxis()->SetTitle("Entries/1.0");
   nvtx_mc_Z_EE__60->GetYaxis()->SetTitleOffset(0.9);
   nvtx_mc_Z_EE__60->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.25202e-18,1.036569e-20,2.296325e-23,2.068122e-26,NULL,"brNDC");
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
   entry=leg->AddEntry("nvtx_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("nvtx_mc_Signal_EE","signal #gamma + jet","F");
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
   nvtx->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","nvtx_mc_Z_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,3.060235);
   ratio->SetBinContent(3,1.894105);
   ratio->SetBinContent(4,1.755492);
   ratio->SetBinContent(5,1.880404);
   ratio->SetBinContent(6,1.69119);
   ratio->SetBinContent(7,1.555046);
   ratio->SetBinContent(8,1.610175);
   ratio->SetBinContent(9,1.420007);
   ratio->SetBinContent(10,1.407361);
   ratio->SetBinContent(11,1.307603);
   ratio->SetBinContent(12,1.247208);
   ratio->SetBinContent(13,1.243749);
   ratio->SetBinContent(14,1.141212);
   ratio->SetBinContent(15,1.052076);
   ratio->SetBinContent(16,1.008546);
   ratio->SetBinContent(17,0.958459);
   ratio->SetBinContent(18,0.8782521);
   ratio->SetBinContent(19,0.861553);
   ratio->SetBinContent(20,0.7884366);
   ratio->SetBinContent(21,0.7380244);
   ratio->SetBinContent(22,0.6745319);
   ratio->SetBinContent(23,0.6399022);
   ratio->SetBinContent(24,0.6391224);
   ratio->SetBinContent(25,0.5586435);
   ratio->SetBinContent(26,0.4837245);
   ratio->SetBinContent(27,0.4454443);
   ratio->SetBinContent(28,0.4617896);
   ratio->SetBinContent(29,0.4053926);
   ratio->SetBinContent(30,0.4209054);
   ratio->SetBinContent(31,0.3023353);
   ratio->SetBinContent(32,0.3018295);
   ratio->SetBinContent(33,0.2560536);
   ratio->SetBinContent(34,0.2781079);
   ratio->SetBinContent(35,0.2265891);
   ratio->SetBinContent(36,0.2631451);
   ratio->SetBinContent(37,0.2050505);
   ratio->SetBinContent(38,0.2242686);
   ratio->SetBinContent(39,0.2119146);
   ratio->SetBinContent(40,0.2990478);
   ratio->SetBinContent(41,0.2239326);
   ratio->SetBinContent(42,0.3918397);
   ratio->SetBinError(2,1.301638);
   ratio->SetBinError(3,0.2951445);
   ratio->SetBinError(4,0.208047);
   ratio->SetBinError(5,0.1448404);
   ratio->SetBinError(6,0.09850994);
   ratio->SetBinError(7,0.06829619);
   ratio->SetBinError(8,0.05836675);
   ratio->SetBinError(9,0.04432191);
   ratio->SetBinError(10,0.03897125);
   ratio->SetBinError(11,0.033017);
   ratio->SetBinError(12,0.02930131);
   ratio->SetBinError(13,0.02741395);
   ratio->SetBinError(14,0.02461259);
   ratio->SetBinError(15,0.02222721);
   ratio->SetBinError(16,0.02164439);
   ratio->SetBinError(17,0.02043986);
   ratio->SetBinError(18,0.01950733);
   ratio->SetBinError(19,0.01976457);
   ratio->SetBinError(20,0.01883752);
   ratio->SetBinError(21,0.01865969);
   ratio->SetBinError(22,0.01827704);
   ratio->SetBinError(23,0.01864962);
   ratio->SetBinError(24,0.01967679);
   ratio->SetBinError(25,0.01918179);
   ratio->SetBinError(26,0.01800652);
   ratio->SetBinError(27,0.01872032);
   ratio->SetBinError(28,0.0215239);
   ratio->SetBinError(29,0.0213805);
   ratio->SetBinError(30,0.02522868);
   ratio->SetBinError(31,0.02054184);
   ratio->SetBinError(32,0.02335011);
   ratio->SetBinError(33,0.02423785);
   ratio->SetBinError(34,0.02827184);
   ratio->SetBinError(35,0.03104735);
   ratio->SetBinError(36,0.03754643);
   ratio->SetBinError(37,0.03072855);
   ratio->SetBinError(38,0.03837304);
   ratio->SetBinError(39,0.05981776);
   ratio->SetBinError(40,0.07293441);
   ratio->SetBinError(41,0.07704049);
   ratio->SetBinError(42,0.09788907);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(645.9478);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(-0.5,1,40.5,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","nvtx_mc_Z_EE",41,-0.5,40.5);
   ratio->SetBinContent(2,3.060235);
   ratio->SetBinContent(3,1.894105);
   ratio->SetBinContent(4,1.755492);
   ratio->SetBinContent(5,1.880404);
   ratio->SetBinContent(6,1.69119);
   ratio->SetBinContent(7,1.555046);
   ratio->SetBinContent(8,1.610175);
   ratio->SetBinContent(9,1.420007);
   ratio->SetBinContent(10,1.407361);
   ratio->SetBinContent(11,1.307603);
   ratio->SetBinContent(12,1.247208);
   ratio->SetBinContent(13,1.243749);
   ratio->SetBinContent(14,1.141212);
   ratio->SetBinContent(15,1.052076);
   ratio->SetBinContent(16,1.008546);
   ratio->SetBinContent(17,0.958459);
   ratio->SetBinContent(18,0.8782521);
   ratio->SetBinContent(19,0.861553);
   ratio->SetBinContent(20,0.7884366);
   ratio->SetBinContent(21,0.7380244);
   ratio->SetBinContent(22,0.6745319);
   ratio->SetBinContent(23,0.6399022);
   ratio->SetBinContent(24,0.6391224);
   ratio->SetBinContent(25,0.5586435);
   ratio->SetBinContent(26,0.4837245);
   ratio->SetBinContent(27,0.4454443);
   ratio->SetBinContent(28,0.4617896);
   ratio->SetBinContent(29,0.4053926);
   ratio->SetBinContent(30,0.4209054);
   ratio->SetBinContent(31,0.3023353);
   ratio->SetBinContent(32,0.3018295);
   ratio->SetBinContent(33,0.2560536);
   ratio->SetBinContent(34,0.2781079);
   ratio->SetBinContent(35,0.2265891);
   ratio->SetBinContent(36,0.2631451);
   ratio->SetBinContent(37,0.2050505);
   ratio->SetBinContent(38,0.2242686);
   ratio->SetBinContent(39,0.2119146);
   ratio->SetBinContent(40,0.2990478);
   ratio->SetBinContent(41,0.2239326);
   ratio->SetBinContent(42,0.3918397);
   ratio->SetBinError(2,1.301638);
   ratio->SetBinError(3,0.2951445);
   ratio->SetBinError(4,0.208047);
   ratio->SetBinError(5,0.1448404);
   ratio->SetBinError(6,0.09850994);
   ratio->SetBinError(7,0.06829619);
   ratio->SetBinError(8,0.05836675);
   ratio->SetBinError(9,0.04432191);
   ratio->SetBinError(10,0.03897125);
   ratio->SetBinError(11,0.033017);
   ratio->SetBinError(12,0.02930131);
   ratio->SetBinError(13,0.02741395);
   ratio->SetBinError(14,0.02461259);
   ratio->SetBinError(15,0.02222721);
   ratio->SetBinError(16,0.02164439);
   ratio->SetBinError(17,0.02043986);
   ratio->SetBinError(18,0.01950733);
   ratio->SetBinError(19,0.01976457);
   ratio->SetBinError(20,0.01883752);
   ratio->SetBinError(21,0.01865969);
   ratio->SetBinError(22,0.01827704);
   ratio->SetBinError(23,0.01864962);
   ratio->SetBinError(24,0.01967679);
   ratio->SetBinError(25,0.01918179);
   ratio->SetBinError(26,0.01800652);
   ratio->SetBinError(27,0.01872032);
   ratio->SetBinError(28,0.0215239);
   ratio->SetBinError(29,0.0213805);
   ratio->SetBinError(30,0.02522868);
   ratio->SetBinError(31,0.02054184);
   ratio->SetBinError(32,0.02335011);
   ratio->SetBinError(33,0.02423785);
   ratio->SetBinError(34,0.02827184);
   ratio->SetBinError(35,0.03104735);
   ratio->SetBinError(36,0.03754643);
   ratio->SetBinError(37,0.03072855);
   ratio->SetBinError(38,0.03837304);
   ratio->SetBinError(39,0.05981776);
   ratio->SetBinError(40,0.07293441);
   ratio->SetBinError(41,0.07704049);
   ratio->SetBinError(42,0.09788907);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(645.9478);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("nvtx");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   nvtx->cd();
   nvtx->Modified();
   nvtx->cd();
   nvtx->SetSelected(nvtx);
}
