LIB_PATH =/home/konrad/Pulpit/CUDA/VC_spherical_cutoff

# cuda compiler
GPU_ARCH = -gencode arch=compute_52,code=sm_52

NVCC      = /usr/local/cuda/bin/nvcc
NVCC_FLAGS= $(GPU_ARCH) -Xcudafe "--diag_suppress=declared_but_not_referenced --diag_suppress=set_but_not_used" -Xcompiler "-fPIC -m64"
NVCC_INC  = -I/usr/local/cuda/include -I/usr/local/cuda/samples/common/inc -I.
NVCC_DEFS = -DNX=$(NX) -DNY=$(NY) -DNZ=$(NZ) -DINTERACTIONS=$(INTERACTIONS) -DVEXT=$(VEXT)
NVCC_LIBS = -L/usr/local/cuda/lib64 -lcudart -lcudadevrt -lcufft -lm

all: coulomb



batch:
	nvcc -o coulomb_batch1.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=1
	nvcc -o coulomb_batch2.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=2
	nvcc -o coulomb_batch4.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=4
	nvcc -o coulomb_batch8.exe test_coulomb_kernel2.cu -O3 -Xcompiler "-fPIC -m64" -I. -I/usr/local/cuda/include -L/usr/local/cuda/lib64 -lcudart -lm -DBATCH_FRAC=8

coulomb:
	$(NVCC) --shared -o libcoulomb.so $(LIB_PATH)/Coulomb/Coulomb.cu $(NVCC_FLAGS) $(NVCC_INC) $(NVCC_LIBS) -DVERBOSE --keep --keep-dir ./test_class_keep #-DNX=96 -DNY=38 -DNZ=36
	$(NVCC) -o test_class.exe test_class.cu $(NVCC_FLAGS) $(NVCC_INC) -Xlinker -rpath=$(LIB_PATH) -L$(LIB_PATH) -lcoulomb $(NVCC_LIBS) -DVERBOSE #-DNX=96 -DNY=38 -DNZ=36
	#nvprof   --normalized-time-unit ms --profile-api-trace none --log-file ./text_class.profile --csv ./test_class.exe
	nvprof   --normalized-time-unit ms --profile-api-trace none ./test_class.exe




clean:
	@rm *.exe *.so