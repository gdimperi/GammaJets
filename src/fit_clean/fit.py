import os, sys
from ROOT import *

bin={}
bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='47')
bin[2]=dict(hlt='hltcut30', ptMin='47', ptMax='65')
bin[3]=dict(hlt='hltcut50', ptMin='65', ptMax='73')
bin[4]=dict(hlt='hltcut50', ptMin='73', ptMax='90')
bin[5]=dict(hlt='hltcut75', ptMin='90', ptMax='94')
bin[6]=dict(hlt='hltcut75', ptMin='94', ptMax='99')
bin[7]=dict(hlt='hltcut75', ptMin='99', ptMax='105')
bin[8]=dict(hlt='hltcut90', ptMin='105', ptMax='110')
bin[9]=dict(hlt='hltcut90', ptMin='110', ptMax='117')
bin[10]=dict(hlt='hltcut90', ptMin='117', ptMax='126')
bin[11]=dict(hlt='hltcut90', ptMin='126', ptMax='139')
bin[12]=dict(hlt='hltcut90', ptMin='139', ptMax='165')
bin[13]=dict(hlt='hltcut135', ptMin='165', ptMax='180')
bin[14]=dict(hlt='hltcut150', ptMin='180', ptMax='1000')

#bin={}
#bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='65')
#bin[2]=dict(hlt='hltcut50', ptMin='65', ptMax='90')
#bin[3]=dict(hlt='hltcut75', ptMin='90', ptMax='99')
#bin[4]=dict(hlt='hltcut75', ptMin='99', ptMax='105')
#bin[5]=dict(hlt='hltcut90', ptMin='105', ptMax='126')
#bin[6]=dict(hlt='hltcut90', ptMin='126', ptMax='163')
#bin[7]=dict(hlt='hltcut90', ptMin='163', ptMax='1000')

#ptBins=[bin[1]]
ptBins=[bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7], bin[8], bin[9], bin[10], bin[11], bin[12], bin[13], bin[14]]
#ptBins=[bin[12], bin[13], bin[14]]

gROOT.ProcessLine(".x RooCBmyCrujff.cxx+")
#gROOT.ProcessLine(".L fitDebug.C++")
gROOT.ProcessLine(".L fitDebug_weightedDataCS.C++")
gROOT.ProcessLine(".L fitDebug_sig.C++")

i = 0
while i < len(ptBins):
    #print bin['ptMin']+' '+bin['ptMax']
    #fitDebug('abs(etaPhot)<1.4442 && isIsolatedGenPhot==0 && ptPhot>'+ptBins[i]['ptMin']+'. && ptPhot<'+ptBins[i]["ptMax"]+'.', 'fit_EB_bg_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], 0)

    #no condition on isMatched/isIsolated because fitting on data CS
    fitDebug('abs(etaPhot)<1.4442  && ptPhot>'+ptBins[i]['ptMin']+'. && ptPhot<'+ptBins[i]["ptMax"]+'.', 'fit_EB_bg_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], 0)
    fitDebug_sig('abs(etaPhot)<1.4442  && isIsolatedGenPhot==1 && ptPhot>'+ptBins[i]['ptMin']+'. && ptPhot<'+ptBins[i]['ptMax']+'.', 'fit_EB_sig_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], 0)
    i=i+1
