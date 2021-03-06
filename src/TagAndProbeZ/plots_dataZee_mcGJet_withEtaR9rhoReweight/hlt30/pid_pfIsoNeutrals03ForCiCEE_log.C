{
//=========Macro generated from canvas: pid_pfIsoNeutrals03ForCiC/pid_pfIsoNeutrals03ForCiC
//=========  (Tue Dec  2 08:45:07 2014) by ROOT version5.32/00
   TCanvas *pid_pfIsoNeutrals03ForCiC = new TCanvas("pid_pfIsoNeutrals03ForCiC", "pid_pfIsoNeutrals03ForCiC",1,1,1000,876);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   pid_pfIsoNeutrals03ForCiC->SetHighLightColor(2);
   pid_pfIsoNeutrals03ForCiC->Range(-0.9749999,-0.09394745,6.525,0.845527);
   pid_pfIsoNeutrals03ForCiC->SetFillColor(0);
   pid_pfIsoNeutrals03ForCiC->SetBorderMode(0);
   pid_pfIsoNeutrals03ForCiC->SetBorderSize(2);
   pid_pfIsoNeutrals03ForCiC->SetTickx(1);
   pid_pfIsoNeutrals03ForCiC->SetLeftMargin(0.13);
   pid_pfIsoNeutrals03ForCiC->SetRightMargin(0.07);
   pid_pfIsoNeutrals03ForCiC->SetFrameFillStyle(0);
   pid_pfIsoNeutrals03ForCiC->SetFrameBorderMode(0);
  
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
   
   TH1F *pfIsoNeutrals03_mc_Z_EE__28 = new TH1F("pfIsoNeutrals03_mc_Z_EE__28","pfIsoNeutrals03_mc_Z_EE",60,0,6);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(1,0.7217675);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(2,1.65384e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(3,0.0004262185);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(4,0.001267003);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(5,0.005174371);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(6,0.01004156);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(7,0.01556676);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(8,0.03500337);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(9,0.03580935);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(10,0.03627269);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(11,0.02189462);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(12,0.01062016);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(13,0.007788889);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(14,0.006882029);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(15,0.006562501);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(16,0.00705674);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(17,0.006666378);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(18,0.006742275);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(19,0.006719428);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(20,0.005260803);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(21,0.004792491);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(22,0.004171796);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(23,0.003778585);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(24,0.003254259);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(25,0.003084187);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(26,0.002458324);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(27,0.002798249);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(28,0.002539852);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(29,0.002175106);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(30,0.002178065);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(31,0.002022578);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(32,0.001913951);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(33,0.001440696);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(34,0.001607335);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(35,0.001538325);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(36,0.001392495);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(37,0.001141059);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(38,0.001161175);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(39,0.0007520709);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(40,0.0007596939);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(41,0.00077825);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(42,0.000712888);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(43,0.0006353205);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(44,0.0006683866);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(45,0.0005677998);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(46,0.0004522598);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(47,0.0004581501);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(48,0.0003697582);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(49,0.000371498);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(50,0.0002712769);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(51,0.000266354);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(52,0.0002420846);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(53,0.0002926025);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(54,0.0001707968);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(55,0.0002105656);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(56,0.0001590747);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(57,0.0002719263);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(58,0.0001620408);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(59,0.0002762227);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(60,0.0001632178);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinContent(61,0.002003231);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(1,0.002969843);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(2,1.495587e-06);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(3,6.177458e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(4,0.0001121424);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(5,0.0002784936);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(6,0.000392999);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(7,0.0004342132);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(8,0.000650716);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(9,0.0006672122);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(10,0.0007248048);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(11,0.0005391873);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(12,0.0003599911);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(13,0.000271505);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(14,0.0002768372);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(15,0.0002457876);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(16,0.0003025186);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(17,0.0002736404);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(18,0.0002856035);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(19,0.0002965148);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(20,0.0002305233);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(21,0.0002599003);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(22,0.0002358323);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(23,0.000245034);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(24,0.0001674119);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(25,0.0001970393);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(26,0.0001471942);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(27,0.0001972447);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(28,0.0001699813);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(29,0.0001256291);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(30,0.0002123142);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(31,0.0001965119);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(32,0.0002033128);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(33,0.0001327825);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(34,0.0001480106);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(35,0.0001656369);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(36,0.0001377592);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(37,0.0001398404);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(38,0.0001309602);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(39,7.260868e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(40,7.086282e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(41,8.617338e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(42,7.979516e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(43,8.141264e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(44,9.381593e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(45,7.104221e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(46,5.898941e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(47,4.808874e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(48,9.879215e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(49,5.560909e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(50,3.634169e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(51,3.195783e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(52,3.683015e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(53,5.078155e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(54,2.771998e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(55,4.477152e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(56,2.846338e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(57,8.967443e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(58,2.54925e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(59,0.0001155622);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(60,4.367394e-05);
   pfIsoNeutrals03_mc_Z_EE__28->SetBinError(61,0.0001461298);
   pfIsoNeutrals03_mc_Z_EE__28->SetMinimum(3.427209e-07);
   pfIsoNeutrals03_mc_Z_EE__28->SetMaximum(4.041898);
   pfIsoNeutrals03_mc_Z_EE__28->SetEntries(460481);
   pfIsoNeutrals03_mc_Z_EE__28->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EE__28->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EE__28->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EE__28->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EE__28->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EE__28->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EE__28->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EE__28->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EE__28->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EE__28->Draw("PE");
   
   TH1F *pfIsoNeutrals03_mc_Signal_EE__29 = new TH1F("pfIsoNeutrals03_mc_Signal_EE__29","pfIsoNeutrals03_mc_Signal_EE",60,0,6);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(1,0.7110022);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(2,0.0006985181);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(3,0.004279922);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(4,0.007694741);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(5,0.0121602);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(6,0.01862947);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(7,0.0201021);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(8,0.02838187);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(9,0.02315506);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(10,0.02300721);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(11,0.01625095);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(12,0.01187038);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(13,0.01004652);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(14,0.008459936);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(15,0.008447696);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(16,0.008118802);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(17,0.007752178);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(18,0.007283721);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(19,0.005949952);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(20,0.005884189);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(21,0.005624931);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(22,0.004542043);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(23,0.00424748);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(24,0.003947977);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(25,0.003305189);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(26,0.003312069);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(27,0.00324975);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(28,0.002736384);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(29,0.002827709);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(30,0.002504544);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(31,0.002153571);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(32,0.001897308);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(33,0.001763533);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(34,0.001605086);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(35,0.001443681);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(36,0.001568421);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(37,0.001665776);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(38,0.0010434);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(39,0.001095321);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(40,0.0008542746);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(41,0.0009951788);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(42,0.0008729216);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(43,0.0007443659);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(44,0.0007711849);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(45,0.0005956796);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(46,0.0005998734);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(47,0.0005946517);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(48,0.0006091289);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(49,0.0003686797);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(50,0.0004562081);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(51,0.0003673998);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(52,0.0002651985);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(53,0.0003704331);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(54,0.0003796778);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(55,0.0002037839);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(56,0.000257527);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(57,0.0002309546);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(58,0.0002025896);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(59,0.0002474322);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(60,0.0003030457);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinContent(61,0.002662682);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(1,0.003414494);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(2,8.229103e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(3,0.0002497233);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(4,0.000334457);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(5,0.0004120201);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(6,0.0005447703);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(7,0.00057611);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(8,0.0007002621);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(9,0.0006065842);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(10,0.0006056859);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(11,0.0005064799);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(12,0.0004714364);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(13,0.0004158321);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(14,0.0003644636);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(15,0.0003840978);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(16,0.0003825383);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(17,0.000372386);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(18,0.0003487745);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(19,0.00027379);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(20,0.0003074253);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(21,0.0003156065);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(22,0.0002626948);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(23,0.0002555328);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(24,0.0002594917);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(25,0.0002118573);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(26,0.0002296298);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(27,0.0002400831);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(28,0.0002088587);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(29,0.0002309302);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(30,0.0002222565);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(31,0.0001961754);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(32,0.0001733108);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(33,0.000173496);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(34,0.0001651172);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(35,0.0001516675);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(36,0.0001707637);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(37,0.0001949556);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(38,0.0001254241);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(39,0.0001293695);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(40,9.670137e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(41,0.0001352843);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(42,0.0001297433);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(43,0.0001161663);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(44,0.0001196875);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(45,8.23985e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(46,9.340779e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(47,0.0001037171);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(48,0.0001078126);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(49,3.302831e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(50,9.090399e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(51,6.640957e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(52,5.289004e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(53,8.581489e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(54,8.521968e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(55,2.153385e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(56,8.17712e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(57,5.375289e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(58,5.737659e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(59,7.799648e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(60,9.409323e-05);
   pfIsoNeutrals03_mc_Signal_EE__29->SetBinError(61,0.000224874);
   pfIsoNeutrals03_mc_Signal_EE__29->SetEntries(612544);
   pfIsoNeutrals03_mc_Signal_EE__29->SetDirectory(0);
   pfIsoNeutrals03_mc_Signal_EE__29->SetStats(0);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EE__29->SetFillColor(ci);

   ci = TColor::GetColor("#99ff99");
   pfIsoNeutrals03_mc_Signal_EE__29->SetLineColor(ci);
   pfIsoNeutrals03_mc_Signal_EE__29->SetLineWidth(2);
   pfIsoNeutrals03_mc_Signal_EE__29->Draw("HSAME");
   
   TH1F *pfIsoNeutrals03_mc_Z_EE__30 = new TH1F("pfIsoNeutrals03_mc_Z_EE__30","pfIsoNeutrals03_mc_Z_EE",60,0,6);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(1,0.7217675);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(2,1.65384e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(3,0.0004262185);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(4,0.001267003);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(5,0.005174371);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(6,0.01004156);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(7,0.01556676);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(8,0.03500337);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(9,0.03580935);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(10,0.03627269);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(11,0.02189462);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(12,0.01062016);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(13,0.007788889);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(14,0.006882029);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(15,0.006562501);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(16,0.00705674);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(17,0.006666378);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(18,0.006742275);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(19,0.006719428);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(20,0.005260803);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(21,0.004792491);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(22,0.004171796);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(23,0.003778585);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(24,0.003254259);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(25,0.003084187);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(26,0.002458324);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(27,0.002798249);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(28,0.002539852);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(29,0.002175106);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(30,0.002178065);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(31,0.002022578);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(32,0.001913951);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(33,0.001440696);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(34,0.001607335);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(35,0.001538325);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(36,0.001392495);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(37,0.001141059);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(38,0.001161175);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(39,0.0007520709);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(40,0.0007596939);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(41,0.00077825);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(42,0.000712888);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(43,0.0006353205);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(44,0.0006683866);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(45,0.0005677998);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(46,0.0004522598);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(47,0.0004581501);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(48,0.0003697582);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(49,0.000371498);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(50,0.0002712769);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(51,0.000266354);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(52,0.0002420846);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(53,0.0002926025);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(54,0.0001707968);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(55,0.0002105656);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(56,0.0001590747);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(57,0.0002719263);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(58,0.0001620408);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(59,0.0002762227);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(60,0.0001632178);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinContent(61,0.002003231);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(1,0.002969843);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(2,1.495587e-06);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(3,6.177458e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(4,0.0001121424);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(5,0.0002784936);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(6,0.000392999);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(7,0.0004342132);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(8,0.000650716);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(9,0.0006672122);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(10,0.0007248048);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(11,0.0005391873);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(12,0.0003599911);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(13,0.000271505);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(14,0.0002768372);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(15,0.0002457876);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(16,0.0003025186);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(17,0.0002736404);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(18,0.0002856035);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(19,0.0002965148);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(20,0.0002305233);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(21,0.0002599003);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(22,0.0002358323);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(23,0.000245034);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(24,0.0001674119);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(25,0.0001970393);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(26,0.0001471942);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(27,0.0001972447);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(28,0.0001699813);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(29,0.0001256291);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(30,0.0002123142);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(31,0.0001965119);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(32,0.0002033128);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(33,0.0001327825);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(34,0.0001480106);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(35,0.0001656369);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(36,0.0001377592);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(37,0.0001398404);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(38,0.0001309602);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(39,7.260868e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(40,7.086282e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(41,8.617338e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(42,7.979516e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(43,8.141264e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(44,9.381593e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(45,7.104221e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(46,5.898941e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(47,4.808874e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(48,9.879215e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(49,5.560909e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(50,3.634169e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(51,3.195783e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(52,3.683015e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(53,5.078155e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(54,2.771998e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(55,4.477152e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(56,2.846338e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(57,8.967443e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(58,2.54925e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(59,0.0001155622);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(60,4.367394e-05);
   pfIsoNeutrals03_mc_Z_EE__30->SetBinError(61,0.0001461298);
   pfIsoNeutrals03_mc_Z_EE__30->SetMinimum(3.427209e-07);
   pfIsoNeutrals03_mc_Z_EE__30->SetMaximum(4.041898);
   pfIsoNeutrals03_mc_Z_EE__30->SetEntries(460481);
   pfIsoNeutrals03_mc_Z_EE__30->SetDirectory(0);
   pfIsoNeutrals03_mc_Z_EE__30->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EE__30->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   pfIsoNeutrals03_mc_Z_EE__30->SetMarkerColor(ci);
   pfIsoNeutrals03_mc_Z_EE__30->SetMarkerStyle(20);
   pfIsoNeutrals03_mc_Z_EE__30->SetMarkerSize(0.7);
   pfIsoNeutrals03_mc_Z_EE__30->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   pfIsoNeutrals03_mc_Z_EE__30->GetYaxis()->SetTitle("Entries/0.1");
   pfIsoNeutrals03_mc_Z_EE__30->GetYaxis()->SetTitleOffset(0.9);
   pfIsoNeutrals03_mc_Z_EE__30->Draw("PESAME");
   
   TLegend *leg = new TLegend(0,0,0,0,NULL,"brNDC");
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
   entry=leg->AddEntry("pfIsoNeutrals03_mc_Z_EE","MC Z #rightarrow ee","PL");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("pfIsoNeutrals03_mc_Signal_EE","signal #gamma + jet","F");
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
   pid_pfIsoNeutrals03ForCiC->cd();
  
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoNeutrals03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.015141);
   ratio->SetBinContent(2,0.0236764);
   ratio->SetBinContent(3,0.09958559);
   ratio->SetBinContent(4,0.1646583);
   ratio->SetBinContent(5,0.425517);
   ratio->SetBinContent(6,0.5390145);
   ratio->SetBinContent(7,0.7743848);
   ratio->SetBinContent(8,1.2333);
   ratio->SetBinContent(9,1.546502);
   ratio->SetBinContent(10,1.576579);
   ratio->SetBinContent(11,1.347283);
   ratio->SetBinContent(12,0.8946773);
   ratio->SetBinContent(13,0.7752824);
   ratio->SetBinContent(14,0.8134847);
   ratio->SetBinContent(15,0.7768392);
   ratio->SetBinContent(16,0.8691849);
   ratio->SetBinContent(17,0.8599361);
   ratio->SetBinContent(18,0.9256636);
   ratio->SetBinContent(19,1.129325);
   ratio->SetBinContent(20,0.8940575);
   ratio->SetBinContent(21,0.8520089);
   ratio->SetBinContent(22,0.9184844);
   ratio->SetBinContent(23,0.8896064);
   ratio->SetBinContent(24,0.8242852);
   ratio->SetBinContent(25,0.9331349);
   ratio->SetBinContent(26,0.742232);
   ratio->SetBinContent(27,0.8610659);
   ratio->SetBinContent(28,0.9281783);
   ratio->SetBinContent(29,0.7692113);
   ratio->SetBinContent(30,0.8696454);
   ratio->SetBinContent(31,0.939174);
   ratio->SetBinContent(32,1.008772);
   ratio->SetBinContent(33,0.8169374);
   ratio->SetBinContent(34,1.001401);
   ratio->SetBinContent(35,1.065557);
   ratio->SetBinContent(36,0.8878326);
   ratio->SetBinContent(37,0.6850015);
   ratio->SetBinContent(38,1.112876);
   ratio->SetBinContent(39,0.6866214);
   ratio->SetBinContent(40,0.8892853);
   ratio->SetBinContent(41,0.7820203);
   ratio->SetBinContent(42,0.8166689);
   ratio->SetBinContent(43,0.8535056);
   ratio->SetBinContent(44,0.8667008);
   ratio->SetBinContent(45,0.9531966);
   ratio->SetBinContent(46,0.7539254);
   ratio->SetBinContent(47,0.7704511);
   ratio->SetBinContent(48,0.6070278);
   ratio->SetBinContent(49,1.007644);
   ratio->SetBinContent(50,0.594634);
   ratio->SetBinContent(51,0.7249704);
   ratio->SetBinContent(52,0.912843);
   ratio->SetBinContent(53,0.7898927);
   ratio->SetBinContent(54,0.4498468);
   ratio->SetBinContent(55,1.033279);
   ratio->SetBinContent(56,0.6177012);
   ratio->SetBinContent(57,1.177402);
   ratio->SetBinContent(58,0.7998473);
   ratio->SetBinContent(59,1.116357);
   ratio->SetBinContent(60,0.5385914);
   ratio->SetBinContent(61,0.7523358);
   ratio->SetBinError(1,0.00641978);
   ratio->SetBinError(2,0.003516287);
   ratio->SetBinError(3,0.01555927);
   ratio->SetBinError(4,0.01623641);
   ratio->SetBinError(5,0.02706239);
   ratio->SetBinError(6,0.02633373);
   ratio->SetBinError(7,0.03096961);
   ratio->SetBinError(8,0.03809963);
   ratio->SetBinError(9,0.04971533);
   ratio->SetBinError(10,0.05210681);
   ratio->SetBinError(11,0.05351602);
   ratio->SetBinError(12,0.04671479);
   ratio->SetBinError(13,0.04195321);
   ratio->SetBinError(14,0.04794817);
   ratio->SetBinError(15,0.0457615);
   ratio->SetBinError(16,0.05536822);
   ratio->SetBinError(17,0.05433553);
   ratio->SetBinError(18,0.05917928);
   ratio->SetBinError(19,0.07200015);
   ratio->SetBinError(20,0.06096497);
   ratio->SetBinError(21,0.06648475);
   ratio->SetBinError(22,0.07428201);
   ratio->SetBinError(23,0.07869183);
   ratio->SetBinError(24,0.06880001);
   ratio->SetBinError(25,0.08444817);
   ratio->SetBinError(26,0.06799401);
   ratio->SetBinError(27,0.0879237);
   ratio->SetBinError(28,0.09422171);
   ratio->SetBinError(29,0.07694202);
   ratio->SetBinError(30,0.1146384);
   ratio->SetBinError(31,0.1250825);
   ratio->SetBinError(32,0.1413295);
   ratio->SetBinError(33,0.1101293);
   ratio->SetBinError(34,0.1382588);
   ratio->SetBinError(35,0.160296);
   ratio->SetBinError(36,0.1306083);
   ratio->SetBinError(37,0.1160803);
   ratio->SetBinError(38,0.1834377);
   ratio->SetBinError(39,0.1047433);
   ratio->SetBinError(40,0.1304384);
   ratio->SetBinError(41,0.1371105);
   ratio->SetBinError(42,0.1519531);
   ratio->SetBinError(43,0.1723487);
   ratio->SetBinError(44,0.1813629);
   ratio->SetBinError(45,0.1777883);
   ratio->SetBinError(46,0.1531397);
   ratio->SetBinError(47,0.1568361);
   ratio->SetBinError(48,0.1945451);
   ratio->SetBinError(49,0.175782);
   ratio->SetBinError(50,0.1427756);
   ratio->SetBinError(51,0.1572842);
   ratio->SetBinError(52,0.228977);
   ratio->SetBinError(53,0.228642);
   ratio->SetBinError(54,0.1245999);
   ratio->SetBinError(55,0.2453369);
   ratio->SetBinError(56,0.2251335);
   ratio->SetBinError(57,0.4752392);
   ratio->SetBinError(58,0.2591324);
   ratio->SetBinError(59,0.5847793);
   ratio->SetBinError(60,0.2207598);
   ratio->SetBinError(61,0.08395792);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1696.611);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
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
   
   TH1F *ratio = new TH1F("ratio","pfIsoNeutrals03_mc_Z_EE",60,0,6);
   ratio->SetBinContent(1,1.015141);
   ratio->SetBinContent(2,0.0236764);
   ratio->SetBinContent(3,0.09958559);
   ratio->SetBinContent(4,0.1646583);
   ratio->SetBinContent(5,0.425517);
   ratio->SetBinContent(6,0.5390145);
   ratio->SetBinContent(7,0.7743848);
   ratio->SetBinContent(8,1.2333);
   ratio->SetBinContent(9,1.546502);
   ratio->SetBinContent(10,1.576579);
   ratio->SetBinContent(11,1.347283);
   ratio->SetBinContent(12,0.8946773);
   ratio->SetBinContent(13,0.7752824);
   ratio->SetBinContent(14,0.8134847);
   ratio->SetBinContent(15,0.7768392);
   ratio->SetBinContent(16,0.8691849);
   ratio->SetBinContent(17,0.8599361);
   ratio->SetBinContent(18,0.9256636);
   ratio->SetBinContent(19,1.129325);
   ratio->SetBinContent(20,0.8940575);
   ratio->SetBinContent(21,0.8520089);
   ratio->SetBinContent(22,0.9184844);
   ratio->SetBinContent(23,0.8896064);
   ratio->SetBinContent(24,0.8242852);
   ratio->SetBinContent(25,0.9331349);
   ratio->SetBinContent(26,0.742232);
   ratio->SetBinContent(27,0.8610659);
   ratio->SetBinContent(28,0.9281783);
   ratio->SetBinContent(29,0.7692113);
   ratio->SetBinContent(30,0.8696454);
   ratio->SetBinContent(31,0.939174);
   ratio->SetBinContent(32,1.008772);
   ratio->SetBinContent(33,0.8169374);
   ratio->SetBinContent(34,1.001401);
   ratio->SetBinContent(35,1.065557);
   ratio->SetBinContent(36,0.8878326);
   ratio->SetBinContent(37,0.6850015);
   ratio->SetBinContent(38,1.112876);
   ratio->SetBinContent(39,0.6866214);
   ratio->SetBinContent(40,0.8892853);
   ratio->SetBinContent(41,0.7820203);
   ratio->SetBinContent(42,0.8166689);
   ratio->SetBinContent(43,0.8535056);
   ratio->SetBinContent(44,0.8667008);
   ratio->SetBinContent(45,0.9531966);
   ratio->SetBinContent(46,0.7539254);
   ratio->SetBinContent(47,0.7704511);
   ratio->SetBinContent(48,0.6070278);
   ratio->SetBinContent(49,1.007644);
   ratio->SetBinContent(50,0.594634);
   ratio->SetBinContent(51,0.7249704);
   ratio->SetBinContent(52,0.912843);
   ratio->SetBinContent(53,0.7898927);
   ratio->SetBinContent(54,0.4498468);
   ratio->SetBinContent(55,1.033279);
   ratio->SetBinContent(56,0.6177012);
   ratio->SetBinContent(57,1.177402);
   ratio->SetBinContent(58,0.7998473);
   ratio->SetBinContent(59,1.116357);
   ratio->SetBinContent(60,0.5385914);
   ratio->SetBinContent(61,0.7523358);
   ratio->SetBinError(1,0.00641978);
   ratio->SetBinError(2,0.003516287);
   ratio->SetBinError(3,0.01555927);
   ratio->SetBinError(4,0.01623641);
   ratio->SetBinError(5,0.02706239);
   ratio->SetBinError(6,0.02633373);
   ratio->SetBinError(7,0.03096961);
   ratio->SetBinError(8,0.03809963);
   ratio->SetBinError(9,0.04971533);
   ratio->SetBinError(10,0.05210681);
   ratio->SetBinError(11,0.05351602);
   ratio->SetBinError(12,0.04671479);
   ratio->SetBinError(13,0.04195321);
   ratio->SetBinError(14,0.04794817);
   ratio->SetBinError(15,0.0457615);
   ratio->SetBinError(16,0.05536822);
   ratio->SetBinError(17,0.05433553);
   ratio->SetBinError(18,0.05917928);
   ratio->SetBinError(19,0.07200015);
   ratio->SetBinError(20,0.06096497);
   ratio->SetBinError(21,0.06648475);
   ratio->SetBinError(22,0.07428201);
   ratio->SetBinError(23,0.07869183);
   ratio->SetBinError(24,0.06880001);
   ratio->SetBinError(25,0.08444817);
   ratio->SetBinError(26,0.06799401);
   ratio->SetBinError(27,0.0879237);
   ratio->SetBinError(28,0.09422171);
   ratio->SetBinError(29,0.07694202);
   ratio->SetBinError(30,0.1146384);
   ratio->SetBinError(31,0.1250825);
   ratio->SetBinError(32,0.1413295);
   ratio->SetBinError(33,0.1101293);
   ratio->SetBinError(34,0.1382588);
   ratio->SetBinError(35,0.160296);
   ratio->SetBinError(36,0.1306083);
   ratio->SetBinError(37,0.1160803);
   ratio->SetBinError(38,0.1834377);
   ratio->SetBinError(39,0.1047433);
   ratio->SetBinError(40,0.1304384);
   ratio->SetBinError(41,0.1371105);
   ratio->SetBinError(42,0.1519531);
   ratio->SetBinError(43,0.1723487);
   ratio->SetBinError(44,0.1813629);
   ratio->SetBinError(45,0.1777883);
   ratio->SetBinError(46,0.1531397);
   ratio->SetBinError(47,0.1568361);
   ratio->SetBinError(48,0.1945451);
   ratio->SetBinError(49,0.175782);
   ratio->SetBinError(50,0.1427756);
   ratio->SetBinError(51,0.1572842);
   ratio->SetBinError(52,0.228977);
   ratio->SetBinError(53,0.228642);
   ratio->SetBinError(54,0.1245999);
   ratio->SetBinError(55,0.2453369);
   ratio->SetBinError(56,0.2251335);
   ratio->SetBinError(57,0.4752392);
   ratio->SetBinError(58,0.2591324);
   ratio->SetBinError(59,0.5847793);
   ratio->SetBinError(60,0.2207598);
   ratio->SetBinError(61,0.08395792);
   ratio->SetMinimum(0.2);
   ratio->SetMaximum(3);
   ratio->SetEntries(1696.611);
   ratio->SetStats(0);

   ci = TColor::GetColor("#ff0099");
   ratio->SetLineColor(ci);

   ci = TColor::GetColor("#ff0099");
   ratio->SetMarkerColor(ci);
   ratio->SetMarkerStyle(20);
   ratio->SetMarkerSize(0.7);
   ratio->GetXaxis()->SetTitle("PfIso Neutral #DeltaR=0.3 (GeV)");
   ratio->GetXaxis()->SetLabelSize(0.07);
   ratio->GetXaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitle("MC(e)/MC(#gamma)");
   ratio->GetYaxis()->SetLabelSize(0.07);
   ratio->GetYaxis()->SetTitleSize(0.08);
   ratio->GetYaxis()->SetTitleOffset(0.35);
   ratio->Draw("PESAME");
   pad2->Modified();
   pid_pfIsoNeutrals03ForCiC->cd();
   pid_pfIsoNeutrals03ForCiC->Modified();
   pid_pfIsoNeutrals03ForCiC->cd();
   pid_pfIsoNeutrals03ForCiC->SetSelected(pid_pfIsoNeutrals03ForCiC);
}
