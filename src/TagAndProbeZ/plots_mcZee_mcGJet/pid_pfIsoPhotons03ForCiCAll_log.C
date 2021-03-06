{
//=========Macro generated from canvas: pid_pfIsoPhotons03ForCiC/pid_pfIsoPhotons03ForCiC
//=========  (Wed Sep 17 23:45:20 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoPhotons03ForCiC = new TCanvas("pid_pfIsoPhotons03ForCiC", "pid_pfIsoPhotons03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoPhotons03ForCiC->SetHighLightColor(2);
   pid_pfIsoPhotons03ForCiC->Range(-0.9749999,-0.03812236,6.525,0.3431012);
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
   
   TH1F *pfIsoPhotons03_mc_Z_All__28 = new TH1F("pfIsoPhotons03_mc_Z_All__28","pfIsoPhotons03_mc_Z_All",60,0,6);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(1,0.2937738);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(2,0.02072998);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(3,0.05046875);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(4,0.06517243);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(5,0.05116029);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(6,0.04623103);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(7,0.04353392);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(8,0.04019235);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(9,0.03725198);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(10,0.03390629);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(11,0.03093954);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(12,0.02796675);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(13,0.02537152);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(14,0.02289564);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(15,0.0206806);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(16,0.01864052);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(17,0.0166497);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(18,0.01499696);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(19,0.01347297);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(20,0.01216183);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(21,0.01088619);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(22,0.00995307);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(23,0.008764758);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(24,0.007972244);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(25,0.007150679);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(26,0.006422321);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(27,0.005868857);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(28,0.005207844);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(29,0.004709146);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(30,0.004276711);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(31,0.003915168);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(32,0.00348958);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(33,0.003204329);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(34,0.002923854);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(35,0.00266916);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(36,0.002374381);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(37,0.002218632);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(38,0.001963213);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(39,0.001809644);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(40,0.001671175);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(41,0.001542409);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(42,0.001402542);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(43,0.001287067);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(44,0.001225047);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(45,0.001111861);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(46,0.001023946);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(47,0.0009931406);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(48,0.0008847885);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(49,0.0008201835);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(50,0.00076434);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(51,0.0007105112);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(52,0.000648244);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(53,0.0006171321);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(54,0.0005684073);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(55,0.0005367398);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(56,0.0004801902);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(57,0.000466365);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(58,0.0004678668);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(59,0.0004091574);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(60,0.0003922627);
   pfIsoPhotons03_mc_Z_All__28->SetBinContent(61,0.009183716);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(1,0.0003129251);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(2,8.233165e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(3,0.0001285846);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(4,0.0001459335);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(5,0.0001290946);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(6,0.0001224828);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(7,0.0001184955);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(8,0.0001135943);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(9,0.000109141);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(10,0.0001038764);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(11,9.900246e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(12,9.385619e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(13,8.923833e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(14,8.463555e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(15,8.02687e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(16,7.602702e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(17,7.169764e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(18,6.79197e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(19,6.428457e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(20,6.096454e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(21,5.756135e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(22,5.498735e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(23,5.147435e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(24,4.901839e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(25,4.63977e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(26,4.391705e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(27,4.18703e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(28,3.941993e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(29,3.747719e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(30,3.564795e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(31,3.405828e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(32,3.212966e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(33,3.078778e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(34,2.939782e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(35,2.801431e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(36,2.647814e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(37,2.555542e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(38,2.39493e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(39,2.300409e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(40,2.212776e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(41,2.122532e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(42,2.024988e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(43,1.939892e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(44,1.892189e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(45,1.802707e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(46,1.725779e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(47,1.702433e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(48,1.606561e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(49,1.548976e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(50,1.489661e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(51,1.440534e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(52,1.373433e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(53,1.341195e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(54,1.289796e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(55,1.249678e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(56,1.182534e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(57,1.161975e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(58,1.1663e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(59,1.086145e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(60,1.071076e-05);
   pfIsoPhotons03_mc_Z_All__28->SetBinError(61,5.221189e-05);
   pfIsoPhotons03_mc_Z_All__28->SetMinimum(2.89316e-08);
   pfIsoPhotons03_mc_Z_All__28->SetMaximum(1.645133);
   pfIsoPhotons03_mc_Z_All__28->SetEntries(3272230);
   pfIsoPhotons03_mc_Z_All__28->SetDirectory(0);
   pfIsoPhotons03_mc_Z_All__28->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__28->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__28->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_All__28->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_All__28->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_All__28->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_All__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_All__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_All__28->Draw("PE");
   
   TH1F *pfIsoPhotons03_mc_Signal_All__29 = new TH1F("pfIsoPhotons03_mc_Signal_All__29","pfIsoPhotons03_mc_Signal_All",60,0,6);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(1,0.2757921);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(2,0.02046047);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(3,0.04827689);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(4,0.05934345);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(5,0.04733209);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(6,0.04334818);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(7,0.04094903);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(8,0.03791171);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(9,0.03584583);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(10,0.03297688);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(11,0.03046217);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(12,0.02785086);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(13,0.02633362);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(14,0.02365985);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(15,0.02196397);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(16,0.01963472);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(17,0.01800829);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(18,0.01629494);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(19,0.0150229);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(20,0.01362798);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(21,0.01247322);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(22,0.01137675);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(23,0.01054413);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(24,0.009677568);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(25,0.008596453);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(26,0.007892899);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(27,0.007017618);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(28,0.006553753);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(29,0.005930589);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(30,0.005515561);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(31,0.005111145);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(32,0.004378346);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(33,0.004228014);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(34,0.003823393);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(35,0.003635379);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(36,0.003169325);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(37,0.002991541);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(38,0.002732611);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(39,0.002544503);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(40,0.002456773);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(41,0.002134548);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(42,0.001901669);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(43,0.001768109);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(44,0.001792984);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(45,0.001660871);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(46,0.001585881);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(47,0.001340662);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(48,0.001310098);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(49,0.001257561);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(50,0.001111444);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(51,0.001300871);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(52,0.001137599);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(53,0.000872714);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(54,0.0008350092);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(55,0.0007859759);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(56,0.0008389651);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(57,0.0007398995);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(58,0.0006895338);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(59,0.0006224068);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(60,0.0005677312);
   pfIsoPhotons03_mc_Signal_All__29->SetBinContent(61,0.01495895);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(1,0.0009961486);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(2,0.0002658346);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(3,0.0003996286);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(4,0.0003797244);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(5,0.0003602201);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(6,0.000354223);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(7,0.0003099237);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(8,0.0003349006);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(9,0.0002936935);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(10,0.0002891545);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(11,0.0002181614);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(12,0.0001902851);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(13,0.0003767292);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(14,0.0002162586);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(15,0.00031835);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(16,0.0001752521);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(17,0.000178642);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(18,0.0001345122);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(19,0.0001959852);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(20,0.0002209045);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(21,0.0001849332);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(22,0.000255825);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(23,0.0002706825);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(24,0.0002655765);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(25,0.0001118453);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(26,0.0001732321);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(27,0.0001176128);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(28,0.000139222);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(29,0.000154988);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(30,0.0001604295);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(31,0.0002212263);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(32,5.886814e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(33,0.0001221846);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(34,0.0001245884);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(35,5.648262e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(36,5.441322e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(37,0.0001066789);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(38,4.896692e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(39,0.0001116411);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(40,0.0001138385);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(41,4.130087e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(42,3.799299e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(43,3.662201e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(44,7.990213e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(45,6.547407e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(46,0.0001032098);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(47,3.277973e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(48,3.945502e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(49,0.0001193994);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(50,3.388199e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(51,0.0001500185);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(52,0.0001118342);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(53,2.589831e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(54,2.480272e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(55,2.575725e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(56,0.0001036944);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(57,2.732759e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(58,2.753673e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(59,2.274781e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(60,2.154611e-05);
   pfIsoPhotons03_mc_Signal_All__29->SetBinError(61,0.0002249575);
   pfIsoPhotons03_mc_Signal_All__29->SetEntries(8221233);
   pfIsoPhotons03_mc_Signal_All__29->SetDirectory(0);
   pfIsoPhotons03_mc_Signal_All__29->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_All__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoPhotons03_mc_Signal_All__29->SetLineColor(ci);
   pfIsoPhotons03_mc_Signal_All__29->SetLineWidth(2);
   pfIsoPhotons03_mc_Signal_All__29->Draw("HSAME");
   
   TH1F *pfIsoPhotons03_mc_Z_All__30 = new TH1F("pfIsoPhotons03_mc_Z_All__30","pfIsoPhotons03_mc_Z_All",60,0,6);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(1,0.2937738);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(2,0.02072998);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(3,0.05046875);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(4,0.06517243);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(5,0.05116029);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(6,0.04623103);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(7,0.04353392);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(8,0.04019235);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(9,0.03725198);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(10,0.03390629);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(11,0.03093954);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(12,0.02796675);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(13,0.02537152);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(14,0.02289564);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(15,0.0206806);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(16,0.01864052);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(17,0.0166497);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(18,0.01499696);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(19,0.01347297);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(20,0.01216183);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(21,0.01088619);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(22,0.00995307);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(23,0.008764758);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(24,0.007972244);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(25,0.007150679);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(26,0.006422321);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(27,0.005868857);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(28,0.005207844);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(29,0.004709146);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(30,0.004276711);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(31,0.003915168);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(32,0.00348958);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(33,0.003204329);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(34,0.002923854);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(35,0.00266916);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(36,0.002374381);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(37,0.002218632);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(38,0.001963213);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(39,0.001809644);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(40,0.001671175);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(41,0.001542409);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(42,0.001402542);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(43,0.001287067);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(44,0.001225047);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(45,0.001111861);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(46,0.001023946);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(47,0.0009931406);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(48,0.0008847885);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(49,0.0008201835);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(50,0.00076434);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(51,0.0007105112);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(52,0.000648244);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(53,0.0006171321);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(54,0.0005684073);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(55,0.0005367398);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(56,0.0004801902);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(57,0.000466365);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(58,0.0004678668);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(59,0.0004091574);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(60,0.0003922627);
   pfIsoPhotons03_mc_Z_All__30->SetBinContent(61,0.009183716);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(1,0.0003129251);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(2,8.233165e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(3,0.0001285846);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(4,0.0001459335);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(5,0.0001290946);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(6,0.0001224828);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(7,0.0001184955);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(8,0.0001135943);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(9,0.000109141);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(10,0.0001038764);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(11,9.900246e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(12,9.385619e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(13,8.923833e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(14,8.463555e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(15,8.02687e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(16,7.602702e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(17,7.169764e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(18,6.79197e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(19,6.428457e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(20,6.096454e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(21,5.756135e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(22,5.498735e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(23,5.147435e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(24,4.901839e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(25,4.63977e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(26,4.391705e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(27,4.18703e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(28,3.941993e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(29,3.747719e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(30,3.564795e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(31,3.405828e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(32,3.212966e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(33,3.078778e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(34,2.939782e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(35,2.801431e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(36,2.647814e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(37,2.555542e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(38,2.39493e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(39,2.300409e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(40,2.212776e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(41,2.122532e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(42,2.024988e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(43,1.939892e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(44,1.892189e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(45,1.802707e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(46,1.725779e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(47,1.702433e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(48,1.606561e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(49,1.548976e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(50,1.489661e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(51,1.440534e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(52,1.373433e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(53,1.341195e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(54,1.289796e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(55,1.249678e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(56,1.182534e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(57,1.161975e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(58,1.1663e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(59,1.086145e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(60,1.071076e-05);
   pfIsoPhotons03_mc_Z_All__30->SetBinError(61,5.221189e-05);
   pfIsoPhotons03_mc_Z_All__30->SetMinimum(2.89316e-08);
   pfIsoPhotons03_mc_Z_All__30->SetMaximum(1.645133);
   pfIsoPhotons03_mc_Z_All__30->SetEntries(3272230);
   pfIsoPhotons03_mc_Z_All__30->SetDirectory(0);
   pfIsoPhotons03_mc_Z_All__30->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__30->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoPhotons03_mc_Z_All__30->SetMarkerColor(ci);
   pfIsoPhotons03_mc_Z_All__30->SetMarkerStyle(20);
   pfIsoPhotons03_mc_Z_All__30->SetMarkerSize(0.7);
   pfIsoPhotons03_mc_Z_All__30->GetXaxis()->SetTitle("PfIso Photon #DeltaR=0.3 (GeV)");
   pfIsoPhotons03_mc_Z_All__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoPhotons03_mc_Z_All__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoPhotons03_mc_Z_All__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(6.773708e-17,1.919917e-17,3.074924e-18,7.794073e-19,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.038);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","All","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Z_All","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoPhotons03_mc_Signal_All","signal #gamma + jet","F");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.0652);
   ratio->SetBinContent(2,1.013172);
   ratio->SetBinContent(3,1.045402);
   ratio->SetBinContent(4,1.098225);
   ratio->SetBinContent(5,1.080879);
   ratio->SetBinContent(6,1.066504);
   ratio->SetBinContent(7,1.063125);
   ratio->SetBinContent(8,1.060157);
   ratio->SetBinContent(9,1.039227);
   ratio->SetBinContent(10,1.028184);
   ratio->SetBinContent(11,1.015671);
   ratio->SetBinContent(12,1.004161);
   ratio->SetBinContent(13,0.9634649);
   ratio->SetBinContent(14,0.9677002);
   ratio->SetBinContent(15,0.9415696);
   ratio->SetBinContent(16,0.9493652);
   ratio->SetBinContent(17,0.9245574);
   ratio->SetBinContent(18,0.9203445);
   ratio->SetBinContent(19,0.8968288);
   ratio->SetBinContent(20,0.8924163);
   ratio->SetBinContent(21,0.8727653);
   ratio->SetBinContent(22,0.8748606);
   ratio->SetBinContent(23,0.8312451);
   ratio->SetBinContent(24,0.8237859);
   ratio->SetBinContent(25,0.8318174);
   ratio->SetBinContent(26,0.8136834);
   ratio->SetBinContent(27,0.8363033);
   ratio->SetBinContent(28,0.7946354);
   ratio->SetBinContent(29,0.7940435);
   ratio->SetBinContent(30,0.7753899);
   ratio->SetBinContent(31,0.766006);
   ratio->SetBinContent(32,0.7970087);
   ratio->SetBinContent(33,0.7578804);
   ratio->SetBinContent(34,0.7647277);
   ratio->SetBinContent(35,0.7342178);
   ratio->SetBinContent(36,0.7491756);
   ratio->SetBinContent(37,0.7416353);
   ratio->SetBinContent(38,0.7184385);
   ratio->SetBinContent(39,0.7111973);
   ratio->SetBinContent(40,0.6802318);
   ratio->SetBinContent(41,0.7225929);
   ratio->SetBinContent(42,0.7375323);
   ratio->SetBinContent(43,0.7279341);
   ratio->SetBinContent(44,0.6832446);
   ratio->SetBinContent(45,0.6694445);
   ratio->SetBinContent(46,0.645664);
   ratio->SetBinContent(47,0.7407836);
   ratio->SetBinContent(48,0.6753604);
   ratio->SetBinContent(49,0.6522015);
   ratio->SetBinContent(50,0.6876999);
   ratio->SetBinContent(51,0.5461809);
   ratio->SetBinContent(52,0.569835);
   ratio->SetBinContent(53,0.7071413);
   ratio->SetBinContent(54,0.6807199);
   ratio->SetBinContent(55,0.682896);
   ratio->SetBinContent(56,0.5723602);
   ratio->SetBinContent(57,0.6303086);
   ratio->SetBinContent(58,0.6785263);
   ratio->SetBinContent(59,0.6573793);
   ratio->SetBinContent(60,0.6909304);
   ratio->SetBinContent(61,0.613928);
   ratio->SetBinError(1,0.004011275);
   ratio->SetBinError(2,0.01376503);
   ratio->SetBinError(3,0.009054293);
   ratio->SetBinError(4,0.007445127);
   ratio->SetBinError(5,0.008666381);
   ratio->SetBinError(6,0.009161629);
   ratio->SetBinError(7,0.008550811);
   ratio->SetBinError(8,0.009832744);
   ratio->SetBinError(9,0.009042647);
   ratio->SetBinError(10,0.009549977);
   ratio->SetBinError(11,0.007966987);
   ratio->SetBinError(12,0.007643692);
   ratio->SetBinError(13,0.01419381);
   ratio->SetBinError(14,0.00954106);
   ratio->SetBinError(15,0.01412814);
   ratio->SetBinError(16,0.009316445);
   ratio->SetBinError(17,0.009998478);
   ratio->SetBinError(18,0.008665589);
   ratio->SetBinError(19,0.01245779);
   ratio->SetBinError(20,0.01514165);
   ratio->SetBinError(21,0.01373826);
   ratio->SetBinError(22,0.02025773);
   ratio->SetBinError(23,0.0218905);
   ratio->SetBinError(24,0.02316722);
   ratio->SetBinError(25,0.01209367);
   ratio->SetBinError(26,0.01870532);
   ratio->SetBinError(27,0.01523323);
   ratio->SetBinError(28,0.01792011);
   ratio->SetBinError(29,0.02169213);
   ratio->SetBinError(30,0.02346134);
   ratio->SetBinError(31,0.03381811);
   ratio->SetBinError(32,0.01298783);
   ratio->SetBinError(33,0.02308065);
   ratio->SetBinError(34,0.02607855);
   ratio->SetBinError(35,0.01376639);
   ratio->SetBinError(36,0.01533749);
   ratio->SetBinError(37,0.02779228);
   ratio->SetBinError(38,0.01557411);
   ratio->SetBinError(39,0.03248735);
   ratio->SetBinError(40,0.03278124);
   ratio->SetBinError(41,0.01715673);
   ratio->SetBinError(42,0.01817993);
   ratio->SetBinError(43,0.01864676);
   ratio->SetBinError(44,0.032225);
   ratio->SetBinError(45,0.0285354);
   ratio->SetBinError(46,0.0434063);
   ratio->SetBinError(47,0.02212039);
   ratio->SetBinError(48,0.02375);
   ratio->SetBinError(49,0.06313653);
   ratio->SetBinError(50,0.02488252);
   ratio->SetBinError(51,0.06395244);
   ratio->SetBinError(52,0.05730507);
   ratio->SetBinError(53,0.02601042);
   ratio->SetBinError(54,0.02544472);
   ratio->SetBinError(55,0.02745232);
   ratio->SetBinError(56,0.0721331);
   ratio->SetBinError(57,0.02808178);
   ratio->SetBinError(58,0.03194291);
   ratio->SetBinError(59,0.02969471);
   ratio->SetBinError(60,0.03230323);
   ratio->SetBinError(61,0.00987019);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(59230.69);
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoPhotons03_mc_Z_All",60,0,6);
   ratio->SetBinContent(1,1.0652);
   ratio->SetBinContent(2,1.013172);
   ratio->SetBinContent(3,1.045402);
   ratio->SetBinContent(4,1.098225);
   ratio->SetBinContent(5,1.080879);
   ratio->SetBinContent(6,1.066504);
   ratio->SetBinContent(7,1.063125);
   ratio->SetBinContent(8,1.060157);
   ratio->SetBinContent(9,1.039227);
   ratio->SetBinContent(10,1.028184);
   ratio->SetBinContent(11,1.015671);
   ratio->SetBinContent(12,1.004161);
   ratio->SetBinContent(13,0.9634649);
   ratio->SetBinContent(14,0.9677002);
   ratio->SetBinContent(15,0.9415696);
   ratio->SetBinContent(16,0.9493652);
   ratio->SetBinContent(17,0.9245574);
   ratio->SetBinContent(18,0.9203445);
   ratio->SetBinContent(19,0.8968288);
   ratio->SetBinContent(20,0.8924163);
   ratio->SetBinContent(21,0.8727653);
   ratio->SetBinContent(22,0.8748606);
   ratio->SetBinContent(23,0.8312451);
   ratio->SetBinContent(24,0.8237859);
   ratio->SetBinContent(25,0.8318174);
   ratio->SetBinContent(26,0.8136834);
   ratio->SetBinContent(27,0.8363033);
   ratio->SetBinContent(28,0.7946354);
   ratio->SetBinContent(29,0.7940435);
   ratio->SetBinContent(30,0.7753899);
   ratio->SetBinContent(31,0.766006);
   ratio->SetBinContent(32,0.7970087);
   ratio->SetBinContent(33,0.7578804);
   ratio->SetBinContent(34,0.7647277);
   ratio->SetBinContent(35,0.7342178);
   ratio->SetBinContent(36,0.7491756);
   ratio->SetBinContent(37,0.7416353);
   ratio->SetBinContent(38,0.7184385);
   ratio->SetBinContent(39,0.7111973);
   ratio->SetBinContent(40,0.6802318);
   ratio->SetBinContent(41,0.7225929);
   ratio->SetBinContent(42,0.7375323);
   ratio->SetBinContent(43,0.7279341);
   ratio->SetBinContent(44,0.6832446);
   ratio->SetBinContent(45,0.6694445);
   ratio->SetBinContent(46,0.645664);
   ratio->SetBinContent(47,0.7407836);
   ratio->SetBinContent(48,0.6753604);
   ratio->SetBinContent(49,0.6522015);
   ratio->SetBinContent(50,0.6876999);
   ratio->SetBinContent(51,0.5461809);
   ratio->SetBinContent(52,0.569835);
   ratio->SetBinContent(53,0.7071413);
   ratio->SetBinContent(54,0.6807199);
   ratio->SetBinContent(55,0.682896);
   ratio->SetBinContent(56,0.5723602);
   ratio->SetBinContent(57,0.6303086);
   ratio->SetBinContent(58,0.6785263);
   ratio->SetBinContent(59,0.6573793);
   ratio->SetBinContent(60,0.6909304);
   ratio->SetBinContent(61,0.613928);
   ratio->SetBinError(1,0.004011275);
   ratio->SetBinError(2,0.01376503);
   ratio->SetBinError(3,0.009054293);
   ratio->SetBinError(4,0.007445127);
   ratio->SetBinError(5,0.008666381);
   ratio->SetBinError(6,0.009161629);
   ratio->SetBinError(7,0.008550811);
   ratio->SetBinError(8,0.009832744);
   ratio->SetBinError(9,0.009042647);
   ratio->SetBinError(10,0.009549977);
   ratio->SetBinError(11,0.007966987);
   ratio->SetBinError(12,0.007643692);
   ratio->SetBinError(13,0.01419381);
   ratio->SetBinError(14,0.00954106);
   ratio->SetBinError(15,0.01412814);
   ratio->SetBinError(16,0.009316445);
   ratio->SetBinError(17,0.009998478);
   ratio->SetBinError(18,0.008665589);
   ratio->SetBinError(19,0.01245779);
   ratio->SetBinError(20,0.01514165);
   ratio->SetBinError(21,0.01373826);
   ratio->SetBinError(22,0.02025773);
   ratio->SetBinError(23,0.0218905);
   ratio->SetBinError(24,0.02316722);
   ratio->SetBinError(25,0.01209367);
   ratio->SetBinError(26,0.01870532);
   ratio->SetBinError(27,0.01523323);
   ratio->SetBinError(28,0.01792011);
   ratio->SetBinError(29,0.02169213);
   ratio->SetBinError(30,0.02346134);
   ratio->SetBinError(31,0.03381811);
   ratio->SetBinError(32,0.01298783);
   ratio->SetBinError(33,0.02308065);
   ratio->SetBinError(34,0.02607855);
   ratio->SetBinError(35,0.01376639);
   ratio->SetBinError(36,0.01533749);
   ratio->SetBinError(37,0.02779228);
   ratio->SetBinError(38,0.01557411);
   ratio->SetBinError(39,0.03248735);
   ratio->SetBinError(40,0.03278124);
   ratio->SetBinError(41,0.01715673);
   ratio->SetBinError(42,0.01817993);
   ratio->SetBinError(43,0.01864676);
   ratio->SetBinError(44,0.032225);
   ratio->SetBinError(45,0.0285354);
   ratio->SetBinError(46,0.0434063);
   ratio->SetBinError(47,0.02212039);
   ratio->SetBinError(48,0.02375);
   ratio->SetBinError(49,0.06313653);
   ratio->SetBinError(50,0.02488252);
   ratio->SetBinError(51,0.06395244);
   ratio->SetBinError(52,0.05730507);
   ratio->SetBinError(53,0.02601042);
   ratio->SetBinError(54,0.02544472);
   ratio->SetBinError(55,0.02745232);
   ratio->SetBinError(56,0.0721331);
   ratio->SetBinError(57,0.02808178);
   ratio->SetBinError(58,0.03194291);
   ratio->SetBinError(59,0.02969471);
   ratio->SetBinError(60,0.03230323);
   ratio->SetBinError(61,0.00987019);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(59230.69);
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
