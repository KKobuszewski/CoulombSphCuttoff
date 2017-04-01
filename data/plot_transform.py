from __future__ import print_function,division

import numpy as np
import scipy.special
import matplotlib.pyplot as plt
import matplotlib.cm as cm
import matplotlib.mlab as mlab

import mayavi
import mayavi.mlab as mlab

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



def mayavi_visualization():
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

    x = np.linspace(-Nx/2.,Nx/2.,Nx,endpoint=False)
    y = np.linspace(-Ny/2.,Ny/2.,Ny,endpoint=False)
    z = np.linspace(-Nz/2.,Nz/2.,Nz,endpoint=False)
    X,Y,Z = np.meshgrid(x,y,z, indexing='ij')

    x_new = np.linspace(-Nx2/2.,Nx2/2.,Nx2,endpoint=False)
    y_new = np.linspace(-Ny2/2.,Ny2/2.,Ny2,endpoint=False)
    z_new = np.linspace(-Nz2/2.,Nz2/2.,Nz2,endpoint=False)
    X_new,Y_new,Z_new = np.meshgrid(x_new,y_new,z_new, indexing='ij')
    
    # make fft shift of data
    #X_new = np.fft.fftshift(X_new,axes=(0,1,2))
    #Y_new = np.fft.fftshift(Y_new,axes=(0,1,2))
    #Z_new = np.fft.fftshift(Z_new,axes=(0,1,2))

    # load data
    data,phase = get_data3D('density_transform3D.bin', Nx=Nx2,Ny=Ny2,Nz=Nz2,dtype=np.complex128)

    # rescale values of density
    print(data)
    print(data[np.where(data > 1e-10)])
    data = np.log10(data * aho**3)
    #data = np.fft.fftshift(data)
    
    data[np.isinf(data)] = np.nan
    
    mlab.figure(1, size=(1000, 1000), fgcolor=(1, 1, 1), bgcolor=(0, 0, 0))
    con = mlab.contour3d(X_new,Y_new,Z_new,data,opacity=0.2,contours=4)#,transparent=True)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,data),
                                     plane_orientation='x_axes', slice_index=0)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,data),
                                     plane_orientation='y_axes', slice_index=0)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,data),
                                     plane_orientation='z_axes', slice_index=0)

    mlab.outline(extent=[-Nx2/2,Nx2/2,-Ny2/2,Ny2/2,-Nz2/2,Nz2/2])
    mlab.outline(con,extent=[-Nx/2,Nx/2,-Ny/2,Ny/2,-Nz/2,Nz/2])
    mlab.xlabel('X')
    mlab.ylabel('Y')
    mlab.zlabel('Z')
    mlab.view(45, 75,distance=500)
    mlab.show()
    


if __name__ == '__main__':
    #plot_crosssections()
    mayavi_visualization()