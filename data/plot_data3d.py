from __future__ import print_function,division

import numpy as np
import scipy.special
import matplotlib.pyplot as plt
import matplotlib.cm as cm

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


def plot_crosssections():
    Nx,Ny,Nz,Cx,Cy,Cz,aho = get_info('coulomb.info')
    print(Nx,Ny,Nz,Cx,Cy,Cz,aho)
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
    
    print('lattice allocated ',Nx2,Ny2,Nz2)

    # load data
    orginal_data,orginal_phase = get_data3D('orginal3D.bin', Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.complex128)
    resized_data,resized_phase = get_data3D('resized3D.bin', Nx=Nx2,Ny=Ny2,Nz=Nz2,dtype=np.float64)
    #lessend_data,lessend_phase = get_data3D('lessened3D.bin',Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.float64)

    # rescale values of density
    orginal_data = orginal_data * aho**3
    resized_data = resized_data * aho**3
    #lessend_data = lessend_data * aho**3
    
    
    print('data read')
    
    #  =======================================  PLOTS  ================================================================================= 
    fig,ax1 = plt.subplots(1, 1,figsize=[10.,10.])
    print('test')
    fig.suptitle(r'Cross sections, $a_{ho}=$'+'{:.2f}'.format(aho))
    
    #ax1.set_title('Nx/Ny')
    ax1.grid(True)
    ax1.set_xlabel(r'$x$',fontsize=15)#/a_{ho}$')
    ax1.set_ylabel(r'$y$',fontsize=15)#/a_{ho}$')
    ax1.set_xlim([-Nx2/2.,Nx2/2.])
    ax1.set_ylim([-Ny2/2.,Ny2/2.])
    im = ax1.imshow(np.log10(resized_data[:,:,Nz2/2]+1e-50), interpolation='bilinear', origin='lower',cmap=cm.rainbow, extent=(-Nx2/2.,Nx2/2., -Ny2/2.,Ny2/2.))
    #cb = plt.colorbar(im, shrink=0.8, extend='both')
    #cb.set_label(r'$log_{10}\left(\vert\psi\vert^2a_{ho}^3\right)$')

    ax1.axvline( Nx/2.,color='k',linewidth=2.)
    ax1.axvline(-Nx/2.,color='k',linewidth=2.)
    ax1.axhline( Ny/2.,color='k',linewidth=2.)
    ax1.axhline(-Ny/2.,color='k',linewidth=2.)
    
    print()
    
    #ax2.set_title('Nx/Nz')
    ax2.grid(True)
    ax2.set_xlabel(r'$x$',fontsize=15)#/a_{ho}$')
    ax2.set_ylabel(r'$z$',fontsize=15)#/a_{ho}$')
    ax2.set_xlim([-Nx2/2.,Nx2/2.])
    ax2.set_ylim([-Nz2/2.,Nz2/2.])
    im = ax2.imshow(np.log10(resized_data[:,Ny2/2,:]+1e-50), interpolation='bilinear', origin='lower',cmap=cm.rainbow, extent=(-Nx2/2.,Nx2/2., -Nz2/2.,Nz2/2.))
    #cb = plt.colorbar(im, shrink=0.8, extend='both')
    #cb.set_label(r'$log_{10}\left(\vert\psi\vert^2a_{ho}^3\right)$')

    ax2.axvline( Nx/2.,color='k',linewidth=2.)
    ax2.axvline(-Nx/2.,color='k',linewidth=2.)
    ax2.axhline( Nz/2.,color='k',linewidth=2.)
    ax2.axhline(-Nz/2.,color='k',linewidth=2.)
    
    print()
    
    #ax3.set_title('Ny/Nz')
    ax3.grid(True)
    ax3.set_xlabel(r'$y$',fontsize=15)#/a_{ho}$')
    ax3.set_ylabel(r'$z$',fontsize=15)#/a_{ho}$')
    ax3.set_xlim([-Ny2/2.,Ny2/2.])
    ax3.set_ylim([-Nz2/2.,Nz2/2.])
    im = ax3.imshow(np.log10(resized_data[Nx2/2,:,:]+1e-50), interpolation='bilinear', origin='lower',cmap=cm.rainbow, extent=(-Ny2/2.,Ny2/2., -Nz2/2.,Nz2/2.))
    cb = plt.colorbar(im, shrink=0.8, extend='both')
    cb.set_label(r'$log_{10}\left(\vert\psi\vert^2a_{ho}^3\right)$')
    
    ax3.axvline( Ny/2.,color='k',linewidth=2.)
    ax3.axvline(-Ny/2.,color='k',linewidth=2.)
    ax3.axhline( Nz/2.,color='k',linewidth=2.)
    ax3.axhline(-Nz/2.,color='k',linewidth=2.)
    
    print()
    print()
    print()
    print()
    print()
    print()

    plt.savefig('resized3D_xy__aho{:.0f}.pdf'.format(aho))
    #plt.show()

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


    # load data
    orginal_data,orginal_phase = get_data3D('orginal3D.bin', Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.complex128)
    resized_data,resized_phase = get_data3D('resized3D.bin', Nx=Nx2,Ny=Ny2,Nz=Nz2,dtype=np.float64)
    #lessend_data,lessend_phase = get_data3D('lessened3D.bin',Nx=Nx,Ny=Ny,Nz=Nz,dtype=np.float64)

    # rescale values of density
    orginal_data = orginal_data * aho**3
    resized_data = resized_data * aho**3
    #lessend_data = lessend_data * aho**3
    
    mlab.figure(1, size=(1000, 1000), fgcolor=(1, 1, 1), bgcolor=(0, 0, 0))
    con = mlab.contour3d(X_new,Y_new,Z_new,resized_data+1e-50,vmin=1e-50,vmax=1e-20,opacity=0.2,contours=4)#,transparent=True)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,resized_data+1e-50),
                                     plane_orientation='x_axes', slice_index=0)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,resized_data+1e-50),
                                     plane_orientation='y_axes', slice_index=0)
    mlab.pipeline.image_plane_widget(mlab.pipeline.scalar_field(X_new,Y_new,Z_new,resized_data+1e-50),
                                     plane_orientation='z_axes', slice_index=0)

    mlab.outline(extent=[-Nx2/2,Nx2/2,-Ny2/2,Ny2/2,-Nz2/2,Nz2/2])
    mlab.outline(con,extent=[-Nx/2,Nx/2,-Ny/2,Ny/2,-Nz/2,Nz/2])
    mlab.xlabel('X')
    mlab.ylabel('Y')
    mlab.zlabel('Z')
    mlab.view(45, 75,distance=500)
    mlab.show()
    


if __name__ == '__main__':
    plot_crosssections()
    mayavi_visualization()