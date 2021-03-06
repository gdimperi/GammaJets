{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Sat Nov 29 17:29:02 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.09268281,6.525,0.8341452);
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
   pfIsoCharged03_dataZ_EB__10->SetBinContent(1,0.7134944);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(2,0.001631804);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(3,0.0226015);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(4,0.02966266);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(5,0.02907881);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(6,0.02552822);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(7,0.02225167);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(8,0.018921);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(9,0.01674651);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(10,0.01431878);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(11,0.01226922);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(12,0.0106283);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(13,0.009290565);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(14,0.00814933);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(15,0.007253439);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(16,0.006445589);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(17,0.005453165);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(18,0.004696816);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(19,0.004474741);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(20,0.003973549);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(21,0.003456733);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(22,0.003153004);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(23,0.002699313);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(24,0.002546899);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(25,0.002011782);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(26,0.001949344);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(27,0.001816319);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(28,0.001655664);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(29,0.001426055);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(30,0.001318871);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(31,0.0009909985);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(32,0.001062624);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(33,0.0009926895);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(34,0.0008698291);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(35,0.0007946707);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(36,0.0007058362);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(37,0.0007267717);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(38,0.000605887);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(39,0.0005750812);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(40,0.0005082585);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(41,0.0004690541);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(42,0.0003928818);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(43,0.000334944);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(44,0.0004008821);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(45,0.0003197314);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(46,0.0002961183);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(47,0.0002752501);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(48,0.0002947699);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(49,0.0002471729);
   pfIsoCharged03_dataZ_EB__10->SetBinContent(50,0.0002325308);
   pfIsoCharged03_dataZ_EB__10->SetBinError(1,0.001487237);
   pfIsoCharged03_dataZ_EB__10->SetBinError(2,7.073697e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(3,0.0002669824);
   pfIsoCharged03_dataZ_EB__10->SetBinError(4,0.000304872);
   pfIsoCharged03_dataZ_EB__10->SetBinError(5,0.0003022958);
   pfIsoCharged03_dataZ_EB__10->SetBinError(6,0.0002810156);
   pfIsoCharged03_dataZ_EB__10->SetBinError(7,0.0002650067);
   pfIsoCharged03_dataZ_EB__10->SetBinError(8,0.0002431546);
   pfIsoCharged03_dataZ_EB__10->SetBinError(9,0.0002313594);
   pfIsoCharged03_dataZ_EB__10->SetBinError(10,0.0002143784);
   pfIsoCharged03_dataZ_EB__10->SetBinError(11,0.0001959146);
   pfIsoCharged03_dataZ_EB__10->SetBinError(12,0.0001828051);
   pfIsoCharged03_dataZ_EB__10->SetBinError(13,0.0001700422);
   pfIsoCharged03_dataZ_EB__10->SetBinError(14,0.000159175);
   pfIsoCharged03_dataZ_EB__10->SetBinError(15,0.0001524675);
   pfIsoCharged03_dataZ_EB__10->SetBinError(16,0.0001461406);
   pfIsoCharged03_dataZ_EB__10->SetBinError(17,0.0001291291);
   pfIsoCharged03_dataZ_EB__10->SetBinError(18,0.0001230597);
   pfIsoCharged03_dataZ_EB__10->SetBinError(19,0.0001207621);
   pfIsoCharged03_dataZ_EB__10->SetBinError(20,0.0001097981);
   pfIsoCharged03_dataZ_EB__10->SetBinError(21,0.0001042645);
   pfIsoCharged03_dataZ_EB__10->SetBinError(22,0.0001016812);
   pfIsoCharged03_dataZ_EB__10->SetBinError(23,9.176438e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(24,9.065233e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(25,7.837684e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(26,7.783618e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(27,7.587601e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(28,7.682274e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(29,6.924751e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(30,6.530789e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(31,5.279876e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(32,5.823682e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(33,6.263581e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(34,5.417243e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(35,4.911807e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(36,4.815845e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(37,4.972561e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(38,4.360461e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(39,4.171999e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(40,3.935513e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(41,3.804078e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(42,3.532546e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(43,3.136832e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(44,3.406225e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(45,3.096078e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(46,2.974356e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(47,3.124432e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(48,3.017096e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(49,2.753181e-05);
   pfIsoCharged03_dataZ_EB__10->SetBinError(50,2.447076e-05);
   pfIsoCharged03_dataZ_EB__10->SetMinimum(8.921829e-09);
   pfIsoCharged03_dataZ_EB__10->SetMaximum(3.995568);
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
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(1,0.6932344);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(2,0.001556429);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(3,0.02294185);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(4,0.03017627);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(5,0.02935921);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(6,0.02896656);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(7,0.02334623);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(8,0.02140221);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(9,0.01712635);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(10,0.0149885);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(11,0.01406088);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(12,0.0126036);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(13,0.01050664);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(14,0.009106316);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(15,0.00795621);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(16,0.007024421);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(17,0.006329888);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(18,0.005232362);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(19,0.006415741);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(20,0.004199225);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(21,0.00501149);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(22,0.003223412);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(23,0.002695888);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(24,0.002793659);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(25,0.00221166);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(26,0.002239337);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(27,0.002103399);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(28,0.00152225);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(29,0.001564319);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(30,0.001429195);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(31,0.001045469);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(32,0.0007904433);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(33,0.001213892);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(34,0.0009250308);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(35,0.0006876458);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(36,0.0005802218);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(37,0.0006007574);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(38,0.0005586409);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(39,0.0004434134);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(40,0.0002611396);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(41,0.000379955);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(42,0.0001633088);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(43,0.0001598282);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(44,0.0002281376);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(45,9.827566e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(46,0.0001078785);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(47,6.348829e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(48,0.000149141);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(49,0.0001355207);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(50,7.986882e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(1,0.006124512);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(2,0.0001198421);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(3,0.001625704);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(4,0.000566631);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(5,0.000544778);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(6,0.001624711);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(7,0.0005158605);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(8,0.0006759249);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(9,0.0004887977);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(10,0.0004121469);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(11,0.001069235);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(12,0.001394477);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(13,0.0003876211);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(14,0.0003494809);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(15,0.0003288563);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(16,0.0002907122);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(17,0.0002967643);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(18,0.0002462616);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(19,0.001408827);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(20,0.0002348011);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(21,0.001270464);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(22,0.0001963845);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(23,0.0001882902);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(24,0.0002147986);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(25,0.0001697991);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(26,0.0001898);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(27,0.0001796113);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(28,0.0001292926);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(29,0.0001736395);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(30,0.0001702301);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(31,0.0001410784);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(32,9.041246e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(33,0.0001833848);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(34,0.0001300497);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(35,0.0001103987);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(36,0.0001056278);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(37,0.0001028367);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(38,0.0001154471);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(39,8.874167e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(40,5.798596e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(41,0.0001117453);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(42,5.783737e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(43,5.944747e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(44,7.471829e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(45,2.289806e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(46,5.517008e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(47,1.400101e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(48,6.346906e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(49,5.611781e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(50,4.746732e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetEntries(303504);
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
   pfIsoCharged03_dataZ_EB__12->SetBinContent(1,0.7134944);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(2,0.001631804);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(3,0.0226015);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(4,0.02966266);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(5,0.02907881);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(6,0.02552822);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(7,0.02225167);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(8,0.018921);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(9,0.01674651);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(10,0.01431878);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(11,0.01226922);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(12,0.0106283);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(13,0.009290565);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(14,0.00814933);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(15,0.007253439);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(16,0.006445589);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(17,0.005453165);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(18,0.004696816);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(19,0.004474741);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(20,0.003973549);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(21,0.003456733);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(22,0.003153004);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(23,0.002699313);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(24,0.002546899);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(25,0.002011782);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(26,0.001949344);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(27,0.001816319);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(28,0.001655664);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(29,0.001426055);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(30,0.001318871);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(31,0.0009909985);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(32,0.001062624);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(33,0.0009926895);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(34,0.0008698291);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(35,0.0007946707);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(36,0.0007058362);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(37,0.0007267717);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(38,0.000605887);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(39,0.0005750812);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(40,0.0005082585);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(41,0.0004690541);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(42,0.0003928818);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(43,0.000334944);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(44,0.0004008821);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(45,0.0003197314);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(46,0.0002961183);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(47,0.0002752501);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(48,0.0002947699);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(49,0.0002471729);
   pfIsoCharged03_dataZ_EB__12->SetBinContent(50,0.0002325308);
   pfIsoCharged03_dataZ_EB__12->SetBinError(1,0.001487237);
   pfIsoCharged03_dataZ_EB__12->SetBinError(2,7.073697e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(3,0.0002669824);
   pfIsoCharged03_dataZ_EB__12->SetBinError(4,0.000304872);
   pfIsoCharged03_dataZ_EB__12->SetBinError(5,0.0003022958);
   pfIsoCharged03_dataZ_EB__12->SetBinError(6,0.0002810156);
   pfIsoCharged03_dataZ_EB__12->SetBinError(7,0.0002650067);
   pfIsoCharged03_dataZ_EB__12->SetBinError(8,0.0002431546);
   pfIsoCharged03_dataZ_EB__12->SetBinError(9,0.0002313594);
   pfIsoCharged03_dataZ_EB__12->SetBinError(10,0.0002143784);
   pfIsoCharged03_dataZ_EB__12->SetBinError(11,0.0001959146);
   pfIsoCharged03_dataZ_EB__12->SetBinError(12,0.0001828051);
   pfIsoCharged03_dataZ_EB__12->SetBinError(13,0.0001700422);
   pfIsoCharged03_dataZ_EB__12->SetBinError(14,0.000159175);
   pfIsoCharged03_dataZ_EB__12->SetBinError(15,0.0001524675);
   pfIsoCharged03_dataZ_EB__12->SetBinError(16,0.0001461406);
   pfIsoCharged03_dataZ_EB__12->SetBinError(17,0.0001291291);
   pfIsoCharged03_dataZ_EB__12->SetBinError(18,0.0001230597);
   pfIsoCharged03_dataZ_EB__12->SetBinError(19,0.0001207621);
   pfIsoCharged03_dataZ_EB__12->SetBinError(20,0.0001097981);
   pfIsoCharged03_dataZ_EB__12->SetBinError(21,0.0001042645);
   pfIsoCharged03_dataZ_EB__12->SetBinError(22,0.0001016812);
   pfIsoCharged03_dataZ_EB__12->SetBinError(23,9.176438e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(24,9.065233e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(25,7.837684e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(26,7.783618e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(27,7.587601e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(28,7.682274e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(29,6.924751e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(30,6.530789e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(31,5.279876e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(32,5.823682e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(33,6.263581e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(34,5.417243e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(35,4.911807e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(36,4.815845e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(37,4.972561e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(38,4.360461e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(39,4.171999e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(40,3.935513e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(41,3.804078e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(42,3.532546e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(43,3.136832e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(44,3.406225e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(45,3.096078e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(46,2.974356e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(47,3.124432e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(48,3.017096e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(49,2.753181e-05);
   pfIsoCharged03_dataZ_EB__12->SetBinError(50,2.447076e-05);
   pfIsoCharged03_dataZ_EB__12->SetMinimum(8.921829e-09);
   pfIsoCharged03_dataZ_EB__12->SetMaximum(3.995568);
   pfIsoCharged03_dataZ_EB__12->SetEntries(533216);
   pfIsoCharged03_dataZ_EB__12->SetDirectory(0);
   pfIsoCharged03_dataZ_EB__12->SetStats(0);
   pfIsoCharged03_dataZ_EB__12->SetMarkerStyle(20);
   pfIsoCharged03_dataZ_EB__12->SetMarkerSize(0.7);
   pfIsoCharged03_dataZ_EB__12->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_dataZ_EB__12->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_dataZ_EB__12->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_dataZ_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(0.94,2.363948e-310,4.244024e-314,1.5,NULL,"brNDC");
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
   ratio->SetBinContent(1,1.029225);
   ratio->SetBinContent(2,1.048429);
   ratio->SetBinContent(3,0.9851646);
   ratio->SetBinContent(4,0.9829798);
   ratio->SetBinContent(5,0.9904492);
   ratio->SetBinContent(6,0.8812998);
   ratio->SetBinContent(7,0.9531163);
   ratio->SetBinContent(8,0.8840677);
   ratio->SetBinContent(9,0.9778215);
   ratio->SetBinContent(10,0.9553179);
   ratio->SetBinContent(11,0.8725785);
   ratio->SetBinContent(12,0.8432753);
   ratio->SetBinContent(13,0.8842567);
   ratio->SetBinContent(14,0.8949096);
   ratio->SetBinContent(15,0.9116701);
   ratio->SetBinContent(16,0.9175971);
   ratio->SetBinContent(17,0.8614948);
   ratio->SetBinContent(18,0.8976473);
   ratio->SetBinContent(19,0.6974629);
   ratio->SetBinContent(20,0.9462578);
   ratio->SetBinContent(21,0.6897616);
   ratio->SetBinContent(22,0.9781572);
   ratio->SetBinContent(23,1.001271);
   ratio->SetBinContent(24,0.9116714);
   ratio->SetBinContent(25,0.9096253);
   ratio->SetBinContent(26,0.8705003);
   ratio->SetBinContent(27,0.863516);
   ratio->SetBinContent(28,1.087643);
   ratio->SetBinContent(29,0.9116136);
   ratio->SetBinContent(30,0.9228068);
   ratio->SetBinContent(31,0.9478986);
   ratio->SetBinContent(32,1.34434);
   ratio->SetBinContent(33,0.817774);
   ratio->SetBinContent(34,0.9403245);
   ratio->SetBinContent(35,1.15564);
   ratio->SetBinContent(36,1.216494);
   ratio->SetBinContent(37,1.209759);
   ratio->SetBinContent(38,1.084573);
   ratio->SetBinContent(39,1.296941);
   ratio->SetBinContent(40,1.94631);
   ratio->SetBinContent(41,1.234499);
   ratio->SetBinContent(42,2.40576);
   ratio->SetBinContent(43,2.095651);
   ratio->SetBinContent(44,1.757194);
   ratio->SetBinContent(45,3.253414);
   ratio->SetBinContent(46,2.744924);
   ratio->SetBinContent(47,4.335447);
   ratio->SetBinContent(48,1.976452);
   ratio->SetBinContent(49,1.823875);
   ratio->SetBinContent(50,2.911408);
   ratio->SetBinError(1,0.009342545);
   ratio->SetBinError(2,0.09264124);
   ratio->SetBinError(3,0.07077398);
   ratio->SetBinError(4,0.02104189);
   ratio->SetBinError(5,0.02106614);
   ratio->SetBinError(6,0.05037439);
   ratio->SetBinError(7,0.02392443);
   ratio->SetBinError(8,0.03014364);
   ratio->SetBinError(9,0.03100535);
   ratio->SetBinError(10,0.02991031);
   ratio->SetBinError(11,0.06780084);
   ratio->SetBinError(12,0.09442163);
   ratio->SetBinError(13,0.03641678);
   ratio->SetBinError(14,0.03853695);
   ratio->SetBinError(15,0.04227518);
   ratio->SetBinError(16,0.04330105);
   ratio->SetBinError(17,0.04524894);
   ratio->SetBinError(18,0.0483531);
   ratio->SetBinError(19,0.1543076);
   ratio->SetBinError(20,0.05901848);
   ratio->SetBinError(21,0.176095);
   ratio->SetBinError(22,0.06742745);
   ratio->SetBinError(23,0.07777627);
   ratio->SetBinError(24,0.07724299);
   ratio->SetBinError(25,0.07831299);
   ratio->SetBinError(26,0.08155871);
   ratio->SetBinError(27,0.08208734);
   ratio->SetBinError(28,0.1052654);
   ratio->SetBinError(29,0.1104482);
   ratio->SetBinError(30,0.119035);
   ratio->SetBinError(31,0.1375209);
   ratio->SetBinError(32,0.1705076);
   ratio->SetBinError(33,0.1338851);
   ratio->SetBinError(34,0.1445904);
   ratio->SetBinError(35,0.1988081);
   ratio->SetBinError(36,0.2365022);
   ratio->SetBinError(37,0.2230139);
   ratio->SetBinError(38,0.2373372);
   ratio->SetBinError(39,0.2760877);
   ratio->SetBinError(40,0.4577003);
   ratio->SetBinError(41,0.3766196);
   ratio->SetBinError(42,0.8790524);
   ratio->SetBinError(43,0.8037983);
   ratio->SetBinError(44,0.5945581);
   ratio->SetBinError(45,0.8208988);
   ratio->SetBinError(46,1.4306);
   ratio->SetBinError(47,1.075314);
   ratio->SetBinError(48,0.8650927);
   ratio->SetBinError(49,0.7820951);
   ratio->SetBinError(50,1.757214);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(373.4211);
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
   ratio->SetBinContent(1,1.029225);
   ratio->SetBinContent(2,1.048429);
   ratio->SetBinContent(3,0.9851646);
   ratio->SetBinContent(4,0.9829798);
   ratio->SetBinContent(5,0.9904492);
   ratio->SetBinContent(6,0.8812998);
   ratio->SetBinContent(7,0.9531163);
   ratio->SetBinContent(8,0.8840677);
   ratio->SetBinContent(9,0.9778215);
   ratio->SetBinContent(10,0.9553179);
   ratio->SetBinContent(11,0.8725785);
   ratio->SetBinContent(12,0.8432753);
   ratio->SetBinContent(13,0.8842567);
   ratio->SetBinContent(14,0.8949096);
   ratio->SetBinContent(15,0.9116701);
   ratio->SetBinContent(16,0.9175971);
   ratio->SetBinContent(17,0.8614948);
   ratio->SetBinContent(18,0.8976473);
   ratio->SetBinContent(19,0.6974629);
   ratio->SetBinContent(20,0.9462578);
   ratio->SetBinContent(21,0.6897616);
   ratio->SetBinContent(22,0.9781572);
   ratio->SetBinContent(23,1.001271);
   ratio->SetBinContent(24,0.9116714);
   ratio->SetBinContent(25,0.9096253);
   ratio->SetBinContent(26,0.8705003);
   ratio->SetBinContent(27,0.863516);
   ratio->SetBinContent(28,1.087643);
   ratio->SetBinContent(29,0.9116136);
   ratio->SetBinContent(30,0.9228068);
   ratio->SetBinContent(31,0.9478986);
   ratio->SetBinContent(32,1.34434);
   ratio->SetBinContent(33,0.817774);
   ratio->SetBinContent(34,0.9403245);
   ratio->SetBinContent(35,1.15564);
   ratio->SetBinContent(36,1.216494);
   ratio->SetBinContent(37,1.209759);
   ratio->SetBinContent(38,1.084573);
   ratio->SetBinContent(39,1.296941);
   ratio->SetBinContent(40,1.94631);
   ratio->SetBinContent(41,1.234499);
   ratio->SetBinContent(42,2.40576);
   ratio->SetBinContent(43,2.095651);
   ratio->SetBinContent(44,1.757194);
   ratio->SetBinContent(45,3.253414);
   ratio->SetBinContent(46,2.744924);
   ratio->SetBinContent(47,4.335447);
   ratio->SetBinContent(48,1.976452);
   ratio->SetBinContent(49,1.823875);
   ratio->SetBinContent(50,2.911408);
   ratio->SetBinError(1,0.009342545);
   ratio->SetBinError(2,0.09264124);
   ratio->SetBinError(3,0.07077398);
   ratio->SetBinError(4,0.02104189);
   ratio->SetBinError(5,0.02106614);
   ratio->SetBinError(6,0.05037439);
   ratio->SetBinError(7,0.02392443);
   ratio->SetBinError(8,0.03014364);
   ratio->SetBinError(9,0.03100535);
   ratio->SetBinError(10,0.02991031);
   ratio->SetBinError(11,0.06780084);
   ratio->SetBinError(12,0.09442163);
   ratio->SetBinError(13,0.03641678);
   ratio->SetBinError(14,0.03853695);
   ratio->SetBinError(15,0.04227518);
   ratio->SetBinError(16,0.04330105);
   ratio->SetBinError(17,0.04524894);
   ratio->SetBinError(18,0.0483531);
   ratio->SetBinError(19,0.1543076);
   ratio->SetBinError(20,0.05901848);
   ratio->SetBinError(21,0.176095);
   ratio->SetBinError(22,0.06742745);
   ratio->SetBinError(23,0.07777627);
   ratio->SetBinError(24,0.07724299);
   ratio->SetBinError(25,0.07831299);
   ratio->SetBinError(26,0.08155871);
   ratio->SetBinError(27,0.08208734);
   ratio->SetBinError(28,0.1052654);
   ratio->SetBinError(29,0.1104482);
   ratio->SetBinError(30,0.119035);
   ratio->SetBinError(31,0.1375209);
   ratio->SetBinError(32,0.1705076);
   ratio->SetBinError(33,0.1338851);
   ratio->SetBinError(34,0.1445904);
   ratio->SetBinError(35,0.1988081);
   ratio->SetBinError(36,0.2365022);
   ratio->SetBinError(37,0.2230139);
   ratio->SetBinError(38,0.2373372);
   ratio->SetBinError(39,0.2760877);
   ratio->SetBinError(40,0.4577003);
   ratio->SetBinError(41,0.3766196);
   ratio->SetBinError(42,0.8790524);
   ratio->SetBinError(43,0.8037983);
   ratio->SetBinError(44,0.5945581);
   ratio->SetBinError(45,0.8208988);
   ratio->SetBinError(46,1.4306);
   ratio->SetBinError(47,1.075314);
   ratio->SetBinError(48,0.8650927);
   ratio->SetBinError(49,0.7820951);
   ratio->SetBinError(50,1.757214);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(373.4211);
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
