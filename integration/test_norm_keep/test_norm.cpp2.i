# 1 "./test_norm_keep/test_norm.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./test_norm_keep/test_norm.cudafe1.gpu"
typedef char __nv_bool;
struct _Complex_double;
# 1482 "/usr/local/cuda/include/driver_types.h"
struct CUstream_st;
# 54 "/usr/local/cuda/include/library_types.h"
enum cudaDataType_t {
# 56 "/usr/local/cuda/include/library_types.h"
CUDA_R_16F = 2,
# 57 "/usr/local/cuda/include/library_types.h"
CUDA_C_16F = 6,
# 58 "/usr/local/cuda/include/library_types.h"
CUDA_R_32F = 0,
# 59 "/usr/local/cuda/include/library_types.h"
CUDA_C_32F = 4,
# 60 "/usr/local/cuda/include/library_types.h"
CUDA_R_64F = 1,
# 61 "/usr/local/cuda/include/library_types.h"
CUDA_C_64F = 5,
# 62 "/usr/local/cuda/include/library_types.h"
CUDA_R_8I = 3,
# 63 "/usr/local/cuda/include/library_types.h"
CUDA_C_8I = 7,
# 64 "/usr/local/cuda/include/library_types.h"
CUDA_R_8U,
# 65 "/usr/local/cuda/include/library_types.h"
CUDA_C_8U,
# 66 "/usr/local/cuda/include/library_types.h"
CUDA_R_32I,
# 67 "/usr/local/cuda/include/library_types.h"
CUDA_C_32I,
# 68 "/usr/local/cuda/include/library_types.h"
CUDA_R_32U,
# 69 "/usr/local/cuda/include/library_types.h"
CUDA_C_32U};
# 73 "/usr/local/cuda/include/library_types.h"
enum libraryPropertyType_t {
# 75 "/usr/local/cuda/include/library_types.h"
MAJOR_VERSION,
# 76 "/usr/local/cuda/include/library_types.h"
MINOR_VERSION,
# 77 "/usr/local/cuda/include/library_types.h"
PATCH_LEVEL};
# 176 "/usr/include/libio.h" 3

# 176 "/usr/include/libio.h" 3
enum __codecvt_result {
# 178 "/usr/include/libio.h" 3
__codecvt_ok,
# 179 "/usr/include/libio.h" 3
__codecvt_partial,
# 180 "/usr/include/libio.h" 3
__codecvt_error,
# 181 "/usr/include/libio.h" 3
__codecvt_noconv};
# 241 "/usr/include/libio.h" 3
struct _IO_FILE;
# 51 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
enum idtype_t {
# 52 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_ALL,
# 53 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PID,
# 54 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
P_PGID};
# 210 "/usr/include/math.h" 3
enum _ZUt_ {
# 211 "/usr/include/math.h" 3
FP_NAN,
# 214 "/usr/include/math.h" 3
FP_INFINITE,
# 217 "/usr/include/math.h" 3
FP_ZERO,
# 220 "/usr/include/math.h" 3
FP_SUBNORMAL,
# 223 "/usr/include/math.h" 3
FP_NORMAL};
# 348 "/usr/include/math.h" 3
enum _LIB_VERSION_TYPE {
# 349 "/usr/include/math.h" 3
_IEEE_ = (-1),
# 350 "/usr/include/math.h" 3
_SVID_,
# 351 "/usr/include/math.h" 3
_XOPEN_,
# 352 "/usr/include/math.h" 3
_POSIX_,
# 353 "/usr/include/math.h" 3
_ISOC_};
# 271 "/usr/local/cuda/include/cuda.h"

# 271 "/usr/local/cuda/include/cuda.h"
enum CUipcMem_flags_enum {
# 272 "/usr/local/cuda/include/cuda.h"
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1};
# 280 "/usr/local/cuda/include/cuda.h"
enum CUmemAttach_flags_enum {
# 281 "/usr/local/cuda/include/cuda.h"
CU_MEM_ATTACH_GLOBAL = 1,
# 282 "/usr/local/cuda/include/cuda.h"
CU_MEM_ATTACH_HOST,
# 283 "/usr/local/cuda/include/cuda.h"
CU_MEM_ATTACH_SINGLE = 4};
# 289 "/usr/local/cuda/include/cuda.h"
enum CUctx_flags_enum {
# 290 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_AUTO,
# 291 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_SPIN,
# 292 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_YIELD,
# 293 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_BLOCKING_SYNC = 4,
# 294 "/usr/local/cuda/include/cuda.h"
CU_CTX_BLOCKING_SYNC = 4,
# 297 "/usr/local/cuda/include/cuda.h"
CU_CTX_SCHED_MASK = 7,
# 298 "/usr/local/cuda/include/cuda.h"
CU_CTX_MAP_HOST,
# 299 "/usr/local/cuda/include/cuda.h"
CU_CTX_LMEM_RESIZE_TO_MAX = 16,
# 300 "/usr/local/cuda/include/cuda.h"
CU_CTX_FLAGS_MASK = 31};
# 306 "/usr/local/cuda/include/cuda.h"
enum CUstream_flags_enum {
# 307 "/usr/local/cuda/include/cuda.h"
CU_STREAM_DEFAULT,
# 308 "/usr/local/cuda/include/cuda.h"
CU_STREAM_NON_BLOCKING};
# 334 "/usr/local/cuda/include/cuda.h"
enum CUevent_flags_enum {
# 335 "/usr/local/cuda/include/cuda.h"
CU_EVENT_DEFAULT,
# 336 "/usr/local/cuda/include/cuda.h"
CU_EVENT_BLOCKING_SYNC,
# 337 "/usr/local/cuda/include/cuda.h"
CU_EVENT_DISABLE_TIMING,
# 338 "/usr/local/cuda/include/cuda.h"
CU_EVENT_INTERPROCESS = 4};
# 345 "/usr/local/cuda/include/cuda.h"
enum CUstreamWaitValue_flags_enum {
# 346 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WAIT_VALUE_GEQ,
# 348 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WAIT_VALUE_EQ,
# 349 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WAIT_VALUE_AND,
# 350 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WAIT_VALUE_FLUSH = 1073741824};
# 362 "/usr/local/cuda/include/cuda.h"
enum CUstreamWriteValue_flags_enum {
# 363 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WRITE_VALUE_DEFAULT,
# 364 "/usr/local/cuda/include/cuda.h"
CU_STREAM_WRITE_VALUE_NO_MEMORY_BARRIER};
# 375 "/usr/local/cuda/include/cuda.h"
enum CUstreamBatchMemOpType_enum {
# 376 "/usr/local/cuda/include/cuda.h"
CU_STREAM_MEM_OP_WAIT_VALUE_32 = 1,
# 377 "/usr/local/cuda/include/cuda.h"
CU_STREAM_MEM_OP_WRITE_VALUE_32,
# 378 "/usr/local/cuda/include/cuda.h"
CU_STREAM_MEM_OP_FLUSH_REMOTE_WRITES};
# 418 "/usr/local/cuda/include/cuda.h"
enum CUoccupancy_flags_enum {
# 419 "/usr/local/cuda/include/cuda.h"
CU_OCCUPANCY_DEFAULT,
# 420 "/usr/local/cuda/include/cuda.h"
CU_OCCUPANCY_DISABLE_CACHING_OVERRIDE};
# 426 "/usr/local/cuda/include/cuda.h"
enum CUarray_format_enum {
# 427 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT8 = 1,
# 428 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT16,
# 429 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_UNSIGNED_INT32,
# 430 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT8 = 8,
# 431 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT16,
# 432 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_SIGNED_INT32,
# 433 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_HALF = 16,
# 434 "/usr/local/cuda/include/cuda.h"
CU_AD_FORMAT_FLOAT = 32};
# 440 "/usr/local/cuda/include/cuda.h"
enum CUaddress_mode_enum {
# 441 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_WRAP,
# 442 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_CLAMP,
# 443 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_MIRROR,
# 444 "/usr/local/cuda/include/cuda.h"
CU_TR_ADDRESS_MODE_BORDER};
# 450 "/usr/local/cuda/include/cuda.h"
enum CUfilter_mode_enum {
# 451 "/usr/local/cuda/include/cuda.h"
CU_TR_FILTER_MODE_POINT,
# 452 "/usr/local/cuda/include/cuda.h"
CU_TR_FILTER_MODE_LINEAR};
# 458 "/usr/local/cuda/include/cuda.h"
enum CUdevice_attribute_enum {
# 459 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1,
# 460 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X,
# 461 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y,
# 462 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z,
# 463 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X,
# 464 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y,
# 465 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z,
# 466 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK,
# 467 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8,
# 468 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY,
# 469 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_WARP_SIZE,
# 470 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_PITCH,
# 471 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK,
# 472 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12,
# 473 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CLOCK_RATE,
# 474 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT,
# 475 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP,
# 476 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT,
# 477 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT,
# 478 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_INTEGRATED,
# 479 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY,
# 480 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE,
# 481 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH,
# 482 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH,
# 483 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT,
# 484 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH,
# 485 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT,
# 486 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH,
# 487 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH,
# 488 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT,
# 489 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS,
# 490 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27,
# 491 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT,
# 492 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES,
# 493 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT,
# 494 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS,
# 495 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ECC_ENABLED,
# 496 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID,
# 497 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID,
# 498 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TCC_DRIVER,
# 499 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE,
# 500 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH,
# 501 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE,
# 502 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR,
# 503 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT,
# 504 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING,
# 505 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH,
# 506 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS,
# 507 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER,
# 508 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH,
# 509 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT,
# 510 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE,
# 511 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE,
# 512 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE,
# 513 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID,
# 514 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT,
# 515 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH,
# 516 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH,
# 517 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS,
# 518 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH,
# 519 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH,
# 520 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT,
# 521 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH,
# 522 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT,
# 523 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH,
# 524 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH,
# 525 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS,
# 526 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH,
# 527 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT,
# 528 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS,
# 529 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH,
# 530 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH,
# 531 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS,
# 532 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH,
# 533 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH,
# 534 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT,
# 535 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH,
# 536 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_WIDTH,
# 537 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_HEIGHT,
# 538 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR,
# 539 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR,
# 540 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_MIPMAPPED_WIDTH,
# 541 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_STREAM_PRIORITIES_SUPPORTED,
# 542 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_GLOBAL_L1_CACHE_SUPPORTED,
# 543 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_LOCAL_L1_CACHE_SUPPORTED,
# 544 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_MULTIPROCESSOR,
# 545 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_MULTIPROCESSOR,
# 546 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MANAGED_MEMORY,
# 547 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD,
# 548 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD_GROUP_ID,
# 549 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_HOST_NATIVE_ATOMIC_SUPPORTED,
# 550 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_SINGLE_TO_DOUBLE_PRECISION_PERF_RATIO,
# 551 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_ACCESS,
# 552 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CONCURRENT_MANAGED_ACCESS,
# 553 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_COMPUTE_PREEMPTION_SUPPORTED,
# 554 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_CAN_USE_HOST_POINTER_FOR_REGISTERED_MEM,
# 555 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_ATTRIBUTE_MAX};
# 577 "/usr/local/cuda/include/cuda.h"
enum CUpointer_attribute_enum {
# 578 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_CONTEXT = 1,
# 579 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_MEMORY_TYPE,
# 580 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_DEVICE_POINTER,
# 581 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_HOST_POINTER,
# 582 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_P2P_TOKENS,
# 583 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_SYNC_MEMOPS,
# 584 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_BUFFER_ID,
# 585 "/usr/local/cuda/include/cuda.h"
CU_POINTER_ATTRIBUTE_IS_MANAGED};
# 591 "/usr/local/cuda/include/cuda.h"
enum CUfunction_attribute_enum {
# 597 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK,
# 604 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES,
# 610 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES,
# 615 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES,
# 620 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_NUM_REGS,
# 629 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_PTX_VERSION,
# 638 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_BINARY_VERSION,
# 644 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_CACHE_MODE_CA,
# 646 "/usr/local/cuda/include/cuda.h"
CU_FUNC_ATTRIBUTE_MAX};
# 652 "/usr/local/cuda/include/cuda.h"
enum CUfunc_cache_enum {
# 653 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_NONE,
# 654 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_SHARED,
# 655 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_L1,
# 656 "/usr/local/cuda/include/cuda.h"
CU_FUNC_CACHE_PREFER_EQUAL};
# 662 "/usr/local/cuda/include/cuda.h"
enum CUsharedconfig_enum {
# 663 "/usr/local/cuda/include/cuda.h"
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE,
# 664 "/usr/local/cuda/include/cuda.h"
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE,
# 665 "/usr/local/cuda/include/cuda.h"
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE};
# 671 "/usr/local/cuda/include/cuda.h"
enum CUmemorytype_enum {
# 672 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_HOST = 1,
# 673 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_DEVICE,
# 674 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_ARRAY,
# 675 "/usr/local/cuda/include/cuda.h"
CU_MEMORYTYPE_UNIFIED};
# 681 "/usr/local/cuda/include/cuda.h"
enum CUcomputemode_enum {
# 682 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_DEFAULT,
# 683 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_PROHIBITED = 2,
# 684 "/usr/local/cuda/include/cuda.h"
CU_COMPUTEMODE_EXCLUSIVE_PROCESS};
# 690 "/usr/local/cuda/include/cuda.h"
enum CUmem_advise_enum {
# 691 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_SET_READ_MOSTLY = 1,
# 692 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_UNSET_READ_MOSTLY,
# 693 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_SET_PREFERRED_LOCATION,
# 694 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_UNSET_PREFERRED_LOCATION,
# 695 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_SET_ACCESSED_BY,
# 696 "/usr/local/cuda/include/cuda.h"
CU_MEM_ADVISE_UNSET_ACCESSED_BY};
# 699 "/usr/local/cuda/include/cuda.h"
enum CUmem_range_attribute_enum {
# 700 "/usr/local/cuda/include/cuda.h"
CU_MEM_RANGE_ATTRIBUTE_READ_MOSTLY = 1,
# 701 "/usr/local/cuda/include/cuda.h"
CU_MEM_RANGE_ATTRIBUTE_PREFERRED_LOCATION,
# 702 "/usr/local/cuda/include/cuda.h"
CU_MEM_RANGE_ATTRIBUTE_ACCESSED_BY,
# 703 "/usr/local/cuda/include/cuda.h"
CU_MEM_RANGE_ATTRIBUTE_LAST_PREFETCH_LOCATION};
# 709 "/usr/local/cuda/include/cuda.h"
enum CUjit_option_enum {
# 716 "/usr/local/cuda/include/cuda.h"
CU_JIT_MAX_REGISTERS,
# 731 "/usr/local/cuda/include/cuda.h"
CU_JIT_THREADS_PER_BLOCK,
# 739 "/usr/local/cuda/include/cuda.h"
CU_JIT_WALL_TIME,
# 748 "/usr/local/cuda/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER,
# 757 "/usr/local/cuda/include/cuda.h"
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES,
# 766 "/usr/local/cuda/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER,
# 775 "/usr/local/cuda/include/cuda.h"
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES,
# 783 "/usr/local/cuda/include/cuda.h"
CU_JIT_OPTIMIZATION_LEVEL,
# 791 "/usr/local/cuda/include/cuda.h"
CU_JIT_TARGET_FROM_CUCONTEXT,
# 799 "/usr/local/cuda/include/cuda.h"
CU_JIT_TARGET,
# 808 "/usr/local/cuda/include/cuda.h"
CU_JIT_FALLBACK_STRATEGY,
# 816 "/usr/local/cuda/include/cuda.h"
CU_JIT_GENERATE_DEBUG_INFO,
# 823 "/usr/local/cuda/include/cuda.h"
CU_JIT_LOG_VERBOSE,
# 830 "/usr/local/cuda/include/cuda.h"
CU_JIT_GENERATE_LINE_INFO,
# 838 "/usr/local/cuda/include/cuda.h"
CU_JIT_CACHE_MODE,
# 843 "/usr/local/cuda/include/cuda.h"
CU_JIT_NEW_SM3X_OPT,
# 844 "/usr/local/cuda/include/cuda.h"
CU_JIT_FAST_COMPILE,
# 846 "/usr/local/cuda/include/cuda.h"
CU_JIT_NUM_OPTIONS};
# 853 "/usr/local/cuda/include/cuda.h"
enum CUjit_target_enum {
# 855 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_10 = 10,
# 856 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_11,
# 857 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_12,
# 858 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_13,
# 859 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_20 = 20,
# 860 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_21,
# 861 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_30 = 30,
# 862 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_32 = 32,
# 863 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_35 = 35,
# 864 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_37 = 37,
# 865 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_50 = 50,
# 866 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_52 = 52,
# 867 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_53,
# 868 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_60 = 60,
# 869 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_61,
# 870 "/usr/local/cuda/include/cuda.h"
CU_TARGET_COMPUTE_62};
# 876 "/usr/local/cuda/include/cuda.h"
enum CUjit_fallback_enum {
# 878 "/usr/local/cuda/include/cuda.h"
CU_PREFER_PTX,
# 880 "/usr/local/cuda/include/cuda.h"
CU_PREFER_BINARY};
# 887 "/usr/local/cuda/include/cuda.h"
enum CUjit_cacheMode_enum {
# 889 "/usr/local/cuda/include/cuda.h"
CU_JIT_CACHE_OPTION_NONE,
# 890 "/usr/local/cuda/include/cuda.h"
CU_JIT_CACHE_OPTION_CG,
# 891 "/usr/local/cuda/include/cuda.h"
CU_JIT_CACHE_OPTION_CA};
# 897 "/usr/local/cuda/include/cuda.h"
enum CUjitInputType_enum {
# 903 "/usr/local/cuda/include/cuda.h"
CU_JIT_INPUT_CUBIN,
# 909 "/usr/local/cuda/include/cuda.h"
CU_JIT_INPUT_PTX,
# 915 "/usr/local/cuda/include/cuda.h"
CU_JIT_INPUT_FATBINARY,
# 921 "/usr/local/cuda/include/cuda.h"
CU_JIT_INPUT_OBJECT,
# 927 "/usr/local/cuda/include/cuda.h"
CU_JIT_INPUT_LIBRARY,
# 929 "/usr/local/cuda/include/cuda.h"
CU_JIT_NUM_INPUT_TYPES};
# 939 "/usr/local/cuda/include/cuda.h"
enum CUgraphicsRegisterFlags_enum {
# 940 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_NONE,
# 941 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY,
# 942 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD,
# 943 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4,
# 944 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8};
# 950 "/usr/local/cuda/include/cuda.h"
enum CUgraphicsMapResourceFlags_enum {
# 951 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE,
# 952 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY,
# 953 "/usr/local/cuda/include/cuda.h"
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD};
# 959 "/usr/local/cuda/include/cuda.h"
enum CUarray_cubemap_face_enum {
# 960 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_X,
# 961 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_X,
# 962 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Y,
# 963 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Y,
# 964 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_POSITIVE_Z,
# 965 "/usr/local/cuda/include/cuda.h"
CU_CUBEMAP_FACE_NEGATIVE_Z};
# 971 "/usr/local/cuda/include/cuda.h"
enum CUlimit_enum {
# 972 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_STACK_SIZE,
# 973 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_PRINTF_FIFO_SIZE,
# 974 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_MALLOC_HEAP_SIZE,
# 975 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_DEV_RUNTIME_SYNC_DEPTH,
# 976 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_DEV_RUNTIME_PENDING_LAUNCH_COUNT,
# 977 "/usr/local/cuda/include/cuda.h"
CU_LIMIT_MAX};
# 983 "/usr/local/cuda/include/cuda.h"
enum CUresourcetype_enum {
# 984 "/usr/local/cuda/include/cuda.h"
CU_RESOURCE_TYPE_ARRAY,
# 985 "/usr/local/cuda/include/cuda.h"
CU_RESOURCE_TYPE_MIPMAPPED_ARRAY,
# 986 "/usr/local/cuda/include/cuda.h"
CU_RESOURCE_TYPE_LINEAR,
# 987 "/usr/local/cuda/include/cuda.h"
CU_RESOURCE_TYPE_PITCH2D};
# 993 "/usr/local/cuda/include/cuda.h"
enum cudaError_enum {
# 999 "/usr/local/cuda/include/cuda.h"
CUDA_SUCCESS,
# 1005 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_VALUE,
# 1011 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_OUT_OF_MEMORY,
# 1017 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_INITIALIZED,
# 1022 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_DEINITIALIZED,
# 1029 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_DISABLED,
# 1037 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_NOT_INITIALIZED,
# 1044 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STARTED,
# 1051 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PROFILER_ALREADY_STOPPED,
# 1057 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NO_DEVICE = 100,
# 1063 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_DEVICE,
# 1070 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_IMAGE = 200,
# 1080 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_CONTEXT,
# 1089 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_CURRENT,
# 1094 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_MAP_FAILED = 205,
# 1099 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNMAP_FAILED,
# 1105 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ARRAY_IS_MAPPED,
# 1110 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ALREADY_MAPPED,
# 1118 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NO_BINARY_FOR_GPU,
# 1123 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ALREADY_ACQUIRED,
# 1128 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED,
# 1134 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_ARRAY,
# 1140 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_MAPPED_AS_POINTER,
# 1146 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ECC_UNCORRECTABLE,
# 1152 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNSUPPORTED_LIMIT,
# 1159 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_ALREADY_IN_USE,
# 1165 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_UNSUPPORTED,
# 1170 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_PTX,
# 1175 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_GRAPHICS_CONTEXT,
# 1181 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NVLINK_UNCORRECTABLE,
# 1186 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_SOURCE = 300,
# 1191 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_FILE_NOT_FOUND,
# 1196 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND,
# 1201 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED,
# 1206 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_OPERATING_SYSTEM,
# 1212 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_HANDLE = 400,
# 1218 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_FOUND = 500,
# 1226 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_READY = 600,
# 1235 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ILLEGAL_ADDRESS = 700,
# 1246 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES,
# 1257 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_TIMEOUT,
# 1263 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING,
# 1270 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED,
# 1277 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED,
# 1283 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708,
# 1290 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_CONTEXT_IS_DESTROYED,
# 1298 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ASSERT,
# 1305 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_TOO_MANY_PEERS,
# 1311 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED,
# 1317 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED,
# 1326 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_HARDWARE_STACK_ERROR,
# 1334 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_ILLEGAL_INSTRUCTION,
# 1343 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_MISALIGNED_ADDRESS,
# 1354 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_ADDRESS_SPACE,
# 1362 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_INVALID_PC,
# 1372 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_LAUNCH_FAILED,
# 1378 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_PERMITTED = 800,
# 1384 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_NOT_SUPPORTED,
# 1389 "/usr/local/cuda/include/cuda.h"
CUDA_ERROR_UNKNOWN = 999};
# 1395 "/usr/local/cuda/include/cuda.h"
enum CUdevice_P2PAttribute_enum {
# 1396 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_P2P_ATTRIBUTE_PERFORMANCE_RANK = 1,
# 1397 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_P2P_ATTRIBUTE_ACCESS_SUPPORTED,
# 1398 "/usr/local/cuda/include/cuda.h"
CU_DEVICE_P2P_ATTRIBUTE_NATIVE_ATOMIC_SUPPORTED};
# 1650 "/usr/local/cuda/include/cuda.h"
enum CUresourceViewFormat_enum {
# 1652 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_NONE,
# 1653 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_1X8,
# 1654 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_2X8,
# 1655 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_4X8,
# 1656 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_1X8,
# 1657 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_2X8,
# 1658 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_4X8,
# 1659 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_1X16,
# 1660 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_2X16,
# 1661 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_4X16,
# 1662 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_1X16,
# 1663 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_2X16,
# 1664 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_4X16,
# 1665 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_1X32,
# 1666 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_2X32,
# 1667 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UINT_4X32,
# 1668 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_1X32,
# 1669 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_2X32,
# 1670 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SINT_4X32,
# 1671 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_1X16,
# 1672 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_2X16,
# 1673 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_4X16,
# 1674 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_1X32,
# 1675 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_2X32,
# 1676 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_FLOAT_4X32,
# 1677 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC1,
# 1678 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC2,
# 1679 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC3,
# 1680 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC4,
# 1681 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SIGNED_BC4,
# 1682 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC5,
# 1683 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SIGNED_BC5,
# 1684 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC6H,
# 1685 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_SIGNED_BC6H,
# 1686 "/usr/local/cuda/include/cuda.h"
CU_RES_VIEW_FORMAT_UNSIGNED_BC7};
# 47 "/usr/include/ctype.h" 3

# 47 "/usr/include/ctype.h" 3
enum _ZUt0_ {
# 48 "/usr/include/ctype.h" 3
_ISupper = 256,
# 49 "/usr/include/ctype.h" 3
_ISlower = 512,
# 50 "/usr/include/ctype.h" 3
_ISalpha = 1024,
# 51 "/usr/include/ctype.h" 3
_ISdigit = 2048,
# 52 "/usr/include/ctype.h" 3
_ISxdigit = 4096,
# 53 "/usr/include/ctype.h" 3
_ISspace = 8192,
# 54 "/usr/include/ctype.h" 3
_ISprint = 16384,
# 55 "/usr/include/ctype.h" 3
_ISgraph = 32768,
# 56 "/usr/include/ctype.h" 3
_ISblank = 1,
# 57 "/usr/include/ctype.h" 3
_IScntrl,
# 58 "/usr/include/ctype.h" 3
_ISpunct = 4,
# 59 "/usr/include/ctype.h" 3
_ISalnum = 8};
# 33 "/usr/include/pthread.h" 3
enum _ZUt1_ {
# 34 "/usr/include/pthread.h" 3
PTHREAD_CREATE_JOINABLE,
# 36 "/usr/include/pthread.h" 3
PTHREAD_CREATE_DETACHED};
# 43 "/usr/include/pthread.h" 3
enum _ZUt2_ {
# 44 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_TIMED_NP,
# 45 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_RECURSIVE_NP,
# 46 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ERRORCHECK_NP,
# 47 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ADAPTIVE_NP,
# 50 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_NORMAL = 0,
# 51 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_RECURSIVE,
# 52 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ERRORCHECK,
# 53 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_DEFAULT = 0,
# 57 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_FAST_NP = 0};
# 65 "/usr/include/pthread.h" 3
enum _ZUt3_ {
# 66 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_STALLED,
# 67 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_STALLED_NP = 0,
# 68 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ROBUST,
# 69 "/usr/include/pthread.h" 3
PTHREAD_MUTEX_ROBUST_NP = 1};
# 77 "/usr/include/pthread.h" 3
enum _ZUt4_ {
# 78 "/usr/include/pthread.h" 3
PTHREAD_PRIO_NONE,
# 79 "/usr/include/pthread.h" 3
PTHREAD_PRIO_INHERIT,
# 80 "/usr/include/pthread.h" 3
PTHREAD_PRIO_PROTECT};
# 115 "/usr/include/pthread.h" 3
enum _ZUt5_ {
# 116 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_READER_NP,
# 117 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_WRITER_NP,
# 118 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
# 119 "/usr/include/pthread.h" 3
PTHREAD_RWLOCK_DEFAULT_NP = 0};
# 156 "/usr/include/pthread.h" 3
enum _ZUt6_ {
# 157 "/usr/include/pthread.h" 3
PTHREAD_INHERIT_SCHED,
# 159 "/usr/include/pthread.h" 3
PTHREAD_EXPLICIT_SCHED};
# 166 "/usr/include/pthread.h" 3
enum _ZUt7_ {
# 167 "/usr/include/pthread.h" 3
PTHREAD_SCOPE_SYSTEM,
# 169 "/usr/include/pthread.h" 3
PTHREAD_SCOPE_PROCESS};
# 176 "/usr/include/pthread.h" 3
enum _ZUt8_ {
# 177 "/usr/include/pthread.h" 3
PTHREAD_PROCESS_PRIVATE,
# 179 "/usr/include/pthread.h" 3
PTHREAD_PROCESS_SHARED};
# 200 "/usr/include/pthread.h" 3
enum _ZUt9_ {
# 201 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_ENABLE,
# 203 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_DISABLE};
# 207 "/usr/include/pthread.h" 3
enum _ZUt10_ {
# 208 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_DEFERRED,
# 210 "/usr/include/pthread.h" 3
PTHREAD_CANCEL_ASYNCHRONOUS};
# 72 "/usr/include/wctype.h" 3
enum _ZUt11_ {
# 73 "/usr/include/wctype.h" 3
__ISwupper,
# 74 "/usr/include/wctype.h" 3
__ISwlower,
# 75 "/usr/include/wctype.h" 3
__ISwalpha,
# 76 "/usr/include/wctype.h" 3
__ISwdigit,
# 77 "/usr/include/wctype.h" 3
__ISwxdigit,
# 78 "/usr/include/wctype.h" 3
__ISwspace,
# 79 "/usr/include/wctype.h" 3
__ISwprint,
# 80 "/usr/include/wctype.h" 3
__ISwgraph,
# 81 "/usr/include/wctype.h" 3
__ISwblank,
# 82 "/usr/include/wctype.h" 3
__ISwcntrl,
# 83 "/usr/include/wctype.h" 3
__ISwpunct,
# 84 "/usr/include/wctype.h" 3
__ISwalnum,
# 86 "/usr/include/wctype.h" 3
_ISwupper = 16777216,
# 87 "/usr/include/wctype.h" 3
_ISwlower = 33554432,
# 88 "/usr/include/wctype.h" 3
_ISwalpha = 67108864,
# 89 "/usr/include/wctype.h" 3
_ISwdigit = 134217728,
# 90 "/usr/include/wctype.h" 3
_ISwxdigit = 268435456,
# 91 "/usr/include/wctype.h" 3
_ISwspace = 536870912,
# 92 "/usr/include/wctype.h" 3
_ISwprint = 1073741824,
# 93 "/usr/include/wctype.h" 3
_ISwgraph = (-2147483647-1),
# 94 "/usr/include/wctype.h" 3
_ISwblank = 65536,
# 95 "/usr/include/wctype.h" 3
_ISwcntrl = 131072,
# 96 "/usr/include/wctype.h" 3
_ISwpunct = 262144,
# 97 "/usr/include/wctype.h" 3
_ISwalnum = 524288};
# 78 "/usr/local/cuda/include/cufft.h"

# 78 "/usr/local/cuda/include/cufft.h"
enum cufftResult_t {
# 79 "/usr/local/cuda/include/cufft.h"
CUFFT_SUCCESS,
# 80 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_PLAN,
# 81 "/usr/local/cuda/include/cufft.h"
CUFFT_ALLOC_FAILED,
# 82 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_TYPE,
# 83 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_VALUE,
# 84 "/usr/local/cuda/include/cufft.h"
CUFFT_INTERNAL_ERROR,
# 85 "/usr/local/cuda/include/cufft.h"
CUFFT_EXEC_FAILED,
# 86 "/usr/local/cuda/include/cufft.h"
CUFFT_SETUP_FAILED,
# 87 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_SIZE,
# 88 "/usr/local/cuda/include/cufft.h"
CUFFT_UNALIGNED_DATA,
# 89 "/usr/local/cuda/include/cufft.h"
CUFFT_INCOMPLETE_PARAMETER_LIST,
# 90 "/usr/local/cuda/include/cufft.h"
CUFFT_INVALID_DEVICE,
# 91 "/usr/local/cuda/include/cufft.h"
CUFFT_PARSE_ERROR,
# 92 "/usr/local/cuda/include/cufft.h"
CUFFT_NO_WORKSPACE,
# 93 "/usr/local/cuda/include/cufft.h"
CUFFT_NOT_IMPLEMENTED,
# 94 "/usr/local/cuda/include/cufft.h"
CUFFT_LICENSE_ERROR,
# 95 "/usr/local/cuda/include/cufft.h"
CUFFT_NOT_SUPPORTED};
# 121 "/usr/local/cuda/include/cufft.h"
enum cufftType_t {
# 122 "/usr/local/cuda/include/cufft.h"
CUFFT_R2C = 42,
# 123 "/usr/local/cuda/include/cufft.h"
CUFFT_C2R = 44,
# 124 "/usr/local/cuda/include/cufft.h"
CUFFT_C2C = 41,
# 125 "/usr/local/cuda/include/cufft.h"
CUFFT_D2Z = 106,
# 126 "/usr/local/cuda/include/cufft.h"
CUFFT_Z2D = 108,
# 127 "/usr/local/cuda/include/cufft.h"
CUFFT_Z2Z = 105};
# 131 "/usr/local/cuda/include/cufft.h"
enum cufftCompatibility_t {
# 132 "/usr/local/cuda/include/cufft.h"
CUFFT_COMPATIBILITY_FFTW_PADDING = 1};
# 82 "/usr/local/cuda/include/cublas_api.h"
enum cublasStatus_t {
# 83 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_SUCCESS,
# 84 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_NOT_INITIALIZED,
# 85 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_ALLOC_FAILED = 3,
# 86 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_INVALID_VALUE = 7,
# 87 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_ARCH_MISMATCH,
# 88 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_MAPPING_ERROR = 11,
# 89 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_EXECUTION_FAILED = 13,
# 90 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_INTERNAL_ERROR,
# 91 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_NOT_SUPPORTED,
# 92 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_STATUS_LICENSE_ERROR};
# 96 "/usr/local/cuda/include/cublas_api.h"
enum cublasFillMode_t {
# 97 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_FILL_MODE_LOWER,
# 98 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_FILL_MODE_UPPER};
# 101 "/usr/local/cuda/include/cublas_api.h"
enum cublasDiagType_t {
# 102 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_DIAG_NON_UNIT,
# 103 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_DIAG_UNIT};
# 106 "/usr/local/cuda/include/cublas_api.h"
enum cublasSideMode_t {
# 107 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_SIDE_LEFT,
# 108 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_SIDE_RIGHT};
# 112 "/usr/local/cuda/include/cublas_api.h"
enum cublasOperation_t {
# 113 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_OP_N,
# 114 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_OP_T,
# 115 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_OP_C};
# 119 "/usr/local/cuda/include/cublas_api.h"
enum cublasPointerMode_t {
# 120 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_POINTER_MODE_HOST,
# 121 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_POINTER_MODE_DEVICE};
# 124 "/usr/local/cuda/include/cublas_api.h"
enum cublasAtomicsMode_t {
# 125 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_ATOMICS_NOT_ALLOWED,
# 126 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_ATOMICS_ALLOWED};
# 130 "/usr/local/cuda/include/cublas_api.h"
enum cublasGemmAlgo_t {
# 131 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_DFALT = (-1),
# 132 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO0,
# 133 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO1,
# 134 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO2,
# 135 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO3,
# 136 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO4,
# 137 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO5,
# 138 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO6,
# 139 "/usr/local/cuda/include/cublas_api.h"
CUBLAS_GEMM_ALGO7};
# 146 "/usr/local/cuda/include/cublas_api.h"
struct cublasContext;
# 75 "./Integration.hpp"
struct _Z11IntegrationILi128ELi128ELi128EE;
# 117 "/usr/include/c++/5/bits/basic_string.h" 3

# 117 "/usr/include/c++/5/bits/basic_string.h" 3
enum _ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEUt_E {
# 117 "/usr/include/c++/5/bits/basic_string.h" 3
_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEE17_S_local_capacityE = 15};
# 117 "/usr/include/c++/5/bits/basic_string.h" 3
enum _ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEUt_E {
# 117 "/usr/include/c++/5/bits/basic_string.h" 3
_ZNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEE17_S_local_capacityE = 3};
# 60 "/usr/include/c++/5/exception" 3
struct _ZSt9exception;
# 54 "/usr/include/c++/5/new" 3
struct _ZSt9bad_alloc;
# 128 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_voidIvEUt_E {
# 128 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_voidIvE7__valueE = 1};
# 149 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIbEUt_E {
# 149 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIbE7__valueE = 1};
# 156 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIcEUt_E {
# 156 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIcE7__valueE = 1};
# 163 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIaEUt_E {
# 163 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIaE7__valueE = 1};
# 170 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIhEUt_E {
# 170 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIhE7__valueE = 1};
# 178 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIwEUt_E {
# 178 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIwE7__valueE = 1};
# 202 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIsEUt_E {
# 202 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIsE7__valueE = 1};
# 209 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerItEUt_E {
# 209 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerItE7__valueE = 1};
# 216 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIiEUt_E {
# 216 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIiE7__valueE = 1};
# 223 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIjEUt_E {
# 223 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIjE7__valueE = 1};
# 230 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIlEUt_E {
# 230 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIlE7__valueE = 1};
# 237 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerImEUt_E {
# 237 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerImE7__valueE = 1};
# 244 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIxEUt_E {
# 244 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIxE7__valueE = 1};
# 251 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIyEUt_E {
# 251 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIyE7__valueE = 1};
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerInEUt_E {
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerInE7__valueE = 1};
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIoEUt_E {
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIoE7__valueE = 1};
# 298 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIfEUt_E {
# 298 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIfE7__valueE = 1};
# 305 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIdEUt_E {
# 305 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIdE7__valueE = 1};
# 312 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIeEUt_E {
# 312 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIeE7__valueE = 1};
# 380 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIcEUt_E {
# 380 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_charIcE7__valueE = 1};
# 388 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_charIwEUt_E {
# 388 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_charIwE7__valueE = 1};
# 403 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIcEUt_E {
# 403 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIcE7__valueE = 1};
# 410 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIaEUt_E {
# 410 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIaE7__valueE = 1};
# 417 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__is_byteIhEUt_E {
# 417 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__is_byteIhE7__valueE = 1};
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIeEUt_E {
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIeE7__valueE};
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIdEUt_E {
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIdE7__valueE};
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIfEUt_E {
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIfE7__valueE};
# 513 "/usr/include/c++/5/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE;
# 333 "/usr/include/c++/5/bits/locale_classes.h" 3
enum _ZNSt6localeUt_E {
# 333 "/usr/include/c++/5/bits/locale_classes.h" 3
_ZNSt6locale18_S_categories_sizeE = 12};
# 62 "/usr/include/c++/5/bits/locale_classes.h" 3
struct _ZSt6locale;
# 57 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZSt13_Ios_Fmtflags {
# 59 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt12_S_boolalpha = 1,
# 60 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_dec,
# 61 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt8_S_fixed = 4,
# 62 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_hex = 8,
# 63 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt11_S_internal = 16,
# 64 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt7_S_left = 32,
# 65 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_oct = 64,
# 66 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt8_S_right = 128,
# 67 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt13_S_scientific = 256,
# 68 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt11_S_showbase = 512,
# 69 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt12_S_showpoint = 1024,
# 70 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10_S_showpos = 2048,
# 71 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt9_S_skipws = 4096,
# 72 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10_S_unitbuf = 8192,
# 73 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt12_S_uppercase = 16384,
# 74 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt14_S_adjustfield = 176,
# 75 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt12_S_basefield = 74,
# 76 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt13_S_floatfield = 260,
# 77 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_fmtflags_end = 65536,
# 78 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_fmtflags_max = 2147483647,
# 79 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_fmtflags_min = (-2147483647-1)};
# 111 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZSt13_Ios_Openmode {
# 113 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_app = 1,
# 114 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_ate,
# 115 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_bin = 4,
# 116 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt5_S_in = 8,
# 117 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_out = 16,
# 118 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt8_S_trunc = 32,
# 119 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_openmode_end = 65536,
# 120 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_openmode_max = 2147483647,
# 121 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt19_S_ios_openmode_min = (-2147483647-1)};
# 153 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZSt12_Ios_Iostate {
# 155 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10_S_goodbit,
# 156 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt9_S_badbit,
# 157 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt9_S_eofbit,
# 158 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10_S_failbit = 4,
# 159 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt18_S_ios_iostate_end = 65536,
# 160 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt18_S_ios_iostate_max = 2147483647,
# 161 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt18_S_ios_iostate_min = (-2147483647-1)};
# 193 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZSt12_Ios_Seekdir {
# 195 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_beg,
# 196 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_cur,
# 197 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt6_S_end,
# 198 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt18_S_ios_seekdir_end = 65536};
# 487 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZNSt8ios_base5eventE {
# 489 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base11erase_eventE,
# 490 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base11imbue_eventE,
# 491 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base13copyfmt_eventE};
# 528 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE;
# 567 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE;
# 579 "/usr/include/c++/5/bits/ios_base.h" 3
enum _ZNSt8ios_baseUt_E {
# 579 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base18_S_local_word_sizeE = 8};
# 601 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE;
# 228 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZSt8ios_base;
# 1547 "/usr/include/c++/5/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt_E {
# 1548 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base9_S_ominusE,
# 1549 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_oplusE,
# 1550 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oxE,
# 1551 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oXE,
# 1552 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base10_S_odigitsE,
# 1553 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base14_S_odigits_endE = 20,
# 1554 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base11_S_oudigitsE = 20,
# 1555 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base15_S_oudigits_endE = 36,
# 1556 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oeE = 18,
# 1557 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_oEE = 34,
# 1558 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base7_S_oendE = 36};
# 1573 "/usr/include/c++/5/bits/locale_facets.h" 3
enum _ZNSt10__num_baseUt0_E {
# 1574 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base9_S_iminusE,
# 1575 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_iplusE,
# 1576 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_ixE,
# 1577 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_iXE,
# 1578 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base8_S_izeroE,
# 1579 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_ieE = 18,
# 1580 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base5_S_iEE = 24,
# 1581 "/usr/include/c++/5/bits/locale_facets.h" 3
_ZNSt10__num_base7_S_iendE = 26};
# 167 "/usr/include/c++/5/limits" 3
enum _ZSt17float_round_style {
# 169 "/usr/include/c++/5/limits" 3
_ZSt19round_indeterminate = (-1),
# 170 "/usr/include/c++/5/limits" 3
_ZSt17round_toward_zero,
# 171 "/usr/include/c++/5/limits" 3
_ZSt16round_to_nearest,
# 172 "/usr/include/c++/5/limits" 3
_ZSt21round_toward_infinity,
# 173 "/usr/include/c++/5/limits" 3
_ZSt25round_toward_neg_infinity};
# 182 "/usr/include/c++/5/limits" 3
enum _ZSt18float_denorm_style {
# 185 "/usr/include/c++/5/limits" 3
_ZSt20denorm_indeterminate = (-1),
# 187 "/usr/include/c++/5/limits" 3
_ZSt13denorm_absent,
# 189 "/usr/include/c++/5/limits" 3
_ZSt14denorm_present};
# 68 "/usr/include/c++/5/bits/stl_bvector.h" 3
enum _ZStUt_ {
# 68 "/usr/include/c++/5/bits/stl_bvector.h" 3
_ZSt11_S_word_bit = 64};
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIPcEUt_E {
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIPcE7__valueE};
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_integerIPKcEUt_E {
# 138 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_integerIPKcE7__valueE};
# 339 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt20__is_normal_iteratorIPmEUt_E {
# 339 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt20__is_normal_iteratorIPmE7__valueE};
# 290 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt13__is_floatingIiEUt_E {
# 290 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt13__is_floatingIiE7__valueE};
# 98 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEEUt_E {
# 98 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__traitorISt12__is_integerIiESt13__is_floatingIiEE7__valueE = 1};
# 322 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt12__is_pointerIiEUt_E {
# 322 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt12__is_pointerIiE7__valueE};
# 98 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
enum _ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEEUt_E {
# 98 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
_ZNSt9__traitorISt15__is_arithmeticIiESt12__is_pointerIiEE7__valueE = 1};
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"

# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj0EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj0EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj1EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj1EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj2EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj2EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj3EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj3EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj4EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj4EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj5EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj5EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj6EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj6EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj7EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj7EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj8EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj8EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj9EEE;
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj9EEE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE;
# 41 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust6detail21execution_policy_baseINS_6system6detail10sequential3tagEEE;
# 41 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust6detail21execution_policy_baseINS0_5seq_tEEE;
# 30 "/usr/local/cuda/include/thrust/detail/seq.h"
struct _ZN6thrust6detail5seq_tE;
# 52 "/usr/local/cuda/include/thrust/detail/static_assert.h"
enum _ZN6thrust6detail24STATIC_ASSERTION_FAILUREILb1EEUt_E {
# 52 "/usr/local/cuda/include/thrust/detail/static_assert.h"
_ZN6thrust6detail24STATIC_ASSERTION_FAILUREILb1EE5valueE = 1};
# 46 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential16execution_policyINS2_3tagEEE;
# 51 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential3tagE;
# 58 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential16execution_policyINS_6detail5seq_tEEE;
# 354 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/malloc.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail27singleton_on_chip_allocatorE;
# 575 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj3EEE;
# 557 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj2EEE;
# 557 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE;
# 591 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE;
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail12aligned_typeILm8EE4typeE;
# 206 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
union _ZN6thrust6system4cuda6detail5bulk_6detail15aligned_storageILm24ELm8EE4typeE;
# 204 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail15aligned_storageILm24ELm8EEE;
# 190 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail12aligned_typeILm8EEE;
# 31 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/uninitialized.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_13uninitializedINS3_6detail27singleton_on_chip_allocatorEEE;
# 52 "/usr/local/cuda/include/thrust/system/cuda/error.h"
enum _ZN6thrust6system4cuda4errc6errc_tE {
# 56 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc7successE,
# 57 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc21missing_configurationE,
# 58 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc17memory_allocationE,
# 59 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20initialization_errorE,
# 60 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc14launch_failureE,
# 61 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20prior_launch_failureE,
# 62 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc14launch_timeoutE,
# 63 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23launch_out_of_resourcesE,
# 64 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23invalid_device_functionE,
# 65 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc21invalid_configurationE,
# 66 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc14invalid_deviceE,
# 67 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc13invalid_valueE,
# 68 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc19invalid_pitch_valueE,
# 69 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc14invalid_symbolE,
# 70 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc24map_buffer_object_failedE,
# 71 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc26unmap_buffer_object_failedE,
# 72 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20invalid_host_pointerE,
# 73 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22invalid_device_pointerE,
# 74 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc15invalid_textureE,
# 75 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23invalid_texture_bindingE,
# 76 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc26invalid_channel_descriptorE,
# 77 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc24invalid_memcpy_directionE,
# 78 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc25address_of_constant_errorE,
# 79 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20texture_fetch_failedE,
# 80 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc17texture_not_boundE,
# 81 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc21synchronization_errorE,
# 82 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22invalid_filter_settingE,
# 83 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20invalid_norm_settingE,
# 84 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22mixed_device_executionE,
# 85 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22cuda_runtime_unloadingE,
# 86 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc7unknownE,
# 87 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc19not_yet_implementedE,
# 88 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22memory_value_too_largeE,
# 89 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23invalid_resource_handleE,
# 90 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc9not_readyE,
# 91 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc19insufficient_driverE,
# 92 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc27set_on_active_process_errorE,
# 93 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc9no_deviceE = 38,
# 94 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc17ecc_uncorrectableE,
# 97 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc30shared_object_symbol_not_foundE,
# 98 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc25shared_object_init_failedE,
# 99 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc17unsupported_limitE,
# 100 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23duplicate_variable_nameE,
# 101 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22duplicate_texture_nameE,
# 102 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22duplicate_surface_nameE,
# 103 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc19devices_unavailableE,
# 104 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc20invalid_kernel_imageE,
# 105 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc26no_kernel_image_for_deviceE,
# 106 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc27incompatible_driver_contextE,
# 107 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc27peer_access_already_enabledE,
# 108 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23peer_access_not_enabledE,
# 109 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc21device_already_in_useE = 54,
# 110 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc17profiler_disabledE,
# 111 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc16assert_triggeredE = 59,
# 112 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc14too_many_peersE,
# 113 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc30host_memory_already_registeredE,
# 114 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc26host_memory_not_registeredE,
# 115 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc22operating_system_errorE,
# 119 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc23peer_access_unsupportedE,
# 120 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc25launch_max_depth_exceededE,
# 121 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc31launch_file_scoped_texture_usedE,
# 122 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc31launch_file_scoped_surface_usedE,
# 123 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc19sync_depth_exceededE,
# 124 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc33attempted_operation_not_permittedE = 70,
# 125 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc33attempted_operation_not_supportedE,
# 128 "/usr/local/cuda/include/thrust/system/cuda/error.h"
_ZN6thrust6system4cuda4errc15startup_failureE = 127};
# 57 "/usr/local/cuda/include/thrust/system/error_code.h"
enum _ZN6thrust6system4errc6errc_tE {
# 59 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc28address_family_not_supportedE = 9901,
# 60 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14address_in_useE,
# 61 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21address_not_availableE,
# 62 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17already_connectedE,
# 63 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc22argument_list_too_longE = 9946,
# 64 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc22argument_out_of_domainE,
# 65 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc11bad_addressE,
# 66 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19bad_file_descriptorE,
# 67 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc11bad_messageE = 9905,
# 68 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc11broken_pipeE = 9950,
# 69 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18connection_abortedE = 9906,
# 70 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc30connection_already_in_progressE,
# 71 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18connection_refusedE,
# 72 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc16connection_resetE,
# 73 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17cross_device_linkE = 9951,
# 74 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc28destination_address_requiredE = 9910,
# 75 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc23device_or_resource_busyE = 9952,
# 76 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19directory_not_emptyE,
# 77 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc23executable_format_errorE,
# 78 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc11file_existsE,
# 79 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14file_too_largeE,
# 80 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17filename_too_longE,
# 81 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc22function_not_supportedE = 9942,
# 82 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc16host_unreachableE = 9911,
# 83 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18identifier_removedE,
# 84 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21illegal_byte_sequenceE = 9945,
# 85 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc34inappropriate_io_control_operationE = 9958,
# 86 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc11interruptedE,
# 87 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc16invalid_argumentE = 9943,
# 88 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc12invalid_seekE = 9960,
# 89 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc8io_errorE,
# 90 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14is_a_directoryE,
# 91 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc12message_sizeE = 9913,
# 92 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc12network_downE,
# 93 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc13network_resetE,
# 94 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19network_unreachableE,
# 95 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc15no_buffer_spaceE,
# 96 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc16no_child_processE = 9963,
# 97 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc7no_linkE = 9918,
# 98 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17no_lock_availableE = 9964,
# 99 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc20no_message_availableE = 9919,
# 100 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc10no_messageE,
# 101 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18no_protocol_optionE,
# 102 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18no_space_on_deviceE = 9965,
# 103 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19no_stream_resourcesE = 9922,
# 104 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc25no_such_device_or_addressE = 9966,
# 105 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14no_such_deviceE,
# 106 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc25no_such_file_or_directoryE,
# 107 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc15no_such_processE,
# 108 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc15not_a_directoryE,
# 109 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc12not_a_socketE = 9923,
# 110 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc12not_a_streamE,
# 111 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc13not_connectedE,
# 112 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17not_enough_memoryE = 9971,
# 113 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc13not_supportedE = 9926,
# 114 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc18operation_canceledE,
# 115 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21operation_in_progressE,
# 116 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc23operation_not_permittedE = 9972,
# 117 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc23operation_not_supportedE = 9929,
# 118 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21operation_would_blockE,
# 119 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc10owner_deadE,
# 120 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc17permission_deniedE = 9973,
# 121 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14protocol_errorE = 9932,
# 122 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc22protocol_not_supportedE,
# 123 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21read_only_file_systemE = 9974,
# 124 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc29resource_deadlock_would_occurE,
# 125 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc30resource_unavailable_try_againE,
# 126 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19result_out_of_rangeE = 9944,
# 127 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc21state_not_recoverableE = 9934,
# 128 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14stream_timeoutE,
# 129 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14text_file_busyE,
# 130 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc9timed_outE = 9938,
# 131 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc29too_many_files_open_in_systemE = 9977,
# 132 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19too_many_files_openE,
# 133 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc14too_many_linksE,
# 134 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc29too_many_symbolic_link_levelsE = 9939,
# 135 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc15value_too_largeE,
# 136 "/usr/local/cuda/include/thrust/system/error_code.h"
_ZN6thrust6system4errc19wrong_protocol_typeE};
# 72 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust16execution_policyINS_6system6detail10sequential3tagEEE;
# 24 "/usr/local/cuda/include/thrust/detail/tuple.inl"
struct _ZN6thrust9null_typeE;
# 72 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust16execution_policyINS_6detail5seq_tEEE;
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3

# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_;
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3
typedef unsigned long size_t;
# 1 "/usr/local/cuda/include/crt/device_runtime.h" 1 3
# 38 "/usr/local/cuda/include/crt/device_runtime.h" 3
# 1 "/usr/local/cuda/include/host_defines.h" 1 3
# 39 "/usr/local/cuda/include/crt/device_runtime.h" 2 3





typedef __attribute__((device_builtin_texture_type)) unsigned long long __texture_type__;
typedef __attribute__((device_builtin_surface_type)) unsigned long long __surface_type__;
# 196 "/usr/local/cuda/include/crt/device_runtime.h" 3
extern __attribute__((device)) __attribute__((used)) void* malloc(size_t);
extern __attribute__((device)) __attribute__((used)) void free(void*);


static __attribute__((device)) void __nv_sized_free(void *p, size_t sz) { free(p); }
static __attribute__((device)) void __nv_sized_array_free(void *p, size_t sz) { free(p); }


extern __attribute__((device)) void __assertfail(
  const void *message,
  const void *file,
  unsigned int line,
  const void *function,
  size_t charsize);
# 254 "/usr/local/cuda/include/crt/device_runtime.h" 3
static __attribute__((device)) void __assert_fail(
  const char *__assertion,
  const char *__file,
  unsigned int __line,
  const char *__function)
{
  __assertfail(
    (const void *)__assertion,
    (const void *)__file,
                  __line,
    (const void *)__function,
    sizeof(char));
}
# 284 "/usr/local/cuda/include/crt/device_runtime.h" 3
# 1 "/usr/local/cuda/include/builtin_types.h" 1 3
# 56 "/usr/local/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda/include/device_types.h" 1 3
# 53 "/usr/local/cuda/include/device_types.h" 3
# 1 "/usr/local/cuda/include/host_defines.h" 1 3
# 54 "/usr/local/cuda/include/device_types.h" 2 3







enum __attribute__((device_builtin)) cudaRoundMode
{
    cudaRoundNearest,
    cudaRoundZero,
    cudaRoundPosInf,
    cudaRoundMinInf
};
# 57 "/usr/local/cuda/include/builtin_types.h" 2 3


# 1 "/usr/local/cuda/include/driver_types.h" 1 3
# 156 "/usr/local/cuda/include/driver_types.h" 3
enum __attribute__((device_builtin)) cudaError
{





    cudaSuccess = 0,





    cudaErrorMissingConfiguration = 1,





    cudaErrorMemoryAllocation = 2,





    cudaErrorInitializationError = 3,
# 191 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorLaunchFailure = 4,
# 200 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorPriorLaunchFailure = 5,
# 210 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorLaunchTimeout = 6,
# 219 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorLaunchOutOfResources = 7,





    cudaErrorInvalidDeviceFunction = 8,
# 234 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorInvalidConfiguration = 9,





    cudaErrorInvalidDevice = 10,





    cudaErrorInvalidValue = 11,





    cudaErrorInvalidPitchValue = 12,





    cudaErrorInvalidSymbol = 13,




    cudaErrorMapBufferObjectFailed = 14,




    cudaErrorUnmapBufferObjectFailed = 15,





    cudaErrorInvalidHostPointer = 16,





    cudaErrorInvalidDevicePointer = 17,





    cudaErrorInvalidTexture = 18,





    cudaErrorInvalidTextureBinding = 19,






    cudaErrorInvalidChannelDescriptor = 20,





    cudaErrorInvalidMemcpyDirection = 21,
# 315 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorAddressOfConstant = 22,
# 324 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorTextureFetchFailed = 23,
# 333 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorTextureNotBound = 24,
# 342 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorSynchronizationError = 25,





    cudaErrorInvalidFilterSetting = 26,





    cudaErrorInvalidNormSetting = 27,







    cudaErrorMixedDeviceExecution = 28,






    cudaErrorCudartUnloading = 29,




    cudaErrorUnknown = 30,







    cudaErrorNotYetImplemented = 31,
# 391 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorMemoryValueTooLarge = 32,






    cudaErrorInvalidResourceHandle = 33,







    cudaErrorNotReady = 34,






    cudaErrorInsufficientDriver = 35,
# 426 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorSetOnActiveProcess = 36,





    cudaErrorInvalidSurface = 37,





    cudaErrorNoDevice = 38,





    cudaErrorECCUncorrectable = 39,




    cudaErrorSharedObjectSymbolNotFound = 40,




    cudaErrorSharedObjectInitFailed = 41,





    cudaErrorUnsupportedLimit = 42,





    cudaErrorDuplicateVariableName = 43,





    cudaErrorDuplicateTextureName = 44,





    cudaErrorDuplicateSurfaceName = 45,
# 488 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorDevicesUnavailable = 46,




    cudaErrorInvalidKernelImage = 47,







    cudaErrorNoKernelImageForDevice = 48,
# 514 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorIncompatibleDriverContext = 49,






    cudaErrorPeerAccessAlreadyEnabled = 50,






    cudaErrorPeerAccessNotEnabled = 51,





    cudaErrorDeviceAlreadyInUse = 54,






    cudaErrorProfilerDisabled = 55,







    cudaErrorProfilerNotInitialized = 56,






    cudaErrorProfilerAlreadyStarted = 57,






     cudaErrorProfilerAlreadyStopped = 58,







    cudaErrorAssert = 59,






    cudaErrorTooManyPeers = 60,





    cudaErrorHostMemoryAlreadyRegistered = 61,





    cudaErrorHostMemoryNotRegistered = 62,




    cudaErrorOperatingSystem = 63,





    cudaErrorPeerAccessUnsupported = 64,






    cudaErrorLaunchMaxDepthExceeded = 65,







    cudaErrorLaunchFileScopedTex = 66,







    cudaErrorLaunchFileScopedSurf = 67,
# 639 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorSyncDepthExceeded = 68,
# 651 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorLaunchPendingCountExceeded = 69,




    cudaErrorNotPermitted = 70,





    cudaErrorNotSupported = 71,
# 671 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorHardwareStackError = 72,







    cudaErrorIllegalInstruction = 73,
# 688 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorMisalignedAddress = 74,
# 699 "/usr/local/cuda/include/driver_types.h" 3
    cudaErrorInvalidAddressSpace = 75,







    cudaErrorInvalidPc = 76,







    cudaErrorIllegalAddress = 77,





    cudaErrorInvalidPtx = 78,




    cudaErrorInvalidGraphicsContext = 79,





    cudaErrorNvlinkUncorrectable = 80,




    cudaErrorStartupFailure = 0x7f,







    cudaErrorApiFailureBase = 10000
};




enum __attribute__((device_builtin)) cudaChannelFormatKind
{
    cudaChannelFormatKindSigned = 0,
    cudaChannelFormatKindUnsigned = 1,
    cudaChannelFormatKindFloat = 2,
    cudaChannelFormatKindNone = 3
};




struct __attribute__((device_builtin)) cudaChannelFormatDesc
{
    int x;
    int y;
    int z;
    int w;
    enum cudaChannelFormatKind f;
};




typedef struct cudaArray *cudaArray_t;




typedef const struct cudaArray *cudaArray_const_t;

struct cudaArray;




typedef struct cudaMipmappedArray *cudaMipmappedArray_t;




typedef const struct cudaMipmappedArray *cudaMipmappedArray_const_t;

struct cudaMipmappedArray;




enum __attribute__((device_builtin)) cudaMemoryType
{
    cudaMemoryTypeHost = 1,
    cudaMemoryTypeDevice = 2
};




enum __attribute__((device_builtin)) cudaMemcpyKind
{
    cudaMemcpyHostToHost = 0,
    cudaMemcpyHostToDevice = 1,
    cudaMemcpyDeviceToHost = 2,
    cudaMemcpyDeviceToDevice = 3,
    cudaMemcpyDefault = 4
};






struct __attribute__((device_builtin)) cudaPitchedPtr
{
    void *ptr;
    size_t pitch;
    size_t xsize;
    size_t ysize;
};






struct __attribute__((device_builtin)) cudaExtent
{
    size_t width;
    size_t height;
    size_t depth;
};






struct __attribute__((device_builtin)) cudaPos
{
    size_t x;
    size_t y;
    size_t z;
};




struct __attribute__((device_builtin)) cudaMemcpy3DParms
{
    cudaArray_t srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;

    cudaArray_t dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;

    struct cudaExtent extent;
    enum cudaMemcpyKind kind;
};




struct __attribute__((device_builtin)) cudaMemcpy3DPeerParms
{
    cudaArray_t srcArray;
    struct cudaPos srcPos;
    struct cudaPitchedPtr srcPtr;
    int srcDevice;

    cudaArray_t dstArray;
    struct cudaPos dstPos;
    struct cudaPitchedPtr dstPtr;
    int dstDevice;

    struct cudaExtent extent;
};




struct cudaGraphicsResource;




enum __attribute__((device_builtin)) cudaGraphicsRegisterFlags
{
    cudaGraphicsRegisterFlagsNone = 0,
    cudaGraphicsRegisterFlagsReadOnly = 1,
    cudaGraphicsRegisterFlagsWriteDiscard = 2,
    cudaGraphicsRegisterFlagsSurfaceLoadStore = 4,
    cudaGraphicsRegisterFlagsTextureGather = 8
};




enum __attribute__((device_builtin)) cudaGraphicsMapFlags
{
    cudaGraphicsMapFlagsNone = 0,
    cudaGraphicsMapFlagsReadOnly = 1,
    cudaGraphicsMapFlagsWriteDiscard = 2
};




enum __attribute__((device_builtin)) cudaGraphicsCubeFace
{
    cudaGraphicsCubeFacePositiveX = 0x00,
    cudaGraphicsCubeFaceNegativeX = 0x01,
    cudaGraphicsCubeFacePositiveY = 0x02,
    cudaGraphicsCubeFaceNegativeY = 0x03,
    cudaGraphicsCubeFacePositiveZ = 0x04,
    cudaGraphicsCubeFaceNegativeZ = 0x05
};




enum __attribute__((device_builtin)) cudaResourceType
{
    cudaResourceTypeArray = 0x00,
    cudaResourceTypeMipmappedArray = 0x01,
    cudaResourceTypeLinear = 0x02,
    cudaResourceTypePitch2D = 0x03
};




enum __attribute__((device_builtin)) cudaResourceViewFormat
{
    cudaResViewFormatNone = 0x00,
    cudaResViewFormatUnsignedChar1 = 0x01,
    cudaResViewFormatUnsignedChar2 = 0x02,
    cudaResViewFormatUnsignedChar4 = 0x03,
    cudaResViewFormatSignedChar1 = 0x04,
    cudaResViewFormatSignedChar2 = 0x05,
    cudaResViewFormatSignedChar4 = 0x06,
    cudaResViewFormatUnsignedShort1 = 0x07,
    cudaResViewFormatUnsignedShort2 = 0x08,
    cudaResViewFormatUnsignedShort4 = 0x09,
    cudaResViewFormatSignedShort1 = 0x0a,
    cudaResViewFormatSignedShort2 = 0x0b,
    cudaResViewFormatSignedShort4 = 0x0c,
    cudaResViewFormatUnsignedInt1 = 0x0d,
    cudaResViewFormatUnsignedInt2 = 0x0e,
    cudaResViewFormatUnsignedInt4 = 0x0f,
    cudaResViewFormatSignedInt1 = 0x10,
    cudaResViewFormatSignedInt2 = 0x11,
    cudaResViewFormatSignedInt4 = 0x12,
    cudaResViewFormatHalf1 = 0x13,
    cudaResViewFormatHalf2 = 0x14,
    cudaResViewFormatHalf4 = 0x15,
    cudaResViewFormatFloat1 = 0x16,
    cudaResViewFormatFloat2 = 0x17,
    cudaResViewFormatFloat4 = 0x18,
    cudaResViewFormatUnsignedBlockCompressed1 = 0x19,
    cudaResViewFormatUnsignedBlockCompressed2 = 0x1a,
    cudaResViewFormatUnsignedBlockCompressed3 = 0x1b,
    cudaResViewFormatUnsignedBlockCompressed4 = 0x1c,
    cudaResViewFormatSignedBlockCompressed4 = 0x1d,
    cudaResViewFormatUnsignedBlockCompressed5 = 0x1e,
    cudaResViewFormatSignedBlockCompressed5 = 0x1f,
    cudaResViewFormatUnsignedBlockCompressed6H = 0x20,
    cudaResViewFormatSignedBlockCompressed6H = 0x21,
    cudaResViewFormatUnsignedBlockCompressed7 = 0x22
};




struct __attribute__((device_builtin)) cudaResourceDesc {
 enum cudaResourceType resType;

 union {
  struct {
   cudaArray_t array;
  } array;
        struct {
            cudaMipmappedArray_t mipmap;
        } mipmap;
  struct {
   void *devPtr;
   struct cudaChannelFormatDesc desc;
   size_t sizeInBytes;
  } linear;
  struct {
   void *devPtr;
   struct cudaChannelFormatDesc desc;
   size_t width;
   size_t height;
   size_t pitchInBytes;
  } pitch2D;
 } res;
};




struct __attribute__((device_builtin)) cudaResourceViewDesc
{
    enum cudaResourceViewFormat format;
    size_t width;
    size_t height;
    size_t depth;
    unsigned int firstMipmapLevel;
    unsigned int lastMipmapLevel;
    unsigned int firstLayer;
    unsigned int lastLayer;
};




struct __attribute__((device_builtin)) cudaPointerAttributes
{




    enum cudaMemoryType memoryType;
# 1044 "/usr/local/cuda/include/driver_types.h" 3
    int device;





    void *devicePointer;





    void *hostPointer;




    int isManaged;
};




struct __attribute__((device_builtin)) cudaFuncAttributes
{





   size_t sharedSizeBytes;





   size_t constSizeBytes;




   size_t localSizeBytes;






   int maxThreadsPerBlock;




   int numRegs;






   int ptxVersion;






   int binaryVersion;





   int cacheModeCA;
};




enum __attribute__((device_builtin)) cudaFuncCache
{
    cudaFuncCachePreferNone = 0,
    cudaFuncCachePreferShared = 1,
    cudaFuncCachePreferL1 = 2,
    cudaFuncCachePreferEqual = 3
};





enum __attribute__((device_builtin)) cudaSharedMemConfig
{
    cudaSharedMemBankSizeDefault = 0,
    cudaSharedMemBankSizeFourByte = 1,
    cudaSharedMemBankSizeEightByte = 2
};




enum __attribute__((device_builtin)) cudaComputeMode
{
    cudaComputeModeDefault = 0,
    cudaComputeModeExclusive = 1,
    cudaComputeModeProhibited = 2,
    cudaComputeModeExclusiveProcess = 3
};




enum __attribute__((device_builtin)) cudaLimit
{
    cudaLimitStackSize = 0x00,
    cudaLimitPrintfFifoSize = 0x01,
    cudaLimitMallocHeapSize = 0x02,
    cudaLimitDevRuntimeSyncDepth = 0x03,
    cudaLimitDevRuntimePendingLaunchCount = 0x04
};




enum __attribute__((device_builtin)) cudaMemoryAdvise
{
    cudaMemAdviseSetReadMostly = 1,
    cudaMemAdviseUnsetReadMostly = 2,
    cudaMemAdviseSetPreferredLocation = 3,
    cudaMemAdviseUnsetPreferredLocation = 4,
    cudaMemAdviseSetAccessedBy = 5,
    cudaMemAdviseUnsetAccessedBy = 6
};




enum __attribute__((device_builtin)) cudaMemRangeAttribute
{
    cudaMemRangeAttributeReadMostly = 1,
    cudaMemRangeAttributePreferredLocation = 2,
    cudaMemRangeAttributeAccessedBy = 3,
    cudaMemRangeAttributeLastPrefetchLocation = 4
};




enum __attribute__((device_builtin)) cudaOutputMode
{
    cudaKeyValuePair = 0x00,
    cudaCSV = 0x01
};




enum __attribute__((device_builtin)) cudaDeviceAttr
{
    cudaDevAttrMaxThreadsPerBlock = 1,
    cudaDevAttrMaxBlockDimX = 2,
    cudaDevAttrMaxBlockDimY = 3,
    cudaDevAttrMaxBlockDimZ = 4,
    cudaDevAttrMaxGridDimX = 5,
    cudaDevAttrMaxGridDimY = 6,
    cudaDevAttrMaxGridDimZ = 7,
    cudaDevAttrMaxSharedMemoryPerBlock = 8,
    cudaDevAttrTotalConstantMemory = 9,
    cudaDevAttrWarpSize = 10,
    cudaDevAttrMaxPitch = 11,
    cudaDevAttrMaxRegistersPerBlock = 12,
    cudaDevAttrClockRate = 13,
    cudaDevAttrTextureAlignment = 14,
    cudaDevAttrGpuOverlap = 15,
    cudaDevAttrMultiProcessorCount = 16,
    cudaDevAttrKernelExecTimeout = 17,
    cudaDevAttrIntegrated = 18,
    cudaDevAttrCanMapHostMemory = 19,
    cudaDevAttrComputeMode = 20,
    cudaDevAttrMaxTexture1DWidth = 21,
    cudaDevAttrMaxTexture2DWidth = 22,
    cudaDevAttrMaxTexture2DHeight = 23,
    cudaDevAttrMaxTexture3DWidth = 24,
    cudaDevAttrMaxTexture3DHeight = 25,
    cudaDevAttrMaxTexture3DDepth = 26,
    cudaDevAttrMaxTexture2DLayeredWidth = 27,
    cudaDevAttrMaxTexture2DLayeredHeight = 28,
    cudaDevAttrMaxTexture2DLayeredLayers = 29,
    cudaDevAttrSurfaceAlignment = 30,
    cudaDevAttrConcurrentKernels = 31,
    cudaDevAttrEccEnabled = 32,
    cudaDevAttrPciBusId = 33,
    cudaDevAttrPciDeviceId = 34,
    cudaDevAttrTccDriver = 35,
    cudaDevAttrMemoryClockRate = 36,
    cudaDevAttrGlobalMemoryBusWidth = 37,
    cudaDevAttrL2CacheSize = 38,
    cudaDevAttrMaxThreadsPerMultiProcessor = 39,
    cudaDevAttrAsyncEngineCount = 40,
    cudaDevAttrUnifiedAddressing = 41,
    cudaDevAttrMaxTexture1DLayeredWidth = 42,
    cudaDevAttrMaxTexture1DLayeredLayers = 43,
    cudaDevAttrMaxTexture2DGatherWidth = 45,
    cudaDevAttrMaxTexture2DGatherHeight = 46,
    cudaDevAttrMaxTexture3DWidthAlt = 47,
    cudaDevAttrMaxTexture3DHeightAlt = 48,
    cudaDevAttrMaxTexture3DDepthAlt = 49,
    cudaDevAttrPciDomainId = 50,
    cudaDevAttrTexturePitchAlignment = 51,
    cudaDevAttrMaxTextureCubemapWidth = 52,
    cudaDevAttrMaxTextureCubemapLayeredWidth = 53,
    cudaDevAttrMaxTextureCubemapLayeredLayers = 54,
    cudaDevAttrMaxSurface1DWidth = 55,
    cudaDevAttrMaxSurface2DWidth = 56,
    cudaDevAttrMaxSurface2DHeight = 57,
    cudaDevAttrMaxSurface3DWidth = 58,
    cudaDevAttrMaxSurface3DHeight = 59,
    cudaDevAttrMaxSurface3DDepth = 60,
    cudaDevAttrMaxSurface1DLayeredWidth = 61,
    cudaDevAttrMaxSurface1DLayeredLayers = 62,
    cudaDevAttrMaxSurface2DLayeredWidth = 63,
    cudaDevAttrMaxSurface2DLayeredHeight = 64,
    cudaDevAttrMaxSurface2DLayeredLayers = 65,
    cudaDevAttrMaxSurfaceCubemapWidth = 66,
    cudaDevAttrMaxSurfaceCubemapLayeredWidth = 67,
    cudaDevAttrMaxSurfaceCubemapLayeredLayers = 68,
    cudaDevAttrMaxTexture1DLinearWidth = 69,
    cudaDevAttrMaxTexture2DLinearWidth = 70,
    cudaDevAttrMaxTexture2DLinearHeight = 71,
    cudaDevAttrMaxTexture2DLinearPitch = 72,
    cudaDevAttrMaxTexture2DMipmappedWidth = 73,
    cudaDevAttrMaxTexture2DMipmappedHeight = 74,
    cudaDevAttrComputeCapabilityMajor = 75,
    cudaDevAttrComputeCapabilityMinor = 76,
    cudaDevAttrMaxTexture1DMipmappedWidth = 77,
    cudaDevAttrStreamPrioritiesSupported = 78,
    cudaDevAttrGlobalL1CacheSupported = 79,
    cudaDevAttrLocalL1CacheSupported = 80,
    cudaDevAttrMaxSharedMemoryPerMultiprocessor = 81,
    cudaDevAttrMaxRegistersPerMultiprocessor = 82,
    cudaDevAttrManagedMemory = 83,
    cudaDevAttrIsMultiGpuBoard = 84,
    cudaDevAttrMultiGpuBoardGroupID = 85,
    cudaDevAttrHostNativeAtomicSupported = 86,
    cudaDevAttrSingleToDoublePrecisionPerfRatio = 87,
    cudaDevAttrPageableMemoryAccess = 88,
    cudaDevAttrConcurrentManagedAccess = 89,
    cudaDevAttrComputePreemptionSupported = 90,
    cudaDevAttrCanUseHostPointerForRegisteredMem = 91
};





enum __attribute__((device_builtin)) cudaDeviceP2PAttr {
    cudaDevP2PAttrPerformanceRank = 1,
    cudaDevP2PAttrAccessSupported = 2,
    cudaDevP2PAttrNativeAtomicSupported = 3
};



struct __attribute__((device_builtin)) cudaDeviceProp
{
    char name[256];
    size_t totalGlobalMem;
    size_t sharedMemPerBlock;
    int regsPerBlock;
    int warpSize;
    size_t memPitch;
    int maxThreadsPerBlock;
    int maxThreadsDim[3];
    int maxGridSize[3];
    int clockRate;
    size_t totalConstMem;
    int major;
    int minor;
    size_t textureAlignment;
    size_t texturePitchAlignment;
    int deviceOverlap;
    int multiProcessorCount;
    int kernelExecTimeoutEnabled;
    int integrated;
    int canMapHostMemory;
    int computeMode;
    int maxTexture1D;
    int maxTexture1DMipmap;
    int maxTexture1DLinear;
    int maxTexture2D[2];
    int maxTexture2DMipmap[2];
    int maxTexture2DLinear[3];
    int maxTexture2DGather[2];
    int maxTexture3D[3];
    int maxTexture3DAlt[3];
    int maxTextureCubemap;
    int maxTexture1DLayered[2];
    int maxTexture2DLayered[3];
    int maxTextureCubemapLayered[2];
    int maxSurface1D;
    int maxSurface2D[2];
    int maxSurface3D[3];
    int maxSurface1DLayered[2];
    int maxSurface2DLayered[3];
    int maxSurfaceCubemap;
    int maxSurfaceCubemapLayered[2];
    size_t surfaceAlignment;
    int concurrentKernels;
    int ECCEnabled;
    int pciBusID;
    int pciDeviceID;
    int pciDomainID;
    int tccDriver;
    int asyncEngineCount;
    int unifiedAddressing;
    int memoryClockRate;
    int memoryBusWidth;
    int l2CacheSize;
    int maxThreadsPerMultiProcessor;
    int streamPrioritiesSupported;
    int globalL1CacheSupported;
    int localL1CacheSupported;
    size_t sharedMemPerMultiprocessor;
    int regsPerMultiprocessor;
    int managedMemory;
    int isMultiGpuBoard;
    int multiGpuBoardGroupID;
    int hostNativeAtomicSupported;
    int singleToDoublePrecisionPerfRatio;
    int pageableMemoryAccess;
    int concurrentManagedAccess;
};
# 1455 "/usr/local/cuda/include/driver_types.h" 3
typedef __attribute__((device_builtin)) struct __attribute__((device_builtin)) cudaIpcEventHandle_st
{
    char reserved[64];
}cudaIpcEventHandle_t;




typedef __attribute__((device_builtin)) struct __attribute__((device_builtin)) cudaIpcMemHandle_st
{
    char reserved[64];
}cudaIpcMemHandle_t;
# 1477 "/usr/local/cuda/include/driver_types.h" 3
typedef __attribute__((device_builtin)) enum cudaError cudaError_t;




typedef __attribute__((device_builtin)) struct CUstream_st *cudaStream_t;




typedef __attribute__((device_builtin)) struct CUevent_st *cudaEvent_t;




typedef __attribute__((device_builtin)) struct cudaGraphicsResource *cudaGraphicsResource_t;




typedef __attribute__((device_builtin)) struct CUuuid_st cudaUUID_t;




typedef __attribute__((device_builtin)) enum cudaOutputMode cudaOutputMode_t;
# 60 "/usr/local/cuda/include/builtin_types.h" 2 3


# 1 "/usr/local/cuda/include/surface_types.h" 1 3
# 84 "/usr/local/cuda/include/surface_types.h" 3
enum __attribute__((device_builtin)) cudaSurfaceBoundaryMode
{
    cudaBoundaryModeZero = 0,
    cudaBoundaryModeClamp = 1,
    cudaBoundaryModeTrap = 2
};




enum __attribute__((device_builtin)) cudaSurfaceFormatMode
{
    cudaFormatModeForced = 0,
    cudaFormatModeAuto = 1
};




struct __attribute__((device_builtin)) surfaceReference
{



    struct cudaChannelFormatDesc channelDesc;
};




typedef __attribute__((device_builtin)) unsigned long long cudaSurfaceObject_t;
# 63 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/texture_types.h" 1 3
# 84 "/usr/local/cuda/include/texture_types.h" 3
enum __attribute__((device_builtin)) cudaTextureAddressMode
{
    cudaAddressModeWrap = 0,
    cudaAddressModeClamp = 1,
    cudaAddressModeMirror = 2,
    cudaAddressModeBorder = 3
};




enum __attribute__((device_builtin)) cudaTextureFilterMode
{
    cudaFilterModePoint = 0,
    cudaFilterModeLinear = 1
};




enum __attribute__((device_builtin)) cudaTextureReadMode
{
    cudaReadModeElementType = 0,
    cudaReadModeNormalizedFloat = 1
};




struct __attribute__((device_builtin)) textureReference
{



    int normalized;



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureAddressMode addressMode[3];



    struct cudaChannelFormatDesc channelDesc;



    int sRGB;



    unsigned int maxAnisotropy;



    enum cudaTextureFilterMode mipmapFilterMode;



    float mipmapLevelBias;



    float minMipmapLevelClamp;



    float maxMipmapLevelClamp;
    int __cudaReserved[15];
};




struct __attribute__((device_builtin)) cudaTextureDesc
{



    enum cudaTextureAddressMode addressMode[3];



    enum cudaTextureFilterMode filterMode;



    enum cudaTextureReadMode readMode;



    int sRGB;



    float borderColor[4];



    int normalizedCoords;



    unsigned int maxAnisotropy;



    enum cudaTextureFilterMode mipmapFilterMode;



    float mipmapLevelBias;



    float minMipmapLevelClamp;



    float maxMipmapLevelClamp;
};




typedef __attribute__((device_builtin)) unsigned long long cudaTextureObject_t;
# 64 "/usr/local/cuda/include/builtin_types.h" 2 3
# 1 "/usr/local/cuda/include/vector_types.h" 1 3
# 61 "/usr/local/cuda/include/vector_types.h" 3
# 1 "/usr/local/cuda/include/builtin_types.h" 1 3
# 64 "/usr/local/cuda/include/builtin_types.h" 3
# 1 "/usr/local/cuda/include/vector_types.h" 1 3
# 64 "/usr/local/cuda/include/builtin_types.h" 2 3
# 62 "/usr/local/cuda/include/vector_types.h" 2 3
# 98 "/usr/local/cuda/include/vector_types.h" 3
struct __attribute__((device_builtin)) char1
{
    signed char x;
};

struct __attribute__((device_builtin)) uchar1
{
    unsigned char x;
};


struct __attribute__((device_builtin)) __attribute__((aligned(2))) char2
{
    signed char x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(2))) uchar2
{
    unsigned char x, y;
};

struct __attribute__((device_builtin)) char3
{
    signed char x, y, z;
};

struct __attribute__((device_builtin)) uchar3
{
    unsigned char x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) char4
{
    signed char x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) uchar4
{
    unsigned char x, y, z, w;
};

struct __attribute__((device_builtin)) short1
{
    short x;
};

struct __attribute__((device_builtin)) ushort1
{
    unsigned short x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) short2
{
    short x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(4))) ushort2
{
    unsigned short x, y;
};

struct __attribute__((device_builtin)) short3
{
    short x, y, z;
};

struct __attribute__((device_builtin)) ushort3
{
    unsigned short x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(8))) short4 { short x; short y; short z; short w; };
struct __attribute__((device_builtin)) __attribute__((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; };

struct __attribute__((device_builtin)) int1
{
    int x;
};

struct __attribute__((device_builtin)) uint1
{
    unsigned int x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(8))) int2 { int x; int y; };
struct __attribute__((device_builtin)) __attribute__((aligned(8))) uint2 { unsigned int x; unsigned int y; };

struct __attribute__((device_builtin)) int3
{
    int x, y, z;
};

struct __attribute__((device_builtin)) uint3
{
    unsigned int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) int4
{
    int x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) uint4
{
    unsigned int x, y, z, w;
};

struct __attribute__((device_builtin)) long1
{
    long int x;
};

struct __attribute__((device_builtin)) ulong1
{
    unsigned long x;
};






struct __attribute__((device_builtin)) __attribute__((aligned(2*sizeof(long int)))) long2
{
    long int x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(2*sizeof(unsigned long int)))) ulong2
{
    unsigned long int x, y;
};



struct __attribute__((device_builtin)) long3
{
    long int x, y, z;
};

struct __attribute__((device_builtin)) ulong3
{
    unsigned long int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) long4
{
    long int x, y, z, w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulong4
{
    unsigned long int x, y, z, w;
};

struct __attribute__((device_builtin)) float1
{
    float x;
};
# 274 "/usr/local/cuda/include/vector_types.h" 3
struct __attribute__((device_builtin)) __attribute__((aligned(8))) float2 { float x; float y; };




struct __attribute__((device_builtin)) float3
{
    float x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) float4
{
    float x, y, z, w;
};

struct __attribute__((device_builtin)) longlong1
{
    long long int x;
};

struct __attribute__((device_builtin)) ulonglong1
{
    unsigned long long int x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) longlong2
{
    long long int x, y;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulonglong2
{
    unsigned long long int x, y;
};

struct __attribute__((device_builtin)) longlong3
{
    long long int x, y, z;
};

struct __attribute__((device_builtin)) ulonglong3
{
    unsigned long long int x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) longlong4
{
    long long int x, y, z ,w;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) ulonglong4
{
    unsigned long long int x, y, z, w;
};

struct __attribute__((device_builtin)) double1
{
    double x;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) double2
{
    double x, y;
};

struct __attribute__((device_builtin)) double3
{
    double x, y, z;
};

struct __attribute__((device_builtin)) __attribute__((aligned(16))) double4
{
    double x, y, z, w;
};
# 362 "/usr/local/cuda/include/vector_types.h" 3
typedef __attribute__((device_builtin)) struct char1 char1;
typedef __attribute__((device_builtin)) struct uchar1 uchar1;
typedef __attribute__((device_builtin)) struct char2 char2;
typedef __attribute__((device_builtin)) struct uchar2 uchar2;
typedef __attribute__((device_builtin)) struct char3 char3;
typedef __attribute__((device_builtin)) struct uchar3 uchar3;
typedef __attribute__((device_builtin)) struct char4 char4;
typedef __attribute__((device_builtin)) struct uchar4 uchar4;
typedef __attribute__((device_builtin)) struct short1 short1;
typedef __attribute__((device_builtin)) struct ushort1 ushort1;
typedef __attribute__((device_builtin)) struct short2 short2;
typedef __attribute__((device_builtin)) struct ushort2 ushort2;
typedef __attribute__((device_builtin)) struct short3 short3;
typedef __attribute__((device_builtin)) struct ushort3 ushort3;
typedef __attribute__((device_builtin)) struct short4 short4;
typedef __attribute__((device_builtin)) struct ushort4 ushort4;
typedef __attribute__((device_builtin)) struct int1 int1;
typedef __attribute__((device_builtin)) struct uint1 uint1;
typedef __attribute__((device_builtin)) struct int2 int2;
typedef __attribute__((device_builtin)) struct uint2 uint2;
typedef __attribute__((device_builtin)) struct int3 int3;
typedef __attribute__((device_builtin)) struct uint3 uint3;
typedef __attribute__((device_builtin)) struct int4 int4;
typedef __attribute__((device_builtin)) struct uint4 uint4;
typedef __attribute__((device_builtin)) struct long1 long1;
typedef __attribute__((device_builtin)) struct ulong1 ulong1;
typedef __attribute__((device_builtin)) struct long2 long2;
typedef __attribute__((device_builtin)) struct ulong2 ulong2;
typedef __attribute__((device_builtin)) struct long3 long3;
typedef __attribute__((device_builtin)) struct ulong3 ulong3;
typedef __attribute__((device_builtin)) struct long4 long4;
typedef __attribute__((device_builtin)) struct ulong4 ulong4;
typedef __attribute__((device_builtin)) struct float1 float1;
typedef __attribute__((device_builtin)) struct float2 float2;
typedef __attribute__((device_builtin)) struct float3 float3;
typedef __attribute__((device_builtin)) struct float4 float4;
typedef __attribute__((device_builtin)) struct longlong1 longlong1;
typedef __attribute__((device_builtin)) struct ulonglong1 ulonglong1;
typedef __attribute__((device_builtin)) struct longlong2 longlong2;
typedef __attribute__((device_builtin)) struct ulonglong2 ulonglong2;
typedef __attribute__((device_builtin)) struct longlong3 longlong3;
typedef __attribute__((device_builtin)) struct ulonglong3 ulonglong3;
typedef __attribute__((device_builtin)) struct longlong4 longlong4;
typedef __attribute__((device_builtin)) struct ulonglong4 ulonglong4;
typedef __attribute__((device_builtin)) struct double1 double1;
typedef __attribute__((device_builtin)) struct double2 double2;
typedef __attribute__((device_builtin)) struct double3 double3;
typedef __attribute__((device_builtin)) struct double4 double4;







struct __attribute__((device_builtin)) dim3
{
    unsigned int x, y, z;





};

typedef __attribute__((device_builtin)) struct dim3 dim3;
# 64 "/usr/local/cuda/include/builtin_types.h" 2 3
# 285 "/usr/local/cuda/include/crt/device_runtime.h" 2 3
# 1 "/usr/local/cuda/include/device_launch_parameters.h" 1 3
# 71 "/usr/local/cuda/include/device_launch_parameters.h" 3
uint3 __attribute__((device_builtin)) extern const threadIdx;
uint3 __attribute__((device_builtin)) extern const blockIdx;
dim3 __attribute__((device_builtin)) extern const blockDim;
dim3 __attribute__((device_builtin)) extern const gridDim;
int __attribute__((device_builtin)) extern const warpSize;
# 286 "/usr/local/cuda/include/crt/device_runtime.h" 2 3
# 1 "/usr/local/cuda/include/crt/storage_class.h" 1 3
# 286 "/usr/local/cuda/include/crt/device_runtime.h" 2 3
# 218 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 2 3
struct _Complex_double { double _Vals[2];}; typedef struct _Complex_double _Complex_double;
# 48 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 176 "/usr/local/cuda/include/cuComplex.h"

# 176 "/usr/local/cuda/include/cuComplex.h"
typedef struct double2 cuDoubleComplex;
# 93 "/usr/local/cuda/include/cublas_api.h"
typedef enum cublasStatus_t cublasStatus_t;
# 122 "/usr/local/cuda/include/cublas_api.h"
typedef enum cublasPointerMode_t cublasPointerMode_t;
# 147 "/usr/local/cuda/include/cublas_api.h"
typedef struct cublasContext *cublasHandle_t;
# 75 "./Integration.hpp"
struct _Z11IntegrationILi128ELi128ELi128EE {
# 79 "./Integration.hpp"
cublasHandle_t cublas_handle;
# 80 "./Integration.hpp"
double *d_norm;
# 80 "./Integration.hpp"
double h_norm;
# 81 "./Integration.hpp"
cuDoubleComplex *d_int_val;
# 82 "./Integration.hpp"
cuDoubleComplex h_int_val;
# 83 "./Integration.hpp"
size_t nxyz;
# 86 "./Integration.hpp"
void *d_wrk_mem;
# 87 "./Integration.hpp"
double *d_wrk_memD;
# 88 "./Integration.hpp"
cuDoubleComplex *d_wrk_memZ;};
# 196 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3

# 196 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
typedef unsigned long _ZSt6size_t;
# 197 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
typedef long _ZSt9ptrdiff_t;
# 60 "/usr/include/c++/5/exception" 3
struct _ZSt9exception { const long *__vptr;};
# 54 "/usr/include/c++/5/new" 3
struct _ZSt9bad_alloc { struct _ZSt9exception __b_St9exception;};
# 98 "/usr/include/c++/5/bits/postypes.h" 3
typedef _ZSt9ptrdiff_t _ZSt10streamsize;
# 62 "/usr/include/c++/5/bits/locale_classes.h" 3
struct _ZSt6locale {
# 309 "/usr/include/c++/5/bits/locale_classes.h" 3
struct _ZNSt6locale5_ImplE *_M_impl;};
# 323 "/usr/include/c++/5/bits/ios_base.h" 3
typedef enum _ZSt13_Ios_Fmtflags _ZNSt8ios_base8fmtflagsE;
# 398 "/usr/include/c++/5/bits/ios_base.h" 3
typedef enum _ZSt12_Ios_Iostate _ZNSt8ios_base7iostateE;
# 567 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE {
# 569 "/usr/include/c++/5/bits/ios_base.h" 3
void *_M_pword;
# 570 "/usr/include/c++/5/bits/ios_base.h" 3
long _M_iword;};
# 601 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base4InitE {char __nv_no_debug_dummy_end_padding_0;};
# 228 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZSt8ios_base { const long *__vptr;
# 520 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10streamsize _M_precision;
# 521 "/usr/include/c++/5/bits/ios_base.h" 3
_ZSt10streamsize _M_width;
# 522 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base8fmtflagsE _M_flags;
# 523 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base7iostateE _M_exception;
# 524 "/usr/include/c++/5/bits/ios_base.h" 3
_ZNSt8ios_base7iostateE _M_streambuf_state;
# 558 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base14_Callback_listE *_M_callbacks;
# 575 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_word_zero;
# 580 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE _M_local_word[8];
# 583 "/usr/include/c++/5/bits/ios_base.h" 3
int _M_word_size;
# 584 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZNSt8ios_base6_WordsE *_M_word;
# 590 "/usr/include/c++/5/bits/ios_base.h" 3
struct _ZSt6locale _M_ios_locale;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"

# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE _ZN6thrust6detail10functional11placeholderILj0EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj0EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj0EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj0EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE _ZN6thrust6detail10functional11placeholderILj1EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj1EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj1EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj1EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE _ZN6thrust6detail10functional11placeholderILj2EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj2EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj2EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj2EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE _ZN6thrust6detail10functional11placeholderILj3EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj3EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj3EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj3EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE _ZN6thrust6detail10functional11placeholderILj4EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj4EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj4EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj4EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE _ZN6thrust6detail10functional11placeholderILj5EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj5EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj5EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj5EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE _ZN6thrust6detail10functional11placeholderILj6EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj6EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj6EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj6EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE _ZN6thrust6detail10functional11placeholderILj7EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj7EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj7EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj7EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE _ZN6thrust6detail10functional11placeholderILj8EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj8EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj8EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj8EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 33 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
typedef struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE _ZN6thrust6detail10functional11placeholderILj9EE4typeE;
# 31 "/usr/local/cuda/include/thrust/detail/functional/placeholder.h"
struct _ZN6thrust6detail10functional11placeholderILj9EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
struct _ZN6thrust6detail10functional8argumentILj9EEE {char __nv_no_debug_dummy_end_padding_0;};
# 52 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
typedef struct _ZN6thrust6detail10functional8argumentILj9EEE _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEE9eval_typeE;
# 49 "/usr/local/cuda/include/thrust/detail/functional/actor.h"
struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE {char __nv_no_debug_dummy_end_padding_0;};
# 41 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust6detail21execution_policy_baseINS_6system6detail10sequential3tagEEE {char __nv_no_debug_dummy_end_padding_0;};
# 41 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust6detail21execution_policy_baseINS0_5seq_tEEE {char __nv_no_debug_dummy_end_padding_0;};
# 30 "/usr/local/cuda/include/thrust/detail/seq.h"
struct _ZN6thrust6detail5seq_tE {char __nv_no_debug_dummy_end_padding_0;};
# 46 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential16execution_policyINS2_3tagEEE {char __nv_no_debug_dummy_end_padding_0;};
# 51 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential3tagE {char __nv_no_debug_dummy_end_padding_0;};
# 58 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
struct _ZN6thrust6system6detail10sequential16execution_policyINS_6detail5seq_tEEE {char __nv_no_debug_dummy_end_padding_0;};
# 575 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj3EEE {char __nv_no_debug_dummy_end_padding_0;};
# 557 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj2EEE {
# 563 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj3EEE this_exec;};
# 557 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE {
# 563 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj2EEE this_exec;};
# 591 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE {
# 597 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE this_exec;};
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail12aligned_typeILm8EE4typeE {char __nv_no_debug_dummy_end_padding_0[8];} 
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp" 3
                                                                                                                        __attribute__((aligned(
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
                                                                                                                        8
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp" 3
                                                                                                                        ))) 
# 192 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
                                                                                                                                     ;
# 206 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
union _ZN6thrust6system4cuda6detail5bulk_6detail15aligned_storageILm24ELm8EE4typeE {
# 208 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
unsigned char data[24];
# 210 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail12aligned_typeILm8EE4typeE align;};
# 204 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail15aligned_storageILm24ELm8EEE {char __nv_no_debug_dummy_end_padding_0;};
# 190 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/detail/alignment.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_6detail12aligned_typeILm8EEE {char __nv_no_debug_dummy_end_padding_0;};
# 31 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/uninitialized.hpp"
struct _ZN6thrust6system4cuda6detail5bulk_13uninitializedINS3_6detail27singleton_on_chip_allocatorEEE {
# 37 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/uninitialized.hpp"
union _ZN6thrust6system4cuda6detail5bulk_6detail15aligned_storageILm24ELm8EE4typeE storage;};
# 72 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust16execution_policyINS_6system6detail10sequential3tagEEE {char __nv_no_debug_dummy_end_padding_0;};
# 72 "/usr/local/cuda/include/thrust/detail/execution_policy.h"
struct _ZN6thrust16execution_policyINS_6detail5seq_tEEE {char __nv_no_debug_dummy_end_padding_0;};
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3

# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
union _ZZ10__signbitlEUt_ {
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
long double __l;
# 153 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
int __i[3];};
# 222 "/usr/local/cuda/include/common_functions.h"

# 222 "/usr/local/cuda/include/common_functions.h"
extern 
# 222 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device)) 
# 222 "/usr/local/cuda/include/common_functions.h"
                              __attribute__((__externally_visible__)) __attribute__((visibility("default"))) void *
# 222 "/usr/local/cuda/include/common_functions.h" 3
                                                                                                                   malloc
# 222 "/usr/local/cuda/include/common_functions.h"
                                                                                                                        (_ZSt6size_t);
# 224 "/usr/local/cuda/include/common_functions.h"
extern 
# 224 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device)) 
# 224 "/usr/local/cuda/include/common_functions.h"
                              __attribute__((__externally_visible__)) __attribute__((__nothrow__)) __attribute__((visibility("default"))) void 
# 224 "/usr/local/cuda/include/common_functions.h" 3
                                                                                                                                               free
# 224 "/usr/local/cuda/include/common_functions.h"
                                                                                                                                                     (void *);
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              const char *cudaGetErrorString(enum cudaError);
# 126 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 126 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 126 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              enum cudaError cudaFree(void *);
# 127 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 127 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 127 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              enum cudaError cudaMalloc(void **, size_t);
# 95 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3
 
# 95 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3
__attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__artificial__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 102 "/usr/include/x86_64-linux-gnu/bits/stdio2.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__artificial__)) __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) int printf(const char *__restrict__, ...);
# 4752 "/usr/local/cuda/include/math_functions.h"
 __attribute__((device_builtin)) 
# 4752 "/usr/local/cuda/include/math_functions.h"
                   extern 
# 4752 "/usr/local/cuda/include/math_functions.h" 3
                   __attribute__((device)) 
# 4752 "/usr/local/cuda/include/math_functions.h"
                                                  __attribute__((__nothrow__)) double pow(double, double);
# 127 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 
# 127 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
__attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) __attribute__((__nothrow__)) __attribute__((__const__)) int __signbitf(float);
# 139 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) __attribute__((__nothrow__)) __attribute__((__const__)) int __signbit(double);
# 151 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3
 __attribute__((device_builtin)) extern __attribute__((device)) __inline__ __attribute__((__always_inline__)) __attribute__((__gnu_inline__)) __attribute__((__nothrow__)) __attribute__((__const__)) int __signbitl(long double);
# 168 "/usr/local/cuda/include/device_functions.h"
 __attribute__((device_builtin)) 
# 168 "/usr/local/cuda/include/device_functions.h"
                   extern 
# 168 "/usr/local/cuda/include/device_functions.h" 3
                   __attribute__((device)) 
# 168 "/usr/local/cuda/include/device_functions.h"
                                                  void __syncthreads(void);
# 149 "/usr/local/cuda/include/cublas_api.h"
extern 
# 149 "/usr/local/cuda/include/cublas_api.h" 3
__attribute__((device)) 
# 149 "/usr/local/cuda/include/cublas_api.h"
                              cublasStatus_t cublasCreate_v2(cublasHandle_t *);
# 150 "/usr/local/cuda/include/cublas_api.h"
extern 
# 150 "/usr/local/cuda/include/cublas_api.h" 3
__attribute__((device)) 
# 150 "/usr/local/cuda/include/cublas_api.h"
                              cublasStatus_t cublasDestroy_v2(cublasHandle_t);
# 159 "/usr/local/cuda/include/cublas_api.h"
extern 
# 159 "/usr/local/cuda/include/cublas_api.h" 3
__attribute__((device)) 
# 159 "/usr/local/cuda/include/cublas_api.h"
                              cublasStatus_t cublasSetPointerMode_v2(cublasHandle_t, cublasPointerMode_t);
# 376 "/usr/local/cuda/include/cublas_api.h"
extern 
# 376 "/usr/local/cuda/include/cublas_api.h" 3
__attribute__((device)) 
# 376 "/usr/local/cuda/include/cublas_api.h"
                              cublasStatus_t cublasDznrm2_v2(cublasHandle_t, int, const cuDoubleComplex *, int, double *);
# 492 "/usr/local/cuda/include/cublas_api.h"
extern 
# 492 "/usr/local/cuda/include/cublas_api.h" 3
__attribute__((device)) 
# 492 "/usr/local/cuda/include/cublas_api.h"
                              cublasStatus_t cublasZdscal_v2(cublasHandle_t, int, const double *, cuDoubleComplex *, int);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       extern void _Z16kernel_DZdreduceILj1024EEvPdP7double2S0_i(double *, cuDoubleComplex *, double *, int);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       extern void _Z16kernel_DZdreduceILj512EEvPdP7double2S0_i(double *, cuDoubleComplex *, double *, int);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       extern void _Z16kernel_DZdreduceILj256EEvPdP7double2S0_i(double *, cuDoubleComplex *, double *, int);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       extern void _Z16kernel_DZdreduceILj128EEvPdP7double2S0_i(double *, cuDoubleComplex *, double *, int);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       extern void _Z16kernel_DZdreduceILj64EEvPdP7double2S0_i(double *, cuDoubleComplex *, double *, int);
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
static 
# 33 "/usr/local/cuda/include/thrust/detail/seq.h" 3
__attribute__((device)) 
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
                              __inline__ void _ZN6thrust6detail5seq_tC1Ev(struct _ZN6thrust6detail5seq_tE *const);
static 
# 34 "/usr/local/cuda/include/thrust/detail/seq.h" 3
__attribute__((device)) 
# 34 "/usr/local/cuda/include/thrust/detail/seq.h"
                              __inline__ void _ZN6thrust6detail5seq_tC2Ev(struct _ZN6thrust6detail5seq_tE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj0EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj0EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj0EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj0EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj1EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj1EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj1EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj1EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj2EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj2EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj2EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj2EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj3EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj3EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj3EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj3EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj4EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj4EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj4EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj4EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj5EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj5EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj5EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj5EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj6EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj6EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj6EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj6EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj7EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj7EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj7EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj7EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj8EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj8EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj8EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj8EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE *const);
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj9EEC1Ev(struct _ZN6thrust6detail10functional8argumentILj9EEE *const);
static 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 63 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj9EEC2Ev(struct _ZN6thrust6detail10functional8argumentILj9EEE *const);
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEC1Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE *const);
static 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 42 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEC2Ev(struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE *const);
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
static 
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h" 3
__attribute__((device)) 
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
                              __inline__ void _ZN6thrust6system6detail10sequential3tagC1Ev(struct _ZN6thrust6system6detail10sequential3tagE *const);
static 
# 54 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h" 3
__attribute__((device)) 
# 54 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
                              __inline__ void _ZN6thrust6system6detail10sequential3tagC2Ev(struct _ZN6thrust6system6detail10sequential3tagE *const);
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
static 
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC1Ev(struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE *const);
static 
# 562 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 562 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC2Ev(struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE *const);
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
static 
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEC1Ev(struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE *const);
static 
# 596 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 596 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEC2Ev(struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE *const);
# 10 "./thread_fence_reductions.cuh"
extern 
# 10 "./thread_fence_reductions.cuh" 3
       __attribute__((device)) 
# 10 "./thread_fence_reductions.cuh"
                  unsigned retirementCount;
# 129 "./reductions.cuh"
extern 
# 129 "./reductions.cuh" 3
       __attribute__((shared)) 
# 129 "./reductions.cuh"
                  double sdata[];
# 70 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
static 
# 70 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h" 3
       __attribute__((device)) 
# 70 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
                  struct _ZN6thrust6system6detail10sequential3tagE _ZN6thrust6system6detail10sequential3seqE;
# 458 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/malloc.hpp"
 
# 458 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/malloc.hpp" 3
__attribute__((shared)) 
# 458 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/malloc.hpp"
           struct _ZN6thrust6system4cuda6detail5bulk_13uninitializedINS3_6detail27singleton_on_chip_allocatorEEE _ZN6thrust6system4cuda6detail5bulk_6detail41_GLOBAL__N__17_test_norm_cpp1_ii_d366c12b19s_on_chip_allocatorE;
# 622 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
static 
# 622 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
       __attribute__((device)) 
# 622 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                  struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE _ZN6thrust6system4cuda6detail5bulk_4rootE;
# 1381 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1381 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1381 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj0EE4typeE _ZN6thrust12placeholders2_1E;
# 1390 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1390 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1390 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj1EE4typeE _ZN6thrust12placeholders2_2E;
# 1399 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1399 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1399 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj2EE4typeE _ZN6thrust12placeholders2_3E;
# 1408 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1408 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1408 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj3EE4typeE _ZN6thrust12placeholders2_4E;
# 1417 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1417 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1417 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj4EE4typeE _ZN6thrust12placeholders2_5E;
# 1426 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1426 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1426 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj5EE4typeE _ZN6thrust12placeholders2_6E;
# 1435 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1435 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1435 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj6EE4typeE _ZN6thrust12placeholders2_7E;
# 1444 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1444 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1444 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj7EE4typeE _ZN6thrust12placeholders2_8E;
# 1453 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1453 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1453 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj8EE4typeE _ZN6thrust12placeholders2_9E;
# 1462 "/usr/local/cuda/include/thrust/functional.h"
static 
# 1462 "/usr/local/cuda/include/thrust/functional.h" 3
       __attribute__((device)) 
# 1462 "/usr/local/cuda/include/thrust/functional.h"
                  _ZN6thrust6detail10functional11placeholderILj9EE4typeE _ZN6thrust12placeholders3_10E;
# 55 "/usr/local/cuda/include/thrust/detail/seq.h"
static 
# 55 "/usr/local/cuda/include/thrust/detail/seq.h" 3
       __attribute__((device)) 
# 55 "/usr/local/cuda/include/thrust/detail/seq.h"
                  struct _ZN6thrust6detail5seq_tE _ZN6thrust3seqE;
# 1 "/usr/local/cuda/include/common_functions.h" 1
# 249 "/usr/local/cuda/include/common_functions.h"
# 1 "/usr/local/cuda/include/math_functions.h" 1 3
# 10327 "/usr/local/cuda/include/math_functions.h" 3
# 1 "/usr/local/cuda/include/math_functions.hpp" 1 3
# 10328 "/usr/local/cuda/include/math_functions.h" 2 3



# 1 "/usr/local/cuda/include/math_functions_dbl_ptx3.h" 1 3
# 270 "/usr/local/cuda/include/math_functions_dbl_ptx3.h" 3
# 1 "/usr/local/cuda/include/math_functions_dbl_ptx3.hpp" 1 3
# 271 "/usr/local/cuda/include/math_functions_dbl_ptx3.h" 2 3
# 10332 "/usr/local/cuda/include/math_functions.h" 2 3
# 250 "/usr/local/cuda/include/common_functions.h" 2
# 57 "/usr/local/cuda/include/thrust/detail/seq.h" 2
# 10 "./thread_fence_reductions.cuh"
 
# 10 "./thread_fence_reductions.cuh" 3
__attribute__((device)) 
# 10 "./thread_fence_reductions.cuh"
           unsigned retirementCount = 0U;
# 129 "/usr/local/cuda/include/common_functions.h"
 
# 129 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device_builtin)) 
# 129 "/usr/local/cuda/include/common_functions.h"
                   extern 
# 129 "/usr/local/cuda/include/common_functions.h" 3
                   __attribute__((device)) 
# 129 "/usr/local/cuda/include/common_functions.h"
                                                  __attribute__((__artificial__)) __attribute__((__always_inline__)) int printf(const char *, ...);
# 135 "/usr/local/cuda/include/common_functions.h"
 
# 135 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device_builtin)) 
# 135 "/usr/local/cuda/include/common_functions.h"
                   extern 
# 135 "/usr/local/cuda/include/common_functions.h" 3
                   __attribute__((device)) 
# 135 "/usr/local/cuda/include/common_functions.h"
                                                  __attribute__((__artificial__)) __attribute__((__always_inline__)) int fprintf(FILE *, const char *, ...);
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       void _Z16kernel_DZdreduceILj1024EEvPdP7double2S0_i(
# 127 "./reductions.cuh"
double *entity,
# 127 "./reductions.cuh"
cuDoubleComplex *psi,
# 127 "./reductions.cuh"
double *d_wrk_mem,
# 127 "./reductions.cuh"
int n){
# 128 "./reductions.cuh"
{
# 130 "./reductions.cuh"
 unsigned __cuda_local_var_85496_18_non_const_tid;
# 131 "./reductions.cuh"
 unsigned __cuda_local_var_85497_18_non_const_i;
# 132 "./reductions.cuh"
 unsigned __cuda_local_var_85498_18_non_const_ishift;
# 130 "./reductions.cuh"
__cuda_local_var_85496_18_non_const_tid = (threadIdx.x);
# 131 "./reductions.cuh"
__cuda_local_var_85497_18_non_const_i = (((blockIdx.x) * ((blockDim.x) * 2U)) + (threadIdx.x));
# 132 "./reductions.cuh"
__cuda_local_var_85498_18_non_const_ishift = (__cuda_local_var_85497_18_non_const_i + (blockDim.x));
# 135 "./reductions.cuh"
if (__cuda_local_var_85498_18_non_const_ishift < ((unsigned)n)) {
# 135 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))) + ((entity[__cuda_local_var_85498_18_non_const_ishift]) * ((((psi[__cuda_local_var_85498_18_non_const_ishift]).x) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).x)) + (((psi[__cuda_local_var_85498_18_non_const_ishift]).y) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).y))))); } else {
# 137 "./reductions.cuh"
if (__cuda_local_var_85497_18_non_const_i < ((unsigned)n)) {
# 137 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = ((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))); } else {
# 138 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (0.0); } }
# 139 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
if (1)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 512U)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 512U)]);
# 141 "./reductions.cuh"
}
# 141 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
}
# 142 "./reductions.cuh"
if (1)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 256U)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 256U)]);
# 142 "./reductions.cuh"
}
# 142 "./reductions.cuh"
__syncthreads();
# 142 "./reductions.cuh"
}
# 143 "./reductions.cuh"
if (1)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 128U)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 128U)]);
# 143 "./reductions.cuh"
}
# 143 "./reductions.cuh"
__syncthreads();
# 143 "./reductions.cuh"
}
# 144 "./reductions.cuh"
if (1)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 64U)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 64U)]);
# 144 "./reductions.cuh"
}
# 144 "./reductions.cuh"
__syncthreads();
# 144 "./reductions.cuh"
}
# 145 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 32U) {
# 145 "./reductions.cuh"
{ {
# 30 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 32U)]); } {
# 31 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 16U)]); } {
# 32 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 8U)]); } {
# 33 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 4U)]); } {
# 34 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 2U)]); } {
# 35 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 1U)]); }
# 145 "./reductions.cuh"
} }
# 147 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid == 0U) {
# 147 "./reductions.cuh"
(d_wrk_mem[(blockIdx.x)]) = ((sdata)[0]); }
# 148 "./reductions.cuh"
}}
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       void _Z16kernel_DZdreduceILj512EEvPdP7double2S0_i(
# 127 "./reductions.cuh"
double *entity,
# 127 "./reductions.cuh"
cuDoubleComplex *psi,
# 127 "./reductions.cuh"
double *d_wrk_mem,
# 127 "./reductions.cuh"
int n){
# 128 "./reductions.cuh"
{
# 130 "./reductions.cuh"
 unsigned __cuda_local_var_85496_18_non_const_tid;
# 131 "./reductions.cuh"
 unsigned __cuda_local_var_85497_18_non_const_i;
# 132 "./reductions.cuh"
 unsigned __cuda_local_var_85498_18_non_const_ishift;
# 130 "./reductions.cuh"
__cuda_local_var_85496_18_non_const_tid = (threadIdx.x);
# 131 "./reductions.cuh"
__cuda_local_var_85497_18_non_const_i = (((blockIdx.x) * ((blockDim.x) * 2U)) + (threadIdx.x));
# 132 "./reductions.cuh"
__cuda_local_var_85498_18_non_const_ishift = (__cuda_local_var_85497_18_non_const_i + (blockDim.x));
# 135 "./reductions.cuh"
if (__cuda_local_var_85498_18_non_const_ishift < ((unsigned)n)) {
# 135 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))) + ((entity[__cuda_local_var_85498_18_non_const_ishift]) * ((((psi[__cuda_local_var_85498_18_non_const_ishift]).x) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).x)) + (((psi[__cuda_local_var_85498_18_non_const_ishift]).y) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).y))))); } else {
# 137 "./reductions.cuh"
if (__cuda_local_var_85497_18_non_const_i < ((unsigned)n)) {
# 137 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = ((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))); } else {
# 138 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (0.0); } }
# 139 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
if (0)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 512U)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 512U)]);
# 141 "./reductions.cuh"
}
# 141 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
}
# 142 "./reductions.cuh"
if (1)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 256U)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 256U)]);
# 142 "./reductions.cuh"
}
# 142 "./reductions.cuh"
__syncthreads();
# 142 "./reductions.cuh"
}
# 143 "./reductions.cuh"
if (1)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 128U)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 128U)]);
# 143 "./reductions.cuh"
}
# 143 "./reductions.cuh"
__syncthreads();
# 143 "./reductions.cuh"
}
# 144 "./reductions.cuh"
if (1)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 64U)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 64U)]);
# 144 "./reductions.cuh"
}
# 144 "./reductions.cuh"
__syncthreads();
# 144 "./reductions.cuh"
}
# 145 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 32U) {
# 145 "./reductions.cuh"
{ {
# 30 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 32U)]); } {
# 31 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 16U)]); } {
# 32 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 8U)]); } {
# 33 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 4U)]); } {
# 34 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 2U)]); } {
# 35 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 1U)]); }
# 145 "./reductions.cuh"
} }
# 147 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid == 0U) {
# 147 "./reductions.cuh"
(d_wrk_mem[(blockIdx.x)]) = ((sdata)[0]); }
# 148 "./reductions.cuh"
}}
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       void _Z16kernel_DZdreduceILj256EEvPdP7double2S0_i(
# 127 "./reductions.cuh"
double *entity,
# 127 "./reductions.cuh"
cuDoubleComplex *psi,
# 127 "./reductions.cuh"
double *d_wrk_mem,
# 127 "./reductions.cuh"
int n){
# 128 "./reductions.cuh"
{
# 130 "./reductions.cuh"
 unsigned __cuda_local_var_85496_18_non_const_tid;
# 131 "./reductions.cuh"
 unsigned __cuda_local_var_85497_18_non_const_i;
# 132 "./reductions.cuh"
 unsigned __cuda_local_var_85498_18_non_const_ishift;
# 130 "./reductions.cuh"
__cuda_local_var_85496_18_non_const_tid = (threadIdx.x);
# 131 "./reductions.cuh"
__cuda_local_var_85497_18_non_const_i = (((blockIdx.x) * ((blockDim.x) * 2U)) + (threadIdx.x));
# 132 "./reductions.cuh"
__cuda_local_var_85498_18_non_const_ishift = (__cuda_local_var_85497_18_non_const_i + (blockDim.x));
# 135 "./reductions.cuh"
if (__cuda_local_var_85498_18_non_const_ishift < ((unsigned)n)) {
# 135 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))) + ((entity[__cuda_local_var_85498_18_non_const_ishift]) * ((((psi[__cuda_local_var_85498_18_non_const_ishift]).x) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).x)) + (((psi[__cuda_local_var_85498_18_non_const_ishift]).y) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).y))))); } else {
# 137 "./reductions.cuh"
if (__cuda_local_var_85497_18_non_const_i < ((unsigned)n)) {
# 137 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = ((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))); } else {
# 138 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (0.0); } }
# 139 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
if (0)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 512U)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 512U)]);
# 141 "./reductions.cuh"
}
# 141 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
}
# 142 "./reductions.cuh"
if (0)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 256U)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 256U)]);
# 142 "./reductions.cuh"
}
# 142 "./reductions.cuh"
__syncthreads();
# 142 "./reductions.cuh"
}
# 143 "./reductions.cuh"
if (1)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 128U)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 128U)]);
# 143 "./reductions.cuh"
}
# 143 "./reductions.cuh"
__syncthreads();
# 143 "./reductions.cuh"
}
# 144 "./reductions.cuh"
if (1)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 64U)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 64U)]);
# 144 "./reductions.cuh"
}
# 144 "./reductions.cuh"
__syncthreads();
# 144 "./reductions.cuh"
}
# 145 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 32U) {
# 145 "./reductions.cuh"
{ {
# 30 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 32U)]); } {
# 31 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 16U)]); } {
# 32 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 8U)]); } {
# 33 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 4U)]); } {
# 34 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 2U)]); } {
# 35 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 1U)]); }
# 145 "./reductions.cuh"
} }
# 147 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid == 0U) {
# 147 "./reductions.cuh"
(d_wrk_mem[(blockIdx.x)]) = ((sdata)[0]); }
# 148 "./reductions.cuh"
}}
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       void _Z16kernel_DZdreduceILj128EEvPdP7double2S0_i(
# 127 "./reductions.cuh"
double *entity,
# 127 "./reductions.cuh"
cuDoubleComplex *psi,
# 127 "./reductions.cuh"
double *d_wrk_mem,
# 127 "./reductions.cuh"
int n){
# 128 "./reductions.cuh"
{
# 130 "./reductions.cuh"
 unsigned __cuda_local_var_85496_18_non_const_tid;
# 131 "./reductions.cuh"
 unsigned __cuda_local_var_85497_18_non_const_i;
# 132 "./reductions.cuh"
 unsigned __cuda_local_var_85498_18_non_const_ishift;
# 130 "./reductions.cuh"
__cuda_local_var_85496_18_non_const_tid = (threadIdx.x);
# 131 "./reductions.cuh"
__cuda_local_var_85497_18_non_const_i = (((blockIdx.x) * ((blockDim.x) * 2U)) + (threadIdx.x));
# 132 "./reductions.cuh"
__cuda_local_var_85498_18_non_const_ishift = (__cuda_local_var_85497_18_non_const_i + (blockDim.x));
# 135 "./reductions.cuh"
if (__cuda_local_var_85498_18_non_const_ishift < ((unsigned)n)) {
# 135 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))) + ((entity[__cuda_local_var_85498_18_non_const_ishift]) * ((((psi[__cuda_local_var_85498_18_non_const_ishift]).x) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).x)) + (((psi[__cuda_local_var_85498_18_non_const_ishift]).y) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).y))))); } else {
# 137 "./reductions.cuh"
if (__cuda_local_var_85497_18_non_const_i < ((unsigned)n)) {
# 137 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = ((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))); } else {
# 138 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (0.0); } }
# 139 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
if (0)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 512U)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 512U)]);
# 141 "./reductions.cuh"
}
# 141 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
}
# 142 "./reductions.cuh"
if (0)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 256U)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 256U)]);
# 142 "./reductions.cuh"
}
# 142 "./reductions.cuh"
__syncthreads();
# 142 "./reductions.cuh"
}
# 143 "./reductions.cuh"
if (0)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 128U)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 128U)]);
# 143 "./reductions.cuh"
}
# 143 "./reductions.cuh"
__syncthreads();
# 143 "./reductions.cuh"
}
# 144 "./reductions.cuh"
if (1)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 64U)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 64U)]);
# 144 "./reductions.cuh"
}
# 144 "./reductions.cuh"
__syncthreads();
# 144 "./reductions.cuh"
}
# 145 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 32U) {
# 145 "./reductions.cuh"
{ {
# 30 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 32U)]); } {
# 31 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 16U)]); } {
# 32 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 8U)]); } {
# 33 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 4U)]); } {
# 34 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 2U)]); } {
# 35 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 1U)]); }
# 145 "./reductions.cuh"
} }
# 147 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid == 0U) {
# 147 "./reductions.cuh"
(d_wrk_mem[(blockIdx.x)]) = ((sdata)[0]); }
# 148 "./reductions.cuh"
}}
# 127 "./reductions.cuh"

# 127 "./reductions.cuh" 3
__attribute__((global)) 
# 127 "./reductions.cuh"
                       void _Z16kernel_DZdreduceILj64EEvPdP7double2S0_i(
# 127 "./reductions.cuh"
double *entity,
# 127 "./reductions.cuh"
cuDoubleComplex *psi,
# 127 "./reductions.cuh"
double *d_wrk_mem,
# 127 "./reductions.cuh"
int n){
# 128 "./reductions.cuh"
{
# 130 "./reductions.cuh"
 unsigned __cuda_local_var_85496_18_non_const_tid;
# 131 "./reductions.cuh"
 unsigned __cuda_local_var_85497_18_non_const_i;
# 132 "./reductions.cuh"
 unsigned __cuda_local_var_85498_18_non_const_ishift;
# 130 "./reductions.cuh"
__cuda_local_var_85496_18_non_const_tid = (threadIdx.x);
# 131 "./reductions.cuh"
__cuda_local_var_85497_18_non_const_i = (((blockIdx.x) * ((blockDim.x) * 2U)) + (threadIdx.x));
# 132 "./reductions.cuh"
__cuda_local_var_85498_18_non_const_ishift = (__cuda_local_var_85497_18_non_const_i + (blockDim.x));
# 135 "./reductions.cuh"
if (__cuda_local_var_85498_18_non_const_ishift < ((unsigned)n)) {
# 135 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))) + ((entity[__cuda_local_var_85498_18_non_const_ishift]) * ((((psi[__cuda_local_var_85498_18_non_const_ishift]).x) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).x)) + (((psi[__cuda_local_var_85498_18_non_const_ishift]).y) * ((psi[__cuda_local_var_85498_18_non_const_ishift]).y))))); } else {
# 137 "./reductions.cuh"
if (__cuda_local_var_85497_18_non_const_i < ((unsigned)n)) {
# 137 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = ((entity[__cuda_local_var_85497_18_non_const_i]) * ((((psi[__cuda_local_var_85497_18_non_const_i]).x) * ((psi[__cuda_local_var_85497_18_non_const_i]).x)) + (((psi[__cuda_local_var_85497_18_non_const_i]).y) * ((psi[__cuda_local_var_85497_18_non_const_i]).y)))); } else {
# 138 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) = (0.0); } }
# 139 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
if (0)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 512U)
# 141 "./reductions.cuh"
{
# 141 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 512U)]);
# 141 "./reductions.cuh"
}
# 141 "./reductions.cuh"
__syncthreads();
# 141 "./reductions.cuh"
}
# 142 "./reductions.cuh"
if (0)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 256U)
# 142 "./reductions.cuh"
{
# 142 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 256U)]);
# 142 "./reductions.cuh"
}
# 142 "./reductions.cuh"
__syncthreads();
# 142 "./reductions.cuh"
}
# 143 "./reductions.cuh"
if (0)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 128U)
# 143 "./reductions.cuh"
{
# 143 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 128U)]);
# 143 "./reductions.cuh"
}
# 143 "./reductions.cuh"
__syncthreads();
# 143 "./reductions.cuh"
}
# 144 "./reductions.cuh"
if (0)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 64U)
# 144 "./reductions.cuh"
{
# 144 "./reductions.cuh"
((sdata)[__cuda_local_var_85496_18_non_const_tid]) += ((sdata)[(__cuda_local_var_85496_18_non_const_tid + 64U)]);
# 144 "./reductions.cuh"
}
# 144 "./reductions.cuh"
__syncthreads();
# 144 "./reductions.cuh"
}
# 145 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid < 32U) {
# 145 "./reductions.cuh"
{ {
# 30 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 32U)]); } {
# 31 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 16U)]); } {
# 32 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 8U)]); } {
# 33 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 4U)]); } {
# 34 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 2U)]); } {
# 35 "./reductions.cuh"
(((volatile double *)sdata)[__cuda_local_var_85496_18_non_const_tid]) += (((volatile double *)sdata)[(__cuda_local_var_85496_18_non_const_tid + 1U)]); }
# 145 "./reductions.cuh"
} }
# 147 "./reductions.cuh"
if (__cuda_local_var_85496_18_non_const_tid == 0U) {
# 147 "./reductions.cuh"
(d_wrk_mem[(blockIdx.x)]) = ((sdata)[0]); }
# 148 "./reductions.cuh"
}}
__asm__(".align 2");
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
static 
# 33 "/usr/local/cuda/include/thrust/detail/seq.h" 3
__attribute__((device)) 
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
                              __inline__ void _ZN6thrust6detail5seq_tC1Ev( struct _ZN6thrust6detail5seq_tE *const this){
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
{
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
# 33 "/usr/local/cuda/include/thrust/detail/seq.h"
}}
__asm__(".align 2");
static 
# 35 "/usr/local/cuda/include/thrust/detail/seq.h" 3
__attribute__((device)) 
# 35 "/usr/local/cuda/include/thrust/detail/seq.h"
                              __inline__ void _ZN6thrust6detail5seq_tC2Ev( struct _ZN6thrust6detail5seq_tE *const this){ { _ZN6thrust6detail5seq_tC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj0EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj0EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj0EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj0EEE *const this){ { _ZN6thrust6detail10functional8argumentILj0EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj0EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj0EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj0EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj1EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj1EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj1EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj1EEE *const this){ { _ZN6thrust6detail10functional8argumentILj1EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj1EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj1EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj1EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj2EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj2EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj2EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj2EEE *const this){ { _ZN6thrust6detail10functional8argumentILj2EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj2EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj2EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj2EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj3EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj3EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj3EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj3EEE *const this){ { _ZN6thrust6detail10functional8argumentILj3EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj3EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj3EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj3EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj4EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj4EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj4EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj4EEE *const this){ { _ZN6thrust6detail10functional8argumentILj4EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj4EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj4EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj4EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj5EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj5EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj5EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj5EEE *const this){ { _ZN6thrust6detail10functional8argumentILj5EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj5EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj5EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj5EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj6EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj6EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj6EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj6EEE *const this){ { _ZN6thrust6detail10functional8argumentILj6EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj6EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj6EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj6EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj7EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj7EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj7EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj7EEE *const this){ { _ZN6thrust6detail10functional8argumentILj7EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj7EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj7EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj7EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj8EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj8EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj8EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj8EEE *const this){ { _ZN6thrust6detail10functional8argumentILj8EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj8EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj8EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj8EEEEC1Ev(this); }}
__asm__(".align 2");
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
static 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj9EEC1Ev( struct _ZN6thrust6detail10functional8argumentILj9EEE *const this){
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
{
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
# 62 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
}}
__asm__(".align 2");
static 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h" 3
__attribute__((device)) 
# 64 "/usr/local/cuda/include/thrust/detail/functional/argument.h"
                              __inline__ void _ZN6thrust6detail10functional8argumentILj9EEC2Ev( struct _ZN6thrust6detail10functional8argumentILj9EEE *const this){ { _ZN6thrust6detail10functional8argumentILj9EEC1Ev(this); }}
__asm__(".align 2");
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
static 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 41 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEC1Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE *const this){
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
{ _ZN6thrust6detail10functional8argumentILj9EEC1Ev(((struct _ZN6thrust6detail10functional8argumentILj9EEE *)this));
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}
# 43 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
}}
__asm__(".align 2");
static 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl" 3
__attribute__((device)) 
# 45 "/usr/local/cuda/include/thrust/detail/functional/actor.inl"
                              void _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEC2Ev( struct _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEE *const this){ { _ZN6thrust6detail10functional5actorINS1_8argumentILj9EEEEC1Ev(this); }}
__asm__(".align 2");
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
static 
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h" 3
__attribute__((device)) 
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
                              __inline__ void _ZN6thrust6system6detail10sequential3tagC1Ev( struct _ZN6thrust6system6detail10sequential3tagE *const this){
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
{
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
# 53 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
}}
__asm__(".align 2");
static 
# 55 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h" 3
__attribute__((device)) 
# 55 "/usr/local/cuda/include/thrust/system/detail/sequential/execution_policy.h"
                              __inline__ void _ZN6thrust6system6detail10sequential3tagC2Ev( struct _ZN6thrust6system6detail10sequential3tagE *const this){ { _ZN6thrust6system6detail10sequential3tagC1Ev(this); }}
__asm__(".align 2");
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
static 
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC1Ev( struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE *const this){
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
{
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
{
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
}
# 561 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
}}
__asm__(".align 2");
static 
# 563 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 563 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC2Ev( struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEE *const this){ { _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC1Ev(this); }}
__asm__(".align 2");
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
static 
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEC1Ev( struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE *const this){
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
{
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
_ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj1EEC1Ev((&(this->this_exec)));
# 595 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
}}
__asm__(".align 2");
static 
# 597 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp" 3
__attribute__((device)) 
# 597 "/usr/local/cuda/include/thrust/system/cuda/detail/bulk/execution_policy.hpp"
                              __inline__ void _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEC2Ev( struct _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEE *const this){ { _ZN6thrust6system4cuda6detail5bulk_6detail6cursorILj0EEC1Ev(this); }}
