{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Wed Dec  3 10:38:00 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.05773157,6.525,0.5195841);
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
   
   TH1F *pfIsoPhotons03_mc_Z_EE__28 = new TH1F("pfIsoPhotons03_mc_Z_EE__28","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(1,0.4418693);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(2,0.04938474);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(3,0.0817642);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(4,0.05893827);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(5,0.04914405);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(6,0.04121069);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(7,0.03498841);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(8,0.03106221);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(9,0.02555107);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(10,0.02354994);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(11,0.01916645);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(12,0.01799993);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(13,0.01567516);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(14,0.0133833);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(15,0.01229049);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(16,0.00989189);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(17,0.008280468);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(18,0.007738993);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(19,0.006228077);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(20,0.006153209);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(21,0.005141872);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(22,0.004427982);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(23,0.003983315);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(24,0.003425232);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(25,0.003139606);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(26,0.002371246);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(27,0.002353897);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(28,0.002312621);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(29,0.002040811);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(30,0.001658649);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(31,0.001469592);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(32,0.001081345);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(33,0.001168525);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(34,0.001012832);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(35,0.001112759);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(36,0.0007398741);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(37,0.0006649366);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(38,0.0006871647);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(39,0.0005418409);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(40,0.0005038769);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(41,0.0005837969);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(42,0.0007638047);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(43,0.0004937248);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(44,0.000346652);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(45,0.0004721584);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(46,0.0002984372);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(47,0.0005990168);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(48,0.000250364);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(49,0.0002014233);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(50,0.0002465513);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(51,0.0002307977);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(52,0.0003022811);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(53,0.0002273203);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(54,0.0001609601);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(55,0.0002099221);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(56,0.0001102404);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(57,0.0001437026);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(58,8.621056e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(59,9.380874e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(60,7.000808e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinContent(61,0.002466347);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(1,0.00348849);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(2,0.001273473);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(3,0.001704053);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(4,0.001328684);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(5,0.001276993);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(6,0.001081977);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(7,0.001033632);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(8,0.001013595);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(9,0.0008050967);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(10,0.0008151157);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(11,0.0006877596);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(12,0.0007300555);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(13,0.0006833428);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(14,0.0006147102);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(15,0.000618035);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(16,0.0005164552);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(17,0.0004301973);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(18,0.0004698472);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(19,0.0003694053);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(20,0.0004149589);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(21,0.0003535087);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(22,0.0003365654);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(23,0.0002813084);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(24,0.0002627139);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(25,0.0002506838);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(26,0.0002585463);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(27,0.0002093);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(28,0.0002493414);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(29,0.0002390237);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(30,0.0001448827);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(31,0.0001515986);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(32,0.0001229957);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(33,0.0001107593);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(34,0.000167911);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(35,0.0001730771);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(36,6.891353e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(37,6.300922e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(38,9.340709e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(39,5.992256e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(40,5.814873e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(41,8.645302e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(42,0.0001896527);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(43,6.460603e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(44,4.503076e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(45,0.0001029961);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(46,3.216308e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(47,0.0002328386);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(48,3.300098e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(49,2.630814e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(50,3.11389e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(51,3.322473e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(52,7.283893e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(53,5.875217e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(54,3.140991e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(55,8.25362e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(56,1.543227e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(57,3.284597e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(58,1.53346e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(59,1.494063e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(60,1.263274e-05);
   pfIsoPhotons03_mc_Z_EE__28->SetBinError(61,0.0002022115);
   pfIsoPhotons03_mc_Z_EE__28->SetMinimum(3.324437e-07);
   pfIsoPhotons03_mc_Z_EE__28->SetMaximum(2.474468);
   pfIsoPhotons03_mc_Z_EE__28->SetEntries(458246);
   pfIsoPhotons03_mc_Z_EE__28->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__28->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__28->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__28->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__28->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__28->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__28->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__28->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EE__29 = new TH1F("pfIsoPhotons03_mc_Signal_EE__29","pfIsoPhotons03_mc_Signal_EE",60,0,6);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(1,0.4086798);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(2,0.03608255);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(3,0.0541569);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(4,0.04085679);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(5,0.03487182);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(6,0.03066193);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(7,0.02736437);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(8,0.02606818);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(9,0.02402173);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(10,0.0228405);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(11,0.02232227);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(12,0.02006114);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(13,0.01797561);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(14,0.01623636);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(15,0.01504297);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(16,0.01363733);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(17,0.01397178);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(18,0.01150064);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(19,0.01033042);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(20,0.009188406);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(21,0.008881279);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(22,0.008174678);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(23,0.007441164);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(24,0.007152984);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(25,0.008677674);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(26,0.006364622);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(27,0.005922821);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(28,0.005962767);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(29,0.005411306);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(30,0.005078132);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(31,0.0043556);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(32,0.004317801);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(33,0.004228498);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(34,0.003970488);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(35,0.003845524);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(36,0.00375077);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(37,0.003380264);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(38,0.00328116);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(39,0.003075584);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(40,0.002468267);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(41,0.003008202);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(42,0.00246366);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(43,0.002343418);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(44,0.004486789);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(45,0.001797194);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(46,0.002207383);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(47,0.001977947);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(48,0.001791819);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(49,0.002057916);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(50,0.001894503);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(51,0.001895245);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(52,0.001691502);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(53,0.001386736);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(54,0.001530996);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(55,0.001374407);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(56,0.001091285);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(57,0.001045263);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(58,0.001370233);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(59,0.001627975);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(60,0.001344632);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(61,0.02795743);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(1,0.002968961);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(2,0.0006986809);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(3,0.001807651);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(4,0.0007109587);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(5,0.0007041341);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(6,0.0006475261);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(7,0.000587153);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(8,0.0006089476);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(9,0.0005843254);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(10,0.000577682);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(11,0.0005959111);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(12,0.0005107692);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(13,0.0004893862);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(14,0.0004512522);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(15,0.0004446983);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(16,0.0004419788);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(17,0.001571607);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(18,0.0004140504);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(19,0.0003534729);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(20,0.0003536953);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(21,0.000349745);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(22,0.0002927733);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(23,0.0003013295);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(24,0.0003203016);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(25,0.002423357);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(26,0.0003292862);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(27,0.0003051917);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(28,0.0003201911);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(29,0.0003064146);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(30,0.0003132893);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(31,0.000238853);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(32,0.0002309388);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(33,0.0002733794);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(34,0.0002479393);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(35,0.0002477573);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(36,0.0002517818);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(37,0.0002226463);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(38,0.0002420845);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(39,0.0002201274);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(40,0.000142989);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(41,0.0002607124);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(42,0.0001776995);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(43,0.0002257295);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(44,0.001957524);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(45,0.000114838);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(46,0.0002095592);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(47,0.0001734695);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(48,0.0001616263);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(49,0.0002049874);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(50,0.0001945804);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(51,0.00016854);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(52,0.0001934947);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(53,0.0001277879);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(54,0.0001737456);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(55,0.000164538);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(56,9.097214e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(57,0.000107681);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(58,0.0001670478);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(59,0.0002274897);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(60,0.0001694659);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(61,0.0008362499);
   pfIsoPhotons03_mc_Signal_EE__29->SetEntries(592312);
   pfIsoPhotons03_mc_Signal_EE__29->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EE__29->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EE__29->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EE__29->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_EE__30 = new TH1F("pfIsoPhotons03_mc_Z_EE__30","pfIsoPhotons03_mc_Z_EE",60,0,6);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(1,0.4418693);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(2,0.04938474);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(3,0.0817642);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(4,0.05893827);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(5,0.04914405);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(6,0.04121069);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(7,0.03498841);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(8,0.03106221);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(9,0.02555107);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(10,0.02354994);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(11,0.01916645);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(12,0.01799993);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(13,0.01567516);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(14,0.0133833);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(15,0.01229049);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(16,0.00989189);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(17,0.008280468);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(18,0.007738993);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(19,0.006228077);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(20,0.006153209);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(21,0.005141872);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(22,0.004427982);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(23,0.003983315);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(24,0.003425232);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(25,0.003139606);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(26,0.002371246);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(27,0.002353897);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(28,0.002312621);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(29,0.002040811);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(30,0.001658649);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(31,0.001469592);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(32,0.001081345);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(33,0.001168525);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(34,0.001012832);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(35,0.001112759);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(36,0.0007398741);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(37,0.0006649366);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(38,0.0006871647);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(39,0.0005418409);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(40,0.0005038769);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(41,0.0005837969);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(42,0.0007638047);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(43,0.0004937248);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(44,0.000346652);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(45,0.0004721584);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(46,0.0002984372);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(47,0.0005990168);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(48,0.000250364);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(49,0.0002014233);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(50,0.0002465513);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(51,0.0002307977);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(52,0.0003022811);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(53,0.0002273203);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(54,0.0001609601);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(55,0.0002099221);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(56,0.0001102404);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(57,0.0001437026);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(58,8.621056e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(59,9.380874e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(60,7.000808e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinContent(61,0.002466347);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(1,0.00348849);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(2,0.001273473);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(3,0.001704053);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(4,0.001328684);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(5,0.001276993);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(6,0.001081977);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(7,0.001033632);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(8,0.001013595);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(9,0.0008050967);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(10,0.0008151157);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(11,0.0006877596);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(12,0.0007300555);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(13,0.0006833428);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(14,0.0006147102);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(15,0.000618035);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(16,0.0005164552);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(17,0.0004301973);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(18,0.0004698472);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(19,0.0003694053);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(20,0.0004149589);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(21,0.0003535087);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(22,0.0003365654);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(23,0.0002813084);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(24,0.0002627139);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(25,0.0002506838);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(26,0.0002585463);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(27,0.0002093);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(28,0.0002493414);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(29,0.0002390237);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(30,0.0001448827);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(31,0.0001515986);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(32,0.0001229957);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(33,0.0001107593);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(34,0.000167911);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(35,0.0001730771);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(36,6.891353e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(37,6.300922e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(38,9.340709e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(39,5.992256e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(40,5.814873e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(41,8.645302e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(42,0.0001896527);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(43,6.460603e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(44,4.503076e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(45,0.0001029961);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(46,3.216308e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(47,0.0002328386);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(48,3.300098e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(49,2.630814e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(50,3.11389e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(51,3.322473e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(52,7.283893e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(53,5.875217e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(54,3.140991e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(55,8.25362e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(56,1.543227e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(57,3.284597e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(58,1.53346e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(59,1.494063e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(60,1.263274e-05);
   pfIsoPhotons03_mc_Z_EE__30->SetBinError(61,0.0002022115);
   pfIsoPhotons03_mc_Z_EE__30->SetMinimum(3.324437e-07);
   pfIsoPhotons03_mc_Z_EE__30->SetMaximum(2.474468);
   pfIsoPhotons03_mc_Z_EE__30->SetEntries(458246);
   pfIsoPhotons03_mc_Z_EE__30->SetDirectory(0);
   pfIsoPhotons03_mc_Z_EE__30->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__30->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_EE__30->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_EE__30->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_EE__30->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_EE__30->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_EE__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_EE__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_EE__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(7.030224e-22,3.708454e-22,9.77032e-23,4.228792e-23,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_EE","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.081212);
   ratio->SetBinContent(2,1.36866);
   ratio->SetBinContent(3,1.509765);
   ratio->SetBinContent(4,1.442558);
   ratio->SetBinContent(5,1.409277);
   ratio->SetBinContent(6,1.344034);
   ratio->SetBinContent(7,1.278612);
   ratio->SetBinContent(8,1.191575);
   ratio->SetBinContent(9,1.063665);
   ratio->SetBinContent(10,1.031061);
   ratio->SetBinContent(11,0.8586246);
   ratio->SetBinContent(12,0.8972535);
   ratio->SetBinContent(13,0.8720238);
   ratio->SetBinContent(14,0.8242795);
   ratio->SetBinContent(15,0.8170253);
   ratio->SetBinContent(16,0.7253538);
   ratio->SetBinContent(17,0.5926568);
   ratio->SetBinContent(18,0.6729182);
   ratio->SetBinContent(19,0.602887);
   ratio->SetBinContent(20,0.669671);
   ratio->SetBinContent(21,0.5789563);
   ratio->SetBinContent(22,0.5416705);
   ratio->SetBinContent(23,0.5353081);
   ratio->SetBinContent(24,0.4788535);
   ratio->SetBinContent(25,0.3618028);
   ratio->SetBinContent(26,0.3725667);
   ratio->SetBinContent(27,0.3974284);
   ratio->SetBinContent(28,0.3878436);
   ratio->SetBinContent(29,0.3771384);
   ratio->SetBinContent(30,0.3266258);
   ratio->SetBinContent(31,0.3374028);
   ratio->SetBinContent(32,0.2504387);
   ratio->SetBinContent(33,0.2763451);
   ratio->SetBinContent(34,0.25509);
   ratio->SetBinContent(35,0.2893646);
   ratio->SetBinContent(36,0.1972592);
   ratio->SetBinContent(37,0.1967115);
   ratio->SetBinContent(38,0.2094274);
   ratio->SetBinContent(39,0.1761749);
   ratio->SetBinContent(40,0.204142);
   ratio->SetBinContent(41,0.1940684);
   ratio->SetBinContent(42,0.3100285);
   ratio->SetBinContent(43,0.2106858);
   ratio->SetBinContent(44,0.0772606);
   ratio->SetBinContent(45,0.2627198);
   ratio->SetBinContent(46,0.1351995);
   ratio->SetBinContent(47,0.3028478);
   ratio->SetBinContent(48,0.1397262);
   ratio->SetBinContent(49,0.09787734);
   ratio->SetBinContent(50,0.1301404);
   ratio->SetBinContent(51,0.1217773);
   ratio->SetBinContent(52,0.1787057);
   ratio->SetBinContent(53,0.1639247);
   ratio->SetBinContent(54,0.1051342);
   ratio->SetBinContent(55,0.1527365);
   ratio->SetBinContent(56,0.1010189);
   ratio->SetBinContent(57,0.1374799);
   ratio->SetBinContent(58,0.06291673);
   ratio->SetBinContent(59,0.05762296);
   ratio->SetBinContent(60,0.05206488);
   ratio->SetBinContent(61,0.08821795);
   ratio->SetBinError(1,0.01160001);
   ratio->SetBinError(2,0.0441358);
   ratio->SetBinError(3,0.05940967);
   ratio->SetBinError(4,0.04108174);
   ratio->SetBinError(5,0.0463762);
   ratio->SetBinError(6,0.04528604);
   ratio->SetBinError(7,0.04668481);
   ratio->SetBinError(8,0.04781872);
   ratio->SetBinError(9,0.04234049);
   ratio->SetBinError(10,0.04419981);
   ratio->SetBinError(11,0.03840167);
   ratio->SetBinError(12,0.04296767);
   ratio->SetBinError(13,0.04481929);
   ratio->SetBinError(14,0.04425162);
   ratio->SetBinError(15,0.04765821);
   ratio->SetBinError(16,0.04457389);
   ratio->SetBinError(17,0.07343178);
   ratio->SetBinError(18,0.04749714);
   ratio->SetBinError(19,0.04128259);
   ratio->SetBinError(20,0.05200037);
   ratio->SetBinError(21,0.04587103);
   ratio->SetBinError(22,0.04551328);
   ratio->SetBinError(23,0.04357836);
   ratio->SetBinError(24,0.04252899);
   ratio->SetBinError(25,0.105087);
   ratio->SetBinError(26,0.04496358);
   ratio->SetBinError(27,0.04084293);
   ratio->SetBinError(28,0.04671571);
   ratio->SetBinError(29,0.04906267);
   ratio->SetBinError(30,0.03492929);
   ratio->SetBinError(31,0.03941781);
   ratio->SetBinError(32,0.03147789);
   ratio->SetBinError(33,0.03170648);
   ratio->SetBinError(34,0.04519031);
   ratio->SetBinError(35,0.04871581);
   ratio->SetBinError(36,0.0226476);
   ratio->SetBinError(37,0.02270105);
   ratio->SetBinError(38,0.03239076);
   ratio->SetBinError(39,0.02320762);
   ratio->SetBinError(40,0.02636023);
   ratio->SetBinError(41,0.03329905);
   ratio->SetBinError(42,0.08016223);
   ratio->SetBinError(43,0.03423326);
   ratio->SetBinError(44,0.03517013);
   ratio->SetBinError(45,0.05971752);
   ratio->SetBinError(46,0.01941773);
   ratio->SetBinError(47,0.1206765);
   ratio->SetBinError(48,0.02231724);
   ratio->SetBinError(49,0.01607732);
   ratio->SetBinError(50,0.02118535);
   ratio->SetBinError(51,0.02060574);
   ratio->SetBinError(52,0.04766766);
   ratio->SetBinError(53,0.0449796);
   ratio->SetBinError(54,0.02373308);
   ratio->SetBinError(55,0.06277427);
   ratio->SetBinError(56,0.01645888);
   ratio->SetBinError(57,0.03446787);
   ratio->SetBinError(58,0.01356751);
   ratio->SetBinError(59,0.01220908);
   ratio->SetBinError(60,0.0114596);
   ratio->SetBinError(61,0.007699143);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7267.401);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.081212);
   ratio->SetBinContent(2,1.36866);
   ratio->SetBinContent(3,1.509765);
   ratio->SetBinContent(4,1.442558);
   ratio->SetBinContent(5,1.409277);
   ratio->SetBinContent(6,1.344034);
   ratio->SetBinContent(7,1.278612);
   ratio->SetBinContent(8,1.191575);
   ratio->SetBinContent(9,1.063665);
   ratio->SetBinContent(10,1.031061);
   ratio->SetBinContent(11,0.8586246);
   ratio->SetBinContent(12,0.8972535);
   ratio->SetBinContent(13,0.8720238);
   ratio->SetBinContent(14,0.8242795);
   ratio->SetBinContent(15,0.8170253);
   ratio->SetBinContent(16,0.7253538);
   ratio->SetBinContent(17,0.5926568);
   ratio->SetBinContent(18,0.6729182);
   ratio->SetBinContent(19,0.602887);
   ratio->SetBinContent(20,0.669671);
   ratio->SetBinContent(21,0.5789563);
   ratio->SetBinContent(22,0.5416705);
   ratio->SetBinContent(23,0.5353081);
   ratio->SetBinContent(24,0.4788535);
   ratio->SetBinContent(25,0.3618028);
   ratio->SetBinContent(26,0.3725667);
   ratio->SetBinContent(27,0.3974284);
   ratio->SetBinContent(28,0.3878436);
   ratio->SetBinContent(29,0.3771384);
   ratio->SetBinContent(30,0.3266258);
   ratio->SetBinContent(31,0.3374028);
   ratio->SetBinContent(32,0.2504387);
   ratio->SetBinContent(33,0.2763451);
   ratio->SetBinContent(34,0.25509);
   ratio->SetBinContent(35,0.2893646);
   ratio->SetBinContent(36,0.1972592);
   ratio->SetBinContent(37,0.1967115);
   ratio->SetBinContent(38,0.2094274);
   ratio->SetBinContent(39,0.1761749);
   ratio->SetBinContent(40,0.204142);
   ratio->SetBinContent(41,0.1940684);
   ratio->SetBinContent(42,0.3100285);
   ratio->SetBinContent(43,0.2106858);
   ratio->SetBinContent(44,0.0772606);
   ratio->SetBinContent(45,0.2627198);
   ratio->SetBinContent(46,0.1351995);
   ratio->SetBinContent(47,0.3028478);
   ratio->SetBinContent(48,0.1397262);
   ratio->SetBinContent(49,0.09787734);
   ratio->SetBinContent(50,0.1301404);
   ratio->SetBinContent(51,0.1217773);
   ratio->SetBinContent(52,0.1787057);
   ratio->SetBinContent(53,0.1639247);
   ratio->SetBinContent(54,0.1051342);
   ratio->SetBinContent(55,0.1527365);
   ratio->SetBinContent(56,0.1010189);
   ratio->SetBinContent(57,0.1374799);
   ratio->SetBinContent(58,0.06291673);
   ratio->SetBinContent(59,0.05762296);
   ratio->SetBinContent(60,0.05206488);
   ratio->SetBinContent(61,0.08821795);
   ratio->SetBinError(1,0.01160001);
   ratio->SetBinError(2,0.0441358);
   ratio->SetBinError(3,0.05940967);
   ratio->SetBinError(4,0.04108174);
   ratio->SetBinError(5,0.0463762);
   ratio->SetBinError(6,0.04528604);
   ratio->SetBinError(7,0.04668481);
   ratio->SetBinError(8,0.04781872);
   ratio->SetBinError(9,0.04234049);
   ratio->SetBinError(10,0.04419981);
   ratio->SetBinError(11,0.03840167);
   ratio->SetBinError(12,0.04296767);
   ratio->SetBinError(13,0.04481929);
   ratio->SetBinError(14,0.04425162);
   ratio->SetBinError(15,0.04765821);
   ratio->SetBinError(16,0.04457389);
   ratio->SetBinError(17,0.07343178);
   ratio->SetBinError(18,0.04749714);
   ratio->SetBinError(19,0.04128259);
   ratio->SetBinError(20,0.05200037);
   ratio->SetBinError(21,0.04587103);
   ratio->SetBinError(22,0.04551328);
   ratio->SetBinError(23,0.04357836);
   ratio->SetBinError(24,0.04252899);
   ratio->SetBinError(25,0.105087);
   ratio->SetBinError(26,0.04496358);
   ratio->SetBinError(27,0.04084293);
   ratio->SetBinError(28,0.04671571);
   ratio->SetBinError(29,0.04906267);
   ratio->SetBinError(30,0.03492929);
   ratio->SetBinError(31,0.03941781);
   ratio->SetBinError(32,0.03147789);
   ratio->SetBinError(33,0.03170648);
   ratio->SetBinError(34,0.04519031);
   ratio->SetBinError(35,0.04871581);
   ratio->SetBinError(36,0.0226476);
   ratio->SetBinError(37,0.02270105);
   ratio->SetBinError(38,0.03239076);
   ratio->SetBinError(39,0.02320762);
   ratio->SetBinError(40,0.02636023);
   ratio->SetBinError(41,0.03329905);
   ratio->SetBinError(42,0.08016223);
   ratio->SetBinError(43,0.03423326);
   ratio->SetBinError(44,0.03517013);
   ratio->SetBinError(45,0.05971752);
   ratio->SetBinError(46,0.01941773);
   ratio->SetBinError(47,0.1206765);
   ratio->SetBinError(48,0.02231724);
   ratio->SetBinError(49,0.01607732);
   ratio->SetBinError(50,0.02118535);
   ratio->SetBinError(51,0.02060574);
   ratio->SetBinError(52,0.04766766);
   ratio->SetBinError(53,0.0449796);
   ratio->SetBinError(54,0.02373308);
   ratio->SetBinError(55,0.06277427);
   ratio->SetBinError(56,0.01645888);
   ratio->SetBinError(57,0.03446787);
   ratio->SetBinError(58,0.01356751);
   ratio->SetBinError(59,0.01220908);
   ratio->SetBinError(60,0.0114596);
   ratio->SetBinError(61,0.007699143);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(7267.401);
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
