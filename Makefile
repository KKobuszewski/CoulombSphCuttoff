# cuda compiler
GPU_ARCH = -gencode arch=compute_52,code=sm_52

NVCC      = /usr/local/cuda/bin/nvcc
NVCC_FLAGS= $(GPU_ARCH) -Xcudafe "--diag_suppress=declared_but_not_referenced --diag_suppress=set_but_not_used" -Xcompiler "-fPIC -m64" -keep
NVCC_INC  = -I/usr/local/cuda/include -I/usr/local/cuda/samples/common/inc -I.
NVCC_DEFS = -DNX=$(NX) -DNY=$(NY) -DNZ=$(NZ) -DINTERACTIONS=$(INTERACTIONS) -DVEXT=$(VEXT)
NVCC_LIBS = -L/usr/local/cuda/lib64 -lcudart -lcudadevrt -lcufft -lm

all: test_coulomb Coulomb



test_coulomb:
	nvcc -o test_coulomb_kernel.exe test_coulomb_kernel.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm
	nvcc -o test_coulomb_kernel2.exe test_coulomb_kernel.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DVERSION2
	nvcc -o test_coulomb_kernel3.exe test_coulomb_kernel.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DVERSION3

batch:
	nvcc -o coulomb_batch1.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=1
	nvcc -o coulomb_batch2.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=2
	nvcc -o coulomb_batch4.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=4
	nvcc -o coulomb_batch8.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=8

Coulomb:
	$(NVCC) --shared -o libcoulomb.so Coulomb.cu $(NVCC_FLAGS) $(NVCC_INC) $(NVCC_LIBS) -DVERBOSE
	$(NVCC) -o test_class.exe test_class.cpp $(NVCC_FLAGS) $(NVCC_INC) -Xlinker -rpath=/home/konrad/Pulpit/CUDA/CoulombComplex -L/home/konrad/Pulpit/CUDA/CoulombComplex -lcoulomb $(NVCC_LIBS) -DVERBOSE




purge:
	@rm *.o *.reg.c *.cudafe* *.i *.ii *.fatbin *.fatbin.c *.cubin *.module_id

clean: purge
	@rm *.exe *.so *.ptx
