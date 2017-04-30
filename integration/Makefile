# GPU COMPUTE CAPABILITY
GPU_ARCH = -gencode arch=compute_52,code=compute_52


# C COMPILATION
CC         = gcc
CC_FLAGS   = -Wall -Wundef -m64 -march=native -mtune=native -O3 -msse4 -ftree-vectorize -ftree-vectorizer-verbose=1 -fopenmp -fPIC
CC_INC     = -I/usr/local/cuda/include -I/usr/local/cuda/samples/common/inc -I.
CC_DEFS    = -DNX=$(NX) -DNY=$(NY) -DNZ=$(NZ)

# C++ COMPILATION
CXX        = g++
CXX_FLAGS  = -Wall -Wundef -m64 -march=native -mtune=native -O3 -msse4 -ftree-vectorize -fopenmp -fPIC
CXX_INC    = -I/usr/local/cuda/include -I/usr/local/cuda/samples/common/inc -I.
CXX_DEFS   = -DNX=$(NX) -DNY=$(NY) -DNZ=$(NZ)

# CUDA COMPILATION
NVCC       = /usr/local/cuda/bin/nvcc
NVCC_FLAGS = -m64 -O3 $(GPU_ARCH) -Xcudafe "--diag_suppress=declared_but_not_referenced --diag_suppress=set_but_not_used" -Xcompiler "-fPIC -Wall -m64 -march=native -mtune=native -O3 -msse4 -ftree-vectorize  -fopenmp"
NVCC_INC   = -I/usr/local/cuda/include -I/usr/local/cuda/samples/common/inc -I.
NVCC_DEFS  = -DNX=$(NX) -DNY=$(NY) -DNZ=$(NZ)

# LINKING
LD         = /usr/local/cuda/bin/nvcc
LD_FLAGS   = $(GPU_ARCH)
LIBS       = -L./usr/local/cuda/lib64 -lcudart -lcufft -lcublas -lgomp -lpthread -lm


# PROGRAMS
NORM      = norm.exe
EXPEC     = expected_val.exe
REDUCE    = reduce_test.exe

all: $(NORM) $(EXPEC) $(REDUCE)

expec:  $(EXPEC)

reduce: $(REDUCE)

$(NORM):
	$(NVCC) -c test_norm.cu    $(NVCC_FLAGS) $(NVCC_INC) --keep --keep-dir ./test_norm_keep
	$(LD)   -o $@  test_norm.o $(LD_FLAGS) $(LIBS)
	@rm *.o


$(EXPEC):
	$(NVCC) -c expected_val.cu    $(NVCC_FLAGS) $(NVCC_INC) --keep --keep-dir ./expected_val_keep
	$(LD)   -o $@  expected_val.o $(LD_FLAGS) $(LIBS)
	@rm *.o


$(REDUCE):
	$(NVCC) -c reduce_test.cu    $(NVCC_FLAGS) $(NVCC_INC) --keep --keep-dir ./reduce_test_keep
	$(LD)   -o $@  reduce_test.o $(LD_FLAGS) $(LIBS)
	@rm *.o




clean:
	@rm *.exe
