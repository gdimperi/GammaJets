import os, sys
from optparse import OptionParser, make_option
from ROOT import *

def main(options,args):
    print "++++++++++++++++++++++++++++++++++++++++++"
    print "Usage: "
    print "--outdir     output directory"
    print "--isFPR       1 for FPR, 0 for non FPR"
    print "--isEB        1 for Barrel, 0 for Endcaps"
    print "+++++++++++++++++++++++++++++++++++++++++++"
    print "Processing with options: "
    print options
    
#+++++++++++++++++++++++++++++++++++
#   Binning for signal control sample Zee
#++++++++++++++++++++++++++++++++++++
    bin={}
    bin [1]=dict(hlt='hltcut30', ptMin='40', ptMax='65')
    bin [2]=dict(hlt='hltcut50', ptMin='65', ptMax='90')
    bin [3]=dict(hlt='hltcut75', ptMin='90', ptMax='135')
    bin [4]=dict(hlt='hltcut90', ptMin='135', ptMax='165')
    
    ptBins=[]
    #ptBins=[bin[2]]
    ptBins=bin.values()

    
    #gROOT.ProcessLine(".x RooCBmyCrujff.cxx+")
    #gROOT.ProcessLine(".L fitDebug_sigDataEle.C++")
    gROOT.ProcessLine(".L fitDebug_sigZeeNonParam.C++")
    
    
    #loop over EB bins
    if options.isEB:
        #fitDebug_sigDataEle('abs(probe_eta)<1.4442 && probe_pt>40. && probe_pt<65.', 'fit_EB_sig_WP095_pt40_65', true, options.outdir, options.isFPR, options.isEB)
        
        i = 0
        while i < len(ptBins):
            #print bin_EB['ptMin']+' '+bin_EB['ptMax']
            fitDebug_sigNonParam('abs(probe_eta)<1.4442  && probe_pt>'+ptBins[i]['ptMin']+'. && probe_pt<'+ptBins[i]["ptMax"]+'.', 'fit_EB_sig_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], options.outdir, options.isFPR, options.isEB)
            #fitDebug_sigDataEle('abs(probe_eta)<1.4442  && probe_pt>'+ptBins[i]['ptMin']+'. && probe_pt<'+ptBins[i]["ptMax"]+'.', 'fit_EB_sig_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], true, options.outdir, options.isFPR, options.isEB)        
            i=i+1

    #loop over EE bins
    else:

        i = 0
        while i < len(ptBins):
            #print bin_EE['ptMin']+' '+bin_EE['ptMax']
            fitDebug_sigNonParam('abs(probe_eta)>1.566 && abs(probe_eta)<2.5  && probe_pt>'+ptBins[i]['ptMin']+'. && probe_pt<'+ptBins[i]["ptMax"]+'.', 'fit_EE_sig_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], options.outdir, options.isFPR, options.isEB)        
            #fitDebug_sigDataEle('abs(probe_eta)<1.4442  && probe_pt>'+ptBins[i]['ptMin']+'. && probe_pt<'+ptBins[i]["ptMax"]+'.', 'fit_EE_sig_WP095_pt'+ptBins[i]['ptMin']+'_'+ptBins[i]['ptMax'], ptBins[i]['hlt'], true, options.outdir, options.isFPR, options.isEB)        
            
            i=i+1
    
if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--outdir",
                    action="store", type="string", dest="outdir",
                    default="./",
                    help="", metavar=""
                    ),
        make_option("--isoWeight",
                    action="store", type="int", dest="isoWeight",
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

    
