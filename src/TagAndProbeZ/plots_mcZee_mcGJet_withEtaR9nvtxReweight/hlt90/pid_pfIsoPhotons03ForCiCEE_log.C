{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Sun Sep 28 15:21:35 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.05956651,6.525,0.5360986);
   pid_pfIsoPhotons03ForCiC->SetFillColor(0);
   pid_pfIsoPhotons03ForCiC->SetBorderMode(0);
   pid_pfIsoPhotons03ForCiC->SetBorderSize(2);
   pid_pfIsoPhotons03ForCiC->SetTickx(1);
   pid_pfIsoPhotons03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoPhotons03ForCiC->SetRightMargin(0.07);
   pid_pfIsoPhotons03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoPhotons03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoPhotons03_mc_Z_EE__40 = new TH1F("pfIsoPhotons03_mc_Z_EE__40","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(1,0.4366947);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(2,0.04589922);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(3,0.06089236);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(4,0.04027452);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(5,0.04022158);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(6,0.03086817);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(7,0.03145035);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(8,0.02578398);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(9,0.0226855);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(10,0.02492594);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(11,0.01637199);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(12,0.01704405);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(13,0.01973848);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(14,0.02331635);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(15,0.008727544);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(16,0.01295487);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(17,0.007175364);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(18,0.01153595);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(19,0.004347834);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(20,0.005729787);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(21,0.01354774);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(22,0.009796415);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(23,0.005496081);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(24,0.004857014);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(25,0.006253981);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(26,0.007314289);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(27,0.007824252);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(28,0.003160918);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(29,0.001767741);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(30,0.002572281);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(31,0.0006140282);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(32,0.004411546);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(33,0.005362192);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(34,0.003037294);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(35,0.0005609299);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(36,0.002564166);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(37,0.0004386138);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(38,0.002760642);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(39,0.003755787);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(40,0.003950167);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(41,0.002340895);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(42,0.0007136716);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(43,0.001061212);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(44,0.001497428);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(45,0.0006527453);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(46,0.003580154);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(47,0.002490354);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(48,0.002157117);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(49,0.0003256256);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(50,0.0009313988);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(51,0.0001094681);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(52,0.001418092);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(53,0.0007123004);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(54,0.0008364054);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(55,0.001523403);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(56,0.0005249528);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(57,0.001084276);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(58,0.0009115125);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(59,0.0004444177);
   pfIsoPhotons03_mc_Z_EE__40->SetBinContent(61,0.01129417);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(1,0.02281842);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(2,0.007221984);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(3,0.009276928);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(4,0.007211525);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(5,0.008004937);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(6,0.006241056);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(7,0.006470292);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(8,0.004753458);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(9,0.004970147);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(10,0.004926714);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(11,0.003568829);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(12,0.004138282);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(13,0.005018403);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(14,0.005458802);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(15,0.002439499);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(16,0.004112495);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(17,0.002528061);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(18,0.003885484);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(19,0.001377378);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(20,0.002331387);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(21,0.003621752);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(22,0.003560868);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(23,0.002207329);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(24,0.001899985);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(25,0.003431158);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(26,0.002934181);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(27,0.003288169);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(28,0.001193683);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(29,0.0009039225);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(30,0.001739085);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(31,0.0003238165);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(32,0.002086897);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(33,0.003063474);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(34,0.001334427);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(35,0.0003374418);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(36,0.001451028);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(37,0.0003281739);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(38,0.001357245);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(39,0.002177571);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(40,0.002221753);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(41,0.001109664);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(42,0.000376558);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(43,0.0008168344);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(44,0.001197073);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(45,0.000364612);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(46,0.002230836);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(47,0.001371263);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(48,0.001965824);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(49,0.0002421054);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(50,0.0006783737);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(51,0.0001094681);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(52,0.000801503);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(53,0.0003540757);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(54,0.000597322);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(55,0.001091852);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(56,0.0003815144);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(57,0.0005418687);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(58,0.0006274736);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(59,0.0004444177);
   pfIsoPhotons03_mc_Z_EE__40->SetBinError(61,0.002241122);
   pfIsoPhotons03_mc_Z_EE__40->SetMinimum(9.078342e-06);
   pfIsoPhotons03_mc_Z_EE__40->SetMaximum(2.44549);
   pfIsoPhotons03_mc_Z_EE__40->SetEntries(2043);
   pfIsoPhotons03_mc_Z_EE__40->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__40->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__40->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__40->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__40->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__40->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__40->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__40->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__40->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__40->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EE__41 = new TH1F("pfIsoPhotons03_mc_Signal_EE__41","pfIsoPhotons03_mc_Signal_EE",60,0,6);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(1,0.4155351);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(2,0.03612265);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(3,0.0549332);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(4,0.04076577);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(5,0.03506488);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(6,0.03081101);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(7,0.02742119);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(8,0.026293);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(9,0.02429067);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(10,0.02305107);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(11,0.02238636);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(12,0.02014598);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(13,0.01794602);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(14,0.01603182);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(15,0.01514916);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(16,0.01369493);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(17,0.01399773);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(18,0.01160796);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(19,0.01024662);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(20,0.008999088);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(21,0.008726051);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(22,0.008053254);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(23,0.007481423);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(24,0.007161793);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(25,0.005800539);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(26,0.006292268);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(27,0.005729785);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(28,0.005768109);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(29,0.005375882);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(30,0.005110626);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(31,0.004226286);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(32,0.004180969);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(33,0.003994918);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(34,0.003787005);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(35,0.003664783);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(36,0.003467781);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(37,0.003391948);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(38,0.003231769);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(39,0.002851542);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(40,0.002441274);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(41,0.00294133);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(42,0.002414105);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(43,0.002243086);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(44,0.004359671);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(45,0.001781039);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(46,0.001974118);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(47,0.0017653);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(48,0.001583038);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(49,0.001778157);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(50,0.001658011);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(51,0.001737558);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(52,0.001343482);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(53,0.001246792);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(54,0.001359935);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(55,0.001167819);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(56,0.001011358);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(57,0.000998556);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(58,0.001124485);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(59,0.001166761);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(60,0.001113246);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinContent(61,0.01872919);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(1,0.003091448);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(2,0.0006935673);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(3,0.00191069);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(4,0.0007186521);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(5,0.0007198414);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(6,0.0006629118);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(7,0.0005914968);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(8,0.0006255219);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(9,0.000599216);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(10,0.0005822127);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(11,0.0006014132);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(12,0.0005135994);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(13,0.0004832088);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(14,0.0004399405);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(15,0.0004446283);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(16,0.0004458312);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(17,0.001662431);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(18,0.0004181626);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(19,0.0003319314);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(20,0.0003382943);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(21,0.000337039);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(22,0.0002673307);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(23,0.0003101007);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(24,0.0003294091);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(25,0.0001964828);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(26,0.0003274911);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(27,0.0002969258);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(28,0.0003021352);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(29,0.0003078121);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(30,0.00032723);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(31,0.0002192625);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(32,0.0002096099);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(33,0.0002458734);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(34,0.0002282096);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(35,0.0002294134);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(36,0.0002053799);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(37,0.0002341088);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(38,0.0002465454);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(39,0.0001914905);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(40,0.0001464746);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(41,0.0002657003);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(42,0.0001836066);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(43,0.0002178476);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(44,0.002076925);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(45,0.0001204898);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(46,0.0001715558);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(47,0.0001371128);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(48,0.0001196594);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(49,0.000153638);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(50,0.0001594555);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(51,0.0001518301);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(52,0.0001409014);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(53,0.0001076392);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(54,0.0001598574);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(55,0.0001275763);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(56,9.421525e-05);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(57,0.0001128684);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(58,0.0001386476);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(59,0.0001449649);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(60,0.0001295581);
   pfIsoPhotons03_mc_Signal_EE__41->SetBinError(61,0.0005166125);
   pfIsoPhotons03_mc_Signal_EE__41->SetEntries(564048);
   pfIsoPhotons03_mc_Signal_EE__41->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EE__41->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__41->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__41->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EE__41->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EE__41->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_EE__42 = new TH1F("pfIsoPhotons03_mc_Z_EE__42","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(1,0.4366947);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(2,0.04589922);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(3,0.06089236);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(4,0.04027452);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(5,0.04022158);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(6,0.03086817);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(7,0.03145035);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(8,0.02578398);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(9,0.0226855);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(10,0.02492594);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(11,0.01637199);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(12,0.01704405);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(13,0.01973848);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(14,0.02331635);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(15,0.008727544);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(16,0.01295487);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(17,0.007175364);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(18,0.01153595);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(19,0.004347834);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(20,0.005729787);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(21,0.01354774);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(22,0.009796415);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(23,0.005496081);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(24,0.004857014);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(25,0.006253981);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(26,0.007314289);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(27,0.007824252);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(28,0.003160918);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(29,0.001767741);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(30,0.002572281);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(31,0.0006140282);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(32,0.004411546);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(33,0.005362192);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(34,0.003037294);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(35,0.0005609299);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(36,0.002564166);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(37,0.0004386138);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(38,0.002760642);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(39,0.003755787);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(40,0.003950167);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(41,0.002340895);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(42,0.0007136716);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(43,0.001061212);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(44,0.001497428);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(45,0.0006527453);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(46,0.003580154);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(47,0.002490354);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(48,0.002157117);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(49,0.0003256256);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(50,0.0009313988);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(51,0.0001094681);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(52,0.001418092);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(53,0.0007123004);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(54,0.0008364054);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(55,0.001523403);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(56,0.0005249528);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(57,0.001084276);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(58,0.0009115125);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(59,0.0004444177);
   pfIsoPhotons03_mc_Z_EE__42->SetBinContent(61,0.01129417);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(1,0.02281842);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(2,0.007221984);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(3,0.009276928);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(4,0.007211525);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(5,0.008004937);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(6,0.006241056);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(7,0.006470292);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(8,0.004753458);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(9,0.004970147);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(10,0.004926714);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(11,0.003568829);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(12,0.004138282);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(13,0.005018403);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(14,0.005458802);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(15,0.002439499);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(16,0.004112495);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(17,0.002528061);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(18,0.003885484);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(19,0.001377378);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(20,0.002331387);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(21,0.003621752);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(22,0.003560868);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(23,0.002207329);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(24,0.001899985);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(25,0.003431158);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(26,0.002934181);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(27,0.003288169);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(28,0.001193683);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(29,0.0009039225);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(30,0.001739085);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(31,0.0003238165);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(32,0.002086897);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(33,0.003063474);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(34,0.001334427);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(35,0.0003374418);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(36,0.001451028);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(37,0.0003281739);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(38,0.001357245);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(39,0.002177571);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(40,0.002221753);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(41,0.001109664);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(42,0.000376558);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(43,0.0008168344);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(44,0.001197073);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(45,0.000364612);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(46,0.002230836);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(47,0.001371263);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(48,0.001965824);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(49,0.0002421054);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(50,0.0006783737);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(51,0.0001094681);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(52,0.000801503);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(53,0.0003540757);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(54,0.000597322);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(55,0.001091852);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(56,0.0003815144);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(57,0.0005418687);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(58,0.0006274736);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(59,0.0004444177);
   pfIsoPhotons03_mc_Z_EE__42->SetBinError(61,0.002241122);
   pfIsoPhotons03_mc_Z_EE__42->SetMinimum(9.078342e-06);
   pfIsoPhotons03_mc_Z_EE__42->SetMaximum(2.44549);
   pfIsoPhotons03_mc_Z_EE__42->SetEntries(2043);
   pfIsoPhotons03_mc_Z_EE__42->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__42->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__42->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__42->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__42->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__42->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__42->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__42->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__42->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__42->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.408087e-320,0,1.281112e-320,0,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_EE","signal #gamma + jet","F");
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
   pid_pfIsoPhotons03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.050921);
   ratio->SetBinContent(2,1.270649);
   ratio->SetBinContent(3,1.10848);
   ratio->SetBinContent(4,0.9879494);
   ratio->SetBinContent(5,1.147062);
   ratio->SetBinContent(6,1.001855);
   ratio->SetBinContent(7,1.146936);
   ratio->SetBinContent(8,0.9806405);
   ratio->SetBinContent(9,0.9339182);
   ratio->SetBinContent(10,1.081336);
   ratio->SetBinContent(11,0.7313375);
   ratio->SetBinContent(12,0.8460271);
   ratio->SetBinContent(13,1.099881);
   ratio->SetBinContent(14,1.45438);
   ratio->SetBinContent(15,0.5761076);
   ratio->SetBinContent(16,0.9459607);
   ratio->SetBinContent(17,0.5126092);
   ratio->SetBinContent(18,0.9937971);
   ratio->SetBinContent(19,0.4243189);
   ratio->SetBinContent(20,0.6367075);
   ratio->SetBinContent(21,1.552563);
   ratio->SetBinContent(22,1.216454);
   ratio->SetBinContent(23,0.7346305);
   ratio->SetBinContent(24,0.6781841);
   ratio->SetBinContent(25,1.078172);
   ratio->SetBinContent(26,1.162425);
   ratio->SetBinContent(27,1.36554);
   ratio->SetBinContent(28,0.5479991);
   ratio->SetBinContent(29,0.3288281);
   ratio->SetBinContent(30,0.5033201);
   ratio->SetBinContent(31,0.1452879);
   ratio->SetBinContent(32,1.055149);
   ratio->SetBinContent(33,1.342253);
   ratio->SetBinContent(34,0.8020306);
   ratio->SetBinContent(35,0.1530595);
   ratio->SetBinContent(36,0.7394256);
   ratio->SetBinContent(37,0.1293103);
   ratio->SetBinContent(38,0.85422);
   ratio->SetBinContent(39,1.317107);
   ratio->SetBinContent(40,1.618076);
   ratio->SetBinContent(41,0.7958626);
   ratio->SetBinContent(42,0.2956257);
   ratio->SetBinContent(43,0.4731034);
   ratio->SetBinContent(44,0.3434727);
   ratio->SetBinContent(45,0.366497);
   ratio->SetBinContent(46,1.813546);
   ratio->SetBinContent(47,1.410726);
   ratio->SetBinContent(48,1.362644);
   ratio->SetBinContent(49,0.1831254);
   ratio->SetBinContent(50,0.5617568);
   ratio->SetBinContent(51,0.06300112);
   ratio->SetBinContent(52,1.055535);
   ratio->SetBinContent(53,0.5713065);
   ratio->SetBinContent(54,0.6150336);
   ratio->SetBinContent(55,1.304486);
   ratio->SetBinContent(56,0.5190576);
   ratio->SetBinContent(57,1.085844);
   ratio->SetBinContent(58,0.8106043);
   ratio->SetBinContent(59,0.3808987);
   ratio->SetBinContent(61,0.6030251);
   ratio->SetBinError(1,0.05546715);
   ratio->SetBinError(2,0.2014126);
   ratio->SetBinError(3,0.1732218);
   ratio->SetBinError(4,0.1777568);
   ratio->SetBinError(5,0.2295006);
   ratio->SetBinError(6,0.203703);
   ratio->SetBinError(7,0.237253);
   ratio->SetBinError(8,0.1822871);
   ratio->SetBinError(9,0.2059043);
   ratio->SetBinError(10,0.2154684);
   ratio->SetBinError(11,0.1606259);
   ratio->SetBinError(12,0.206544);
   ratio->SetBinError(13,0.2812026);
   ratio->SetBinError(14,0.3428291);
   ratio->SetBinError(15,0.1619173);
   ratio->SetBinError(16,0.3018682);
   ratio->SetBinError(17,0.19059);
   ratio->SetBinError(18,0.336635);
   ratio->SetBinError(19,0.1351237);
   ratio->SetBinError(20,0.2601726);
   ratio->SetBinError(21,0.4193602);
   ratio->SetBinError(22,0.4440052);
   ratio->SetBinError(23,0.2966085);
   ratio->SetBinError(24,0.2671222);
   ratio->SetBinError(25,0.5926504);
   ratio->SetBinError(26,0.4702236);
   ratio->SetBinError(27,0.5782196);
   ratio->SetBinError(28,0.2089265);
   ratio->SetBinError(29,0.1691949);
   ratio->SetBinError(30,0.3418108);
   ratio->SetBinError(31,0.07698952);
   ratio->SetBinError(32,0.5019372);
   ratio->SetBinError(33,0.7712797);
   ratio->SetBinError(34,0.3556693);
   ratio->SetBinError(35,0.09257406);
   ratio->SetBinError(36,0.4207166);
   ratio->SetBinError(37,0.09716163);
   ratio->SetBinError(38,0.4249957);
   ratio->SetBinError(39,0.7687519);
   ratio->SetBinError(40,0.9152431);
   ratio->SetBinError(41,0.3840549);
   ratio->SetBinError(42,0.1575946);
   ratio->SetBinError(43,0.3670438);
   ratio->SetBinError(44,0.3196369);
   ratio->SetBinError(45,0.2062147);
   ratio->SetBinError(46,1.140979);
   ratio->SetBinError(47,0.7844775);
   ratio->SetBinError(48,1.246069);
   ratio->SetBinError(49,0.1370715);
   ratio->SetBinError(50,0.4127007);
   ratio->SetBinError(51,0.06324118);
   ratio->SetBinError(52,0.6067701);
   ratio->SetBinError(53,0.2882407);
   ratio->SetBinError(54,0.4451386);
   ratio->SetBinError(55,0.9457479);
   ratio->SetBinError(56,0.3803164);
   ratio->SetBinError(57,0.556359);
   ratio->SetBinError(58,0.5668899);
   ratio->SetBinError(59,0.3838274);
   ratio->SetBinError(61,0.1208099);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(210.7595);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.050921);
   ratio->SetBinContent(2,1.270649);
   ratio->SetBinContent(3,1.10848);
   ratio->SetBinContent(4,0.9879494);
   ratio->SetBinContent(5,1.147062);
   ratio->SetBinContent(6,1.001855);
   ratio->SetBinContent(7,1.146936);
   ratio->SetBinContent(8,0.9806405);
   ratio->SetBinContent(9,0.9339182);
   ratio->SetBinContent(10,1.081336);
   ratio->SetBinContent(11,0.7313375);
   ratio->SetBinContent(12,0.8460271);
   ratio->SetBinContent(13,1.099881);
   ratio->SetBinContent(14,1.45438);
   ratio->SetBinContent(15,0.5761076);
   ratio->SetBinContent(16,0.9459607);
   ratio->SetBinContent(17,0.5126092);
   ratio->SetBinContent(18,0.9937971);
   ratio->SetBinContent(19,0.4243189);
   ratio->SetBinContent(20,0.6367075);
   ratio->SetBinContent(21,1.552563);
   ratio->SetBinContent(22,1.216454);
   ratio->SetBinContent(23,0.7346305);
   ratio->SetBinContent(24,0.6781841);
   ratio->SetBinContent(25,1.078172);
   ratio->SetBinContent(26,1.162425);
   ratio->SetBinContent(27,1.36554);
   ratio->SetBinContent(28,0.5479991);
   ratio->SetBinContent(29,0.3288281);
   ratio->SetBinContent(30,0.5033201);
   ratio->SetBinContent(31,0.1452879);
   ratio->SetBinContent(32,1.055149);
   ratio->SetBinContent(33,1.342253);
   ratio->SetBinContent(34,0.8020306);
   ratio->SetBinContent(35,0.1530595);
   ratio->SetBinContent(36,0.7394256);
   ratio->SetBinContent(37,0.1293103);
   ratio->SetBinContent(38,0.85422);
   ratio->SetBinContent(39,1.317107);
   ratio->SetBinContent(40,1.618076);
   ratio->SetBinContent(41,0.7958626);
   ratio->SetBinContent(42,0.2956257);
   ratio->SetBinContent(43,0.4731034);
   ratio->SetBinContent(44,0.3434727);
   ratio->SetBinContent(45,0.366497);
   ratio->SetBinContent(46,1.813546);
   ratio->SetBinContent(47,1.410726);
   ratio->SetBinContent(48,1.362644);
   ratio->SetBinContent(49,0.1831254);
   ratio->SetBinContent(50,0.5617568);
   ratio->SetBinContent(51,0.06300112);
   ratio->SetBinContent(52,1.055535);
   ratio->SetBinContent(53,0.5713065);
   ratio->SetBinContent(54,0.6150336);
   ratio->SetBinContent(55,1.304486);
   ratio->SetBinContent(56,0.5190576);
   ratio->SetBinContent(57,1.085844);
   ratio->SetBinContent(58,0.8106043);
   ratio->SetBinContent(59,0.3808987);
   ratio->SetBinContent(61,0.6030251);
   ratio->SetBinError(1,0.05546715);
   ratio->SetBinError(2,0.2014126);
   ratio->SetBinError(3,0.1732218);
   ratio->SetBinError(4,0.1777568);
   ratio->SetBinError(5,0.2295006);
   ratio->SetBinError(6,0.203703);
   ratio->SetBinError(7,0.237253);
   ratio->SetBinError(8,0.1822871);
   ratio->SetBinError(9,0.2059043);
   ratio->SetBinError(10,0.2154684);
   ratio->SetBinError(11,0.1606259);
   ratio->SetBinError(12,0.206544);
   ratio->SetBinError(13,0.2812026);
   ratio->SetBinError(14,0.3428291);
   ratio->SetBinError(15,0.1619173);
   ratio->SetBinError(16,0.3018682);
   ratio->SetBinError(17,0.19059);
   ratio->SetBinError(18,0.336635);
   ratio->SetBinError(19,0.1351237);
   ratio->SetBinError(20,0.2601726);
   ratio->SetBinError(21,0.4193602);
   ratio->SetBinError(22,0.4440052);
   ratio->SetBinError(23,0.2966085);
   ratio->SetBinError(24,0.2671222);
   ratio->SetBinError(25,0.5926504);
   ratio->SetBinError(26,0.4702236);
   ratio->SetBinError(27,0.5782196);
   ratio->SetBinError(28,0.2089265);
   ratio->SetBinError(29,0.1691949);
   ratio->SetBinError(30,0.3418108);
   ratio->SetBinError(31,0.07698952);
   ratio->SetBinError(32,0.5019372);
   ratio->SetBinError(33,0.7712797);
   ratio->SetBinError(34,0.3556693);
   ratio->SetBinError(35,0.09257406);
   ratio->SetBinError(36,0.4207166);
   ratio->SetBinError(37,0.09716163);
   ratio->SetBinError(38,0.4249957);
   ratio->SetBinError(39,0.7687519);
   ratio->SetBinError(40,0.9152431);
   ratio->SetBinError(41,0.3840549);
   ratio->SetBinError(42,0.1575946);
   ratio->SetBinError(43,0.3670438);
   ratio->SetBinError(44,0.3196369);
   ratio->SetBinError(45,0.2062147);
   ratio->SetBinError(46,1.140979);
   ratio->SetBinError(47,0.7844775);
   ratio->SetBinError(48,1.246069);
   ratio->SetBinError(49,0.1370715);
   ratio->SetBinError(50,0.4127007);
   ratio->SetBinError(51,0.06324118);
   ratio->SetBinError(52,0.6067701);
   ratio->SetBinError(53,0.2882407);
   ratio->SetBinError(54,0.4451386);
   ratio->SetBinError(55,0.9457479);
   ratio->SetBinError(56,0.3803164);
   ratio->SetBinError(57,0.556359);
   ratio->SetBinError(58,0.5668899);
   ratio->SetBinError(59,0.3838274);
   ratio->SetBinError(61,0.1208099);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(210.7595);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoPhotons03ForCiC->cd();
   pid_pfIsoPhotons03ForCiC->Modified();
   pid_pfIsoPhotons03ForCiC->cd();
   pid_pfIsoPhotons03ForCiC->SetSelected(pid_pfIsoPhotons03ForCiC);
}
