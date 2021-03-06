{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Tue Dec  2 08:48:34 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.03290924,6.525,0.2961831);
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
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(1,0.25298);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(2,0.00252533);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(3,0.03136862);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(4,0.07669891);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(5,0.05379456);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(6,0.04751937);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(7,0.04552754);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(8,0.04310775);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(9,0.03971647);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(10,0.03712897);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(11,0.03480233);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(12,0.03182082);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(13,0.02864942);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(14,0.02619895);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(15,0.0238841);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(16,0.02194756);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(17,0.01959947);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(18,0.01776596);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(19,0.01615588);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(20,0.01476308);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(21,0.01306125);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(22,0.01223378);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(23,0.010867);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(24,0.009981814);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(25,0.008524808);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(26,0.007932787);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(27,0.007574493);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(28,0.006501172);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(29,0.005640313);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(30,0.005226329);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(31,0.004860899);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(32,0.004216455);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(33,0.004098789);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(34,0.003396634);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(35,0.003242058);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(36,0.002736893);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(37,0.002297736);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(38,0.002251782);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(39,0.002095453);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(40,0.001807837);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(41,0.001684819);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(42,0.001433409);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(43,0.001318794);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(44,0.001278826);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(45,0.001214122);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(46,0.001035914);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(47,0.0009637883);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(48,0.000807549);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(49,0.0007195115);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(50,0.0006502398);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(51,0.0006875543);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(52,0.0005378246);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(53,0.0004955753);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(54,0.0004550593);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(55,0.0005055004);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(56,0.0003949337);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(57,0.0004100467);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(58,0.0003643385);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(59,0.0002709698);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(60,0.000267871);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(61,0.004618643);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(1,0.000891266);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(2,9.012627e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(3,0.0003166105);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(4,0.0004970081);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(5,0.0004173541);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(6,0.0003920113);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(7,0.0003850384);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(8,0.0003738968);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(9,0.0003606671);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(10,0.0003493213);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(11,0.0003400603);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(12,0.000327156);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(13,0.0003086801);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(14,0.0002958741);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(15,0.0002815419);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(16,0.0002706263);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(17,0.0002555001);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(18,0.0002434417);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(19,0.0002309816);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(20,0.0002240109);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(21,0.0002104114);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(22,0.0002028072);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(23,0.0001936897);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(24,0.0001857726);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(25,0.0001696207);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(26,0.0001658725);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(27,0.0001633263);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(28,0.0001499815);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(29,0.0001394111);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(30,0.0001339574);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(31,0.0001279149);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(32,0.0001201376);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(33,0.0001184365);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(34,0.000107496);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(35,0.0001045762);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(36,9.744073e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(37,8.73826e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(38,8.774066e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(39,8.610138e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(40,7.770131e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(41,7.579327e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(42,6.905684e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(43,6.686202e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(44,6.929184e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(45,6.609877e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(46,5.635724e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(47,5.797898e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(48,5.327802e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(49,4.759626e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(50,4.725086e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(51,4.852801e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(52,4.34256e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(53,4.161078e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(54,3.87426e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(55,4.161391e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(56,3.889394e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(57,3.825486e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(58,3.314346e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(59,2.99848e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(60,2.921552e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(61,0.0001243822);
   pfIsoPhotons03_mc_Z_EB__34->SetMinimum(1.235805e-07);
   pfIsoPhotons03_mc_Z_EB__34->SetMaximum(1.416688);
   pfIsoPhotons03_mc_Z_EB__34->SetEntries(800838);
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
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(1,0.2152105);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(2,0.0124973);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(3,0.04494219);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(4,0.06746436);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(5,0.05233137);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(6,0.04831151);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(7,0.04693738);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(8,0.04360428);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(9,0.04078367);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(10,0.03746713);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(11,0.03519969);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(12,0.03166993);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(13,0.02914347);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(14,0.02684063);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(15,0.02538156);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(16,0.02228705);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(17,0.02069906);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(18,0.01840858);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(19,0.0167033);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(20,0.01556323);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(21,0.01382294);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(22,0.01294633);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(23,0.01149044);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(24,0.01089074);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(25,0.009480589);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(26,0.00888016);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(27,0.007561374);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(28,0.007172951);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(29,0.006513839);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(30,0.005938616);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(31,0.005448473);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(32,0.004594928);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(33,0.00421639);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(34,0.003768779);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(35,0.0036211);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(36,0.003082671);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(37,0.002720023);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(38,0.002630121);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(39,0.002248789);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(40,0.002435447);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(41,0.001956542);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(42,0.001656216);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(43,0.001471003);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(44,0.001481312);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(45,0.001373683);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(46,0.00124661);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(47,0.001061484);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(48,0.0009874878);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(49,0.001139597);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(50,0.00080515);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(51,0.001218388);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(52,0.0007991423);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(53,0.000623687);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(54,0.0005527688);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(55,0.000516317);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(56,0.000529131);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(57,0.0005055044);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(58,0.0004098126);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(59,0.0003822553);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(60,0.0003729968);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinContent(61,0.00796182);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(1,0.001365906);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(2,0.0001576519);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(3,0.0005933273);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(4,0.0006006617);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(5,0.000468694);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(6,0.0004468762);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(7,0.0004479705);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(8,0.0004268524);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(9,0.0002701332);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(10,0.0002595744);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(11,0.0002522795);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(12,0.0002357285);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(13,0.0003981711);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(14,0.0003896042);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(15,0.0005694777);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(16,0.0001936886);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(17,0.00034033);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(18,0.0001822288);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(19,0.0001637356);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(20,0.0003902021);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(21,0.000154274);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(22,0.0004991655);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(23,0.0002656883);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(24,0.0004738556);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(25,0.0001266201);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(26,0.0003647252);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(27,0.0001135922);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(28,0.0002523992);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(29,0.0003083051);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(30,0.0003395591);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(31,0.0003984094);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(32,8.674715e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(33,9.1356e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(34,7.856284e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(35,8.435023e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(36,8.129353e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(37,6.693915e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(38,6.956754e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(39,6.436398e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(40,0.000235994);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(41,6.082833e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(42,5.468571e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(43,4.603726e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(44,0.0001174921);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(45,5.018527e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(46,4.527325e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(47,3.945154e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(48,4.60053e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(49,0.0002601403);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(50,4.23486e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(51,0.0003278338);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(52,6.493713e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(53,3.100664e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(54,2.952469e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(55,2.92212e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(56,3.277169e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(57,3.14866e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(58,2.877981e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(59,2.587214e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(60,2.441029e-05);
   pfIsoPhotons03_mc_Signal_EB__35->SetBinError(61,0.0001587396);
   pfIsoPhotons03_mc_Signal_EB__35->SetEntries(2269836);
   pfIsoPhotons03_mc_Signal_EB__35->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EB__35->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EB__35->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EB__35->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EB__35->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EB__35->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_EB__36 = new TH1F("pfIsoPhotons03_mc_Z_EB__36","pfIsoPhotons03_mc_Z_EB",60,0,6);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(1,0.25298);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(2,0.00252533);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(3,0.03136862);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(4,0.07669891);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(5,0.05379456);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(6,0.04751937);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(7,0.04552754);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(8,0.04310775);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(9,0.03971647);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(10,0.03712897);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(11,0.03480233);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(12,0.03182082);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(13,0.02864942);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(14,0.02619895);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(15,0.0238841);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(16,0.02194756);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(17,0.01959947);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(18,0.01776596);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(19,0.01615588);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(20,0.01476308);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(21,0.01306125);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(22,0.01223378);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(23,0.010867);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(24,0.009981814);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(25,0.008524808);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(26,0.007932787);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(27,0.007574493);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(28,0.006501172);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(29,0.005640313);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(30,0.005226329);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(31,0.004860899);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(32,0.004216455);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(33,0.004098789);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(34,0.003396634);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(35,0.003242058);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(36,0.002736893);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(37,0.002297736);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(38,0.002251782);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(39,0.002095453);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(40,0.001807837);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(41,0.001684819);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(42,0.001433409);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(43,0.001318794);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(44,0.001278826);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(45,0.001214122);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(46,0.001035914);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(47,0.0009637883);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(48,0.000807549);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(49,0.0007195115);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(50,0.0006502398);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(51,0.0006875543);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(52,0.0005378246);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(53,0.0004955753);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(54,0.0004550593);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(55,0.0005055004);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(56,0.0003949337);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(57,0.0004100467);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(58,0.0003643385);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(59,0.0002709698);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(60,0.000267871);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(61,0.004618643);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(1,0.000891266);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(2,9.012627e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(3,0.0003166105);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(4,0.0004970081);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(5,0.0004173541);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(6,0.0003920113);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(7,0.0003850384);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(8,0.0003738968);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(9,0.0003606671);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(10,0.0003493213);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(11,0.0003400603);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(12,0.000327156);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(13,0.0003086801);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(14,0.0002958741);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(15,0.0002815419);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(16,0.0002706263);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(17,0.0002555001);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(18,0.0002434417);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(19,0.0002309816);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(20,0.0002240109);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(21,0.0002104114);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(22,0.0002028072);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(23,0.0001936897);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(24,0.0001857726);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(25,0.0001696207);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(26,0.0001658725);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(27,0.0001633263);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(28,0.0001499815);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(29,0.0001394111);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(30,0.0001339574);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(31,0.0001279149);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(32,0.0001201376);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(33,0.0001184365);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(34,0.000107496);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(35,0.0001045762);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(36,9.744073e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(37,8.73826e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(38,8.774066e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(39,8.610138e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(40,7.770131e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(41,7.579327e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(42,6.905684e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(43,6.686202e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(44,6.929184e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(45,6.609877e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(46,5.635724e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(47,5.797898e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(48,5.327802e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(49,4.759626e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(50,4.725086e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(51,4.852801e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(52,4.34256e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(53,4.161078e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(54,3.87426e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(55,4.161391e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(56,3.889394e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(57,3.825486e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(58,3.314346e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(59,2.99848e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(60,2.921552e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(61,0.0001243822);
   pfIsoPhotons03_mc_Z_EB__36->SetMinimum(1.235805e-07);
   pfIsoPhotons03_mc_Z_EB__36->SetMaximum(1.416688);
   pfIsoPhotons03_mc_Z_EB__36->SetEntries(800838);
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
   
   TLegend *leg = new TLegend(-6.805647e+38,2.921139e-310,1.897212e-321,9.48606e-322,NULL,"brNDC");
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
   ratio->SetBinContent(1,1.1755);
   ratio->SetBinContent(2,0.20207);
   ratio->SetBinContent(3,0.6979771);
   ratio->SetBinContent(4,1.13688);
   ratio->SetBinContent(5,1.02796);
   ratio->SetBinContent(6,0.9836035);
   ratio->SetBinContent(7,0.9699634);
   ratio->SetBinContent(8,0.9886128);
   ratio->SetBinContent(9,0.9738326);
   ratio->SetBinContent(10,0.9909745);
   ratio->SetBinContent(11,0.9887112);
   ratio->SetBinContent(12,1.004764);
   ratio->SetBinContent(13,0.9830475);
   ratio->SetBinContent(14,0.9760929);
   ratio->SetBinContent(15,0.941002);
   ratio->SetBinContent(16,0.9847673);
   ratio->SetBinContent(17,0.9468774);
   ratio->SetBinContent(18,0.9650913);
   ratio->SetBinContent(19,0.9672266);
   ratio->SetBinContent(20,0.9485869);
   ratio->SetBinContent(21,0.9448967);
   ratio->SetBinContent(22,0.9449611);
   ratio->SetBinContent(23,0.9457425);
   ratio->SetBinContent(24,0.9165417);
   ratio->SetBinContent(25,0.8991855);
   ratio->SetBinContent(26,0.8933158);
   ratio->SetBinContent(27,1.001735);
   ratio->SetBinContent(28,0.9063455);
   ratio->SetBinContent(29,0.8658969);
   ratio->SetBinContent(30,0.8800585);
   ratio->SetBinContent(31,0.8921581);
   ratio->SetBinContent(32,0.9176325);
   ratio->SetBinContent(33,0.9721087);
   ratio->SetBinContent(34,0.9012558);
   ratio->SetBinContent(35,0.8953241);
   ratio->SetBinContent(36,0.8878316);
   ratio->SetBinContent(37,0.844749);
   ratio->SetBinContent(38,0.8561517);
   ratio->SetBinContent(39,0.9318138);
   ratio->SetBinContent(40,0.7423018);
   ratio->SetBinContent(41,0.861121);
   ratio->SetBinContent(42,0.8654723);
   ratio->SetBinContent(43,0.8965271);
   ratio->SetBinContent(44,0.8633063);
   ratio->SetBinContent(45,0.8838442);
   ratio->SetBinContent(46,0.8309846);
   ratio->SetBinContent(47,0.9079635);
   ratio->SetBinContent(48,0.8177812);
   ratio->SetBinContent(49,0.6313735);
   ratio->SetBinContent(50,0.8076008);
   ratio->SetBinContent(51,0.5643147);
   ratio->SetBinContent(52,0.6730023);
   ratio->SetBinContent(53,0.7945897);
   ratio->SetBinContent(54,0.8232362);
   ratio->SetBinContent(55,0.9790505);
   ratio->SetBinContent(56,0.7463818);
   ratio->SetBinContent(57,0.8111635);
   ratio->SetBinContent(58,0.8890368);
   ratio->SetBinContent(59,0.7088712);
   ratio->SetBinContent(60,0.718159);
   ratio->SetBinContent(61,0.5800989);
   ratio->SetBinError(1,0.00853306);
   ratio->SetBinError(2,0.007648911);
   ratio->SetBinError(3,0.01159916);
   ratio->SetBinError(4,0.01251915);
   ratio->SetBinError(5,0.01218061);
   ratio->SetBinError(6,0.01219093);
   ratio->SetBinError(7,0.01236896);
   ratio->SetBinError(8,0.01293003);
   ratio->SetBinError(9,0.01094585);
   ratio->SetBinError(10,0.01157849);
   ratio->SetBinError(11,0.0119811);
   ratio->SetBinError(12,0.01275321);
   ratio->SetBinError(13,0.01710474);
   ratio->SetBinError(14,0.01795158);
   ratio->SetBinError(15,0.02384948);
   ratio->SetBinError(16,0.01485565);
   ratio->SetBinError(17,0.01986801);
   ratio->SetBinError(18,0.01631424);
   ratio->SetBinError(19,0.01676672);
   ratio->SetBinError(20,0.02779942);
   ratio->SetBinError(21,0.01851806);
   ratio->SetBinError(22,0.03965938);
   ratio->SetBinError(23,0.02761074);
   ratio->SetBinError(24,0.04337374);
   ratio->SetBinError(25,0.02154817);
   ratio->SetBinError(26,0.04117129);
   ratio->SetBinError(27,0.02632544);
   ratio->SetBinError(28,0.03813541);
   ratio->SetBinError(29,0.04623539);
   ratio->SetBinError(30,0.05514466);
   ratio->SetBinError(31,0.06933323);
   ratio->SetBinError(32,0.03136422);
   ratio->SetBinError(33,0.03510918);
   ratio->SetBinError(34,0.03415422);
   ratio->SetBinError(35,0.03562301);
   ratio->SetBinError(36,0.03933593);
   ratio->SetBinError(37,0.03826547);
   ratio->SetBinError(38,0.04032001);
   ratio->SetBinError(39,0.04666103);
   ratio->SetBinError(40,0.07868697);
   ratio->SetBinError(41,0.04708931);
   ratio->SetBinError(42,0.0505484);
   ratio->SetBinError(43,0.05341599);
   ratio->SetBinError(44,0.08292669);
   ratio->SetBinError(45,0.05794795);
   ratio->SetBinError(46,0.05435593);
   ratio->SetBinError(47,0.06420435);
   ratio->SetBinError(48,0.06604898);
   ratio->SetBinError(49,0.1500557);
   ratio->SetBinError(50,0.07244556);
   ratio->SetBinError(51,0.1569782);
   ratio->SetBinError(52,0.07709443);
   ratio->SetBinError(53,0.07753519);
   ratio->SetBinError(54,0.08273942);
   ratio->SetBinError(55,0.09780706);
   ratio->SetBinError(56,0.08683303);
   ratio->SetBinError(57,0.09099319);
   ratio->SetBinError(58,0.1021701);
   ratio->SetBinError(59,0.09195135);
   ratio->SetBinError(60,0.09134517);
   ratio->SetBinError(61,0.01943771);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(14434.7);
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
   ratio->SetBinContent(1,1.1755);
   ratio->SetBinContent(2,0.20207);
   ratio->SetBinContent(3,0.6979771);
   ratio->SetBinContent(4,1.13688);
   ratio->SetBinContent(5,1.02796);
   ratio->SetBinContent(6,0.9836035);
   ratio->SetBinContent(7,0.9699634);
   ratio->SetBinContent(8,0.9886128);
   ratio->SetBinContent(9,0.9738326);
   ratio->SetBinContent(10,0.9909745);
   ratio->SetBinContent(11,0.9887112);
   ratio->SetBinContent(12,1.004764);
   ratio->SetBinContent(13,0.9830475);
   ratio->SetBinContent(14,0.9760929);
   ratio->SetBinContent(15,0.941002);
   ratio->SetBinContent(16,0.9847673);
   ratio->SetBinContent(17,0.9468774);
   ratio->SetBinContent(18,0.9650913);
   ratio->SetBinContent(19,0.9672266);
   ratio->SetBinContent(20,0.9485869);
   ratio->SetBinContent(21,0.9448967);
   ratio->SetBinContent(22,0.9449611);
   ratio->SetBinContent(23,0.9457425);
   ratio->SetBinContent(24,0.9165417);
   ratio->SetBinContent(25,0.8991855);
   ratio->SetBinContent(26,0.8933158);
   ratio->SetBinContent(27,1.001735);
   ratio->SetBinContent(28,0.9063455);
   ratio->SetBinContent(29,0.8658969);
   ratio->SetBinContent(30,0.8800585);
   ratio->SetBinContent(31,0.8921581);
   ratio->SetBinContent(32,0.9176325);
   ratio->SetBinContent(33,0.9721087);
   ratio->SetBinContent(34,0.9012558);
   ratio->SetBinContent(35,0.8953241);
   ratio->SetBinContent(36,0.8878316);
   ratio->SetBinContent(37,0.844749);
   ratio->SetBinContent(38,0.8561517);
   ratio->SetBinContent(39,0.9318138);
   ratio->SetBinContent(40,0.7423018);
   ratio->SetBinContent(41,0.861121);
   ratio->SetBinContent(42,0.8654723);
   ratio->SetBinContent(43,0.8965271);
   ratio->SetBinContent(44,0.8633063);
   ratio->SetBinContent(45,0.8838442);
   ratio->SetBinContent(46,0.8309846);
   ratio->SetBinContent(47,0.9079635);
   ratio->SetBinContent(48,0.8177812);
   ratio->SetBinContent(49,0.6313735);
   ratio->SetBinContent(50,0.8076008);
   ratio->SetBinContent(51,0.5643147);
   ratio->SetBinContent(52,0.6730023);
   ratio->SetBinContent(53,0.7945897);
   ratio->SetBinContent(54,0.8232362);
   ratio->SetBinContent(55,0.9790505);
   ratio->SetBinContent(56,0.7463818);
   ratio->SetBinContent(57,0.8111635);
   ratio->SetBinContent(58,0.8890368);
   ratio->SetBinContent(59,0.7088712);
   ratio->SetBinContent(60,0.718159);
   ratio->SetBinContent(61,0.5800989);
   ratio->SetBinError(1,0.00853306);
   ratio->SetBinError(2,0.007648911);
   ratio->SetBinError(3,0.01159916);
   ratio->SetBinError(4,0.01251915);
   ratio->SetBinError(5,0.01218061);
   ratio->SetBinError(6,0.01219093);
   ratio->SetBinError(7,0.01236896);
   ratio->SetBinError(8,0.01293003);
   ratio->SetBinError(9,0.01094585);
   ratio->SetBinError(10,0.01157849);
   ratio->SetBinError(11,0.0119811);
   ratio->SetBinError(12,0.01275321);
   ratio->SetBinError(13,0.01710474);
   ratio->SetBinError(14,0.01795158);
   ratio->SetBinError(15,0.02384948);
   ratio->SetBinError(16,0.01485565);
   ratio->SetBinError(17,0.01986801);
   ratio->SetBinError(18,0.01631424);
   ratio->SetBinError(19,0.01676672);
   ratio->SetBinError(20,0.02779942);
   ratio->SetBinError(21,0.01851806);
   ratio->SetBinError(22,0.03965938);
   ratio->SetBinError(23,0.02761074);
   ratio->SetBinError(24,0.04337374);
   ratio->SetBinError(25,0.02154817);
   ratio->SetBinError(26,0.04117129);
   ratio->SetBinError(27,0.02632544);
   ratio->SetBinError(28,0.03813541);
   ratio->SetBinError(29,0.04623539);
   ratio->SetBinError(30,0.05514466);
   ratio->SetBinError(31,0.06933323);
   ratio->SetBinError(32,0.03136422);
   ratio->SetBinError(33,0.03510918);
   ratio->SetBinError(34,0.03415422);
   ratio->SetBinError(35,0.03562301);
   ratio->SetBinError(36,0.03933593);
   ratio->SetBinError(37,0.03826547);
   ratio->SetBinError(38,0.04032001);
   ratio->SetBinError(39,0.04666103);
   ratio->SetBinError(40,0.07868697);
   ratio->SetBinError(41,0.04708931);
   ratio->SetBinError(42,0.0505484);
   ratio->SetBinError(43,0.05341599);
   ratio->SetBinError(44,0.08292669);
   ratio->SetBinError(45,0.05794795);
   ratio->SetBinError(46,0.05435593);
   ratio->SetBinError(47,0.06420435);
   ratio->SetBinError(48,0.06604898);
   ratio->SetBinError(49,0.1500557);
   ratio->SetBinError(50,0.07244556);
   ratio->SetBinError(51,0.1569782);
   ratio->SetBinError(52,0.07709443);
   ratio->SetBinError(53,0.07753519);
   ratio->SetBinError(54,0.08273942);
   ratio->SetBinError(55,0.09780706);
   ratio->SetBinError(56,0.08683303);
   ratio->SetBinError(57,0.09099319);
   ratio->SetBinError(58,0.1021701);
   ratio->SetBinError(59,0.09195135);
   ratio->SetBinError(60,0.09134517);
   ratio->SetBinError(61,0.01943771);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(14434.7);
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
