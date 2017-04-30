from __future__ import print_function,division

import numpy as np
import scipy.special
import matplotlib.pyplot as plt
import matplotlib.cm as cm

import re


def get_data3D(datafile,Nx=128,Ny=128,Nz=128,nom=1,measure_it=0,dtype=np.complex128):
    
    data = np.memmap(datafile,dtype=dtype)
    
    # check data consistency with given dimensions
    if (len(data) == nom*Nx*Ny*Nz):
        """print('# lenght of array consistent.\t\tnom*Nx*Ny*Nz =',nom*Nx*Ny*Nz,'\tarray shape:',data.shape)"""
        pass
    else:
        if (len(data) % (Nx*Ny*Nz) == 0):
            nom = len(data)/(Nx*Ny*Nz)
        else:
            print('# ERROR: lenght of array incosistent!')
            print('Nx:',Nx,' Ny:',Ny,' Nz:',Nz,' nom:',nom)
            print('nom*Nx*Ny*Nz =',nom*Nx*Ny*Nz,'\tarray shape:',data.shape)
    data = np.reshape(data,[nom,Nx,Ny,Nz])
    
    # process dependently on type
    if (dtype == np.complex128):
        density = np.abs(data[measure_it,:,:,:])**2
        phase   = np.angle(data[measure_it,:,:,:])
    else:
        density = data[measure_it,:,:,:]
        phase   = None
    
    return density, phase

def get_info(infofile):
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
    with open(infofile) as info:
        data = info.readlines()
        nx = int(re.findall(r'\d+', data[0])[0])
        ny = int(re.findall(r'\d+', data[1])[0])
        nz = int(re.findall(r'\d+', data[2])[0])
        cx = int(re.findall(r'\d+', data[3])[0])
        cy = int(re.findall(r'\d+', data[4])[0])
        cz = int(re.findall(r'\d+', data[5])[0])
        aho = float(rx.findall(data[6])[0])
    return [nx,ny,nz,cx,cy,cz,aho]



def analytical(x,aho):
    data = np.empty(x.size)
    data[np.where(x != 0)] = scipy.special.erf(x[np.where(x != 0)]/(aho))/(4.*np.pi*x[np.where(x != 0)])
    data[np.where(x == 0)] = 1./np.sqrt(np.pi)/aho/(2.*np.pi)
    return data


def plot_analytical_comparison():
    Nx,Ny,Nz,Cx,Cy,Cz,aho = get_info('coulomb.info')
    Nx = 128
    Ny = 64
    Nz = 32
    print(Nx,Ny,Nz,Cx,Cy,Cz,aho)
    Nx2 = (2*Cx+Nx)
    Ny2 = (2*Cy+Ny)
    Nz2 = (2*Cz+Nz)
    

    x = np.linspace(-Nx/2.,Nx/2.,Nx,endpoint=False)
    y = np.linspace(-Ny/2.,Ny/2.,Ny,endpoint=False)
    z = np.linspace(-Nz/2.,Nz/2.,Nz,endpoint=False)
    
    data,orginal_phase = get_data3D('analytical.bin', Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.float64)
    
    
    plt.figure(figsize=[10.,12.])
    plt.scatter(x,data[:,Ny/2,Nz/2],label='C++')
    plt.plot(x,analytical(x,aho),label='Python')
    plt.legend()
    plt.show()
    
    
    plt.figure(figsize=[10.,12.])
    plt.scatter(y,data[Nx/2,:,Nz/2],label='C++')
    plt.plot(y,analytical(y,aho),label='Python')
    plt.legend()
    plt.show()
    
    plt.figure(figsize=[10.,12.])
    plt.scatter(z,data[Nx/2,Ny/2,:],label='C++')
    plt.plot(z,analytical(z,aho),label='Python')
    plt.legend()
    plt.show()


if __name__ == '__main__':
    plot_analytical_comparison()