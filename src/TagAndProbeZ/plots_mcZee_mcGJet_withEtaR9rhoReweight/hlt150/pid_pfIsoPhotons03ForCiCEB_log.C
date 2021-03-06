{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Fri Dec  5 12:52:01 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.02677405,6.525,0.2409664);
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
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(1,0.2059709);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(2,0.01257644);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(3,0.04470683);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(4,0.06808054);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(5,0.05393557);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(6,0.04965518);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(7,0.04760404);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(8,0.04520736);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(9,0.04208779);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(10,0.03915574);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(11,0.03623718);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(12,0.03349227);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(13,0.03045464);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(14,0.02781964);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(15,0.02524536);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(16,0.02346251);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(17,0.02071992);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(18,0.0189833);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(19,0.01728946);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(20,0.01577929);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(21,0.01402116);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(22,0.0127561);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(23,0.01135877);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(24,0.01046741);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(25,0.009385243);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(26,0.008248026);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(27,0.007788318);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(28,0.006753171);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(29,0.005952969);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(30,0.00546808);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(31,0.00507206);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(32,0.004446517);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(33,0.004233369);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(34,0.003600609);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(35,0.003281958);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(36,0.002883299);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(37,0.002623088);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(38,0.002499234);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(39,0.002111111);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(40,0.001993299);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(41,0.001757091);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(42,0.001609531);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(43,0.001465582);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(44,0.001328697);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(45,0.001154171);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(46,0.001168678);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(47,0.00106491);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(48,0.0009100511);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(49,0.0008003485);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(50,0.0007358597);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(51,0.0006823557);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(52,0.0005672696);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(53,0.0005363148);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(54,0.0004592648);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(55,0.0004797333);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(56,0.0004483641);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(57,0.0003801209);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(58,0.0003892886);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(59,0.0003154705);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(60,0.0003391866);
   pfIsoPhotons03_mc_Z_EB__34->SetBinContent(61,0.00493917);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(1,0.0005717204);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(2,0.000154018);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(3,0.0002804134);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(4,0.0003374843);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(5,0.0003043948);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(6,0.0002937934);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(7,0.0002885365);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(8,0.0002821412);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(9,0.000273397);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(10,0.0002646569);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(11,0.0002549029);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(12,0.0002458953);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(13,0.0002353567);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(14,0.0002251078);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(15,0.0002152013);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(16,0.0002081885);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(17,0.0001963142);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(18,0.0001887141);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(19,0.0001800359);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(20,0.000172673);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(21,0.0001625491);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(22,0.0001554165);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(23,0.0001477161);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(24,0.0001412982);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(25,0.0001341928);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(26,0.0001257204);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(27,0.0001220978);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(28,0.000114117);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(29,0.000106619);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(30,0.0001038647);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(31,9.946291e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(32,9.269025e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(33,9.101675e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(34,8.594756e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(35,8.018134e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(36,7.469183e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(37,7.175847e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(38,7.020344e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(39,6.488647e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(40,6.286823e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(41,5.857605e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(42,5.820372e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(43,5.384067e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(44,5.133775e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(45,4.866368e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(46,4.966978e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(47,4.598569e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(48,4.325305e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(49,3.97183e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(50,3.872962e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(51,3.621978e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(52,3.388704e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(53,3.269713e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(54,3.021016e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(55,3.071943e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(56,3.016256e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(57,2.649784e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(58,2.781793e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(59,2.527685e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(60,2.672225e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetBinError(61,9.830094e-05);
   pfIsoPhotons03_mc_Z_EB__34->SetMinimum(1.589867e-07);
   pfIsoPhotons03_mc_Z_EB__34->SetMaximum(1.153437);
   pfIsoPhotons03_mc_Z_EB__34->SetEntries(607274);
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
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(1,0.2059709);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(2,0.01257644);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(3,0.04470683);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(4,0.06808054);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(5,0.05393557);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(6,0.04965518);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(7,0.04760404);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(8,0.04520736);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(9,0.04208779);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(10,0.03915574);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(11,0.03623718);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(12,0.03349227);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(13,0.03045464);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(14,0.02781964);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(15,0.02524536);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(16,0.02346251);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(17,0.02071992);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(18,0.0189833);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(19,0.01728946);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(20,0.01577929);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(21,0.01402116);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(22,0.0127561);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(23,0.01135877);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(24,0.01046741);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(25,0.009385243);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(26,0.008248026);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(27,0.007788318);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(28,0.006753171);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(29,0.005952969);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(30,0.00546808);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(31,0.00507206);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(32,0.004446517);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(33,0.004233369);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(34,0.003600609);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(35,0.003281958);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(36,0.002883299);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(37,0.002623088);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(38,0.002499234);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(39,0.002111111);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(40,0.001993299);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(41,0.001757091);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(42,0.001609531);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(43,0.001465582);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(44,0.001328697);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(45,0.001154171);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(46,0.001168678);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(47,0.00106491);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(48,0.0009100511);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(49,0.0008003485);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(50,0.0007358597);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(51,0.0006823557);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(52,0.0005672696);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(53,0.0005363148);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(54,0.0004592648);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(55,0.0004797333);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(56,0.0004483641);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(57,0.0003801209);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(58,0.0003892886);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(59,0.0003154705);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(60,0.0003391866);
   pfIsoPhotons03_mc_Z_EB__36->SetBinContent(61,0.00493917);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(1,0.0005717204);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(2,0.000154018);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(3,0.0002804134);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(4,0.0003374843);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(5,0.0003043948);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(6,0.0002937934);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(7,0.0002885365);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(8,0.0002821412);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(9,0.000273397);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(10,0.0002646569);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(11,0.0002549029);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(12,0.0002458953);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(13,0.0002353567);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(14,0.0002251078);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(15,0.0002152013);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(16,0.0002081885);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(17,0.0001963142);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(18,0.0001887141);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(19,0.0001800359);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(20,0.000172673);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(21,0.0001625491);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(22,0.0001554165);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(23,0.0001477161);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(24,0.0001412982);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(25,0.0001341928);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(26,0.0001257204);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(27,0.0001220978);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(28,0.000114117);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(29,0.000106619);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(30,0.0001038647);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(31,9.946291e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(32,9.269025e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(33,9.101675e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(34,8.594756e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(35,8.018134e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(36,7.469183e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(37,7.175847e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(38,7.020344e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(39,6.488647e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(40,6.286823e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(41,5.857605e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(42,5.820372e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(43,5.384067e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(44,5.133775e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(45,4.866368e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(46,4.966978e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(47,4.598569e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(48,4.325305e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(49,3.97183e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(50,3.872962e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(51,3.621978e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(52,3.388704e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(53,3.269713e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(54,3.021016e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(55,3.071943e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(56,3.016256e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(57,2.649784e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(58,2.781793e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(59,2.527685e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(60,2.672225e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetBinError(61,9.830094e-05);
   pfIsoPhotons03_mc_Z_EB__36->SetMinimum(1.589867e-07);
   pfIsoPhotons03_mc_Z_EB__36->SetMaximum(1.153437);
   pfIsoPhotons03_mc_Z_EB__36->SetEntries(607274);
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
   
   TLegend *leg = new TLegend(-6.805647e+38,2.921139e-310,0,5.147744e-313,NULL,"brNDC");
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
   ratio->SetBinContent(1,0.9570671);
   ratio->SetBinContent(2,1.006332);
   ratio->SetBinContent(3,0.9947629);
   ratio->SetBinContent(4,1.009133);
   ratio->SetBinContent(5,1.030655);
   ratio->SetBinContent(6,1.027813);
   ratio->SetBinContent(7,1.014203);
   ratio->SetBinContent(8,1.036764);
   ratio->SetBinContent(9,1.031976);
   ratio->SetBinContent(10,1.045069);
   ratio->SetBinContent(11,1.029474);
   ratio->SetBinContent(12,1.057542);
   ratio->SetBinContent(13,1.04499);
   ratio->SetBinContent(14,1.036475);
   ratio->SetBinContent(15,0.994634);
   ratio->SetBinContent(16,1.052742);
   ratio->SetBinContent(17,1.001008);
   ratio->SetBinContent(18,1.031221);
   ratio->SetBinContent(19,1.035092);
   ratio->SetBinContent(20,1.013882);
   ratio->SetBinContent(21,1.01434);
   ratio->SetBinContent(22,0.9853061);
   ratio->SetBinContent(23,0.9885405);
   ratio->SetBinContent(24,0.9611292);
   ratio->SetBinContent(25,0.989943);
   ratio->SetBinContent(26,0.9288151);
   ratio->SetBinContent(27,1.030014);
   ratio->SetBinContent(28,0.9414774);
   ratio->SetBinContent(29,0.9138955);
   ratio->SetBinContent(30,0.9207668);
   ratio->SetBinContent(31,0.930914);
   ratio->SetBinContent(32,0.9677013);
   ratio->SetBinContent(33,1.004027);
   ratio->SetBinContent(34,0.9553783);
   ratio->SetBinContent(35,0.9063429);
   ratio->SetBinContent(36,0.9353248);
   ratio->SetBinContent(37,0.9643627);
   ratio->SetBinContent(38,0.9502354);
   ratio->SetBinContent(39,0.9387769);
   ratio->SetBinContent(40,0.818453);
   ratio->SetBinContent(41,0.8980598);
   ratio->SetBinContent(42,0.9718123);
   ratio->SetBinContent(43,0.9963145);
   ratio->SetBinContent(44,0.8969731);
   ratio->SetBinContent(45,0.8402019);
   ratio->SetBinContent(46,0.9374847);
   ratio->SetBinContent(47,1.003228);
   ratio->SetBinContent(48,0.921582);
   ratio->SetBinContent(49,0.7023082);
   ratio->SetBinContent(50,0.9139411);
   ratio->SetBinContent(51,0.5600479);
   ratio->SetBinContent(52,0.709848);
   ratio->SetBinContent(53,0.8599102);
   ratio->SetBinContent(54,0.8308443);
   ratio->SetBinContent(55,0.9291449);
   ratio->SetBinContent(56,0.8473594);
   ratio->SetBinContent(57,0.7519636);
   ratio->SetBinContent(58,0.9499187);
   ratio->SetBinContent(59,0.8252874);
   ratio->SetBinContent(60,0.9093555);
   ratio->SetBinContent(61,0.6203569);
   ratio->SetBinError(1,0.006629861);
   ratio->SetBinError(2,0.01769294);
   ratio->SetBinError(3,0.01453969);
   ratio->SetBinError(4,0.01028344);
   ratio->SetBinError(5,0.01091063);
   ratio->SetBinError(6,0.01128572);
   ratio->SetBinError(7,0.01146659);
   ratio->SetBinError(8,0.01203628);
   ratio->SetBinError(9,0.009573937);
   ratio->SetBinError(10,0.01011523);
   ratio->SetBinError(11,0.01033832);
   ratio->SetBinError(12,0.01105652);
   ratio->SetBinError(13,0.01640288);
   ratio->SetBinError(14,0.01722464);
   ratio->SetBinError(15,0.02387265);
   ratio->SetBinError(16,0.01307527);
   ratio->SetBinError(17,0.01899549);
   ratio->SetBinError(18,0.01446716);
   ratio->SetBinError(19,0.01480299);
   ratio->SetBinError(20,0.02773589);
   ratio->SetBinError(21,0.01632307);
   ratio->SetBinError(22,0.03984157);
   ratio->SetBinError(23,0.02622469);
   ratio->SetBinError(24,0.04378508);
   ratio->SetBinError(25,0.01936891);
   ratio->SetBinError(26,0.04069053);
   ratio->SetBinError(27,0.0223646);
   ratio->SetBinError(28,0.03675046);
   ratio->SetBinError(29,0.0462487);
   ratio->SetBinError(30,0.0554768);
   ratio->SetBinError(31,0.07047667);
   ratio->SetBinError(32,0.02721549);
   ratio->SetBinError(33,0.03064662);
   ratio->SetBinError(34,0.03027711);
   ratio->SetBinError(35,0.03059475);
   ratio->SetBinError(36,0.03457547);
   ratio->SetBinError(37,0.03548564);
   ratio->SetBinError(38,0.03666316);
   ratio->SetBinError(39,0.03942729);
   ratio->SetBinError(40,0.08340315);
   ratio->SetBinError(41,0.04093737);
   ratio->SetBinError(42,0.04758809);
   ratio->SetBinError(43,0.04808246);
   ratio->SetBinError(44,0.07913688);
   ratio->SetBinError(45,0.04687417);
   ratio->SetBinError(46,0.05240909);
   ratio->SetBinError(47,0.05715837);
   ratio->SetBinError(48,0.06133465);
   ratio->SetBinError(49,0.1640634);
   ratio->SetBinError(50,0.06800463);
   ratio->SetBinError(51,0.1535973);
   ratio->SetBinError(52,0.07159079);
   ratio->SetBinError(53,0.06764645);
   ratio->SetBinError(54,0.07040056);
   ratio->SetBinError(55,0.07940493);
   ratio->SetBinError(56,0.07748367);
   ratio->SetBinError(57,0.07029583);
   ratio->SetBinError(58,0.09517265);
   ratio->SetBinError(59,0.08656033);
   ratio->SetBinError(60,0.09313546);
   ratio->SetBinError(61,0.01747613);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(18341.17);
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
   ratio->SetBinContent(1,0.9570671);
   ratio->SetBinContent(2,1.006332);
   ratio->SetBinContent(3,0.9947629);
   ratio->SetBinContent(4,1.009133);
   ratio->SetBinContent(5,1.030655);
   ratio->SetBinContent(6,1.027813);
   ratio->SetBinContent(7,1.014203);
   ratio->SetBinContent(8,1.036764);
   ratio->SetBinContent(9,1.031976);
   ratio->SetBinContent(10,1.045069);
   ratio->SetBinContent(11,1.029474);
   ratio->SetBinContent(12,1.057542);
   ratio->SetBinContent(13,1.04499);
   ratio->SetBinContent(14,1.036475);
   ratio->SetBinContent(15,0.994634);
   ratio->SetBinContent(16,1.052742);
   ratio->SetBinContent(17,1.001008);
   ratio->SetBinContent(18,1.031221);
   ratio->SetBinContent(19,1.035092);
   ratio->SetBinContent(20,1.013882);
   ratio->SetBinContent(21,1.01434);
   ratio->SetBinContent(22,0.9853061);
   ratio->SetBinContent(23,0.9885405);
   ratio->SetBinContent(24,0.9611292);
   ratio->SetBinContent(25,0.989943);
   ratio->SetBinContent(26,0.9288151);
   ratio->SetBinContent(27,1.030014);
   ratio->SetBinContent(28,0.9414774);
   ratio->SetBinContent(29,0.9138955);
   ratio->SetBinContent(30,0.9207668);
   ratio->SetBinContent(31,0.930914);
   ratio->SetBinContent(32,0.9677013);
   ratio->SetBinContent(33,1.004027);
   ratio->SetBinContent(34,0.9553783);
   ratio->SetBinContent(35,0.9063429);
   ratio->SetBinContent(36,0.9353248);
   ratio->SetBinContent(37,0.9643627);
   ratio->SetBinContent(38,0.9502354);
   ratio->SetBinContent(39,0.9387769);
   ratio->SetBinContent(40,0.818453);
   ratio->SetBinContent(41,0.8980598);
   ratio->SetBinContent(42,0.9718123);
   ratio->SetBinContent(43,0.9963145);
   ratio->SetBinContent(44,0.8969731);
   ratio->SetBinContent(45,0.8402019);
   ratio->SetBinContent(46,0.9374847);
   ratio->SetBinContent(47,1.003228);
   ratio->SetBinContent(48,0.921582);
   ratio->SetBinContent(49,0.7023082);
   ratio->SetBinContent(50,0.9139411);
   ratio->SetBinContent(51,0.5600479);
   ratio->SetBinContent(52,0.709848);
   ratio->SetBinContent(53,0.8599102);
   ratio->SetBinContent(54,0.8308443);
   ratio->SetBinContent(55,0.9291449);
   ratio->SetBinContent(56,0.8473594);
   ratio->SetBinContent(57,0.7519636);
   ratio->SetBinContent(58,0.9499187);
   ratio->SetBinContent(59,0.8252874);
   ratio->SetBinContent(60,0.9093555);
   ratio->SetBinContent(61,0.6203569);
   ratio->SetBinError(1,0.006629861);
   ratio->SetBinError(2,0.01769294);
   ratio->SetBinError(3,0.01453969);
   ratio->SetBinError(4,0.01028344);
   ratio->SetBinError(5,0.01091063);
   ratio->SetBinError(6,0.01128572);
   ratio->SetBinError(7,0.01146659);
   ratio->SetBinError(8,0.01203628);
   ratio->SetBinError(9,0.009573937);
   ratio->SetBinError(10,0.01011523);
   ratio->SetBinError(11,0.01033832);
   ratio->SetBinError(12,0.01105652);
   ratio->SetBinError(13,0.01640288);
   ratio->SetBinError(14,0.01722464);
   ratio->SetBinError(15,0.02387265);
   ratio->SetBinError(16,0.01307527);
   ratio->SetBinError(17,0.01899549);
   ratio->SetBinError(18,0.01446716);
   ratio->SetBinError(19,0.01480299);
   ratio->SetBinError(20,0.02773589);
   ratio->SetBinError(21,0.01632307);
   ratio->SetBinError(22,0.03984157);
   ratio->SetBinError(23,0.02622469);
   ratio->SetBinError(24,0.04378508);
   ratio->SetBinError(25,0.01936891);
   ratio->SetBinError(26,0.04069053);
   ratio->SetBinError(27,0.0223646);
   ratio->SetBinError(28,0.03675046);
   ratio->SetBinError(29,0.0462487);
   ratio->SetBinError(30,0.0554768);
   ratio->SetBinError(31,0.07047667);
   ratio->SetBinError(32,0.02721549);
   ratio->SetBinError(33,0.03064662);
   ratio->SetBinError(34,0.03027711);
   ratio->SetBinError(35,0.03059475);
   ratio->SetBinError(36,0.03457547);
   ratio->SetBinError(37,0.03548564);
   ratio->SetBinError(38,0.03666316);
   ratio->SetBinError(39,0.03942729);
   ratio->SetBinError(40,0.08340315);
   ratio->SetBinError(41,0.04093737);
   ratio->SetBinError(42,0.04758809);
   ratio->SetBinError(43,0.04808246);
   ratio->SetBinError(44,0.07913688);
   ratio->SetBinError(45,0.04687417);
   ratio->SetBinError(46,0.05240909);
   ratio->SetBinError(47,0.05715837);
   ratio->SetBinError(48,0.06133465);
   ratio->SetBinError(49,0.1640634);
   ratio->SetBinError(50,0.06800463);
   ratio->SetBinError(51,0.1535973);
   ratio->SetBinError(52,0.07159079);
   ratio->SetBinError(53,0.06764645);
   ratio->SetBinError(54,0.07040056);
   ratio->SetBinError(55,0.07940493);
   ratio->SetBinError(56,0.07748367);
   ratio->SetBinError(57,0.07029583);
   ratio->SetBinError(58,0.09517265);
   ratio->SetBinError(59,0.08656033);
   ratio->SetBinError(60,0.09313546);
   ratio->SetBinError(61,0.01747613);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(18341.17);
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
