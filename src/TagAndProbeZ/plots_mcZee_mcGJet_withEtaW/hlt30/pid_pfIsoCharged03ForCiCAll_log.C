{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Sat Sep 27 22:34:48 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.09413325,6.525,0.8471992);
   pid_pfIsoCharged03ForCiC->SetFillColor(0);
   pid_pfIsoCharged03ForCiC->SetBorderMode(0);
   pid_pfIsoCharged03ForCiC->SetBorderSize(2);
   pid_pfIsoCharged03ForCiC->SetTickx(1);
   pid_pfIsoCharged03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoCharged03ForCiC->SetRightMargin(0.07);
   pid_pfIsoCharged03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoCharged03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoCharged03_mc_Z_All__10 = new TH1F("pfIsoCharged03_mc_Z_All__10","pfIsoCharged03_mc_Z_All",60,0,6);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(1,0.7254449);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(2,0.002097266);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(3,0.0210401);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(4,0.02895323);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(5,0.02897855);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(6,0.02565427);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(7,0.02178689);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(8,0.01856368);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(9,0.01589688);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(10,0.01356184);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(11,0.01178901);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(12,0.009977578);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(13,0.008780538);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(14,0.007673474);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(15,0.006748707);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(16,0.005803455);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(17,0.005026642);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(18,0.004534458);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(19,0.004052232);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(20,0.003595607);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(21,0.003151301);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(22,0.002751936);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(23,0.002427962);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(24,0.002189919);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(25,0.001976443);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(26,0.001793595);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(27,0.001558175);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(28,0.001428888);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(29,0.001316175);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(30,0.001149533);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(31,0.001035058);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(32,0.000971663);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(33,0.0008706833);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(34,0.0007928426);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(35,0.0007110084);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(36,0.0006902639);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(37,0.0005553006);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(38,0.0005270597);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(39,0.0005450177);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(40,0.0004745336);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(41,0.0004350012);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(42,0.000397632);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(43,0.0003644207);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(44,0.0003415243);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(45,0.0002878123);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(46,0.0003197437);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(47,0.000267746);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(48,0.0002586986);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(49,0.0002250607);
   pfIsoCharged03_mc_Z_All__10->SetBinContent(50,0.0002257339);
   pfIsoCharged03_mc_Z_All__10->SetBinError(1,0.0007258701);
   pfIsoCharged03_mc_Z_All__10->SetBinError(2,4.102416e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(3,0.0001254108);
   pfIsoCharged03_mc_Z_All__10->SetBinError(4,0.0001464144);
   pfIsoCharged03_mc_Z_All__10->SetBinError(5,0.0001457215);
   pfIsoCharged03_mc_Z_All__10->SetBinError(6,0.000136898);
   pfIsoCharged03_mc_Z_All__10->SetBinError(7,0.0001261508);
   pfIsoCharged03_mc_Z_All__10->SetBinError(8,0.0001162606);
   pfIsoCharged03_mc_Z_All__10->SetBinError(9,0.0001076196);
   pfIsoCharged03_mc_Z_All__10->SetBinError(10,9.934373e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(11,9.26865e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(12,8.495669e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(13,7.997284e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(14,7.465403e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(15,7.000138e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(16,6.510982e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(17,6.018466e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(18,5.737786e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(19,5.427311e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(20,5.115562e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(21,4.774562e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(22,4.458102e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(23,4.179269e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(24,3.99357e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(25,3.795077e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(26,3.619813e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(27,3.337509e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(28,3.222115e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(29,3.09444e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(30,2.88595e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(31,2.743295e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(32,2.649477e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(33,2.508768e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(34,2.391947e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(35,2.269303e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(36,2.250812e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(37,2.004927e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(38,1.930714e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(39,2.009961e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(40,1.845229e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(41,1.777912e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(42,1.689722e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(43,1.614176e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(44,1.568099e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(45,1.420333e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(46,1.508153e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(47,1.359223e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(48,1.379638e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(49,1.274523e-05);
   pfIsoCharged03_mc_Z_All__10->SetBinError(50,1.269608e-05);
   pfIsoCharged03_mc_Z_All__10->SetMinimum(5.521825e-08);
   pfIsoCharged03_mc_Z_All__10->SetMaximum(4.062491);
   pfIsoCharged03_mc_Z_All__10->SetEntries(1581076);
   pfIsoCharged03_mc_Z_All__10->SetDirectory(0);
   pfIsoCharged03_mc_Z_All__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_All__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_All__10->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_All__10->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_All__10->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_All__10->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_All__10->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_All__10->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_All__10->Draw("PE");
   
   TH1F *pfIsoCharged03_mc_Signal_All__11 = new TH1F("pfIsoCharged03_mc_Signal_All__11","pfIsoCharged03_mc_Signal_All",60,0,6);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(1,0.6829824);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(2,0.002174351);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(3,0.02000246);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(4,0.02878117);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(5,0.02927292);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(6,0.02655681);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(7,0.0235809);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(8,0.02074577);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(9,0.01776132);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(10,0.01588571);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(11,0.01398555);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(12,0.01219536);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(13,0.01038005);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(14,0.009096365);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(15,0.008947115);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(16,0.006983065);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(17,0.00688763);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(18,0.006172081);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(19,0.005313961);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(20,0.00481948);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(21,0.004776832);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(22,0.003741957);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(23,0.003503941);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(24,0.003371164);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(25,0.002766421);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(26,0.002461057);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(27,0.002593647);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(28,0.002337453);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(29,0.001906787);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(30,0.001926175);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(31,0.001709309);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(32,0.001546522);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(33,0.001511538);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(34,0.001501986);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(35,0.00130356);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(36,0.001222391);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(37,0.0008551754);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(38,0.0008069876);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(39,0.0009007363);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(40,0.0007950682);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(41,0.0007453419);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(42,0.0006431143);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(43,0.0005964076);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(44,0.0005997836);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(45,0.0007521625);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(46,0.0005196263);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(47,0.0006075695);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(48,0.0003586604);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(49,0.0006008153);
   pfIsoCharged03_mc_Signal_All__11->SetBinContent(50,0.0005133843);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(1,0.002012405);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(2,0.0001145024);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(3,0.000329838);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(4,0.0004080387);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(5,0.0004088163);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(6,0.0003937999);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(7,0.0003753094);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(8,0.0003675784);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(9,0.000326797);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(10,0.0003265644);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(11,0.0003154577);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(12,0.0002925286);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(13,0.0002627403);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(14,0.0002367738);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(15,0.0002683717);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(16,0.0002087868);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(17,0.0002333216);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(18,0.0002258532);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(19,0.0002009163);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(20,0.0001980187);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(21,0.0002125299);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(22,0.0001681698);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(23,0.000172636);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(24,0.0001766246);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(25,0.0001522105);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(26,0.0001424234);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(27,0.000163445);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(28,0.0001580027);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(29,0.0001330814);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(30,0.0001409811);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(31,0.0001332557);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(32,0.0001279035);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(33,0.0001327734);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(34,0.0001364228);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(35,0.0001262769);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(36,0.0001199479);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(37,9.37343e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(38,9.311248e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(39,0.0001090329);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(40,9.739209e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(41,0.0001034196);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(42,9.303825e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(43,9.483078e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(44,9.360643e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(45,0.0001094004);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(46,8.889126e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(47,9.693757e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(48,6.471334e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(49,9.607578e-05);
   pfIsoCharged03_mc_Signal_All__11->SetBinError(50,8.616388e-05);
   pfIsoCharged03_mc_Signal_All__11->SetEntries(1617535);
   pfIsoCharged03_mc_Signal_All__11->SetDirectory(0);
   pfIsoCharged03_mc_Signal_All__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_All__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_All__11->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_All__11->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_All__11->Draw("HSAME");
   
   TH1F *pfIsoCharged03_mc_Z_All__12 = new TH1F("pfIsoCharged03_mc_Z_All__12","pfIsoCharged03_mc_Z_All",60,0,6);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(1,0.7254449);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(2,0.002097266);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(3,0.0210401);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(4,0.02895323);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(5,0.02897855);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(6,0.02565427);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(7,0.02178689);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(8,0.01856368);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(9,0.01589688);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(10,0.01356184);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(11,0.01178901);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(12,0.009977578);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(13,0.008780538);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(14,0.007673474);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(15,0.006748707);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(16,0.005803455);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(17,0.005026642);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(18,0.004534458);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(19,0.004052232);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(20,0.003595607);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(21,0.003151301);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(22,0.002751936);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(23,0.002427962);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(24,0.002189919);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(25,0.001976443);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(26,0.001793595);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(27,0.001558175);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(28,0.001428888);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(29,0.001316175);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(30,0.001149533);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(31,0.001035058);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(32,0.000971663);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(33,0.0008706833);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(34,0.0007928426);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(35,0.0007110084);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(36,0.0006902639);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(37,0.0005553006);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(38,0.0005270597);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(39,0.0005450177);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(40,0.0004745336);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(41,0.0004350012);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(42,0.000397632);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(43,0.0003644207);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(44,0.0003415243);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(45,0.0002878123);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(46,0.0003197437);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(47,0.000267746);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(48,0.0002586986);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(49,0.0002250607);
   pfIsoCharged03_mc_Z_All__12->SetBinContent(50,0.0002257339);
   pfIsoCharged03_mc_Z_All__12->SetBinError(1,0.0007258701);
   pfIsoCharged03_mc_Z_All__12->SetBinError(2,4.102416e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(3,0.0001254108);
   pfIsoCharged03_mc_Z_All__12->SetBinError(4,0.0001464144);
   pfIsoCharged03_mc_Z_All__12->SetBinError(5,0.0001457215);
   pfIsoCharged03_mc_Z_All__12->SetBinError(6,0.000136898);
   pfIsoCharged03_mc_Z_All__12->SetBinError(7,0.0001261508);
   pfIsoCharged03_mc_Z_All__12->SetBinError(8,0.0001162606);
   pfIsoCharged03_mc_Z_All__12->SetBinError(9,0.0001076196);
   pfIsoCharged03_mc_Z_All__12->SetBinError(10,9.934373e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(11,9.26865e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(12,8.495669e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(13,7.997284e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(14,7.465403e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(15,7.000138e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(16,6.510982e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(17,6.018466e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(18,5.737786e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(19,5.427311e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(20,5.115562e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(21,4.774562e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(22,4.458102e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(23,4.179269e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(24,3.99357e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(25,3.795077e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(26,3.619813e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(27,3.337509e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(28,3.222115e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(29,3.09444e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(30,2.88595e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(31,2.743295e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(32,2.649477e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(33,2.508768e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(34,2.391947e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(35,2.269303e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(36,2.250812e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(37,2.004927e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(38,1.930714e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(39,2.009961e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(40,1.845229e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(41,1.777912e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(42,1.689722e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(43,1.614176e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(44,1.568099e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(45,1.420333e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(46,1.508153e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(47,1.359223e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(48,1.379638e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(49,1.274523e-05);
   pfIsoCharged03_mc_Z_All__12->SetBinError(50,1.269608e-05);
   pfIsoCharged03_mc_Z_All__12->SetMinimum(5.521825e-08);
   pfIsoCharged03_mc_Z_All__12->SetMaximum(4.062491);
   pfIsoCharged03_mc_Z_All__12->SetEntries(1581076);
   pfIsoCharged03_mc_Z_All__12->SetDirectory(0);
   pfIsoCharged03_mc_Z_All__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_All__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_All__12->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_All__12->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_All__12->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_All__12->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_All__12->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_All__12->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_All__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.408087e-320,0,1.281112e-320,0,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","All","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pfIsoCharged03_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoCharged03_mc_Signal_All","signal #gamma + jet","F");
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
   pid_pfIsoCharged03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.062172);
   ratio->SetBinContent(2,0.9645484);
   ratio->SetBinContent(3,1.051875);
   ratio->SetBinContent(4,1.005978);
   ratio->SetBinContent(5,0.9899438);
   ratio->SetBinContent(6,0.9660144);
   ratio->SetBinContent(7,0.9239213);
   ratio->SetBinContent(8,0.8948178);
   ratio->SetBinContent(9,0.8950282);
   ratio->SetBinContent(10,0.8537133);
   ratio->SetBinContent(11,0.8429421);
   ratio->SetBinContent(12,0.8181458);
   ratio->SetBinContent(13,0.8459048);
   ratio->SetBinContent(14,0.8435758);
   ratio->SetBinContent(15,0.7542886);
   ratio->SetBinContent(16,0.8310756);
   ratio->SetBinContent(17,0.7298072);
   ratio->SetBinContent(18,0.7346725);
   ratio->SetBinContent(19,0.7625633);
   ratio->SetBinContent(20,0.746057);
   ratio->SetBinContent(21,0.6597052);
   ratio->SetBinContent(22,0.7354271);
   ratio->SetBinContent(23,0.6929233);
   ratio->SetBinContent(24,0.6496032);
   ratio->SetBinContent(25,0.7144406);
   ratio->SetBinContent(26,0.7287906);
   ratio->SetBinContent(27,0.6007661);
   ratio->SetBinContent(28,0.6113013);
   ratio->SetBinContent(29,0.6902579);
   ratio->SetBinContent(30,0.5967959);
   ratio->SetBinContent(31,0.6055416);
   ratio->SetBinContent(32,0.628289);
   ratio->SetBinContent(33,0.5760248);
   ratio->SetBinContent(34,0.5278628);
   ratio->SetBinContent(35,0.545436);
   ratio->SetBinContent(36,0.5646834);
   ratio->SetBinContent(37,0.6493412);
   ratio->SetBinContent(38,0.6531199);
   ratio->SetBinContent(39,0.6050802);
   ratio->SetBinContent(40,0.5968464);
   ratio->SetBinContent(41,0.5836264);
   ratio->SetBinContent(42,0.6182913);
   ratio->SetBinContent(43,0.6110263);
   ratio->SetBinContent(44,0.5694125);
   ratio->SetBinContent(45,0.3826465);
   ratio->SetBinContent(46,0.6153341);
   ratio->SetBinContent(47,0.4406838);
   ratio->SetBinContent(48,0.7212912);
   ratio->SetBinContent(49,0.3745922);
   ratio->SetBinContent(50,0.4396978);
   ratio->SetBinError(1,0.003305218);
   ratio->SetBinError(2,0.05418454);
   ratio->SetBinError(3,0.01844367);
   ratio->SetBinError(4,0.01514215);
   ratio->SetBinError(5,0.01469415);
   ratio->SetBinError(6,0.01522393);
   ratio->SetBinError(7,0.01564786);
   ratio->SetBinError(8,0.01681587);
   ratio->SetBinError(9,0.01754729);
   ratio->SetBinError(10,0.0186308);
   ratio->SetBinError(11,0.02013529);
   ratio->SetBinError(12,0.02082453);
   ratio->SetBinError(13,0.02275553);
   ratio->SetBinError(14,0.02344147);
   ratio->SetBinError(15,0.02393972);
   ratio->SetBinError(16,0.02654009);
   ratio->SetBinError(17,0.02622134);
   ratio->SetBinError(18,0.02844562);
   ratio->SetBinError(19,0.03058738);
   ratio->SetBinError(20,0.03243905);
   ratio->SetBinError(21,0.03100668);
   ratio->SetBinError(22,0.03513302);
   ratio->SetBinError(23,0.03616326);
   ratio->SetBinError(24,0.03603724);
   ratio->SetBinError(25,0.04163405);
   ratio->SetBinError(26,0.04466684);
   ratio->SetBinError(27,0.03998588);
   ratio->SetBinError(28,0.0435602);
   ratio->SetBinError(29,0.05083548);
   ratio->SetBinError(30,0.04617898);
   ratio->SetBinError(31,0.04986085);
   ratio->SetBinError(32,0.05471331);
   ratio->SetBinError(33,0.05325066);
   ratio->SetBinError(34,0.05052054);
   ratio->SetBinError(35,0.05563082);
   ratio->SetBinError(36,0.05838924);
   ratio->SetBinError(37,0.07493511);
   ratio->SetBinError(38,0.07906548);
   ratio->SetBinError(39,0.07656789);
   ratio->SetBinError(40,0.07670613);
   ratio->SetBinError(41,0.08442096);
   ratio->SetBinError(42,0.09322615);
   ratio->SetBinError(43,0.1008546);
   ratio->SetBinError(44,0.09263254);
   ratio->SetBinError(45,0.05877134);
   ratio->SetBinError(46,0.1091918);
   ratio->SetBinError(47,0.07378429);
   ratio->SetBinError(48,0.1357088);
   ratio->SetBinError(49,0.06354597);
   ratio->SetBinError(50,0.07783017);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(8215.615);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.062172);
   ratio->SetBinContent(2,0.9645484);
   ratio->SetBinContent(3,1.051875);
   ratio->SetBinContent(4,1.005978);
   ratio->SetBinContent(5,0.9899438);
   ratio->SetBinContent(6,0.9660144);
   ratio->SetBinContent(7,0.9239213);
   ratio->SetBinContent(8,0.8948178);
   ratio->SetBinContent(9,0.8950282);
   ratio->SetBinContent(10,0.8537133);
   ratio->SetBinContent(11,0.8429421);
   ratio->SetBinContent(12,0.8181458);
   ratio->SetBinContent(13,0.8459048);
   ratio->SetBinContent(14,0.8435758);
   ratio->SetBinContent(15,0.7542886);
   ratio->SetBinContent(16,0.8310756);
   ratio->SetBinContent(17,0.7298072);
   ratio->SetBinContent(18,0.7346725);
   ratio->SetBinContent(19,0.7625633);
   ratio->SetBinContent(20,0.746057);
   ratio->SetBinContent(21,0.6597052);
   ratio->SetBinContent(22,0.7354271);
   ratio->SetBinContent(23,0.6929233);
   ratio->SetBinContent(24,0.6496032);
   ratio->SetBinContent(25,0.7144406);
   ratio->SetBinContent(26,0.7287906);
   ratio->SetBinContent(27,0.6007661);
   ratio->SetBinContent(28,0.6113013);
   ratio->SetBinContent(29,0.6902579);
   ratio->SetBinContent(30,0.5967959);
   ratio->SetBinContent(31,0.6055416);
   ratio->SetBinContent(32,0.628289);
   ratio->SetBinContent(33,0.5760248);
   ratio->SetBinContent(34,0.5278628);
   ratio->SetBinContent(35,0.545436);
   ratio->SetBinContent(36,0.5646834);
   ratio->SetBinContent(37,0.6493412);
   ratio->SetBinContent(38,0.6531199);
   ratio->SetBinContent(39,0.6050802);
   ratio->SetBinContent(40,0.5968464);
   ratio->SetBinContent(41,0.5836264);
   ratio->SetBinContent(42,0.6182913);
   ratio->SetBinContent(43,0.6110263);
   ratio->SetBinContent(44,0.5694125);
   ratio->SetBinContent(45,0.3826465);
   ratio->SetBinContent(46,0.6153341);
   ratio->SetBinContent(47,0.4406838);
   ratio->SetBinContent(48,0.7212912);
   ratio->SetBinContent(49,0.3745922);
   ratio->SetBinContent(50,0.4396978);
   ratio->SetBinError(1,0.003305218);
   ratio->SetBinError(2,0.05418454);
   ratio->SetBinError(3,0.01844367);
   ratio->SetBinError(4,0.01514215);
   ratio->SetBinError(5,0.01469415);
   ratio->SetBinError(6,0.01522393);
   ratio->SetBinError(7,0.01564786);
   ratio->SetBinError(8,0.01681587);
   ratio->SetBinError(9,0.01754729);
   ratio->SetBinError(10,0.0186308);
   ratio->SetBinError(11,0.02013529);
   ratio->SetBinError(12,0.02082453);
   ratio->SetBinError(13,0.02275553);
   ratio->SetBinError(14,0.02344147);
   ratio->SetBinError(15,0.02393972);
   ratio->SetBinError(16,0.02654009);
   ratio->SetBinError(17,0.02622134);
   ratio->SetBinError(18,0.02844562);
   ratio->SetBinError(19,0.03058738);
   ratio->SetBinError(20,0.03243905);
   ratio->SetBinError(21,0.03100668);
   ratio->SetBinError(22,0.03513302);
   ratio->SetBinError(23,0.03616326);
   ratio->SetBinError(24,0.03603724);
   ratio->SetBinError(25,0.04163405);
   ratio->SetBinError(26,0.04466684);
   ratio->SetBinError(27,0.03998588);
   ratio->SetBinError(28,0.0435602);
   ratio->SetBinError(29,0.05083548);
   ratio->SetBinError(30,0.04617898);
   ratio->SetBinError(31,0.04986085);
   ratio->SetBinError(32,0.05471331);
   ratio->SetBinError(33,0.05325066);
   ratio->SetBinError(34,0.05052054);
   ratio->SetBinError(35,0.05563082);
   ratio->SetBinError(36,0.05838924);
   ratio->SetBinError(37,0.07493511);
   ratio->SetBinError(38,0.07906548);
   ratio->SetBinError(39,0.07656789);
   ratio->SetBinError(40,0.07670613);
   ratio->SetBinError(41,0.08442096);
   ratio->SetBinError(42,0.09322615);
   ratio->SetBinError(43,0.1008546);
   ratio->SetBinError(44,0.09263254);
   ratio->SetBinError(45,0.05877134);
   ratio->SetBinError(46,0.1091918);
   ratio->SetBinError(47,0.07378429);
   ratio->SetBinError(48,0.1357088);
   ratio->SetBinError(49,0.06354597);
   ratio->SetBinError(50,0.07783017);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(8215.615);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoCharged03ForCiC->cd();
   pid_pfIsoCharged03ForCiC->Modified();
   pid_pfIsoCharged03ForCiC->cd();
   pid_pfIsoCharged03ForCiC->SetSelected(pid_pfIsoCharged03ForCiC);
}
