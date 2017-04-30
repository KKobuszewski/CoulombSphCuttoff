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

#Function to add ticks
def addticks(ax,newLocs,newLabels,pos='x',replace=True, rotation='vertical',fontsize=10):
    # Draw to get ticks
    plt.draw()
    
    # Get existing ticks
    if pos=='x':
        locs   = ax.get_xticks().tolist()
        labels = [x.get_text() for x in ax.get_xticklabels()]
    elif pos =='y':
        locs = ax.get_yticks().tolist()
        labels=[x.get_text() for x in ax.get_yticklabels()]
    else:
        print("WRONG pos. Use 'x' or 'y'")
        return
    
    if replace is True:
        Dticks=dict(zip(newLocs,newLabels))
    else:
        # Build dictionary of ticks
        Dticks=dict(zip(locs,labels))
        
        # Add/Replace new ticks
        for Loc,Lab in zip(newLocs,newLabels):
            Dticks[Loc]=Lab

    # Get back tick lists
    locs=list(Dticks.keys())
    labels=list(Dticks.values())

    # Generate new ticks
    if pos=='x':
        ax.set_xticks(locs)
        ax.set_xticklabels(labels,rotation=rotation,fontsize=fontsize)
    elif pos =='y':
        ax.set_yticks(locs)
        ax.set_yticklabels(labels,rotation=rotation,fontsize=fontsize)


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

def proces_csv(reader):
    data = []
    it = 1
    ifft = 1
    for row in reader:
        # check if no errors in profiling/execution
        if (len(row) > 0) and row[0].find('Error') is not -1:
            #print(row,'\n\n\n')
            return None
        # find timings for kenels and append to data
        if (len(row) > 6) and (len(rx.findall(row[0])) > 0) and (len(row[2]) > 1):
            if  (row[6].find('thrust') is not -1):
                key = 'thrust{:d}'.format(it)
                it   += 1
            elif (row[6].find('radix') is not -1) or (row[6].find('__nv_static') is not -1) or (row[6].find('fft') is not -1):
                key = 'cufft{:d}'.format(ifft)
                ifft += 1
            else:
                key = row[6]
            data.append( (key,[float(x) for x in row[:6]]) )
    return dict(data)

def plot_timings():
    files = sorted(glob.glob('coulomb.*.profile'))
    sizes = np.array([ [float(x) for x in re.findall(r'\d+',f)] for f in files ])
    
    sizes_tot, files = (list(t) for t in zip(*sorted(zip(sizes[:,0]*sizes[:,1]*sizes[:,2], files))))
    sizes = np.array([ [float(x) for x in re.findall(r'\d+',f)] for f in files ])
    
    sizes_tot = np.array(sizes_tot)
    files = np.array(files)
    print('number of files:',len(files))
    print(files)
    print(sizes)
    print(sizes_tot)
    
    keys = ['[CUDA memset]',
            'thrust1',
            'thrust2',
            'void kernel_compare_multipass<double, unsigned int=512, bool=1>(double const *, double*, unsigned int, int*, double)',
            'void kernel_compare<double>(double*, double*, int*, double, int)',
            '[CUDA memcpy DtoH]']
    mins = {}
    avgs = {}
    maxs = {}
    for key in keys:
        mins[key] = np.empty(len(files))
        avgs[key] = np.empty(len(files))
        maxs[key] = np.empty(len(files))
    
    avg_t_cufft   = np.zeros(len(files))
    min_t_cufft   = np.zeros(len(files))
    max_t_cufft   = np.zeros(len(files))
    avg_t_coulomb = np.zeros(len(files))
    min_t_coulomb = np.zeros(len(files))
    max_t_coulomb = np.zeros(len(files))
    avg_t_enlarge = np.zeros(len(files))
    min_t_enlange = np.zeros(len(files))
    max_t_enlarge = np.zeros(len(files))
    avg_t_lessen  = np.zeros(len(files))
    min_t_lessen  = np.zeros(len(files))
    max_t_lessen  = np.zeros(len(files))
    
    for it,f in enumerate(files):
        print(f)
        with open(f,'rb') as csvfile: 
            reader = csv.reader(csvfile)
            
            data = proces_csv(reader)
            if data is None:
                avg_t_cufft[it] = np.nan
                min_t_cufft[it] = np.nan
                max_t_cufft[it] = np.nan
                continue
            
            for key in data:
                print(key,data[key])
                if key.find('cufft') is not -1:
                    avg_t_cufft[it] += data[key][1]#*data[key][2]
                    min_t_cufft[it] += data[key][4]
                    max_t_cufft[it] += data[key][5]
                elif key.find('coulomb') is not -1:
                    avg_t_coulomb[it] += data[key][1]#*data[key][2]
                    min_t_coulomb[it] += data[key][4]
                    max_t_coulomb[it] += data[key][5]
                elif key.find('enlarge') is not -1:
                    avg_t_enlarge[it] += data[key][1]#*data[key][2]
                    min_t_enlange[it] += data[key][4]
                    max_t_enlarge[it] += data[key][5]
                elif key.find('memset') is not -1:
                    avg_t_enlarge[it] += data[key][1]#*data[key][2]
                    min_t_enlange[it] += data[key][4]
                    max_t_enlarge[it] += data[key][5]
                elif key.find('lessen') is not -1:
                    avg_t_lessen[it] += data[key][1]#*data[key][2]
                    min_t_lessen[it] += data[key][4]
                    max_t_lessen[it] += data[key][5]
            csvfile.close()
        #print('\n\n\n')
    print('data read')
    
    # get rid of nans due to errors
    indexes = np.logical_not(np.isnan(avg_t_cufft))
    indexes = np.logical_and( indexes, sizes_tot%65536 == 0 )
    sizes_tot         =         sizes_tot[indexes]
    files = files[indexes]
    avg_t_cufft = avg_t_cufft[indexes]
    min_t_cufft = min_t_cufft[indexes]
    max_t_cufft = max_t_cufft[indexes]
    avg_t_coulomb = avg_t_coulomb[indexes]
    min_t_coulomb = min_t_coulomb[indexes]
    max_t_coulomb = max_t_coulomb[indexes]
    avg_t_enlarge = avg_t_enlarge[indexes]
    min_t_enlange = min_t_enlange[indexes]
    max_t_enlarge = max_t_enlarge[indexes]
    avg_t_lessen  = avg_t_lessen[indexes]
    min_t_lessen  = min_t_lessen[indexes]
    max_t_lessen  = max_t_lessen[indexes]
    
    #sizes_tot = np.log(sizes_tot)/np.log(2)
    
    #plt.figure(figsize=[18.,12.])
    fig,axarr = plt.subplots(2, 1,figsize=[18.,12.])
    plt.suptitle('GeForce GTX 980M, architecture Maxwell, compute capability 5.2')
    #axarr[0].set_xlim([np.min(sizes_tot)*0.99,np.max(sizes_tot)*1.01])
    #axarr[0].set_xscale('log')
    axarr[0].set_yscale('log')
    #axarr[0].errorbar(sizes_tot, avg_t_cufft, yerr=[min_t_cufft,max_t_cufft],marker='o',markersize=1.5,label='cuFFT time')
    bar_pos = 8*np.arange(len(sizes_tot),dtype=np.float32)
    width = 1
    axarr[0].set_xlim([np.min(bar_pos)-2*width,np.max(bar_pos)+2*width])
    axarr[0].bar(bar_pos-2*width, avg_t_cufft  /640., width,color='blue',label='cuFFT')#, yerr=max_t_cufft)
    axarr[0].bar(bar_pos-1*width, avg_t_coulomb/640., width,color='red',label='Coulomb kernel')#, yerr=max_t_cufft)
    axarr[0].bar(bar_pos+0*width, avg_t_enlarge/640., width,color='orange',label='enlarging')#, yerr=max_t_cufft)
    axarr[0].bar(bar_pos+1*width, avg_t_lessen /640., width,color='green',label='lessening')#, yerr=max_t_cufft)
    #for ii,(avg,min,max) in enumerate(zip(avg_t_cufft,min_t_cufft,max_t_cufft)):
    #    print(bar_pos[ii],avg,min,max)
    #    axarr[0].bar(bar_pos[ii], avg, width, yerr=max)
    #addticks(axarr[0],bar_pos,[f.split('.')[1] for f in files],pos='x',fontsize=9)
    axarr[0].legend(loc='upper left')
    addticks(axarr[0],bar_pos,['' for f in files],pos='x',fontsize=9)
    
    axarr[1].set_xlim([np.min(bar_pos)-width,np.max(bar_pos)+width])
    addticks(axarr[1],bar_pos,[f.split('.')[1] for f in files],pos='x',fontsize=9)
    
    total_t = (avg_t_cufft+avg_t_coulomb+avg_t_enlarge+avg_t_lessen)/640
    min_t   = (min_t_cufft+min_t_coulomb+min_t_enlange+min_t_lessen)
    max_t   = (max_t_cufft+max_t_coulomb+max_t_enlarge+max_t_lessen)
    
    axarr[1].bar(bar_pos-0.5*width,total_t,width,label='total time',color='grey')
    axarr[1].errorbar(bar_pos,total_t,yerr=[min_t,max_t],linestyle='',color='k')
    axarr[1].legend(loc='upper left')
    #plt.show()
    plt.savefig('timings_kernel0_pow_2.pdf')



if __name__ == '__main__':
    plot_timings()