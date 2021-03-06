{
//=========Macro generated from canvas: r9Phot/r9Phot
//=========  (Sun Nov 30 19:07:26 2014) by ROOT version5.32/00
   TCanvas *r9Phot = new TCanvas("r9Phot", "r9Phot",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   r9Phot->SetHighLightColor(2);
   r9Phot->Range(-0.1625,-0.05579203,1.0875,0.3522392);
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
   
   TH1F *r9Phot_dataZ_EE__4 = new TH1F("r9Phot_dataZ_EE__4","r9Phot_dataZ_EE",60,0,1);
   r9Phot_dataZ_EE__4->SetBinContent(1,4.999722e-06);
   r9Phot_dataZ_EE__4->SetBinContent(2,8.902309e-07);
   r9Phot_dataZ_EE__4->SetBinContent(9,9.554927e-07);
   r9Phot_dataZ_EE__4->SetBinContent(14,3.424271e-06);
   r9Phot_dataZ_EE__4->SetBinContent(15,3.788834e-06);
   r9Phot_dataZ_EE__4->SetBinContent(16,5.15313e-05);
   r9Phot_dataZ_EE__4->SetBinContent(17,9.468515e-06);
   r9Phot_dataZ_EE__4->SetBinContent(18,8.897247e-05);
   r9Phot_dataZ_EE__4->SetBinContent(19,5.432968e-05);
   r9Phot_dataZ_EE__4->SetBinContent(20,0.0001051928);
   r9Phot_dataZ_EE__4->SetBinContent(21,9.526293e-05);
   r9Phot_dataZ_EE__4->SetBinContent(22,0.0001036553);
   r9Phot_dataZ_EE__4->SetBinContent(23,0.0002148955);
   r9Phot_dataZ_EE__4->SetBinContent(24,0.0001439396);
   r9Phot_dataZ_EE__4->SetBinContent(25,0.000141187);
   r9Phot_dataZ_EE__4->SetBinContent(26,0.0003886065);
   r9Phot_dataZ_EE__4->SetBinContent(27,0.0002121368);
   r9Phot_dataZ_EE__4->SetBinContent(28,0.0001543799);
   r9Phot_dataZ_EE__4->SetBinContent(29,0.0003473522);
   r9Phot_dataZ_EE__4->SetBinContent(30,0.0005101344);
   r9Phot_dataZ_EE__4->SetBinContent(31,0.0004538024);
   r9Phot_dataZ_EE__4->SetBinContent(32,0.0008764546);
   r9Phot_dataZ_EE__4->SetBinContent(33,0.0009308724);
   r9Phot_dataZ_EE__4->SetBinContent(34,0.0008719349);
   r9Phot_dataZ_EE__4->SetBinContent(35,0.0009582255);
   r9Phot_dataZ_EE__4->SetBinContent(36,0.001370656);
   r9Phot_dataZ_EE__4->SetBinContent(37,0.001583321);
   r9Phot_dataZ_EE__4->SetBinContent(38,0.001338054);
   r9Phot_dataZ_EE__4->SetBinContent(39,0.001807821);
   r9Phot_dataZ_EE__4->SetBinContent(40,0.001680208);
   r9Phot_dataZ_EE__4->SetBinContent(41,0.002200854);
   r9Phot_dataZ_EE__4->SetBinContent(42,0.002565939);
   r9Phot_dataZ_EE__4->SetBinContent(43,0.003049446);
   r9Phot_dataZ_EE__4->SetBinContent(44,0.003222567);
   r9Phot_dataZ_EE__4->SetBinContent(45,0.003772267);
   r9Phot_dataZ_EE__4->SetBinContent(46,0.00396444);
   r9Phot_dataZ_EE__4->SetBinContent(47,0.005082722);
   r9Phot_dataZ_EE__4->SetBinContent(48,0.006328905);
   r9Phot_dataZ_EE__4->SetBinContent(49,0.006719438);
   r9Phot_dataZ_EE__4->SetBinContent(50,0.008405223);
   r9Phot_dataZ_EE__4->SetBinContent(51,0.01121231);
   r9Phot_dataZ_EE__4->SetBinContent(52,0.0139521);
   r9Phot_dataZ_EE__4->SetBinContent(53,0.01900186);
   r9Phot_dataZ_EE__4->SetBinContent(54,0.02575069);
   r9Phot_dataZ_EE__4->SetBinContent(55,0.03856651);
   r9Phot_dataZ_EE__4->SetBinContent(56,0.07340099);
   r9Phot_dataZ_EE__4->SetBinContent(57,0.1522242);
   r9Phot_dataZ_EE__4->SetBinContent(58,0.2978965);
   r9Phot_dataZ_EE__4->SetBinContent(59,0.2957232);
   r9Phot_dataZ_EE__4->SetBinContent(60,0.01245337);
   r9Phot_dataZ_EE__4->SetBinContent(61,0.0006377221);
   r9Phot_dataZ_EE__4->SetBinError(1,4.999721e-06);
   r9Phot_dataZ_EE__4->SetBinError(2,8.902308e-07);
   r9Phot_dataZ_EE__4->SetBinError(9,9.554928e-07);
   r9Phot_dataZ_EE__4->SetBinError(14,2.047475e-06);
   r9Phot_dataZ_EE__4->SetBinError(15,2.233638e-06);
   r9Phot_dataZ_EE__4->SetBinError(16,5.153129e-05);
   r9Phot_dataZ_EE__4->SetBinError(17,5.626921e-06);
   r9Phot_dataZ_EE__4->SetBinError(18,3.037843e-05);
   r9Phot_dataZ_EE__4->SetBinError(19,1.730376e-05);
   r9Phot_dataZ_EE__4->SetBinError(20,3.004034e-05);
   r9Phot_dataZ_EE__4->SetBinError(21,3.44126e-05);
   r9Phot_dataZ_EE__4->SetBinError(22,2.882112e-05);
   r9Phot_dataZ_EE__4->SetBinError(23,4.253612e-05);
   r9Phot_dataZ_EE__4->SetBinError(24,2.271232e-05);
   r9Phot_dataZ_EE__4->SetBinError(25,2.877414e-05);
   r9Phot_dataZ_EE__4->SetBinError(26,0.0001700405);
   r9Phot_dataZ_EE__4->SetBinError(27,3.098783e-05);
   r9Phot_dataZ_EE__4->SetBinError(28,2.604383e-05);
   r9Phot_dataZ_EE__4->SetBinError(29,4.390363e-05);
   r9Phot_dataZ_EE__4->SetBinError(30,5.996129e-05);
   r9Phot_dataZ_EE__4->SetBinError(31,4.584082e-05);
   r9Phot_dataZ_EE__4->SetBinError(32,7.487809e-05);
   r9Phot_dataZ_EE__4->SetBinError(33,7.421602e-05);
   r9Phot_dataZ_EE__4->SetBinError(34,6.91904e-05);
   r9Phot_dataZ_EE__4->SetBinError(35,7.496892e-05);
   r9Phot_dataZ_EE__4->SetBinError(36,8.539617e-05);
   r9Phot_dataZ_EE__4->SetBinError(37,9.491934e-05);
   r9Phot_dataZ_EE__4->SetBinError(38,8.41857e-05);
   r9Phot_dataZ_EE__4->SetBinError(39,9.896622e-05);
   r9Phot_dataZ_EE__4->SetBinError(40,8.673235e-05);
   r9Phot_dataZ_EE__4->SetBinError(41,0.0001079921);
   r9Phot_dataZ_EE__4->SetBinError(42,0.0001150403);
   r9Phot_dataZ_EE__4->SetBinError(43,0.0001245727);
   r9Phot_dataZ_EE__4->SetBinError(44,0.0001252666);
   r9Phot_dataZ_EE__4->SetBinError(45,0.0001407171);
   r9Phot_dataZ_EE__4->SetBinError(46,0.0001366814);
   r9Phot_dataZ_EE__4->SetBinError(47,0.0001565453);
   r9Phot_dataZ_EE__4->SetBinError(48,0.0001821845);
   r9Phot_dataZ_EE__4->SetBinError(49,0.0001803174);
   r9Phot_dataZ_EE__4->SetBinError(50,0.0001959314);
   r9Phot_dataZ_EE__4->SetBinError(51,0.0002494076);
   r9Phot_dataZ_EE__4->SetBinError(52,0.0002624276);
   r9Phot_dataZ_EE__4->SetBinError(53,0.0003189743);
   r9Phot_dataZ_EE__4->SetBinError(54,0.0003806768);
   r9Phot_dataZ_EE__4->SetBinError(55,0.0004618753);
   r9Phot_dataZ_EE__4->SetBinError(56,0.0006727255);
   r9Phot_dataZ_EE__4->SetBinError(57,0.001100982);
   r9Phot_dataZ_EE__4->SetBinError(58,0.001881554);
   r9Phot_dataZ_EE__4->SetBinError(59,0.002692175);
   r9Phot_dataZ_EE__4->SetBinError(60,0.0004303626);
   r9Phot_dataZ_EE__4->SetBinError(61,4.760757e-05);
   r9Phot_dataZ_EE__4->SetMinimum(4.016984e-07);
   r9Phot_dataZ_EE__4->SetMaximum(1.66822);
   r9Phot_dataZ_EE__4->SetEntries(150258);
   r9Phot_dataZ_EE__4->SetDirectory(0);
   r9Phot_dataZ_EE__4->SetStats(0);
   r9Phot_dataZ_EE__4->SetMarkerStyle(20);
   r9Phot_dataZ_EE__4->SetMarkerSize(0.7);
   r9Phot_dataZ_EE__4->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_dataZ_EE__4->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_dataZ_EE__4->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_dataZ_EE__4->Draw("PE");
   
   TH1F *r9Phot_mc_Signal_EE__5 = new TH1F("r9Phot_mc_Signal_EE__5","r9Phot_mc_Signal_EE",60,0,1);
   r9Phot_mc_Signal_EE__5->SetBinContent(3,1.102639e-07);
   r9Phot_mc_Signal_EE__5->SetBinContent(23,7.298783e-07);
   r9Phot_mc_Signal_EE__5->SetBinContent(25,2.939059e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(30,2.655358e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(31,2.655358e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(34,4.679995e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(36,1.549467e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(37,6.49472e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(38,2.466815e-06);
   r9Phot_mc_Signal_EE__5->SetBinContent(39,1.310494e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(40,1.101745e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(41,3.762359e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(42,2.758823e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(43,0.0001048183);
   r9Phot_mc_Signal_EE__5->SetBinContent(44,8.41045e-05);
   r9Phot_mc_Signal_EE__5->SetBinContent(45,0.0001285377);
   r9Phot_mc_Signal_EE__5->SetBinContent(46,0.0001896768);
   r9Phot_mc_Signal_EE__5->SetBinContent(47,0.0002607638);
   r9Phot_mc_Signal_EE__5->SetBinContent(48,0.0004133341);
   r9Phot_mc_Signal_EE__5->SetBinContent(49,0.0007360601);
   r9Phot_mc_Signal_EE__5->SetBinContent(50,0.001190012);
   r9Phot_mc_Signal_EE__5->SetBinContent(51,0.002084089);
   r9Phot_mc_Signal_EE__5->SetBinContent(52,0.003533241);
   r9Phot_mc_Signal_EE__5->SetBinContent(53,0.006468467);
   r9Phot_mc_Signal_EE__5->SetBinContent(54,0.01106617);
   r9Phot_mc_Signal_EE__5->SetBinContent(55,0.01998741);
   r9Phot_mc_Signal_EE__5->SetBinContent(56,0.03779706);
   r9Phot_mc_Signal_EE__5->SetBinContent(57,0.08156474);
   r9Phot_mc_Signal_EE__5->SetBinContent(58,0.2094884);
   r9Phot_mc_Signal_EE__5->SetBinContent(59,0.6074219);
   r9Phot_mc_Signal_EE__5->SetBinContent(60,0.01736758);
   r9Phot_mc_Signal_EE__5->SetBinContent(61,1.516181e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(3,1.102639e-07);
   r9Phot_mc_Signal_EE__5->SetBinError(23,7.298783e-07);
   r9Phot_mc_Signal_EE__5->SetBinError(25,2.939059e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(30,2.655358e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(31,2.655358e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(34,3.493001e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(36,1.549467e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(37,3.699083e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(38,2.466815e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(39,1.058222e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(40,5.463008e-06);
   r9Phot_mc_Signal_EE__5->SetBinError(41,1.447986e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(42,1.145569e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(43,4.718615e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(44,2.539714e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(45,3.525743e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(46,3.43858e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(47,3.84251e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(48,4.70148e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(49,5.758359e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(50,7.128866e-05);
   r9Phot_mc_Signal_EE__5->SetBinError(51,0.0001047111);
   r9Phot_mc_Signal_EE__5->SetBinError(52,0.0001472571);
   r9Phot_mc_Signal_EE__5->SetBinError(53,0.0001961984);
   r9Phot_mc_Signal_EE__5->SetBinError(54,0.0002523677);
   r9Phot_mc_Signal_EE__5->SetBinError(55,0.0003364259);
   r9Phot_mc_Signal_EE__5->SetBinError(56,0.0008525851);
   r9Phot_mc_Signal_EE__5->SetBinError(57,0.001859416);
   r9Phot_mc_Signal_EE__5->SetBinError(58,0.001935462);
   r9Phot_mc_Signal_EE__5->SetBinError(59,0.003405899);
   r9Phot_mc_Signal_EE__5->SetBinError(60,0.0002966696);
   r9Phot_mc_Signal_EE__5->SetBinError(61,5.89498e-06);
   r9Phot_mc_Signal_EE__5->SetEntries(640592);
   r9Phot_mc_Signal_EE__5->SetDirectory(0);
   r9Phot_mc_Signal_EE__5->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EE__5->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   r9Phot_mc_Signal_EE__5->SetLineColor(ci);
   r9Phot_mc_Signal_EE__5->SetLineWidth(2);
   r9Phot_mc_Signal_EE__5->Draw("HSAME");
   
   TH1F *r9Phot_dataZ_EE__6 = new TH1F("r9Phot_dataZ_EE__6","r9Phot_dataZ_EE",60,0,1);
   r9Phot_dataZ_EE__6->SetBinContent(1,4.999722e-06);
   r9Phot_dataZ_EE__6->SetBinContent(2,8.902309e-07);
   r9Phot_dataZ_EE__6->SetBinContent(9,9.554927e-07);
   r9Phot_dataZ_EE__6->SetBinContent(14,3.424271e-06);
   r9Phot_dataZ_EE__6->SetBinContent(15,3.788834e-06);
   r9Phot_dataZ_EE__6->SetBinContent(16,5.15313e-05);
   r9Phot_dataZ_EE__6->SetBinContent(17,9.468515e-06);
   r9Phot_dataZ_EE__6->SetBinContent(18,8.897247e-05);
   r9Phot_dataZ_EE__6->SetBinContent(19,5.432968e-05);
   r9Phot_dataZ_EE__6->SetBinContent(20,0.0001051928);
   r9Phot_dataZ_EE__6->SetBinContent(21,9.526293e-05);
   r9Phot_dataZ_EE__6->SetBinContent(22,0.0001036553);
   r9Phot_dataZ_EE__6->SetBinContent(23,0.0002148955);
   r9Phot_dataZ_EE__6->SetBinContent(24,0.0001439396);
   r9Phot_dataZ_EE__6->SetBinContent(25,0.000141187);
   r9Phot_dataZ_EE__6->SetBinContent(26,0.0003886065);
   r9Phot_dataZ_EE__6->SetBinContent(27,0.0002121368);
   r9Phot_dataZ_EE__6->SetBinContent(28,0.0001543799);
   r9Phot_dataZ_EE__6->SetBinContent(29,0.0003473522);
   r9Phot_dataZ_EE__6->SetBinContent(30,0.0005101344);
   r9Phot_dataZ_EE__6->SetBinContent(31,0.0004538024);
   r9Phot_dataZ_EE__6->SetBinContent(32,0.0008764546);
   r9Phot_dataZ_EE__6->SetBinContent(33,0.0009308724);
   r9Phot_dataZ_EE__6->SetBinContent(34,0.0008719349);
   r9Phot_dataZ_EE__6->SetBinContent(35,0.0009582255);
   r9Phot_dataZ_EE__6->SetBinContent(36,0.001370656);
   r9Phot_dataZ_EE__6->SetBinContent(37,0.001583321);
   r9Phot_dataZ_EE__6->SetBinContent(38,0.001338054);
   r9Phot_dataZ_EE__6->SetBinContent(39,0.001807821);
   r9Phot_dataZ_EE__6->SetBinContent(40,0.001680208);
   r9Phot_dataZ_EE__6->SetBinContent(41,0.002200854);
   r9Phot_dataZ_EE__6->SetBinContent(42,0.002565939);
   r9Phot_dataZ_EE__6->SetBinContent(43,0.003049446);
   r9Phot_dataZ_EE__6->SetBinContent(44,0.003222567);
   r9Phot_dataZ_EE__6->SetBinContent(45,0.003772267);
   r9Phot_dataZ_EE__6->SetBinContent(46,0.00396444);
   r9Phot_dataZ_EE__6->SetBinContent(47,0.005082722);
   r9Phot_dataZ_EE__6->SetBinContent(48,0.006328905);
   r9Phot_dataZ_EE__6->SetBinContent(49,0.006719438);
   r9Phot_dataZ_EE__6->SetBinContent(50,0.008405223);
   r9Phot_dataZ_EE__6->SetBinContent(51,0.01121231);
   r9Phot_dataZ_EE__6->SetBinContent(52,0.0139521);
   r9Phot_dataZ_EE__6->SetBinContent(53,0.01900186);
   r9Phot_dataZ_EE__6->SetBinContent(54,0.02575069);
   r9Phot_dataZ_EE__6->SetBinContent(55,0.03856651);
   r9Phot_dataZ_EE__6->SetBinContent(56,0.07340099);
   r9Phot_dataZ_EE__6->SetBinContent(57,0.1522242);
   r9Phot_dataZ_EE__6->SetBinContent(58,0.2978965);
   r9Phot_dataZ_EE__6->SetBinContent(59,0.2957232);
   r9Phot_dataZ_EE__6->SetBinContent(60,0.01245337);
   r9Phot_dataZ_EE__6->SetBinContent(61,0.0006377221);
   r9Phot_dataZ_EE__6->SetBinError(1,4.999721e-06);
   r9Phot_dataZ_EE__6->SetBinError(2,8.902308e-07);
   r9Phot_dataZ_EE__6->SetBinError(9,9.554928e-07);
   r9Phot_dataZ_EE__6->SetBinError(14,2.047475e-06);
   r9Phot_dataZ_EE__6->SetBinError(15,2.233638e-06);
   r9Phot_dataZ_EE__6->SetBinError(16,5.153129e-05);
   r9Phot_dataZ_EE__6->SetBinError(17,5.626921e-06);
   r9Phot_dataZ_EE__6->SetBinError(18,3.037843e-05);
   r9Phot_dataZ_EE__6->SetBinError(19,1.730376e-05);
   r9Phot_dataZ_EE__6->SetBinError(20,3.004034e-05);
   r9Phot_dataZ_EE__6->SetBinError(21,3.44126e-05);
   r9Phot_dataZ_EE__6->SetBinError(22,2.882112e-05);
   r9Phot_dataZ_EE__6->SetBinError(23,4.253612e-05);
   r9Phot_dataZ_EE__6->SetBinError(24,2.271232e-05);
   r9Phot_dataZ_EE__6->SetBinError(25,2.877414e-05);
   r9Phot_dataZ_EE__6->SetBinError(26,0.0001700405);
   r9Phot_dataZ_EE__6->SetBinError(27,3.098783e-05);
   r9Phot_dataZ_EE__6->SetBinError(28,2.604383e-05);
   r9Phot_dataZ_EE__6->SetBinError(29,4.390363e-05);
   r9Phot_dataZ_EE__6->SetBinError(30,5.996129e-05);
   r9Phot_dataZ_EE__6->SetBinError(31,4.584082e-05);
   r9Phot_dataZ_EE__6->SetBinError(32,7.487809e-05);
   r9Phot_dataZ_EE__6->SetBinError(33,7.421602e-05);
   r9Phot_dataZ_EE__6->SetBinError(34,6.91904e-05);
   r9Phot_dataZ_EE__6->SetBinError(35,7.496892e-05);
   r9Phot_dataZ_EE__6->SetBinError(36,8.539617e-05);
   r9Phot_dataZ_EE__6->SetBinError(37,9.491934e-05);
   r9Phot_dataZ_EE__6->SetBinError(38,8.41857e-05);
   r9Phot_dataZ_EE__6->SetBinError(39,9.896622e-05);
   r9Phot_dataZ_EE__6->SetBinError(40,8.673235e-05);
   r9Phot_dataZ_EE__6->SetBinError(41,0.0001079921);
   r9Phot_dataZ_EE__6->SetBinError(42,0.0001150403);
   r9Phot_dataZ_EE__6->SetBinError(43,0.0001245727);
   r9Phot_dataZ_EE__6->SetBinError(44,0.0001252666);
   r9Phot_dataZ_EE__6->SetBinError(45,0.0001407171);
   r9Phot_dataZ_EE__6->SetBinError(46,0.0001366814);
   r9Phot_dataZ_EE__6->SetBinError(47,0.0001565453);
   r9Phot_dataZ_EE__6->SetBinError(48,0.0001821845);
   r9Phot_dataZ_EE__6->SetBinError(49,0.0001803174);
   r9Phot_dataZ_EE__6->SetBinError(50,0.0001959314);
   r9Phot_dataZ_EE__6->SetBinError(51,0.0002494076);
   r9Phot_dataZ_EE__6->SetBinError(52,0.0002624276);
   r9Phot_dataZ_EE__6->SetBinError(53,0.0003189743);
   r9Phot_dataZ_EE__6->SetBinError(54,0.0003806768);
   r9Phot_dataZ_EE__6->SetBinError(55,0.0004618753);
   r9Phot_dataZ_EE__6->SetBinError(56,0.0006727255);
   r9Phot_dataZ_EE__6->SetBinError(57,0.001100982);
   r9Phot_dataZ_EE__6->SetBinError(58,0.001881554);
   r9Phot_dataZ_EE__6->SetBinError(59,0.002692175);
   r9Phot_dataZ_EE__6->SetBinError(60,0.0004303626);
   r9Phot_dataZ_EE__6->SetBinError(61,4.760757e-05);
   r9Phot_dataZ_EE__6->SetMinimum(4.016984e-07);
   r9Phot_dataZ_EE__6->SetMaximum(1.66822);
   r9Phot_dataZ_EE__6->SetEntries(150258);
   r9Phot_dataZ_EE__6->SetDirectory(0);
   r9Phot_dataZ_EE__6->SetStats(0);
   r9Phot_dataZ_EE__6->SetMarkerStyle(20);
   r9Phot_dataZ_EE__6->SetMarkerSize(0.7);
   r9Phot_dataZ_EE__6->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   r9Phot_dataZ_EE__6->GetYaxis()->SetTitle("Entries/0.0166666666667");
   r9Phot_dataZ_EE__6->GetYaxis()->SetTitleOffset(0.9);
   r9Phot_dataZ_EE__6->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.167098e-312,1.184667e-312,1.897212e-321,9.48606e-322,NULL,"brNDC");
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
   entry=leg->AddEntry("r9Phot_dataZ_EE","DataZ Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("r9Phot_mc_Signal_EE","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","r9Phot_dataZ_EE",60,0,1);
   ratio->SetBinContent(23,294.4265);
   ratio->SetBinContent(25,48.03818);
   ratio->SetBinContent(30,192.1151);
   ratio->SetBinContent(31,170.9006);
   ratio->SetBinContent(34,186.3111);
   ratio->SetBinContent(36,884.5984);
   ratio->SetBinContent(37,243.7859);
   ratio->SetBinContent(38,542.4216);
   ratio->SetBinContent(39,137.9495);
   ratio->SetBinContent(40,152.5042);
   ratio->SetBinContent(41,58.49665);
   ratio->SetBinContent(42,93.00845);
   ratio->SetBinContent(43,29.09268);
   ratio->SetBinContent(44,38.31623);
   ratio->SetBinContent(45,29.34756);
   ratio->SetBinContent(46,20.90103);
   ratio->SetBinContent(47,19.49167);
   ratio->SetBinContent(48,15.31184);
   ratio->SetBinContent(49,9.128925);
   ratio->SetBinContent(50,7.063143);
   ratio->SetBinContent(51,5.379956);
   ratio->SetBinContent(52,3.948812);
   ratio->SetBinContent(53,2.937614);
   ratio->SetBinContent(54,2.326974);
   ratio->SetBinContent(55,1.92954);
   ratio->SetBinContent(56,1.941976);
   ratio->SetBinContent(57,1.8663);
   ratio->SetBinContent(58,1.422019);
   ratio->SetBinContent(59,0.4868497);
   ratio->SetBinContent(60,0.7170469);
   ratio->SetBinContent(61,42.06109);
   ratio->SetBinError(23,300.1388);
   ratio->SetBinError(25,49.02567);
   ratio->SetBinError(30,193.4377);
   ratio->SetBinError(31,171.7704);
   ratio->SetBinError(34,139.8404);
   ratio->SetBinError(36,886.3136);
   ratio->SetBinError(37,139.6159);
   ratio->SetBinError(38,543.4942);
   ratio->SetBinError(39,111.6497);
   ratio->SetBinError(40,76.02791);
   ratio->SetBinError(41,22.69533);
   ratio->SetBinError(42,38.84512);
   ratio->SetBinError(43,13.15049);
   ratio->SetBinError(44,11.66587);
   ratio->SetBinError(45,8.12403);
   ratio->SetBinError(46,3.856983);
   ratio->SetBinError(47,2.934282);
   ratio->SetBinError(48,1.796558);
   ratio->SetBinError(49,0.7550236);
   ratio->SetBinError(50,0.4540286);
   ratio->SetBinError(51,0.2956123);
   ratio->SetBinError(52,0.1805609);
   ratio->SetBinError(53,0.1018377);
   ratio->SetBinError(54,0.06324171);
   ratio->SetBinError(55,0.03985978);
   ratio->SetBinError(56,0.04728276);
   ratio->SetBinError(57,0.04463562);
   ratio->SetBinError(58,0.01591471);
   ratio->SetBinError(59,0.005205362);
   ratio->SetBinError(60,0.02764156);
   ratio->SetBinError(61,16.65226);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7.857649);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PE");
   TLine *line = new TLine(0,1,1,1);
   line->SetLineColor(4);
   line->SetLineWidth(2);
   line->Draw();
   
   TH1F *ratio = new TH1F("ratio","r9Phot_dataZ_EE",60,0,1);
   ratio->SetBinContent(23,294.4265);
   ratio->SetBinContent(25,48.03818);
   ratio->SetBinContent(30,192.1151);
   ratio->SetBinContent(31,170.9006);
   ratio->SetBinContent(34,186.3111);
   ratio->SetBinContent(36,884.5984);
   ratio->SetBinContent(37,243.7859);
   ratio->SetBinContent(38,542.4216);
   ratio->SetBinContent(39,137.9495);
   ratio->SetBinContent(40,152.5042);
   ratio->SetBinContent(41,58.49665);
   ratio->SetBinContent(42,93.00845);
   ratio->SetBinContent(43,29.09268);
   ratio->SetBinContent(44,38.31623);
   ratio->SetBinContent(45,29.34756);
   ratio->SetBinContent(46,20.90103);
   ratio->SetBinContent(47,19.49167);
   ratio->SetBinContent(48,15.31184);
   ratio->SetBinContent(49,9.128925);
   ratio->SetBinContent(50,7.063143);
   ratio->SetBinContent(51,5.379956);
   ratio->SetBinContent(52,3.948812);
   ratio->SetBinContent(53,2.937614);
   ratio->SetBinContent(54,2.326974);
   ratio->SetBinContent(55,1.92954);
   ratio->SetBinContent(56,1.941976);
   ratio->SetBinContent(57,1.8663);
   ratio->SetBinContent(58,1.422019);
   ratio->SetBinContent(59,0.4868497);
   ratio->SetBinContent(60,0.7170469);
   ratio->SetBinContent(61,42.06109);
   ratio->SetBinError(23,300.1388);
   ratio->SetBinError(25,49.02567);
   ratio->SetBinError(30,193.4377);
   ratio->SetBinError(31,171.7704);
   ratio->SetBinError(34,139.8404);
   ratio->SetBinError(36,886.3136);
   ratio->SetBinError(37,139.6159);
   ratio->SetBinError(38,543.4942);
   ratio->SetBinError(39,111.6497);
   ratio->SetBinError(40,76.02791);
   ratio->SetBinError(41,22.69533);
   ratio->SetBinError(42,38.84512);
   ratio->SetBinError(43,13.15049);
   ratio->SetBinError(44,11.66587);
   ratio->SetBinError(45,8.12403);
   ratio->SetBinError(46,3.856983);
   ratio->SetBinError(47,2.934282);
   ratio->SetBinError(48,1.796558);
   ratio->SetBinError(49,0.7550236);
   ratio->SetBinError(50,0.4540286);
   ratio->SetBinError(51,0.2956123);
   ratio->SetBinError(52,0.1805609);
   ratio->SetBinError(53,0.1018377);
   ratio->SetBinError(54,0.06324171);
   ratio->SetBinError(55,0.03985978);
   ratio->SetBinError(56,0.04728276);
   ratio->SetBinError(57,0.04463562);
   ratio->SetBinError(58,0.01591471);
   ratio->SetBinError(59,0.005205362);
   ratio->SetBinError(60,0.02764156);
   ratio->SetBinError(61,16.65226);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7.857649);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("R9 Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
