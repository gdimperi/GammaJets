{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Sat Nov 29 18:09:37 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.04197352,6.525,0.3777617);
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
   
   TH1F *pfIsoPhotons03_dataZ_EE__28 = new TH1F("pfIsoPhotons03_dataZ_EE__28","pfIsoPhotons03_dataZ_EE",60,0,6);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(1,0.3164605);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(2,0.04674307);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(3,0.0777549);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(4,0.05107003);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(5,0.05844223);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(6,0.05096219);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(7,0.03880208);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(8,0.04099948);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(9,0.03193114);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(10,0.03185968);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(11,0.03044731);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(12,0.01870086);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(13,0.02308179);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(14,0.02310462);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(15,0.02061801);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(16,0.01479924);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(17,0.009897849);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(18,0.01495704);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(19,0.01115336);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(20,0.009265252);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(21,0.007455309);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(22,0.007080203);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(23,0.007212833);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(24,0.004689073);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(25,0.005579163);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(26,0.004755437);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(27,0.005893964);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(28,0.002653376);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(29,0.003918068);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(30,0.003081585);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(31,0.003308549);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(32,0.002961943);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(33,0.002406002);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(34,0.001908092);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(35,0.001981904);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(36,0.0007341972);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(37,0.001078038);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(38,0.001156316);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(39,0.0007715133);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(40,0.001175557);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(41,0.0003165024);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(42,0.001274625);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(43,0.00061559);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(44,0.0008326583);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(45,0.0002440281);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(46,0.0006099972);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(47,0.0004141263);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(48,0.0007911318);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(49,0.0003149549);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(50,0.0008900301);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(51,0.0002940796);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(52,0.0003966769);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(53,0.0004228138);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(54,0.0004035902);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(55,0.0001030075);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(56,0.0004839942);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(57,0.000375533);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(58,0.0002016985);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(59,6.056729e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(60,0.0001026329);
   pfIsoPhotons03_dataZ_EE__28->SetBinContent(61,0.002692679);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(1,0.007335178);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(2,0.002789698);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(3,0.003919918);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(4,0.002681876);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(5,0.003546586);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(6,0.003683743);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(7,0.002585638);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(8,0.002842341);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(9,0.002488221);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(10,0.002571274);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(11,0.002282871);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(12,0.00151734);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(13,0.002178854);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(14,0.003254262);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(15,0.002863264);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(16,0.001641373);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(17,0.001127562);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(18,0.001693697);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(19,0.001411301);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(20,0.001123463);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(21,0.001217638);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(22,0.001103725);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(23,0.001224089);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(24,0.0006356149);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(25,0.0009121216);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(26,0.001135502);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(27,0.001532546);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(28,0.0007916063);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(29,0.0006288251);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(30,0.0008296972);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(31,0.0006972576);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(32,0.0009291621);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(33,0.0006802406);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(34,0.0006189521);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(35,0.0005718389);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(36,0.0002381791);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(37,0.0002815017);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(38,0.0004502603);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(39,0.0002683833);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(40,0.0004815469);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(41,0.0001043824);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(42,0.0004381224);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(43,0.0002039411);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(44,0.0004332148);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(45,0.0001362924);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(46,0.0001879255);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(47,0.0002163755);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(48,0.0003230837);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(49,0.0001819014);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(50,0.000443037);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(51,0.0001524912);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(52,0.0002251918);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(53,0.000186847);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(54,0.0002291706);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(55,6.055593e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(56,0.000230915);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(57,0.000171297);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(58,0.0001001943);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(59,6.056729e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(60,6.02405e-05);
   pfIsoPhotons03_dataZ_EE__28->SetBinError(61,0.0004761409);
   pfIsoPhotons03_dataZ_EE__28->SetMinimum(1.659314e-06);
   pfIsoPhotons03_dataZ_EE__28->SetMaximum(1.772179);
   pfIsoPhotons03_dataZ_EE__28->SetEntries(14844);
   pfIsoPhotons03_dataZ_EE__28->SetDirectory(0);
   pfIsoPhotons03_dataZ_EE__28->SetStats(0);
   pfIsoPhotons03_dataZ_EE__28->SetMarkerStyle(20);
   pfIsoPhotons03_dataZ_EE__28->SetMarkerSize(0.7);
   pfIsoPhotons03_dataZ_EE__28->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_dataZ_EE__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_dataZ_EE__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_dataZ_EE__28->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_EE__29 = new TH1F("pfIsoPhotons03_mc_Signal_EE__29","pfIsoPhotons03_mc_Signal_EE",60,0,6);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(1,0.4108351);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(2,0.03931976);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(3,0.0580985);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(4,0.04559151);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(5,0.03783976);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(6,0.0353818);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(7,0.03209399);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(8,0.02832849);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(9,0.02614078);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(10,0.02523597);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(11,0.02366556);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(12,0.01928721);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(13,0.01827309);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(14,0.01612865);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(15,0.01586935);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(16,0.01254195);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(17,0.01201995);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(18,0.01195633);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(19,0.01053763);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(20,0.01023536);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(21,0.008837083);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(22,0.00747468);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(23,0.007353351);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(24,0.006569602);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(25,0.00538367);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(26,0.005198055);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(27,0.005161684);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(28,0.005087112);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(29,0.00404818);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(30,0.004340049);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(31,0.003724589);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(32,0.003910438);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(33,0.003251796);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(34,0.003119806);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(35,0.003065618);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(36,0.002797198);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(37,0.002615719);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(38,0.002382707);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(39,0.002111293);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(40,0.001956472);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(41,0.001803543);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(42,0.001769556);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(43,0.001589472);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(44,0.001570345);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(45,0.001596836);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(46,0.001420686);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(47,0.001361082);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(48,0.001113034);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(49,0.001191951);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(50,0.0009145452);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(51,0.0009234794);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(52,0.000901888);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(53,0.0007860276);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(54,0.0008420662);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(55,0.0009579032);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(56,0.0007737455);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(57,0.0008213202);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(58,0.0006668574);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(59,0.0006353272);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(60,0.0005905317);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinContent(61,0.01306558);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(1,0.002951331);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(2,0.0009024345);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(3,0.001109627);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(4,0.00101386);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(5,0.0008891555);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(6,0.0008780561);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(7,0.0008488735);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(8,0.0007751876);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(9,0.0007364097);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(10,0.0007477833);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(11,0.0007060659);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(12,0.0005813383);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(13,0.0006033228);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(14,0.0005127414);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(15,0.0005940452);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(16,0.0004711576);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(17,0.0004797422);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(18,0.0005092689);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(19,0.0004893833);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(20,0.0004968478);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(21,0.0004235167);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(22,0.0003823374);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(23,0.0003775434);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(24,0.0003721002);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(25,0.0002679583);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(26,0.0002934906);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(27,0.0003071975);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(28,0.0003408505);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(29,0.0002491357);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(30,0.0003012456);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(31,0.0002739593);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(32,0.0002966832);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(33,0.0002605545);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(34,0.0002536481);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(35,0.0002417821);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(36,0.0002409979);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(37,0.0002343376);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(38,0.0002172084);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(39,0.0002029356);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(40,0.0001907446);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(41,0.0001508201);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(42,0.0001761849);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(43,0.0001853111);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(44,0.0001791483);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(45,0.0001890262);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(46,0.0001573267);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(47,0.0001482175);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(48,0.0001237367);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(49,0.0001635153);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(50,8.958696e-05);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(51,0.0001085823);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(52,0.0001321283);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(53,0.0001233799);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(54,0.0001230399);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(55,0.0001447274);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(56,0.0001106966);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(57,0.0001455448);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(58,0.0001179112);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(59,0.0001234096);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(60,0.0001241587);
   pfIsoPhotons03_mc_Signal_EE__29->SetBinError(61,0.0004741288);
   pfIsoPhotons03_mc_Signal_EE__29->SetEntries(477019);
   pfIsoPhotons03_mc_Signal_EE__29->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_EE__29->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_EE__29->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_EE__29->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_EE__29->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_dataZ_EE__30 = new TH1F("pfIsoPhotons03_dataZ_EE__30","pfIsoPhotons03_dataZ_EE",60,0,6);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(1,0.3164605);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(2,0.04674307);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(3,0.0777549);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(4,0.05107003);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(5,0.05844223);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(6,0.05096219);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(7,0.03880208);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(8,0.04099948);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(9,0.03193114);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(10,0.03185968);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(11,0.03044731);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(12,0.01870086);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(13,0.02308179);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(14,0.02310462);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(15,0.02061801);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(16,0.01479924);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(17,0.009897849);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(18,0.01495704);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(19,0.01115336);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(20,0.009265252);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(21,0.007455309);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(22,0.007080203);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(23,0.007212833);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(24,0.004689073);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(25,0.005579163);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(26,0.004755437);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(27,0.005893964);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(28,0.002653376);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(29,0.003918068);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(30,0.003081585);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(31,0.003308549);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(32,0.002961943);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(33,0.002406002);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(34,0.001908092);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(35,0.001981904);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(36,0.0007341972);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(37,0.001078038);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(38,0.001156316);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(39,0.0007715133);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(40,0.001175557);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(41,0.0003165024);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(42,0.001274625);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(43,0.00061559);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(44,0.0008326583);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(45,0.0002440281);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(46,0.0006099972);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(47,0.0004141263);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(48,0.0007911318);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(49,0.0003149549);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(50,0.0008900301);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(51,0.0002940796);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(52,0.0003966769);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(53,0.0004228138);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(54,0.0004035902);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(55,0.0001030075);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(56,0.0004839942);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(57,0.000375533);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(58,0.0002016985);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(59,6.056729e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(60,0.0001026329);
   pfIsoPhotons03_dataZ_EE__30->SetBinContent(61,0.002692679);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(1,0.007335178);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(2,0.002789698);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(3,0.003919918);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(4,0.002681876);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(5,0.003546586);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(6,0.003683743);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(7,0.002585638);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(8,0.002842341);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(9,0.002488221);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(10,0.002571274);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(11,0.002282871);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(12,0.00151734);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(13,0.002178854);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(14,0.003254262);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(15,0.002863264);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(16,0.001641373);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(17,0.001127562);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(18,0.001693697);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(19,0.001411301);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(20,0.001123463);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(21,0.001217638);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(22,0.001103725);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(23,0.001224089);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(24,0.0006356149);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(25,0.0009121216);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(26,0.001135502);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(27,0.001532546);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(28,0.0007916063);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(29,0.0006288251);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(30,0.0008296972);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(31,0.0006972576);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(32,0.0009291621);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(33,0.0006802406);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(34,0.0006189521);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(35,0.0005718389);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(36,0.0002381791);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(37,0.0002815017);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(38,0.0004502603);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(39,0.0002683833);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(40,0.0004815469);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(41,0.0001043824);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(42,0.0004381224);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(43,0.0002039411);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(44,0.0004332148);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(45,0.0001362924);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(46,0.0001879255);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(47,0.0002163755);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(48,0.0003230837);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(49,0.0001819014);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(50,0.000443037);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(51,0.0001524912);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(52,0.0002251918);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(53,0.000186847);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(54,0.0002291706);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(55,6.055593e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(56,0.000230915);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(57,0.000171297);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(58,0.0001001943);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(59,6.056729e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(60,6.02405e-05);
   pfIsoPhotons03_dataZ_EE__30->SetBinError(61,0.0004761409);
   pfIsoPhotons03_dataZ_EE__30->SetMinimum(1.659314e-06);
   pfIsoPhotons03_dataZ_EE__30->SetMaximum(1.772179);
   pfIsoPhotons03_dataZ_EE__30->SetEntries(14844);
   pfIsoPhotons03_dataZ_EE__30->SetDirectory(0);
   pfIsoPhotons03_dataZ_EE__30->SetStats(0);
   pfIsoPhotons03_dataZ_EE__30->SetMarkerStyle(20);
   pfIsoPhotons03_dataZ_EE__30->SetMarkerSize(0.7);
   pfIsoPhotons03_dataZ_EE__30->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_dataZ_EE__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_dataZ_EE__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_dataZ_EE__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(1.067364e-311,0,1.676348e-315,1.765257e-315,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoPhotons03_dataZ_EE","DataZ Z #rightarrow ee","PL");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_dataZ_EE",60,0,6);
   ratio->SetBinContent(1,0.7702861);
   ratio->SetBinContent(2,1.188793);
   ratio->SetBinContent(3,1.338329);
   ratio->SetBinContent(4,1.120165);
   ratio->SetBinContent(5,1.544466);
   ratio->SetBinContent(6,1.44035);
   ratio->SetBinContent(7,1.209014);
   ratio->SetBinContent(8,1.447288);
   ratio->SetBinContent(9,1.221507);
   ratio->SetBinContent(10,1.262471);
   ratio->SetBinContent(11,1.286566);
   ratio->SetBinContent(12,0.9695989);
   ratio->SetBinContent(13,1.263158);
   ratio->SetBinContent(14,1.43252);
   ratio->SetBinContent(15,1.299235);
   ratio->SetBinContent(16,1.17998);
   ratio->SetBinContent(17,0.8234516);
   ratio->SetBinContent(18,1.250973);
   ratio->SetBinContent(19,1.058432);
   ratio->SetBinContent(20,0.9052197);
   ratio->SetBinContent(21,0.8436391);
   ratio->SetBinContent(22,0.9472249);
   ratio->SetBinContent(23,0.9808905);
   ratio->SetBinContent(24,0.7137529);
   ratio->SetBinContent(25,1.036312);
   ratio->SetBinContent(26,0.9148493);
   ratio->SetBinContent(27,1.141868);
   ratio->SetBinContent(28,0.5215878);
   ratio->SetBinContent(29,0.9678591);
   ratio->SetBinContent(30,0.7100347);
   ratio->SetBinContent(31,0.8882989);
   ratio->SetBinContent(32,0.7574454);
   ratio->SetBinContent(33,0.7398993);
   ratio->SetBinContent(34,0.6116058);
   ratio->SetBinContent(35,0.6464944);
   ratio->SetBinContent(36,0.2624759);
   ratio->SetBinContent(37,0.4121382);
   ratio->SetBinContent(38,0.4852953);
   ratio->SetBinContent(39,0.3654222);
   ratio->SetBinContent(40,0.6008555);
   ratio->SetBinContent(41,0.1754892);
   ratio->SetBinContent(42,0.7203078);
   ratio->SetBinContent(43,0.3872922);
   ratio->SetBinContent(44,0.5302392);
   ratio->SetBinContent(45,0.1528197);
   ratio->SetBinContent(46,0.429368);
   ratio->SetBinContent(47,0.3042625);
   ratio->SetBinContent(48,0.7107887);
   ratio->SetBinContent(49,0.2642347);
   ratio->SetBinContent(50,0.9731942);
   ratio->SetBinContent(51,0.3184473);
   ratio->SetBinContent(52,0.4398295);
   ratio->SetBinContent(53,0.5379121);
   ratio->SetBinContent(54,0.4792855);
   ratio->SetBinContent(55,0.1075343);
   ratio->SetBinContent(56,0.6255212);
   ratio->SetBinContent(57,0.457231);
   ratio->SetBinContent(58,0.3024612);
   ratio->SetBinContent(59,0.09533243);
   ratio->SetBinContent(60,0.1737974);
   ratio->SetBinContent(61,0.2060894);
   ratio->SetBinError(1,0.01869215);
   ratio->SetBinError(2,0.0760144);
   ratio->SetBinError(3,0.07214974);
   ratio->SetBinError(4,0.06388099);
   ratio->SetBinError(5,0.1005074);
   ratio->SetBinError(6,0.1100791);
   ratio->SetBinError(7,0.08667891);
   ratio->SetBinError(8,0.1078685);
   ratio->SetBinError(9,0.1012145);
   ratio->SetBinError(10,0.1085397);
   ratio->SetBinError(11,0.1038204);
   ratio->SetBinError(12,0.08392369);
   ratio->SetBinError(13,0.1263217);
   ratio->SetBinError(14,0.2068446);
   ratio->SetBinError(15,0.1868672);
   ratio->SetBinError(16,0.1381741);
   ratio->SetBinError(17,0.0993982);
   ratio->SetBinError(18,0.1513469);
   ratio->SetBinError(19,0.1426652);
   ratio->SetBinError(20,0.1182317);
   ratio->SetBinError(21,0.1435968);
   ratio->SetBinError(22,0.1554078);
   ratio->SetBinError(23,0.1739182);
   ratio->SetBinError(24,0.1048573);
   ratio->SetBinError(25,0.1771013);
   ratio->SetBinError(26,0.2244713);
   ratio->SetBinError(27,0.3045862);
   ratio->SetBinError(28,0.1594863);
   ratio->SetBinError(29,0.166364);
   ratio->SetBinError(30,0.1974228);
   ratio->SetBinError(31,0.1982785);
   ratio->SetBinError(32,0.2444613);
   ratio->SetBinError(33,0.2174279);
   ratio->SetBinError(34,0.204531);
   ratio->SetBinError(35,0.1933763);
   ratio->SetBinError(36,0.08810098);
   ratio->SetBinError(37,0.1137769);
   ratio->SetBinError(38,0.1940795);
   ratio->SetBinError(39,0.1318813);
   ratio->SetBinError(40,0.2530053);
   ratio->SetBinError(41,0.05970782);
   ratio->SetBinError(42,0.2577665);
   ratio->SetBinError(43,0.1360206);
   ratio->SetBinError(44,0.2824265);
   ratio->SetBinError(45,0.08724753);
   ratio->SetBinError(46,0.1405642);
   ratio->SetBinError(47,0.1623892);
   ratio->SetBinError(48,0.3008363);
   ratio->SetBinError(49,0.156854);
   ratio->SetBinError(50,0.4937254);
   ratio->SetBinError(51,0.1693187);
   ratio->SetBinError(52,0.2578697);
   ratio->SetBinError(53,0.2522606);
   ratio->SetBinError(54,0.2810188);
   ratio->SetBinError(55,0.06527159);
   ratio->SetBinError(56,0.3115667);
   ratio->SetBinError(57,0.2237489);
   ratio->SetBinError(58,0.1594826);
   ratio->SetBinError(59,0.09711429);
   ratio->SetBinError(60,0.1083577);
   ratio->SetBinError(61,0.03720184);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1086.496);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_dataZ_EE",60,0,6);
   ratio->SetBinContent(1,0.7702861);
   ratio->SetBinContent(2,1.188793);
   ratio->SetBinContent(3,1.338329);
   ratio->SetBinContent(4,1.120165);
   ratio->SetBinContent(5,1.544466);
   ratio->SetBinContent(6,1.44035);
   ratio->SetBinContent(7,1.209014);
   ratio->SetBinContent(8,1.447288);
   ratio->SetBinContent(9,1.221507);
   ratio->SetBinContent(10,1.262471);
   ratio->SetBinContent(11,1.286566);
   ratio->SetBinContent(12,0.9695989);
   ratio->SetBinContent(13,1.263158);
   ratio->SetBinContent(14,1.43252);
   ratio->SetBinContent(15,1.299235);
   ratio->SetBinContent(16,1.17998);
   ratio->SetBinContent(17,0.8234516);
   ratio->SetBinContent(18,1.250973);
   ratio->SetBinContent(19,1.058432);
   ratio->SetBinContent(20,0.9052197);
   ratio->SetBinContent(21,0.8436391);
   ratio->SetBinContent(22,0.9472249);
   ratio->SetBinContent(23,0.9808905);
   ratio->SetBinContent(24,0.7137529);
   ratio->SetBinContent(25,1.036312);
   ratio->SetBinContent(26,0.9148493);
   ratio->SetBinContent(27,1.141868);
   ratio->SetBinContent(28,0.5215878);
   ratio->SetBinContent(29,0.9678591);
   ratio->SetBinContent(30,0.7100347);
   ratio->SetBinContent(31,0.8882989);
   ratio->SetBinContent(32,0.7574454);
   ratio->SetBinContent(33,0.7398993);
   ratio->SetBinContent(34,0.6116058);
   ratio->SetBinContent(35,0.6464944);
   ratio->SetBinContent(36,0.2624759);
   ratio->SetBinContent(37,0.4121382);
   ratio->SetBinContent(38,0.4852953);
   ratio->SetBinContent(39,0.3654222);
   ratio->SetBinContent(40,0.6008555);
   ratio->SetBinContent(41,0.1754892);
   ratio->SetBinContent(42,0.7203078);
   ratio->SetBinContent(43,0.3872922);
   ratio->SetBinContent(44,0.5302392);
   ratio->SetBinContent(45,0.1528197);
   ratio->SetBinContent(46,0.429368);
   ratio->SetBinContent(47,0.3042625);
   ratio->SetBinContent(48,0.7107887);
   ratio->SetBinContent(49,0.2642347);
   ratio->SetBinContent(50,0.9731942);
   ratio->SetBinContent(51,0.3184473);
   ratio->SetBinContent(52,0.4398295);
   ratio->SetBinContent(53,0.5379121);
   ratio->SetBinContent(54,0.4792855);
   ratio->SetBinContent(55,0.1075343);
   ratio->SetBinContent(56,0.6255212);
   ratio->SetBinContent(57,0.457231);
   ratio->SetBinContent(58,0.3024612);
   ratio->SetBinContent(59,0.09533243);
   ratio->SetBinContent(60,0.1737974);
   ratio->SetBinContent(61,0.2060894);
   ratio->SetBinError(1,0.01869215);
   ratio->SetBinError(2,0.0760144);
   ratio->SetBinError(3,0.07214974);
   ratio->SetBinError(4,0.06388099);
   ratio->SetBinError(5,0.1005074);
   ratio->SetBinError(6,0.1100791);
   ratio->SetBinError(7,0.08667891);
   ratio->SetBinError(8,0.1078685);
   ratio->SetBinError(9,0.1012145);
   ratio->SetBinError(10,0.1085397);
   ratio->SetBinError(11,0.1038204);
   ratio->SetBinError(12,0.08392369);
   ratio->SetBinError(13,0.1263217);
   ratio->SetBinError(14,0.2068446);
   ratio->SetBinError(15,0.1868672);
   ratio->SetBinError(16,0.1381741);
   ratio->SetBinError(17,0.0993982);
   ratio->SetBinError(18,0.1513469);
   ratio->SetBinError(19,0.1426652);
   ratio->SetBinError(20,0.1182317);
   ratio->SetBinError(21,0.1435968);
   ratio->SetBinError(22,0.1554078);
   ratio->SetBinError(23,0.1739182);
   ratio->SetBinError(24,0.1048573);
   ratio->SetBinError(25,0.1771013);
   ratio->SetBinError(26,0.2244713);
   ratio->SetBinError(27,0.3045862);
   ratio->SetBinError(28,0.1594863);
   ratio->SetBinError(29,0.166364);
   ratio->SetBinError(30,0.1974228);
   ratio->SetBinError(31,0.1982785);
   ratio->SetBinError(32,0.2444613);
   ratio->SetBinError(33,0.2174279);
   ratio->SetBinError(34,0.204531);
   ratio->SetBinError(35,0.1933763);
   ratio->SetBinError(36,0.08810098);
   ratio->SetBinError(37,0.1137769);
   ratio->SetBinError(38,0.1940795);
   ratio->SetBinError(39,0.1318813);
   ratio->SetBinError(40,0.2530053);
   ratio->SetBinError(41,0.05970782);
   ratio->SetBinError(42,0.2577665);
   ratio->SetBinError(43,0.1360206);
   ratio->SetBinError(44,0.2824265);
   ratio->SetBinError(45,0.08724753);
   ratio->SetBinError(46,0.1405642);
   ratio->SetBinError(47,0.1623892);
   ratio->SetBinError(48,0.3008363);
   ratio->SetBinError(49,0.156854);
   ratio->SetBinError(50,0.4937254);
   ratio->SetBinError(51,0.1693187);
   ratio->SetBinError(52,0.2578697);
   ratio->SetBinError(53,0.2522606);
   ratio->SetBinError(54,0.2810188);
   ratio->SetBinError(55,0.06527159);
   ratio->SetBinError(56,0.3115667);
   ratio->SetBinError(57,0.2237489);
   ratio->SetBinError(58,0.1594826);
   ratio->SetBinError(59,0.09711429);
   ratio->SetBinError(60,0.1083577);
   ratio->SetBinError(61,0.03720184);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1086.496);
   ratio->SetStats(0);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("DataZ/MC");
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
