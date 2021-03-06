{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Sat Sep 27 23:43:18 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.0935238,6.525,0.8417142);
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
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(1,0.7202257);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(2,0.00139414);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(3,0.02107508);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(4,0.02976872);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(5,0.02981985);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(6,0.02607943);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(7,0.02261386);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(8,0.01912199);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(9,0.01621241);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(10,0.01379667);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(11,0.01196014);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(12,0.01035457);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(13,0.009004682);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(14,0.00808086);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(15,0.006886632);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(16,0.006034734);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(17,0.005272483);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(18,0.004675434);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(19,0.004194861);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(20,0.003756714);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(21,0.003204126);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(22,0.002774759);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(23,0.002471988);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(24,0.002215435);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(25,0.002090716);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(26,0.001751484);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(27,0.00157646);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(28,0.001388851);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(29,0.001352653);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(30,0.0011812);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(31,0.0009862558);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(32,0.0009962318);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(33,0.0008282181);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(34,0.0007384518);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(35,0.0006878883);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(36,0.0006564209);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(37,0.0004961775);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(38,0.0004870174);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(39,0.0004738197);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(40,0.0004499718);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(41,0.0004117295);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(42,0.0003607521);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(43,0.0003456774);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(44,0.0002817595);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(45,0.0002920941);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(46,0.000311678);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(47,0.0002984687);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(48,0.0002026784);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(49,0.0001880641);
   pfIsoCharged03_mc_Z_EB__16->SetBinContent(50,0.0001700299);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(1,0.001243595);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(2,5.309106e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(3,0.0002125991);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(4,0.0002532623);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(5,0.0002529899);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(6,0.0002348857);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(7,0.0002204835);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(8,0.0002020954);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(9,0.0001862436);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(10,0.0001703521);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(11,0.0001584721);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(12,0.0001474327);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(13,0.000137312);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(14,0.0001329638);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(15,0.0001205165);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(16,0.0001136058);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(17,0.0001042733);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(18,0.0001008866);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(19,9.544393e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(20,9.036525e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(21,8.103838e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(22,7.634362e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(23,7.122144e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(24,6.969395e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(25,6.83645e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(26,5.899196e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(27,5.755755e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(28,5.408223e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(29,5.522298e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(30,4.974803e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(31,4.427662e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(32,4.681924e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(33,4.149093e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(34,3.997481e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(35,3.700036e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(36,3.605391e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(37,3.197571e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(38,3.241027e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(39,3.057021e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(40,2.983114e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(41,2.891894e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(42,2.644539e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(43,2.552873e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(44,2.294543e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(45,2.499605e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(46,2.509613e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(47,2.593466e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(48,1.927697e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(49,1.760898e-05);
   pfIsoCharged03_mc_Z_EB__16->SetBinError(50,1.722837e-05);
   pfIsoCharged03_mc_Z_EB__16->SetMinimum(4.41016e-08);
   pfIsoCharged03_mc_Z_EB__16->SetMaximum(4.033264);
   pfIsoCharged03_mc_Z_EB__16->SetEntries(787055);
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
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(1,0.6706852);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(2,0.001630251);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(3,0.02214331);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(4,0.03179729);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(5,0.03208173);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(6,0.02894789);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(7,0.0249145);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(8,0.0220693);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(9,0.01888121);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(10,0.01688924);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(11,0.01472451);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(12,0.01319304);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(13,0.0109168);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(14,0.009703939);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(15,0.009276113);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(16,0.006949899);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(17,0.006635073);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(18,0.006684924);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(19,0.005689248);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(20,0.004887898);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(21,0.004873492);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(22,0.003703422);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(23,0.003336279);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(24,0.003573949);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(25,0.002571439);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(26,0.002541546);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(27,0.00253879);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(28,0.002123691);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(29,0.00189115);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(30,0.001714103);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(31,0.001328342);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(32,0.001285422);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(33,0.001423713);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(34,0.001327768);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(35,0.0009978078);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(36,0.0009804557);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(37,0.0008733972);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(38,0.0005701053);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(39,0.000612079);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(40,0.0004023592);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(41,0.0002474441);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(42,0.0003669106);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(43,0.0001983004);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(44,0.0002621876);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(45,0.0003739536);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(46,0.0003540862);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(47,0.0003501839);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(48,0.0001155027);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(49,0.000111054);
   pfIsoCharged03_mc_Signal_EB__17->SetBinContent(50,0.0002497274);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(1,0.002765069);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(2,0.0001396518);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(3,0.0004848808);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(4,0.0005884837);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(5,0.0005996775);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(6,0.0005767168);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(7,0.0005323151);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(8,0.0005148453);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(9,0.0004613079);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(10,0.0004613007);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(11,0.0004395175);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(12,0.0004282869);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(13,0.0003703037);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(14,0.0003315304);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(15,0.0003715714);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(16,0.0002613038);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(17,0.0002944694);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(18,0.0003309846);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(19,0.0002820229);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(20,0.0002699718);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(21,0.0002843729);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(22,0.0002104104);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(23,0.0002129633);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(24,0.0002544452);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(25,0.0001816977);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(26,0.0001983252);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(27,0.0002207811);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(28,0.0001917682);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(29,0.0001775698);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(30,0.0001714244);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(31,0.0001363576);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(32,0.0001353443);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(33,0.0001743551);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(34,0.0001697239);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(35,0.0001470999);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(36,0.0001304864);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(37,0.0001320383);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(38,9.626436e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(39,0.0001062501);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(40,6.080601e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(41,5.565544e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(42,8.824988e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(43,4.206799e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(44,6.719801e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(45,9.224841e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(46,0.0001008401);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(47,0.0001000727);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(48,1.575658e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(49,1.598092e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetBinError(50,7.463816e-05);
   pfIsoCharged03_mc_Signal_EB__17->SetEntries(836234);
   pfIsoCharged03_mc_Signal_EB__17->SetDirectory(0);
   pfIsoCharged03_mc_Signal_EB__17->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__17->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__17->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_EB__17->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_EB__17->Draw("HSAME");
   
   TH1F *pfIsoCharged03_mc_Z_EB__18 = new TH1F("pfIsoCharged03_mc_Z_EB__18","pfIsoCharged03_mc_Z_EB",60,0,6);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(1,0.7202257);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(2,0.00139414);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(3,0.02107508);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(4,0.02976872);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(5,0.02981985);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(6,0.02607943);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(7,0.02261386);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(8,0.01912199);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(9,0.01621241);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(10,0.01379667);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(11,0.01196014);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(12,0.01035457);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(13,0.009004682);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(14,0.00808086);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(15,0.006886632);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(16,0.006034734);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(17,0.005272483);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(18,0.004675434);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(19,0.004194861);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(20,0.003756714);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(21,0.003204126);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(22,0.002774759);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(23,0.002471988);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(24,0.002215435);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(25,0.002090716);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(26,0.001751484);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(27,0.00157646);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(28,0.001388851);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(29,0.001352653);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(30,0.0011812);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(31,0.0009862558);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(32,0.0009962318);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(33,0.0008282181);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(34,0.0007384518);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(35,0.0006878883);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(36,0.0006564209);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(37,0.0004961775);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(38,0.0004870174);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(39,0.0004738197);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(40,0.0004499718);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(41,0.0004117295);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(42,0.0003607521);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(43,0.0003456774);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(44,0.0002817595);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(45,0.0002920941);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(46,0.000311678);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(47,0.0002984687);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(48,0.0002026784);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(49,0.0001880641);
   pfIsoCharged03_mc_Z_EB__18->SetBinContent(50,0.0001700299);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(1,0.001243595);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(2,5.309106e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(3,0.0002125991);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(4,0.0002532623);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(5,0.0002529899);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(6,0.0002348857);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(7,0.0002204835);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(8,0.0002020954);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(9,0.0001862436);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(10,0.0001703521);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(11,0.0001584721);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(12,0.0001474327);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(13,0.000137312);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(14,0.0001329638);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(15,0.0001205165);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(16,0.0001136058);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(17,0.0001042733);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(18,0.0001008866);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(19,9.544393e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(20,9.036525e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(21,8.103838e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(22,7.634362e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(23,7.122144e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(24,6.969395e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(25,6.83645e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(26,5.899196e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(27,5.755755e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(28,5.408223e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(29,5.522298e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(30,4.974803e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(31,4.427662e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(32,4.681924e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(33,4.149093e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(34,3.997481e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(35,3.700036e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(36,3.605391e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(37,3.197571e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(38,3.241027e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(39,3.057021e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(40,2.983114e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(41,2.891894e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(42,2.644539e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(43,2.552873e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(44,2.294543e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(45,2.499605e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(46,2.509613e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(47,2.593466e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(48,1.927697e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(49,1.760898e-05);
   pfIsoCharged03_mc_Z_EB__18->SetBinError(50,1.722837e-05);
   pfIsoCharged03_mc_Z_EB__18->SetMinimum(4.41016e-08);
   pfIsoCharged03_mc_Z_EB__18->SetMaximum(4.033264);
   pfIsoCharged03_mc_Z_EB__18->SetEntries(787055);
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
   ratio->SetBinContent(1,1.073866);
   ratio->SetBinContent(2,0.8551686);
   ratio->SetBinContent(3,0.9517586);
   ratio->SetBinContent(4,0.9362031);
   ratio->SetBinContent(5,0.9294963);
   ratio->SetBinContent(6,0.9009095);
   ratio->SetBinContent(7,0.9076584);
   ratio->SetBinContent(8,0.866452);
   ratio->SetBinContent(9,0.8586532);
   ratio->SetBinContent(10,0.8168907);
   ratio->SetBinContent(11,0.8122609);
   ratio->SetBinContent(12,0.7848514);
   ratio->SetBinContent(13,0.8248465);
   ratio->SetBinContent(14,0.8327402);
   ratio->SetBinContent(15,0.742405);
   ratio->SetBinContent(16,0.8683197);
   ratio->SetBinContent(17,0.7946383);
   ratio->SetBinContent(18,0.6993997);
   ratio->SetBinContent(19,0.7373314);
   ratio->SetBinContent(20,0.7685745);
   ratio->SetBinContent(21,0.65746);
   ratio->SetBinContent(22,0.749242);
   ratio->SetBinContent(23,0.7409415);
   ratio->SetBinContent(24,0.6198843);
   ratio->SetBinContent(25,0.8130527);
   ratio->SetBinContent(26,0.6891413);
   ratio->SetBinContent(27,0.6209491);
   ratio->SetBinContent(28,0.6539797);
   ratio->SetBinContent(29,0.7152542);
   ratio->SetBinContent(30,0.6891065);
   ratio->SetBinContent(31,0.7424712);
   ratio->SetBinContent(32,0.7750229);
   ratio->SetBinContent(33,0.5817313);
   ratio->SetBinContent(34,0.5561602);
   ratio->SetBinContent(35,0.6893996);
   ratio->SetBinContent(36,0.669506);
   ratio->SetBinContent(37,0.5681006);
   ratio->SetBinContent(38,0.8542588);
   ratio->SetBinContent(39,0.7741153);
   ratio->SetBinContent(40,1.118334);
   ratio->SetBinContent(41,1.663929);
   ratio->SetBinContent(42,0.9832152);
   ratio->SetBinContent(43,1.7432);
   ratio->SetBinContent(44,1.074648);
   ratio->SetBinContent(45,0.7810972);
   ratio->SetBinContent(46,0.8802322);
   ratio->SetBinContent(47,0.85232);
   ratio->SetBinContent(48,1.754751);
   ratio->SetBinContent(49,1.693447);
   ratio->SetBinContent(50,0.6808621);
   ratio->SetBinError(1,0.00479989);
   ratio->SetBinError(2,0.08016865);
   ratio->SetBinError(3,0.02294622);
   ratio->SetBinError(4,0.01906967);
   ratio->SetBinError(5,0.01908016);
   ratio->SetBinError(6,0.01969734);
   ratio->SetBinError(7,0.02131651);
   ratio->SetBinError(8,0.02219066);
   ratio->SetBinError(9,0.02318198);
   ratio->SetBinError(10,0.02448591);
   ratio->SetBinError(11,0.02652686);
   ratio->SetBinError(12,0.02782169);
   ratio->SetBinError(13,0.03067646);
   ratio->SetBinError(14,0.03157781);
   ratio->SetBinError(15,0.03245252);
   ratio->SetBinError(16,0.03651094);
   ratio->SetBinError(17,0.03860973);
   ratio->SetBinError(18,0.03777444);
   ratio->SetBinError(19,0.04021658);
   ratio->SetBinError(20,0.04630151);
   ratio->SetBinError(21,0.04181215);
   ratio->SetBinError(22,0.04729704);
   ratio->SetBinError(23,0.05189075);
   ratio->SetBinError(24,0.04824864);
   ratio->SetBinError(25,0.06330364);
   ratio->SetBinError(26,0.0585714);
   ratio->SetBinError(27,0.05856577);
   ratio->SetBinError(28,0.064311);
   ratio->SetBinError(29,0.07323252);
   ratio->SetBinError(30,0.0747782);
   ratio->SetBinError(31,0.0831865);
   ratio->SetBinError(32,0.08936321);
   ratio->SetBinError(33,0.07697203);
   ratio->SetBinError(34,0.07720418);
   ratio->SetBinError(35,0.1081869);
   ratio->SetBinError(36,0.0963927);
   ratio->SetBinError(37,0.09336188);
   ratio->SetBinError(38,0.1550433);
   ratio->SetBinError(39,0.1433593);
   ratio->SetBinError(40,0.1845538);
   ratio->SetBinError(41,0.3920767);
   ratio->SetBinError(42,0.2472241);
   ratio->SetBinError(43,0.3915747);
   ratio->SetBinError(44,0.288999);
   ratio->SetBinError(45,0.2039489);
   ratio->SetBinError(46,0.2605078);
   ratio->SetBinError(47,0.2545797);
   ratio->SetBinError(48,0.2918159);
   ratio->SetBinError(49,0.2907356);
   ratio->SetBinError(50,0.2148713);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1816.239);
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
   ratio->SetBinContent(1,1.073866);
   ratio->SetBinContent(2,0.8551686);
   ratio->SetBinContent(3,0.9517586);
   ratio->SetBinContent(4,0.9362031);
   ratio->SetBinContent(5,0.9294963);
   ratio->SetBinContent(6,0.9009095);
   ratio->SetBinContent(7,0.9076584);
   ratio->SetBinContent(8,0.866452);
   ratio->SetBinContent(9,0.8586532);
   ratio->SetBinContent(10,0.8168907);
   ratio->SetBinContent(11,0.8122609);
   ratio->SetBinContent(12,0.7848514);
   ratio->SetBinContent(13,0.8248465);
   ratio->SetBinContent(14,0.8327402);
   ratio->SetBinContent(15,0.742405);
   ratio->SetBinContent(16,0.8683197);
   ratio->SetBinContent(17,0.7946383);
   ratio->SetBinContent(18,0.6993997);
   ratio->SetBinContent(19,0.7373314);
   ratio->SetBinContent(20,0.7685745);
   ratio->SetBinContent(21,0.65746);
   ratio->SetBinContent(22,0.749242);
   ratio->SetBinContent(23,0.7409415);
   ratio->SetBinContent(24,0.6198843);
   ratio->SetBinContent(25,0.8130527);
   ratio->SetBinContent(26,0.6891413);
   ratio->SetBinContent(27,0.6209491);
   ratio->SetBinContent(28,0.6539797);
   ratio->SetBinContent(29,0.7152542);
   ratio->SetBinContent(30,0.6891065);
   ratio->SetBinContent(31,0.7424712);
   ratio->SetBinContent(32,0.7750229);
   ratio->SetBinContent(33,0.5817313);
   ratio->SetBinContent(34,0.5561602);
   ratio->SetBinContent(35,0.6893996);
   ratio->SetBinContent(36,0.669506);
   ratio->SetBinContent(37,0.5681006);
   ratio->SetBinContent(38,0.8542588);
   ratio->SetBinContent(39,0.7741153);
   ratio->SetBinContent(40,1.118334);
   ratio->SetBinContent(41,1.663929);
   ratio->SetBinContent(42,0.9832152);
   ratio->SetBinContent(43,1.7432);
   ratio->SetBinContent(44,1.074648);
   ratio->SetBinContent(45,0.7810972);
   ratio->SetBinContent(46,0.8802322);
   ratio->SetBinContent(47,0.85232);
   ratio->SetBinContent(48,1.754751);
   ratio->SetBinContent(49,1.693447);
   ratio->SetBinContent(50,0.6808621);
   ratio->SetBinError(1,0.00479989);
   ratio->SetBinError(2,0.08016865);
   ratio->SetBinError(3,0.02294622);
   ratio->SetBinError(4,0.01906967);
   ratio->SetBinError(5,0.01908016);
   ratio->SetBinError(6,0.01969734);
   ratio->SetBinError(7,0.02131651);
   ratio->SetBinError(8,0.02219066);
   ratio->SetBinError(9,0.02318198);
   ratio->SetBinError(10,0.02448591);
   ratio->SetBinError(11,0.02652686);
   ratio->SetBinError(12,0.02782169);
   ratio->SetBinError(13,0.03067646);
   ratio->SetBinError(14,0.03157781);
   ratio->SetBinError(15,0.03245252);
   ratio->SetBinError(16,0.03651094);
   ratio->SetBinError(17,0.03860973);
   ratio->SetBinError(18,0.03777444);
   ratio->SetBinError(19,0.04021658);
   ratio->SetBinError(20,0.04630151);
   ratio->SetBinError(21,0.04181215);
   ratio->SetBinError(22,0.04729704);
   ratio->SetBinError(23,0.05189075);
   ratio->SetBinError(24,0.04824864);
   ratio->SetBinError(25,0.06330364);
   ratio->SetBinError(26,0.0585714);
   ratio->SetBinError(27,0.05856577);
   ratio->SetBinError(28,0.064311);
   ratio->SetBinError(29,0.07323252);
   ratio->SetBinError(30,0.0747782);
   ratio->SetBinError(31,0.0831865);
   ratio->SetBinError(32,0.08936321);
   ratio->SetBinError(33,0.07697203);
   ratio->SetBinError(34,0.07720418);
   ratio->SetBinError(35,0.1081869);
   ratio->SetBinError(36,0.0963927);
   ratio->SetBinError(37,0.09336188);
   ratio->SetBinError(38,0.1550433);
   ratio->SetBinError(39,0.1433593);
   ratio->SetBinError(40,0.1845538);
   ratio->SetBinError(41,0.3920767);
   ratio->SetBinError(42,0.2472241);
   ratio->SetBinError(43,0.3915747);
   ratio->SetBinError(44,0.288999);
   ratio->SetBinError(45,0.2039489);
   ratio->SetBinError(46,0.2605078);
   ratio->SetBinError(47,0.2545797);
   ratio->SetBinError(48,0.2918159);
   ratio->SetBinError(49,0.2907356);
   ratio->SetBinError(50,0.2148713);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1816.239);
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
