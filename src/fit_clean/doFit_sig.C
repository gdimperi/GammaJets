{
  gROOT->ProcessLine(".x RooCBmyCrujff.cxx+");
  gROOT->ProcessLine(".L fitDebug_sig.C++");
  fitDebug_sig("abs(etaPhot)<1.4442  && isMatchedPhot==1 && abs(ptPhot - 52.5)<12.5", "fit_EB_sig_WP095_CBCrujff_pt40_65", "hltcut30", 0);
  //  fitDebug_sig("abs(etaPhot)<1.4442  && isMatchedPhot==1 && abs(ptPhot-64.)<1.", "fit_EB_sig_WP095_CBCrujff_pt63_65", 0);
  //fitDebug_sig("abs(etaPhot)<1.4442  && isMatchedPhot==1 && abs(ptPhot-77.5)<12.5", "fit_EB_sig_WP095_CBCrujff_pt65_90");
  //fitDebug_sig("abs(etaPhot)<1.4442  && isMatchedPhot==1 && abs(ptPhot-97.5)<7.5", "fit_EB_sig_WP095_CBCrujff_pt90_105");
  //fitDebug_sig("abs(etaPhot)<1.4442  && isMatchedPhot==1 && ptPhot>105.", "fit_EB_sig_WP095_CBCrujff_pt105");

  
}
