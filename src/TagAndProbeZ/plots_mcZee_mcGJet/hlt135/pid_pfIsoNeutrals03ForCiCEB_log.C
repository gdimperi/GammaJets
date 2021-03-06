{
//=========Macro generated from canvas: pid_pfIsoNeutrals03ForCiC/pid_pfIsoNeutrals03ForCiC
//=========  (Sat Nov 29 19:43:51 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoNeutrals03ForCiC = new TCanvas("pid_pfIsoNeutrals03ForCiC", "pid_pfIsoNeutrals03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoNeutrals03ForCiC->SetHighLightColor(2);
   pid_pfIsoNeutrals03ForCiC->Range(-0.9749999,-0.1077348,6.525,0.9696131);
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
   
   TH1F *pfIsoNeutrals03_mc_Z_EB__34 = new TH1F("pfIsoNeutrals03_mc_Z_EB__34","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(1,0.8265302);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(4,0.0003638055);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(5,0.008962822);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(6,0.01371928);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(7,0.01517232);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(8,0.01649972);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(9,0.01900902);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(10,0.01400177);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(11,0.01159947);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(12,0.009434654);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(13,0.007466864);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(14,0.005951628);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(15,0.005642102);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(16,0.004240108);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(17,0.003967997);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(18,0.003304052);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(19,0.00305801);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(20,0.002908258);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(21,0.003495692);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(22,0.002968649);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(23,0.002495802);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(24,0.001700251);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(25,0.001583788);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(26,0.001481759);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(27,0.001183537);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(28,0.001425934);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(29,0.0008026338);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(30,0.0009611804);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(31,0.000869918);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(32,0.0006744597);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(33,0.0005865582);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(34,0.0005958235);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(35,0.0004535654);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(36,0.0005623091);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(37,0.0004917623);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(38,0.0007339671);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(39,0.0005614792);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(40,0.0002735376);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(41,0.0004975536);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(42,0.0002781954);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(43,0.0002405636);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(44,0.0003721561);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(45,0.0002099798);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(46,0.0002186969);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(47,0.0002704778);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(48,0.0002505551);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(49,0.0003670361);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(50,6.250617e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(51,0.0004031533);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(52,0.0002730849);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(53,0.0001333965);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(54,6.846627e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(55,8.328576e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(56,8.228482e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(57,0.0002123676);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(58,0.0001235906);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(59,6.073373e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(60,5.729097e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinContent(61,0.001819185);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(1,0.004566791);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(4,7.773946e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(5,0.0005161807);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(6,0.0006016952);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(7,0.0006652938);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(8,0.0006373556);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(9,0.0006933287);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(10,0.0005701114);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(11,0.0005697621);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(12,0.0004985383);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(13,0.0004585028);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(14,0.0004213053);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(15,0.0003910795);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(16,0.0003348719);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(17,0.0003061234);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(18,0.000298593);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(19,0.0002880595);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(20,0.0002836828);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(21,0.0003053794);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(22,0.0002664261);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(23,0.0002253);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(24,0.0001852094);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(25,0.0001958611);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(26,0.0001841051);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(27,0.0001533018);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(28,0.0001911813);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(29,0.0001386754);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(30,0.000196552);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(31,0.0001517192);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(32,0.0001012693);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(33,0.0001051415);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(34,0.0001016393);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(35,9.788528e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(36,0.0001221343);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(37,0.0001088118);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(38,0.0001373094);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(39,0.0001918689);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(40,6.213019e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(41,0.0001259448);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(42,6.697135e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(43,9.252087e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(44,8.552657e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(45,7.679172e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(46,5.843998e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(47,8.512861e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(48,6.956864e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(49,0.0001002352);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(50,2.730355e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(51,0.0001195265);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(52,8.477404e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(53,7.776084e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(54,3.923241e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(55,3.454386e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(56,3.121526e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(57,8.221578e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(58,7.480704e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(59,3.178272e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(60,2.84935e-05);
   pfIsoNeutrals03_mc_Z_EB__34->SetBinError(61,0.0002084116);
   pfIsoNeutrals03_mc_Z_EB__34->SetMinimum(4.447917e-07);
   pfIsoNeutrals03_mc_Z_EB__34->SetMaximum(4.628569);
   pfIsoNeutrals03_mc_Z_EB__34->SetEntries(78589);
   pfIsoNeutrals03_mc_Z_EB__34->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EB__34->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__34->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__34->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EB__34->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EB__34->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EB__34->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EB__34->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EB__34->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EB__34->Draw("PE");
   
   TH1F *pfIsoNeutrals03_mc_Signal_EB__35 = new TH1F("pfIsoNeutrals03_mc_Signal_EB__35","pfIsoNeutrals03_mc_Signal_EB",60,0,6);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(1,0.6942651);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(4,0.0006111068);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(5,0.01336274);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(6,0.02144882);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(7,0.02298826);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(8,0.02987378);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(9,0.03410337);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(10,0.02311934);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(11,0.01991915);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(12,0.01439494);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(13,0.01123123);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(14,0.01085392);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(15,0.01009604);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(16,0.00760873);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(17,0.007282313);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(18,0.006353074);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(19,0.005488914);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(20,0.006166845);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(21,0.005805279);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(22,0.005323372);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(23,0.004378393);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(24,0.003581637);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(25,0.003203942);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(26,0.002758757);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(27,0.003165714);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(28,0.002458322);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(29,0.002085262);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(30,0.002060536);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(31,0.001717892);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(32,0.001645395);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(33,0.00165915);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(34,0.001560621);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(35,0.001320847);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(36,0.001339252);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(37,0.001292036);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(38,0.001079398);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(39,0.001003225);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(40,0.001002854);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(41,0.0008621195);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(42,0.0008782026);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(43,0.000987424);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(44,0.0007421605);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(45,0.0008233762);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(46,0.0007023606);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(47,0.000603751);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(48,0.0007329661);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(49,0.0006394749);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(50,0.0006360394);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(51,0.000559336);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(52,0.0005189255);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(53,0.000615198);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(54,0.0004610178);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(55,0.000486457);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(56,0.000542058);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(57,0.0004075033);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(58,0.000387779);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(59,0.0003795624);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(60,0.0004247472);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinContent(61,0.01109756);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(1,0.005610289);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(4,6.935425e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(5,0.0003438375);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(6,0.0004416231);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(7,0.0008589906);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(8,0.001498381);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(9,0.001374237);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(10,0.0006967528);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(11,0.0005541328);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(12,0.0003567787);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(13,0.0002981248);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(14,0.0009954675);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(15,0.00119606);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(16,0.0002498796);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(17,0.000253368);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(18,0.0002350988);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(19,0.0004345493);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(20,0.0005805257);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(21,0.0002049165);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(22,0.0002188919);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(23,0.0001772415);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(24,0.0001676364);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(25,0.0001655598);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(26,0.0001595557);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(27,0.0006316953);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(28,0.000158825);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(29,0.0001347977);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(30,0.0001301497);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(31,0.0001039145);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(32,0.0001089857);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(33,0.0001093122);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(34,0.0001167441);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(35,0.0001167249);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(36,0.0001017036);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(37,0.0001238719);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(38,8.081525e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(39,7.739796e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(40,8.139356e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(41,7.623933e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(42,9.11802e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(43,9.132683e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(44,6.90754e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(45,0.0001008787);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(46,6.463594e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(47,6.40203e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(48,7.464037e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(49,8.063002e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(50,8.832631e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(51,6.640157e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(52,5.896241e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(53,9.84188e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(54,5.955808e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(55,5.26383e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(56,8.189115e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(57,4.855645e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(58,6.538541e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(59,5.456046e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(60,5.473546e-05);
   pfIsoNeutrals03_mc_Signal_EB__35->SetBinError(61,0.0002695328);
   pfIsoNeutrals03_mc_Signal_EB__35->SetEntries(237110);
   pfIsoNeutrals03_mc_Signal_EB__35->SetDirectory(0);
   pfIsoNeutrals03_mc_Signal_EB__35->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EB__35->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EB__35->SetLineColor(ci);
   pfIsoNeutrals03_mc_Signal_EB__35->SetLineWidth(2);
   pfIsoNeutrals03_mc_Signal_EB__35->Draw("HSAME");
   
   TH1F *pfIsoNeutrals03_mc_Z_EB__36 = new TH1F("pfIsoNeutrals03_mc_Z_EB__36","pfIsoNeutrals03_mc_Z_EB",60,0,6);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(1,0.8265302);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(4,0.0003638055);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(5,0.008962822);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(6,0.01371928);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(7,0.01517232);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(8,0.01649972);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(9,0.01900902);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(10,0.01400177);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(11,0.01159947);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(12,0.009434654);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(13,0.007466864);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(14,0.005951628);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(15,0.005642102);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(16,0.004240108);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(17,0.003967997);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(18,0.003304052);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(19,0.00305801);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(20,0.002908258);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(21,0.003495692);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(22,0.002968649);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(23,0.002495802);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(24,0.001700251);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(25,0.001583788);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(26,0.001481759);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(27,0.001183537);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(28,0.001425934);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(29,0.0008026338);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(30,0.0009611804);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(31,0.000869918);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(32,0.0006744597);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(33,0.0005865582);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(34,0.0005958235);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(35,0.0004535654);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(36,0.0005623091);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(37,0.0004917623);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(38,0.0007339671);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(39,0.0005614792);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(40,0.0002735376);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(41,0.0004975536);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(42,0.0002781954);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(43,0.0002405636);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(44,0.0003721561);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(45,0.0002099798);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(46,0.0002186969);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(47,0.0002704778);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(48,0.0002505551);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(49,0.0003670361);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(50,6.250617e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(51,0.0004031533);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(52,0.0002730849);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(53,0.0001333965);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(54,6.846627e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(55,8.328576e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(56,8.228482e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(57,0.0002123676);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(58,0.0001235906);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(59,6.073373e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(60,5.729097e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinContent(61,0.001819185);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(1,0.004566791);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(4,7.773946e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(5,0.0005161807);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(6,0.0006016952);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(7,0.0006652938);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(8,0.0006373556);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(9,0.0006933287);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(10,0.0005701114);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(11,0.0005697621);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(12,0.0004985383);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(13,0.0004585028);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(14,0.0004213053);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(15,0.0003910795);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(16,0.0003348719);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(17,0.0003061234);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(18,0.000298593);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(19,0.0002880595);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(20,0.0002836828);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(21,0.0003053794);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(22,0.0002664261);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(23,0.0002253);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(24,0.0001852094);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(25,0.0001958611);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(26,0.0001841051);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(27,0.0001533018);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(28,0.0001911813);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(29,0.0001386754);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(30,0.000196552);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(31,0.0001517192);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(32,0.0001012693);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(33,0.0001051415);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(34,0.0001016393);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(35,9.788528e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(36,0.0001221343);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(37,0.0001088118);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(38,0.0001373094);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(39,0.0001918689);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(40,6.213019e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(41,0.0001259448);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(42,6.697135e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(43,9.252087e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(44,8.552657e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(45,7.679172e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(46,5.843998e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(47,8.512861e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(48,6.956864e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(49,0.0001002352);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(50,2.730355e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(51,0.0001195265);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(52,8.477404e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(53,7.776084e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(54,3.923241e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(55,3.454386e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(56,3.121526e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(57,8.221578e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(58,7.480704e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(59,3.178272e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(60,2.84935e-05);
   pfIsoNeutrals03_mc_Z_EB__36->SetBinError(61,0.0002084116);
   pfIsoNeutrals03_mc_Z_EB__36->SetMinimum(4.447917e-07);
   pfIsoNeutrals03_mc_Z_EB__36->SetMaximum(4.628569);
   pfIsoNeutrals03_mc_Z_EB__36->SetEntries(78589);
   pfIsoNeutrals03_mc_Z_EB__36->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EB__36->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__36->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EB__36->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EB__36->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EB__36->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EB__36->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EB__36->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EB__36->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EB__36->Draw("PESAME");
   
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
   ratio->SetBinContent(1,1.190511);
   ratio->SetBinContent(4,0.5953223);
   ratio->SetBinContent(5,0.6707322);
   ratio->SetBinContent(6,0.6396285);
   ratio->SetBinContent(7,0.6600029);
   ratio->SetBinContent(8,0.5523145);
   ratio->SetBinContent(9,0.5573941);
   ratio->SetBinContent(10,0.6056301);
   ratio->SetBinContent(11,0.5823276);
   ratio->SetBinContent(12,0.6554146);
   ratio->SetBinContent(13,0.6648306);
   ratio->SetBinContent(14,0.5483392);
   ratio->SetBinContent(15,0.5588429);
   ratio->SetBinContent(16,0.5572689);
   ratio->SetBinContent(17,0.5448813);
   ratio->SetBinContent(18,0.5200714);
   ratio->SetBinContent(19,0.5571249);
   ratio->SetBinContent(20,0.4715958);
   ratio->SetBinContent(21,0.6021575);
   ratio->SetBinContent(22,0.5576633);
   ratio->SetBinContent(23,0.5700269);
   ratio->SetBinContent(24,0.4747133);
   ratio->SetBinContent(25,0.4943247);
   ratio->SetBinContent(26,0.5371113);
   ratio->SetBinContent(27,0.3738609);
   ratio->SetBinContent(28,0.5800436);
   ratio->SetBinContent(29,0.3849079);
   ratio->SetBinContent(30,0.466471);
   ratio->SetBinContent(31,0.506387);
   ratio->SetBinContent(32,0.4099074);
   ratio->SetBinContent(33,0.3535294);
   ratio->SetBinContent(34,0.3817863);
   ratio->SetBinContent(35,0.3433897);
   ratio->SetBinContent(36,0.4198681);
   ratio->SetBinContent(37,0.3806104);
   ratio->SetBinContent(38,0.6799783);
   ratio->SetBinContent(39,0.5596744);
   ratio->SetBinContent(40,0.2727592);
   ratio->SetBinContent(41,0.5771283);
   ratio->SetBinContent(42,0.3167782);
   ratio->SetBinContent(43,0.2436274);
   ratio->SetBinContent(44,0.5014496);
   ratio->SetBinContent(45,0.255023);
   ratio->SetBinContent(46,0.3113741);
   ratio->SetBinContent(47,0.4479957);
   ratio->SetBinContent(48,0.3418373);
   ratio->SetBinContent(49,0.5739648);
   ratio->SetBinContent(50,0.09827405);
   ratio->SetBinContent(51,0.7207713);
   ratio->SetBinContent(52,0.5262507);
   ratio->SetBinContent(53,0.2168352);
   ratio->SetBinContent(54,0.1485111);
   ratio->SetBinContent(55,0.1712089);
   ratio->SetBinContent(56,0.1518008);
   ratio->SetBinContent(57,0.5211433);
   ratio->SetBinContent(58,0.3187139);
   ratio->SetBinContent(59,0.1600099);
   ratio->SetBinContent(60,0.1348825);
   ratio->SetBinContent(61,0.1639266);
   ratio->SetBinError(1,0.01165421);
   ratio->SetBinError(4,0.1440394);
   ratio->SetBinError(5,0.04230852);
   ratio->SetBinError(6,0.03099016);
   ratio->SetBinError(7,0.03802331);
   ratio->SetBinError(8,0.03496579);
   ratio->SetBinError(9,0.03029535);
   ratio->SetBinError(10,0.03067943);
   ratio->SetBinError(11,0.03287261);
   ratio->SetBinError(12,0.03825335);
   ratio->SetBinError(13,0.04447499);
   ratio->SetBinError(14,0.06352842);
   ratio->SetBinError(15,0.07670454);
   ratio->SetBinError(16,0.04766504);
   ratio->SetBinError(17,0.0461136);
   ratio->SetBinError(18,0.05078748);
   ratio->SetBinError(19,0.0685535);
   ratio->SetBinError(20,0.06392951);
   ratio->SetBinError(21,0.05673565);
   ratio->SetBinError(22,0.05505134);
   ratio->SetBinError(23,0.05639427);
   ratio->SetBinError(24,0.05628214);
   ratio->SetBinError(25,0.06625337);
   ratio->SetBinError(26,0.07361069);
   ratio->SetBinError(27,0.08894034);
   ratio->SetBinError(28,0.08632724);
   ratio->SetBinError(29,0.07100488);
   ratio->SetBinError(30,0.09983547);
   ratio->SetBinError(31,0.09347822);
   ratio->SetBinError(32,0.06726977);
   ratio->SetBinError(33,0.06751569);
   ratio->SetBinError(34,0.07111444);
   ratio->SetBinError(35,0.08008028);
   ratio->SetBinError(36,0.09660927);
   ratio->SetBinError(37,0.09178292);
   ratio->SetBinError(38,0.1370185);
   ratio->SetBinError(39,0.1960657);
   ratio->SetBinError(40,0.06578981);
   ratio->SetBinError(41,0.1547459);
   ratio->SetBinError(42,0.08304975);
   ratio->SetBinError(43,0.09637057);
   ratio->SetBinError(44,0.1243322);
   ratio->SetBinError(45,0.09835906);
   ratio->SetBinError(46,0.08800102);
   ratio->SetBinError(47,0.1487869);
   ratio->SetBinError(48,0.101096);
   ratio->SetBinError(49,0.1726464);
   ratio->SetBinError(50,0.04504458);
   ratio->SetBinError(51,0.2301881);
   ratio->SetBinError(52,0.1739637);
   ratio->SetBinError(53,0.1310733);
   ratio->SetBinError(54,0.0872355);
   ratio->SetBinError(55,0.07338799);
   ratio->SetBinError(56,0.06198504);
   ratio->SetBinError(57,0.211095);
   ratio->SetBinError(58,0.200257);
   ratio->SetBinError(59,0.08683669);
   ratio->SetBinError(60,0.06929873);
   ratio->SetBinError(61,0.01919735);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1297.014);
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
   ratio->SetBinContent(1,1.190511);
   ratio->SetBinContent(4,0.5953223);
   ratio->SetBinContent(5,0.6707322);
   ratio->SetBinContent(6,0.6396285);
   ratio->SetBinContent(7,0.6600029);
   ratio->SetBinContent(8,0.5523145);
   ratio->SetBinContent(9,0.5573941);
   ratio->SetBinContent(10,0.6056301);
   ratio->SetBinContent(11,0.5823276);
   ratio->SetBinContent(12,0.6554146);
   ratio->SetBinContent(13,0.6648306);
   ratio->SetBinContent(14,0.5483392);
   ratio->SetBinContent(15,0.5588429);
   ratio->SetBinContent(16,0.5572689);
   ratio->SetBinContent(17,0.5448813);
   ratio->SetBinContent(18,0.5200714);
   ratio->SetBinContent(19,0.5571249);
   ratio->SetBinContent(20,0.4715958);
   ratio->SetBinContent(21,0.6021575);
   ratio->SetBinContent(22,0.5576633);
   ratio->SetBinContent(23,0.5700269);
   ratio->SetBinContent(24,0.4747133);
   ratio->SetBinContent(25,0.4943247);
   ratio->SetBinContent(26,0.5371113);
   ratio->SetBinContent(27,0.3738609);
   ratio->SetBinContent(28,0.5800436);
   ratio->SetBinContent(29,0.3849079);
   ratio->SetBinContent(30,0.466471);
   ratio->SetBinContent(31,0.506387);
   ratio->SetBinContent(32,0.4099074);
   ratio->SetBinContent(33,0.3535294);
   ratio->SetBinContent(34,0.3817863);
   ratio->SetBinContent(35,0.3433897);
   ratio->SetBinContent(36,0.4198681);
   ratio->SetBinContent(37,0.3806104);
   ratio->SetBinContent(38,0.6799783);
   ratio->SetBinContent(39,0.5596744);
   ratio->SetBinContent(40,0.2727592);
   ratio->SetBinContent(41,0.5771283);
   ratio->SetBinContent(42,0.3167782);
   ratio->SetBinContent(43,0.2436274);
   ratio->SetBinContent(44,0.5014496);
   ratio->SetBinContent(45,0.255023);
   ratio->SetBinContent(46,0.3113741);
   ratio->SetBinContent(47,0.4479957);
   ratio->SetBinContent(48,0.3418373);
   ratio->SetBinContent(49,0.5739648);
   ratio->SetBinContent(50,0.09827405);
   ratio->SetBinContent(51,0.7207713);
   ratio->SetBinContent(52,0.5262507);
   ratio->SetBinContent(53,0.2168352);
   ratio->SetBinContent(54,0.1485111);
   ratio->SetBinContent(55,0.1712089);
   ratio->SetBinContent(56,0.1518008);
   ratio->SetBinContent(57,0.5211433);
   ratio->SetBinContent(58,0.3187139);
   ratio->SetBinContent(59,0.1600099);
   ratio->SetBinContent(60,0.1348825);
   ratio->SetBinContent(61,0.1639266);
   ratio->SetBinError(1,0.01165421);
   ratio->SetBinError(4,0.1440394);
   ratio->SetBinError(5,0.04230852);
   ratio->SetBinError(6,0.03099016);
   ratio->SetBinError(7,0.03802331);
   ratio->SetBinError(8,0.03496579);
   ratio->SetBinError(9,0.03029535);
   ratio->SetBinError(10,0.03067943);
   ratio->SetBinError(11,0.03287261);
   ratio->SetBinError(12,0.03825335);
   ratio->SetBinError(13,0.04447499);
   ratio->SetBinError(14,0.06352842);
   ratio->SetBinError(15,0.07670454);
   ratio->SetBinError(16,0.04766504);
   ratio->SetBinError(17,0.0461136);
   ratio->SetBinError(18,0.05078748);
   ratio->SetBinError(19,0.0685535);
   ratio->SetBinError(20,0.06392951);
   ratio->SetBinError(21,0.05673565);
   ratio->SetBinError(22,0.05505134);
   ratio->SetBinError(23,0.05639427);
   ratio->SetBinError(24,0.05628214);
   ratio->SetBinError(25,0.06625337);
   ratio->SetBinError(26,0.07361069);
   ratio->SetBinError(27,0.08894034);
   ratio->SetBinError(28,0.08632724);
   ratio->SetBinError(29,0.07100488);
   ratio->SetBinError(30,0.09983547);
   ratio->SetBinError(31,0.09347822);
   ratio->SetBinError(32,0.06726977);
   ratio->SetBinError(33,0.06751569);
   ratio->SetBinError(34,0.07111444);
   ratio->SetBinError(35,0.08008028);
   ratio->SetBinError(36,0.09660927);
   ratio->SetBinError(37,0.09178292);
   ratio->SetBinError(38,0.1370185);
   ratio->SetBinError(39,0.1960657);
   ratio->SetBinError(40,0.06578981);
   ratio->SetBinError(41,0.1547459);
   ratio->SetBinError(42,0.08304975);
   ratio->SetBinError(43,0.09637057);
   ratio->SetBinError(44,0.1243322);
   ratio->SetBinError(45,0.09835906);
   ratio->SetBinError(46,0.08800102);
   ratio->SetBinError(47,0.1487869);
   ratio->SetBinError(48,0.101096);
   ratio->SetBinError(49,0.1726464);
   ratio->SetBinError(50,0.04504458);
   ratio->SetBinError(51,0.2301881);
   ratio->SetBinError(52,0.1739637);
   ratio->SetBinError(53,0.1310733);
   ratio->SetBinError(54,0.0872355);
   ratio->SetBinError(55,0.07338799);
   ratio->SetBinError(56,0.06198504);
   ratio->SetBinError(57,0.211095);
   ratio->SetBinError(58,0.200257);
   ratio->SetBinError(59,0.08683669);
   ratio->SetBinError(60,0.06929873);
   ratio->SetBinError(61,0.01919735);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1297.014);
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
