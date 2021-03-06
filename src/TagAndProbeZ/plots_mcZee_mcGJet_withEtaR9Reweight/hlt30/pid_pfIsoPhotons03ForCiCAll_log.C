{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Sat Sep 27 23:43:30 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.03846686,6.525,0.3462017);
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
   
   TH1F *pfIsoPhotons03_mc_Z_All__46 = new TH1F("pfIsoPhotons03_mc_Z_All__46","pfIsoPhotons03_mc_Z_All",60,0,6);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(1,0.2962926);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(2,0.02052696);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(3,0.05044325);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(4,0.06540089);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(5,0.05138132);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(6,0.04639986);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(7,0.04332446);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(8,0.04017815);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(9,0.03706702);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(10,0.03382105);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(11,0.030858);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(12,0.0278751);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(13,0.02526683);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(14,0.02289676);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(15,0.02054662);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(16,0.01856742);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(17,0.01655869);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(18,0.01488015);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(19,0.01333356);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(20,0.01213436);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(21,0.01085147);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(22,0.009878127);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(23,0.008701906);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(24,0.007903362);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(25,0.007109412);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(26,0.006389187);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(27,0.005791347);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(28,0.005153891);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(29,0.00455435);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(30,0.004196313);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(31,0.003880661);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(32,0.003446844);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(33,0.003230819);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(34,0.002877038);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(35,0.002617042);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(36,0.002308646);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(37,0.002149777);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(38,0.001973219);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(39,0.001763582);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(40,0.001637621);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(41,0.001512523);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(42,0.001365885);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(43,0.001248834);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(44,0.001190919);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(45,0.001075302);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(46,0.001014069);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(47,0.0009737796);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(48,0.0008645632);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(49,0.0007609444);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(50,0.0007479631);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(51,0.000706379);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(52,0.0006446054);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(53,0.0005801437);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(54,0.0005261732);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(55,0.0005408766);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(56,0.0004631199);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(57,0.0004561018);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(58,0.0004298163);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(59,0.0003697914);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(60,0.000360586);
   pfIsoPhotons03_mc_Z_All__46->SetBinContent(61,0.006822578);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(1,0.0004517392);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(2,0.0001176134);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(3,0.0001847769);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(4,0.0002102539);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(5,0.0001860184);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(6,0.0001764747);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(7,0.0001700214);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(8,0.0001632784);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(9,0.0001565315);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(10,0.0001491859);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(11,0.0001420901);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(12,0.0001346827);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(13,0.0001280552);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(14,0.0001216695);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(15,0.0001150593);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(16,0.0001090776);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(17,0.0001027698);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(18,9.718681e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(19,9.193975e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(20,8.752979e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(21,8.266386e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(22,7.882849e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(23,7.376178e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(24,7.014644e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(25,6.650299e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(26,6.30292e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(27,5.971323e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(28,5.631809e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(29,5.298124e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(30,5.073977e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(31,4.870771e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(32,4.593216e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(33,4.445641e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(34,4.18187e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(35,3.982879e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(36,3.752604e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(37,3.609758e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(38,3.447088e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(39,3.26021e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(40,3.138157e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(41,3.017479e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(42,2.863562e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(43,2.739259e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(44,2.668257e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(45,2.538958e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(46,2.460395e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(47,2.409763e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(48,2.270921e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(49,2.129791e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(50,2.115506e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(51,2.057371e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(52,1.957536e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(53,1.858364e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(54,1.770552e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(55,1.798865e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(56,1.661255e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(57,1.649749e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(58,1.589216e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(59,1.469533e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(60,1.469925e-05);
   pfIsoPhotons03_mc_Z_All__46->SetBinError(61,6.347124e-05);
   pfIsoPhotons03_mc_Z_All__46->SetMinimum(6.001737e-08);
   pfIsoPhotons03_mc_Z_All__46->SetMaximum(1.659238);
   pfIsoPhotons03_mc_Z_All__46->SetEntries(1581076);
   pfIsoPhotons03_mc_Z_All__46->SetDirectory(0);
   pfIsoPhotons03_mc_Z_All__46->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__46->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__46->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_All__46->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_All__46->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_All__46->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_All__46->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_All__46->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_All__46->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_All__47 = new TH1F("pfIsoPhotons03_mc_Signal_All__47","pfIsoPhotons03_mc_Signal_All",60,0,6);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(1,0.281267);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(2,0.02331384);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(3,0.04975813);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(4,0.05794343);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(5,0.04696979);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(6,0.04287358);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(7,0.04084511);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(8,0.03822386);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(9,0.0350216);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(10,0.03292136);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(11,0.03059777);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(12,0.02730293);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(13,0.02514359);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(14,0.02322234);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(15,0.02187703);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(16,0.01886631);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(17,0.01745064);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(18,0.01623799);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(19,0.0145587);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(20,0.01358629);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(21,0.01215934);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(22,0.01126284);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(23,0.009936695);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(24,0.008897732);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(25,0.008144723);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(26,0.007945656);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(27,0.006741592);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(28,0.00631329);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(29,0.005942188);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(30,0.005512582);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(31,0.004747409);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(32,0.00467998);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(33,0.003929771);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(34,0.003876962);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(35,0.003699281);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(36,0.003251089);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(37,0.003112971);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(38,0.002675367);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(39,0.002470033);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(40,0.002363893);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(41,0.002115595);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(42,0.001898079);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(43,0.00190544);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(44,0.001641369);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(45,0.001690804);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(46,0.001516058);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(47,0.001534413);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(48,0.001275123);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(49,0.001175158);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(50,0.001191586);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(51,0.001129302);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(52,0.001025003);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(53,0.0009503356);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(54,0.000893939);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(55,0.0009832243);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(56,0.0007784404);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(57,0.0007622751);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(58,0.000592601);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(59,0.0006714367);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(60,0.0006251266);
   pfIsoPhotons03_mc_Signal_All__47->SetBinContent(61,0.01612208);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(1,0.001333868);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(2,0.0003927757);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(3,0.0005613783);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(4,0.0006009166);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(5,0.000544791);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(6,0.0005112051);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(7,0.0005076643);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(8,0.0004843347);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(9,0.0004637255);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(10,0.0004524522);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(11,0.0004259734);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(12,0.000402109);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(13,0.0003910224);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(14,0.0003718658);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(15,0.0003778862);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(16,0.0003321553);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(17,0.0003251747);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(18,0.0003164747);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(19,0.0003032231);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(20,0.000293967);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(21,0.0002765669);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(22,0.0002738263);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(23,0.0002440137);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(24,0.0002324274);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(25,0.0002182676);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(26,0.000234219);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(27,0.0002082744);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(28,0.0002006093);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(29,0.0001979174);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(30,0.0001957777);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(31,0.000164676);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(32,0.0001790964);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(33,0.0001569215);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(34,0.0001645418);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(35,0.0001653815);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(36,0.0001525227);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(37,0.000151097);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(38,0.0001369626);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(39,0.0001274939);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(40,0.0001309128);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(41,0.000115536);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(42,0.0001076873);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(43,0.0001237389);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(44,0.0001014818);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(45,0.0001122945);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(46,0.000105895);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(47,0.0001109225);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(48,9.277359e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(49,8.817649e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(50,9.575802e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(51,0.0001001011);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(52,9.147674e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(53,8.77312e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(54,8.099632e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(55,9.467762e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(56,7.873052e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(57,7.873751e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(58,5.83682e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(59,7.737079e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(60,7.486104e-05);
   pfIsoPhotons03_mc_Signal_All__47->SetBinError(61,0.0003958422);
   pfIsoPhotons03_mc_Signal_All__47->SetEntries(1617535);
   pfIsoPhotons03_mc_Signal_All__47->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_All__47->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_All__47->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_All__47->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_All__47->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_All__47->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_All__48 = new TH1F("pfIsoPhotons03_mc_Z_All__48","pfIsoPhotons03_mc_Z_All",60,0,6);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(1,0.2962926);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(2,0.02052696);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(3,0.05044325);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(4,0.06540089);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(5,0.05138132);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(6,0.04639986);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(7,0.04332446);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(8,0.04017815);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(9,0.03706702);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(10,0.03382105);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(11,0.030858);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(12,0.0278751);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(13,0.02526683);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(14,0.02289676);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(15,0.02054662);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(16,0.01856742);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(17,0.01655869);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(18,0.01488015);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(19,0.01333356);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(20,0.01213436);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(21,0.01085147);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(22,0.009878127);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(23,0.008701906);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(24,0.007903362);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(25,0.007109412);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(26,0.006389187);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(27,0.005791347);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(28,0.005153891);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(29,0.00455435);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(30,0.004196313);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(31,0.003880661);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(32,0.003446844);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(33,0.003230819);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(34,0.002877038);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(35,0.002617042);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(36,0.002308646);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(37,0.002149777);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(38,0.001973219);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(39,0.001763582);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(40,0.001637621);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(41,0.001512523);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(42,0.001365885);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(43,0.001248834);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(44,0.001190919);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(45,0.001075302);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(46,0.001014069);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(47,0.0009737796);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(48,0.0008645632);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(49,0.0007609444);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(50,0.0007479631);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(51,0.000706379);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(52,0.0006446054);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(53,0.0005801437);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(54,0.0005261732);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(55,0.0005408766);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(56,0.0004631199);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(57,0.0004561018);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(58,0.0004298163);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(59,0.0003697914);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(60,0.000360586);
   pfIsoPhotons03_mc_Z_All__48->SetBinContent(61,0.006822578);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(1,0.0004517392);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(2,0.0001176134);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(3,0.0001847769);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(4,0.0002102539);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(5,0.0001860184);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(6,0.0001764747);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(7,0.0001700214);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(8,0.0001632784);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(9,0.0001565315);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(10,0.0001491859);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(11,0.0001420901);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(12,0.0001346827);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(13,0.0001280552);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(14,0.0001216695);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(15,0.0001150593);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(16,0.0001090776);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(17,0.0001027698);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(18,9.718681e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(19,9.193975e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(20,8.752979e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(21,8.266386e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(22,7.882849e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(23,7.376178e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(24,7.014644e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(25,6.650299e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(26,6.30292e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(27,5.971323e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(28,5.631809e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(29,5.298124e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(30,5.073977e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(31,4.870771e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(32,4.593216e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(33,4.445641e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(34,4.18187e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(35,3.982879e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(36,3.752604e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(37,3.609758e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(38,3.447088e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(39,3.26021e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(40,3.138157e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(41,3.017479e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(42,2.863562e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(43,2.739259e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(44,2.668257e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(45,2.538958e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(46,2.460395e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(47,2.409763e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(48,2.270921e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(49,2.129791e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(50,2.115506e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(51,2.057371e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(52,1.957536e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(53,1.858364e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(54,1.770552e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(55,1.798865e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(56,1.661255e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(57,1.649749e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(58,1.589216e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(59,1.469533e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(60,1.469925e-05);
   pfIsoPhotons03_mc_Z_All__48->SetBinError(61,6.347124e-05);
   pfIsoPhotons03_mc_Z_All__48->SetMinimum(6.001737e-08);
   pfIsoPhotons03_mc_Z_All__48->SetMaximum(1.659238);
   pfIsoPhotons03_mc_Z_All__48->SetEntries(1581076);
   pfIsoPhotons03_mc_Z_All__48->SetDirectory(0);
   pfIsoPhotons03_mc_Z_All__48->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__48->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__48->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_All__48->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_All__48->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_All__48->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_All__48->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_All__48->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_All__48->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.967647e+261,1.311256e-57,1.443685e-152,2.967647e+261,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_All","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.053421);
   ratio->SetBinContent(2,0.8804627);
   ratio->SetBinContent(3,1.013769);
   ratio->SetBinContent(4,1.128702);
   ratio->SetBinContent(5,1.093923);
   ratio->SetBinContent(6,1.082248);
   ratio->SetBinContent(7,1.060701);
   ratio->SetBinContent(8,1.051128);
   ratio->SetBinContent(9,1.058404);
   ratio->SetBinContent(10,1.027328);
   ratio->SetBinContent(11,1.008505);
   ratio->SetBinContent(12,1.020957);
   ratio->SetBinContent(13,1.004902);
   ratio->SetBinContent(14,0.9859797);
   ratio->SetBinContent(15,0.9391873);
   ratio->SetBinContent(16,0.9841574);
   ratio->SetBinContent(17,0.9488873);
   ratio->SetBinContent(18,0.9163788);
   ratio->SetBinContent(19,0.9158478);
   ratio->SetBinContent(20,0.8931326);
   ratio->SetBinContent(21,0.8924394);
   ratio->SetBinContent(22,0.877055);
   ratio->SetBinContent(23,0.8757344);
   ratio->SetBinContent(24,0.8882445);
   ratio->SetBinContent(25,0.8728857);
   ratio->SetBinContent(26,0.8041108);
   ratio->SetBinContent(27,0.8590474);
   ratio->SetBinContent(28,0.8163558);
   ratio->SetBinContent(29,0.7664433);
   ratio->SetBinContent(30,0.7612246);
   ratio->SetBinContent(31,0.8174272);
   ratio->SetBinContent(32,0.7365083);
   ratio->SetBinContent(33,0.8221391);
   ratio->SetBinContent(34,0.7420856);
   ratio->SetBinContent(35,0.7074461);
   ratio->SetBinContent(36,0.7101147);
   ratio->SetBinContent(37,0.6905869);
   ratio->SetBinContent(38,0.7375507);
   ratio->SetBinContent(39,0.7139912);
   ratio->SetBinContent(40,0.6927645);
   ratio->SetBinContent(41,0.7149397);
   ratio->SetBinContent(42,0.7196144);
   ratio->SetBinContent(43,0.6554046);
   ratio->SetBinContent(44,0.7255641);
   ratio->SetBinContent(45,0.6359708);
   ratio->SetBinContent(46,0.6688855);
   ratio->SetBinContent(47,0.634627);
   ratio->SetBinContent(48,0.6780233);
   ratio->SetBinContent(49,0.6475253);
   ratio->SetBinContent(50,0.627704);
   ratio->SetBinContent(51,0.6255003);
   ratio->SetBinContent(52,0.6288813);
   ratio->SetBinContent(53,0.610462);
   ratio->SetBinContent(54,0.5886008);
   ratio->SetBinContent(55,0.550105);
   ratio->SetBinContent(56,0.594933);
   ratio->SetBinContent(57,0.5983428);
   ratio->SetBinContent(58,0.7253048);
   ratio->SetBinContent(59,0.5507465);
   ratio->SetBinContent(60,0.5768207);
   ratio->SetBinContent(61,0.4231823);
   ratio->SetBinError(1,0.005247522);
   ratio->SetBinError(2,0.01566783);
   ratio->SetBinError(3,0.01202523);
   ratio->SetBinError(4,0.01225501);
   ratio->SetBinError(5,0.01329186);
   ratio->SetBinError(6,0.01354482);
   ratio->SetBinError(7,0.01382501);
   ratio->SetBinError(8,0.01398708);
   ratio->SetBinError(9,0.01470994);
   ratio->SetBinError(10,0.01482841);
   ratio->SetBinError(11,0.01478816);
   ratio->SetBinError(12,0.01582481);
   ratio->SetBinError(13,0.01643674);
   ratio->SetBinError(14,0.01663538);
   ratio->SetBinError(15,0.01705401);
   ratio->SetBinError(16,0.01826597);
   ratio->SetBinError(17,0.0186365);
   ratio->SetBinError(18,0.01883619);
   ratio->SetBinError(19,0.02009312);
   ratio->SetBinError(20,0.02037035);
   ratio->SetBinError(21,0.02140693);
   ratio->SetBinError(22,0.02244256);
   ratio->SetBinError(23,0.02275038);
   ratio->SetBinError(24,0.02450555);
   ratio->SetBinError(25,0.02477626);
   ratio->SetBinError(26,0.0249954);
   ratio->SetBinError(27,0.02797843);
   ratio->SetBinError(28,0.02743128);
   ratio->SetBinError(29,0.0270403);
   ratio->SetBinError(30,0.0285586);
   ratio->SetBinError(31,0.03015368);
   ratio->SetBinError(32,0.02984509);
   ratio->SetBinError(33,0.0347237);
   ratio->SetBinError(34,0.03329069);
   ratio->SetBinError(35,0.03340974);
   ratio->SetBinError(36,0.03525749);
   ratio->SetBinError(37,0.03546871);
   ratio->SetBinError(38,0.03989595);
   ratio->SetBinError(39,0.03914588);
   ratio->SetBinError(40,0.04059729);
   ratio->SetBinError(41,0.04156763);
   ratio->SetBinError(42,0.04352551);
   ratio->SetBinError(43,0.04492413);
   ratio->SetBinError(44,0.04771447);
   ratio->SetBinError(45,0.04482777);
   ratio->SetBinError(46,0.04945927);
   ratio->SetBinError(47,0.04849072);
   ratio->SetBinError(48,0.05244701);
   ratio->SetBinError(49,0.05185636);
   ratio->SetBinError(50,0.0534765);
   ratio->SetBinError(51,0.05836056);
   ratio->SetBinError(52,0.05928499);
   ratio->SetBinError(53,0.05965169);
   ratio->SetBinError(54,0.05688991);
   ratio->SetBinError(55,0.0560418);
   ratio->SetBinError(56,0.06384322);
   ratio->SetBinError(57,0.06548428);
   ratio->SetBinError(58,0.07630659);
   ratio->SetBinError(59,0.0671314);
   ratio->SetBinError(60,0.07296874);
   ratio->SetBinError(61,0.01111116);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(26939.09);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.053421);
   ratio->SetBinContent(2,0.8804627);
   ratio->SetBinContent(3,1.013769);
   ratio->SetBinContent(4,1.128702);
   ratio->SetBinContent(5,1.093923);
   ratio->SetBinContent(6,1.082248);
   ratio->SetBinContent(7,1.060701);
   ratio->SetBinContent(8,1.051128);
   ratio->SetBinContent(9,1.058404);
   ratio->SetBinContent(10,1.027328);
   ratio->SetBinContent(11,1.008505);
   ratio->SetBinContent(12,1.020957);
   ratio->SetBinContent(13,1.004902);
   ratio->SetBinContent(14,0.9859797);
   ratio->SetBinContent(15,0.9391873);
   ratio->SetBinContent(16,0.9841574);
   ratio->SetBinContent(17,0.9488873);
   ratio->SetBinContent(18,0.9163788);
   ratio->SetBinContent(19,0.9158478);
   ratio->SetBinContent(20,0.8931326);
   ratio->SetBinContent(21,0.8924394);
   ratio->SetBinContent(22,0.877055);
   ratio->SetBinContent(23,0.8757344);
   ratio->SetBinContent(24,0.8882445);
   ratio->SetBinContent(25,0.8728857);
   ratio->SetBinContent(26,0.8041108);
   ratio->SetBinContent(27,0.8590474);
   ratio->SetBinContent(28,0.8163558);
   ratio->SetBinContent(29,0.7664433);
   ratio->SetBinContent(30,0.7612246);
   ratio->SetBinContent(31,0.8174272);
   ratio->SetBinContent(32,0.7365083);
   ratio->SetBinContent(33,0.8221391);
   ratio->SetBinContent(34,0.7420856);
   ratio->SetBinContent(35,0.7074461);
   ratio->SetBinContent(36,0.7101147);
   ratio->SetBinContent(37,0.6905869);
   ratio->SetBinContent(38,0.7375507);
   ratio->SetBinContent(39,0.7139912);
   ratio->SetBinContent(40,0.6927645);
   ratio->SetBinContent(41,0.7149397);
   ratio->SetBinContent(42,0.7196144);
   ratio->SetBinContent(43,0.6554046);
   ratio->SetBinContent(44,0.7255641);
   ratio->SetBinContent(45,0.6359708);
   ratio->SetBinContent(46,0.6688855);
   ratio->SetBinContent(47,0.634627);
   ratio->SetBinContent(48,0.6780233);
   ratio->SetBinContent(49,0.6475253);
   ratio->SetBinContent(50,0.627704);
   ratio->SetBinContent(51,0.6255003);
   ratio->SetBinContent(52,0.6288813);
   ratio->SetBinContent(53,0.610462);
   ratio->SetBinContent(54,0.5886008);
   ratio->SetBinContent(55,0.550105);
   ratio->SetBinContent(56,0.594933);
   ratio->SetBinContent(57,0.5983428);
   ratio->SetBinContent(58,0.7253048);
   ratio->SetBinContent(59,0.5507465);
   ratio->SetBinContent(60,0.5768207);
   ratio->SetBinContent(61,0.4231823);
   ratio->SetBinError(1,0.005247522);
   ratio->SetBinError(2,0.01566783);
   ratio->SetBinError(3,0.01202523);
   ratio->SetBinError(4,0.01225501);
   ratio->SetBinError(5,0.01329186);
   ratio->SetBinError(6,0.01354482);
   ratio->SetBinError(7,0.01382501);
   ratio->SetBinError(8,0.01398708);
   ratio->SetBinError(9,0.01470994);
   ratio->SetBinError(10,0.01482841);
   ratio->SetBinError(11,0.01478816);
   ratio->SetBinError(12,0.01582481);
   ratio->SetBinError(13,0.01643674);
   ratio->SetBinError(14,0.01663538);
   ratio->SetBinError(15,0.01705401);
   ratio->SetBinError(16,0.01826597);
   ratio->SetBinError(17,0.0186365);
   ratio->SetBinError(18,0.01883619);
   ratio->SetBinError(19,0.02009312);
   ratio->SetBinError(20,0.02037035);
   ratio->SetBinError(21,0.02140693);
   ratio->SetBinError(22,0.02244256);
   ratio->SetBinError(23,0.02275038);
   ratio->SetBinError(24,0.02450555);
   ratio->SetBinError(25,0.02477626);
   ratio->SetBinError(26,0.0249954);
   ratio->SetBinError(27,0.02797843);
   ratio->SetBinError(28,0.02743128);
   ratio->SetBinError(29,0.0270403);
   ratio->SetBinError(30,0.0285586);
   ratio->SetBinError(31,0.03015368);
   ratio->SetBinError(32,0.02984509);
   ratio->SetBinError(33,0.0347237);
   ratio->SetBinError(34,0.03329069);
   ratio->SetBinError(35,0.03340974);
   ratio->SetBinError(36,0.03525749);
   ratio->SetBinError(37,0.03546871);
   ratio->SetBinError(38,0.03989595);
   ratio->SetBinError(39,0.03914588);
   ratio->SetBinError(40,0.04059729);
   ratio->SetBinError(41,0.04156763);
   ratio->SetBinError(42,0.04352551);
   ratio->SetBinError(43,0.04492413);
   ratio->SetBinError(44,0.04771447);
   ratio->SetBinError(45,0.04482777);
   ratio->SetBinError(46,0.04945927);
   ratio->SetBinError(47,0.04849072);
   ratio->SetBinError(48,0.05244701);
   ratio->SetBinError(49,0.05185636);
   ratio->SetBinError(50,0.0534765);
   ratio->SetBinError(51,0.05836056);
   ratio->SetBinError(52,0.05928499);
   ratio->SetBinError(53,0.05965169);
   ratio->SetBinError(54,0.05688991);
   ratio->SetBinError(55,0.0560418);
   ratio->SetBinError(56,0.06384322);
   ratio->SetBinError(57,0.06548428);
   ratio->SetBinError(58,0.07630659);
   ratio->SetBinError(59,0.0671314);
   ratio->SetBinError(60,0.07296874);
   ratio->SetBinError(61,0.01111116);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(26939.09);
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
