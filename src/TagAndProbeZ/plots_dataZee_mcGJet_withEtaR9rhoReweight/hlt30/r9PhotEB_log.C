{
//=========Macro generated from canvas: r9Phot/r9Phot
//=========  (Tue Dec  2 08:45:00 2014) by ROOT version5.32/00
   TCanvas *r9Phot = new TCanvas("r9Phot", "r9Phot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   r9Phot->SetHighLightColor(2);
   r9Phot->Range(-0.1625,-0.0750815,1.0875,0.474022);
   r9Phot->SetFillColor(0);
   r9Phot->SetBorderMode(0);
   r9Phot->SetBorderSize(2);
   r9Phot->SetTickx(1);
   r9Phot->SetLeftMargin(0.13);
   r9Phot->SetRightMargin(0.07);
   r9Phot->SetFrameFillStyle(0);
   r9Phot->SetFrameBorderMode(0);
  
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
   
   TH1F *r9Phot_mc_Z_EB__10 = new TH1F("r9Phot_mc_Z_EB__10","r9Phot_mc_Z_EB",60,0,1);
   r9Phot_mc_Z_EB__10->SetBinContent(12,5.010367e-06);
   r9Phot_mc_Z_EB__10->SetBinContent(13,4.856203e-06);
   r9Phot_mc_Z_EB__10->SetBinContent(14,1.48052e-05);
   r9Phot_mc_Z_EB__10->SetBinContent(15,2.063918e-05);
   r9Phot_mc_Z_EB__10->SetBinContent(16,4.007388e-05);
   r9Phot_mc_Z_EB__10->SetBinContent(17,0.0001071054);
   r9Phot_mc_Z_EB__10->SetBinContent(18,0.0001729297);
   r9Phot_mc_Z_EB__10->SetBinContent(19,0.0001234159);
   r9Phot_mc_Z_EB__10->SetBinContent(20,0.0004014505);
   r9Phot_mc_Z_EB__10->SetBinContent(21,0.0004474153);
   r9Phot_mc_Z_EB__10->SetBinContent(22,0.0007290096);
   r9Phot_mc_Z_EB__10->SetBinContent(23,0.0008790455);
   r9Phot_mc_Z_EB__10->SetBinContent(24,0.001006978);
   r9Phot_mc_Z_EB__10->SetBinContent(25,0.001565269);
   r9Phot_mc_Z_EB__10->SetBinContent(26,0.001560056);
   r9Phot_mc_Z_EB__10->SetBinContent(27,0.001540545);
   r9Phot_mc_Z_EB__10->SetBinContent(28,0.002365745);
   r9Phot_mc_Z_EB__10->SetBinContent(29,0.002833994);
   r9Phot_mc_Z_EB__10->SetBinContent(30,0.00321311);
   r9Phot_mc_Z_EB__10->SetBinContent(31,0.003310734);
   r9Phot_mc_Z_EB__10->SetBinContent(32,0.004392318);
   r9Phot_mc_Z_EB__10->SetBinContent(33,0.00439937);
   r9Phot_mc_Z_EB__10->SetBinContent(34,0.005517552);
   r9Phot_mc_Z_EB__10->SetBinContent(35,0.005627363);
   r9Phot_mc_Z_EB__10->SetBinContent(36,0.006088088);
   r9Phot_mc_Z_EB__10->SetBinContent(37,0.006630253);
   r9Phot_mc_Z_EB__10->SetBinContent(38,0.006919932);
   r9Phot_mc_Z_EB__10->SetBinContent(39,0.007200369);
   r9Phot_mc_Z_EB__10->SetBinContent(40,0.008050416);
   r9Phot_mc_Z_EB__10->SetBinContent(41,0.007724832);
   r9Phot_mc_Z_EB__10->SetBinContent(42,0.00891374);
   r9Phot_mc_Z_EB__10->SetBinContent(43,0.009415101);
   r9Phot_mc_Z_EB__10->SetBinContent(44,0.009708295);
   r9Phot_mc_Z_EB__10->SetBinContent(45,0.009962024);
   r9Phot_mc_Z_EB__10->SetBinContent(46,0.01133373);
   r9Phot_mc_Z_EB__10->SetBinContent(47,0.01180564);
   r9Phot_mc_Z_EB__10->SetBinContent(48,0.01232341);
   r9Phot_mc_Z_EB__10->SetBinContent(49,0.01249131);
   r9Phot_mc_Z_EB__10->SetBinContent(50,0.01393583);
   r9Phot_mc_Z_EB__10->SetBinContent(51,0.01574934);
   r9Phot_mc_Z_EB__10->SetBinContent(52,0.01564256);
   r9Phot_mc_Z_EB__10->SetBinContent(53,0.01709451);
   r9Phot_mc_Z_EB__10->SetBinContent(54,0.02028407);
   r9Phot_mc_Z_EB__10->SetBinContent(55,0.02704976);
   r9Phot_mc_Z_EB__10->SetBinContent(56,0.06226343);
   r9Phot_mc_Z_EB__10->SetBinContent(57,0.2239461);
   r9Phot_mc_Z_EB__10->SetBinContent(58,0.4024276);
   r9Phot_mc_Z_EB__10->SetBinContent(59,0.03271161);
   r9Phot_mc_Z_EB__10->SetBinContent(60,4.921809e-05);
   r9Phot_mc_Z_EB__10->SetBinContent(61,8.807425e-06);
   r9Phot_mc_Z_EB__10->SetBinError(12,5.010367e-06);
   r9Phot_mc_Z_EB__10->SetBinError(13,3.048659e-06);
   r9Phot_mc_Z_EB__10->SetBinError(14,5.594734e-06);
   r9Phot_mc_Z_EB__10->SetBinError(15,4.646108e-06);
   r9Phot_mc_Z_EB__10->SetBinError(16,1.209956e-05);
   r9Phot_mc_Z_EB__10->SetBinError(17,2.010297e-05);
   r9Phot_mc_Z_EB__10->SetBinError(18,2.294447e-05);
   r9Phot_mc_Z_EB__10->SetBinError(19,1.24198e-05);
   r9Phot_mc_Z_EB__10->SetBinError(20,3.192904e-05);
   r9Phot_mc_Z_EB__10->SetBinError(21,3.257814e-05);
   r9Phot_mc_Z_EB__10->SetBinError(22,4.124953e-05);
   r9Phot_mc_Z_EB__10->SetBinError(23,4.411963e-05);
   r9Phot_mc_Z_EB__10->SetBinError(24,4.536288e-05);
   r9Phot_mc_Z_EB__10->SetBinError(25,5.838737e-05);
   r9Phot_mc_Z_EB__10->SetBinError(26,5.159304e-05);
   r9Phot_mc_Z_EB__10->SetBinError(27,4.590187e-05);
   r9Phot_mc_Z_EB__10->SetBinError(28,6.739341e-05);
   r9Phot_mc_Z_EB__10->SetBinError(29,7.382811e-05);
   r9Phot_mc_Z_EB__10->SetBinError(30,7.441154e-05);
   r9Phot_mc_Z_EB__10->SetBinError(31,7.051759e-05);
   r9Phot_mc_Z_EB__10->SetBinError(32,8.398887e-05);
   r9Phot_mc_Z_EB__10->SetBinError(33,7.469957e-05);
   r9Phot_mc_Z_EB__10->SetBinError(34,8.656089e-05);
   r9Phot_mc_Z_EB__10->SetBinError(35,8.03125e-05);
   r9Phot_mc_Z_EB__10->SetBinError(36,8.117029e-05);
   r9Phot_mc_Z_EB__10->SetBinError(37,8.375343e-05);
   r9Phot_mc_Z_EB__10->SetBinError(38,8.302806e-05);
   r9Phot_mc_Z_EB__10->SetBinError(39,8.239501e-05);
   r9Phot_mc_Z_EB__10->SetBinError(40,8.852985e-05);
   r9Phot_mc_Z_EB__10->SetBinError(41,8.22755e-05);
   r9Phot_mc_Z_EB__10->SetBinError(42,9.141649e-05);
   r9Phot_mc_Z_EB__10->SetBinError(43,9.160661e-05);
   r9Phot_mc_Z_EB__10->SetBinError(44,9.223385e-05);
   r9Phot_mc_Z_EB__10->SetBinError(45,9.109554e-05);
   r9Phot_mc_Z_EB__10->SetBinError(46,9.878318e-05);
   r9Phot_mc_Z_EB__10->SetBinError(47,9.849865e-05);
   r9Phot_mc_Z_EB__10->SetBinError(48,9.917521e-05);
   r9Phot_mc_Z_EB__10->SetBinError(49,9.561736e-05);
   r9Phot_mc_Z_EB__10->SetBinError(50,0.000101002);
   r9Phot_mc_Z_EB__10->SetBinError(51,0.0001084789);
   r9Phot_mc_Z_EB__10->SetBinError(52,0.0001020618);
   r9Phot_mc_Z_EB__10->SetBinError(53,0.0001023194);
   r9Phot_mc_Z_EB__10->SetBinError(54,0.0001105905);
   r9Phot_mc_Z_EB__10->SetBinError(55,0.0001275714);
   r9Phot_mc_Z_EB__10->SetBinError(56,0.0002243329);
   r9Phot_mc_Z_EB__10->SetBinError(57,0.0005506939);
   r9Phot_mc_Z_EB__10->SetBinError(58,0.000995336);
   r9Phot_mc_Z_EB__10->SetBinError(59,0.0003694844);
   r9Phot_mc_Z_EB__10->SetBinError(60,2.039824e-05);
   r9Phot_mc_Z_EB__10->SetBinError(61,5.164427e-06);
   r9Phot_mc_Z_EB__10->SetMinimum(1.223819e-07);
   r9Phot_mc_Z_EB__10->SetMaximum(2.253595);
   r9Phot_mc_Z_EB__10->SetEntries(825237);
   r9Phot_mc_Z_EB__10->SetDirectory(0);
   r9Phot_mc_Z_EB__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   r9Phot_mc_Z_EB__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   r9Phot_mc_Z_EB__10->SetMarkerColor(ci);
   r9Phot_mc_Z_EB__10->SetMarkerStyle(20);
   r9Phot_mc_Z_EB__10->SetMarkerSize(0.7);
   r9Phot_mc_Z_EB__10->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_mc_Z_EB__10->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_mc_Z_EB__10->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_mc_Z_EB__10->Draw("PE");
   
   TH1F *r9Phot_mc_Signal_EB__11 = new TH1F("r9Phot_mc_Signal_EB__11","r9Phot_mc_Signal_EB",60,0,1);
   r9Phot_mc_Signal_EB__11->SetBinContent(10,3.619393e-08);
   r9Phot_mc_Signal_EB__11->SetBinContent(11,4.415587e-07);
   r9Phot_mc_Signal_EB__11->SetBinContent(12,4.277388e-06);
   r9Phot_mc_Signal_EB__11->SetBinContent(13,1.045084e-05);
   r9Phot_mc_Signal_EB__11->SetBinContent(14,9.45203e-05);
   r9Phot_mc_Signal_EB__11->SetBinContent(15,0.0001177685);
   r9Phot_mc_Signal_EB__11->SetBinContent(16,0.0002141716);
   r9Phot_mc_Signal_EB__11->SetBinContent(17,0.0002728938);
   r9Phot_mc_Signal_EB__11->SetBinContent(18,0.0002860574);
   r9Phot_mc_Signal_EB__11->SetBinContent(19,0.0003623436);
   r9Phot_mc_Signal_EB__11->SetBinContent(20,0.0005416652);
   r9Phot_mc_Signal_EB__11->SetBinContent(21,0.0008570622);
   r9Phot_mc_Signal_EB__11->SetBinContent(22,0.001147056);
   r9Phot_mc_Signal_EB__11->SetBinContent(23,0.001329644);
   r9Phot_mc_Signal_EB__11->SetBinContent(24,0.001427051);
   r9Phot_mc_Signal_EB__11->SetBinContent(25,0.002094673);
   r9Phot_mc_Signal_EB__11->SetBinContent(26,0.002305798);
   r9Phot_mc_Signal_EB__11->SetBinContent(27,0.002505172);
   r9Phot_mc_Signal_EB__11->SetBinContent(28,0.00320829);
   r9Phot_mc_Signal_EB__11->SetBinContent(29,0.003684894);
   r9Phot_mc_Signal_EB__11->SetBinContent(30,0.004413423);
   r9Phot_mc_Signal_EB__11->SetBinContent(31,0.004613391);
   r9Phot_mc_Signal_EB__11->SetBinContent(32,0.005229999);
   r9Phot_mc_Signal_EB__11->SetBinContent(33,0.005849933);
   r9Phot_mc_Signal_EB__11->SetBinContent(34,0.006464039);
   r9Phot_mc_Signal_EB__11->SetBinContent(35,0.007006446);
   r9Phot_mc_Signal_EB__11->SetBinContent(36,0.00745615);
   r9Phot_mc_Signal_EB__11->SetBinContent(37,0.007969816);
   r9Phot_mc_Signal_EB__11->SetBinContent(38,0.008969849);
   r9Phot_mc_Signal_EB__11->SetBinContent(39,0.00902645);
   r9Phot_mc_Signal_EB__11->SetBinContent(40,0.009503406);
   r9Phot_mc_Signal_EB__11->SetBinContent(41,0.009953639);
   r9Phot_mc_Signal_EB__11->SetBinContent(42,0.01097223);
   r9Phot_mc_Signal_EB__11->SetBinContent(43,0.01200285);
   r9Phot_mc_Signal_EB__11->SetBinContent(44,0.01211824);
   r9Phot_mc_Signal_EB__11->SetBinContent(45,0.01300096);
   r9Phot_mc_Signal_EB__11->SetBinContent(46,0.01375796);
   r9Phot_mc_Signal_EB__11->SetBinContent(47,0.01478142);
   r9Phot_mc_Signal_EB__11->SetBinContent(48,0.01565566);
   r9Phot_mc_Signal_EB__11->SetBinContent(49,0.01554033);
   r9Phot_mc_Signal_EB__11->SetBinContent(50,0.01664794);
   r9Phot_mc_Signal_EB__11->SetBinContent(51,0.0188106);
   r9Phot_mc_Signal_EB__11->SetBinContent(52,0.0181963);
   r9Phot_mc_Signal_EB__11->SetBinContent(53,0.02047224);
   r9Phot_mc_Signal_EB__11->SetBinContent(54,0.02386712);
   r9Phot_mc_Signal_EB__11->SetBinContent(55,0.03000113);
   r9Phot_mc_Signal_EB__11->SetBinContent(56,0.05844664);
   r9Phot_mc_Signal_EB__11->SetBinContent(57,0.1953293);
   r9Phot_mc_Signal_EB__11->SetBinContent(58,0.3724022);
   r9Phot_mc_Signal_EB__11->SetBinContent(59,0.03102147);
   r9Phot_mc_Signal_EB__11->SetBinContent(60,5.460665e-05);
   r9Phot_mc_Signal_EB__11->SetBinContent(61,7.04172e-06);
   r9Phot_mc_Signal_EB__11->SetBinError(10,2.917973e-08);
   r9Phot_mc_Signal_EB__11->SetBinError(11,4.060148e-07);
   r9Phot_mc_Signal_EB__11->SetBinError(12,3.060099e-06);
   r9Phot_mc_Signal_EB__11->SetBinError(13,3.348598e-06);
   r9Phot_mc_Signal_EB__11->SetBinError(14,5.649274e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(15,5.776159e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(16,7.318338e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(17,8.23353e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(18,6.562222e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(19,6.849243e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(20,7.981276e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(21,0.0001250297);
   r9Phot_mc_Signal_EB__11->SetBinError(22,0.0001445817);
   r9Phot_mc_Signal_EB__11->SetBinError(23,0.000128377);
   r9Phot_mc_Signal_EB__11->SetBinError(24,0.0001182107);
   r9Phot_mc_Signal_EB__11->SetBinError(25,0.0001903219);
   r9Phot_mc_Signal_EB__11->SetBinError(26,0.0001701694);
   r9Phot_mc_Signal_EB__11->SetBinError(27,0.0001754945);
   r9Phot_mc_Signal_EB__11->SetBinError(28,0.0002038028);
   r9Phot_mc_Signal_EB__11->SetBinError(29,0.000217334);
   r9Phot_mc_Signal_EB__11->SetBinError(30,0.000247548);
   r9Phot_mc_Signal_EB__11->SetBinError(31,0.000229517);
   r9Phot_mc_Signal_EB__11->SetBinError(32,0.0002475445);
   r9Phot_mc_Signal_EB__11->SetBinError(33,0.0002565625);
   r9Phot_mc_Signal_EB__11->SetBinError(34,0.0002874777);
   r9Phot_mc_Signal_EB__11->SetBinError(35,0.0002905675);
   r9Phot_mc_Signal_EB__11->SetBinError(36,0.0002823173);
   r9Phot_mc_Signal_EB__11->SetBinError(37,0.0003012413);
   r9Phot_mc_Signal_EB__11->SetBinError(38,0.0003292762);
   r9Phot_mc_Signal_EB__11->SetBinError(39,0.0002921026);
   r9Phot_mc_Signal_EB__11->SetBinError(40,0.00031019);
   r9Phot_mc_Signal_EB__11->SetBinError(41,0.0003147632);
   r9Phot_mc_Signal_EB__11->SetBinError(42,0.0003498762);
   r9Phot_mc_Signal_EB__11->SetBinError(43,0.000379893);
   r9Phot_mc_Signal_EB__11->SetBinError(44,0.0003633214);
   r9Phot_mc_Signal_EB__11->SetBinError(45,0.0003736154);
   r9Phot_mc_Signal_EB__11->SetBinError(46,0.0003939778);
   r9Phot_mc_Signal_EB__11->SetBinError(47,0.0004158564);
   r9Phot_mc_Signal_EB__11->SetBinError(48,0.0004305565);
   r9Phot_mc_Signal_EB__11->SetBinError(49,0.0003898349);
   r9Phot_mc_Signal_EB__11->SetBinError(50,0.000409231);
   r9Phot_mc_Signal_EB__11->SetBinError(51,0.0004721716);
   r9Phot_mc_Signal_EB__11->SetBinError(52,0.0004077694);
   r9Phot_mc_Signal_EB__11->SetBinError(53,0.0004563223);
   r9Phot_mc_Signal_EB__11->SetBinError(54,0.0005118424);
   r9Phot_mc_Signal_EB__11->SetBinError(55,0.0005568605);
   r9Phot_mc_Signal_EB__11->SetBinError(56,0.0007653292);
   r9Phot_mc_Signal_EB__11->SetBinError(57,0.0013692);
   r9Phot_mc_Signal_EB__11->SetBinError(58,0.001883293);
   r9Phot_mc_Signal_EB__11->SetBinError(59,0.0005365574);
   r9Phot_mc_Signal_EB__11->SetBinError(60,1.417362e-05);
   r9Phot_mc_Signal_EB__11->SetBinError(61,3.150841e-06);
   r9Phot_mc_Signal_EB__11->SetEntries(1004991);
   r9Phot_mc_Signal_EB__11->SetDirectory(0);
   r9Phot_mc_Signal_EB__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EB__11->SetLineColor(ci);
   r9Phot_mc_Signal_EB__11->SetLineWidth(2);
   r9Phot_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *r9Phot_mc_Z_EB__12 = new TH1F("r9Phot_mc_Z_EB__12","r9Phot_mc_Z_EB",60,0,1);
   r9Phot_mc_Z_EB__12->SetBinContent(12,5.010367e-06);
   r9Phot_mc_Z_EB__12->SetBinContent(13,4.856203e-06);
   r9Phot_mc_Z_EB__12->SetBinContent(14,1.48052e-05);
   r9Phot_mc_Z_EB__12->SetBinContent(15,2.063918e-05);
   r9Phot_mc_Z_EB__12->SetBinContent(16,4.007388e-05);
   r9Phot_mc_Z_EB__12->SetBinContent(17,0.0001071054);
   r9Phot_mc_Z_EB__12->SetBinContent(18,0.0001729297);
   r9Phot_mc_Z_EB__12->SetBinContent(19,0.0001234159);
   r9Phot_mc_Z_EB__12->SetBinContent(20,0.0004014505);
   r9Phot_mc_Z_EB__12->SetBinContent(21,0.0004474153);
   r9Phot_mc_Z_EB__12->SetBinContent(22,0.0007290096);
   r9Phot_mc_Z_EB__12->SetBinContent(23,0.0008790455);
   r9Phot_mc_Z_EB__12->SetBinContent(24,0.001006978);
   r9Phot_mc_Z_EB__12->SetBinContent(25,0.001565269);
   r9Phot_mc_Z_EB__12->SetBinContent(26,0.001560056);
   r9Phot_mc_Z_EB__12->SetBinContent(27,0.001540545);
   r9Phot_mc_Z_EB__12->SetBinContent(28,0.002365745);
   r9Phot_mc_Z_EB__12->SetBinContent(29,0.002833994);
   r9Phot_mc_Z_EB__12->SetBinContent(30,0.00321311);
   r9Phot_mc_Z_EB__12->SetBinContent(31,0.003310734);
   r9Phot_mc_Z_EB__12->SetBinContent(32,0.004392318);
   r9Phot_mc_Z_EB__12->SetBinContent(33,0.00439937);
   r9Phot_mc_Z_EB__12->SetBinContent(34,0.005517552);
   r9Phot_mc_Z_EB__12->SetBinContent(35,0.005627363);
   r9Phot_mc_Z_EB__12->SetBinContent(36,0.006088088);
   r9Phot_mc_Z_EB__12->SetBinContent(37,0.006630253);
   r9Phot_mc_Z_EB__12->SetBinContent(38,0.006919932);
   r9Phot_mc_Z_EB__12->SetBinContent(39,0.007200369);
   r9Phot_mc_Z_EB__12->SetBinContent(40,0.008050416);
   r9Phot_mc_Z_EB__12->SetBinContent(41,0.007724832);
   r9Phot_mc_Z_EB__12->SetBinContent(42,0.00891374);
   r9Phot_mc_Z_EB__12->SetBinContent(43,0.009415101);
   r9Phot_mc_Z_EB__12->SetBinContent(44,0.009708295);
   r9Phot_mc_Z_EB__12->SetBinContent(45,0.009962024);
   r9Phot_mc_Z_EB__12->SetBinContent(46,0.01133373);
   r9Phot_mc_Z_EB__12->SetBinContent(47,0.01180564);
   r9Phot_mc_Z_EB__12->SetBinContent(48,0.01232341);
   r9Phot_mc_Z_EB__12->SetBinContent(49,0.01249131);
   r9Phot_mc_Z_EB__12->SetBinContent(50,0.01393583);
   r9Phot_mc_Z_EB__12->SetBinContent(51,0.01574934);
   r9Phot_mc_Z_EB__12->SetBinContent(52,0.01564256);
   r9Phot_mc_Z_EB__12->SetBinContent(53,0.01709451);
   r9Phot_mc_Z_EB__12->SetBinContent(54,0.02028407);
   r9Phot_mc_Z_EB__12->SetBinContent(55,0.02704976);
   r9Phot_mc_Z_EB__12->SetBinContent(56,0.06226343);
   r9Phot_mc_Z_EB__12->SetBinContent(57,0.2239461);
   r9Phot_mc_Z_EB__12->SetBinContent(58,0.4024276);
   r9Phot_mc_Z_EB__12->SetBinContent(59,0.03271161);
   r9Phot_mc_Z_EB__12->SetBinContent(60,4.921809e-05);
   r9Phot_mc_Z_EB__12->SetBinContent(61,8.807425e-06);
   r9Phot_mc_Z_EB__12->SetBinError(12,5.010367e-06);
   r9Phot_mc_Z_EB__12->SetBinError(13,3.048659e-06);
   r9Phot_mc_Z_EB__12->SetBinError(14,5.594734e-06);
   r9Phot_mc_Z_EB__12->SetBinError(15,4.646108e-06);
   r9Phot_mc_Z_EB__12->SetBinError(16,1.209956e-05);
   r9Phot_mc_Z_EB__12->SetBinError(17,2.010297e-05);
   r9Phot_mc_Z_EB__12->SetBinError(18,2.294447e-05);
   r9Phot_mc_Z_EB__12->SetBinError(19,1.24198e-05);
   r9Phot_mc_Z_EB__12->SetBinError(20,3.192904e-05);
   r9Phot_mc_Z_EB__12->SetBinError(21,3.257814e-05);
   r9Phot_mc_Z_EB__12->SetBinError(22,4.124953e-05);
   r9Phot_mc_Z_EB__12->SetBinError(23,4.411963e-05);
   r9Phot_mc_Z_EB__12->SetBinError(24,4.536288e-05);
   r9Phot_mc_Z_EB__12->SetBinError(25,5.838737e-05);
   r9Phot_mc_Z_EB__12->SetBinError(26,5.159304e-05);
   r9Phot_mc_Z_EB__12->SetBinError(27,4.590187e-05);
   r9Phot_mc_Z_EB__12->SetBinError(28,6.739341e-05);
   r9Phot_mc_Z_EB__12->SetBinError(29,7.382811e-05);
   r9Phot_mc_Z_EB__12->SetBinError(30,7.441154e-05);
   r9Phot_mc_Z_EB__12->SetBinError(31,7.051759e-05);
   r9Phot_mc_Z_EB__12->SetBinError(32,8.398887e-05);
   r9Phot_mc_Z_EB__12->SetBinError(33,7.469957e-05);
   r9Phot_mc_Z_EB__12->SetBinError(34,8.656089e-05);
   r9Phot_mc_Z_EB__12->SetBinError(35,8.03125e-05);
   r9Phot_mc_Z_EB__12->SetBinError(36,8.117029e-05);
   r9Phot_mc_Z_EB__12->SetBinError(37,8.375343e-05);
   r9Phot_mc_Z_EB__12->SetBinError(38,8.302806e-05);
   r9Phot_mc_Z_EB__12->SetBinError(39,8.239501e-05);
   r9Phot_mc_Z_EB__12->SetBinError(40,8.852985e-05);
   r9Phot_mc_Z_EB__12->SetBinError(41,8.22755e-05);
   r9Phot_mc_Z_EB__12->SetBinError(42,9.141649e-05);
   r9Phot_mc_Z_EB__12->SetBinError(43,9.160661e-05);
   r9Phot_mc_Z_EB__12->SetBinError(44,9.223385e-05);
   r9Phot_mc_Z_EB__12->SetBinError(45,9.109554e-05);
   r9Phot_mc_Z_EB__12->SetBinError(46,9.878318e-05);
   r9Phot_mc_Z_EB__12->SetBinError(47,9.849865e-05);
   r9Phot_mc_Z_EB__12->SetBinError(48,9.917521e-05);
   r9Phot_mc_Z_EB__12->SetBinError(49,9.561736e-05);
   r9Phot_mc_Z_EB__12->SetBinError(50,0.000101002);
   r9Phot_mc_Z_EB__12->SetBinError(51,0.0001084789);
   r9Phot_mc_Z_EB__12->SetBinError(52,0.0001020618);
   r9Phot_mc_Z_EB__12->SetBinError(53,0.0001023194);
   r9Phot_mc_Z_EB__12->SetBinError(54,0.0001105905);
   r9Phot_mc_Z_EB__12->SetBinError(55,0.0001275714);
   r9Phot_mc_Z_EB__12->SetBinError(56,0.0002243329);
   r9Phot_mc_Z_EB__12->SetBinError(57,0.0005506939);
   r9Phot_mc_Z_EB__12->SetBinError(58,0.000995336);
   r9Phot_mc_Z_EB__12->SetBinError(59,0.0003694844);
   r9Phot_mc_Z_EB__12->SetBinError(60,2.039824e-05);
   r9Phot_mc_Z_EB__12->SetBinError(61,5.164427e-06);
   r9Phot_mc_Z_EB__12->SetMinimum(1.223819e-07);
   r9Phot_mc_Z_EB__12->SetMaximum(2.253595);
   r9Phot_mc_Z_EB__12->SetEntries(825237);
   r9Phot_mc_Z_EB__12->SetDirectory(0);
   r9Phot_mc_Z_EB__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   r9Phot_mc_Z_EB__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   r9Phot_mc_Z_EB__12->SetMarkerColor(ci);
   r9Phot_mc_Z_EB__12->SetMarkerStyle(20);
   r9Phot_mc_Z_EB__12->SetMarkerSize(0.7);
   r9Phot_mc_Z_EB__12->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_mc_Z_EB__12->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_mc_Z_EB__12->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_mc_Z_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(2.054957e-81,1.842955e+11,6.085328e+247,1.020296e+243,NULL,"brNDC");
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
   entry=leg->AddEntry("r9Phot_mc_Z_EB","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("r9Phot_mc_Signal_EB","signal #gamma + jet","F");
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
   r9Phot->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","r9Phot_mc_Z_EB",60,0,1);
   ratio->SetBinContent(12,1.171361);
   ratio->SetBinContent(13,0.464671);
   ratio->SetBinContent(14,0.1566352);
   ratio->SetBinContent(15,0.1752521);
   ratio->SetBinContent(16,0.1871111);
   ratio->SetBinContent(17,0.3924804);
   ratio->SetBinContent(18,0.604528);
   ratio->SetBinContent(19,0.3406046);
   ratio->SetBinContent(20,0.7411413);
   ratio->SetBinContent(21,0.5220336);
   ratio->SetBinContent(22,0.6355485);
   ratio->SetBinContent(23,0.6611135);
   ratio->SetBinContent(24,0.7056361);
   ratio->SetBinContent(25,0.7472616);
   ratio->SetBinContent(26,0.6765797);
   ratio->SetBinContent(27,0.6149461);
   ratio->SetBinContent(28,0.737385);
   ratio->SetBinContent(29,0.7690844);
   ratio->SetBinContent(30,0.7280314);
   ratio->SetBinContent(31,0.7176358);
   ratio->SetBinContent(32,0.8398315);
   ratio->SetBinContent(33,0.7520378);
   ratio->SetBinContent(34,0.8535765);
   ratio->SetBinContent(35,0.8031693);
   ratio->SetBinContent(36,0.816519);
   ratio->SetBinContent(37,0.8319204);
   ratio->SetBinContent(38,0.7714658);
   ratio->SetBinContent(39,0.7976966);
   ratio->SetBinContent(40,0.8471084);
   ratio->SetBinContent(41,0.7760813);
   ratio->SetBinContent(42,0.8123909);
   ratio->SetBinContent(43,0.7844054);
   ratio->SetBinContent(44,0.8011307);
   ratio->SetBinContent(45,0.7662529);
   ratio->SetBinContent(46,0.8237941);
   ratio->SetBinContent(47,0.7986811);
   ratio->SetBinContent(48,0.7871541);
   ratio->SetBinContent(49,0.8037992);
   ratio->SetBinContent(50,0.8370903);
   ratio->SetBinContent(51,0.8372585);
   ratio->SetBinContent(52,0.859656);
   ratio->SetBinContent(53,0.8350093);
   ratio->SetBinContent(54,0.849875);
   ratio->SetBinContent(55,0.9016247);
   ratio->SetBinContent(56,1.065304);
   ratio->SetBinContent(57,1.146505);
   ratio->SetBinContent(58,1.080626);
   ratio->SetBinContent(59,1.054483);
   ratio->SetBinContent(60,0.9013205);
   ratio->SetBinContent(61,1.250749);
   ratio->SetBinError(12,1.440258);
   ratio->SetBinError(13,0.3275127);
   ratio->SetBinError(14,0.11076);
   ratio->SetBinError(15,0.09457653);
   ratio->SetBinError(16,0.08532029);
   ratio->SetBinError(17,0.1394597);
   ratio->SetBinError(18,0.1602052);
   ratio->SetBinError(19,0.07293873);
   ratio->SetBinError(20,0.1240982);
   ratio->SetBinError(21,0.08511446);
   ratio->SetBinError(22,0.08780971);
   ratio->SetBinError(23,0.07193984);
   ratio->SetBinError(24,0.06653636);
   ratio->SetBinError(25,0.07339521);
   ratio->SetBinError(26,0.0547162);
   ratio->SetBinError(27,0.04681352);
   ratio->SetBinError(28,0.05133594);
   ratio->SetBinError(29,0.04958809);
   ratio->SetBinError(30,0.04417892);
   ratio->SetBinError(31,0.03883701);
   ratio->SetBinError(32,0.04287196);
   ratio->SetBinError(33,0.03536795);
   ratio->SetBinError(34,0.04025411);
   ratio->SetBinError(35,0.03522578);
   ratio->SetBinError(36,0.03277709);
   ratio->SetBinError(37,0.03315429);
   ratio->SetBinError(38,0.02979425);
   ratio->SetBinError(39,0.02738044);
   ratio->SetBinError(40,0.02917663);
   ratio->SetBinError(41,0.02589658);
   ratio->SetBinError(42,0.02721191);
   ratio->SetBinError(43,0.02597323);
   ratio->SetBinError(44,0.02519607);
   ratio->SetBinError(45,0.02310812);
   ratio->SetBinError(46,0.02465893);
   ratio->SetBinError(47,0.02343715);
   ratio->SetBinError(48,0.02255587);
   ratio->SetBinError(49,0.02108146);
   ratio->SetBinError(50,0.02145267);
   ratio->SetBinError(51,0.02179319);
   ratio->SetBinError(52,0.02006436);
   ratio->SetBinError(53,0.01927157);
   ratio->SetBinError(54,0.01880577);
   ratio->SetBinError(55,0.01726711);
   ratio->SetBinError(56,0.01446803);
   ratio->SetBinError(57,0.00851683);
   ratio->SetBinError(58,0.006083467);
   ratio->SetBinError(59,0.0217833);
   ratio->SetBinError(60,0.4407596);
   ratio->SetBinError(61,0.9225463);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(528.4002);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","r9Phot_mc_Z_EB",60,0,1);
   ratio->SetBinContent(12,1.171361);
   ratio->SetBinContent(13,0.464671);
   ratio->SetBinContent(14,0.1566352);
   ratio->SetBinContent(15,0.1752521);
   ratio->SetBinContent(16,0.1871111);
   ratio->SetBinContent(17,0.3924804);
   ratio->SetBinContent(18,0.604528);
   ratio->SetBinContent(19,0.3406046);
   ratio->SetBinContent(20,0.7411413);
   ratio->SetBinContent(21,0.5220336);
   ratio->SetBinContent(22,0.6355485);
   ratio->SetBinContent(23,0.6611135);
   ratio->SetBinContent(24,0.7056361);
   ratio->SetBinContent(25,0.7472616);
   ratio->SetBinContent(26,0.6765797);
   ratio->SetBinContent(27,0.6149461);
   ratio->SetBinContent(28,0.737385);
   ratio->SetBinContent(29,0.7690844);
   ratio->SetBinContent(30,0.7280314);
   ratio->SetBinContent(31,0.7176358);
   ratio->SetBinContent(32,0.8398315);
   ratio->SetBinContent(33,0.7520378);
   ratio->SetBinContent(34,0.8535765);
   ratio->SetBinContent(35,0.8031693);
   ratio->SetBinContent(36,0.816519);
   ratio->SetBinContent(37,0.8319204);
   ratio->SetBinContent(38,0.7714658);
   ratio->SetBinContent(39,0.7976966);
   ratio->SetBinContent(40,0.8471084);
   ratio->SetBinContent(41,0.7760813);
   ratio->SetBinContent(42,0.8123909);
   ratio->SetBinContent(43,0.7844054);
   ratio->SetBinContent(44,0.8011307);
   ratio->SetBinContent(45,0.7662529);
   ratio->SetBinContent(46,0.8237941);
   ratio->SetBinContent(47,0.7986811);
   ratio->SetBinContent(48,0.7871541);
   ratio->SetBinContent(49,0.8037992);
   ratio->SetBinContent(50,0.8370903);
   ratio->SetBinContent(51,0.8372585);
   ratio->SetBinContent(52,0.859656);
   ratio->SetBinContent(53,0.8350093);
   ratio->SetBinContent(54,0.849875);
   ratio->SetBinContent(55,0.9016247);
   ratio->SetBinContent(56,1.065304);
   ratio->SetBinContent(57,1.146505);
   ratio->SetBinContent(58,1.080626);
   ratio->SetBinContent(59,1.054483);
   ratio->SetBinContent(60,0.9013205);
   ratio->SetBinContent(61,1.250749);
   ratio->SetBinError(12,1.440258);
   ratio->SetBinError(13,0.3275127);
   ratio->SetBinError(14,0.11076);
   ratio->SetBinError(15,0.09457653);
   ratio->SetBinError(16,0.08532029);
   ratio->SetBinError(17,0.1394597);
   ratio->SetBinError(18,0.1602052);
   ratio->SetBinError(19,0.07293873);
   ratio->SetBinError(20,0.1240982);
   ratio->SetBinError(21,0.08511446);
   ratio->SetBinError(22,0.08780971);
   ratio->SetBinError(23,0.07193984);
   ratio->SetBinError(24,0.06653636);
   ratio->SetBinError(25,0.07339521);
   ratio->SetBinError(26,0.0547162);
   ratio->SetBinError(27,0.04681352);
   ratio->SetBinError(28,0.05133594);
   ratio->SetBinError(29,0.04958809);
   ratio->SetBinError(30,0.04417892);
   ratio->SetBinError(31,0.03883701);
   ratio->SetBinError(32,0.04287196);
   ratio->SetBinError(33,0.03536795);
   ratio->SetBinError(34,0.04025411);
   ratio->SetBinError(35,0.03522578);
   ratio->SetBinError(36,0.03277709);
   ratio->SetBinError(37,0.03315429);
   ratio->SetBinError(38,0.02979425);
   ratio->SetBinError(39,0.02738044);
   ratio->SetBinError(40,0.02917663);
   ratio->SetBinError(41,0.02589658);
   ratio->SetBinError(42,0.02721191);
   ratio->SetBinError(43,0.02597323);
   ratio->SetBinError(44,0.02519607);
   ratio->SetBinError(45,0.02310812);
   ratio->SetBinError(46,0.02465893);
   ratio->SetBinError(47,0.02343715);
   ratio->SetBinError(48,0.02255587);
   ratio->SetBinError(49,0.02108146);
   ratio->SetBinError(50,0.02145267);
   ratio->SetBinError(51,0.02179319);
   ratio->SetBinError(52,0.02006436);
   ratio->SetBinError(53,0.01927157);
   ratio->SetBinError(54,0.01880577);
   ratio->SetBinError(55,0.01726711);
   ratio->SetBinError(56,0.01446803);
   ratio->SetBinError(57,0.00851683);
   ratio->SetBinError(58,0.006083467);
   ratio->SetBinError(59,0.0217833);
   ratio->SetBinError(60,0.4407596);
   ratio->SetBinError(61,0.9225463);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(528.4002);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   r9Phot->cd();
   r9Phot->Modified();
   r9Phot->cd();
   r9Phot->SetSelected(r9Phot);
}
