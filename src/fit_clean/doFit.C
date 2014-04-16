#include "string.h"


void doFit(string hltcut, string pTmin, string pTmax){
  gROOT->ProcessLine(".L fitDebug.C++");
  fitDebug(("abs(etaPhot)<1.4442  && isMatchedPhot==0 && ptPhot>"+pTmin+" && ptPhot<"+pTmax).c_str(), ("fit_EB_bg_WP095_pt"+pTmin+"_"+pTmax).c_str(), hltcut.c_str(), 0);
}
