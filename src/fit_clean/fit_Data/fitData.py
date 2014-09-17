import os, sys
from optparse import OptionParser, make_option
from ROOT import *

def main(options,args):

    print "++++++++++++++++++++++++++++++++++++++++++"
    print "Usage: "
    print "--inputdir        input directory"
    print "--inputdir_sig    input directory for signal"
    print "--outdir     output directory"
    print "--isFPR      1 for FPR"
    print "--isEB       1 for barrel, o for endcaps"
    print "--config     0, 1, 2, 3"
    print "current convention:"
    print "0 : all fixed"
    print "1 : free sig CB mean"
    print "2 : free sig CB sigma"
    print "3 : free bkg CB mean"
    print "4 : free bkg gauss mean"
    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options


    ROOT.gROOT.SetBatch(True)
#+++++++++++++++++++++++++++++++++++
#   Binning for Barrel
#++++++++++++++++++++++++++++++++++++
    bin_EB={}
    bin_EB [1]=dict(hlt='hltcut30', ptMin='40', ptMax='47')
    bin_EB [2]=dict(hlt='hltcut30', ptMin='47', ptMax='65')
    bin_EB [3]=dict(hlt='hltcut50', ptMin='65', ptMax='73')
    bin_EB [4]=dict(hlt='hltcut50', ptMin='73', ptMax='90')
    bin_EB [5]=dict(hlt='hltcut75', ptMin='90', ptMax='94')
    bin_EB [6]=dict(hlt='hltcut75', ptMin='94', ptMax='99')
    bin_EB [7]=dict(hlt='hltcut75', ptMin='99', ptMax='105')
    bin_EB [8]=dict(hlt='hltcut90', ptMin='105', ptMax='110')
    bin_EB [9]=dict(hlt='hltcut90', ptMin='110', ptMax='117')
    bin_EB [10]=dict(hlt='hltcut90', ptMin='117', ptMax='126')
    bin_EB [11]=dict(hlt='hltcut90', ptMin='126', ptMax='139')
    bin_EB [12]=dict(hlt='hltcut90', ptMin='139', ptMax='155')
    bin_EB [13]=dict(hlt='hltcut90', ptMin='155', ptMax='165')
    bin_EB [14]=dict(hlt='hltcut135', ptMin='165', ptMax='166')
    bin_EB [15]=dict(hlt='hltcut135', ptMin='166', ptMax='167')
    bin_EB [16]=dict(hlt='hltcut135', ptMin='167', ptMax='168')
    bin_EB [17]=dict(hlt='hltcut135', ptMin='168', ptMax='169')
    bin_EB [18]=dict(hlt='hltcut135', ptMin='169', ptMax='170')
    bin_EB [19]=dict(hlt='hltcut135', ptMin='170', ptMax='171')
    bin_EB [20]=dict(hlt='hltcut135', ptMin='171', ptMax='172')
    bin_EB [21]=dict(hlt='hltcut135', ptMin='172', ptMax='173')
    bin_EB [22]=dict(hlt='hltcut135', ptMin='173', ptMax='174')
    bin_EB [23]=dict(hlt='hltcut135', ptMin='174', ptMax='175')
    bin_EB [24]=dict(hlt='hltcut135', ptMin='175', ptMax='176')
    bin_EB [25]=dict(hlt='hltcut135', ptMin='176', ptMax='177')
    bin_EB [26]=dict(hlt='hltcut135', ptMin='177', ptMax='178')
    bin_EB [27]=dict(hlt='hltcut135', ptMin='178', ptMax='179')
    bin_EB [28]=dict(hlt='hltcut135', ptMin='179', ptMax='180')
    bin_EB [29]=dict(hlt='hltcut150', ptMin='180', ptMax='182')
    bin_EB [30]=dict(hlt='hltcut150', ptMin='182', ptMax='184')
    bin_EB [31]=dict(hlt='hltcut150', ptMin='184', ptMax='186')
    bin_EB [32]=dict(hlt='hltcut150', ptMin='186', ptMax='188')
    bin_EB [33]=dict(hlt='hltcut150', ptMin='188', ptMax='190')
    bin_EB [34]=dict(hlt='hltcut150', ptMin='190', ptMax='192')
    bin_EB [35]=dict(hlt='hltcut150', ptMin='192', ptMax='194')
    bin_EB [36]=dict(hlt='hltcut150', ptMin='194', ptMax='196')
    bin_EB [37]=dict(hlt='hltcut150', ptMin='196', ptMax='198')
    bin_EB [38]=dict(hlt='hltcut150', ptMin='198', ptMax='200')
    bin_EB [39]=dict(hlt='hltcut150', ptMin='200', ptMax='202')
    bin_EB [40]=dict(hlt='hltcut150', ptMin='202', ptMax='204')
    bin_EB [41]=dict(hlt='hltcut150', ptMin='204', ptMax='206')
    bin_EB [42]=dict(hlt='hltcut150', ptMin='206', ptMax='208')
    bin_EB [43]=dict(hlt='hltcut150', ptMin='208', ptMax='210')
    bin_EB [44]=dict(hlt='hltcut150', ptMin='210', ptMax='215')
    bin_EB [45]=dict(hlt='hltcut150', ptMin='215', ptMax='220')
    bin_EB [46]=dict(hlt='hltcut150', ptMin='220', ptMax='225')
    bin_EB [47]=dict(hlt='hltcut150', ptMin='225', ptMax='230')
    bin_EB [48]=dict(hlt='hltcut150', ptMin='230', ptMax='235')
    bin_EB [49]=dict(hlt='hltcut150', ptMin='235', ptMax='240')
    bin_EB [50]=dict(hlt='hltcut150', ptMin='240', ptMax='245')
    bin_EB [51]=dict(hlt='hltcut150', ptMin='245', ptMax='250')
    bin_EB [52]=dict(hlt='hltcut150', ptMin='250', ptMax='255')
    bin_EB [53]=dict(hlt='hltcut150', ptMin='255', ptMax='260')
    bin_EB [54]=dict(hlt='hltcut150', ptMin='260', ptMax='265')
    bin_EB [55]=dict(hlt='hltcut150', ptMin='265', ptMax='270')
    bin_EB [56]=dict(hlt='hltcut150', ptMin='270', ptMax='290')
    bin_EB [57]=dict(hlt='hltcut150', ptMin='290', ptMax='310')
    bin_EB [58]=dict(hlt='hltcut150', ptMin='310', ptMax='340')
    bin_EB [59]=dict(hlt='hltcut150', ptMin='340', ptMax='380')
    bin_EB [60]=dict(hlt='hltcut150', ptMin='380', ptMax='1000')


#+++++++++++++++++++++++++++++++++++
#   Binning for Endcaps
#++++++++++++++++++++++++++++++++++++
    bin_EE={}
    bin_EE [1]=dict(hlt='hltcut30', ptMin='40', ptMax='65')
    bin_EE [2]=dict(hlt='hltcut50', ptMin='65', ptMax='90')
    bin_EE [3]=dict(hlt='hltcut75', ptMin='90', ptMax='105')
    bin_EE [4]=dict(hlt='hltcut90', ptMin='105', ptMax='126')
    bin_EE [5]=dict(hlt='hltcut90', ptMin='126', ptMax='165')
    bin_EE [6]=dict(hlt='hltcut135', ptMin='165', ptMax='168')
    bin_EE [7]=dict(hlt='hltcut135', ptMin='168', ptMax='172')
    bin_EE [8]=dict(hlt='hltcut135', ptMin='172', ptMax='176')
    bin_EE [9]=dict(hlt='hltcut135', ptMin='176', ptMax='180')
    bin_EE [10]=dict(hlt='hltcut150', ptMin='180', ptMax='186')
    bin_EE [11]=dict(hlt='hltcut150', ptMin='186', ptMax='192')
    bin_EE [12]=dict(hlt='hltcut150', ptMin='192', ptMax='198')
    bin_EE [13]=dict(hlt='hltcut150', ptMin='198', ptMax='206')
    bin_EE [14]=dict(hlt='hltcut150', ptMin='206', ptMax='215')
    bin_EE [15]=dict(hlt='hltcut150', ptMin='215', ptMax='225')
    bin_EE [16]=dict(hlt='hltcut150', ptMin='225', ptMax='240')
    bin_EE [17]=dict(hlt='hltcut150', ptMin='240', ptMax='270')
    bin_EE [18]=dict(hlt='hltcut150', ptMin='270', ptMax='1000')
  
    
    #ptBins=[bin[1]]
    ptBins_EB=[]
    ptBins_EE=[]

    #ptBins_EB=[bin_EB[1], bin_EB[2]]
    #ptBins_EE=[bin_EE[1], bin_EE[2]]

    ptBins_EB=bin_EB.values()
    ptBins_EE=bin_EE.values()

    #hltcut=[30,50,75,135,150]

    print "-----------------------"
    print ("lenght ptBins_EB : %d " % len(ptBins_EB))
    print ("lenght ptBins_EE : %d " % len(ptBins_EE))
    print "-----------------------"

    
    gROOT.ProcessLine(".x RooCBmyCrujff.cxx+")
    #gROOT.ProcessLine(".L fitDebug_Data.C++")
    #gROOT.ProcessLine(".L fitDebug_DataReweighted.C+")
    gROOT.ProcessLine(".L fitDebug_data_nonParam.C+")

    #loop over EB bins
    if options.isEB:
        i = 0
        while i < len(ptBins_EB):

            fitDebug_Data('abs(etaPhot)<1.4442  && ptPhot>'+ptBins_EB[i]['ptMin']+'. && ptPhot<'+ptBins_EB[i]["ptMax"]+'.', 'fit_EB_bg_WP095_pt'+ptBins_EB[i]['ptMin']+'_'+ptBins_EB[i]['ptMax'], ptBins_EB[i]['ptMin'], ptBins_EB[i]['ptMax'], ptBins_EB[i]['hlt'], options.config, options.inputdir, options.inputdir_sig, options.outdir, options.isFPR, options.isEB)

            i=i+1

    #loop over EE bins
    else:
        i = 0
        while i < len(ptBins_EE):

            fitDebug_Data('abs(etaPhot)>1.556 && abs(etaPhot)<2.5  && ptPhot>'+ptBins_EE[i]['ptMin']+'. && ptPhot<'+ptBins_EE[i]["ptMax"]+'.', 'fit_EE_bg_WP095_pt'+ptBins_EE[i]['ptMin']+'_'+ptBins_EE[i]['ptMax'], ptBins_EE[i]['ptMin'], ptBins_EE[i]['ptMax'], ptBins_EE[i]['hlt'], options.config, options.inputdir, options.inputdir_sig, options.outdir, options.isFPR, options.isEB)
              
            i=i+1



if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--inputdir",
                    action="store", type="string", dest="inputdir",
                    #default="/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/pull_weightedDataCS_allFixed/",
                    help="", metavar=""
                    ),
        make_option("--inputdir_sig",
                    action="store", type="string", dest="inputdir_sig",
                    #default="/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/pull_weightedDataCS_allFixed/",
                    help="", metavar=""
                    ),
        make_option("--outdir",
                    action="store", type="string", dest="outdir",
                    #default="/cmshome/gdimperi/GammaJet/CMSSW_6_0_1/src/GammaJets/src/fit_clean/Pull/pull_weightedDataCS_allFixed/",
                    help="", metavar=""
                    ),

        make_option("--config",
                    action="store", type="int", dest="config",
                    default=0,
                    help="", metavar=""
                    ),
        make_option("--isEB",
                    action="store", type="int", dest="isEB",
                    default=1,
                    help="", metavar=""
                    ),
        make_option("--isFPR",
                    action="store", type="int", dest="isFPR",
                    default=0,
                    help="", metavar=""
                    ),
        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 


