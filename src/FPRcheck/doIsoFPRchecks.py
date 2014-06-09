#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import subprocess
import os
import imp
import multiprocessing
from itertools import repeat

def main(options,args):
    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options

    mc = TChain("finalTree") 
    mc.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_withCone04/QCDEM_Pt*")
    mc.Add("/cmshome/gdimperi/GammaJet/GammaJetAnalysis/CMSSW_5_3_11/src/GammaJets/ridottissime/ridottissime_withCone04/G_Pt*")

    gROOT.ProcessLine(".L IsoFPRchecks.C+")

    check = IsoFPRchecks(mc)
    check.CreateROC(options.var,1000,-0.5, 30., options.output_name)
    #check.CreateROC(options.var,1000,-5., 30., options.output_name)



if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--var",
                    action="store", type="string", dest="var",
                    default="",
                    help="", metavar=""
                    ),
        make_option("--outFile",
                    action="store", type="string", dest="output_name",
                    default="",
                    help="", metavar=""
                    ),
        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 
