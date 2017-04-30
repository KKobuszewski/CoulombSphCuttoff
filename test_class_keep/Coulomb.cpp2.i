# 1 "./test_class_keep/Coulomb.cudafe1.gpu"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "./test_class_keep/Coulomb.cudafe1.gpu"
typedef char __nv_bool;
# 1482 "/usr/local/cuda/include/driver_types.h"
struct CUstream_st;
# 1487 "/usr/local/cuda/include/driver_types.h"
struct CUevent_st;
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
# 134 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
struct Coulomb;
# 128 "/usr/include/c++/5/bits/cpp_type_traits.h" 3

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
# 1870 "/usr/include/c++/5/bits/stl_algo.h" 3
enum _ZStUt_ {
# 1870 "/usr/include/c++/5/bits/stl_algo.h" 3
_ZSt12_S_threshold = 16};
# 2711 "/usr/include/c++/5/bits/stl_algo.h" 3
enum _ZStUt0_ {
# 2711 "/usr/include/c++/5/bits/stl_algo.h" 3
_ZSt13_S_chunk_size = 7};
# 37 "/usr/include/c++/5/bits/predefined_ops.h" 3
struct _ZN9__gnu_cxx5__ops15_Iter_less_iterE;
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
# 48 "/usr/include/stdio.h" 3
typedef struct _IO_FILE FILE;
# 49 "/usr/include/stdint.h" 3
typedef unsigned short uint16_t;
# 176 "/usr/local/cuda/include/cuComplex.h"

# 176 "/usr/local/cuda/include/cuComplex.h"
typedef struct double2 cuDoubleComplex;
# 97 "/usr/local/cuda/include/cufft.h"
typedef enum cufftResult_t cufftResult;
# 108 "/usr/local/cuda/include/cufft.h"
typedef double cufftDoubleReal;
# 114 "/usr/local/cuda/include/cufft.h"
typedef cuDoubleComplex cufftDoubleComplex;
# 128 "/usr/local/cuda/include/cufft.h"
typedef enum cufftType_t cufftType;
# 143 "/usr/local/cuda/include/cufft.h"
typedef int cufftHandle;
# 134 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
struct Coulomb {
# 157 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cufftHandle plan_forward;
# 158 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cufftHandle plan_forward_cb;
# 159 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cufftHandle plan_inverse;
# 160 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cufftHandle plan_inverse_cb;
# 165 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cuDoubleComplex *d_wrk_arr;
# 166 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
cuDoubleComplex *d_density_k;
# 167 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
double *d_density;
# 169 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
int _devId;
# 170 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
struct cudaDeviceProp dev_prop;
# 171 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
struct dim3 gpu_threads;
# 172 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
struct dim3 gpu_blocks;
# 173 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
double lcutoff;};
# 37 "/usr/include/c++/5/bits/predefined_ops.h" 3

# 37 "/usr/include/c++/5/bits/predefined_ops.h" 3
struct _ZN9__gnu_cxx5__ops15_Iter_less_iterE {char __nv_no_debug_dummy_end_padding_0;};
# 111 "/usr/local/cuda/include/cuda_device_runtime_api.h"

# 111 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 111 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 111 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              enum cudaError cudaGetLastError(void);
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 113 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              const char *cudaGetErrorString(enum cudaError);
# 122 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern 
# 122 "/usr/local/cuda/include/cuda_device_runtime_api.h" 3
__attribute__((device)) 
# 122 "/usr/local/cuda/include/cuda_device_runtime_api.h"
                              enum cudaError cudaEventRecord(struct CUevent_st *, struct CUstream_st *);
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
# 135 "/usr/local/cuda/include/common_functions.h"
 
# 135 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device_builtin)) 
# 135 "/usr/local/cuda/include/common_functions.h"
                   extern 
# 135 "/usr/local/cuda/include/common_functions.h" 3
                   __attribute__((device)) 
# 135 "/usr/local/cuda/include/common_functions.h"
                                                  int fprintf(FILE *__restrict__, const char *__restrict__, ...);
# 129 "/usr/local/cuda/include/common_functions.h"
 
# 129 "/usr/local/cuda/include/common_functions.h" 3
__attribute__((device_builtin)) 
# 129 "/usr/local/cuda/include/common_functions.h"
                   extern 
# 129 "/usr/local/cuda/include/common_functions.h" 3
                   __attribute__((device)) 
# 129 "/usr/local/cuda/include/common_functions.h"
                                                  int printf(const char *__restrict__, ...);
# 435 "/usr/local/cuda/include/math_functions.h"
 
# 435 "/usr/local/cuda/include/math_functions.h" 3
__attribute__((device_builtin)) 
# 435 "/usr/local/cuda/include/math_functions.h"
                   extern 
# 435 "/usr/local/cuda/include/math_functions.h" 3
                   __attribute__((device)) 
# 435 "/usr/local/cuda/include/math_functions.h"
                                                  __attribute__((__nothrow__)) double cos(double);
# 584 "/usr/local/cuda/include/math_functions.h"
 
# 584 "/usr/local/cuda/include/math_functions.h" 3
__attribute__((device_builtin)) 
# 584 "/usr/local/cuda/include/math_functions.h"
                   extern 
# 584 "/usr/local/cuda/include/math_functions.h" 3
                   __attribute__((device)) 
# 584 "/usr/local/cuda/include/math_functions.h"
                                                  __attribute__((__nothrow__)) double sqrt(double);
# 8678 "/usr/local/cuda/include/math_functions.h"
 
# 8678 "/usr/local/cuda/include/math_functions.h" 3
__attribute__((device_builtin)) 
# 8678 "/usr/local/cuda/include/math_functions.h"
                   extern 
# 8678 "/usr/local/cuda/include/math_functions.h" 3
                   __attribute__((device)) 
# 8678 "/usr/local/cuda/include/math_functions.h"
                                                  __attribute__((__nothrow__)) __attribute__((__const__)) float ceilf(float);
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z29__kernel_enlarge_1Dindexing__ILj64ELj48ELj32ELj64ELj72ELj80EEvP7double2Pd(cuDoubleComplex *, double *);
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z26kernel_coulomb_sph_cutoff0ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z26kernel_coulomb_sph_cutoff1ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z26kernel_coulomb_sph_cutoff2ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z31kernel_coulomb_sph_cutoff_cnst0ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z31kernel_coulomb_sph_cutoff_cnst1ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z31kernel_coulomb_sph_cutoff_cnst2ILi192ELi192ELi192EEvP7double2S1_(cuDoubleComplex *, cuDoubleComplex *);
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       extern void _Z28__kernel_lessen_1Dindexing__ILj64ELj48ELj32ELj64ELj72ELj80EEvPdS0_(double *, double *);
# 119 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
 
# 119 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 3
__attribute__((constant)) 
# 119 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
             double d_charge[1];
# 120 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
 
# 120 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 3
__attribute__((constant)) 
# 120 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
             double d_lcutoff[1];
# 121 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
 
# 121 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 3
__attribute__((constant)) 
# 121 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
             double d_kkx[192];
# 122 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
 
# 122 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 3
__attribute__((constant)) 
# 122 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
             double d_kky[192];
# 123 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
 
# 123 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 3
__attribute__((constant)) 
# 123 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
             double d_kkz[192];
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
# 125 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp" 2
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z29__kernel_enlarge_1Dindexing__ILj64ELj48ELj32ELj64ELj72ELj80EEvP7double2Pd(
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *array_in,
# 42 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
double *array_out){
# 43 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 44 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26678_12_non_const_ixyz;
# 45 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26679_12_non_const_ix;
# 45 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26679_15_non_const_iy;
# 45 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26679_18_non_const_iz;
# 45 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26679_21_non_const_i;
# 44 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26678_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 47 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26678_12_non_const_ixyz < 98304UL)
# 48 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 50 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26684_16_non_const_density;
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_21_non_const_i = __cuda_local_var_26678_12_non_const_ixyz;
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_12_non_const_ix = (__cuda_local_var_26679_21_non_const_i / 1536UL);
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_21_non_const_i = (__cuda_local_var_26679_21_non_const_i - ((__cuda_local_var_26679_12_non_const_ix * 48UL) * 32UL));
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_15_non_const_iy = (__cuda_local_var_26679_21_non_const_i / 32UL);
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_18_non_const_iz = (__cuda_local_var_26679_21_non_const_i - (__cuda_local_var_26679_15_non_const_iy * 32UL));
# 49 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 50 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26684_16_non_const_density = ((((array_in[__cuda_local_var_26678_12_non_const_ixyz]).x) * ((array_in[__cuda_local_var_26678_12_non_const_ixyz]).x)) + (((array_in[__cuda_local_var_26678_12_non_const_ixyz]).y) * ((array_in[__cuda_local_var_26678_12_non_const_ixyz]).y)));
# 53 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26679_21_non_const_i = (((80UL + __cuda_local_var_26679_18_non_const_iz) + (192UL * (72UL + __cuda_local_var_26679_15_non_const_iy))) + (36864UL * (64UL + __cuda_local_var_26679_12_non_const_ix)));
# 53 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 54 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(array_out[__cuda_local_var_26679_21_non_const_i]) = __cuda_local_var_26684_16_non_const_density;
# 55 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 56 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z26kernel_coulomb_sph_cutoff0ILi192ELi192ELi192EEvP7double2S1_(
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 137 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 138 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 139 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26719_12_non_const_ixyz;
# 140 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26720_9_non_const_ix;
# 140 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26720_13_non_const_iy;
# 140 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26720_17_non_const_iz;
# 140 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26720_21_non_const_i;
# 141 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26721_12_non_const_kx;
# 141 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26721_16_non_const_ky;
# 141 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26721_20_non_const_kz;
# 141 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26721_24_non_const__k2;
# 142 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26722_24_non_const_density;
# 139 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26719_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 144 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26719_12_non_const_ixyz < 3575808UL)
# 145 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T20;
 cuDoubleComplex __T21;
 cuDoubleComplex __T22;
 double __T23;
 double __T24;
 cuDoubleComplex __T25;
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26720_21_non_const_i = ((int)__cuda_local_var_26719_12_non_const_ixyz);
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26720_9_non_const_ix = (__cuda_local_var_26720_21_non_const_i / 18624);
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26720_21_non_const_i = (__cuda_local_var_26720_21_non_const_i - ((__cuda_local_var_26720_9_non_const_ix * 192) * 97));
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26720_13_non_const_iy = (__cuda_local_var_26720_21_non_const_i / 97);
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26720_17_non_const_iz = (__cuda_local_var_26720_21_non_const_i - (__cuda_local_var_26720_13_non_const_iy * 97));
# 147 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 151 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26720_9_non_const_ix < 96) {
# 151 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_12_non_const_kx = ((0.03272492347489367598) * ((double)__cuda_local_var_26720_9_non_const_ix)); } else {
# 152 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_12_non_const_kx = ((0.03272492347489367598) * ((double)(__cuda_local_var_26720_9_non_const_ix - 192))); }
# 154 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26720_13_non_const_iy < 96) {
# 154 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_16_non_const_ky = ((0.03272492347489367598) * ((double)__cuda_local_var_26720_13_non_const_iy)); } else {
# 155 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_16_non_const_ky = ((0.03272492347489367598) * ((double)(__cuda_local_var_26720_13_non_const_iy - 192))); }
# 157 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26720_17_non_const_iz < 96) {
# 157 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_20_non_const_kz = ((0.03272492347489367598) * ((double)__cuda_local_var_26720_17_non_const_iz)); } else {
# 158 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_20_non_const_kz = ((0.03272492347489367598) * ((double)(__cuda_local_var_26720_17_non_const_iz - 192))); }
# 161 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26721_24_non_const__k2 = (((__cuda_local_var_26721_12_non_const_kx * __cuda_local_var_26721_12_non_const_kx) + (__cuda_local_var_26721_16_non_const_ky * __cuda_local_var_26721_16_non_const_ky)) + (__cuda_local_var_26721_20_non_const_kz * __cuda_local_var_26721_20_non_const_kz));
# 162 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26722_24_non_const_density = (density_k[__cuda_local_var_26719_12_non_const_ixyz]);
# 164 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26722_24_non_const_density = ((__cuda_local_var_26721_24_non_const__k2 > (1.000000000000000078e-15)) ? (((__T20 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26721_24_non_const__k2)))))))) , ((7077888.0) * __cuda_local_var_26721_24_non_const__k2)))) , (void)(__T21 = __cuda_local_var_26722_24_non_const_density)) , ((((__T22.x) = (__T20 * (__T21.x))) , (void)((__T22.y) = (__T20 * (__T21.y)))) , __T22)) : (((__T23 = ( fdivide((((((__cuda_local_var_26722_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T24 = ( fdivide((((((__cuda_local_var_26722_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T25.x) = __T23) , (void)((__T25.y) = __T24)) , __T25)));
# 170 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26719_12_non_const_ixyz]) = __cuda_local_var_26722_24_non_const_density;
# 172 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 173 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z26kernel_coulomb_sph_cutoff1ILi192ELi192ELi192EEvP7double2S1_(
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 179 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 180 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T26;
 cuDoubleComplex __T27;
 cuDoubleComplex __T28;
# 181 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26785_12_non_const_ixyz;
# 182 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26786_9_non_const_ix;
# 182 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26786_13_non_const_iy;
# 182 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26786_17_non_const_iz;
# 182 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26786_21_non_const_i;
# 183 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26787_12_non_const_kx;
# 183 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26787_16_non_const_ky;
# 183 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26787_20_non_const_kz;
# 183 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26787_24_non_const__k2;
# 184 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26788_24_non_const_density;
# 181 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26785_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 186 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26785_12_non_const_ixyz == 0UL)
# 187 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T29;
 double __T210;
 cuDoubleComplex __T211;
# 188 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26788_24_non_const_density = (density_k[__cuda_local_var_26785_12_non_const_ixyz]);
# 189 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26788_24_non_const_density = (((__T29 = ( fdivide((((((__cuda_local_var_26788_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T210 = ( fdivide((((((__cuda_local_var_26788_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T211.x) = __T29) , (void)((__T211.y) = __T210)) , __T211));
# 191 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26785_12_non_const_ixyz]) = __cuda_local_var_26788_24_non_const_density;
# 192 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} else {
# 193 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26785_12_non_const_ixyz < 3575808UL)
# 194 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26786_21_non_const_i = ((int)__cuda_local_var_26785_12_non_const_ixyz);
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26786_9_non_const_ix = (__cuda_local_var_26786_21_non_const_i / 18624);
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26786_21_non_const_i = (__cuda_local_var_26786_21_non_const_i - ((__cuda_local_var_26786_9_non_const_ix * 192) * 97));
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26786_13_non_const_iy = (__cuda_local_var_26786_21_non_const_i / 97);
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26786_17_non_const_iz = (__cuda_local_var_26786_21_non_const_i - (__cuda_local_var_26786_13_non_const_iy * 97));
# 196 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 200 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26786_9_non_const_ix < 96) {
# 200 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_12_non_const_kx = ((0.03272492347489367598) * ((double)__cuda_local_var_26786_9_non_const_ix)); } else {
# 201 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_12_non_const_kx = ((0.03272492347489367598) * ((double)(__cuda_local_var_26786_9_non_const_ix - 192))); }
# 203 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26786_13_non_const_iy < 96) {
# 203 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_16_non_const_ky = ((0.03272492347489367598) * ((double)__cuda_local_var_26786_13_non_const_iy)); } else {
# 204 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_16_non_const_ky = ((0.03272492347489367598) * ((double)(__cuda_local_var_26786_13_non_const_iy - 192))); }
# 206 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_20_non_const_kz = ((0.03272492347489367598) * ((double)__cuda_local_var_26786_17_non_const_iz));
# 209 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26787_24_non_const__k2 = (((__cuda_local_var_26787_12_non_const_kx * __cuda_local_var_26787_12_non_const_kx) + (__cuda_local_var_26787_16_non_const_ky * __cuda_local_var_26787_16_non_const_ky)) + (__cuda_local_var_26787_20_non_const_kz * __cuda_local_var_26787_20_non_const_kz));
# 210 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26788_24_non_const_density = (density_k[__cuda_local_var_26785_12_non_const_ixyz]);
# 212 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26788_24_non_const_density = (((__T26 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26787_24_non_const__k2)))))))) , ((7077888.0) * __cuda_local_var_26787_24_non_const__k2)))) , (void)(__T27 = __cuda_local_var_26788_24_non_const_density)) , ((((__T28.x) = (__T26 * (__T27.x))) , (void)((__T28.y) = (__T26 * (__T27.y)))) , __T28));
# 213 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26785_12_non_const_ixyz]) = __cuda_local_var_26788_24_non_const_density;
# 225 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} }
# 226 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z26kernel_coulomb_sph_cutoff2ILi192ELi192ELi192EEvP7double2S1_(
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 229 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 230 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T212;
 cuDoubleComplex __T213;
 cuDoubleComplex __T214;
# 231 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26845_12_non_const_ixyz;
# 232 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26846_9_non_const_ix;
# 232 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26846_13_non_const_iy;
# 232 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26846_17_non_const_iz;
# 232 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26846_21_non_const_i;
# 233 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26847_12_non_const_kx;
# 233 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26847_16_non_const_ky;
# 233 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26847_20_non_const_kz;
# 233 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26847_24_non_const__k2;
# 234 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26848_24_non_const_density;
# 231 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26845_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 236 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26845_12_non_const_ixyz == 0UL)
# 237 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T215;
 double __T216;
 cuDoubleComplex __T217;
# 238 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26848_24_non_const_density = (density_k[__cuda_local_var_26845_12_non_const_ixyz]);
# 239 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26848_24_non_const_density = (((__T215 = ( fdivide((((((__cuda_local_var_26848_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T216 = ( fdivide((((((__cuda_local_var_26848_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T217.x) = __T215) , (void)((__T217.y) = __T216)) , __T217));
# 241 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26845_12_non_const_ixyz]) = __cuda_local_var_26848_24_non_const_density;
# 242 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} else {
# 243 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26845_12_non_const_ixyz < 3575808UL)
# 244 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26846_21_non_const_i = ((int)__cuda_local_var_26845_12_non_const_ixyz);
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26846_9_non_const_ix = (__cuda_local_var_26846_21_non_const_i / 18624);
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26846_21_non_const_i = (__cuda_local_var_26846_21_non_const_i - ((__cuda_local_var_26846_9_non_const_ix * 192) * 97));
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26846_13_non_const_iy = (__cuda_local_var_26846_21_non_const_i / 97);
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26846_17_non_const_iz = (__cuda_local_var_26846_21_non_const_i - (__cuda_local_var_26846_13_non_const_iy * 97));
# 246 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 250 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26847_12_non_const_kx = ((0.03272492347489367598) * ((double)(__cuda_local_var_26846_9_non_const_ix - (192 * ((2 * __cuda_local_var_26846_9_non_const_ix) / 192)))));
# 251 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26847_16_non_const_ky = ((0.03272492347489367598) * ((double)(__cuda_local_var_26846_13_non_const_iy - (192 * ((2 * __cuda_local_var_26846_13_non_const_iy) / 192)))));
# 252 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26847_20_non_const_kz = ((0.03272492347489367598) * ((double)(__cuda_local_var_26846_17_non_const_iz - (192 * ((2 * __cuda_local_var_26846_17_non_const_iz) / 192)))));
# 254 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26847_24_non_const__k2 = (((__cuda_local_var_26847_12_non_const_kx * __cuda_local_var_26847_12_non_const_kx) + (__cuda_local_var_26847_16_non_const_ky * __cuda_local_var_26847_16_non_const_ky)) + (__cuda_local_var_26847_20_non_const_kz * __cuda_local_var_26847_20_non_const_kz));
# 256 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26848_24_non_const_density = (density_k[__cuda_local_var_26845_12_non_const_ixyz]);
# 258 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26848_24_non_const_density = (((__T212 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26847_24_non_const__k2)))))))) , ((7077888.0) * __cuda_local_var_26847_24_non_const__k2)))) , (void)(__T213 = __cuda_local_var_26848_24_non_const_density)) , ((((__T214.x) = (__T212 * (__T213.x))) , (void)((__T214.y) = (__T212 * (__T213.y)))) , __T214));
# 259 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26845_12_non_const_ixyz]) = __cuda_local_var_26848_24_non_const_density;
# 260 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} }
# 261 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z31kernel_coulomb_sph_cutoff_cnst0ILi192ELi192ELi192EEvP7double2S1_(
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 270 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 271 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T218;
 cuDoubleComplex __T219;
 cuDoubleComplex __T220;
# 272 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26898_12_non_const_ixyz;
# 273 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26899_9_non_const_ix;
# 273 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26899_13_non_const_iy;
# 273 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26899_17_non_const_iz;
# 273 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26899_21_non_const_i;
# 274 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26900_12_non_const_k2;
# 275 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26901_24_non_const_density;
# 272 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26898_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 277 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26898_12_non_const_ixyz == 0UL)
# 278 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T221;
 double __T222;
 cuDoubleComplex __T223;
# 279 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26901_24_non_const_density = (density_k[__cuda_local_var_26898_12_non_const_ixyz]);
# 280 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26901_24_non_const_density = (((__T221 = ( fdivide((((((__cuda_local_var_26901_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T222 = ( fdivide((((((__cuda_local_var_26901_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T223.x) = __T221) , (void)((__T223.y) = __T222)) , __T223));
# 282 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26898_12_non_const_ixyz]) = __cuda_local_var_26901_24_non_const_density;
# 283 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} else {
# 284 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26898_12_non_const_ixyz < 3575808UL)
# 285 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26899_21_non_const_i = ((int)__cuda_local_var_26898_12_non_const_ixyz);
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26899_9_non_const_ix = (__cuda_local_var_26899_21_non_const_i / 18624);
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26899_21_non_const_i = (__cuda_local_var_26899_21_non_const_i - ((__cuda_local_var_26899_9_non_const_ix * 192) * 97));
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26899_13_non_const_iy = (__cuda_local_var_26899_21_non_const_i / 97);
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26899_17_non_const_iz = (__cuda_local_var_26899_21_non_const_i - (__cuda_local_var_26899_13_non_const_iy * 97));
# 286 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 289 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26900_12_non_const_k2 = (((((d_kkx)[__cuda_local_var_26899_9_non_const_ix]) * ((d_kkx)[__cuda_local_var_26899_9_non_const_ix])) + (((d_kky)[__cuda_local_var_26899_13_non_const_iy]) * ((d_kky)[__cuda_local_var_26899_13_non_const_iy]))) + (((d_kkz)[__cuda_local_var_26899_17_non_const_iz]) * ((d_kkz)[__cuda_local_var_26899_17_non_const_iz])));
# 291 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26901_24_non_const_density = (((__T218 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26900_12_non_const_k2)))))))) , ((7077888.0) * __cuda_local_var_26900_12_non_const_k2)))) , (void)(__T219 = (density_k[__cuda_local_var_26898_12_non_const_ixyz]))) , ((((__T220.x) = (__T218 * (__T219.x))) , (void)((__T220.y) = (__T218 * (__T219.y)))) , __T220));
# 292 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26898_12_non_const_ixyz]) = __cuda_local_var_26901_24_non_const_density;
# 293 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
} }
# 294 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z31kernel_coulomb_sph_cutoff_cnst1ILi192ELi192ELi192EEvP7double2S1_(
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 298 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 299 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T224;
 cuDoubleComplex __T225;
 cuDoubleComplex __T226;
# 300 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26926_12_non_const_ixyz;
# 301 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26927_9_non_const_ix;
# 301 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26927_13_non_const_iy;
# 301 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26927_17_non_const_iz;
# 301 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26927_21_non_const_i;
# 302 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26928_12_non_const_k2;
# 303 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26929_24_non_const_density;
# 300 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26926_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 305 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
while (__cuda_local_var_26926_12_non_const_ixyz < 3575808UL)
# 306 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 307 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26926_12_non_const_ixyz == 0UL)
# 308 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T227;
 double __T228;
 cuDoubleComplex __T229;
# 309 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26929_24_non_const_density = (density_k[__cuda_local_var_26926_12_non_const_ixyz]);
# 310 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26929_24_non_const_density = (((__T227 = ( fdivide((((((__cuda_local_var_26929_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T228 = ( fdivide((((((__cuda_local_var_26929_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T229.x) = __T227) , (void)((__T229.y) = __T228)) , __T229));
# 312 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26926_12_non_const_ixyz]) = __cuda_local_var_26929_24_non_const_density;
# 313 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 315 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
else
# 315 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26927_21_non_const_i = ((int)__cuda_local_var_26926_12_non_const_ixyz);
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26927_9_non_const_ix = (__cuda_local_var_26927_21_non_const_i / 18624);
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26927_21_non_const_i = (__cuda_local_var_26927_21_non_const_i - ((__cuda_local_var_26927_9_non_const_ix * 192) * 97));
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26927_13_non_const_iy = (__cuda_local_var_26927_21_non_const_i / 97);
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26927_17_non_const_iz = (__cuda_local_var_26927_21_non_const_i - (__cuda_local_var_26927_13_non_const_iy * 97));
# 316 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 319 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26928_12_non_const_k2 = (((((d_kkx)[__cuda_local_var_26927_9_non_const_ix]) * ((d_kkx)[__cuda_local_var_26927_9_non_const_ix])) + (((d_kky)[__cuda_local_var_26927_13_non_const_iy]) * ((d_kky)[__cuda_local_var_26927_13_non_const_iy]))) + (((d_kkz)[__cuda_local_var_26927_17_non_const_iz]) * ((d_kkz)[__cuda_local_var_26927_17_non_const_iz])));
# 321 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26929_24_non_const_density = (((__T224 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26928_12_non_const_k2)))))))) , ((7077888.0) * __cuda_local_var_26928_12_non_const_k2)))) , (void)(__T225 = (density_k[__cuda_local_var_26926_12_non_const_ixyz]))) , ((((__T226.x) = (__T224 * (__T225.x))) , (void)((__T226.y) = (__T224 * (__T225.y)))) , __T226));
# 322 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26926_12_non_const_ixyz]) = __cuda_local_var_26929_24_non_const_density;
# 323 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 324 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26926_12_non_const_ixyz += 1787904UL;
# 325 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 326 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z31kernel_coulomb_sph_cutoff_cnst2ILi192ELi192ELi192EEvP7double2S1_(
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *density_k,
# 329 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
cuDoubleComplex *vcoulomb_k){
# 330 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T230;
 cuDoubleComplex __T231;
 cuDoubleComplex __T232;
# 331 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26957_12_non_const_ixyz;
# 332 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26958_9_non_const_ix;
# 332 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26958_13_non_const_iy;
# 332 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26958_17_non_const_iz;
# 332 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 int __cuda_local_var_26958_21_non_const_i;
# 333 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 double __cuda_local_var_26959_12_non_const_k2;
# 334 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 cufftDoubleComplex __cuda_local_var_26960_24_non_const_density;
# 331 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26957_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 336 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
while (__cuda_local_var_26957_12_non_const_ixyz < 3575808UL)
# 337 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 338 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26957_12_non_const_ixyz == 0UL)
# 339 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{ double __T233;
 double __T234;
 cuDoubleComplex __T235;
# 340 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26960_24_non_const_density = (density_k[__cuda_local_var_26957_12_non_const_ixyz]);
# 341 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26960_24_non_const_density = (((__T233 = ( fdivide((((((__cuda_local_var_26960_24_non_const_density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0)))) , (void)(__T234 = ( fdivide((((((__cuda_local_var_26960_24_non_const_density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) , (7077888.0))))) , ((((__T235.x) = __T233) , (void)((__T235.y) = __T234)) , __T235));
# 343 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26957_12_non_const_ixyz]) = __cuda_local_var_26960_24_non_const_density;
# 344 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 346 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
else
# 346 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26958_21_non_const_i = ((int)__cuda_local_var_26957_12_non_const_ixyz);
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26958_9_non_const_ix = (__cuda_local_var_26958_21_non_const_i / 18624);
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26958_21_non_const_i = (__cuda_local_var_26958_21_non_const_i - ((__cuda_local_var_26958_9_non_const_ix * 192) * 97));
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26958_13_non_const_iy = (__cuda_local_var_26958_21_non_const_i / 97);
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26958_17_non_const_iz = (__cuda_local_var_26958_21_non_const_i - (__cuda_local_var_26958_13_non_const_iy * 97));
# 347 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 350 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26959_12_non_const_k2 = (((((d_kkx)[__cuda_local_var_26958_9_non_const_ix]) * ((d_kkx)[__cuda_local_var_26958_9_non_const_ix])) + (((d_kky)[__cuda_local_var_26958_13_non_const_iy]) * ((d_kky)[__cuda_local_var_26958_13_non_const_iy]))) + (((d_kkz)[__cuda_local_var_26958_17_non_const_iz]) * ((d_kkz)[__cuda_local_var_26958_17_non_const_iz])));
# 352 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26960_24_non_const_density = (((__T230 = ( fdivide((((d_charge)[0]) * ((1.0) - (cos((((d_lcutoff)[0]) * (sqrt(((3.0) * __cuda_local_var_26959_12_non_const_k2)))))))) , ((7077888.0) * __cuda_local_var_26959_12_non_const_k2)))) , (void)(__T231 = (density_k[__cuda_local_var_26957_12_non_const_ixyz]))) , ((((__T232.x) = (__T230 * (__T231.x))) , (void)((__T232.y) = (__T230 * (__T231.y)))) , __T232));
# 353 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(vcoulomb_k[__cuda_local_var_26957_12_non_const_ixyz]) = __cuda_local_var_26960_24_non_const_density;
# 354 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 355 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26957_12_non_const_ixyz += 893952UL;
# 356 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 357 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"

# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh" 3
__attribute__((global)) 
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
                       void _Z28__kernel_lessen_1Dindexing__ILj64ELj48ELj32ELj64ELj72ELj80EEvPdS0_(
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
double *array_in,
# 69 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
double *array_out){
# 70 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 72 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26697_12_non_const_ixyz;
# 73 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26698_12_non_const_ix;
# 73 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26698_15_non_const_iy;
# 73 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26698_18_non_const_iz;
# 73 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
 size_t __cuda_local_var_26698_21_non_const_i;
# 72 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26697_12_non_const_ixyz = ((size_t)((threadIdx.x) + ((blockIdx.x) * (blockDim.x))));
# 75 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
if (__cuda_local_var_26697_12_non_const_ixyz < 98304UL)
# 76 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
{
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_21_non_const_i = __cuda_local_var_26697_12_non_const_ixyz;
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_12_non_const_ix = (__cuda_local_var_26698_21_non_const_i / 1536UL);
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_21_non_const_i = (__cuda_local_var_26698_21_non_const_i - ((__cuda_local_var_26698_12_non_const_ix * 48UL) * 32UL));
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_15_non_const_iy = (__cuda_local_var_26698_21_non_const_i / 32UL);
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_18_non_const_iz = (__cuda_local_var_26698_21_non_const_i - (__cuda_local_var_26698_15_non_const_iy * 32UL));
# 77 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 78 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__cuda_local_var_26698_21_non_const_i = (((80UL + __cuda_local_var_26698_18_non_const_iz) + (192UL * (72UL + __cuda_local_var_26698_15_non_const_iy))) + (36864UL * (64UL + __cuda_local_var_26698_12_non_const_ix)));
# 78 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
;
# 79 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
(array_out[__cuda_local_var_26697_12_non_const_ixyz]) = (array_in[__cuda_local_var_26698_21_non_const_i]);
# 80 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}
# 81 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
}}
