{
//=========Macro generated from canvas: pid_pfIsoCharged03ForCiC/pid_pfIsoCharged03ForCiC
//=========  (Sat Nov 29 19:43:03 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoCharged03ForCiC = new TCanvas("pid_pfIsoCharged03ForCiC", "pid_pfIsoCharged03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoCharged03ForCiC->SetHighLightColor(2);
   pid_pfIsoCharged03ForCiC->Range(-0.9749999,-0.09322542,6.525,0.8390288);
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
   
   TH1F *pfIsoCharged03_mc_Z_EB__10 = new TH1F("pfIsoCharged03_mc_Z_EB__10","pfIsoCharged03_mc_Z_EB",60,0,6);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(1,0.7149472);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(2,0.001210116);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(3,0.02143653);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(4,0.0295179);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(5,0.0303225);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(6,0.02583676);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(7,0.02247403);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(8,0.0199073);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(9,0.01690072);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(10,0.0141979);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(11,0.01172308);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(12,0.01072742);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(13,0.009755272);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(14,0.008577308);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(15,0.007024394);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(16,0.006156187);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(17,0.005269859);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(18,0.004808734);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(19,0.004480093);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(20,0.003051272);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(21,0.003245199);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(22,0.003096308);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(23,0.002472778);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(24,0.002315704);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(25,0.002422891);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(26,0.001749317);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(27,0.001732124);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(28,0.001566717);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(29,0.001472948);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(30,0.001305292);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(31,0.001078993);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(32,0.001325086);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(33,0.0006325091);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(34,0.0006903604);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(35,0.0007504848);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(36,0.0005684565);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(37,0.000490013);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(38,0.0004078269);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(39,0.0004193691);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(40,0.0005318731);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(41,0.0004738175);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(42,0.0004788372);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(43,0.0003070887);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(44,0.000452747);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(45,0.000418022);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(46,0.0003127808);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(47,0.0003122742);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(48,0.0002118044);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(49,0.0002783792);
   pfIsoCharged03_mc_Z_EB__10->SetBinContent(50,0.0001554851);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(1,0.004220334);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(2,0.0001849624);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(3,0.0007844361);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(4,0.0008470315);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(5,0.0009027479);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(6,0.0008008306);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(7,0.0007664265);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(8,0.0007181865);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(9,0.0006595903);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(10,0.0006063477);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(11,0.000540886);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(12,0.0005627973);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(13,0.000509073);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(14,0.000461287);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(15,0.0004405882);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(16,0.0004072597);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(17,0.0003840066);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(18,0.0003644519);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(19,0.0003461077);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(20,0.0002670448);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(21,0.0002970539);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(22,0.0002665526);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(23,0.0002267428);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(24,0.0002313344);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(25,0.0003276604);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(26,0.000211053);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(27,0.0002035736);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(28,0.0002002125);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(29,0.0002244423);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(30,0.0001939296);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(31,0.000155948);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(32,0.00024825);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(33,0.0001172711);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(34,0.0001139744);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(35,0.0001248017);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(36,9.838757e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(37,0.0001248483);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(38,0.0001098589);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(39,9.025053e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(40,0.0001291777);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(41,9.68143e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(42,0.0001011613);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(43,7.778745e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(44,0.0001060521);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(45,0.0001031307);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(46,0.0001086465);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(47,0.000108274);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(48,6.744427e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(49,7.842033e-05);
   pfIsoCharged03_mc_Z_EB__10->SetBinError(50,4.905256e-05);
   pfIsoCharged03_mc_Z_EB__10->SetMinimum(4.441452e-07);
   pfIsoCharged03_mc_Z_EB__10->SetMaximum(4.003704);
   pfIsoCharged03_mc_Z_EB__10->SetEntries(78589);
   pfIsoCharged03_mc_Z_EB__10->SetDirectory(0);
   pfIsoCharged03_mc_Z_EB__10->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__10->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__10->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EB__10->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EB__10->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EB__10->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EB__10->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EB__10->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EB__10->Draw("PE");
   
   TH1F *pfIsoCharged03_mc_Signal_EB__11 = new TH1F("pfIsoCharged03_mc_Signal_EB__11","pfIsoCharged03_mc_Signal_EB",60,0,6);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(1,0.7022057);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(2,0.001403889);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(3,0.02193832);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(4,0.03140904);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(5,0.03143524);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(6,0.02757254);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(7,0.02421632);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(8,0.02017908);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(9,0.0173564);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(10,0.01472206);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(11,0.01282063);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(12,0.0116502);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(13,0.009880459);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(14,0.009046478);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(15,0.007464977);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(16,0.006620937);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(17,0.0056747);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(18,0.005079023);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(19,0.004615955);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(20,0.004258096);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(21,0.00360934);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(22,0.003188054);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(23,0.002799276);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(24,0.002436404);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(25,0.002132688);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(26,0.00202717);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(27,0.001880004);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(28,0.001534212);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(29,0.001353887);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(30,0.00127958);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(31,0.001129908);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(32,0.00101017);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(33,0.0009076927);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(34,0.00113446);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(35,0.0007338105);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(36,0.0005421594);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(37,0.0004616368);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(38,0.0004397476);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(39,0.0003285567);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(40,0.0002987306);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(41,0.000165165);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(42,0.0001770285);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(43,0.0001159054);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(44,0.0001130644);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(45,0.0001096332);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(46,0.0001432439);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(47,0.0001221899);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(48,9.720568e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(49,9.52159e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinContent(50,8.383918e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(1,0.002158466);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(2,5.199312e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(3,0.0001989958);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(4,0.0005099014);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(5,0.000562344);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(6,0.0003220993);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(7,0.000451298);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(8,0.0001865495);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(9,0.0001726927);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(10,0.0001624982);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(11,0.0001507115);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(12,0.0003409112);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(13,0.0001311777);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(14,0.0003694718);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(15,0.0001166908);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(16,0.0001058689);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(17,0.0001033799);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(18,9.428799e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(19,9.902796e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(20,9.927486e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(21,8.04737e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(22,8.055861e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(23,7.599834e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(24,7.074876e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(25,6.162364e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(26,6.663653e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(27,6.781019e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(28,5.908797e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(29,5.211153e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(30,5.056259e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(31,5.633938e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(32,4.918608e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(33,4.500658e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(34,0.00033742);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(35,4.475846e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(36,3.54554e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(37,2.883414e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(38,3.78927e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(39,2.699822e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(40,3.292073e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(41,1.99132e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(42,2.674008e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(43,2.154908e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(44,1.839576e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(45,2.119211e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(46,2.580567e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(47,2.286024e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(48,2.216075e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(49,2.103384e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetBinError(50,1.795357e-05);
   pfIsoCharged03_mc_Signal_EB__11->SetEntries(2212552);
   pfIsoCharged03_mc_Signal_EB__11->SetDirectory(0);
   pfIsoCharged03_mc_Signal_EB__11->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__11->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoCharged03_mc_Signal_EB__11->SetLineColor(ci);
   pfIsoCharged03_mc_Signal_EB__11->SetLineWidth(2);
   pfIsoCharged03_mc_Signal_EB__11->Draw("HSAME");
   
   TH1F *pfIsoCharged03_mc_Z_EB__12 = new TH1F("pfIsoCharged03_mc_Z_EB__12","pfIsoCharged03_mc_Z_EB",60,0,6);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(1,0.7149472);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(2,0.001210116);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(3,0.02143653);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(4,0.0295179);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(5,0.0303225);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(6,0.02583676);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(7,0.02247403);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(8,0.0199073);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(9,0.01690072);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(10,0.0141979);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(11,0.01172308);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(12,0.01072742);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(13,0.009755272);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(14,0.008577308);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(15,0.007024394);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(16,0.006156187);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(17,0.005269859);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(18,0.004808734);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(19,0.004480093);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(20,0.003051272);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(21,0.003245199);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(22,0.003096308);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(23,0.002472778);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(24,0.002315704);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(25,0.002422891);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(26,0.001749317);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(27,0.001732124);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(28,0.001566717);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(29,0.001472948);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(30,0.001305292);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(31,0.001078993);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(32,0.001325086);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(33,0.0006325091);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(34,0.0006903604);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(35,0.0007504848);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(36,0.0005684565);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(37,0.000490013);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(38,0.0004078269);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(39,0.0004193691);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(40,0.0005318731);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(41,0.0004738175);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(42,0.0004788372);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(43,0.0003070887);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(44,0.000452747);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(45,0.000418022);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(46,0.0003127808);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(47,0.0003122742);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(48,0.0002118044);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(49,0.0002783792);
   pfIsoCharged03_mc_Z_EB__12->SetBinContent(50,0.0001554851);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(1,0.004220334);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(2,0.0001849624);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(3,0.0007844361);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(4,0.0008470315);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(5,0.0009027479);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(6,0.0008008306);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(7,0.0007664265);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(8,0.0007181865);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(9,0.0006595903);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(10,0.0006063477);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(11,0.000540886);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(12,0.0005627973);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(13,0.000509073);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(14,0.000461287);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(15,0.0004405882);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(16,0.0004072597);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(17,0.0003840066);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(18,0.0003644519);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(19,0.0003461077);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(20,0.0002670448);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(21,0.0002970539);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(22,0.0002665526);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(23,0.0002267428);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(24,0.0002313344);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(25,0.0003276604);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(26,0.000211053);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(27,0.0002035736);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(28,0.0002002125);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(29,0.0002244423);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(30,0.0001939296);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(31,0.000155948);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(32,0.00024825);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(33,0.0001172711);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(34,0.0001139744);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(35,0.0001248017);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(36,9.838757e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(37,0.0001248483);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(38,0.0001098589);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(39,9.025053e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(40,0.0001291777);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(41,9.68143e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(42,0.0001011613);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(43,7.778745e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(44,0.0001060521);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(45,0.0001031307);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(46,0.0001086465);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(47,0.000108274);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(48,6.744427e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(49,7.842033e-05);
   pfIsoCharged03_mc_Z_EB__12->SetBinError(50,4.905256e-05);
   pfIsoCharged03_mc_Z_EB__12->SetMinimum(4.441452e-07);
   pfIsoCharged03_mc_Z_EB__12->SetMaximum(4.003704);
   pfIsoCharged03_mc_Z_EB__12->SetEntries(78589);
   pfIsoCharged03_mc_Z_EB__12->SetDirectory(0);
   pfIsoCharged03_mc_Z_EB__12->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__12->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoCharged03_mc_Z_EB__12->SetMarkerColor(ci);
   pfIsoCharged03_mc_Z_EB__12->SetMarkerStyle(20);
   pfIsoCharged03_mc_Z_EB__12->SetMarkerSize(0.7);
   pfIsoCharged03_mc_Z_EB__12->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   pfIsoCharged03_mc_Z_EB__12->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoCharged03_mc_Z_EB__12->GetYaxis()->SetTitleOffset(0.9);
   pfIsoCharged03_mc_Z_EB__12->Draw("PESAME");
   
   TLegend *leg = new TLegend(3.100543e+169,7.094186e+274,-2.076377e+298,-1.559133e-258,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoCharged03_mc_Z_EB","MC Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.018145);
   ratio->SetBinContent(2,0.8619741);
   ratio->SetBinContent(3,0.9771274);
   ratio->SetBinContent(4,0.9397902);
   ratio->SetBinContent(5,0.9646022);
   ratio->SetBinContent(6,0.9370466);
   ratio->SetBinContent(7,0.9280528);
   ratio->SetBinContent(8,0.9865313);
   ratio->SetBinContent(9,0.9737456);
   ratio->SetBinContent(10,0.9643961);
   ratio->SetBinContent(11,0.9143921);
   ratio->SetBinContent(12,0.9207925);
   ratio->SetBinContent(13,0.9873299);
   ratio->SetBinContent(14,0.9481378);
   ratio->SetBinContent(15,0.9409801);
   ratio->SetBinContent(16,0.9298059);
   ratio->SetBinContent(17,0.9286585);
   ratio->SetBinContent(18,0.9467832);
   ratio->SetBinContent(19,0.9705668);
   ratio->SetBinContent(20,0.7165813);
   ratio->SetBinContent(21,0.8991114);
   ratio->SetBinContent(22,0.9712221);
   ratio->SetBinContent(23,0.8833633);
   ratio->SetBinContent(24,0.9504595);
   ratio->SetBinContent(25,1.136074);
   ratio->SetBinContent(26,0.8629357);
   ratio->SetBinContent(27,0.9213407);
   ratio->SetBinContent(28,1.021187);
   ratio->SetBinContent(29,1.087941);
   ratio->SetBinContent(30,1.020094);
   ratio->SetBinContent(31,0.9549391);
   ratio->SetBinContent(32,1.311745);
   ratio->SetBinContent(33,0.6968318);
   ratio->SetBinContent(34,0.6085368);
   ratio->SetBinContent(35,1.022723);
   ratio->SetBinContent(36,1.048504);
   ratio->SetBinContent(37,1.061469);
   ratio->SetBinContent(38,0.9274114);
   ratio->SetBinContent(39,1.276398);
   ratio->SetBinContent(40,1.780444);
   ratio->SetBinContent(41,2.868753);
   ratio->SetBinContent(42,2.704859);
   ratio->SetBinContent(43,2.649477);
   ratio->SetBinContent(44,4.004329);
   ratio->SetBinContent(45,3.812913);
   ratio->SetBinContent(46,2.183554);
   ratio->SetBinContent(47,2.555647);
   ratio->SetBinContent(48,2.178931);
   ratio->SetBinContent(49,2.923664);
   ratio->SetBinContent(50,1.854564);
   ratio->SetBinError(1,0.006776128);
   ratio->SetBinError(2,0.1355624);
   ratio->SetBinError(3,0.03683856);
   ratio->SetBinError(4,0.03098434);
   ratio->SetBinError(5,0.03350324);
   ratio->SetBinError(6,0.03103882);
   ratio->SetBinError(7,0.03606656);
   ratio->SetBinError(8,0.0367406);
   ratio->SetBinError(9,0.0392183);
   ratio->SetBinError(10,0.04253968);
   ratio->SetBinError(11,0.04353653);
   ratio->SetBinError(12,0.05531421);
   ratio->SetBinError(13,0.05316454);
   ratio->SetBinError(14,0.06402781);
   ratio->SetBinError(15,0.06082602);
   ratio->SetBinError(16,0.06328218);
   ratio->SetBinError(17,0.0697527);
   ratio->SetBinError(18,0.07387754);
   ratio->SetBinError(19,0.07781814);
   ratio->SetBinError(20,0.06490172);
   ratio->SetBinError(21,0.08470767);
   ratio->SetBinError(22,0.08713724);
   ratio->SetBinError(23,0.08447634);
   ratio->SetBinError(24,0.09887908);
   ratio->SetBinError(25,0.1571051);
   ratio->SetBinError(26,0.1079073);
   ratio->SetBinError(27,0.1132683);
   ratio->SetBinError(28,0.1362964);
   ratio->SetBinError(29,0.1709834);
   ratio->SetBinError(30,0.1568261);
   ratio->SetBinError(31,0.1460009);
   ratio->SetBinError(32,0.253915);
   ratio->SetBinError(33,0.1337372);
   ratio->SetBinError(34,0.2070093);
   ratio->SetBinError(35,0.1811528);
   ratio->SetBinError(36,0.1939956);
   ratio->SetBinError(37,0.2784552);
   ratio->SetBinError(38,0.2622931);
   ratio->SetBinError(39,0.2940309);
   ratio->SetBinError(40,0.4748543);
   ratio->SetBinError(41,0.6806026);
   ratio->SetBinError(42,0.7024755);
   ratio->SetBinError(43,0.8325013);
   ratio->SetBinError(44,1.142048);
   ratio->SetBinError(45,1.195039);
   ratio->SetBinError(46,0.854413);
   ratio->SetBinError(47,1.006879);
   ratio->SetBinError(48,0.8533226);
   ratio->SetBinError(49,1.046641);
   ratio->SetBinError(50,0.7071345);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(479.3214);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoCharged03_mc_Z_EB",60,0,6);
   ratio->SetBinContent(1,1.018145);
   ratio->SetBinContent(2,0.8619741);
   ratio->SetBinContent(3,0.9771274);
   ratio->SetBinContent(4,0.9397902);
   ratio->SetBinContent(5,0.9646022);
   ratio->SetBinContent(6,0.9370466);
   ratio->SetBinContent(7,0.9280528);
   ratio->SetBinContent(8,0.9865313);
   ratio->SetBinContent(9,0.9737456);
   ratio->SetBinContent(10,0.9643961);
   ratio->SetBinContent(11,0.9143921);
   ratio->SetBinContent(12,0.9207925);
   ratio->SetBinContent(13,0.9873299);
   ratio->SetBinContent(14,0.9481378);
   ratio->SetBinContent(15,0.9409801);
   ratio->SetBinContent(16,0.9298059);
   ratio->SetBinContent(17,0.9286585);
   ratio->SetBinContent(18,0.9467832);
   ratio->SetBinContent(19,0.9705668);
   ratio->SetBinContent(20,0.7165813);
   ratio->SetBinContent(21,0.8991114);
   ratio->SetBinContent(22,0.9712221);
   ratio->SetBinContent(23,0.8833633);
   ratio->SetBinContent(24,0.9504595);
   ratio->SetBinContent(25,1.136074);
   ratio->SetBinContent(26,0.8629357);
   ratio->SetBinContent(27,0.9213407);
   ratio->SetBinContent(28,1.021187);
   ratio->SetBinContent(29,1.087941);
   ratio->SetBinContent(30,1.020094);
   ratio->SetBinContent(31,0.9549391);
   ratio->SetBinContent(32,1.311745);
   ratio->SetBinContent(33,0.6968318);
   ratio->SetBinContent(34,0.6085368);
   ratio->SetBinContent(35,1.022723);
   ratio->SetBinContent(36,1.048504);
   ratio->SetBinContent(37,1.061469);
   ratio->SetBinContent(38,0.9274114);
   ratio->SetBinContent(39,1.276398);
   ratio->SetBinContent(40,1.780444);
   ratio->SetBinContent(41,2.868753);
   ratio->SetBinContent(42,2.704859);
   ratio->SetBinContent(43,2.649477);
   ratio->SetBinContent(44,4.004329);
   ratio->SetBinContent(45,3.812913);
   ratio->SetBinContent(46,2.183554);
   ratio->SetBinContent(47,2.555647);
   ratio->SetBinContent(48,2.178931);
   ratio->SetBinContent(49,2.923664);
   ratio->SetBinContent(50,1.854564);
   ratio->SetBinError(1,0.006776128);
   ratio->SetBinError(2,0.1355624);
   ratio->SetBinError(3,0.03683856);
   ratio->SetBinError(4,0.03098434);
   ratio->SetBinError(5,0.03350324);
   ratio->SetBinError(6,0.03103882);
   ratio->SetBinError(7,0.03606656);
   ratio->SetBinError(8,0.0367406);
   ratio->SetBinError(9,0.0392183);
   ratio->SetBinError(10,0.04253968);
   ratio->SetBinError(11,0.04353653);
   ratio->SetBinError(12,0.05531421);
   ratio->SetBinError(13,0.05316454);
   ratio->SetBinError(14,0.06402781);
   ratio->SetBinError(15,0.06082602);
   ratio->SetBinError(16,0.06328218);
   ratio->SetBinError(17,0.0697527);
   ratio->SetBinError(18,0.07387754);
   ratio->SetBinError(19,0.07781814);
   ratio->SetBinError(20,0.06490172);
   ratio->SetBinError(21,0.08470767);
   ratio->SetBinError(22,0.08713724);
   ratio->SetBinError(23,0.08447634);
   ratio->SetBinError(24,0.09887908);
   ratio->SetBinError(25,0.1571051);
   ratio->SetBinError(26,0.1079073);
   ratio->SetBinError(27,0.1132683);
   ratio->SetBinError(28,0.1362964);
   ratio->SetBinError(29,0.1709834);
   ratio->SetBinError(30,0.1568261);
   ratio->SetBinError(31,0.1460009);
   ratio->SetBinError(32,0.253915);
   ratio->SetBinError(33,0.1337372);
   ratio->SetBinError(34,0.2070093);
   ratio->SetBinError(35,0.1811528);
   ratio->SetBinError(36,0.1939956);
   ratio->SetBinError(37,0.2784552);
   ratio->SetBinError(38,0.2622931);
   ratio->SetBinError(39,0.2940309);
   ratio->SetBinError(40,0.4748543);
   ratio->SetBinError(41,0.6806026);
   ratio->SetBinError(42,0.7024755);
   ratio->SetBinError(43,0.8325013);
   ratio->SetBinError(44,1.142048);
   ratio->SetBinError(45,1.195039);
   ratio->SetBinError(46,0.854413);
   ratio->SetBinError(47,1.006879);
   ratio->SetBinError(48,0.8533226);
   ratio->SetBinError(49,1.046641);
   ratio->SetBinError(50,0.7071345);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(479.3214);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Charged #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
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
