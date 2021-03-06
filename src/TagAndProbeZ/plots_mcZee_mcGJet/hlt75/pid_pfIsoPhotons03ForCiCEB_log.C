{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Sat Nov 29 19:51:40 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.02899485,6.525,0.2609537);
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
   
   TH1F *pfIsoPhotons03_mc_Z_EB__34 = new TH1F("pfIsoPhotons03_mc_Z_EB__34","pfIsoPhotons03_mc_Z_EB",60,0,6);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(1,0.2213581);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(2,0.01335655);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(3,0.048312);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(4,0.07091109);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(5,0.05420153);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(6,0.05049981);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(7,0.04772142);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(8,0.04630152);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(9,0.04239102);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(10,0.0392252);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(11,0.03481352);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(12,0.03421915);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(13,0.02993489);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(14,0.02583433);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(15,0.02484127);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(16,0.02187247);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(17,0.0198241);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(18,0.01615522);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(19,0.01598511);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(20,0.01552791);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(21,0.01288498);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(22,0.01129172);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(23,0.01107084);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(24,0.01042425);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(25,0.008566251);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(26,0.007265254);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(27,0.007214494);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(28,0.006295587);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(29,0.00456857);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(30,0.004664032);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(31,0.004441474);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(32,0.003979533);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(33,0.004017341);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(34,0.003252883);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(35,0.003292732);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(36,0.00305267);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(37,0.00225828);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(38,0.001867827);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(39,0.00146866);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(40,0.001793138);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(41,0.001612521);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(42,0.001187837);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(43,0.001261151);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(44,0.0006498672);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(45,0.00114903);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(46,0.0008195419);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(47,0.0007702123);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(48,0.0006897566);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(49,0.0005454025);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(50,0.0007005165);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(51,0.0005070561);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(52,0.0004328811);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(53,0.0003583142);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(54,0.0003747724);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(55,0.0003335062);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(56,0.0005477353);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(57,0.0003792928);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(58,0.0001876597);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(59,0.0002099689);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(60,0.0003262492);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(61,0.003861942);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(1,0.002316429);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(2,0.0006424043);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(3,0.001184788);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(4,0.001303356);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(5,0.00115654);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(6,0.001107148);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(7,0.001102744);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(8,0.00108179);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(9,0.001038073);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(10,0.00104071);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(11,0.0009497925);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(12,0.0009332009);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(13,0.0008871097);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(14,0.0007960192);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(15,0.00083406);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(16,0.000744364);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(17,0.0007065416);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(18,0.0006170794);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(19,0.0006682851);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(20,0.000633535);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(21,0.0005746783);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(22,0.0005559465);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(23,0.0005606422);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(24,0.0005365866);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(25,0.0004639512);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(26,0.0004472128);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(27,0.0004714958);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(28,0.0004645414);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(29,0.0002981807);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(30,0.0003363633);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(31,0.0003273639);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(32,0.0003227372);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(33,0.0003555181);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(34,0.0002854839);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(35,0.0003431883);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(36,0.000372929);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(37,0.0002794978);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(38,0.0001972322);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(39,0.0001643365);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(40,0.0002358675);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(41,0.0002220916);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(42,0.0001742253);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(43,0.0001813136);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(44,9.817643e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(45,0.0001825431);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(46,0.0001411695);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(47,0.0001361848);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(48,0.0001245455);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(49,0.0001170775);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(50,0.0001177619);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(51,0.0001262385);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(52,9.493706e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(53,6.689623e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(54,9.372184e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(55,8.615099e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(56,0.0001382359);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(57,0.0001416865);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(58,5.238774e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(59,5.575297e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(60,9.343549e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(61,0.000310456);
   pfIsoPhotons03_mc_Z_EB__34->SetMinimum(4.474104e-07);
   pfIsoPhotons03_mc_Z_EB__34->SetMaximum(1.239606);
   pfIsoPhotons03_mc_Z_EB__34->SetEntries(78589);
   pfIsoPhotons03_mc_Z_EB__34->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EB__34->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EB__34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EB__34->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EB__34->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EB__34->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EB__34->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EB__34->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EB__34->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EB__34->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EB__35 = new TH1F("pfIsoPhotons03_mc_Signal_EB__35","pfIsoPhotons03_mc_Signal_EB",60,0,6);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(1,0.2119975);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(2,0.01379602);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(3,0.04573004);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(4,0.06627961);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(5,0.05776181);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(6,0.05142687);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(7,0.04757058);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(8,0.04401117);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(9,0.04390639);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(10,0.03669222);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(11,0.03867743);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(12,0.03190252);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(13,0.02942157);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(14,0.02774275);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(15,0.02392325);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(16,0.0212271);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(17,0.01956786);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(18,0.01823823);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(19,0.01670912);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(20,0.01599857);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(21,0.01375262);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(22,0.01177183);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(23,0.0117943);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(24,0.009673146);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(25,0.008435577);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(26,0.007970247);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(27,0.007326718);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(28,0.006431166);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(29,0.005819365);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(30,0.005437284);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(31,0.004807587);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(32,0.004206618);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(33,0.003903879);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(34,0.003425012);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(35,0.00322513);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(36,0.002671208);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(37,0.003601135);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(38,0.002135517);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(39,0.001773482);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(40,0.002148584);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(41,0.001688886);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(42,0.001717735);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(43,0.00168384);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(44,0.001271795);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(45,0.001281416);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(46,0.0007482261);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(47,0.001174703);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(48,0.001666535);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(49,0.0007839853);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(50,0.0006034471);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(51,0.0007221429);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(52,0.000554749);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(53,0.0005906877);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(54,0.0005337474);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(55,0.0004505352);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(56,0.0004338965);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(57,0.0003576329);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(58,0.0003045624);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(59,0.0003204531);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(60,0.0002200125);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(61,0.004556456);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(1,0.00293538);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(2,0.001071053);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(3,0.001562951);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(4,0.000991654);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(5,0.00265524);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(6,0.002203701);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(7,0.001740278);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(8,0.0007023937);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(9,0.002292289);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(10,0.0006376625);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(11,0.002528821);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(12,0.0006093037);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(13,0.000943674);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(14,0.001531478);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(15,0.0005179815);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(16,0.0004627997);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(17,0.0004454462);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(18,0.0004603055);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(19,0.0004422324);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(20,0.001410486);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(21,0.0005952813);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(22,0.0003457317);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(23,0.001297849);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(24,0.0003252036);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(25,0.0003013291);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(26,0.0002865436);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(27,0.0002996215);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(28,0.0002702385);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(29,0.0002693979);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(30,0.0002494148);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(31,0.0002331988);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(32,0.0002263199);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(33,0.0002039519);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(34,0.0001956777);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(35,0.0002088567);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(36,0.0001710733);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(37,0.001293288);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(38,0.0001501541);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(39,0.0001188569);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(40,0.000168574);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(41,0.0001462973);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(42,0.000175866);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(43,0.0001749803);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(44,0.0001377747);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(45,0.000136898);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(46,6.67614e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(47,0.0001423703);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(48,0.00069541);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(49,0.0001001332);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(50,8.501606e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(51,0.0001010456);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(52,6.942829e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(53,9.720915e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(54,8.285794e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(55,6.435748e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(56,7.81185e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(57,8.356068e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(58,6.883165e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(59,6.558533e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(60,2.76228e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(61,0.000288976);
   pfIsoPhotons03_mc_Signal_EB__35->SetEntries(303504);
   pfIsoPhotons03_mc_Signal_EB__35->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EB__35->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EB__35->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EB__35->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EB__35->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EB__35->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_EB__36 = new TH1F("pfIsoPhotons03_mc_Z_EB__36","pfIsoPhotons03_mc_Z_EB",60,0,6);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(1,0.2213581);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(2,0.01335655);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(3,0.048312);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(4,0.07091109);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(5,0.05420153);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(6,0.05049981);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(7,0.04772142);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(8,0.04630152);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(9,0.04239102);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(10,0.0392252);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(11,0.03481352);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(12,0.03421915);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(13,0.02993489);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(14,0.02583433);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(15,0.02484127);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(16,0.02187247);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(17,0.0198241);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(18,0.01615522);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(19,0.01598511);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(20,0.01552791);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(21,0.01288498);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(22,0.01129172);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(23,0.01107084);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(24,0.01042425);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(25,0.008566251);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(26,0.007265254);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(27,0.007214494);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(28,0.006295587);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(29,0.00456857);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(30,0.004664032);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(31,0.004441474);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(32,0.003979533);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(33,0.004017341);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(34,0.003252883);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(35,0.003292732);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(36,0.00305267);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(37,0.00225828);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(38,0.001867827);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(39,0.00146866);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(40,0.001793138);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(41,0.001612521);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(42,0.001187837);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(43,0.001261151);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(44,0.0006498672);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(45,0.00114903);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(46,0.0008195419);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(47,0.0007702123);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(48,0.0006897566);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(49,0.0005454025);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(50,0.0007005165);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(51,0.0005070561);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(52,0.0004328811);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(53,0.0003583142);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(54,0.0003747724);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(55,0.0003335062);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(56,0.0005477353);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(57,0.0003792928);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(58,0.0001876597);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(59,0.0002099689);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(60,0.0003262492);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(61,0.003861942);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(1,0.002316429);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(2,0.0006424043);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(3,0.001184788);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(4,0.001303356);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(5,0.00115654);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(6,0.001107148);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(7,0.001102744);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(8,0.00108179);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(9,0.001038073);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(10,0.00104071);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(11,0.0009497925);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(12,0.0009332009);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(13,0.0008871097);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(14,0.0007960192);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(15,0.00083406);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(16,0.000744364);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(17,0.0007065416);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(18,0.0006170794);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(19,0.0006682851);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(20,0.000633535);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(21,0.0005746783);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(22,0.0005559465);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(23,0.0005606422);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(24,0.0005365866);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(25,0.0004639512);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(26,0.0004472128);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(27,0.0004714958);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(28,0.0004645414);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(29,0.0002981807);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(30,0.0003363633);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(31,0.0003273639);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(32,0.0003227372);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(33,0.0003555181);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(34,0.0002854839);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(35,0.0003431883);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(36,0.000372929);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(37,0.0002794978);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(38,0.0001972322);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(39,0.0001643365);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(40,0.0002358675);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(41,0.0002220916);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(42,0.0001742253);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(43,0.0001813136);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(44,9.817643e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(45,0.0001825431);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(46,0.0001411695);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(47,0.0001361848);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(48,0.0001245455);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(49,0.0001170775);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(50,0.0001177619);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(51,0.0001262385);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(52,9.493706e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(53,6.689623e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(54,9.372184e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(55,8.615099e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(56,0.0001382359);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(57,0.0001416865);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(58,5.238774e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(59,5.575297e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(60,9.343549e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(61,0.000310456);
   pfIsoPhotons03_mc_Z_EB__36->SetMinimum(4.474104e-07);
   pfIsoPhotons03_mc_Z_EB__36->SetMaximum(1.239606);
   pfIsoPhotons03_mc_Z_EB__36->SetEntries(78589);
   pfIsoPhotons03_mc_Z_EB__36->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EB__36->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EB__36->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EB__36->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EB__36->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EB__36->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EB__36->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EB__36->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EB__36->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EB__36->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.354892e-310,4.244024e-314,1.5,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_EB","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.044154);
   ratio->SetBinContent(2,0.968145);
   ratio->SetBinContent(3,1.056461);
   ratio->SetBinContent(4,1.069878);
   ratio->SetBinContent(5,0.9383627);
   ratio->SetBinContent(6,0.9819732);
   ratio->SetBinContent(7,1.003171);
   ratio->SetBinContent(8,1.05204);
   ratio->SetBinContent(9,0.9654864);
   ratio->SetBinContent(10,1.069033);
   ratio->SetBinContent(11,0.900099);
   ratio->SetBinContent(12,1.072616);
   ratio->SetBinContent(13,1.017447);
   ratio->SetBinContent(14,0.9312102);
   ratio->SetBinContent(15,1.038374);
   ratio->SetBinContent(16,1.030403);
   ratio->SetBinContent(17,1.013095);
   ratio->SetBinContent(18,0.8857889);
   ratio->SetBinContent(19,0.9566696);
   ratio->SetBinContent(20,0.9705814);
   ratio->SetBinContent(21,0.9369107);
   ratio->SetBinContent(22,0.9592156);
   ratio->SetBinContent(23,0.9386599);
   ratio->SetBinContent(24,1.077648);
   ratio->SetBinContent(25,1.015491);
   ratio->SetBinContent(26,0.9115468);
   ratio->SetBinContent(27,0.9846829);
   ratio->SetBinContent(28,0.9789185);
   ratio->SetBinContent(29,0.7850634);
   ratio->SetBinContent(30,0.8577872);
   ratio->SetBinContent(31,0.9238469);
   ratio->SetBinContent(32,0.9460173);
   ratio->SetBinContent(33,1.029064);
   ratio->SetBinContent(34,0.9497437);
   ratio->SetBinContent(35,1.020961);
   ratio->SetBinContent(36,1.142805);
   ratio->SetBinContent(37,0.6271023);
   ratio->SetBinContent(38,0.8746486);
   ratio->SetBinContent(39,0.8281226);
   ratio->SetBinContent(40,0.8345674);
   ratio->SetBinContent(41,0.9547837);
   ratio->SetBinContent(42,0.6915135);
   ratio->SetBinContent(43,0.7489733);
   ratio->SetBinContent(44,0.5109842);
   ratio->SetBinContent(45,0.8966877);
   ratio->SetBinContent(46,1.095313);
   ratio->SetBinContent(47,0.6556655);
   ratio->SetBinContent(48,0.4138868);
   ratio->SetBinContent(49,0.6956794);
   ratio->SetBinContent(50,1.160858);
   ratio->SetBinContent(51,0.7021548);
   ratio->SetBinContent(52,0.7803189);
   ratio->SetBinContent(53,0.6066052);
   ratio->SetBinContent(54,0.702153);
   ratio->SetBinContent(55,0.7402446);
   ratio->SetBinContent(56,1.262364);
   ratio->SetBinContent(57,1.060565);
   ratio->SetBinContent(58,0.6161615);
   ratio->SetBinContent(59,0.655225);
   ratio->SetBinContent(60,1.482866);
   ratio->SetBinContent(61,0.8475758);
   ratio->SetBinError(1,0.01812227);
   ratio->SetBinError(2,0.0884169);
   ratio->SetBinError(3,0.04444088);
   ratio->SetBinError(4,0.02535591);
   ratio->SetBinError(5,0.04755592);
   ratio->SetBinError(6,0.04726623);
   ratio->SetBinError(7,0.04340726);
   ratio->SetBinError(8,0.02976701);
   ratio->SetBinError(9,0.05567598);
   ratio->SetBinError(10,0.03390619);
   ratio->SetBinError(11,0.06376854);
   ratio->SetBinError(12,0.03571171);
   ratio->SetBinError(13,0.04443074);
   ratio->SetBinError(14,0.05887104);
   ratio->SetBinError(15,0.04148455);
   ratio->SetBinError(16,0.0416456);
   ratio->SetBinError(17,0.04284392);
   ratio->SetBinError(18,0.04055311);
   ratio->SetBinError(19,0.0473361);
   ratio->SetBinError(20,0.09428827);
   ratio->SetBinError(21,0.05823037);
   ratio->SetBinError(22,0.05499106);
   ratio->SetBinError(23,0.1137036);
   ratio->SetBinError(24,0.06625488);
   ratio->SetBinError(25,0.06588453);
   ratio->SetBinError(26,0.06497956);
   ratio->SetBinError(27,0.07591319);
   ratio->SetBinError(28,0.0831241);
   ratio->SetBinError(29,0.06281962);
   ratio->SetBinError(30,0.07331574);
   ratio->SetBinError(31,0.08151591);
   ratio->SetBinError(32,0.09206857);
   ratio->SetBinError(33,0.105753);
   ratio->SetBinError(34,0.09945801);
   ratio->SetBinError(35,0.1252783);
   ratio->SetBinError(36,0.1576318);
   ratio->SetBinError(37,0.2382121);
   ratio->SetBinError(38,0.11096);
   ratio->SetBinError(39,0.1080126);
   ratio->SetBinError(40,0.1278229);
   ratio->SetBinError(41,0.1553484);
   ratio->SetBinError(42,0.1236931);
   ratio->SetBinError(43,0.1328624);
   ratio->SetBinError(44,0.09499113);
   ratio->SetBinError(45,0.1716686);
   ratio->SetBinError(46,0.2124817);
   ratio->SetBinError(47,0.1405513);
   ratio->SetBinError(48,0.1881821);
   ratio->SetBinError(49,0.1737714);
   ratio->SetBinError(50,0.2546181);
   ratio->SetBinError(51,0.2005285);
   ratio->SetBinError(52,0.1970394);
   ratio->SetBinError(53,0.150969);
   ratio->SetBinError(54,0.2066732);
   ratio->SetBinError(55,0.2185087);
   ratio->SetBinError(56,0.3913501);
   ratio->SetBinError(57,0.4672928);
   ratio->SetBinError(58,0.2213119);
   ratio->SetBinError(59,0.2196651);
   ratio->SetBinError(60,0.4636987);
   ratio->SetBinError(61,0.08678685);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2093.279);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.044154);
   ratio->SetBinContent(2,0.968145);
   ratio->SetBinContent(3,1.056461);
   ratio->SetBinContent(4,1.069878);
   ratio->SetBinContent(5,0.9383627);
   ratio->SetBinContent(6,0.9819732);
   ratio->SetBinContent(7,1.003171);
   ratio->SetBinContent(8,1.05204);
   ratio->SetBinContent(9,0.9654864);
   ratio->SetBinContent(10,1.069033);
   ratio->SetBinContent(11,0.900099);
   ratio->SetBinContent(12,1.072616);
   ratio->SetBinContent(13,1.017447);
   ratio->SetBinContent(14,0.9312102);
   ratio->SetBinContent(15,1.038374);
   ratio->SetBinContent(16,1.030403);
   ratio->SetBinContent(17,1.013095);
   ratio->SetBinContent(18,0.8857889);
   ratio->SetBinContent(19,0.9566696);
   ratio->SetBinContent(20,0.9705814);
   ratio->SetBinContent(21,0.9369107);
   ratio->SetBinContent(22,0.9592156);
   ratio->SetBinContent(23,0.9386599);
   ratio->SetBinContent(24,1.077648);
   ratio->SetBinContent(25,1.015491);
   ratio->SetBinContent(26,0.9115468);
   ratio->SetBinContent(27,0.9846829);
   ratio->SetBinContent(28,0.9789185);
   ratio->SetBinContent(29,0.7850634);
   ratio->SetBinContent(30,0.8577872);
   ratio->SetBinContent(31,0.9238469);
   ratio->SetBinContent(32,0.9460173);
   ratio->SetBinContent(33,1.029064);
   ratio->SetBinContent(34,0.9497437);
   ratio->SetBinContent(35,1.020961);
   ratio->SetBinContent(36,1.142805);
   ratio->SetBinContent(37,0.6271023);
   ratio->SetBinContent(38,0.8746486);
   ratio->SetBinContent(39,0.8281226);
   ratio->SetBinContent(40,0.8345674);
   ratio->SetBinContent(41,0.9547837);
   ratio->SetBinContent(42,0.6915135);
   ratio->SetBinContent(43,0.7489733);
   ratio->SetBinContent(44,0.5109842);
   ratio->SetBinContent(45,0.8966877);
   ratio->SetBinContent(46,1.095313);
   ratio->SetBinContent(47,0.6556655);
   ratio->SetBinContent(48,0.4138868);
   ratio->SetBinContent(49,0.6956794);
   ratio->SetBinContent(50,1.160858);
   ratio->SetBinContent(51,0.7021548);
   ratio->SetBinContent(52,0.7803189);
   ratio->SetBinContent(53,0.6066052);
   ratio->SetBinContent(54,0.702153);
   ratio->SetBinContent(55,0.7402446);
   ratio->SetBinContent(56,1.262364);
   ratio->SetBinContent(57,1.060565);
   ratio->SetBinContent(58,0.6161615);
   ratio->SetBinContent(59,0.655225);
   ratio->SetBinContent(60,1.482866);
   ratio->SetBinContent(61,0.8475758);
   ratio->SetBinError(1,0.01812227);
   ratio->SetBinError(2,0.0884169);
   ratio->SetBinError(3,0.04444088);
   ratio->SetBinError(4,0.02535591);
   ratio->SetBinError(5,0.04755592);
   ratio->SetBinError(6,0.04726623);
   ratio->SetBinError(7,0.04340726);
   ratio->SetBinError(8,0.02976701);
   ratio->SetBinError(9,0.05567598);
   ratio->SetBinError(10,0.03390619);
   ratio->SetBinError(11,0.06376854);
   ratio->SetBinError(12,0.03571171);
   ratio->SetBinError(13,0.04443074);
   ratio->SetBinError(14,0.05887104);
   ratio->SetBinError(15,0.04148455);
   ratio->SetBinError(16,0.0416456);
   ratio->SetBinError(17,0.04284392);
   ratio->SetBinError(18,0.04055311);
   ratio->SetBinError(19,0.0473361);
   ratio->SetBinError(20,0.09428827);
   ratio->SetBinError(21,0.05823037);
   ratio->SetBinError(22,0.05499106);
   ratio->SetBinError(23,0.1137036);
   ratio->SetBinError(24,0.06625488);
   ratio->SetBinError(25,0.06588453);
   ratio->SetBinError(26,0.06497956);
   ratio->SetBinError(27,0.07591319);
   ratio->SetBinError(28,0.0831241);
   ratio->SetBinError(29,0.06281962);
   ratio->SetBinError(30,0.07331574);
   ratio->SetBinError(31,0.08151591);
   ratio->SetBinError(32,0.09206857);
   ratio->SetBinError(33,0.105753);
   ratio->SetBinError(34,0.09945801);
   ratio->SetBinError(35,0.1252783);
   ratio->SetBinError(36,0.1576318);
   ratio->SetBinError(37,0.2382121);
   ratio->SetBinError(38,0.11096);
   ratio->SetBinError(39,0.1080126);
   ratio->SetBinError(40,0.1278229);
   ratio->SetBinError(41,0.1553484);
   ratio->SetBinError(42,0.1236931);
   ratio->SetBinError(43,0.1328624);
   ratio->SetBinError(44,0.09499113);
   ratio->SetBinError(45,0.1716686);
   ratio->SetBinError(46,0.2124817);
   ratio->SetBinError(47,0.1405513);
   ratio->SetBinError(48,0.1881821);
   ratio->SetBinError(49,0.1737714);
   ratio->SetBinError(50,0.2546181);
   ratio->SetBinError(51,0.2005285);
   ratio->SetBinError(52,0.1970394);
   ratio->SetBinError(53,0.150969);
   ratio->SetBinError(54,0.2066732);
   ratio->SetBinError(55,0.2185087);
   ratio->SetBinError(56,0.3913501);
   ratio->SetBinError(57,0.4672928);
   ratio->SetBinError(58,0.2213119);
   ratio->SetBinError(59,0.2196651);
   ratio->SetBinError(60,0.4636987);
   ratio->SetBinError(61,0.08678685);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(2093.279);
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
