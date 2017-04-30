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



def plot_timing(filename):
    
    data = np.loadtxt(filename,skiprows=1)
    print()
    
    plt.figure(figsize=[14.,12.])
    plt.xlim([0.,1056.])
    plt.xlabel('threads per block')
    plt.ylabel('time [ms]')
    
    plt.errorbar(data[:,3],data[:,4],yerr=data[:,5],label='enlarging')
    plt.errorbar(data[:,3],data[:,6],yerr=data[:,7],label='Coulomb')
    plt.errorbar(data[:,3],data[:,8],yerr=data[:,9],label='lessening')
    total_time = (data[:,4]+data[:,6]+data[:,8])
    total_var  = (data[:,5]+data[:,7]+data[:,9])
    plt.errorbar(data[:,3],total_time,yerr=total_var,label='total')
    
    plt.axvline(64,  linestyle='--',color='grey')
    plt.axvline(128, linestyle='--',color='grey')
    plt.axvline(256, linestyle='--',color='grey')
    plt.axvline(512, linestyle='--',color='grey')
    plt.axvline(1024,linestyle='--',color='grey')
    
    plt.legend(loc='upper left')
    plt.show()



if __name__ == '__main__':
    if len(sys.argv) > 1:
        plot_timing(sys.argv[1])