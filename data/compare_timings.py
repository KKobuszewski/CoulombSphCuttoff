from __future__ import print_function,division

import math
import numpy as np
import scipy.special
import matplotlib.pyplot as plt
import matplotlib.cm as cm

plt.style.use('ggplot')

import re
import time
import sys
import glob
import csv 

numeric_const_pattern = r"""
     [-+]? # optional sign
     (?:
         (?: \d* \. \d+ ) # .1 .12 .123 etc 9.1 etc 98.1 etc
         |
         (?: \d+ \.? ) # 1. 12. 123. etc 1 12 123 etc
     )
     # followed by optional exponent part if desired
     (?: [Ee] [+-]? \d+ ) ?
     """
rx = re.compile(numeric_const_pattern, re.VERBOSE)

def get_timings():
    timings = sorted(glob.glob('timing*.dat'))
    lattices = np.zeros([len(timings),3])
    lattice_sizes = np.zeros(len(timings))
    
    min_enalrging = np.zeros(len(timings))
    var_enalrging = np.zeros(len(timings))
    min_coulomb   = np.zeros(len(timings))
    var_coulomb   = np.zeros(len(timings))
    min_lessening = np.zeros(len(timings))
    var_lessening = np.zeros(len(timings))
    tot           = np.zeros(len(timings))
    var           = np.zeros(len(timings))
    threads       = np.zeros(len(timings))
    
    for ii,timing in enumerate(timings):
        lattices[ii,:] = [int(float(x)) for x in rx.findall(timing)]
        data = np.loadtxt(timing,skiprows=1)
        print(timing,lattice_sizes[ii])
        min_enalrging[ii] = np.min(data[:,4])
        var_enalrging[ii] = np.mean(data[:,5])
        min_coulomb[ii]   = np.min(data[:,6])
        var_coulomb[ii]   = np.mean(data[:,7])
        min_lessening[ii] = np.min(data[:,8])
        var_lessening[ii] = np.mean(data[:,8])
        
        tot[ii] = np.min(data[:,4] + data[:,6] + data[:,8])
        var[ii] = var_enalrging[ii] + var_coulomb[ii] + var_lessening[ii]
        
        threads[ii] = data[:,3][np.where( (data[:,4] + data[:,6] + data[:,8]) == tot[ii] )]
        print()
        print()
        print()
    
    #lattices = np.sort(lattices,axis=0)
    lattice_sizes = np.prod(lattices,axis=1)
    lattice_sizes = np.log(lattice_sizes)/np.log(2)
    
    plt.plot(lattice_sizes,marker='o',markersize=1.5)
    plt.show()
    plt.close('all')
    
    plt.figure(figsize=[12.,8.])
    #plt.xlim([0.,np.max(lattice_sizes)])
    plt.ylim([0.,0.04])
    plt.errorbar(lattice_sizes,min_enalrging,yerr=var_enalrging,color='b',linestyle='')
    plt.errorbar(lattice_sizes,min_coulomb  ,yerr=var_coulomb  ,color='r',linestyle='')
    plt.errorbar(lattice_sizes,min_lessening,yerr=var_lessening,color='k',linestyle='')
    plt.legend(loc='best')
    plt.savefig('timing_kerlens_best.pdf')
    plt.close('all')
    
    plt.figure(figsize=[12.,8.])
    plt.errorbar(lattice_sizes,tot,yerr=var)
    plt.savefig('timing_total_best.pdf')
    
    plt.figure(figsize=[12.,8.])
    plt.scatter(lattice_sizes,threads)
    plt.show()
    
    #print(lattices.shape)
    #print(len(timings))
    
    #print(lattices)
    #print(lattice_sizes)
    
    #for t,l,s in zip(timings,lattices,lattice_sizes):
    #    print(t,l,s)


if __name__ == '__main__':
    get_timings()
