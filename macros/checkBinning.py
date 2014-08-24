#!/usr/bin/env python

from optparse import OptionParser, make_option
from ROOT import *
import os
import imp
import numpy as n

samples={}

def main(options,args):

    data = TChain("finalTree")

    #Reading samples dat
    filename  = options.samplesDat
    handle = open(filename, 'r')
    cfo = imp.load_source("pycfg", filename, handle)
    samples = cfo.samples
    handle.close()

    print ("Samples : %s" % samples)
    print "++++++++++++++++++++++++++++++"

    for sample in samples:
        print "Adding sample "+ sample + ": " + str(samples[sample])
        data.Add(samples[sample][1]+"/"+samples[sample][0])

    h1=TH1F("h1","",5000,0.,5000.)
    data.Project("h1","ptPhot", "(ptPhot<5000. && fabs(etaPhot>1.566)  && mvaIdPhot>0.83548 && mvaIdPhot<1.) ")    


    binCont=h1.Integral(41,48)
    print("bin content 40 : %f" % (binCont))
    binCont=h1.Integral(48,66)
    print("bin content 48: %f" % (binCont))
    binCont=h1.Integral(66,74)
    print("bin content 66 : %f" % (binCont))
    binCont=h1.Integral(74,91)
    print("bin content 74 : %f" % (binCont))
    binCont=h1.Integral(91,95)
    print("bin content 91 : %f" % (binCont))
    binCont=h1.Integral(95,100)
    print("bin content 95 : %f" % (binCont))
    binCont=h1.Integral(100,106)
    print("bin content 100 : %f" % (binCont))
    binCont=h1.Integral(106,111)
    print("bin content 106 : %f" % (binCont))
    binCont=h1.Integral(111,118)
    print("bin content 111 : %f" % (binCont))
    binCont=h1.Integral(118,127)
    print("bin content 118 : %f" % (binCont))
    binCont=h1.Integral(127,140)
    print("bin content 127 : %f" % (binCont))
    binCont=h1.Integral(140,156)
    print("bin content 140 : %f" % (binCont))
    binCont=h1.Integral(156,166)
    print("bin content 156 : %f" % (binCont))
    
    for i in xrange(166,181,1):
        binCont=h1.GetBinContent(i)
        print("bin content %d : %f" % (i,binCont))
    for i in xrange(181,211,2):
        binCont=h1.Integral(i,i+1)
        print("bin content %d : %f" % (i,binCont))
    for i in xrange(211,271,5):
        binCont=h1.Integral(i,i+4)
        print("bin content %d : %f" % (i,binCont))
    for i in xrange(271,291,20):
        binCont=h1.Integral(i,i+19)
        print("bin content %d : %f" % (i,binCont))
    binCont=h1.Integral(291,311)
    print("bin content 291 : %f" % (binCont))
    binCont=h1.Integral(311,341)
    print("bin content 311 : %f" % (binCont))
    binCont=h1.Integral(341,381)
    print("bin content 341 : %f" % (binCont))
    binCont=h1.Integral(381,5001)
    print("bin content 381 : %f" % (binCont))
    
if __name__ == "__main__":
    parser = OptionParser(option_list=[
        make_option("--samplesDat",
                    action="store", type="string", dest="samplesDat",
                    default="samplesData.dat",
                    help="", metavar=""
                    ),

        ])
    
    (options, args) = parser.parse_args()
    
    main( options, args) 

