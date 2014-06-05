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
    
    bin={}
    bin[1]=dict(hlt='hlt30', ptMin='40', ptMax='47')
    bin[2]=dict(hlt='hlt30', ptMin='47', ptMax='65')
    bin[3]=dict(hlt='hlt50', ptMin='65', ptMax='73')
    bin[4]=dict(hlt='hlt50', ptMin='73', ptMax='90')
    bin[5]=dict(hlt='hlt75', ptMin='90', ptMax='94')
    bin[6]=dict(hlt='hlt75', ptMin='94', ptMax='99')
    bin[7]=dict(hlt='hlt75', ptMin='99', ptMax='105')
    bin[8]=dict(hlt='hlt90', ptMin='105', ptMax='110')
    bin[9]=dict(hlt='hlt90', ptMin='110', ptMax='117')
    bin[10]=dict(hlt='hlt90', ptMin='117', ptMax='126')
    bin[11]=dict(hlt='hlt90', ptMin='126', ptMax='139')
    bin[12]=dict(hlt='hlt90', ptMin='139', ptMax='165')
    bin[13]=dict(hlt='hlt135', ptMin='165', ptMax='180')
    bin[14]=dict(hlt='hlt150', ptMin='180', ptMax='1000')
    
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
    #ptBins=[bin[1], bin[2], bin[3], bin[4], bin[5], bin[6], bin[7], bin[8], bin[9], bin[10], bin[11]]
    #ptBins=[bin[10]]
    
    gROOT.ProcessLine(".x RooCBmyCrujff.cxx+")
    #gROOT.ProcessLine(".L fitDebug_Data.C++")
    #gROOT.ProcessLine(".L fitDebug_DataReweighted.C+")
    gROOT.ProcessLine(".L fitDebug_data_nonParam.C+")

    i = 0
    while i < len(ptBins):
        print ptBins[i]['ptMin']+' '+ptBins[i]['ptMax']
        fitDebug_Data('abs(etaPhot)<1.4442 && ptPhot>'+ptBins[i]['ptMin']+'. && ptPhot<'+ptBins[i]['ptMax']+'.', 'fit_EB_data_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], ptBins[i]['ptMin'], ptBins[i]['ptMax'], options.config, options.inputdir, options.inputdir_sig, options.outdir, options.isFPR)
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
                    action="store", type="int", dest="config",
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


