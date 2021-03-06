/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "RooCBmyCrujff.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 
#include "RooMath.h"

ClassImp(RooCBmyCrujff) 

 RooCBmyCrujff::RooCBmyCrujff(const char *name, const char *title, 
                        RooAbsReal& _m,
                        RooAbsReal& _m0,
                        RooAbsReal& _sigma,
                        RooAbsReal& _alpha,
                        RooAbsReal& _alphaCB,
                        RooAbsReal& _nCB) :
   RooAbsPdf(name,title), 
   m("m","m",this,_m),
    m0(" m0"," m0",this,_m0),
    sigma(" sigma"," sigma",this,_sigma),
    alpha(" alpha"," alpha",this,_alpha),
    alphaCB(" alphaCB"," alphaCB",this,_alphaCB),
    nCB(" nCB"," nCB",this,_nCB)
 { 
 } 


 RooCBmyCrujff::RooCBmyCrujff(const RooCBmyCrujff& other, const char* name) :  
   RooAbsPdf(other,name), 
   m("m",this,other.m),
    m0(" m0",this,other. m0),
    sigma(" sigma",this,other. sigma),
    alpha(" alpha",this,other. alpha),
    alphaCB(" alphaCB",this,other. alphaCB),
    nCB(" nCB",this,other. nCB)
 { 
 } 



 Double_t RooCBmyCrujff::evaluate() const 
 { 
   double dx = (m-m0) ;
   double val;
   if(dx<0) { // Cruijff                                                                                                                                                   
     double f = 2*sigma*sigma + alpha*fabs(dx) ;
     val = exp(-dx*dx/f);
   } else { // CryBall                                                                                                                                                     
     if(dx/sigma < alphaCB) {
       val = exp(-dx*dx/2./sigma/sigma);
     } else {
       double A = pow(nCB/fabs(alphaCB),nCB)*exp(-pow(alphaCB,2.)/2.);
       double B = nCB/fabs(alphaCB)-fabs(alphaCB);
       val = A*pow(B+dx/sigma,-nCB);
     }
   }
   return val;
 } 


Double_t RooCBmyCrujff::analyticalIntegral(Int_t code, const char* rangeName) const
{
  static const double sqrtPiOver2 = 1.2533141373;
  static const double sqrt2 = 1.4142135624;

  assert(code==1); 
  double result = 0.0;
  bool useLog = false;

  if( fabs(nCB-1.0) < 1.0e-05 ) useLog = true; 

  double sig = fabs((Double_t)sigma);
  double tmin = (m.min(rangeName)-m0)/sig;
  double tmax = (m.max(rangeName)-m0)/sig; 

  if(alphaCB < 0) { 
    double tmp = tmin;
    tmin = -tmax;
    tmax = -tmp;
  }

  double absAlpha = fabs((Double_t)alphaCB);
                                
  if( tmax <= alphaCB && tmin >=0  ) {
    result += sig*sqrtPiOver2*(   ApproxErf(tmax/sqrt2) - ApproxErf(tmin/sqrt2) ); 
  }
  else if( tmin >= alphaCB ) { 
    double a = TMath::Power(nCB/absAlpha,nCB)*exp(-0.5*absAlpha*absAlpha); 
    double b = nCB/absAlpha - absAlpha;

    if(useLog) {
      result += a*sig*( log(b+tmax) - log(b+tmin) );
    }
    else {
      result += a*sig/(1.0-nCB)*(   1.0/(TMath::Power(b+tmax,nCB-1.0))          - 1.0/(TMath::Power(b+tmin,nCB-1.0)) );
    }
  }
  else if (tmax < 0.){
    result += ApproxErf(-tmin*sig) - ApproxErf(-tmax*sig);
  }
  else if (tmax >= alphaCB && tmin < alphaCB && tmin > 0.){
    double a = TMath::Power(nCB/absAlpha,nCB)*exp(-0.5*absAlpha*absAlpha); 
    double b = nCB/absAlpha - absAlpha;
    double term1 = 0.0, term2 = 0.0;
    if(useLog) {
      term1 = a*sig*(  log(b+tmax) - log(nCB/absAlpha));
    }
    else {
      term1 = a*sig/(1.0-nCB)*(   1.0/(TMath::Power(b+tmax,nCB-1.0))  - 1.0/(TMath::Power(nCB/absAlpha,nCB-1.0)) );
    }
    term2 = sig*sqrtPiOver2*( ApproxErf(absAlpha/sqrt2) - ApproxErf(tmin)  );
    result = term1 + term2;
  }

  else if (tmax > 0. && tmax< alphaCB && tmin < 0.){
    double term2 = 0.0, term3 =0.0;
    term2 = sig*sqrtPiOver2*( ApproxErf(tmax/sqrt2) - ApproxErf(0.)  );
    term3 =  ApproxErf(-tmin*sig) - ApproxErf(0.) ;
    result = term2 + term3;
  }
  else {
    double a = TMath::Power(nCB/absAlpha,nCB)*exp(-0.5*absAlpha*absAlpha);
    double b = nCB/absAlpha - absAlpha;
    double term1 = 0.0, term2 = 0.0, term3 = 0.0;
    if(useLog) {
      term1 = a*sig*(  log(b+tmax) - log(nCB/absAlpha));
    }
    else {
      term1 = a*sig/(1.0-nCB)*(   1.0/(TMath::Power(b+tmax,nCB-1.0))  - 1.0/(TMath::Power(nCB/absAlpha,nCB-1.0)) );        
    } 
    term2 = sig*sqrtPiOver2*( ApproxErf(absAlpha/sqrt2) - ApproxErf(0.)  );
    term3 = ApproxErf(-tmin*sig) - ApproxErf(0.) ;
                                                                                                                              
    result += term1 + term2 + term3; 
  }
  return result; 
}



Double_t RooCBmyCrujff::ApproxCrujffIntegral(Double_t arg) const
{
  double A = 2*sigma*sigma;
  double B = alpha;
  double den = A + B*arg;

  //Preparing powers of parameters
  double B2 = B*B;
  double B3 = B2*B;
  double B4 = B3*B;
  double B5 = B4*B;
  double B6 = B5*B;
  double B7 = B6*B;
  double B8 = B7*B;
  double B9 = B8*B;
  double B10 = B9*B;
  double B11 = B10*B;

  double A2 = A*A;
  double A3 = A2*A;
  double A4 = A3*A;
  double A5 = A4*A;
  double A6 = A5*A;

  double arg2 = arg*arg;
  double arg3 = arg2*arg;
  double arg4 = arg3*arg;
  double arg5 = arg4*arg;
  double arg6 = arg5*arg;

  double den2 = den*den;
  double den3 = den2*den;
  double den4 = den3*den;

  double res1=0.;
  res1 = ( 1/(1440.*B11) ) * ( -15.*B4*arg4*(3.*A2 + 4.*A*B2 + 4*B4) + 20.*B3*arg3*(7.*A3 + 10.*A2*B2 + 12.*A*B4 +12.*B6) - 60.*B2*arg2*(7.*A4 + 10.*A3*B2 + 12.*A2*B4 + 12.*A*B6 + 12.*B8) - 120.*A2*(21.*A4 + 28.*A3*B2 + 30.*A2*B4 + 24.*A*B6 + 12.*B8)*log(den) + 12.*B*arg*(126.*A5 + 175.*A4*B2 + 200.*A3*B4 + 180.*A2*B6 + 120.*A*B8 + 120.*B10) + 12.*B5*arg5*(A + B2) -2.*B6*arg6 );
  double res2=0.;
  res2 = ( 1/(1440.*B11) ) * (A4/den4) * ( 3.*A6 - 40.*A5*den - 20.*A4*B2*den + 270.*A4*den2 + 240.*A3*B2*den2 - 1440.*A3*den3 + 120.*A2*B4*den2 - 1680.*A2*B2*den3 - 720.*B6*den3 - 1440.*A*B4*den3  );

  double res = 0.;
  res = res1 + res2;
  return res;

}



Double_t RooCBmyCrujff::ApproxErf(Double_t arg) const 
{
  static const double erflim = 5.0;
  if( arg > erflim )
    return 1.0;
  if( arg < -erflim )
    return -1.0;
  
  return RooMath::erf(arg);
}


Int_t RooCBmyCrujff::getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* /*rangeName*/) const
{
  if( matchArgs(allVars,analVars,m) ) return 0 ;
  
  return 0;
}


Int_t RooCBmyCrujff::getMaxVal(const RooArgSet& vars) const 
{
  // Advertise that we know the maximum of self for given (m0,alpha,n,sigma)
  RooArgSet dummy ;

  if (matchArgs(vars,dummy,m)) {
    return 1 ;  
  }
  return 0 ;  
}



//_____________________________________________________________________________
Double_t RooCBmyCrujff::maxVal(Int_t code) const
{
  assert(code==1) ;

  // The maximum value for given (m0,alpha,n,sigma)
  return 1.0 ;
}
