!  Compilation instruction (check the library paths):
!  On my laptop:
!  ifort -O3 -o coulomb_potential.exe coulomb_potential1.f90  -L/usr/local/lib/fftw-3.1.2 -lfftw3
!  gfortran -O3 -mtune=native -march=native -fPIC -o coulomb_potential.exe coulomb_potential1.f90 -I/usr/include -L/usr/local/lib/ -lfftw3
!  uses fftw3.f (see FFTW)
!==============================================================================
      module global_stuff 
       implicit none 

       Integer, Parameter  :: SP  = Kind(1.0) 
       Integer, Parameter  :: DP  = Kind(1.0D0)
       Integer, Parameter  :: SPC = Kind((1.0,1.0))
       Integer, Parameter  :: DPC = Kind((1.0D0,1.0D0))

! Pi  
       Real(DP), Parameter :: pi = 3.141592653589793238462643383279502884197d0 

       Save

      ! Nx, Ny, Nz # of lattice points in each dimension
      ! The volume of the cell is Lx*Ly*Lz
       Real(DP), Parameter     :: Lx = 20.0d0, Ly = Lx, Lz = Lx, Volume = Lx*Ly*Lz
       Integer,  Parameter     :: Nx = 20, Ny = Nx, Nz = Nx, Nxyz = Nx*Ny*Nz
       Real(DP), Parameter     :: dx = Lx/Dble(Nx), dy = Ly/Dble(Ny), dz = Lz/Dble(Nz)
       Real(DP), Parameter     :: dxyz = dx*dy*dz   ! Volume element
      
      ! Imaginary constant i; i**2 == -1  
       Complex(DPC), Parameter ::    ai = Cmplx(0.0d0,1.0d0)
       Real(DP),     Parameter :: xNxyz = dble( Nxyz )
       Complex(DPC), Parameter ::   aix = ai/xNxyz
       Real( DP ) ,  Parameter :: hbarc = 197.32696931d0 , alpha_finestr = 1.d0 / 137.035999679d0 , e2 = hbarc * alpha_finestr
      
      ! For the FFTW package
       Integer(KIND = 8)                 :: plan_f, plan_b
       Complex(DPC), Dimension(Nxyz)     :: fft_3_large
       
      ! Parameters for larger lattice (3L)^3 
       Real(DP), Dimension(Nxyz) :: Kx, Ky, Kz
       Real(DP), Dimension(Nxyz) :: Xa, Ya, Za 
       Real(DP), Dimension(27*Nxyz) :: Kxl, Kyl, Kzl
       Real(DP), Dimension(27*Nxyz) :: Xal, Yal, Zal 
       
      end module global_stuff

!==================================================================================================
!c=============================================================================
      module my_subroutines
      contains
!c=============================================================================
  function fft3( x )
  use global_stuff
    
    implicit none
    include 'fftw3.f'

    complex( DPC ) , dimension( : ) , intent( in ) :: x
    complex( DPC ) , dimension( size( x ) )        :: fft3           

    fft_3_large = x 
    call dfftw_execute( plan_f )
    fft3 = fft_3_large

  return
  end function fft3
!==================================================================================================
  function ifft3(x)
  use global_stuff

    implicit none
    include 'fftw3.f'

    complex( DPC ) , dimension( : ) , intent( in ) :: x
    complex( DPC ) , dimension( size( x ) )        :: ifft3       

    fft_3_large = x
    call dfftw_execute( plan_b )    
    ifft3 = fft_3_large

  return
  end function ifft3
!=======================================================================================================
      subroutine grid3(xx,yy,zz,X,Y,Z)
      use global_stuff

      implicit none
      Real(DP), Intent(in)                                         :: xx(:), yy(:), zz(:)
      Real(DP), Dimension(Size(xx)*Size(yy)*Size(zz)), Intent(out) :: X, Y, Z
      Integer                                                      :: ix, iy, iz, ixyz
    
      ixyz = 0
      
      Do ix = 1, Size(xx)
         Do iy = 1, Size(yy)
            Do iz = 1, Size(zz)
	    
	       ixyz    = ixyz + 1
               X(ixyz) = xx(ix)
               Y(ixyz) = yy(iy)
               Z(ixyz) = zz(iz)
	       
            enddo
         enddo
      enddo

      return
      End Subroutine grid3
      
!=======================================================================================================
      subroutine find_XaYaZa_and_KxKyKz
      use global_stuff
      
      ! Construct the spatial and momentum lattices  Xa, Ya, Za, Kx, Ky, Kz
      
      implicit none
      Integer    :: i
      Real(DP), Dimension(Nx) :: xx, yy, zz, kkx, kky, kkz  ! spatial and momentum vectors counting lattice points
                                                            ! for the lattice: (L)^3

       xx = (/ (i , i = -Nx/2 , Nx/2 - 1 ) /) * dx
       yy = (/ (i , i = -Ny/2 , Ny/2 - 1 ) /) * dy
       zz = (/ (i , i = -Nz/2 , Nz/2 - 1 ) /) * dz
       
       Call grid3( xx, yy, zz, Xa, Ya, Za )   ! create spatial lattice

       kkx = (/ (i, i = 0, Nx/2 - 1), (i, i = -Nx/2, -1) /) * 2.0d0*pi/(Lx)
       kky = (/ (i, i = 0, Ny/2 - 1), (i, i = -Ny/2, -1) /) * 2.0d0*pi/(Ly)
       kkz = (/ (i, i = 0, Nz/2 - 1), (i, i = -Nz/2, -1) /) * 2.0d0*pi/(Lz)

       Call grid3( kkx, kky, kkz, Kx, Ky, Kz)  ! create momentum lattice
 
      return
      end subroutine find_XaYaZa_and_KxKyKz
!=======================================================================================================
      subroutine find_XaYaZa_and_KxKyKz_large(fc) 
      use global_stuff
      
      ! Construct the spatial and momentum lattices  Xal, Yal, Zal, Kx,l Kyl, Kzl
      
      implicit none
      Integer    :: i
      Real(DP), dimension(:), intent(out)  ::  fc
      Real(DP), allocatable, dimension(:)  :: g,g2
      Real(DP), Dimension(3*Nx) :: xxl, yyl, zzl, kkxl, kkyl, kkzl  ! spatial and momentum vectors counting lattice points
                                                                    ! for the lattice: (L)^3

       xxl = (/ (i , i = -3*Nx/2 , 3*Nx/2 - 1 ) /) * dx
       yyl = (/ (i , i = -3*Ny/2 , 3*Ny/2 - 1 ) /) * dy
       zzl = (/ (i , i = -3*Nz/2 , 3*Nz/2 - 1 ) /) * dz
       
       Call grid3( xxl, yyl, zzl, Xal, Yal, Zal )   ! create spatial lattice

       kkxl = (/ (i, i = 0, 3*Nx/2 - 1), (i, i = -3*Nx/2, -1) /) * 2.0d0*pi/(3.0d0*Lx)
       kkyl = (/ (i, i = 0, 3*Ny/2 - 1), (i, i = -3*Ny/2, -1) /) * 2.0d0*pi/(3.0d0*Ly)
       kkzl = (/ (i, i = 0, 3*Nz/2 - 1), (i, i = -3*Nz/2, -1) /) * 2.0d0*pi/(3.0d0*Lz)

       Call grid3( kkxl, kkyl, kkzl, Kxl, Kyl, Kzl)  ! create momentum lattice

       !initialize modified Coulomb potential
       allocate( g(27*Nxyz), g2(27*Nxyz) )
       
        g2  = (Kxl)**2 + (Kyl)**2 + (Kzl)**2 
	g   = dsqrt(g2)
	g   = 1.0d0 - dcos(dsqrt(3.0d0)*g*Lx) 
	where (g2.gt.0.0000001) 
	 fc = g/g2
	elsewhere
	 fc = 1.5d0*Lx*Lx
	end where 
         fc = 4.0d0*pi*fc

       deallocate( g, g2 )

      return
      end subroutine find_XaYaZa_and_KxKyKz_large
!==================================================================================================   
   subroutine coulpot(rhop,vcoul,fc)
   use global_stuff
    
   implicit none
   include 'fftw3.f'

   Real(DP), dimension(:), intent(in)             ::  rhop,fc
   Real(DP)                                       :: coef
   Real(DP), dimension(:), intent(out)            ::  vcoul 
   Complex(DPC), allocatable, dimension(:,:,:,:)  ::  irhop_large, rhop_large
   Complex(DPC), allocatable, dimension(:)        :: rhop1
   Integer :: i,j,ixyz,k1,k2,k3

   allocate( rhop_large(3,3,3,Nxyz), irhop_large(3,3,3,Nxyz), rhop1(Nxyz) )

   call dfftw_plan_dft_3d( plan_f , Nx , Ny , Nz , fft_3_large , fft_3_large , FFTW_FORWARD , FFTW_ESTIMATE )
   call dfftw_plan_dft_3d( plan_b , Nx , Ny , Nz , fft_3_large , fft_3_large , FFTW_BACKWARD , FFTW_ESTIMATE )

!  Here the proton density distribution rhop is specified for a larger lattice (rhop_large)
   rhop_large  = Cmplx(0.0d0)
   coef        = 2.0d0*pi/(3.0d0*Lx)

   rhop1       = Cmplx(rhop)
   
   ixyz=0
   do k1=1,3
   do k2=1,3
   do k3=1,3
   do i=1,Nxyz
     ixyz = ixyz+1
     rhop_large(k1,k2,k3,i) = &
 &      rhop1(i)*dcos( coef*( (k1-1)*Xa(i)+(k2-1)*Ya(i)+(k3-1)*Za(i) ) ) - &
 &   ai*rhop1(i)*dsin( coef*( (k1-1)*Xa(i)+(k2-1)*Ya(i)+(k3-1)*Za(i) ) ) 
   enddo
   enddo 
   enddo 
   enddo   

! Here the Coulomb potential is calculated and stored in rhop_large 
   rhop1 = Cmplx(0.0d0)
   do k1=1,3
   do k2=1,3
   do k3=1,3
    irhop_large(k1,k2,k3,:) = fft3( rhop_large(k1,k2,k3,:) )  
   enddo 
   enddo 
   enddo 
   
   ixyz=0
   do j=1,27*Nxyz
    do k1=1,3
    do k2=1,3
    do k3=1,3
    do i=1,Nxyz
    
     if ( dabs(coef*(k1-1)+Kx(i)-Kxl(j)).lt.0.01 ) then
     if ( dabs(coef*(k2-1)+Ky(i)-Kyl(j)).lt.0.01 ) then
     if ( dabs(coef*(k3-1)+Kz(i)-Kzl(j)).lt.0.01 ) then
     irhop_large(k1,k2,k3,i) = irhop_large(k1,k2,k3,i)*fc(j)
     ixyz = ixyz+1
     endif
     endif
     endif
      
    enddo
    enddo
    enddo
    enddo
   enddo
   
   print*,ixyz
 
   do k1=1,3
   do k2=1,3
   do k3=1,3 
   rhop_large(k1,k2,k3,:)  = ifft3(irhop_large(k1,k2,k3,:))
   enddo
   enddo
   enddo

   do k1=1,3
   do k2=1,3
   do k3=1,3  
    do i=1,Nxyz
     rhop1(i)  = rhop1(i) + rhop_large(k1,k2,k3,i)*dcos( coef*( (k1-1)*Xa(i)+(k2-1)*Ya(i)+(k3-1)*Za(i) ) ) + &
 &                       ai*rhop_large(k1,k2,k3,i)*dsin( coef*( (k1-1)*Xa(i)+(k2-1)*Ya(i)+(k3-1)*Za(i) ) ) 
    enddo
   enddo
   enddo
   enddo

   rhop1 = e2*rhop1/(27*Lx*Ly*Lz)
   vcoul = dble( rhop1 )

   deallocate( rhop_large, irhop_large, rhop1 )
   
   return
   end subroutine coulpot 
!================================================================================

     end module my_subroutines 
!================================================================================
      program coulomb
!
!c-----------------------------------------------------------------------------
!c    P. Magierski, August 2013.
!c-----------------------------------------------------------------------------
!c   Program calculates the Coulomb potential for
!c   arbitrary charge distribution on the lattice.
!c   
!c   The cutoff method is used: Castro et al. arXiv0012024
!c   + trick described in densities_em.pdf which allows to
!c   perform 27 FFTs in 3 times smaller lattice instead of 1 FFT in the large one.
!c   (not very efficiently coded though so is rather slow)
!c-----------------------------------------------------------------------------
      use global_stuff
      use my_subroutines

      implicit none   
      Real(DP), allocatable, dimension(:)  :: rhop, vcoul, fc, rr
      Real(DP) :: e2x
      Integer  :: i,ixyz

      allocate ( rhop(Nxyz), vcoul(Nxyz), rr(Nxyz), fc(27*Nxyz) )
      
      open(30,file='vcoulz1.dat',status='unknown')
      open(31,file='vcouly1.dat',status='unknown')
      open(32,file='vcoulx1.dat',status='unknown')

!  Initialization of larger lattice and modified Coulom potential (it need to be done only once)
      call find_XaYaZa_and_KxKyKz
      call find_XaYaZa_and_KxKyKz_large(fc)

!  Here for test purposes the density distribution is created
      rhop = 0.0d0
      ixyz=0
      do i=1,Nxyz
       if (Xa(i).ge.-0.5001*Nx*dx.and.Xa(i).le.(0.5001*Nx-1)*dx) then
       if (Ya(i).ge.-0.5001*Ny*dx.and.Ya(i).le.(0.5001*Ny-1)*dx) then
       if (Za(i).ge.-0.5001*Nz*dx.and.Za(i).le.(0.5001*Nz-1)*dx) then
        ixyz = ixyz+1
	 rr(ixyz) = dsqrt( (Xa(i)-6.0d0)**2 + Ya(i)**2 + Za(i)**2 )
	 if (rr(ixyz).le.1.5d0) rhop(ixyz) = 1.0d0
       endif
       endif
       endif
      enddo
!  Coulomb potential is calulated from the proton density: rhop . Output -> vcoul   
      call coulpot(rhop,vcoul,fc)

!  This is for testing purposes only            
      ixyz=0
      e2x = e2*4.0d0*pi*6.0d0*6.0d0*6.0d0/3.0d0
      do i=1,Nxyz
       if (Xa(i).ge.-0.5001*Nx*dx.and.Xa(i).le.(0.5001*Nx-1)*dx) then
       if (Ya(i).ge.-0.5001*Ny*dx.and.Ya(i).le.(0.5001*Ny-1)*dx) then
       if (Za(i).ge.-0.5001*Nz*dx.and.Za(i).le.(0.5001*Nz-1)*dx) then
        ixyz = ixyz+1
!	rr(ixyz) = dsqrt( (Xal(i)-6.0)**2 + Yal(i)**2 + Zal(i)**2 )
	if  ( ( Xa(i)**2 + Ya(i)**2 ).lt.0.01 ) write(30,100)Za(i),vcoul(ixyz),rhop(ixyz)
        if  ( ( Xa(i)**2 + Za(i)**2 ).lt.0.01 ) write(31,100)Ya(i),vcoul(ixyz),rhop(ixyz)
	if  ( ( Ya(i)**2 + Za(i)**2 ).lt.0.01 ) write(32,100)Xa(i),vcoul(ixyz),rhop(ixyz)
       endif
       endif
       endif
      enddo     	    
 
 100  format(4(f20.4))     
      deallocate(rhop,vcoul,fc,rr)
      
      end
!=====================================================================================
