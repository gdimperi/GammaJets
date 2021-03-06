import os, sys
from ROOT import *

ROOT.gROOT.SetBatch(True)

bin={}
bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='47', nev=15114, pur=0.49)
bin[2]=dict(hlt='hltcut30', ptMin='47', ptMax='65', nev=12645, pur=0.58)
bin[3]=dict(hlt='hltcut50', ptMin='65', ptMax='73', nev=13963, pur=0.67)
bin[4]=dict(hlt='hltcut50', ptMin='73', ptMax='90', nev=13551, pur=0.72)
bin[5]=dict(hlt='hltcut75', ptMin='90', ptMax='94', nev=9691, pur=0.77)
bin[6]=dict(hlt='hltcut75', ptMin='94', ptMax='99', nev=9642, pur=0.77)
bin[7]=dict(hlt='hltcut75', ptMin='99', ptMax='105', nev=8760, pur=0.78)
bin[8]=dict(hlt='hltcut90', ptMin='105', ptMax='110', nev=11980, pur=0.77)
bin[9]=dict(hlt='hltcut90', ptMin='110', ptMax='117', nev=12512, pur=0.80)
bin[10]=dict(hlt='hltcut90', ptMin='117', ptMax='126', nev=11488, pur=0.82)
bin[11]=dict(hlt='hltcut90', ptMin='126', ptMax='139', nev=10728, pur=0.85)
bin[12]=dict(hlt='hltcut90', ptMin='139', ptMax='163', nev=10494, pur=0.86)
bin[13]=dict(hlt='hltcut90', ptMin='163', ptMax='1000', nev=10709, pur=0.91)

#bin={}
#bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='65', nev=27759, pur=0.53)
#bin[2]=dict(hlt='hltcut50', ptMin='65', ptMax='90', nev=27514, pur=0.69)
#bin[3]=dict(hlt='hltcut75', ptMin='90', ptMax='99', nev=19333, pur=0.775)
#bin[4]=dict(hlt='hltcut75', ptMin='99', ptMax='105', nev=8760, pur=0.78)
#bin[5]=dict(hlt='hltcut90', ptMin='105', ptMax='126', nev=35980, pur=0.796)
#bin[6]=dict(hlt='hltcut90', ptMin='126', ptMax='163', nev=21222, pur=0.855)
#bin[7]=dict(hlt='hltcut90', ptMin='163', ptMax='1000', nev=10709, pur=0.91)


#ptBins=[bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7]]
#ptBins=[bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7], bin[8], bin[9], bin[10], bin[11], bin[12], bin[13]]
ptBins=[bin[10], bin[11], bin[12], bin[13]]
#ptBins=[bin[7]]

gROOT.ProcessLine(".x RooCBmyCrujff.cxx+")
gROOT.ProcessLine(".L fitData_myPull.C++")
gROOT.ProcessLine(".L plotPull.C++")

i = 0
while i < len(ptBins):
    print ptBins[i]['ptMin']+' '+ptBins[i]['ptMax']
    fitData_myPull(ptBins[i]['ptMin'], ptBins[i]['ptMax'], ptBins[i]['nev'], ptBins[i]['pur'])
    plotPull(ptBins[i]['ptMin'], ptBins[i]['ptMax'])
    i=i+1
