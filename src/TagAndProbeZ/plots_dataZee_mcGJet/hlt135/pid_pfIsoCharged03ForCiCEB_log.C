{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Sat Nov 29 17:30:49 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.0925526,6.525,0.8329734);
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
   
   TH1F *pfIsoCharged03_dataZ_EB__10 = new TH1F("pfIsoCharged03_dataZ_EB__10","pfIsoCharged03_dataZ_EB",60,0,6);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(1,0.7124858);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(2,0.001638025);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(3,0.02265557);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(4,0.02973571);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(5,0.02911694);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(6,0.02561788);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(7,0.02231345);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(8,0.01898954);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(9,0.01679857);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(10,0.01437534);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(11,0.01231541);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(12,0.01067897);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(13,0.009330563);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(14,0.008181264);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(15,0.007292388);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(16,0.006470835);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(17,0.005481739);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(18,0.004716692);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(19,0.004489483);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(20,0.003991618);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(21,0.003470964);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(22,0.003166436);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(23,0.00271851);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(24,0.002562931);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(25,0.002026471);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(26,0.001960008);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(27,0.001826782);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(28,0.001666331);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(29,0.001435691);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(30,0.001328547);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(31,0.0009951721);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(32,0.001068192);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(33,0.001003246);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(34,0.0008756597);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(35,0.0008000694);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(36,0.0007069674);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(37,0.0007297401);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(38,0.0006094528);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(39,0.0005781991);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(40,0.0005116317);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(41,0.000473318);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(42,0.0003948304);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(43,0.0003373911);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(44,0.0004031044);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(45,0.0003215972);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(46,0.0002976413);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(47,0.0002771247);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(48,0.0002956272);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(49,0.000248616);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(50,0.0002339172);
   pfIsoCharged03_dataZ_EB__10->SetBinError(1,0.001491311);
   pfIsoCharged03_dataZ_EB__10->SetBinError(2,7.123797e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(3,0.0002687087);
   pfIsoCharged03_dataZ_EB__10->SetBinError(4,0.0003068254);
   pfIsoCharged03_dataZ_EB__10->SetBinError(5,0.0003035561);
   pfIsoCharged03_dataZ_EB__10->SetBinError(6,0.0002830313);
   pfIsoCharged03_dataZ_EB__10->SetBinError(7,0.0002670258);
   pfIsoCharged03_dataZ_EB__10->SetBinError(8,0.0002449349);
   pfIsoCharged03_dataZ_EB__10->SetBinError(9,0.0002329134);
   pfIsoCharged03_dataZ_EB__10->SetBinError(10,0.0002159735);
   pfIsoCharged03_dataZ_EB__10->SetBinError(11,0.0001974449);
   pfIsoCharged03_dataZ_EB__10->SetBinError(12,0.0001843905);
   pfIsoCharged03_dataZ_EB__10->SetBinError(13,0.0001712135);
   pfIsoCharged03_dataZ_EB__10->SetBinError(14,0.0001603535);
   pfIsoCharged03_dataZ_EB__10->SetBinError(15,0.0001539219);
   pfIsoCharged03_dataZ_EB__10->SetBinError(16,0.0001473405);
   pfIsoCharged03_dataZ_EB__10->SetBinError(17,0.0001302639);
   pfIsoCharged03_dataZ_EB__10->SetBinError(18,0.000124198);
   pfIsoCharged03_dataZ_EB__10->SetBinError(19,0.0001216625);
   pfIsoCharged03_dataZ_EB__10->SetBinError(20,0.0001105718);
   pfIsoCharged03_dataZ_EB__10->SetBinError(21,0.0001048695);
   pfIsoCharged03_dataZ_EB__10->SetBinError(22,0.0001021167);
   pfIsoCharged03_dataZ_EB__10->SetBinError(23,9.277052e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(24,9.145725e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(25,7.932606e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(26,7.844618e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(27,7.656918e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(28,7.826718e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(29,6.990786e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(30,6.581622e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(31,5.314797e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(32,5.867949e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(33,6.41154e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(34,5.48333e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(35,4.950818e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(36,4.795009e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(37,5.004329e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(38,4.406431e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(39,4.205376e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(40,3.976997e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(41,3.854153e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(42,3.548272e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(43,3.184878e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(44,3.432259e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(45,3.127371e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(46,2.996769e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(47,3.160462e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(48,3.032113e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(49,2.781596e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(50,2.463021e-05);
   pfIsoCharged03_dataZ_EB__10->SetMinimum(8.937218e-09);
   pfIsoCharged03_dataZ_EB__10->SetMaximum(3.989921);
   pfIsoCharged03_dataZ_EB__10->SetEntries(533216);
   pfIsoCharged03_dataZ_EB__10->SetDirectory(0);
   pfIsoCharged03_dataZ_EB__10->SetStats(0);
   pfIsoCharged03_dataZ_EB__10->SetMarkerStyle(20);
   pfIsoCharged03_dataZ_EB__10->SetMarkerSize(0.7);
   pfIsoCharged03_dataZ_EB__10->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_dataZ_EB__10->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_dataZ_EB__10->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_dataZ_EB__10->Draw("PE");
   
   TH1F *pfIsoCharged03_mc_Signal_EB__11 = new TH1F("pfIsoCharged03_mc_Signal_EB__11","pfIsoCharged03_mc_Signal_EB",60,0,6);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(1,0.6994032);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(2,0.001368952);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(3,0.02138434);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(4,0.03163187);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(5,0.03237334);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(6,0.0260438);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(7,0.02361652);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(8,0.02065879);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(9,0.01793405);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(10,0.01614217);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(11,0.01421498);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(12,0.01085622);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(13,0.009916127);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(14,0.009175114);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(15,0.007488437);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(16,0.006185361);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(17,0.005779357);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(18,0.005124917);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(19,0.004529152);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(20,0.003754721);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(21,0.003210016);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(22,0.003381375);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(23,0.003990871);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(24,0.00312159);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(25,0.00208763);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(26,0.001983489);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(27,0.00171919);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(28,0.001592343);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(29,0.001493964);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(30,0.001225045);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(31,0.001158676);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(32,0.0009410444);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(33,0.000777059);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(34,0.0006371919);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(35,0.000707782);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(36,0.001406189);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(37,0.0005023851);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(38,0.0003762292);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(39,0.000395308);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(40,0.0002858573);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(41,0.0001661148);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(42,0.0001707103);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(43,0.0001586738);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(44,0.0001088045);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(45,0.0001947613);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(46,0.0001252423);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(47,0.0001037396);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(48,0.000244847);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(49,0.0001045582);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(50,4.783363e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(1,0.005384139);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(2,9.378096e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(3,0.0004202096);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(4,0.001106444);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(5,0.001077036);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(6,0.0004529848);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(7,0.0008663626);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(8,0.001160107);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(9,0.0008797295);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(10,0.001291477);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(11,0.001140367);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(12,0.0003153698);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(13,0.0002905569);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(14,0.0007229975);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(15,0.0002564993);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(16,0.00021677);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(17,0.0002223575);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(18,0.0002207743);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(19,0.0002139241);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(20,0.000180383);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(21,0.0001543027);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(22,0.0001926931);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(23,0.0008820487);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(24,0.0007748646);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(25,0.0001301791);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(26,0.0001465183);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(27,0.0001201884);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(28,0.000124802);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(29,0.0001297133);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(30,0.0001041895);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(31,0.0001009684);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(32,9.458538e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(33,7.810973e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(34,7.013725e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(35,8.341428e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(36,0.0007960023);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(37,7.498156e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(38,5.859252e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(39,6.438814e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(40,5.45872e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(41,4.691733e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(42,4.451796e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(43,4.261267e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(44,3.269436e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(45,5.034435e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(46,4.432961e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(47,3.979487e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(48,6.893316e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(49,4.146251e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(50,2.170924e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetEntries(237110);
   pfIsoCharged03_mc_Signal_EB__11->SetDirectory(0);
   pfIsoCharged03_mc_Signal_EB__11->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__11->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_EB__11->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *pfIsoCharged03_dataZ_EB__12 = new TH1F("pfIsoCharged03_dataZ_EB__12","pfIsoCharged03_dataZ_EB",60,0,6);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(1,0.7124858);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(2,0.001638025);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(3,0.02265557);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(4,0.02973571);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(5,0.02911694);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(6,0.02561788);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(7,0.02231345);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(8,0.01898954);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(9,0.01679857);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(10,0.01437534);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(11,0.01231541);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(12,0.01067897);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(13,0.009330563);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(14,0.008181264);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(15,0.007292388);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(16,0.006470835);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(17,0.005481739);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(18,0.004716692);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(19,0.004489483);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(20,0.003991618);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(21,0.003470964);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(22,0.003166436);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(23,0.00271851);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(24,0.002562931);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(25,0.002026471);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(26,0.001960008);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(27,0.001826782);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(28,0.001666331);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(29,0.001435691);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(30,0.001328547);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(31,0.0009951721);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(32,0.001068192);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(33,0.001003246);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(34,0.0008756597);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(35,0.0008000694);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(36,0.0007069674);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(37,0.0007297401);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(38,0.0006094528);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(39,0.0005781991);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(40,0.0005116317);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(41,0.000473318);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(42,0.0003948304);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(43,0.0003373911);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(44,0.0004031044);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(45,0.0003215972);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(46,0.0002976413);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(47,0.0002771247);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(48,0.0002956272);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(49,0.000248616);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(50,0.0002339172);
   pfIsoCharged03_dataZ_EB__12->SetBinError(1,0.001491311);
   pfIsoCharged03_dataZ_EB__12->SetBinError(2,7.123797e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(3,0.0002687087);
   pfIsoCharged03_dataZ_EB__12->SetBinError(4,0.0003068254);
   pfIsoCharged03_dataZ_EB__12->SetBinError(5,0.0003035561);
   pfIsoCharged03_dataZ_EB__12->SetBinError(6,0.0002830313);
   pfIsoCharged03_dataZ_EB__12->SetBinError(7,0.0002670258);
   pfIsoCharged03_dataZ_EB__12->SetBinError(8,0.0002449349);
   pfIsoCharged03_dataZ_EB__12->SetBinError(9,0.0002329134);
   pfIsoCharged03_dataZ_EB__12->SetBinError(10,0.0002159735);
   pfIsoCharged03_dataZ_EB__12->SetBinError(11,0.0001974449);
   pfIsoCharged03_dataZ_EB__12->SetBinError(12,0.0001843905);
   pfIsoCharged03_dataZ_EB__12->SetBinError(13,0.0001712135);
   pfIsoCharged03_dataZ_EB__12->SetBinError(14,0.0001603535);
   pfIsoCharged03_dataZ_EB__12->SetBinError(15,0.0001539219);
   pfIsoCharged03_dataZ_EB__12->SetBinError(16,0.0001473405);
   pfIsoCharged03_dataZ_EB__12->SetBinError(17,0.0001302639);
   pfIsoCharged03_dataZ_EB__12->SetBinError(18,0.000124198);
   pfIsoCharged03_dataZ_EB__12->SetBinError(19,0.0001216625);
   pfIsoCharged03_dataZ_EB__12->SetBinError(20,0.0001105718);
   pfIsoCharged03_dataZ_EB__12->SetBinError(21,0.0001048695);
   pfIsoCharged03_dataZ_EB__12->SetBinError(22,0.0001021167);
   pfIsoCharged03_dataZ_EB__12->SetBinError(23,9.277052e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(24,9.145725e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(25,7.932606e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(26,7.844618e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(27,7.656918e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(28,7.826718e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(29,6.990786e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(30,6.581622e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(31,5.314797e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(32,5.867949e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(33,6.41154e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(34,5.48333e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(35,4.950818e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(36,4.795009e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(37,5.004329e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(38,4.406431e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(39,4.205376e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(40,3.976997e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(41,3.854153e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(42,3.548272e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(43,3.184878e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(44,3.432259e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(45,3.127371e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(46,2.996769e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(47,3.160462e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(48,3.032113e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(49,2.781596e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(50,2.463021e-05);
   pfIsoCharged03_dataZ_EB__12->SetMinimum(8.937218e-09);
   pfIsoCharged03_dataZ_EB__12->SetMaximum(3.989921);
   pfIsoCharged03_dataZ_EB__12->SetEntries(533216);
   pfIsoCharged03_dataZ_EB__12->SetDirectory(0);
   pfIsoCharged03_dataZ_EB__12->SetStats(0);
   pfIsoCharged03_dataZ_EB__12->SetMarkerStyle(20);
   pfIsoCharged03_dataZ_EB__12->SetMarkerSize(0.7);
   pfIsoCharged03_dataZ_EB__12->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_dataZ_EB__12->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_dataZ_EB__12->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_dataZ_EB__12->Draw("PESAME");
   
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
   entry=leg->AddEntry("pfIsoCharged03_dataZ_EB","DataZ Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,1.018705);
   ratio->SetBinContent(2,1.196554);
   ratio->SetBinContent(3,1.059447);
   ratio->SetBinContent(4,0.9400553);
   ratio->SetBinContent(5,0.8994111);
   ratio->SetBinContent(6,0.9836458);
   ratio->SetBinContent(7,0.9448236);
   ratio->SetBinContent(8,0.9191989);
   ratio->SetBinContent(9,0.9366856);
   ratio->SetBinContent(10,0.8905457);
   ratio->SetBinContent(11,0.8663686);
   ratio->SetBinContent(12,0.9836731);
   ratio->SetBinContent(13,0.9409484);
   ratio->SetBinContent(14,0.8916798);
   ratio->SetBinContent(15,0.9738197);
   ratio->SetBinContent(16,1.046153);
   ratio->SetBinContent(17,0.9485033);
   ratio->SetBinContent(18,0.9203451);
   ratio->SetBinContent(19,0.9912415);
   ratio->SetBinContent(20,1.063093);
   ratio->SetBinContent(21,1.081292);
   ratio->SetBinContent(22,0.9364344);
   ratio->SetBinContent(23,0.6811821);
   ratio->SetBinContent(24,0.8210338);
   ratio->SetBinContent(25,0.9707038);
   ratio->SetBinContent(26,0.9881619);
   ratio->SetBinContent(27,1.062583);
   ratio->SetBinContent(28,1.046465);
   ratio->SetBinContent(29,0.9609941);
   ratio->SetBinContent(30,1.084489);
   ratio->SetBinContent(31,0.8588876);
   ratio->SetBinContent(32,1.135113);
   ratio->SetBinContent(33,1.291081);
   ratio->SetBinContent(34,1.374248);
   ratio->SetBinContent(35,1.13039);
   ratio->SetBinContent(36,0.502754);
   ratio->SetBinContent(37,1.452551);
   ratio->SetBinContent(38,1.619898);
   ratio->SetBinContent(39,1.462655);
   ratio->SetBinContent(40,1.789815);
   ratio->SetBinContent(41,2.849343);
   ratio->SetBinContent(42,2.312868);
   ratio->SetBinContent(43,2.126318);
   ratio->SetBinContent(44,3.704851);
   ratio->SetBinContent(45,1.651238);
   ratio->SetBinContent(46,2.376525);
   ratio->SetBinContent(47,2.671349);
   ratio->SetBinContent(48,1.207395);
   ratio->SetBinContent(49,2.377775);
   ratio->SetBinContent(50,4.890224);
   ratio->SetBinError(1,0.008126897);
   ratio->SetBinError(2,0.09709369);
   ratio->SetBinError(3,0.02431679);
   ratio->SetBinError(4,0.03428283);
   ratio->SetBinError(5,0.03135748);
   ratio->SetBinError(6,0.02026849);
   ratio->SetBinError(7,0.03645806);
   ratio->SetBinError(8,0.05296232);
   ratio->SetBinError(9,0.04774796);
   ratio->SetBinError(10,0.07249468);
   ratio->SetBinError(11,0.07087693);
   ratio->SetBinError(12,0.03324208);
   ratio->SetBinError(13,0.03253135);
   ratio->SetBinError(14,0.07240515);
   ratio->SetBinError(15,0.03918051);
   ratio->SetBinError(16,0.04372204);
   ratio->SetBinError(17,0.04289264);
   ratio->SetBinError(18,0.04646712);
   ratio->SetBinError(19,0.05397771);
   ratio->SetBinError(20,0.05895467);
   ratio->SetBinError(21,0.06139118);
   ratio->SetBinError(22,0.06131692);
   ratio->SetBinError(23,0.1523366);
   ratio->SetBinError(24,0.2058984);
   ratio->SetBinError(25,0.07146887);
   ratio->SetBinError(26,0.08302026);
   ratio->SetBinError(27,0.08661352);
   ratio->SetBinError(28,0.09561851);
   ratio->SetBinError(29,0.09566384);
   ratio->SetBinError(30,0.1067417);
   ratio->SetBinError(31,0.08778224);
   ratio->SetBinError(32,0.1300196);
   ratio->SetBinError(33,0.1537874);
   ratio->SetBinError(34,0.1740317);
   ratio->SetBinError(35,0.1504669);
   ratio->SetBinError(36,0.2866298);
   ratio->SetBinError(37,0.2385843);
   ratio->SetBinError(38,0.2781382);
   ratio->SetBinError(39,0.2609115);
   ratio->SetBinError(40,0.3690135);
   ratio->SetBinError(41,0.8375444);
   ratio->SetBinError(42,0.6379611);
   ratio->SetBinError(43,0.6052829);
   ratio->SetBinError(44,1.15709);
   ratio->SetBinError(45,0.4560378);
   ratio->SetBinError(46,0.8745432);
   ratio->SetBinError(47,1.069067);
   ratio->SetBinError(48,0.3617797);
   ratio->SetBinError(49,0.9797166);
   ratio->SetBinError(50,2.27837);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(386.48);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,6,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_dataZ_EB",60,0,6);
   ratio->SetBinContent(1,1.018705);
   ratio->SetBinContent(2,1.196554);
   ratio->SetBinContent(3,1.059447);
   ratio->SetBinContent(4,0.9400553);
   ratio->SetBinContent(5,0.8994111);
   ratio->SetBinContent(6,0.9836458);
   ratio->SetBinContent(7,0.9448236);
   ratio->SetBinContent(8,0.9191989);
   ratio->SetBinContent(9,0.9366856);
   ratio->SetBinContent(10,0.8905457);
   ratio->SetBinContent(11,0.8663686);
   ratio->SetBinContent(12,0.9836731);
   ratio->SetBinContent(13,0.9409484);
   ratio->SetBinContent(14,0.8916798);
   ratio->SetBinContent(15,0.9738197);
   ratio->SetBinContent(16,1.046153);
   ratio->SetBinContent(17,0.9485033);
   ratio->SetBinContent(18,0.9203451);
   ratio->SetBinContent(19,0.9912415);
   ratio->SetBinContent(20,1.063093);
   ratio->SetBinContent(21,1.081292);
   ratio->SetBinContent(22,0.9364344);
   ratio->SetBinContent(23,0.6811821);
   ratio->SetBinContent(24,0.8210338);
   ratio->SetBinContent(25,0.9707038);
   ratio->SetBinContent(26,0.9881619);
   ratio->SetBinContent(27,1.062583);
   ratio->SetBinContent(28,1.046465);
   ratio->SetBinContent(29,0.9609941);
   ratio->SetBinContent(30,1.084489);
   ratio->SetBinContent(31,0.8588876);
   ratio->SetBinContent(32,1.135113);
   ratio->SetBinContent(33,1.291081);
   ratio->SetBinContent(34,1.374248);
   ratio->SetBinContent(35,1.13039);
   ratio->SetBinContent(36,0.502754);
   ratio->SetBinContent(37,1.452551);
   ratio->SetBinContent(38,1.619898);
   ratio->SetBinContent(39,1.462655);
   ratio->SetBinContent(40,1.789815);
   ratio->SetBinContent(41,2.849343);
   ratio->SetBinContent(42,2.312868);
   ratio->SetBinContent(43,2.126318);
   ratio->SetBinContent(44,3.704851);
   ratio->SetBinContent(45,1.651238);
   ratio->SetBinContent(46,2.376525);
   ratio->SetBinContent(47,2.671349);
   ratio->SetBinContent(48,1.207395);
   ratio->SetBinContent(49,2.377775);
   ratio->SetBinContent(50,4.890224);
   ratio->SetBinError(1,0.008126897);
   ratio->SetBinError(2,0.09709369);
   ratio->SetBinError(3,0.02431679);
   ratio->SetBinError(4,0.03428283);
   ratio->SetBinError(5,0.03135748);
   ratio->SetBinError(6,0.02026849);
   ratio->SetBinError(7,0.03645806);
   ratio->SetBinError(8,0.05296232);
   ratio->SetBinError(9,0.04774796);
   ratio->SetBinError(10,0.07249468);
   ratio->SetBinError(11,0.07087693);
   ratio->SetBinError(12,0.03324208);
   ratio->SetBinError(13,0.03253135);
   ratio->SetBinError(14,0.07240515);
   ratio->SetBinError(15,0.03918051);
   ratio->SetBinError(16,0.04372204);
   ratio->SetBinError(17,0.04289264);
   ratio->SetBinError(18,0.04646712);
   ratio->SetBinError(19,0.05397771);
   ratio->SetBinError(20,0.05895467);
   ratio->SetBinError(21,0.06139118);
   ratio->SetBinError(22,0.06131692);
   ratio->SetBinError(23,0.1523366);
   ratio->SetBinError(24,0.2058984);
   ratio->SetBinError(25,0.07146887);
   ratio->SetBinError(26,0.08302026);
   ratio->SetBinError(27,0.08661352);
   ratio->SetBinError(28,0.09561851);
   ratio->SetBinError(29,0.09566384);
   ratio->SetBinError(30,0.1067417);
   ratio->SetBinError(31,0.08778224);
   ratio->SetBinError(32,0.1300196);
   ratio->SetBinError(33,0.1537874);
   ratio->SetBinError(34,0.1740317);
   ratio->SetBinError(35,0.1504669);
   ratio->SetBinError(36,0.2866298);
   ratio->SetBinError(37,0.2385843);
   ratio->SetBinError(38,0.2781382);
   ratio->SetBinError(39,0.2609115);
   ratio->SetBinError(40,0.3690135);
   ratio->SetBinError(41,0.8375444);
   ratio->SetBinError(42,0.6379611);
   ratio->SetBinError(43,0.6052829);
   ratio->SetBinError(44,1.15709);
   ratio->SetBinError(45,0.4560378);
   ratio->SetBinError(46,0.8745432);
   ratio->SetBinError(47,1.069067);
   ratio->SetBinError(48,0.3617797);
   ratio->SetBinError(49,0.9797166);
   ratio->SetBinError(50,2.27837);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(386.48);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
