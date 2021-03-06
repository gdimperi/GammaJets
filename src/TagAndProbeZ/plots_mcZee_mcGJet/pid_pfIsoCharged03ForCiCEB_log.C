{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Wed Sep 17 23:45:05 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.09217459,6.525,0.8295713);
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
   
   TH1F *pfIsoCharged03_mc_Z_EB__16 = new TH1F("pfIsoCharged03_mc_Z_EB__16","pfIsoCharged03_mc_Z_EB",60,0,6);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(1,0.7101482);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(2,0.001275934);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(3,0.02079367);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(4,0.0298188);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(5,0.02969174);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(6,0.02653304);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(7,0.02310443);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(8,0.01952846);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(9,0.01704318);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(10,0.01433164);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(11,0.0124718);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(12,0.01083212);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(13,0.009425269);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(14,0.008426672);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(15,0.007311625);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(16,0.00643989);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(17,0.005700868);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(18,0.004985632);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(19,0.004483368);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(20,0.003929407);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(21,0.003422548);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(22,0.003120905);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(23,0.002772954);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(24,0.002427347);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(25,0.002340431);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(26,0.001934963);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(27,0.001750082);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(28,0.001542648);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(29,0.001449804);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(30,0.001311636);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(31,0.001177286);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(32,0.001065044);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(33,0.0009774548);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(34,0.0008972182);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(35,0.000845518);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(36,0.0007176528);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(37,0.0006665165);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(38,0.0006111509);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(39,0.000565462);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(40,0.0005680043);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(41,0.0004790257);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(42,0.0004300573);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(43,0.0004410273);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(44,0.0003657231);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(45,0.0003639229);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(46,0.0003659962);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(47,0.000352061);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(48,0.0002711802);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(49,0.0002598276);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(50,0.000230781);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(1,0.0009128693);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(2,3.805473e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(3,0.0001549688);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(4,0.0001858603);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(5,0.0001849673);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(6,0.0001753836);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(7,0.0001640889);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(8,0.000150698);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(9,0.0001411647);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(10,0.0001287587);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(11,0.0001199975);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(12,0.0001115187);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(13,0.0001047862);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(14,9.930215e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(15,9.229703e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(16,8.635698e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(17,8.108102e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(18,7.548851e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(19,7.304239e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(20,6.755564e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(21,6.149029e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(22,6.027924e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(23,5.677075e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(24,5.382551e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(25,5.32814e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(26,4.643015e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(27,4.413999e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(28,4.235002e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(29,4.104754e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(30,3.949723e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(31,3.692449e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(32,3.519081e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(33,3.373886e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(34,3.238479e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(35,3.111305e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(36,2.805221e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(37,2.784948e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(38,2.766058e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(39,2.556713e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(40,2.58317e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(41,2.293993e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(42,2.195927e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(43,2.260353e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(44,2.021709e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(45,2.044748e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(46,1.981631e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(47,2.069989e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(48,1.651574e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(49,1.676791e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(50,1.492323e-05);
   pfIsoCharged03_mc_Z_EB__16->SetMinimum(2.175238e-08);
   pfIsoCharged03_mc_Z_EB__16->SetMaximum(3.97683);
   pfIsoCharged03_mc_Z_EB__16->SetEntries(1538084);
   pfIsoCharged03_mc_Z_EB__16->SetDirectory(0);
   pfIsoCharged03_mc_Z_EB__16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__16->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__16->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EB__16->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EB__16->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EB__16->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EB__16->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EB__16->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EB__16->Draw("PE");
   
   TH1F *pfIsoCharged03_mc_Signal_EB__17 = new TH1F("pfIsoCharged03_mc_Signal_EB__17","pfIsoCharged03_mc_Signal_EB",60,0,6);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(1,0.7034465);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(2,0.001398849);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(3,0.02161899);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(4,0.03105421);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(5,0.03114824);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(6,0.02704233);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(7,0.02378474);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(8,0.0202264);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(9,0.01732259);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(10,0.01494017);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(11,0.01304513);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(12,0.0114727);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(13,0.009840415);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(14,0.00895936);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(15,0.007467365);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(16,0.006501071);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(17,0.005712484);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(18,0.005106657);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(19,0.004632353);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(20,0.004139618);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(21,0.003558933);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(22,0.003203661);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(23,0.003035504);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(24,0.002595118);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(25,0.002138182);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(26,0.002021397);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(27,0.001847355);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(28,0.001546003);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(29,0.001413486);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(30,0.00126894);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(31,0.001133589);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(32,0.001011806);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(33,0.0009148939);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(34,0.001020489);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(35,0.0007314004);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(36,0.0007367764);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(37,0.0005036169);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(38,0.0004308624);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(39,0.0003713478);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(40,0.0003181446);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(41,0.000180607);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(42,0.0001888957);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(43,0.0001277042);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(44,0.0001248417);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(45,0.0001328048);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(46,0.0001434948);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(47,0.0001277247);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(48,0.0001301358);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(49,0.0001013252);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(50,8.077949e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(1,0.001792394);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(2,3.973861e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(3,0.0001646439);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(4,0.0004015925);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(5,0.0004272289);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(6,0.0002365479);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(7,0.0003435102);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(8,0.0002640971);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(9,0.0002104491);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(10,0.0002792969);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(11,0.0002501189);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(12,0.0002367642);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(13,0.0001063642);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(14,0.0002821241);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(15,9.436692e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(16,8.404598e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(17,8.331757e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(18,7.812358e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(19,8.893654e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(20,7.61136e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(21,7.238332e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(22,6.647602e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(23,0.0001827751);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(24,0.0001613664);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(25,5.019259e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(26,5.396421e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(27,5.193241e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(28,4.735457e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(29,4.434967e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(30,4.059008e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(31,4.308422e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(32,3.911768e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(33,3.577657e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(34,0.0002216644);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(35,3.536847e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(36,0.0001601536);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(37,2.704097e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(38,2.80792e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(39,2.404571e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(40,2.729968e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(41,1.72968e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(42,2.169515e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(43,1.661669e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(44,1.508293e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(45,1.761215e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(46,1.978098e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(47,1.80279e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(48,2.031165e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(49,1.667075e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(50,1.300416e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetEntries(5244647);
   pfIsoCharged03_mc_Signal_EB__17->SetDirectory(0);
   pfIsoCharged03_mc_Signal_EB__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__17->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_EB__17->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *pfIsoCharged03_mc_Z_EB__18 = new TH1F("pfIsoCharged03_mc_Z_EB__18","pfIsoCharged03_mc_Z_EB",60,0,6);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(1,0.7101482);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(2,0.001275934);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(3,0.02079367);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(4,0.0298188);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(5,0.02969174);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(6,0.02653304);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(7,0.02310443);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(8,0.01952846);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(9,0.01704318);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(10,0.01433164);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(11,0.0124718);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(12,0.01083212);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(13,0.009425269);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(14,0.008426672);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(15,0.007311625);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(16,0.00643989);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(17,0.005700868);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(18,0.004985632);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(19,0.004483368);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(20,0.003929407);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(21,0.003422548);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(22,0.003120905);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(23,0.002772954);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(24,0.002427347);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(25,0.002340431);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(26,0.001934963);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(27,0.001750082);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(28,0.001542648);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(29,0.001449804);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(30,0.001311636);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(31,0.001177286);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(32,0.001065044);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(33,0.0009774548);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(34,0.0008972182);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(35,0.000845518);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(36,0.0007176528);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(37,0.0006665165);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(38,0.0006111509);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(39,0.000565462);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(40,0.0005680043);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(41,0.0004790257);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(42,0.0004300573);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(43,0.0004410273);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(44,0.0003657231);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(45,0.0003639229);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(46,0.0003659962);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(47,0.000352061);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(48,0.0002711802);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(49,0.0002598276);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(50,0.000230781);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(1,0.0009128693);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(2,3.805473e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(3,0.0001549688);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(4,0.0001858603);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(5,0.0001849673);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(6,0.0001753836);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(7,0.0001640889);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(8,0.000150698);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(9,0.0001411647);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(10,0.0001287587);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(11,0.0001199975);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(12,0.0001115187);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(13,0.0001047862);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(14,9.930215e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(15,9.229703e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(16,8.635698e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(17,8.108102e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(18,7.548851e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(19,7.304239e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(20,6.755564e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(21,6.149029e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(22,6.027924e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(23,5.677075e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(24,5.382551e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(25,5.32814e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(26,4.643015e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(27,4.413999e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(28,4.235002e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(29,4.104754e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(30,3.949723e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(31,3.692449e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(32,3.519081e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(33,3.373886e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(34,3.238479e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(35,3.111305e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(36,2.805221e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(37,2.784948e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(38,2.766058e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(39,2.556713e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(40,2.58317e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(41,2.293993e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(42,2.195927e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(43,2.260353e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(44,2.021709e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(45,2.044748e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(46,1.981631e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(47,2.069989e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(48,1.651574e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(49,1.676791e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(50,1.492323e-05);
   pfIsoCharged03_mc_Z_EB__18->SetMinimum(2.175238e-08);
   pfIsoCharged03_mc_Z_EB__18->SetMaximum(3.97683);
   pfIsoCharged03_mc_Z_EB__18->SetEntries(1538084);
   pfIsoCharged03_mc_Z_EB__18->SetDirectory(0);
   pfIsoCharged03_mc_Z_EB__18->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__18->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__18->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EB__18->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EB__18->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EB__18->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EB__18->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EB__18->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EB__18->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.346344e-310,0.0002929687,2.346344e-310,2.091838e-14,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoCharged03_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoCharged03_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.009527);
   ratio->SetBinContent(2,0.9121309);
   ratio->SetBinContent(3,0.9618242);
   ratio->SetBinContent(4,0.9602177);
   ratio->SetBinContent(5,0.9532399);
   ratio->SetBinContent(6,0.9811671);
   ratio->SetBinContent(7,0.9713973);
   ratio->SetBinContent(8,0.9654937);
   ratio->SetBinContent(9,0.9838703);
   ratio->SetBinContent(10,0.9592693);
   ratio->SetBinContent(11,0.9560499);
   ratio->SetBinContent(12,0.9441653);
   ratio->SetBinContent(13,0.9578121);
   ratio->SetBinContent(14,0.9405439);
   ratio->SetBinContent(15,0.9791439);
   ratio->SetBinContent(16,0.9905891);
   ratio->SetBinContent(17,0.9979666);
   ratio->SetBinContent(18,0.9763005);
   ratio->SetBinContent(19,0.9678382);
   ratio->SetBinContent(20,0.9492198);
   ratio->SetBinContent(21,0.9616781);
   ratio->SetBinContent(22,0.9741682);
   ratio->SetBinContent(23,0.9135069);
   ratio->SetBinContent(24,0.935351);
   ratio->SetBinContent(25,1.094589);
   ratio->SetBinContent(26,0.9572405);
   ratio->SetBinContent(27,0.947345);
   ratio->SetBinContent(28,0.9978302);
   ratio->SetBinContent(29,1.025694);
   ratio->SetBinContent(30,1.033647);
   ratio->SetBinContent(31,1.038547);
   ratio->SetBinContent(32,1.052617);
   ratio->SetBinContent(33,1.068381);
   ratio->SetBinContent(34,0.8792046);
   ratio->SetBinContent(35,1.156026);
   ratio->SetBinContent(36,0.9740442);
   ratio->SetBinContent(37,1.32346);
   ratio->SetBinContent(38,1.418437);
   ratio->SetBinContent(39,1.522729);
   ratio->SetBinContent(40,1.785365);
   ratio->SetBinContent(41,2.65231);
   ratio->SetBinContent(42,2.276692);
   ratio->SetBinContent(43,3.453506);
   ratio->SetBinContent(44,2.929494);
   ratio->SetBinContent(45,2.740285);
   ratio->SetBinContent(46,2.550589);
   ratio->SetBinContent(47,2.756405);
   ratio->SetBinContent(48,2.083826);
   ratio->SetBinContent(49,2.564294);
   ratio->SetBinContent(50,2.856925);
   ratio->SetBinError(1,0.002881101);
   ratio->SetBinError(2,0.03756994);
   ratio->SetBinError(3,0.0102488);
   ratio->SetBinError(4,0.01378461);
   ratio->SetBinError(5,0.01435999);
   ratio->SetBinError(6,0.01075745);
   ratio->SetBinError(7,0.01563388);
   ratio->SetBinError(8,0.01464358);
   ratio->SetBinError(9,0.01446651);
   ratio->SetBinError(10,0.01989635);
   ratio->SetBinError(11,0.02050924);
   ratio->SetBinError(12,0.02177493);
   ratio->SetBinError(13,0.01485175);
   ratio->SetBinError(14,0.03162306);
   ratio->SetBinError(15,0.01748939);
   ratio->SetBinError(16,0.0184514);
   ratio->SetBinError(17,0.02033035);
   ratio->SetBinError(18,0.02101421);
   ratio->SetBinError(19,0.02437005);
   ratio->SetBinError(20,0.02389403);
   ratio->SetBinError(21,0.02609746);
   ratio->SetBinError(22,0.0276159);
   ratio->SetBinError(23,0.05809704);
   ratio->SetBinError(24,0.06174847);
   ratio->SetBinError(25,0.03579361);
   ratio->SetBinError(26,0.03436053);
   ratio->SetBinError(27,0.0357791);
   ratio->SetBinError(28,0.04104314);
   ratio->SetBinError(29,0.04334762);
   ratio->SetBinError(30,0.04540974);
   ratio->SetBinError(31,0.05117658);
   ratio->SetBinError(32,0.05353304);
   ratio->SetBinError(33,0.05572603);
   ratio->SetBinError(34,0.1935943);
   ratio->SetBinError(35,0.07024685);
   ratio->SetBinError(36,0.2151248);
   ratio->SetBinError(37,0.09004261);
   ratio->SetBinError(38,0.1125451);
   ratio->SetBinError(39,0.1202594);
   ratio->SetBinError(40,0.1733868);
   ratio->SetBinError(41,0.2839991);
   ratio->SetBinError(42,0.2861609);
   ratio->SetBinError(43,0.4829675);
   ratio->SetBinError(44,0.3892201);
   ratio->SetBinError(45,0.3946782);
   ratio->SetBinError(46,0.3777505);
   ratio->SetBinError(47,0.4214628);
   ratio->SetBinError(48,0.3491282);
   ratio->SetBinError(49,0.4531907);
   ratio->SetBinError(50,0.4956342);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2609.266);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.009527);
   ratio->SetBinContent(2,0.9121309);
   ratio->SetBinContent(3,0.9618242);
   ratio->SetBinContent(4,0.9602177);
   ratio->SetBinContent(5,0.9532399);
   ratio->SetBinContent(6,0.9811671);
   ratio->SetBinContent(7,0.9713973);
   ratio->SetBinContent(8,0.9654937);
   ratio->SetBinContent(9,0.9838703);
   ratio->SetBinContent(10,0.9592693);
   ratio->SetBinContent(11,0.9560499);
   ratio->SetBinContent(12,0.9441653);
   ratio->SetBinContent(13,0.9578121);
   ratio->SetBinContent(14,0.9405439);
   ratio->SetBinContent(15,0.9791439);
   ratio->SetBinContent(16,0.9905891);
   ratio->SetBinContent(17,0.9979666);
   ratio->SetBinContent(18,0.9763005);
   ratio->SetBinContent(19,0.9678382);
   ratio->SetBinContent(20,0.9492198);
   ratio->SetBinContent(21,0.9616781);
   ratio->SetBinContent(22,0.9741682);
   ratio->SetBinContent(23,0.9135069);
   ratio->SetBinContent(24,0.935351);
   ratio->SetBinContent(25,1.094589);
   ratio->SetBinContent(26,0.9572405);
   ratio->SetBinContent(27,0.947345);
   ratio->SetBinContent(28,0.9978302);
   ratio->SetBinContent(29,1.025694);
   ratio->SetBinContent(30,1.033647);
   ratio->SetBinContent(31,1.038547);
   ratio->SetBinContent(32,1.052617);
   ratio->SetBinContent(33,1.068381);
   ratio->SetBinContent(34,0.8792046);
   ratio->SetBinContent(35,1.156026);
   ratio->SetBinContent(36,0.9740442);
   ratio->SetBinContent(37,1.32346);
   ratio->SetBinContent(38,1.418437);
   ratio->SetBinContent(39,1.522729);
   ratio->SetBinContent(40,1.785365);
   ratio->SetBinContent(41,2.65231);
   ratio->SetBinContent(42,2.276692);
   ratio->SetBinContent(43,3.453506);
   ratio->SetBinContent(44,2.929494);
   ratio->SetBinContent(45,2.740285);
   ratio->SetBinContent(46,2.550589);
   ratio->SetBinContent(47,2.756405);
   ratio->SetBinContent(48,2.083826);
   ratio->SetBinContent(49,2.564294);
   ratio->SetBinContent(50,2.856925);
   ratio->SetBinError(1,0.002881101);
   ratio->SetBinError(2,0.03756994);
   ratio->SetBinError(3,0.0102488);
   ratio->SetBinError(4,0.01378461);
   ratio->SetBinError(5,0.01435999);
   ratio->SetBinError(6,0.01075745);
   ratio->SetBinError(7,0.01563388);
   ratio->SetBinError(8,0.01464358);
   ratio->SetBinError(9,0.01446651);
   ratio->SetBinError(10,0.01989635);
   ratio->SetBinError(11,0.02050924);
   ratio->SetBinError(12,0.02177493);
   ratio->SetBinError(13,0.01485175);
   ratio->SetBinError(14,0.03162306);
   ratio->SetBinError(15,0.01748939);
   ratio->SetBinError(16,0.0184514);
   ratio->SetBinError(17,0.02033035);
   ratio->SetBinError(18,0.02101421);
   ratio->SetBinError(19,0.02437005);
   ratio->SetBinError(20,0.02389403);
   ratio->SetBinError(21,0.02609746);
   ratio->SetBinError(22,0.0276159);
   ratio->SetBinError(23,0.05809704);
   ratio->SetBinError(24,0.06174847);
   ratio->SetBinError(25,0.03579361);
   ratio->SetBinError(26,0.03436053);
   ratio->SetBinError(27,0.0357791);
   ratio->SetBinError(28,0.04104314);
   ratio->SetBinError(29,0.04334762);
   ratio->SetBinError(30,0.04540974);
   ratio->SetBinError(31,0.05117658);
   ratio->SetBinError(32,0.05353304);
   ratio->SetBinError(33,0.05572603);
   ratio->SetBinError(34,0.1935943);
   ratio->SetBinError(35,0.07024685);
   ratio->SetBinError(36,0.2151248);
   ratio->SetBinError(37,0.09004261);
   ratio->SetBinError(38,0.1125451);
   ratio->SetBinError(39,0.1202594);
   ratio->SetBinError(40,0.1733868);
   ratio->SetBinError(41,0.2839991);
   ratio->SetBinError(42,0.2861609);
   ratio->SetBinError(43,0.4829675);
   ratio->SetBinError(44,0.3892201);
   ratio->SetBinError(45,0.3946782);
   ratio->SetBinError(46,0.3777505);
   ratio->SetBinError(47,0.4214628);
   ratio->SetBinError(48,0.3491282);
   ratio->SetBinError(49,0.4531907);
   ratio->SetBinError(50,0.4956342);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2609.266);
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
