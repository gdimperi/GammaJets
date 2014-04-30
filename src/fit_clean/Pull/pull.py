import os, sys
from ROOT import *

ROOT.gROOT.SetBatch(True)

bin={}
#vittorio
#bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='47', nev=15114, pur=0.49)    
#bin[2]=dict(hlt='hltcut30', ptMin='47', ptMax='65', nev=12645, pur=0.58)    
#bin[3]=dict(hlt='hltcut50', ptMin='65', ptMax='73', nev=13963, pur=0.67)    
#bin[4]=dict(hlt='hltcut50', ptMin='73', ptMax='90', nev=13551, pur=0.72)    
#bin[5]=dict(hlt='hltcut75', ptMin='90', ptMax='94', nev=9691, pur=0.77)     
#bin[6]=dict(hlt='hltcut75', ptMin='94', ptMax='99', nev=9642, pur=0.77)     
#bin[7]=dict(hlt='hltcut75', ptMin='99', ptMax='105', nev=8760, pur=0.78)    
#bin[8]=dict(hlt='hltcut90', ptMin='105', ptMax='110', nev=11980, pur=0.77)  
#bin[9]=dict(hlt='hltcut90', ptMin='110', ptMax='117', nev=12512, pur=0.80)  
#bin[10]=dict(hlt='hltcut90', ptMin='117', ptMax='126', nev=11488, pur=0.82) 
#bin[11]=dict(hlt='hltcut90', ptMin='126', ptMax='139', nev=10728, pur=0.85) 
#bin[12]=dict(hlt='hltcut90', ptMin='139', ptMax='163', nev=10494, pur=0.86) 
#bin[13]=dict(hlt='hltcut90', ptMin='163', ptMax='1000', nev=10709, pur=0.91)

#giulia mc purity
bin[1]  =dict(hlt='hltcut30'  , ptMin='40',  ptMax='47',  nev=10000 , pur=0.538631)   
bin[2]  =dict(hlt='hltcut30'  , ptMin='47',  ptMax='65',  nev=8623  , pur=0.610058)
bin[3]  =dict(hlt='hltcut50'  , ptMin='65',  ptMax='73',  nev=10038 , pur=0.68744 )    
bin[4]  =dict(hlt='hltcut50'  , ptMin='73',  ptMax='90',  nev=10487 , pur=0.723365)    
bin[5]  =dict(hlt='hltcut75'  , ptMin='90',  ptMax='94',  nev=7788  , pur=0.771   )     
bin[6]  =dict(hlt='hltcut75'  , ptMin='94',  ptMax='99',  nev=7965  , pur=0.781373)     
bin[7]  =dict(hlt='hltcut75'  , ptMin='99',  ptMax='105', nev=7237  , pur=0.775929)    
bin[8]  =dict(hlt='hltcut90'  , ptMin='105', ptMax='110', nev=9861  , pur=0.807222)  
bin[9]  =dict(hlt='hltcut90'  , ptMin='110', ptMax='117', nev=11043 , pur=0.803787)  
bin[10] =dict(hlt='hltcut90'  , ptMin='117', ptMax='126', nev=9991  , pur=0.807683) 
bin[11] =dict(hlt='hltcut90'  , ptMin='126', ptMax='139', nev=9582  , pur=0.838527) 
bin[12] =dict(hlt='hltcut90'  , ptMin='139', ptMax='165', nev=10031 , pur=0.855121) 
bin[13] =dict(hlt='hltcut135' , ptMin='165', ptMax='180', nev=143064, pur=0.886747)
bin[14] =dict(hlt='hltcut150' , ptMin='180', ptMax='1000', nev=496296, pur=0.903301)

#giulia, purity dal fit bloccato
#bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='47', nev=13748, pur=0.48843)    
#bin[2]=dict(hlt='hltcut30', ptMin='47', ptMax='65', nev=11988, pur=0.55857)    
#bin[3]=dict(hlt='hltcut50', ptMin='65', ptMax='73', nev=13943, pur=0.65933)    
#bin[4]=dict(hlt='hltcut50', ptMin='73', ptMax='90', nev=14362, pur=0.70332)    
#bin[5]=dict(hlt='hltcut75', ptMin='90', ptMax='94', nev=10708, pur=0.74760)     
#bin[6]=dict(hlt='hltcut75', ptMin='94', ptMax='99', nev=10841, pur=0.72931)     
#bin[7]=dict(hlt='hltcut75', ptMin='99', ptMax='105', nev=9995, pur=0.73342)    
#bin[8]=dict(hlt='hltcut90', ptMin='105', ptMax='110', nev=13381, pur=0.75129)  
#bin[9]=dict(hlt='hltcut90', ptMin='110', ptMax='117', nev=14887, pur=0.75715)  
#bin[10]=dict(hlt='hltcut90', ptMin='117', ptMax='126', nev=13584, pur=0.80220) 
#bin[11]=dict(hlt='hltcut90', ptMin='126', ptMax='139', nev=12859, pur=0.79616) 
#bin[12]=dict(hlt='hltcut90', ptMin='139', ptMax='165', nev=13421, pur=0.82329) 
#bin[13]=dict(hlt='hltcut135', ptMin='165', ptMax='180', nev=186678, pur=0.83676)
#bin[14]=dict(hlt='hltcut150', ptMin='180', ptMax='1000', nev=619134, pur=0.84923)
#
#bin={}
#bin[1]=dict(hlt='hltcut30', ptMin='40', ptMax='65', nev=27759, pur=0.53)
#bin[2]=dict(hlt='hltcut50', ptMin='65', ptMax='90', nev=27514, pur=0.69)
#bin[3]=dict(hlt='hltcut75', ptMin='90', ptMax='99', nev=19333, pur=0.775)
#bin[4]=dict(hlt='hltcut75', ptMin='99', ptMax='105', nev=8760, pur=0.78)
#bin[5]=dict(hlt='hltcut90', ptMin='105', ptMax='126', nev=35980, pur=0.796)
#bin[6]=dict(hlt='hltcut90', ptMin='126', ptMax='163', nev=21222, pur=0.855)
#bin[7]=dict(hlt='hltcut90', ptMin='163', ptMax='1000', nev=10709, pur=0.91)


#ptBins=[bin[1], bin[2]]
ptBins=[bin[3], bin[4], bin[5], bin[6], bin[7], bin[8], bin[9], bin[10], bin[11], bin[12], bin[13], bin[14]]
#ptBins=[bin[10], bin[11], bin[12], bin[13]]
#ptBins=[bin[7]]

gROOT.ProcessLine(".x RooCBmyCrujff.cxx++")
#gROOT.ProcessLine(".L fitData_myPull.C++")
#gROOT.ProcessLine(".L plotPull.C++")
gROOT.ProcessLine(".L fitData_myPull_weightedDataCS.C++")
gROOT.ProcessLine(".L plotPull_weightedDataCS.C++")

i = 0
while i < len(ptBins):
    print ptBins[i]['ptMin']+' '+ptBins[i]['ptMax']
    fitData_myPull(ptBins[i]['ptMin'], ptBins[i]['ptMax'], ptBins[i]['nev'], ptBins[i]['pur'])
    plotPull(ptBins[i]['ptMin'], ptBins[i]['ptMax'])
    i=i+1
