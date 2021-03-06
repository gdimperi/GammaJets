{
//=========Macro generated from canvas: pid_pfIsoNeutrals03ForCiC/pid_pfIsoNeutrals03ForCiC
//=========  (Sat Sep 27 22:35:08 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoNeutrals03ForCiC = new TCanvas("pid_pfIsoNeutrals03ForCiC", "pid_pfIsoNeutrals03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoNeutrals03ForCiC->SetHighLightColor(2);
   pid_pfIsoNeutrals03ForCiC->Range(-0.9749999,-0.1063405,6.525,0.9570646);
   pid_pfIsoNeutrals03ForCiC->SetFillColor(0);
   pid_pfIsoNeutrals03ForCiC->SetBorderMode(0);
   pid_pfIsoNeutrals03ForCiC->SetBorderSize(2);
   pid_pfIsoNeutrals03ForCiC->SetTickx(1);
   pid_pfIsoNeutrals03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoNeutrals03ForCiC->SetRightMargin(0.07);
   pid_pfIsoNeutrals03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoNeutrals03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoNeutrals03_mc_Z_EB__52 = new TH1F("pfIsoNeutrals03_mc_Z_EB__52","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(1,0.8192574);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(4,0.0006332756);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(5,0.01120543);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(6,0.01760465);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(7,0.01653838);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(8,0.01703855);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(9,0.01783753);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(10,0.01394212);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(11,0.01290209);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(12,0.009195485);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(13,0.007357545);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(14,0.006203675);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(15,0.005239116);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(16,0.004565582);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(17,0.004130918);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(18,0.003382007);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(19,0.002949911);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(20,0.002957019);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(21,0.003146255);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(22,0.002668897);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(23,0.002284789);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(24,0.001836464);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(25,0.001585832);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(26,0.001397258);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(27,0.001251129);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(28,0.001161065);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(29,0.0009153998);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(30,0.0008608077);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(31,0.0008713862);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(32,0.0008496982);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(33,0.0007431131);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(34,0.0006705941);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(35,0.0005681643);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(36,0.0005743016);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(37,0.0004933341);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(38,0.0005160517);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(39,0.0004025412);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(40,0.0004594353);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(41,0.0003773668);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(42,0.0003199481);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(43,0.0002923381);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(44,0.0002395386);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(45,0.0002567059);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(46,0.0002247761);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(47,0.000207133);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(48,0.0002177011);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(49,0.0002395696);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(50,0.0001477027);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(51,0.0001889227);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(52,0.0001626162);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(53,0.0001477466);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(54,0.00012345);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(55,0.0001274465);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(56,0.0001483876);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(57,0.0001008944);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(58,8.685354e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(59,9.369357e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(60,0.0001000178);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinContent(61,0.001475942);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(1,0.001083666);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(4,3.561629e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(5,0.000148066);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(6,0.0001811027);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(7,0.0001686257);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(8,0.0001600386);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(9,0.0001530547);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(10,0.0001431296);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(11,0.0001426589);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(12,0.0001192279);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(13,0.000107087);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(14,9.847002e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(15,9.007037e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(16,8.429842e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(17,7.981581e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(18,7.223551e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(19,6.726639e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(20,6.641646e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(21,6.67556e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(22,6.107744e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(23,5.798341e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(24,5.167731e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(25,4.811232e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(26,4.491779e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(27,4.35194e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(28,4.184852e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(29,3.686294e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(30,3.608098e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(31,3.63741e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(32,3.618875e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(33,3.325852e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(34,3.200484e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(35,2.97124e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(36,2.921763e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(37,2.746522e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(38,2.8249e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(39,2.483666e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(40,2.656806e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(41,2.341723e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(42,2.213937e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(43,2.128767e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(44,1.884149e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(45,2.009348e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(46,1.835527e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(47,1.754409e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(48,1.84427e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(49,1.964516e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(50,1.533727e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(51,1.723931e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(52,1.586835e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(53,1.508048e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(54,1.366988e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(55,1.401051e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(56,1.468893e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(57,1.164299e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(58,1.138982e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(59,1.183594e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(60,1.225039e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetBinError(61,4.548322e-05);
   pfIsoNeutrals03_mc_Z_EB__52->SetMinimum(1.135702e-07);
   pfIsoNeutrals03_mc_Z_EB__52->SetMaximum(4.587841);
   pfIsoNeutrals03_mc_Z_EB__52->SetEntries(787500);
   pfIsoNeutrals03_mc_Z_EB__52->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EB__52->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__52->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__52->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EB__52->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EB__52->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EB__52->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EB__52->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EB__52->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EB__52->Draw("PE");
   
   TH1F *pfIsoNeutrals03_mc_Signal_EB__53 = new TH1F("pfIsoNeutrals03_mc_Signal_EB__53","pfIsoNeutrals03_mc_Signal_EB",60,0,6);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(1,0.8032814);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(4,0.0005720307);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(5,0.01058263);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(6,0.01656146);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(7,0.01723452);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(8,0.01991231);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(9,0.02258354);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(10,0.01551193);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(11,0.01366631);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(12,0.009502369);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(13,0.008122584);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(14,0.006491405);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(15,0.005665541);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(16,0.005170566);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(17,0.004575728);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(18,0.003665695);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(19,0.003122457);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(20,0.003026828);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(21,0.003597066);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(22,0.003261197);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(23,0.002544018);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(24,0.002085218);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(25,0.001816563);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(26,0.001836357);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(27,0.001381283);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(28,0.001236558);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(29,0.001105311);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(30,0.001183733);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(31,0.0009292654);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(32,0.0008613411);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(33,0.0008434448);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(34,0.0008168424);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(35,0.0006084887);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(36,0.0006419205);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(37,0.0004310591);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(38,0.0005001382);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(39,0.0004419909);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(40,0.0003750268);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(41,0.000363551);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(42,0.0002987153);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(43,0.0002687223);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(44,0.0003256267);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(45,0.0003515743);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(46,0.0002520846);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(47,0.000338903);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(48,0.000354649);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(49,0.0001555843);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(50,0.0001651755);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(51,0.0002313551);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(52,0.0001285296);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(53,0.0001442305);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(54,0.0002165017);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(55,9.006367e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(56,0.0001874182);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(57,0.0001327939);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(58,6.68758e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(59,0.0001081849);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(60,7.333796e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinContent(61,0.001985399);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(1,0.003088216);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(4,7.845999e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(5,0.0003443118);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(6,0.0004412992);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(7,0.0004671769);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(8,0.0004889256);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(9,0.0004993457);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(10,0.0004063953);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(11,0.0004072464);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(12,0.0003188052);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(13,0.0003208071);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(14,0.0002886447);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(15,0.0002551392);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(16,0.0002563316);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(17,0.0002235663);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(18,0.0001930202);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(19,0.000179169);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(20,0.0001709941);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(21,0.00021206);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(22,0.0002044128);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(23,0.0001684055);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(24,0.0001505606);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(25,0.0001262801);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(26,0.0001758207);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(27,0.0001125768);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(28,0.0001021315);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(29,0.0001099535);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(30,0.0001170149);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(31,9.020604e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(32,8.062142e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(33,9.952632e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(34,9.831307e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(35,4.975279e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(36,9.154192e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(37,3.662625e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(38,6.236391e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(39,4.796718e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(40,4.398094e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(41,4.864151e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(42,2.412434e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(43,4.061142e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(44,6.11585e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(45,7.618926e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(46,4.512367e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(47,6.868502e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(48,7.45179e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(49,1.689542e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(50,1.773205e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(51,7.492613e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(52,1.667307e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(53,1.693651e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(54,6.52829e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(55,1.289916e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(56,4.956187e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(57,4.699658e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(58,1.096684e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(59,2.370298e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(60,1.236964e-05);
   pfIsoNeutrals03_mc_Signal_EB__53->SetBinError(61,0.0001770445);
   pfIsoNeutrals03_mc_Signal_EB__53->SetEntries(836234);
   pfIsoNeutrals03_mc_Signal_EB__53->SetDirectory(0);
   pfIsoNeutrals03_mc_Signal_EB__53->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EB__53->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EB__53->SetLineColor(ci);
   pfIsoNeutrals03_mc_Signal_EB__53->SetLineWidth(2);
   pfIsoNeutrals03_mc_Signal_EB__53->Draw("HSAME");
   
   TH1F *pfIsoNeutrals03_mc_Z_EB__54 = new TH1F("pfIsoNeutrals03_mc_Z_EB__54","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(1,0.8192574);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(4,0.0006332756);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(5,0.01120543);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(6,0.01760465);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(7,0.01653838);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(8,0.01703855);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(9,0.01783753);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(10,0.01394212);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(11,0.01290209);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(12,0.009195485);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(13,0.007357545);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(14,0.006203675);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(15,0.005239116);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(16,0.004565582);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(17,0.004130918);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(18,0.003382007);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(19,0.002949911);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(20,0.002957019);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(21,0.003146255);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(22,0.002668897);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(23,0.002284789);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(24,0.001836464);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(25,0.001585832);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(26,0.001397258);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(27,0.001251129);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(28,0.001161065);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(29,0.0009153998);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(30,0.0008608077);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(31,0.0008713862);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(32,0.0008496982);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(33,0.0007431131);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(34,0.0006705941);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(35,0.0005681643);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(36,0.0005743016);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(37,0.0004933341);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(38,0.0005160517);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(39,0.0004025412);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(40,0.0004594353);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(41,0.0003773668);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(42,0.0003199481);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(43,0.0002923381);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(44,0.0002395386);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(45,0.0002567059);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(46,0.0002247761);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(47,0.000207133);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(48,0.0002177011);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(49,0.0002395696);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(50,0.0001477027);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(51,0.0001889227);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(52,0.0001626162);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(53,0.0001477466);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(54,0.00012345);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(55,0.0001274465);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(56,0.0001483876);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(57,0.0001008944);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(58,8.685354e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(59,9.369357e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(60,0.0001000178);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinContent(61,0.001475942);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(1,0.001083666);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(4,3.561629e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(5,0.000148066);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(6,0.0001811027);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(7,0.0001686257);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(8,0.0001600386);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(9,0.0001530547);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(10,0.0001431296);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(11,0.0001426589);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(12,0.0001192279);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(13,0.000107087);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(14,9.847002e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(15,9.007037e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(16,8.429842e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(17,7.981581e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(18,7.223551e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(19,6.726639e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(20,6.641646e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(21,6.67556e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(22,6.107744e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(23,5.798341e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(24,5.167731e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(25,4.811232e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(26,4.491779e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(27,4.35194e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(28,4.184852e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(29,3.686294e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(30,3.608098e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(31,3.63741e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(32,3.618875e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(33,3.325852e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(34,3.200484e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(35,2.97124e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(36,2.921763e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(37,2.746522e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(38,2.8249e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(39,2.483666e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(40,2.656806e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(41,2.341723e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(42,2.213937e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(43,2.128767e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(44,1.884149e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(45,2.009348e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(46,1.835527e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(47,1.754409e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(48,1.84427e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(49,1.964516e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(50,1.533727e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(51,1.723931e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(52,1.586835e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(53,1.508048e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(54,1.366988e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(55,1.401051e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(56,1.468893e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(57,1.164299e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(58,1.138982e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(59,1.183594e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(60,1.225039e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetBinError(61,4.548322e-05);
   pfIsoNeutrals03_mc_Z_EB__54->SetMinimum(1.135702e-07);
   pfIsoNeutrals03_mc_Z_EB__54->SetMaximum(4.587841);
   pfIsoNeutrals03_mc_Z_EB__54->SetEntries(787500);
   pfIsoNeutrals03_mc_Z_EB__54->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EB__54->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__54->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__54->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EB__54->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EB__54->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EB__54->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EB__54->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EB__54->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EB__54->Draw("PESAME");
   
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
   entry=leg->AddEntry("pfIsoNeutrals03_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoNeutrals03_mc_Signal_EB","signal #gamma + jet","F");
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
   pid_pfIsoNeutrals03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.019888);
   ratio->SetBinContent(4,1.107066);
   ratio->SetBinContent(5,1.058852);
   ratio->SetBinContent(6,1.062989);
   ratio->SetBinContent(7,0.9596081);
   ratio->SetBinContent(8,0.855679);
   ratio->SetBinContent(9,0.7898465);
   ratio->SetBinContent(10,0.8987998);
   ratio->SetBinContent(11,0.9440802);
   ratio->SetBinContent(12,0.9677045);
   ratio->SetBinContent(13,0.9058134);
   ratio->SetBinContent(14,0.9556752);
   ratio->SetBinContent(15,0.9247336);
   ratio->SetBinContent(16,0.8829947);
   ratio->SetBinContent(17,0.9027892);
   ratio->SetBinContent(18,0.92261);
   ratio->SetBinContent(19,0.9447404);
   ratio->SetBinContent(20,0.9769365);
   ratio->SetBinContent(21,0.8746727);
   ratio->SetBinContent(22,0.8183796);
   ratio->SetBinContent(23,0.8981025);
   ratio->SetBinContent(24,0.8807063);
   ratio->SetBinContent(25,0.872985);
   ratio->SetBinContent(26,0.7608859);
   ratio->SetBinContent(27,0.9057735);
   ratio->SetBinContent(28,0.9389492);
   ratio->SetBinContent(29,0.8281829);
   ratio->SetBinContent(30,0.7271973);
   ratio->SetBinContent(31,0.9377151);
   ratio->SetBinContent(32,0.9864829);
   ratio->SetBinContent(33,0.8810452);
   ratio->SetBinContent(34,0.820959);
   ratio->SetBinContent(35,0.9337302);
   ratio->SetBinContent(36,0.8946615);
   ratio->SetBinContent(37,1.14447);
   ratio->SetBinContent(38,1.031818);
   ratio->SetBinContent(39,0.9107454);
   ratio->SetBinContent(40,1.225073);
   ratio->SetBinContent(41,1.038002);
   ratio->SetBinContent(42,1.07108);
   ratio->SetBinContent(43,1.087882);
   ratio->SetBinContent(44,0.7356233);
   ratio->SetBinContent(45,0.7301612);
   ratio->SetBinContent(46,0.8916694);
   ratio->SetBinContent(47,0.6111867);
   ratio->SetBinContent(48,0.6138495);
   ratio->SetBinContent(49,1.539806);
   ratio->SetBinContent(50,0.8942167);
   ratio->SetBinContent(51,0.816592);
   ratio->SetBinContent(52,1.265204);
   ratio->SetBinContent(53,1.024378);
   ratio->SetBinContent(54,0.5702034);
   ratio->SetBinContent(55,1.415071);
   ratio->SetBinContent(56,0.7917457);
   ratio->SetBinContent(57,0.7597821);
   ratio->SetBinContent(58,1.298729);
   ratio->SetBinContent(59,0.8660507);
   ratio->SetBinContent(60,1.363793);
   ratio->SetBinContent(61,0.7433981);
   ratio->SetBinError(1,0.00414655);
   ratio->SetBinError(4,0.1641151);
   ratio->SetBinError(5,0.03718313);
   ratio->SetBinError(6,0.03036215);
   ratio->SetBinError(7,0.0277914);
   ratio->SetBinError(8,0.02249508);
   ratio->SetBinError(9,0.01873324);
   ratio->SetBinError(10,0.02529083);
   ratio->SetBinError(11,0.03000715);
   ratio->SetBinError(12,0.03480674);
   ratio->SetBinError(13,0.03812764);
   ratio->SetBinError(14,0.04512106);
   ratio->SetBinError(15,0.0445754);
   ratio->SetBinError(16,0.04671211);
   ratio->SetBinError(17,0.04743332);
   ratio->SetBinError(18,0.0524253);
   ratio->SetBinError(19,0.0583336);
   ratio->SetBinError(20,0.05939193);
   ratio->SetBinError(21,0.05480303);
   ratio->SetBinError(22,0.0546083);
   ratio->SetBinError(23,0.06367059);
   ratio->SetBinError(24,0.06824888);
   ratio->SetBinError(25,0.06621415);
   ratio->SetBinError(26,0.07684726);
   ratio->SetBinError(27,0.08026424);
   ratio->SetBinError(28,0.08461378);
   ratio->SetBinError(29,0.08887991);
   ratio->SetBinError(30,0.07808046);
   ratio->SetBinError(31,0.09908555);
   ratio->SetBinError(32,0.1014441);
   ratio->SetBinError(33,0.1111899);
   ratio->SetBinError(34,0.1062934);
   ratio->SetBinError(35,0.09062596);
   ratio->SetBinError(36,0.1354602);
   ratio->SetBinError(37,0.1162582);
   ratio->SetBinError(38,0.1405129);
   ratio->SetBinError(39,0.1136958);
   ratio->SetBinError(40,0.1601862);
   ratio->SetBinError(41,0.1530904);
   ratio->SetBinError(42,0.1139099);
   ratio->SetBinError(43,0.182499);
   ratio->SetBinError(44,0.1497902);
   ratio->SetBinError(45,0.1682378);
   ratio->SetBinError(46,0.175435);
   ratio->SetBinError(47,0.1342506);
   ratio->SetBinError(48,0.1390691);
   ratio->SetBinError(49,0.2095315);
   ratio->SetBinError(50,0.1335563);
   ratio->SetBinError(51,0.2747568);
   ratio->SetBinError(52,0.205376);
   ratio->SetBinError(53,0.1593798);
   ratio->SetBinError(54,0.1831633);
   ratio->SetBinError(55,0.2554894);
   ratio->SetBinError(56,0.2235619);
   ratio->SetBinError(57,0.282825);
   ratio->SetBinError(58,0.2727002);
   ratio->SetBinError(59,0.2190299);
   ratio->SetBinError(60,0.2842786);
   ratio->SetBinError(61,0.070138);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2791.534);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.019888);
   ratio->SetBinContent(4,1.107066);
   ratio->SetBinContent(5,1.058852);
   ratio->SetBinContent(6,1.062989);
   ratio->SetBinContent(7,0.9596081);
   ratio->SetBinContent(8,0.855679);
   ratio->SetBinContent(9,0.7898465);
   ratio->SetBinContent(10,0.8987998);
   ratio->SetBinContent(11,0.9440802);
   ratio->SetBinContent(12,0.9677045);
   ratio->SetBinContent(13,0.9058134);
   ratio->SetBinContent(14,0.9556752);
   ratio->SetBinContent(15,0.9247336);
   ratio->SetBinContent(16,0.8829947);
   ratio->SetBinContent(17,0.9027892);
   ratio->SetBinContent(18,0.92261);
   ratio->SetBinContent(19,0.9447404);
   ratio->SetBinContent(20,0.9769365);
   ratio->SetBinContent(21,0.8746727);
   ratio->SetBinContent(22,0.8183796);
   ratio->SetBinContent(23,0.8981025);
   ratio->SetBinContent(24,0.8807063);
   ratio->SetBinContent(25,0.872985);
   ratio->SetBinContent(26,0.7608859);
   ratio->SetBinContent(27,0.9057735);
   ratio->SetBinContent(28,0.9389492);
   ratio->SetBinContent(29,0.8281829);
   ratio->SetBinContent(30,0.7271973);
   ratio->SetBinContent(31,0.9377151);
   ratio->SetBinContent(32,0.9864829);
   ratio->SetBinContent(33,0.8810452);
   ratio->SetBinContent(34,0.820959);
   ratio->SetBinContent(35,0.9337302);
   ratio->SetBinContent(36,0.8946615);
   ratio->SetBinContent(37,1.14447);
   ratio->SetBinContent(38,1.031818);
   ratio->SetBinContent(39,0.9107454);
   ratio->SetBinContent(40,1.225073);
   ratio->SetBinContent(41,1.038002);
   ratio->SetBinContent(42,1.07108);
   ratio->SetBinContent(43,1.087882);
   ratio->SetBinContent(44,0.7356233);
   ratio->SetBinContent(45,0.7301612);
   ratio->SetBinContent(46,0.8916694);
   ratio->SetBinContent(47,0.6111867);
   ratio->SetBinContent(48,0.6138495);
   ratio->SetBinContent(49,1.539806);
   ratio->SetBinContent(50,0.8942167);
   ratio->SetBinContent(51,0.816592);
   ratio->SetBinContent(52,1.265204);
   ratio->SetBinContent(53,1.024378);
   ratio->SetBinContent(54,0.5702034);
   ratio->SetBinContent(55,1.415071);
   ratio->SetBinContent(56,0.7917457);
   ratio->SetBinContent(57,0.7597821);
   ratio->SetBinContent(58,1.298729);
   ratio->SetBinContent(59,0.8660507);
   ratio->SetBinContent(60,1.363793);
   ratio->SetBinContent(61,0.7433981);
   ratio->SetBinError(1,0.00414655);
   ratio->SetBinError(4,0.1641151);
   ratio->SetBinError(5,0.03718313);
   ratio->SetBinError(6,0.03036215);
   ratio->SetBinError(7,0.0277914);
   ratio->SetBinError(8,0.02249508);
   ratio->SetBinError(9,0.01873324);
   ratio->SetBinError(10,0.02529083);
   ratio->SetBinError(11,0.03000715);
   ratio->SetBinError(12,0.03480674);
   ratio->SetBinError(13,0.03812764);
   ratio->SetBinError(14,0.04512106);
   ratio->SetBinError(15,0.0445754);
   ratio->SetBinError(16,0.04671211);
   ratio->SetBinError(17,0.04743332);
   ratio->SetBinError(18,0.0524253);
   ratio->SetBinError(19,0.0583336);
   ratio->SetBinError(20,0.05939193);
   ratio->SetBinError(21,0.05480303);
   ratio->SetBinError(22,0.0546083);
   ratio->SetBinError(23,0.06367059);
   ratio->SetBinError(24,0.06824888);
   ratio->SetBinError(25,0.06621415);
   ratio->SetBinError(26,0.07684726);
   ratio->SetBinError(27,0.08026424);
   ratio->SetBinError(28,0.08461378);
   ratio->SetBinError(29,0.08887991);
   ratio->SetBinError(30,0.07808046);
   ratio->SetBinError(31,0.09908555);
   ratio->SetBinError(32,0.1014441);
   ratio->SetBinError(33,0.1111899);
   ratio->SetBinError(34,0.1062934);
   ratio->SetBinError(35,0.09062596);
   ratio->SetBinError(36,0.1354602);
   ratio->SetBinError(37,0.1162582);
   ratio->SetBinError(38,0.1405129);
   ratio->SetBinError(39,0.1136958);
   ratio->SetBinError(40,0.1601862);
   ratio->SetBinError(41,0.1530904);
   ratio->SetBinError(42,0.1139099);
   ratio->SetBinError(43,0.182499);
   ratio->SetBinError(44,0.1497902);
   ratio->SetBinError(45,0.1682378);
   ratio->SetBinError(46,0.175435);
   ratio->SetBinError(47,0.1342506);
   ratio->SetBinError(48,0.1390691);
   ratio->SetBinError(49,0.2095315);
   ratio->SetBinError(50,0.1335563);
   ratio->SetBinError(51,0.2747568);
   ratio->SetBinError(52,0.205376);
   ratio->SetBinError(53,0.1593798);
   ratio->SetBinError(54,0.1831633);
   ratio->SetBinError(55,0.2554894);
   ratio->SetBinError(56,0.2235619);
   ratio->SetBinError(57,0.282825);
   ratio->SetBinError(58,0.2727002);
   ratio->SetBinError(59,0.2190299);
   ratio->SetBinError(60,0.2842786);
   ratio->SetBinError(61,0.070138);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2791.534);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoNeutrals03ForCiC->cd();
   pid_pfIsoNeutrals03ForCiC->Modified();
   pid_pfIsoNeutrals03ForCiC->cd();
   pid_pfIsoNeutrals03ForCiC->SetSelected(pid_pfIsoNeutrals03ForCiC);
}
