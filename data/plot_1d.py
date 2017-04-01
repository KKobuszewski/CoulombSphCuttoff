from __future__ import print_function,division

import math
import numpy as np
import scipy.special
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import matplotlib.mlab as mlab


import re
import time


def get_data3D(datafile,Nx=64,Ny=64,Nz=64,nom=1,measure_it=0,dtype=np.complex128):
    
    # http://stackoverflow.com/questions/40134810/cast-numpy-array-into-memmap
    data = np.fromfile(datafile,dtype=dtype)
    
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


def vcoulomb(kx,ky,kz,add):
    ret = add/(kx**2+ky**2+kz**2)
    #ret[np.where(kx == 0)] = 0.
    #ret[np.where(ky == 0)] = 0.
    #ret[np.where(kz == 0)] = 0.
    ret[np.where((kx**2 + ky**2 + kz**2) == 0)] = 0.
    return ret

def vcoulomb_sph_trucated(kx,ky,kz,q,Lcutoff):
    k2 = kx**2+ky**2+kz**2
    ret = q*q*(1-np.cos( np.sqrt(k2)*math.sqrt(3)*Lcutoff))/(k2)
    ret[np.where(k2 < 1e-15)] = 1.5*q*q*Lcutoff*Lcutoff # lim_{x->0} (1 - cos (sqrt3 Lc x))
    return ret

def analytical(x,aho):
    data = np.empty(x.size)
    data[np.where(x != 0)] = scipy.special.erf(x[np.where(x != 0)]/(aho))/(4.*np.pi*x[np.where(x != 0)])
    data[np.where(x == 0)] = 1./np.sqrt(np.pi)/aho/(2.*np.pi)
    return data

density_func = lambda X,Y,Z,aho: np.exp( -(X**2 + Y**2 + Z**2)/aho/aho )/(math.sqrt(math.pi)*aho)**3 + 0.j

def visualization():
    info = get_info('coulomb.info')
    print(info)
    
    # parameters
    aho = info[6]

    # lattice
    Nx=info[0]
    Ny=info[1]
    Nz=info[2]
    Cx=info[3]
    Cy=info[4]
    Cz=info[5]
    Nx2 = (2*Cx+Nx)
    Ny2 = (2*Cy+Ny)
    Nz2 = (2*Cz+Nz)
    
    Lcutoff = float(Nx)/(1+math.sqrt(3))
    charge = 1.0


    x = np.linspace(-Nx/2., Nx/2., Nx, endpoint=False)
    y = np.linspace(-Ny/2., Ny/2., Ny, endpoint=False)
    z = np.linspace(-Nz/2., Nz/2., Nz, endpoint=False)
    kx = np.linspace(-np.pi, np.pi, Nx, endpoint=False)
    ky = np.linspace(-np.pi, np.pi, Ny, endpoint=False)
    kz = np.linspace(-np.pi, np.pi, Nz, endpoint=False)
    X,Y,Z = np.meshgrid(x,y,z, indexing='ij')
    Kx,Ky,Kz = np.meshgrid(kx,ky,kz, indexing='ij')

    #cufftkx = np.fft.fftshift(kx)
    #cufftky = np.fft.fftshift(ky)
    #cufftkz = np.fft.fftshift(kz)


    # load data
    #data,phase  = get_data3D('density_transform3D.bin',Nx=Nx2,Ny=Ny2,Nz=Nz2,dtype=np.complex128)
    density,phase = get_data3D('orginal3D.bin',Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.complex128)
    data,phase    = get_data3D('vcoulomb.bin',Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.float64)
    
    #density = density*aho**3
    print('psi normalization:',np.sum(density),'/',np.sum(density_func(x,0.,0.,aho)))
    density = np.fft.fftn(density,axes=(0,1,2))
    vc_sph_cutoff = vcoulomb_sph_trucated(  np.fft.fftshift(Kx,axes=(0,1,2)),
                                            np.fft.fftshift(Ky,axes=(0,1,2)),
                                            np.fft.fftshift(Kz,axes=(0,1,2)),
                                            charge,Lcutoff) * density
    vc_sph_cutoff = np.fft.ifftn(vc_sph_cutoff, axes=(0,1,2))
    density = np.fft.ifftn(density,axes=(0,1,2))
    
    print(vc_sph_cutoff)
    
    #print('data loaded')
    #time.sleep(.5)
    #data = np.array(data)
    #print('to array')
    
    #print(data)
    fig,(ax1) = plt.subplots(1,1,figsize=[12.,8.])

    fig.suptitle(r'$a_{ho}=$'+'{:.2f}'.format(aho))

    #
    ax1.grid(True)
    ax1.set_xlabel(r'$x/L_c$')#a_{ho}$')
    ax1.set_ylabel(r'$\pi V_C$')
    
    #ax1.plot(x, vc_sph_cutoff[:,Ny/2,Nz/2], label=r'$V_{C}$ (numpy, sph cutoff)', color='g', linewidth=.5)
    ax1.plot(x, analytical(x,aho),          label=r'$V_{C}$ (analitical)',       color='k', linewidth=.5)
    
    ax1.scatter(x,data[:,Ny/2,Nz/2],label='crossection x')
    #ax1.plot(y,data[Nx/2,:,Nz/2],label='crossection y')
    #ax1.plot(z,data[Nx/2,Ny/2,:],label='crossection z')
    ax1.legend()
    
    axx1 = ax1.twinx()
    axx1.set_ylabel(r'$\vert\psi\vert^2 a_{ho}^3$', color='r')
    axx1.tick_params('y', colors='r')
    axx1.set_yscale('log')
    axx1.set_ylim([10**(-15.),10**2])
    axx1.plot(x,density[:,Ny/2,Nz/2]*aho**3,linewidth=1.,linestyle='--',color='red')
    #axx1.plot(x,density_func(x,0.,0.,aho))
    
    
    plt.show()

    #plt.savefig('vcoulomb_x__aho{:.0f}.pdf'.format(aho))
    #plt.show()


if __name__ == '__main__':
    visualization()