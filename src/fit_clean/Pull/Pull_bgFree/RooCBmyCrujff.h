/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/

#ifndef ROOCBMYCRUJFF
#define ROOCBMYCRUJFF

#include "RooAbsPdf.h"
#include "RooRealProxy.h"
#include "RooCategoryProxy.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
 
class RooCBmyCrujff : public RooAbsPdf {
public:
  RooCBmyCrujff() {} ; 
  RooCBmyCrujff(const char *name, const char *title,
	      RooAbsReal& _m,
	      RooAbsReal& _m0,
	      RooAbsReal& _sigma,
	      RooAbsReal& _alpha,
	      RooAbsReal& _alphaCB,
	      RooAbsReal& _nCB);
  RooCBmyCrujff(const RooCBmyCrujff& other, const char* name=0) ;
  virtual TObject* clone(const char* newname) const { return new RooCBmyCrujff(*this,newname); }
  inline virtual ~RooCBmyCrujff() { }

protected:

  RooRealProxy m ;
  RooRealProxy  m0 ;
  RooRealProxy  sigma ;
  RooRealProxy  alpha ;
  RooRealProxy  alphaCB ;
  RooRealProxy  nCB ;
  
  Double_t evaluate() const ;
  Double_t analyticalIntegral(Int_t code, const char* rangeName) const ; 
  Int_t    getAnalyticalIntegral(RooArgSet& allVars, RooArgSet& analVars, const char* /*rangeName*/) const ;
  Int_t    getMaxVal(const RooArgSet& vars) const ;
  Double_t maxVal(Int_t code) const ;
  Double_t ApproxCrujffIntegral(Double_t arg)  const ;
  Double_t ApproxErf(Double_t arg) const ;
  

private:

  ClassDef(RooCBmyCrujff,1) // Your description goes here...
};
 
#endif