# 1 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
# 1
#pragma GCC diagnostic push
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"
# 1
#pragma GCC diagnostic ignored "-Wunused-function"
# 1
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
# 1
#pragma GCC diagnostic pop
# 1
#pragma GCC diagnostic ignored "-Wunused-variable"

# 1
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false

# 1
# 56 "/usr/local/cuda/include/cuda_runtime.h"
#pragma GCC diagnostic push
# 59
#pragma GCC diagnostic ignored "-Wunused-function"
# 61 "/usr/local/cuda/include/device_types.h"
#if 0
# 61
enum cudaRoundMode { 
# 63
cudaRoundNearest, 
# 64
cudaRoundZero, 
# 65
cudaRoundPosInf, 
# 66
cudaRoundMinInf
# 67
}; 
#endif
# 149 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3
typedef long ptrdiff_t; 
# 216
typedef unsigned long size_t; 
#include "crt/host_runtime.h"
# 156 "/usr/local/cuda/include/driver_types.h"
#if 0
# 156
enum cudaError { 
# 163
cudaSuccess, 
# 169
cudaErrorMissingConfiguration, 
# 175
cudaErrorMemoryAllocation, 
# 181
cudaErrorInitializationError, 
# 191
cudaErrorLaunchFailure, 
# 200
cudaErrorPriorLaunchFailure, 
# 210
cudaErrorLaunchTimeout, 
# 219
cudaErrorLaunchOutOfResources, 
# 225
cudaErrorInvalidDeviceFunction, 
# 234
cudaErrorInvalidConfiguration, 
# 240
cudaErrorInvalidDevice, 
# 246
cudaErrorInvalidValue, 
# 252
cudaErrorInvalidPitchValue, 
# 258
cudaErrorInvalidSymbol, 
# 263
cudaErrorMapBufferObjectFailed, 
# 268
cudaErrorUnmapBufferObjectFailed, 
# 274
cudaErrorInvalidHostPointer, 
# 280
cudaErrorInvalidDevicePointer, 
# 286
cudaErrorInvalidTexture, 
# 292
cudaErrorInvalidTextureBinding, 
# 299
cudaErrorInvalidChannelDescriptor, 
# 305
cudaErrorInvalidMemcpyDirection, 
# 315
cudaErrorAddressOfConstant, 
# 324
cudaErrorTextureFetchFailed, 
# 333
cudaErrorTextureNotBound, 
# 342
cudaErrorSynchronizationError, 
# 348
cudaErrorInvalidFilterSetting, 
# 354
cudaErrorInvalidNormSetting, 
# 362
cudaErrorMixedDeviceExecution, 
# 369
cudaErrorCudartUnloading, 
# 374
cudaErrorUnknown, 
# 382
cudaErrorNotYetImplemented, 
# 391
cudaErrorMemoryValueTooLarge, 
# 398
cudaErrorInvalidResourceHandle, 
# 406
cudaErrorNotReady, 
# 413
cudaErrorInsufficientDriver, 
# 426
cudaErrorSetOnActiveProcess, 
# 432
cudaErrorInvalidSurface, 
# 438
cudaErrorNoDevice, 
# 444
cudaErrorECCUncorrectable, 
# 449
cudaErrorSharedObjectSymbolNotFound, 
# 454
cudaErrorSharedObjectInitFailed, 
# 460
cudaErrorUnsupportedLimit, 
# 466
cudaErrorDuplicateVariableName, 
# 472
cudaErrorDuplicateTextureName, 
# 478
cudaErrorDuplicateSurfaceName, 
# 488
cudaErrorDevicesUnavailable, 
# 493
cudaErrorInvalidKernelImage, 
# 501
cudaErrorNoKernelImageForDevice, 
# 514
cudaErrorIncompatibleDriverContext, 
# 521
cudaErrorPeerAccessAlreadyEnabled, 
# 528
cudaErrorPeerAccessNotEnabled, 
# 534
cudaErrorDeviceAlreadyInUse = 54, 
# 541
cudaErrorProfilerDisabled, 
# 549
cudaErrorProfilerNotInitialized, 
# 556
cudaErrorProfilerAlreadyStarted, 
# 563
cudaErrorProfilerAlreadyStopped, 
# 571
cudaErrorAssert, 
# 578
cudaErrorTooManyPeers, 
# 584
cudaErrorHostMemoryAlreadyRegistered, 
# 590
cudaErrorHostMemoryNotRegistered, 
# 595
cudaErrorOperatingSystem, 
# 601
cudaErrorPeerAccessUnsupported, 
# 608
cudaErrorLaunchMaxDepthExceeded, 
# 616
cudaErrorLaunchFileScopedTex, 
# 624
cudaErrorLaunchFileScopedSurf, 
# 639
cudaErrorSyncDepthExceeded, 
# 651
cudaErrorLaunchPendingCountExceeded, 
# 656
cudaErrorNotPermitted, 
# 662
cudaErrorNotSupported, 
# 671
cudaErrorHardwareStackError, 
# 679
cudaErrorIllegalInstruction, 
# 688
cudaErrorMisalignedAddress, 
# 699
cudaErrorInvalidAddressSpace, 
# 707
cudaErrorInvalidPc, 
# 715
cudaErrorIllegalAddress, 
# 721
cudaErrorInvalidPtx, 
# 726
cudaErrorInvalidGraphicsContext, 
# 732
cudaErrorNvlinkUncorrectable, 
# 737
cudaErrorStartupFailure = 127, 
# 745
cudaErrorApiFailureBase = 10000
# 746
}; 
#endif
# 751 "/usr/local/cuda/include/driver_types.h"
#if 0
# 751
enum cudaChannelFormatKind { 
# 753
cudaChannelFormatKindSigned, 
# 754
cudaChannelFormatKindUnsigned, 
# 755
cudaChannelFormatKindFloat, 
# 756
cudaChannelFormatKindNone
# 757
}; 
#endif
# 762 "/usr/local/cuda/include/driver_types.h"
#if 0
# 762
struct cudaChannelFormatDesc { 
# 764
int x; 
# 765
int y; 
# 766
int z; 
# 767
int w; 
# 768
cudaChannelFormatKind f; 
# 769
}; 
#endif
# 774 "/usr/local/cuda/include/driver_types.h"
typedef struct cudaArray *cudaArray_t; 
# 779
typedef const cudaArray *cudaArray_const_t; 
# 781
struct cudaArray; 
# 786
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
# 791
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
# 793
struct cudaMipmappedArray; 
# 798
#if 0
# 798
enum cudaMemoryType { 
# 800
cudaMemoryTypeHost = 1, 
# 801
cudaMemoryTypeDevice
# 802
}; 
#endif
# 807 "/usr/local/cuda/include/driver_types.h"
#if 0
# 807
enum cudaMemcpyKind { 
# 809
cudaMemcpyHostToHost, 
# 810
cudaMemcpyHostToDevice, 
# 811
cudaMemcpyDeviceToHost, 
# 812
cudaMemcpyDeviceToDevice, 
# 813
cudaMemcpyDefault
# 814
}; 
#endif
# 821 "/usr/local/cuda/include/driver_types.h"
#if 0
# 821
struct cudaPitchedPtr { 
# 823
void *ptr; 
# 824
size_t pitch; 
# 825
size_t xsize; 
# 826
size_t ysize; 
# 827
}; 
#endif
# 834 "/usr/local/cuda/include/driver_types.h"
#if 0
# 834
struct cudaExtent { 
# 836
size_t width; 
# 837
size_t height; 
# 838
size_t depth; 
# 839
}; 
#endif
# 846 "/usr/local/cuda/include/driver_types.h"
#if 0
# 846
struct cudaPos { 
# 848
size_t x; 
# 849
size_t y; 
# 850
size_t z; 
# 851
}; 
#endif
# 856 "/usr/local/cuda/include/driver_types.h"
#if 0
# 856
struct cudaMemcpy3DParms { 
# 858
cudaArray_t srcArray; 
# 859
cudaPos srcPos; 
# 860
cudaPitchedPtr srcPtr; 
# 862
cudaArray_t dstArray; 
# 863
cudaPos dstPos; 
# 864
cudaPitchedPtr dstPtr; 
# 866
cudaExtent extent; 
# 867
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 868
}; 
#endif
# 873 "/usr/local/cuda/include/driver_types.h"
#if 0
# 873
struct cudaMemcpy3DPeerParms { 
# 875
cudaArray_t srcArray; 
# 876
cudaPos srcPos; 
# 877
cudaPitchedPtr srcPtr; 
# 878
int srcDevice; 
# 880
cudaArray_t dstArray; 
# 881
cudaPos dstPos; 
# 882
cudaPitchedPtr dstPtr; 
# 883
int dstDevice; 
# 885
cudaExtent extent; 
# 886
}; 
#endif
# 891 "/usr/local/cuda/include/driver_types.h"
struct cudaGraphicsResource; 
# 896
#if 0
# 896
enum cudaGraphicsRegisterFlags { 
# 898
cudaGraphicsRegisterFlagsNone, 
# 899
cudaGraphicsRegisterFlagsReadOnly, 
# 900
cudaGraphicsRegisterFlagsWriteDiscard, 
# 901
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
# 902
cudaGraphicsRegisterFlagsTextureGather = 8
# 903
}; 
#endif
# 908 "/usr/local/cuda/include/driver_types.h"
#if 0
# 908
enum cudaGraphicsMapFlags { 
# 910
cudaGraphicsMapFlagsNone, 
# 911
cudaGraphicsMapFlagsReadOnly, 
# 912
cudaGraphicsMapFlagsWriteDiscard
# 913
}; 
#endif
# 918 "/usr/local/cuda/include/driver_types.h"
#if 0
# 918
enum cudaGraphicsCubeFace { 
# 920
cudaGraphicsCubeFacePositiveX, 
# 921
cudaGraphicsCubeFaceNegativeX, 
# 922
cudaGraphicsCubeFacePositiveY, 
# 923
cudaGraphicsCubeFaceNegativeY, 
# 924
cudaGraphicsCubeFacePositiveZ, 
# 925
cudaGraphicsCubeFaceNegativeZ
# 926
}; 
#endif
# 931 "/usr/local/cuda/include/driver_types.h"
#if 0
# 931
enum cudaResourceType { 
# 933
cudaResourceTypeArray, 
# 934
cudaResourceTypeMipmappedArray, 
# 935
cudaResourceTypeLinear, 
# 936
cudaResourceTypePitch2D
# 937
}; 
#endif
# 942 "/usr/local/cuda/include/driver_types.h"
#if 0
# 942
enum cudaResourceViewFormat { 
# 944
cudaResViewFormatNone, 
# 945
cudaResViewFormatUnsignedChar1, 
# 946
cudaResViewFormatUnsignedChar2, 
# 947
cudaResViewFormatUnsignedChar4, 
# 948
cudaResViewFormatSignedChar1, 
# 949
cudaResViewFormatSignedChar2, 
# 950
cudaResViewFormatSignedChar4, 
# 951
cudaResViewFormatUnsignedShort1, 
# 952
cudaResViewFormatUnsignedShort2, 
# 953
cudaResViewFormatUnsignedShort4, 
# 954
cudaResViewFormatSignedShort1, 
# 955
cudaResViewFormatSignedShort2, 
# 956
cudaResViewFormatSignedShort4, 
# 957
cudaResViewFormatUnsignedInt1, 
# 958
cudaResViewFormatUnsignedInt2, 
# 959
cudaResViewFormatUnsignedInt4, 
# 960
cudaResViewFormatSignedInt1, 
# 961
cudaResViewFormatSignedInt2, 
# 962
cudaResViewFormatSignedInt4, 
# 963
cudaResViewFormatHalf1, 
# 964
cudaResViewFormatHalf2, 
# 965
cudaResViewFormatHalf4, 
# 966
cudaResViewFormatFloat1, 
# 967
cudaResViewFormatFloat2, 
# 968
cudaResViewFormatFloat4, 
# 969
cudaResViewFormatUnsignedBlockCompressed1, 
# 970
cudaResViewFormatUnsignedBlockCompressed2, 
# 971
cudaResViewFormatUnsignedBlockCompressed3, 
# 972
cudaResViewFormatUnsignedBlockCompressed4, 
# 973
cudaResViewFormatSignedBlockCompressed4, 
# 974
cudaResViewFormatUnsignedBlockCompressed5, 
# 975
cudaResViewFormatSignedBlockCompressed5, 
# 976
cudaResViewFormatUnsignedBlockCompressed6H, 
# 977
cudaResViewFormatSignedBlockCompressed6H, 
# 978
cudaResViewFormatUnsignedBlockCompressed7
# 979
}; 
#endif
# 984 "/usr/local/cuda/include/driver_types.h"
#if 0
# 984
struct cudaResourceDesc { 
# 985
cudaResourceType resType; 
# 987
union { 
# 988
struct { 
# 989
cudaArray_t array; 
# 990
} array; 
# 991
struct { 
# 992
cudaMipmappedArray_t mipmap; 
# 993
} mipmap; 
# 994
struct { 
# 995
void *devPtr; 
# 996
cudaChannelFormatDesc desc; 
# 997
size_t sizeInBytes; 
# 998
} linear; 
# 999
struct { 
# 1000
void *devPtr; 
# 1001
cudaChannelFormatDesc desc; 
# 1002
size_t width; 
# 1003
size_t height; 
# 1004
size_t pitchInBytes; 
# 1005
} pitch2D; 
# 1006
} res; 
# 1007
}; 
#endif
# 1012 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1012
struct cudaResourceViewDesc { 
# 1014
cudaResourceViewFormat format; 
# 1015
size_t width; 
# 1016
size_t height; 
# 1017
size_t depth; 
# 1018
unsigned firstMipmapLevel; 
# 1019
unsigned lastMipmapLevel; 
# 1020
unsigned firstLayer; 
# 1021
unsigned lastLayer; 
# 1022
}; 
#endif
# 1027 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1027
struct cudaPointerAttributes { 
# 1033
cudaMemoryType memoryType; 
# 1044
int device; 
# 1050
void *devicePointer; 
# 1056
void *hostPointer; 
# 1061
int isManaged; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
# 1062
}; 
#endif
# 1067 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1067
struct cudaFuncAttributes { 
# 1074
size_t sharedSizeBytes; 
# 1080
size_t constSizeBytes; 
# 1085
size_t localSizeBytes; 
# 1092
int maxThreadsPerBlock; 
# 1097
int numRegs; 
# 1104
int ptxVersion; 
# 1111
int binaryVersion; 
# 1117
int cacheModeCA; 
# 1118
}; 
#endif
# 1123 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1123
enum cudaFuncCache { 
# 1125
cudaFuncCachePreferNone, 
# 1126
cudaFuncCachePreferShared, 
# 1127
cudaFuncCachePreferL1, 
# 1128
cudaFuncCachePreferEqual
# 1129
}; 
#endif
# 1135 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1135
enum cudaSharedMemConfig { 
# 1137
cudaSharedMemBankSizeDefault, 
# 1138
cudaSharedMemBankSizeFourByte, 
# 1139
cudaSharedMemBankSizeEightByte
# 1140
}; 
#endif
# 1145 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1145
enum cudaComputeMode { 
# 1147
cudaComputeModeDefault, 
# 1148
cudaComputeModeExclusive, 
# 1149
cudaComputeModeProhibited, 
# 1150
cudaComputeModeExclusiveProcess
# 1151
}; 
#endif
# 1156 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1156
enum cudaLimit { 
# 1158
cudaLimitStackSize, 
# 1159
cudaLimitPrintfFifoSize, 
# 1160
cudaLimitMallocHeapSize, 
# 1161
cudaLimitDevRuntimeSyncDepth, 
# 1162
cudaLimitDevRuntimePendingLaunchCount
# 1163
}; 
#endif
# 1168 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1168
enum cudaMemoryAdvise { 
# 1170
cudaMemAdviseSetReadMostly = 1, 
# 1171
cudaMemAdviseUnsetReadMostly, 
# 1172
cudaMemAdviseSetPreferredLocation, 
# 1173
cudaMemAdviseUnsetPreferredLocation, 
# 1174
cudaMemAdviseSetAccessedBy, 
# 1175
cudaMemAdviseUnsetAccessedBy
# 1176
}; 
#endif
# 1181 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1181
enum cudaMemRangeAttribute { 
# 1183
cudaMemRangeAttributeReadMostly = 1, 
# 1184
cudaMemRangeAttributePreferredLocation, 
# 1185
cudaMemRangeAttributeAccessedBy, 
# 1186
cudaMemRangeAttributeLastPrefetchLocation
# 1187
}; 
#endif
# 1192 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1192
enum cudaOutputMode { 
# 1194
cudaKeyValuePair, 
# 1195
cudaCSV
# 1196
}; 
#endif
# 1201 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1201
enum cudaDeviceAttr { 
# 1203
cudaDevAttrMaxThreadsPerBlock = 1, 
# 1204
cudaDevAttrMaxBlockDimX, 
# 1205
cudaDevAttrMaxBlockDimY, 
# 1206
cudaDevAttrMaxBlockDimZ, 
# 1207
cudaDevAttrMaxGridDimX, 
# 1208
cudaDevAttrMaxGridDimY, 
# 1209
cudaDevAttrMaxGridDimZ, 
# 1210
cudaDevAttrMaxSharedMemoryPerBlock, 
# 1211
cudaDevAttrTotalConstantMemory, 
# 1212
cudaDevAttrWarpSize, 
# 1213
cudaDevAttrMaxPitch, 
# 1214
cudaDevAttrMaxRegistersPerBlock, 
# 1215
cudaDevAttrClockRate, 
# 1216
cudaDevAttrTextureAlignment, 
# 1217
cudaDevAttrGpuOverlap, 
# 1218
cudaDevAttrMultiProcessorCount, 
# 1219
cudaDevAttrKernelExecTimeout, 
# 1220
cudaDevAttrIntegrated, 
# 1221
cudaDevAttrCanMapHostMemory, 
# 1222
cudaDevAttrComputeMode, 
# 1223
cudaDevAttrMaxTexture1DWidth, 
# 1224
cudaDevAttrMaxTexture2DWidth, 
# 1225
cudaDevAttrMaxTexture2DHeight, 
# 1226
cudaDevAttrMaxTexture3DWidth, 
# 1227
cudaDevAttrMaxTexture3DHeight, 
# 1228
cudaDevAttrMaxTexture3DDepth, 
# 1229
cudaDevAttrMaxTexture2DLayeredWidth, 
# 1230
cudaDevAttrMaxTexture2DLayeredHeight, 
# 1231
cudaDevAttrMaxTexture2DLayeredLayers, 
# 1232
cudaDevAttrSurfaceAlignment, 
# 1233
cudaDevAttrConcurrentKernels, 
# 1234
cudaDevAttrEccEnabled, 
# 1235
cudaDevAttrPciBusId, 
# 1236
cudaDevAttrPciDeviceId, 
# 1237
cudaDevAttrTccDriver, 
# 1238
cudaDevAttrMemoryClockRate, 
# 1239
cudaDevAttrGlobalMemoryBusWidth, 
# 1240
cudaDevAttrL2CacheSize, 
# 1241
cudaDevAttrMaxThreadsPerMultiProcessor, 
# 1242
cudaDevAttrAsyncEngineCount, 
# 1243
cudaDevAttrUnifiedAddressing, 
# 1244
cudaDevAttrMaxTexture1DLayeredWidth, 
# 1245
cudaDevAttrMaxTexture1DLayeredLayers, 
# 1246
cudaDevAttrMaxTexture2DGatherWidth = 45, 
# 1247
cudaDevAttrMaxTexture2DGatherHeight, 
# 1248
cudaDevAttrMaxTexture3DWidthAlt, 
# 1249
cudaDevAttrMaxTexture3DHeightAlt, 
# 1250
cudaDevAttrMaxTexture3DDepthAlt, 
# 1251
cudaDevAttrPciDomainId, 
# 1252
cudaDevAttrTexturePitchAlignment, 
# 1253
cudaDevAttrMaxTextureCubemapWidth, 
# 1254
cudaDevAttrMaxTextureCubemapLayeredWidth, 
# 1255
cudaDevAttrMaxTextureCubemapLayeredLayers, 
# 1256
cudaDevAttrMaxSurface1DWidth, 
# 1257
cudaDevAttrMaxSurface2DWidth, 
# 1258
cudaDevAttrMaxSurface2DHeight, 
# 1259
cudaDevAttrMaxSurface3DWidth, 
# 1260
cudaDevAttrMaxSurface3DHeight, 
# 1261
cudaDevAttrMaxSurface3DDepth, 
# 1262
cudaDevAttrMaxSurface1DLayeredWidth, 
# 1263
cudaDevAttrMaxSurface1DLayeredLayers, 
# 1264
cudaDevAttrMaxSurface2DLayeredWidth, 
# 1265
cudaDevAttrMaxSurface2DLayeredHeight, 
# 1266
cudaDevAttrMaxSurface2DLayeredLayers, 
# 1267
cudaDevAttrMaxSurfaceCubemapWidth, 
# 1268
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
# 1269
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
# 1270
cudaDevAttrMaxTexture1DLinearWidth, 
# 1271
cudaDevAttrMaxTexture2DLinearWidth, 
# 1272
cudaDevAttrMaxTexture2DLinearHeight, 
# 1273
cudaDevAttrMaxTexture2DLinearPitch, 
# 1274
cudaDevAttrMaxTexture2DMipmappedWidth, 
# 1275
cudaDevAttrMaxTexture2DMipmappedHeight, 
# 1276
cudaDevAttrComputeCapabilityMajor, 
# 1277
cudaDevAttrComputeCapabilityMinor, 
# 1278
cudaDevAttrMaxTexture1DMipmappedWidth, 
# 1279
cudaDevAttrStreamPrioritiesSupported, 
# 1280
cudaDevAttrGlobalL1CacheSupported, 
# 1281
cudaDevAttrLocalL1CacheSupported, 
# 1282
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
# 1283
cudaDevAttrMaxRegistersPerMultiprocessor, 
# 1284
cudaDevAttrManagedMemory, 
# 1285
cudaDevAttrIsMultiGpuBoard, 
# 1286
cudaDevAttrMultiGpuBoardGroupID, 
# 1287
cudaDevAttrHostNativeAtomicSupported, 
# 1288
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
# 1289
cudaDevAttrPageableMemoryAccess, 
# 1290
cudaDevAttrConcurrentManagedAccess, 
# 1291
cudaDevAttrComputePreemptionSupported, 
# 1292
cudaDevAttrCanUseHostPointerForRegisteredMem
# 1293
}; 
#endif
# 1299 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1299
enum cudaDeviceP2PAttr { 
# 1300
cudaDevP2PAttrPerformanceRank = 1, 
# 1301
cudaDevP2PAttrAccessSupported, 
# 1302
cudaDevP2PAttrNativeAtomicSupported
# 1303
}; 
#endif
# 1307 "/usr/local/cuda/include/driver_types.h"
#if 0
# 1307
struct cudaDeviceProp { 
# 1309
char name[256]; 
# 1310
size_t totalGlobalMem; 
# 1311
size_t sharedMemPerBlock; 
# 1312
int regsPerBlock; 
# 1313
int warpSize; 
# 1314
size_t memPitch; 
# 1315
int maxThreadsPerBlock; 
# 1316
int maxThreadsDim[3]; 
# 1317
int maxGridSize[3]; 
# 1318
int clockRate; 
# 1319
size_t totalConstMem; 
# 1320
int major; 
# 1321
int minor; 
# 1322
size_t textureAlignment; 
# 1323
size_t texturePitchAlignment; 
# 1324
int deviceOverlap; 
# 1325
int multiProcessorCount; 
# 1326
int kernelExecTimeoutEnabled; 
# 1327
int integrated; 
# 1328
int canMapHostMemory; 
# 1329
int computeMode; 
# 1330
int maxTexture1D; 
# 1331
int maxTexture1DMipmap; 
# 1332
int maxTexture1DLinear; 
# 1333
int maxTexture2D[2]; 
# 1334
int maxTexture2DMipmap[2]; 
# 1335
int maxTexture2DLinear[3]; 
# 1336
int maxTexture2DGather[2]; 
# 1337
int maxTexture3D[3]; 
# 1338
int maxTexture3DAlt[3]; 
# 1339
int maxTextureCubemap; 
# 1340
int maxTexture1DLayered[2]; 
# 1341
int maxTexture2DLayered[3]; 
# 1342
int maxTextureCubemapLayered[2]; 
# 1343
int maxSurface1D; 
# 1344
int maxSurface2D[2]; 
# 1345
int maxSurface3D[3]; 
# 1346
int maxSurface1DLayered[2]; 
# 1347
int maxSurface2DLayered[3]; 
# 1348
int maxSurfaceCubemap; 
# 1349
int maxSurfaceCubemapLayered[2]; 
# 1350
size_t surfaceAlignment; 
# 1351
int concurrentKernels; 
# 1352
int ECCEnabled; 
# 1353
int pciBusID; 
# 1354
int pciDeviceID; 
# 1355
int pciDomainID; 
# 1356
int tccDriver; 
# 1357
int asyncEngineCount; 
# 1358
int unifiedAddressing; 
# 1359
int memoryClockRate; 
# 1360
int memoryBusWidth; 
# 1361
int l2CacheSize; 
# 1362
int maxThreadsPerMultiProcessor; 
# 1363
int streamPrioritiesSupported; 
# 1364
int globalL1CacheSupported; 
# 1365
int localL1CacheSupported; 
# 1366
size_t sharedMemPerMultiprocessor; 
# 1367
int regsPerMultiprocessor; 
# 1368
int managedMemory; 
# 1369
int isMultiGpuBoard; 
# 1370
int multiGpuBoardGroupID; 
# 1371
int hostNativeAtomicSupported; 
# 1372
int singleToDoublePrecisionPerfRatio; 
# 1373
int pageableMemoryAccess; 
# 1374
int concurrentManagedAccess; 
# 1375
}; 
#endif
# 1458 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef 
# 1455
struct cudaIpcEventHandle_st { 
# 1457
char reserved[64]; 
# 1458
} cudaIpcEventHandle_t; 
#endif
# 1466 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef 
# 1463
struct cudaIpcMemHandle_st { 
# 1465
char reserved[64]; 
# 1466
} cudaIpcMemHandle_t; 
#endif
# 1477 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef cudaError 
# 1477
cudaError_t; 
#endif
# 1482 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef struct CUstream_st *
# 1482
cudaStream_t; 
#endif
# 1487 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef struct CUevent_st *
# 1487
cudaEvent_t; 
#endif
# 1492 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef cudaGraphicsResource *
# 1492
cudaGraphicsResource_t; 
#endif
# 1497 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef struct CUuuid_st 
# 1497
cudaUUID_t; 
#endif
# 1502 "/usr/local/cuda/include/driver_types.h"
#if 0
typedef cudaOutputMode 
# 1502
cudaOutputMode_t; 
#endif
# 84 "/usr/local/cuda/include/surface_types.h"
#if 0
# 84
enum cudaSurfaceBoundaryMode { 
# 86
cudaBoundaryModeZero, 
# 87
cudaBoundaryModeClamp, 
# 88
cudaBoundaryModeTrap
# 89
}; 
#endif
# 94 "/usr/local/cuda/include/surface_types.h"
#if 0
# 94
enum cudaSurfaceFormatMode { 
# 96
cudaFormatModeForced, 
# 97
cudaFormatModeAuto
# 98
}; 
#endif
# 103 "/usr/local/cuda/include/surface_types.h"
#if 0
# 103
struct surfaceReference { 
# 108
cudaChannelFormatDesc channelDesc; 
# 109
}; 
#endif
# 114 "/usr/local/cuda/include/surface_types.h"
#if 0
typedef unsigned long long 
# 114
cudaSurfaceObject_t; 
#endif
# 84 "/usr/local/cuda/include/texture_types.h"
#if 0
# 84
enum cudaTextureAddressMode { 
# 86
cudaAddressModeWrap, 
# 87
cudaAddressModeClamp, 
# 88
cudaAddressModeMirror, 
# 89
cudaAddressModeBorder
# 90
}; 
#endif
# 95 "/usr/local/cuda/include/texture_types.h"
#if 0
# 95
enum cudaTextureFilterMode { 
# 97
cudaFilterModePoint, 
# 98
cudaFilterModeLinear
# 99
}; 
#endif
# 104 "/usr/local/cuda/include/texture_types.h"
#if 0
# 104
enum cudaTextureReadMode { 
# 106
cudaReadModeElementType, 
# 107
cudaReadModeNormalizedFloat
# 108
}; 
#endif
# 113 "/usr/local/cuda/include/texture_types.h"
#if 0
# 113
struct textureReference { 
# 118
int normalized; 
# 122
cudaTextureFilterMode filterMode; 
# 126
cudaTextureAddressMode addressMode[3]; 
# 130
cudaChannelFormatDesc channelDesc; 
# 134
int sRGB; 
# 138
unsigned maxAnisotropy; 
# 142
cudaTextureFilterMode mipmapFilterMode; 
# 146
float mipmapLevelBias; 
# 150
float minMipmapLevelClamp; 
# 154
float maxMipmapLevelClamp; 
# 155
int __cudaReserved[15]; 
# 156
}; 
#endif
# 161 "/usr/local/cuda/include/texture_types.h"
#if 0
# 161
struct cudaTextureDesc { 
# 166
cudaTextureAddressMode addressMode[3]; 
# 170
cudaTextureFilterMode filterMode; 
# 174
cudaTextureReadMode readMode; 
# 178
int sRGB; 
# 182
float borderColor[4]; 
# 186
int normalizedCoords; 
# 190
unsigned maxAnisotropy; 
# 194
cudaTextureFilterMode mipmapFilterMode; 
# 198
float mipmapLevelBias; 
# 202
float minMipmapLevelClamp; 
# 206
float maxMipmapLevelClamp; 
# 207
}; 
#endif
# 212 "/usr/local/cuda/include/texture_types.h"
#if 0
typedef unsigned long long 
# 212
cudaTextureObject_t; 
#endif
# 98 "/usr/local/cuda/include/vector_types.h"
#if 0
# 98
struct char1 { 
# 100
signed char x; 
# 101
}; 
#endif
# 103 "/usr/local/cuda/include/vector_types.h"
#if 0
# 103
struct uchar1 { 
# 105
unsigned char x; 
# 106
}; 
#endif
# 109 "/usr/local/cuda/include/vector_types.h"
#if 0
# 109
struct __attribute((aligned(2))) char2 { 
# 111
signed char x, y; 
# 112
}; 
#endif
# 114 "/usr/local/cuda/include/vector_types.h"
#if 0
# 114
struct __attribute((aligned(2))) uchar2 { 
# 116
unsigned char x, y; 
# 117
}; 
#endif
# 119 "/usr/local/cuda/include/vector_types.h"
#if 0
# 119
struct char3 { 
# 121
signed char x, y, z; 
# 122
}; 
#endif
# 124 "/usr/local/cuda/include/vector_types.h"
#if 0
# 124
struct uchar3 { 
# 126
unsigned char x, y, z; 
# 127
}; 
#endif
# 129 "/usr/local/cuda/include/vector_types.h"
#if 0
# 129
struct __attribute((aligned(4))) char4 { 
# 131
signed char x, y, z, w; 
# 132
}; 
#endif
# 134 "/usr/local/cuda/include/vector_types.h"
#if 0
# 134
struct __attribute((aligned(4))) uchar4 { 
# 136
unsigned char x, y, z, w; 
# 137
}; 
#endif
# 139 "/usr/local/cuda/include/vector_types.h"
#if 0
# 139
struct short1 { 
# 141
short x; 
# 142
}; 
#endif
# 144 "/usr/local/cuda/include/vector_types.h"
#if 0
# 144
struct ushort1 { 
# 146
unsigned short x; 
# 147
}; 
#endif
# 149 "/usr/local/cuda/include/vector_types.h"
#if 0
# 149
struct __attribute((aligned(4))) short2 { 
# 151
short x, y; 
# 152
}; 
#endif
# 154 "/usr/local/cuda/include/vector_types.h"
#if 0
# 154
struct __attribute((aligned(4))) ushort2 { 
# 156
unsigned short x, y; 
# 157
}; 
#endif
# 159 "/usr/local/cuda/include/vector_types.h"
#if 0
# 159
struct short3 { 
# 161
short x, y, z; 
# 162
}; 
#endif
# 164 "/usr/local/cuda/include/vector_types.h"
#if 0
# 164
struct ushort3 { 
# 166
unsigned short x, y, z; 
# 167
}; 
#endif
# 169 "/usr/local/cuda/include/vector_types.h"
#if 0
# 169
struct __attribute((aligned(8))) short4 { short x; short y; short z; short w; }; 
#endif
# 170 "/usr/local/cuda/include/vector_types.h"
#if 0
# 170
struct __attribute((aligned(8))) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
# 172 "/usr/local/cuda/include/vector_types.h"
#if 0
# 172
struct int1 { 
# 174
int x; 
# 175
}; 
#endif
# 177 "/usr/local/cuda/include/vector_types.h"
#if 0
# 177
struct uint1 { 
# 179
unsigned x; 
# 180
}; 
#endif
# 182 "/usr/local/cuda/include/vector_types.h"
#if 0
# 182
struct __attribute((aligned(8))) int2 { int x; int y; }; 
#endif
# 183 "/usr/local/cuda/include/vector_types.h"
#if 0
# 183
struct __attribute((aligned(8))) uint2 { unsigned x; unsigned y; }; 
#endif
# 185 "/usr/local/cuda/include/vector_types.h"
#if 0
# 185
struct int3 { 
# 187
int x, y, z; 
# 188
}; 
#endif
# 190 "/usr/local/cuda/include/vector_types.h"
#if 0
# 190
struct uint3 { 
# 192
unsigned x, y, z; 
# 193
}; 
#endif
# 195 "/usr/local/cuda/include/vector_types.h"
#if 0
# 195
struct __attribute((aligned(16))) int4 { 
# 197
int x, y, z, w; 
# 198
}; 
#endif
# 200 "/usr/local/cuda/include/vector_types.h"
#if 0
# 200
struct __attribute((aligned(16))) uint4 { 
# 202
unsigned x, y, z, w; 
# 203
}; 
#endif
# 205 "/usr/local/cuda/include/vector_types.h"
#if 0
# 205
struct long1 { 
# 207
long x; 
# 208
}; 
#endif
# 210 "/usr/local/cuda/include/vector_types.h"
#if 0
# 210
struct ulong1 { 
# 212
unsigned long x; 
# 213
}; 
#endif
# 220 "/usr/local/cuda/include/vector_types.h"
#if 0
# 220
struct __attribute((aligned((2) * sizeof(long)))) long2 { 
# 222
long x, y; 
# 223
}; 
#endif
# 225 "/usr/local/cuda/include/vector_types.h"
#if 0
# 225
struct __attribute((aligned((2) * sizeof(unsigned long)))) ulong2 { 
# 227
unsigned long x, y; 
# 228
}; 
#endif
# 232 "/usr/local/cuda/include/vector_types.h"
#if 0
# 232
struct long3 { 
# 234
long x, y, z; 
# 235
}; 
#endif
# 237 "/usr/local/cuda/include/vector_types.h"
#if 0
# 237
struct ulong3 { 
# 239
unsigned long x, y, z; 
# 240
}; 
#endif
# 242 "/usr/local/cuda/include/vector_types.h"
#if 0
# 242
struct __attribute((aligned(16))) long4 { 
# 244
long x, y, z, w; 
# 245
}; 
#endif
# 247 "/usr/local/cuda/include/vector_types.h"
#if 0
# 247
struct __attribute((aligned(16))) ulong4 { 
# 249
unsigned long x, y, z, w; 
# 250
}; 
#endif
# 252 "/usr/local/cuda/include/vector_types.h"
#if 0
# 252
struct float1 { 
# 254
float x; 
# 255
}; 
#endif
# 274 "/usr/local/cuda/include/vector_types.h"
#if 0
# 274
struct __attribute((aligned(8))) float2 { float x; float y; }; 
#endif
# 279 "/usr/local/cuda/include/vector_types.h"
#if 0
# 279
struct float3 { 
# 281
float x, y, z; 
# 282
}; 
#endif
# 284 "/usr/local/cuda/include/vector_types.h"
#if 0
# 284
struct __attribute((aligned(16))) float4 { 
# 286
float x, y, z, w; 
# 287
}; 
#endif
# 289 "/usr/local/cuda/include/vector_types.h"
#if 0
# 289
struct longlong1 { 
# 291
long long x; 
# 292
}; 
#endif
# 294 "/usr/local/cuda/include/vector_types.h"
#if 0
# 294
struct ulonglong1 { 
# 296
unsigned long long x; 
# 297
}; 
#endif
# 299 "/usr/local/cuda/include/vector_types.h"
#if 0
# 299
struct __attribute((aligned(16))) longlong2 { 
# 301
long long x, y; 
# 302
}; 
#endif
# 304 "/usr/local/cuda/include/vector_types.h"
#if 0
# 304
struct __attribute((aligned(16))) ulonglong2 { 
# 306
unsigned long long x, y; 
# 307
}; 
#endif
# 309 "/usr/local/cuda/include/vector_types.h"
#if 0
# 309
struct longlong3 { 
# 311
long long x, y, z; 
# 312
}; 
#endif
# 314 "/usr/local/cuda/include/vector_types.h"
#if 0
# 314
struct ulonglong3 { 
# 316
unsigned long long x, y, z; 
# 317
}; 
#endif
# 319 "/usr/local/cuda/include/vector_types.h"
#if 0
# 319
struct __attribute((aligned(16))) longlong4 { 
# 321
long long x, y, z, w; 
# 322
}; 
#endif
# 324 "/usr/local/cuda/include/vector_types.h"
#if 0
# 324
struct __attribute((aligned(16))) ulonglong4 { 
# 326
unsigned long long x, y, z, w; 
# 327
}; 
#endif
# 329 "/usr/local/cuda/include/vector_types.h"
#if 0
# 329
struct double1 { 
# 331
double x; 
# 332
}; 
#endif
# 334 "/usr/local/cuda/include/vector_types.h"
#if 0
# 334
struct __attribute((aligned(16))) double2 { 
# 336
double x, y; 
# 337
}; 
#endif
# 339 "/usr/local/cuda/include/vector_types.h"
#if 0
# 339
struct double3 { 
# 341
double x, y, z; 
# 342
}; 
#endif
# 344 "/usr/local/cuda/include/vector_types.h"
#if 0
# 344
struct __attribute((aligned(16))) double4 { 
# 346
double x, y, z, w; 
# 347
}; 
#endif
# 362 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef char1 
# 362
char1; 
#endif
# 363 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uchar1 
# 363
uchar1; 
#endif
# 364 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef char2 
# 364
char2; 
#endif
# 365 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uchar2 
# 365
uchar2; 
#endif
# 366 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef char3 
# 366
char3; 
#endif
# 367 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uchar3 
# 367
uchar3; 
#endif
# 368 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef char4 
# 368
char4; 
#endif
# 369 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uchar4 
# 369
uchar4; 
#endif
# 370 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef short1 
# 370
short1; 
#endif
# 371 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ushort1 
# 371
ushort1; 
#endif
# 372 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef short2 
# 372
short2; 
#endif
# 373 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ushort2 
# 373
ushort2; 
#endif
# 374 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef short3 
# 374
short3; 
#endif
# 375 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ushort3 
# 375
ushort3; 
#endif
# 376 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef short4 
# 376
short4; 
#endif
# 377 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ushort4 
# 377
ushort4; 
#endif
# 378 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef int1 
# 378
int1; 
#endif
# 379 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uint1 
# 379
uint1; 
#endif
# 380 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef int2 
# 380
int2; 
#endif
# 381 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uint2 
# 381
uint2; 
#endif
# 382 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef int3 
# 382
int3; 
#endif
# 383 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uint3 
# 383
uint3; 
#endif
# 384 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef int4 
# 384
int4; 
#endif
# 385 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef uint4 
# 385
uint4; 
#endif
# 386 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef long1 
# 386
long1; 
#endif
# 387 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulong1 
# 387
ulong1; 
#endif
# 388 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef long2 
# 388
long2; 
#endif
# 389 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulong2 
# 389
ulong2; 
#endif
# 390 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef long3 
# 390
long3; 
#endif
# 391 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulong3 
# 391
ulong3; 
#endif
# 392 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef long4 
# 392
long4; 
#endif
# 393 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulong4 
# 393
ulong4; 
#endif
# 394 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef float1 
# 394
float1; 
#endif
# 395 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef float2 
# 395
float2; 
#endif
# 396 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef float3 
# 396
float3; 
#endif
# 397 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef float4 
# 397
float4; 
#endif
# 398 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef longlong1 
# 398
longlong1; 
#endif
# 399 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulonglong1 
# 399
ulonglong1; 
#endif
# 400 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef longlong2 
# 400
longlong2; 
#endif
# 401 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulonglong2 
# 401
ulonglong2; 
#endif
# 402 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef longlong3 
# 402
longlong3; 
#endif
# 403 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulonglong3 
# 403
ulonglong3; 
#endif
# 404 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef longlong4 
# 404
longlong4; 
#endif
# 405 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef ulonglong4 
# 405
ulonglong4; 
#endif
# 406 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef double1 
# 406
double1; 
#endif
# 407 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef double2 
# 407
double2; 
#endif
# 408 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef double3 
# 408
double3; 
#endif
# 409 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef double4 
# 409
double4; 
#endif
# 417 "/usr/local/cuda/include/vector_types.h"
#if 0
# 417
struct dim3 { 
# 419
unsigned x, y, z; 
# 425
}; 
#endif
# 427 "/usr/local/cuda/include/vector_types.h"
#if 0
typedef dim3 
# 427
dim3; 
#endif
# 70 "/usr/local/cuda/include/library_types.h"
typedef 
# 54
enum cudaDataType_t { 
# 56
CUDA_R_16F = 2, 
# 57
CUDA_C_16F = 6, 
# 58
CUDA_R_32F = 0, 
# 59
CUDA_C_32F = 4, 
# 60
CUDA_R_64F = 1, 
# 61
CUDA_C_64F = 5, 
# 62
CUDA_R_8I = 3, 
# 63
CUDA_C_8I = 7, 
# 64
CUDA_R_8U, 
# 65
CUDA_C_8U, 
# 66
CUDA_R_32I, 
# 67
CUDA_C_32I, 
# 68
CUDA_R_32U, 
# 69
CUDA_C_32U
# 70
} cudaDataType; 
# 78
typedef 
# 73
enum libraryPropertyType_t { 
# 75
MAJOR_VERSION, 
# 76
MINOR_VERSION, 
# 77
PATCH_LEVEL
# 78
} libraryPropertyType; 
# 104 "/usr/local/cuda/include/cuda_device_runtime_api.h"
extern "C" {
# 106
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 107
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 108
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 109
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 110
extern cudaError_t cudaDeviceSynchronize(); 
# 111
extern cudaError_t cudaGetLastError(); 
# 112
extern cudaError_t cudaPeekAtLastError(); 
# 113
extern const char *cudaGetErrorString(cudaError_t error); 
# 114
extern const char *cudaGetErrorName(cudaError_t error); 
# 115
extern cudaError_t cudaGetDeviceCount(int * count); 
# 116
extern cudaError_t cudaGetDevice(int * device); 
# 117
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 118
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 119
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 120
__attribute__((unused)) extern cudaError_t cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 121
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 122
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
# 123
__attribute__((unused)) extern cudaError_t cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
# 124
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 125
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 126
extern cudaError_t cudaFree(void * devPtr); 
# 127
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 128
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 129
__attribute__((unused)) extern cudaError_t cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
# 130
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 131
__attribute__((unused)) extern cudaError_t cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
# 132
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 133
__attribute__((unused)) extern cudaError_t cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
# 134
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 135
__attribute__((unused)) extern cudaError_t cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
# 136
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 137
__attribute__((unused)) extern cudaError_t cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
# 138
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 139
__attribute__((unused)) extern cudaError_t cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
# 140
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 161
__attribute__((unused)) extern void *cudaGetParameterBuffer(size_t alignment, size_t size); 
# 189
__attribute__((unused)) extern void *cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
# 190
__attribute__((unused)) extern cudaError_t cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 191
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
# 209
__attribute__((unused)) extern cudaError_t cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
# 210
__attribute__((unused)) extern cudaError_t cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
# 213
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
# 214
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 216
}
# 218
template< class T> static inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
# 219
template< class T> static inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
# 220
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
# 221
template< class T> static inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
# 219 "/usr/local/cuda/include/cuda_runtime_api.h"
extern "C" {
# 252
extern cudaError_t cudaDeviceReset(); 
# 269
extern cudaError_t cudaDeviceSynchronize(); 
# 344
extern cudaError_t cudaDeviceSetLimit(cudaLimit limit, size_t value); 
# 373
extern cudaError_t cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
# 404
extern cudaError_t cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 439
extern cudaError_t cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 481
extern cudaError_t cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
# 510
extern cudaError_t cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
# 552
extern cudaError_t cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
# 575
extern cudaError_t cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
# 602
extern cudaError_t cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
# 644
extern cudaError_t cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
# 679
extern cudaError_t cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
# 717
extern cudaError_t cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
# 767
extern cudaError_t cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
# 797
extern cudaError_t cudaIpcCloseMemHandle(void * devPtr); 
# 837
extern cudaError_t cudaThreadExit(); 
# 861
extern cudaError_t cudaThreadSynchronize(); 
# 908
extern cudaError_t cudaThreadSetLimit(cudaLimit limit, size_t value); 
# 939
extern cudaError_t cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
# 974
extern cudaError_t cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
# 1020
extern cudaError_t cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
# 1074
extern cudaError_t cudaGetLastError(); 
# 1115
extern cudaError_t cudaPeekAtLastError(); 
# 1130
extern const char *cudaGetErrorName(cudaError_t error); 
# 1145
extern const char *cudaGetErrorString(cudaError_t error); 
# 1175
extern cudaError_t cudaGetDeviceCount(int * count); 
# 1421
extern cudaError_t cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
# 1593
extern cudaError_t cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
# 1628
extern cudaError_t cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
# 1647
extern cudaError_t cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
# 1681
extern cudaError_t cudaSetDevice(int device); 
# 1698
extern cudaError_t cudaGetDevice(int * device); 
# 1727
extern cudaError_t cudaSetValidDevices(int * device_arr, int len); 
# 1789
extern cudaError_t cudaSetDeviceFlags(unsigned flags); 
# 1830
extern cudaError_t cudaGetDeviceFlags(unsigned * flags); 
# 1867
extern cudaError_t cudaStreamCreate(cudaStream_t * pStream); 
# 1896
extern cudaError_t cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
# 1939
extern cudaError_t cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
# 1963
extern cudaError_t cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
# 1984
extern cudaError_t cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
# 2005
extern cudaError_t cudaStreamDestroy(cudaStream_t stream); 
# 2037
extern cudaError_t cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
# 2051
typedef void (*cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
# 2108
extern cudaError_t cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
# 2128
extern cudaError_t cudaStreamSynchronize(cudaStream_t stream); 
# 2149
extern cudaError_t cudaStreamQuery(cudaStream_t stream); 
# 2220
extern cudaError_t cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
# 2256
extern cudaError_t cudaEventCreate(cudaEvent_t * event); 
# 2290
extern cudaError_t cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
# 2321
extern cudaError_t cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
# 2353
extern cudaError_t cudaEventQuery(cudaEvent_t event); 
# 2385
extern cudaError_t cudaEventSynchronize(cudaEvent_t event); 
# 2410
extern cudaError_t cudaEventDestroy(cudaEvent_t event); 
# 2451
extern cudaError_t cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
# 2510
extern cudaError_t cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
# 2560
extern cudaError_t cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
# 2614
extern cudaError_t cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
# 2648
extern cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
# 2671
extern cudaError_t cudaSetDoubleForDevice(double * d); 
# 2694
extern cudaError_t cudaSetDoubleForHost(double * d); 
# 2750
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
# 2794
extern cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 2845
extern cudaError_t cudaConfigureCall(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, cudaStream_t stream = 0); 
# 2874
extern cudaError_t cudaSetupArgument(const void * arg, size_t size, size_t offset); 
# 2912
extern cudaError_t cudaLaunch(const void * func); 
# 3030
extern cudaError_t cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
# 3056
extern cudaError_t cudaMalloc(void ** devPtr, size_t size); 
# 3085
extern cudaError_t cudaMallocHost(void ** ptr, size_t size); 
# 3124
extern cudaError_t cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
# 3166
extern cudaError_t cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
# 3193
extern cudaError_t cudaFree(void * devPtr); 
# 3213
extern cudaError_t cudaFreeHost(void * ptr); 
# 3235
extern cudaError_t cudaFreeArray(cudaArray_t array); 
# 3257
extern cudaError_t cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
# 3316
extern cudaError_t cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
# 3393
extern cudaError_t cudaHostRegister(void * ptr, size_t size, unsigned flags); 
# 3412
extern cudaError_t cudaHostUnregister(void * ptr); 
# 3454
extern cudaError_t cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
# 3473
extern cudaError_t cudaHostGetFlags(unsigned * pFlags, void * pHost); 
# 3508
extern cudaError_t cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
# 3643
extern cudaError_t cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
# 3764
extern cudaError_t cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
# 3790
extern cudaError_t cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
# 3890
extern cudaError_t cudaMemcpy3D(const cudaMemcpy3DParms * p); 
# 3918
extern cudaError_t cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
# 4029
extern cudaError_t cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
# 4052
extern cudaError_t cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
# 4071
extern cudaError_t cudaMemGetInfo(size_t * free, size_t * total); 
# 4092
extern cudaError_t cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
# 4130
extern cudaError_t cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
# 4162
extern cudaError_t cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
# 4200
extern cudaError_t cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
# 4237
extern cudaError_t cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
# 4275
extern cudaError_t cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4320
extern cudaError_t cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4366
extern cudaError_t cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
# 4412
extern cudaError_t cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
# 4455
extern cudaError_t cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
# 4493
extern cudaError_t cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
# 4531
extern cudaError_t cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
# 4582
extern cudaError_t cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4614
extern cudaError_t cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
# 4660
extern cudaError_t cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4705
extern cudaError_t cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4765
extern cudaError_t cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4820
extern cudaError_t cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4874
extern cudaError_t cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4920
extern cudaError_t cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4966
extern cudaError_t cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
# 4992
extern cudaError_t cudaMemset(void * devPtr, int value, size_t count); 
# 5022
extern cudaError_t cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
# 5065
extern cudaError_t cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
# 5097
extern cudaError_t cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
# 5134
extern cudaError_t cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
# 5184
extern cudaError_t cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
# 5207
extern cudaError_t cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
# 5229
extern cudaError_t cudaGetSymbolSize(size_t * size, const void * symbol); 
# 5296
extern cudaError_t cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
# 5382
extern cudaError_t cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
# 5438
extern cudaError_t cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
# 5474
extern cudaError_t cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
# 5627
extern cudaError_t cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
# 5665
extern cudaError_t cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
# 5704
extern cudaError_t cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
# 5723
extern cudaError_t cudaDeviceDisablePeerAccess(int peerDevice); 
# 5783
extern cudaError_t cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
# 5815
extern cudaError_t cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
# 5851
extern cudaError_t cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 5883
extern cudaError_t cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
# 5912
extern cudaError_t cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
# 5946
extern cudaError_t cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
# 5971
extern cudaError_t cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
# 6011
extern cudaError_t cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
# 6046
extern cudaChannelFormatDesc cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
# 6093
extern cudaError_t cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = ((2147483647) * 2U) + 1U); 
# 6144
extern cudaError_t cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
# 6172
extern cudaError_t cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6200
extern cudaError_t cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
# 6221
extern cudaError_t cudaUnbindTexture(const textureReference * texref); 
# 6246
extern cudaError_t cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
# 6271
extern cudaError_t cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
# 6311
extern cudaError_t cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
# 6330
extern cudaError_t cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
# 6556
extern cudaError_t cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
# 6571
extern cudaError_t cudaDestroyTextureObject(cudaTextureObject_t texObject); 
# 6587
extern cudaError_t cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
# 6603
extern cudaError_t cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
# 6620
extern cudaError_t cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
# 6659
extern cudaError_t cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
# 6674
extern cudaError_t cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
# 6689
extern cudaError_t cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
# 6716
extern cudaError_t cudaDriverGetVersion(int * driverVersion); 
# 6733
extern cudaError_t cudaRuntimeGetVersion(int * runtimeVersion); 
# 6738
extern cudaError_t cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
# 6964
}
# 107 "/usr/local/cuda/include/channel_descriptor.h"
template< class T> inline cudaChannelFormatDesc cudaCreateChannelDesc() 
# 108
{ 
# 109
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
# 110
} 
# 112
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
# 113
{ 
# 114
int e = (((int)sizeof(unsigned short)) * 8); 
# 116
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 117
} 
# 119
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
# 120
{ 
# 121
int e = (((int)sizeof(unsigned short)) * 8); 
# 123
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 124
} 
# 126
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
# 127
{ 
# 128
int e = (((int)sizeof(unsigned short)) * 8); 
# 130
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 131
} 
# 133
static inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
# 134
{ 
# 135
int e = (((int)sizeof(unsigned short)) * 8); 
# 137
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 138
} 
# 140
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
# 141
{ 
# 142
int e = (((int)sizeof(char)) * 8); 
# 147
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 149
} 
# 151
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
# 152
{ 
# 153
int e = (((int)sizeof(signed char)) * 8); 
# 155
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 156
} 
# 158
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
# 159
{ 
# 160
int e = (((int)sizeof(unsigned char)) * 8); 
# 162
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 163
} 
# 165
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
# 166
{ 
# 167
int e = (((int)sizeof(signed char)) * 8); 
# 169
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 170
} 
# 172
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
# 173
{ 
# 174
int e = (((int)sizeof(unsigned char)) * 8); 
# 176
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 177
} 
# 179
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
# 180
{ 
# 181
int e = (((int)sizeof(signed char)) * 8); 
# 183
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 184
} 
# 186
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
# 187
{ 
# 188
int e = (((int)sizeof(unsigned char)) * 8); 
# 190
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 191
} 
# 193
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
# 194
{ 
# 195
int e = (((int)sizeof(signed char)) * 8); 
# 197
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 198
} 
# 200
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
# 201
{ 
# 202
int e = (((int)sizeof(unsigned char)) * 8); 
# 204
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 205
} 
# 207
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
# 208
{ 
# 209
int e = (((int)sizeof(short)) * 8); 
# 211
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 212
} 
# 214
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
# 215
{ 
# 216
int e = (((int)sizeof(unsigned short)) * 8); 
# 218
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 219
} 
# 221
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
# 222
{ 
# 223
int e = (((int)sizeof(short)) * 8); 
# 225
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 226
} 
# 228
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
# 229
{ 
# 230
int e = (((int)sizeof(unsigned short)) * 8); 
# 232
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 233
} 
# 235
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
# 236
{ 
# 237
int e = (((int)sizeof(short)) * 8); 
# 239
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 240
} 
# 242
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
# 243
{ 
# 244
int e = (((int)sizeof(unsigned short)) * 8); 
# 246
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 247
} 
# 249
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
# 250
{ 
# 251
int e = (((int)sizeof(short)) * 8); 
# 253
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 254
} 
# 256
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
# 257
{ 
# 258
int e = (((int)sizeof(unsigned short)) * 8); 
# 260
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 261
} 
# 263
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
# 264
{ 
# 265
int e = (((int)sizeof(int)) * 8); 
# 267
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 268
} 
# 270
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
# 271
{ 
# 272
int e = (((int)sizeof(unsigned)) * 8); 
# 274
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 275
} 
# 277
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
# 278
{ 
# 279
int e = (((int)sizeof(int)) * 8); 
# 281
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
# 282
} 
# 284
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
# 285
{ 
# 286
int e = (((int)sizeof(unsigned)) * 8); 
# 288
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
# 289
} 
# 291
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
# 292
{ 
# 293
int e = (((int)sizeof(int)) * 8); 
# 295
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
# 296
} 
# 298
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
# 299
{ 
# 300
int e = (((int)sizeof(unsigned)) * 8); 
# 302
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
# 303
} 
# 305
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
# 306
{ 
# 307
int e = (((int)sizeof(int)) * 8); 
# 309
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
# 310
} 
# 312
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
# 313
{ 
# 314
int e = (((int)sizeof(unsigned)) * 8); 
# 316
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
# 317
} 
# 379
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
# 380
{ 
# 381
int e = (((int)sizeof(float)) * 8); 
# 383
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 384
} 
# 386
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
# 387
{ 
# 388
int e = (((int)sizeof(float)) * 8); 
# 390
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
# 391
} 
# 393
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
# 394
{ 
# 395
int e = (((int)sizeof(float)) * 8); 
# 397
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
# 398
} 
# 400
template<> inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
# 401
{ 
# 402
int e = (((int)sizeof(float)) * 8); 
# 404
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
# 405
} 
# 79 "/usr/local/cuda/include/driver_functions.h"
static inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
# 80
{ 
# 81
cudaPitchedPtr s; 
# 83
(s.ptr) = d; 
# 84
(s.pitch) = p; 
# 85
(s.xsize) = xsz; 
# 86
(s.ysize) = ysz; 
# 88
return s; 
# 89
} 
# 106
static inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
# 107
{ 
# 108
cudaPos p; 
# 110
(p.x) = x; 
# 111
(p.y) = y; 
# 112
(p.z) = z; 
# 114
return p; 
# 115
} 
# 132
static inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
# 133
{ 
# 134
cudaExtent e; 
# 136
(e.width) = w; 
# 137
(e.height) = h; 
# 138
(e.depth) = d; 
# 140
return e; 
# 141
} 
# 75 "/usr/local/cuda/include/vector_functions.hpp"
static inline char1 make_char1(signed char x) 
# 76
{ 
# 77
char1 t; (t.x) = x; return t; 
# 78
} 
# 80
static inline uchar1 make_uchar1(unsigned char x) 
# 81
{ 
# 82
uchar1 t; (t.x) = x; return t; 
# 83
} 
# 85
static inline char2 make_char2(signed char x, signed char y) 
# 86
{ 
# 87
char2 t; (t.x) = x; (t.y) = y; return t; 
# 88
} 
# 90
static inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
# 91
{ 
# 92
uchar2 t; (t.x) = x; (t.y) = y; return t; 
# 93
} 
# 95
static inline char3 make_char3(signed char x, signed char y, signed char z) 
# 96
{ 
# 97
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 98
} 
# 100
static inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
# 101
{ 
# 102
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 103
} 
# 105
static inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
# 106
{ 
# 107
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 108
} 
# 110
static inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
# 111
{ 
# 112
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 113
} 
# 115
static inline short1 make_short1(short x) 
# 116
{ 
# 117
short1 t; (t.x) = x; return t; 
# 118
} 
# 120
static inline ushort1 make_ushort1(unsigned short x) 
# 121
{ 
# 122
ushort1 t; (t.x) = x; return t; 
# 123
} 
# 125
static inline short2 make_short2(short x, short y) 
# 126
{ 
# 127
short2 t; (t.x) = x; (t.y) = y; return t; 
# 128
} 
# 130
static inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
# 131
{ 
# 132
ushort2 t; (t.x) = x; (t.y) = y; return t; 
# 133
} 
# 135
static inline short3 make_short3(short x, short y, short z) 
# 136
{ 
# 137
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 138
} 
# 140
static inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
# 141
{ 
# 142
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 143
} 
# 145
static inline short4 make_short4(short x, short y, short z, short w) 
# 146
{ 
# 147
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 148
} 
# 150
static inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
# 151
{ 
# 152
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 153
} 
# 155
static inline int1 make_int1(int x) 
# 156
{ 
# 157
int1 t; (t.x) = x; return t; 
# 158
} 
# 160
static inline uint1 make_uint1(unsigned x) 
# 161
{ 
# 162
uint1 t; (t.x) = x; return t; 
# 163
} 
# 165
static inline int2 make_int2(int x, int y) 
# 166
{ 
# 167
int2 t; (t.x) = x; (t.y) = y; return t; 
# 168
} 
# 170
static inline uint2 make_uint2(unsigned x, unsigned y) 
# 171
{ 
# 172
uint2 t; (t.x) = x; (t.y) = y; return t; 
# 173
} 
# 175
static inline int3 make_int3(int x, int y, int z) 
# 176
{ 
# 177
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 178
} 
# 180
static inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
# 181
{ 
# 182
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 183
} 
# 185
static inline int4 make_int4(int x, int y, int z, int w) 
# 186
{ 
# 187
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 188
} 
# 190
static inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
# 191
{ 
# 192
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 193
} 
# 195
static inline long1 make_long1(long x) 
# 196
{ 
# 197
long1 t; (t.x) = x; return t; 
# 198
} 
# 200
static inline ulong1 make_ulong1(unsigned long x) 
# 201
{ 
# 202
ulong1 t; (t.x) = x; return t; 
# 203
} 
# 205
static inline long2 make_long2(long x, long y) 
# 206
{ 
# 207
long2 t; (t.x) = x; (t.y) = y; return t; 
# 208
} 
# 210
static inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
# 211
{ 
# 212
ulong2 t; (t.x) = x; (t.y) = y; return t; 
# 213
} 
# 215
static inline long3 make_long3(long x, long y, long z) 
# 216
{ 
# 217
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 218
} 
# 220
static inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
# 221
{ 
# 222
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 223
} 
# 225
static inline long4 make_long4(long x, long y, long z, long w) 
# 226
{ 
# 227
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 228
} 
# 230
static inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
# 231
{ 
# 232
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 233
} 
# 235
static inline float1 make_float1(float x) 
# 236
{ 
# 237
float1 t; (t.x) = x; return t; 
# 238
} 
# 240
static inline float2 make_float2(float x, float y) 
# 241
{ 
# 242
float2 t; (t.x) = x; (t.y) = y; return t; 
# 243
} 
# 245
static inline float3 make_float3(float x, float y, float z) 
# 246
{ 
# 247
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 248
} 
# 250
static inline float4 make_float4(float x, float y, float z, float w) 
# 251
{ 
# 252
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 253
} 
# 255
static inline longlong1 make_longlong1(long long x) 
# 256
{ 
# 257
longlong1 t; (t.x) = x; return t; 
# 258
} 
# 260
static inline ulonglong1 make_ulonglong1(unsigned long long x) 
# 261
{ 
# 262
ulonglong1 t; (t.x) = x; return t; 
# 263
} 
# 265
static inline longlong2 make_longlong2(long long x, long long y) 
# 266
{ 
# 267
longlong2 t; (t.x) = x; (t.y) = y; return t; 
# 268
} 
# 270
static inline ulonglong2 make_ulonglong2(unsigned long long x, unsigned long long y) 
# 271
{ 
# 272
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
# 273
} 
# 275
static inline longlong3 make_longlong3(long long x, long long y, long long z) 
# 276
{ 
# 277
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 278
} 
# 280
static inline ulonglong3 make_ulonglong3(unsigned long long x, unsigned long long y, unsigned long long z) 
# 281
{ 
# 282
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 283
} 
# 285
static inline longlong4 make_longlong4(long long x, long long y, long long z, long long w) 
# 286
{ 
# 287
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 288
} 
# 290
static inline ulonglong4 make_ulonglong4(unsigned long long x, unsigned long long y, unsigned long long z, unsigned long long w) 
# 291
{ 
# 292
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 293
} 
# 295
static inline double1 make_double1(double x) 
# 296
{ 
# 297
double1 t; (t.x) = x; return t; 
# 298
} 
# 300
static inline double2 make_double2(double x, double y) 
# 301
{ 
# 302
double2 t; (t.x) = x; (t.y) = y; return t; 
# 303
} 
# 305
static inline double3 make_double3(double x, double y, double z) 
# 306
{ 
# 307
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
# 308
} 
# 310
static inline double4 make_double4(double x, double y, double z, double w) 
# 311
{ 
# 312
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
# 313
} 
# 27 "/usr/include/string.h" 3
extern "C" {
# 42
extern void *memcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 43
 __attribute((__nonnull__(1, 2))); 
# 46
extern void *memmove(void * __dest, const void * __src, size_t __n) throw()
# 47
 __attribute((__nonnull__(1, 2))); 
# 54
extern void *memccpy(void *__restrict__ __dest, const void *__restrict__ __src, int __c, size_t __n) throw()
# 56
 __attribute((__nonnull__(1, 2))); 
# 62
extern void *memset(void * __s, int __c, size_t __n) throw() __attribute((__nonnull__(1))); 
# 65
extern int memcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 66
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 70
extern "C++" {
# 72
extern void *memchr(void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 73
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 74
extern const void *memchr(const void * __s, int __c, size_t __n) throw() __asm__("memchr")
# 75
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 90
}
# 101
extern "C++" void *rawmemchr(void * __s, int __c) throw() __asm__("rawmemchr")
# 102
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 103
extern "C++" const void *rawmemchr(const void * __s, int __c) throw() __asm__("rawmemchr")
# 104
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 112
extern "C++" void *memrchr(void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 113
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 114
extern "C++" const void *memrchr(const void * __s, int __c, size_t __n) throw() __asm__("memrchr")
# 115
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 125
extern char *strcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 126
 __attribute((__nonnull__(1, 2))); 
# 128
extern char *strncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 130
 __attribute((__nonnull__(1, 2))); 
# 133
extern char *strcat(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 134
 __attribute((__nonnull__(1, 2))); 
# 136
extern char *strncat(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 137
 __attribute((__nonnull__(1, 2))); 
# 140
extern int strcmp(const char * __s1, const char * __s2) throw()
# 141
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 143
extern int strncmp(const char * __s1, const char * __s2, size_t __n) throw()
# 144
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 147
extern int strcoll(const char * __s1, const char * __s2) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 150
extern size_t strxfrm(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 152
 __attribute((__nonnull__(2))); 
# 39 "/usr/include/xlocale.h" 3
typedef 
# 27
struct __locale_struct { 
# 30
struct __locale_data *__locales[13]; 
# 33
const unsigned short *__ctype_b; 
# 34
const int *__ctype_tolower; 
# 35
const int *__ctype_toupper; 
# 38
const char *__names[13]; 
# 39
} *__locale_t; 
# 42
typedef __locale_t locale_t; 
# 162 "/usr/include/string.h" 3
extern int strcoll_l(const char * __s1, const char * __s2, __locale_t __l) throw()
# 163
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 165
extern size_t strxfrm_l(char * __dest, const char * __src, size_t __n, __locale_t __l) throw()
# 166
 __attribute((__nonnull__(2, 4))); 
# 171
extern char *strdup(const char * __s) throw()
# 172
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 179
extern char *strndup(const char * __string, size_t __n) throw()
# 180
 __attribute((__malloc__)) __attribute((__nonnull__(1))); 
# 209
extern "C++" {
# 211
extern char *strchr(char * __s, int __c) throw() __asm__("strchr")
# 212
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 213
extern const char *strchr(const char * __s, int __c) throw() __asm__("strchr")
# 214
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 229
}
# 236
extern "C++" {
# 238
extern char *strrchr(char * __s, int __c) throw() __asm__("strrchr")
# 239
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 240
extern const char *strrchr(const char * __s, int __c) throw() __asm__("strrchr")
# 241
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 256
}
# 267
extern "C++" char *strchrnul(char * __s, int __c) throw() __asm__("strchrnul")
# 268
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 269
extern "C++" const char *strchrnul(const char * __s, int __c) throw() __asm__("strchrnul")
# 270
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 280
extern size_t strcspn(const char * __s, const char * __reject) throw()
# 281
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 284
extern size_t strspn(const char * __s, const char * __accept) throw()
# 285
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 288
extern "C++" {
# 290
extern char *strpbrk(char * __s, const char * __accept) throw() __asm__("strpbrk")
# 291
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 292
extern const char *strpbrk(const char * __s, const char * __accept) throw() __asm__("strpbrk")
# 293
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 308
}
# 315
extern "C++" {
# 317
extern char *strstr(char * __haystack, const char * __needle) throw() __asm__("strstr")
# 318
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 319
extern const char *strstr(const char * __haystack, const char * __needle) throw() __asm__("strstr")
# 320
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 335
}
# 343
extern char *strtok(char *__restrict__ __s, const char *__restrict__ __delim) throw()
# 344
 __attribute((__nonnull__(2))); 
# 349
extern char *__strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 352
 __attribute((__nonnull__(2, 3))); 
# 354
extern char *strtok_r(char *__restrict__ __s, const char *__restrict__ __delim, char **__restrict__ __save_ptr) throw()
# 356
 __attribute((__nonnull__(2, 3))); 
# 362
extern "C++" char *strcasestr(char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 363
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 364
extern "C++" const char *strcasestr(const char * __haystack, const char * __needle) throw() __asm__("strcasestr")
# 366
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 377
extern void *memmem(const void * __haystack, size_t __haystacklen, const void * __needle, size_t __needlelen) throw()
# 379
 __attribute((__pure__)) __attribute((__nonnull__(1, 3))); 
# 383
extern void *__mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 385
 __attribute((__nonnull__(1, 2))); 
# 386
extern void *mempcpy(void *__restrict__ __dest, const void *__restrict__ __src, size_t __n) throw()
# 388
 __attribute((__nonnull__(1, 2))); 
# 394
extern size_t strlen(const char * __s) throw()
# 395
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 401
extern size_t strnlen(const char * __string, size_t __maxlen) throw()
# 402
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 408
extern char *strerror(int __errnum) throw(); 
# 433
extern char *strerror_r(int __errnum, char * __buf, size_t __buflen) throw()
# 434
 __attribute((__nonnull__(2))); 
# 440
extern char *strerror_l(int __errnum, __locale_t __l) throw(); 
# 446
extern void __bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 450
extern void bcopy(const void * __src, void * __dest, size_t __n) throw()
# 451
 __attribute((__nonnull__(1, 2))); 
# 454
extern void bzero(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 457
extern int bcmp(const void * __s1, const void * __s2, size_t __n) throw()
# 458
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 462
extern "C++" {
# 464
extern char *index(char * __s, int __c) throw() __asm__("index")
# 465
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 466
extern const char *index(const char * __s, int __c) throw() __asm__("index")
# 467
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 482
}
# 490
extern "C++" {
# 492
extern char *rindex(char * __s, int __c) throw() __asm__("rindex")
# 493
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 494
extern const char *rindex(const char * __s, int __c) throw() __asm__("rindex")
# 495
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 510
}
# 518
extern int ffs(int __i) throw() __attribute((const)); 
# 523
extern int ffsl(long __l) throw() __attribute((const)); 
# 524
__extension__ extern int ffsll(long long __ll) throw()
# 525
 __attribute((const)); 
# 529
extern int strcasecmp(const char * __s1, const char * __s2) throw()
# 530
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 533
extern int strncasecmp(const char * __s1, const char * __s2, size_t __n) throw()
# 534
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 540
extern int strcasecmp_l(const char * __s1, const char * __s2, __locale_t __loc) throw()
# 542
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 3))); 
# 544
extern int strncasecmp_l(const char * __s1, const char * __s2, size_t __n, __locale_t __loc) throw()
# 546
 __attribute((__pure__)) __attribute((__nonnull__(1, 2, 4))); 
# 552
extern char *strsep(char **__restrict__ __stringp, const char *__restrict__ __delim) throw()
# 554
 __attribute((__nonnull__(1, 2))); 
# 559
extern char *strsignal(int __sig) throw(); 
# 562
extern char *__stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 563
 __attribute((__nonnull__(1, 2))); 
# 564
extern char *stpcpy(char *__restrict__ __dest, const char *__restrict__ __src) throw()
# 565
 __attribute((__nonnull__(1, 2))); 
# 569
extern char *__stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 571
 __attribute((__nonnull__(1, 2))); 
# 572
extern char *stpncpy(char *__restrict__ __dest, const char *__restrict__ __src, size_t __n) throw()
# 574
 __attribute((__nonnull__(1, 2))); 
# 579
extern int strverscmp(const char * __s1, const char * __s2) throw()
# 580
 __attribute((__pure__)) __attribute((__nonnull__(1, 2))); 
# 583
extern char *strfry(char * __string) throw() __attribute((__nonnull__(1))); 
# 586
extern void *memfrob(void * __s, size_t __n) throw() __attribute((__nonnull__(1))); 
# 594
extern "C++" char *basename(char * __filename) throw() __asm__("basename")
# 595
 __attribute((__nonnull__(1))); 
# 596
extern "C++" const char *basename(const char * __filename) throw() __asm__("basename")
# 597
 __attribute((__nonnull__(1))); 
# 658
}
# 29 "/usr/include/time.h" 3
extern "C" {
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char; 
# 31
typedef unsigned short __u_short; 
# 32
typedef unsigned __u_int; 
# 33
typedef unsigned long __u_long; 
# 36
typedef signed char __int8_t; 
# 37
typedef unsigned char __uint8_t; 
# 38
typedef signed short __int16_t; 
# 39
typedef unsigned short __uint16_t; 
# 40
typedef signed int __int32_t; 
# 41
typedef unsigned __uint32_t; 
# 43
typedef signed long __int64_t; 
# 44
typedef unsigned long __uint64_t; 
# 52
typedef long __quad_t; 
# 53
typedef unsigned long __u_quad_t; 
# 124
typedef unsigned long __dev_t; 
# 125
typedef unsigned __uid_t; 
# 126
typedef unsigned __gid_t; 
# 127
typedef unsigned long __ino_t; 
# 128
typedef unsigned long __ino64_t; 
# 129
typedef unsigned __mode_t; 
# 130
typedef unsigned long __nlink_t; 
# 131
typedef long __off_t; 
# 132
typedef long __off64_t; 
# 133
typedef int __pid_t; 
# 134
typedef struct { int __val[2]; } __fsid_t; 
# 135
typedef long __clock_t; 
# 136
typedef unsigned long __rlim_t; 
# 137
typedef unsigned long __rlim64_t; 
# 138
typedef unsigned __id_t; 
# 139
typedef long __time_t; 
# 140
typedef unsigned __useconds_t; 
# 141
typedef long __suseconds_t; 
# 143
typedef int __daddr_t; 
# 144
typedef int __key_t; 
# 147
typedef int __clockid_t; 
# 150
typedef void *__timer_t; 
# 153
typedef long __blksize_t; 
# 158
typedef long __blkcnt_t; 
# 159
typedef long __blkcnt64_t; 
# 162
typedef unsigned long __fsblkcnt_t; 
# 163
typedef unsigned long __fsblkcnt64_t; 
# 166
typedef unsigned long __fsfilcnt_t; 
# 167
typedef unsigned long __fsfilcnt64_t; 
# 170
typedef long __fsword_t; 
# 172
typedef long __ssize_t; 
# 175
typedef long __syscall_slong_t; 
# 177
typedef unsigned long __syscall_ulong_t; 
# 181
typedef __off64_t __loff_t; 
# 182
typedef __quad_t *__qaddr_t; 
# 183
typedef char *__caddr_t; 
# 186
typedef long __intptr_t; 
# 189
typedef unsigned __socklen_t; 
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval { 
# 32
__time_t tv_sec; 
# 33
__suseconds_t tv_usec; 
# 34
}; 
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3
struct timex { 
# 27
unsigned modes; 
# 28
__syscall_slong_t offset; 
# 29
__syscall_slong_t freq; 
# 30
__syscall_slong_t maxerror; 
# 31
__syscall_slong_t esterror; 
# 32
int status; 
# 33
__syscall_slong_t constant; 
# 34
__syscall_slong_t precision; 
# 35
__syscall_slong_t tolerance; 
# 36
timeval time; 
# 37
__syscall_slong_t tick; 
# 38
__syscall_slong_t ppsfreq; 
# 39
__syscall_slong_t jitter; 
# 40
int shift; 
# 41
__syscall_slong_t stabil; 
# 42
__syscall_slong_t jitcnt; 
# 43
__syscall_slong_t calcnt; 
# 44
__syscall_slong_t errcnt; 
# 45
__syscall_slong_t stbcnt; 
# 47
int tai; 
# 50
int:32; int:32; int:32; int:32; 
# 51
int:32; int:32; int:32; int:32; 
# 52
int:32; int:32; int:32; 
# 53
}; 
# 90 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
extern "C" {
# 93
extern int clock_adjtime(__clockid_t __clock_id, timex * __utx) throw(); 
# 95
}
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t; 
# 75
typedef __time_t time_t; 
# 91
typedef __clockid_t clockid_t; 
# 103
typedef __timer_t timer_t; 
# 120
struct timespec { 
# 122
__time_t tv_sec; 
# 123
__syscall_slong_t tv_nsec; 
# 124
}; 
# 133
struct tm { 
# 135
int tm_sec; 
# 136
int tm_min; 
# 137
int tm_hour; 
# 138
int tm_mday; 
# 139
int tm_mon; 
# 140
int tm_year; 
# 141
int tm_wday; 
# 142
int tm_yday; 
# 143
int tm_isdst; 
# 146
long tm_gmtoff; 
# 147
const char *tm_zone; 
# 152
}; 
# 161
struct itimerspec { 
# 163
timespec it_interval; 
# 164
timespec it_value; 
# 165
}; 
# 168
struct sigevent; 
# 174
typedef __pid_t pid_t; 
# 189
extern clock_t clock() throw(); 
# 192
extern time_t time(time_t * __timer) throw(); 
# 195
extern double difftime(time_t __time1, time_t __time0) throw()
# 196
 __attribute((const)); 
# 199
extern time_t mktime(tm * __tp) throw(); 
# 205
extern size_t strftime(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp) throw(); 
# 213
extern char *strptime(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp) throw(); 
# 223
extern size_t strftime_l(char *__restrict__ __s, size_t __maxsize, const char *__restrict__ __format, const tm *__restrict__ __tp, __locale_t __loc) throw(); 
# 230
extern char *strptime_l(const char *__restrict__ __s, const char *__restrict__ __fmt, tm * __tp, __locale_t __loc) throw(); 
# 239
extern tm *gmtime(const time_t * __timer) throw(); 
# 243
extern tm *localtime(const time_t * __timer) throw(); 
# 249
extern tm *gmtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 254
extern tm *localtime_r(const time_t *__restrict__ __timer, tm *__restrict__ __tp) throw(); 
# 261
extern char *asctime(const tm * __tp) throw(); 
# 264
extern char *ctime(const time_t * __timer) throw(); 
# 272
extern char *asctime_r(const tm *__restrict__ __tp, char *__restrict__ __buf) throw(); 
# 276
extern char *ctime_r(const time_t *__restrict__ __timer, char *__restrict__ __buf) throw(); 
# 282
extern char *__tzname[2]; 
# 283
extern int __daylight; 
# 284
extern long __timezone; 
# 289
extern char *tzname[2]; 
# 293
extern void tzset() throw(); 
# 297
extern int daylight; 
# 298
extern long timezone; 
# 304
extern int stime(const time_t * __when) throw(); 
# 319
extern time_t timegm(tm * __tp) throw(); 
# 322
extern time_t timelocal(tm * __tp) throw(); 
# 325
extern int dysize(int __year) throw() __attribute((const)); 
# 334
extern int nanosleep(const timespec * __requested_time, timespec * __remaining); 
# 339
extern int clock_getres(clockid_t __clock_id, timespec * __res) throw(); 
# 342
extern int clock_gettime(clockid_t __clock_id, timespec * __tp) throw(); 
# 345
extern int clock_settime(clockid_t __clock_id, const timespec * __tp) throw(); 
# 353
extern int clock_nanosleep(clockid_t __clock_id, int __flags, const timespec * __req, timespec * __rem); 
# 358
extern int clock_getcpuclockid(pid_t __pid, clockid_t * __clock_id) throw(); 
# 363
extern int timer_create(clockid_t __clock_id, sigevent *__restrict__ __evp, timer_t *__restrict__ __timerid) throw(); 
# 368
extern int timer_delete(timer_t __timerid) throw(); 
# 371
extern int timer_settime(timer_t __timerid, int __flags, const itimerspec *__restrict__ __value, itimerspec *__restrict__ __ovalue) throw(); 
# 376
extern int timer_gettime(timer_t __timerid, itimerspec * __value) throw(); 
# 380
extern int timer_getoverrun(timer_t __timerid) throw(); 
# 386
extern int timespec_get(timespec * __ts, int __base) throw()
# 387
 __attribute((__nonnull__(1))); 
# 403
extern int getdate_err; 
# 412
extern tm *getdate(const char * __string); 
# 426
extern int getdate_r(const char *__restrict__ __string, tm *__restrict__ __resbufp); 
# 430
}
# 68 "/usr/local/cuda/include/common_functions.h"
extern "C" {
# 71
extern clock_t clock() throw(); 
# 72
extern void *memset(void *, int, size_t) throw(); 
# 73
extern void *memcpy(void *, const void *, size_t) throw(); 
# 75
}
# 93 "/usr/local/cuda/include/math_functions.h"
extern "C" {
# 164
extern int abs(int) throw(); 
# 165
extern long labs(long) throw(); 
# 166
extern long long llabs(long long) throw(); 
# 216
extern double fabs(double x) throw(); 
# 257
extern float fabsf(float x) throw(); 
# 261
extern inline int min(int, int); 
# 263
extern inline unsigned umin(unsigned, unsigned); 
# 264
extern inline long long llmin(long long, long long); 
# 265
extern inline unsigned long long ullmin(unsigned long long, unsigned long long); 
# 286
extern float fminf(float x, float y) throw(); 
# 306
extern double fmin(double x, double y) throw(); 
# 313
extern inline int max(int, int); 
# 315
extern inline unsigned umax(unsigned, unsigned); 
# 316
extern inline long long llmax(long long, long long); 
# 317
extern inline unsigned long long ullmax(unsigned long long, unsigned long long); 
# 338
extern float fmaxf(float x, float y) throw(); 
# 358
extern double fmax(double, double) throw(); 
# 402
extern double sin(double x) throw(); 
# 435
extern double cos(double x) throw(); 
# 454
extern void sincos(double x, double * sptr, double * cptr) throw(); 
# 470
extern void sincosf(float x, float * sptr, float * cptr) throw(); 
# 515
extern double tan(double x) throw(); 
# 584
extern double sqrt(double x) throw(); 
# 656
extern double rsqrt(double x); 
# 726
extern float rsqrtf(float x); 
# 782
extern double log2(double x) throw(); 
# 807
extern double exp2(double x) throw(); 
# 832
extern float exp2f(float x) throw(); 
# 859
extern double exp10(double x) throw(); 
# 882
extern float exp10f(float x) throw(); 
# 928
extern double expm1(double x) throw(); 
# 973
extern float expm1f(float x) throw(); 
# 1028
extern float log2f(float x) throw(); 
# 1082
extern double log10(double x) throw(); 
# 1153
extern double log(double x) throw(); 
# 1247
extern double log1p(double x) throw(); 
# 1344
extern float log1pf(float x) throw(); 
# 1419
extern double floor(double x) throw(); 
# 1458
extern double exp(double x) throw(); 
# 1489
extern double cosh(double x) throw(); 
# 1519
extern double sinh(double x) throw(); 
# 1549
extern double tanh(double x) throw(); 
# 1584
extern double acosh(double x) throw(); 
# 1622
extern float acoshf(float x) throw(); 
# 1638
extern double asinh(double x) throw(); 
# 1654
extern float asinhf(float x) throw(); 
# 1708
extern double atanh(double x) throw(); 
# 1762
extern float atanhf(float x) throw(); 
# 1821
extern double ldexp(double x, int exp) throw(); 
# 1877
extern float ldexpf(float x, int exp) throw(); 
# 1929
extern double logb(double x) throw(); 
# 1984
extern float logbf(float x) throw(); 
# 2014
extern int ilogb(double x) throw(); 
# 2044
extern int ilogbf(float x) throw(); 
# 2120
extern double scalbn(double x, int n) throw(); 
# 2196
extern float scalbnf(float x, int n) throw(); 
# 2272
extern double scalbln(double x, long n) throw(); 
# 2348
extern float scalblnf(float x, long n) throw(); 
# 2426
extern double frexp(double x, int * nptr) throw(); 
# 2501
extern float frexpf(float x, int * nptr) throw(); 
# 2515
extern double round(double x) throw(); 
# 2532
extern float roundf(float x) throw(); 
# 2550
extern long lround(double x) throw(); 
# 2568
extern long lroundf(float x) throw(); 
# 2586
extern long long llround(double x) throw(); 
# 2604
extern long long llroundf(float x) throw(); 
# 2656
extern float rintf(float x) throw(); 
# 2672
extern long lrint(double x) throw(); 
# 2688
extern long lrintf(float x) throw(); 
# 2704
extern long long llrint(double x) throw(); 
# 2720
extern long long llrintf(float x) throw(); 
# 2773
extern double nearbyint(double x) throw(); 
# 2826
extern float nearbyintf(float x) throw(); 
# 2888
extern double ceil(double x) throw(); 
# 2900
extern double trunc(double x) throw(); 
# 2915
extern float truncf(float x) throw(); 
# 2941
extern double fdim(double x, double y) throw(); 
# 2967
extern float fdimf(float x, float y) throw(); 
# 3003
extern double atan2(double y, double x) throw(); 
# 3034
extern double atan(double x) throw(); 
# 3057
extern double acos(double x) throw(); 
# 3089
extern double asin(double x) throw(); 
# 3135
extern double hypot(double x, double y) throw(); 
# 3187
extern double rhypot(double x, double y) throw(); 
# 3233
extern float hypotf(float x, float y) throw(); 
# 3285
extern float rhypotf(float x, float y) throw(); 
# 3332
extern double norm3d(double a, double b, double c) throw(); 
# 3383
extern double rnorm3d(double a, double b, double c) throw(); 
# 3432
extern double norm4d(double a, double b, double c, double d) throw(); 
# 3488
extern double rnorm4d(double a, double b, double c, double d) throw(); 
# 3533
extern double norm(int dim, const double * t) throw(); 
# 3584
extern double rnorm(int dim, const double * t) throw(); 
# 3636
extern float rnormf(int dim, const float * a) throw(); 
# 3680
extern float normf(int dim, const float * a) throw(); 
# 3725
extern float norm3df(float a, float b, float c) throw(); 
# 3776
extern float rnorm3df(float a, float b, float c) throw(); 
# 3825
extern float norm4df(float a, float b, float c, float d) throw(); 
# 3881
extern float rnorm4df(float a, float b, float c, float d) throw(); 
# 3965
extern double cbrt(double x) throw(); 
# 4051
extern float cbrtf(float x) throw(); 
# 4106
extern double rcbrt(double x); 
# 4156
extern float rcbrtf(float x); 
# 4216
extern double sinpi(double x); 
# 4276
extern float sinpif(float x); 
# 4328
extern double cospi(double x); 
# 4380
extern float cospif(float x); 
# 4410
extern void sincospi(double x, double * sptr, double * cptr); 
# 4440
extern void sincospif(float x, float * sptr, float * cptr); 
# 4752
extern double pow(double x, double y) throw(); 
# 4808
extern double modf(double x, double * iptr) throw(); 
# 4867
extern double fmod(double x, double y) throw(); 
# 4953
extern double remainder(double x, double y) throw(); 
# 5043
extern float remainderf(float x, float y) throw(); 
# 5097
extern double remquo(double x, double y, int * quo) throw(); 
# 5151
extern float remquof(float x, float y, int * quo) throw(); 
# 5192
extern double j0(double x) throw(); 
# 5234
extern float j0f(float x) throw(); 
# 5295
extern double j1(double x) throw(); 
# 5356
extern float j1f(float x) throw(); 
# 5399
extern double jn(int n, double x) throw(); 
# 5442
extern float jnf(int n, float x) throw(); 
# 5494
extern double y0(double x) throw(); 
# 5546
extern float y0f(float x) throw(); 
# 5598
extern double y1(double x) throw(); 
# 5650
extern float y1f(float x) throw(); 
# 5703
extern double yn(int n, double x) throw(); 
# 5756
extern float ynf(int n, float x) throw(); 
# 5783
extern double cyl_bessel_i0(double x) throw(); 
# 5809
extern float cyl_bessel_i0f(float x) throw(); 
# 5836
extern double cyl_bessel_i1(double x) throw(); 
# 5862
extern float cyl_bessel_i1f(float x) throw(); 
# 5945
extern double erf(double x) throw(); 
# 6027
extern float erff(float x) throw(); 
# 6091
extern double erfinv(double y); 
# 6148
extern float erfinvf(float y); 
# 6187
extern double erfc(double x) throw(); 
# 6225
extern float erfcf(float x) throw(); 
# 6353
extern double lgamma(double x) throw(); 
# 6416
extern double erfcinv(double y); 
# 6472
extern float erfcinvf(float y); 
# 6530
extern double normcdfinv(double y); 
# 6588
extern float normcdfinvf(float y); 
# 6631
extern double normcdf(double y); 
# 6674
extern float normcdff(float y); 
# 6749
extern double erfcx(double x); 
# 6824
extern float erfcxf(float x); 
# 6958
extern float lgammaf(float x) throw(); 
# 7067
extern double tgamma(double x) throw(); 
# 7176
extern float tgammaf(float x) throw(); 
# 7189
extern double copysign(double x, double y) throw(); 
# 7202
extern float copysignf(float x, float y) throw(); 
# 7239
extern double nextafter(double x, double y) throw(); 
# 7276
extern float nextafterf(float x, float y) throw(); 
# 7292
extern double nan(const char * tagp) throw(); 
# 7308
extern float nanf(const char * tagp) throw(); 
# 7315
extern int __isinff(float) throw(); 
# 7316
extern int __isnanf(float) throw(); 
# 7326
extern int __finite(double) throw(); 
# 7327
extern int __finitef(float) throw(); 
# 7328
extern int __signbit(double) throw(); 
# 7329
extern int __isnan(double) throw(); 
# 7330
extern int __isinf(double) throw(); 
# 7333
extern int __signbitf(float) throw(); 
# 7492
extern double fma(double x, double y, double z) throw(); 
# 7650
extern float fmaf(float x, float y, float z) throw(); 
# 7661
extern int __signbitl(long double) throw(); 
# 7667
extern int __finitel(long double) throw(); 
# 7668
extern int __isinfl(long double) throw(); 
# 7669
extern int __isnanl(long double) throw(); 
# 7719
extern float acosf(float x) throw(); 
# 7759
extern float asinf(float x) throw(); 
# 7799
extern float atanf(float x) throw(); 
# 7832
extern float atan2f(float y, float x) throw(); 
# 7856
extern float cosf(float x) throw(); 
# 7898
extern float sinf(float x) throw(); 
# 7940
extern float tanf(float x) throw(); 
# 7964
extern float coshf(float x) throw(); 
# 8005
extern float sinhf(float x) throw(); 
# 8035
extern float tanhf(float x) throw(); 
# 8086
extern float logf(float x) throw(); 
# 8136
extern float expf(float x) throw(); 
# 8187
extern float log10f(float x) throw(); 
# 8242
extern float modff(float x, float * iptr) throw(); 
# 8550
extern float powf(float x, float y) throw(); 
# 8619
extern float sqrtf(float x) throw(); 
# 8678
extern float ceilf(float x) throw(); 
# 8750
extern float floorf(float x) throw(); 
# 8809
extern float fmodf(float x, float y) throw(); 
# 8823
}
# 28 "/usr/include/math.h" 3
extern "C" {
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t; 
# 29
typedef double double_t; 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acos(double __x) throw(); extern double __acos(double __x) throw(); 
# 56
extern double asin(double __x) throw(); extern double __asin(double __x) throw(); 
# 58
extern double atan(double __x) throw(); extern double __atan(double __x) throw(); 
# 60
extern double atan2(double __y, double __x) throw(); extern double __atan2(double __y, double __x) throw(); 
# 63
extern double cos(double __x) throw(); extern double __cos(double __x) throw(); 
# 65
extern double sin(double __x) throw(); extern double __sin(double __x) throw(); 
# 67
extern double tan(double __x) throw(); extern double __tan(double __x) throw(); 
# 72
extern double cosh(double __x) throw(); extern double __cosh(double __x) throw(); 
# 74
extern double sinh(double __x) throw(); extern double __sinh(double __x) throw(); 
# 76
extern double tanh(double __x) throw(); extern double __tanh(double __x) throw(); 
# 81
extern void sincos(double __x, double * __sinx, double * __cosx) throw(); extern void __sincos(double __x, double * __sinx, double * __cosx) throw(); 
# 88
extern double acosh(double __x) throw(); extern double __acosh(double __x) throw(); 
# 90
extern double asinh(double __x) throw(); extern double __asinh(double __x) throw(); 
# 92
extern double atanh(double __x) throw(); extern double __atanh(double __x) throw(); 
# 100
extern double exp(double __x) throw(); extern double __exp(double __x) throw(); 
# 103
extern double frexp(double __x, int * __exponent) throw(); extern double __frexp(double __x, int * __exponent) throw(); 
# 106
extern double ldexp(double __x, int __exponent) throw(); extern double __ldexp(double __x, int __exponent) throw(); 
# 109
extern double log(double __x) throw(); extern double __log(double __x) throw(); 
# 112
extern double log10(double __x) throw(); extern double __log10(double __x) throw(); 
# 115
extern double modf(double __x, double * __iptr) throw(); extern double __modf(double __x, double * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern double exp10(double __x) throw(); extern double __exp10(double __x) throw(); 
# 122
extern double pow10(double __x) throw(); extern double __pow10(double __x) throw(); 
# 128
extern double expm1(double __x) throw(); extern double __expm1(double __x) throw(); 
# 131
extern double log1p(double __x) throw(); extern double __log1p(double __x) throw(); 
# 134
extern double logb(double __x) throw(); extern double __logb(double __x) throw(); 
# 141
extern double exp2(double __x) throw(); extern double __exp2(double __x) throw(); 
# 144
extern double log2(double __x) throw(); extern double __log2(double __x) throw(); 
# 153
extern double pow(double __x, double __y) throw(); extern double __pow(double __x, double __y) throw(); 
# 156
extern double sqrt(double __x) throw(); extern double __sqrt(double __x) throw(); 
# 162
extern double hypot(double __x, double __y) throw(); extern double __hypot(double __x, double __y) throw(); 
# 169
extern double cbrt(double __x) throw(); extern double __cbrt(double __x) throw(); 
# 178
extern double ceil(double __x) throw() __attribute((const)); extern double __ceil(double __x) throw() __attribute((const)); 
# 181
extern double fabs(double __x) throw() __attribute((const)); extern double __fabs(double __x) throw() __attribute((const)); 
# 184
extern double floor(double __x) throw() __attribute((const)); extern double __floor(double __x) throw() __attribute((const)); 
# 187
extern double fmod(double __x, double __y) throw(); extern double __fmod(double __x, double __y) throw(); 
# 192
extern int __isinf(double __value) throw() __attribute((const)); 
# 195
extern int __finite(double __value) throw() __attribute((const)); 
# 204
extern inline int isinf(double __value) throw() __attribute((const)); 
# 208
extern int finite(double __value) throw() __attribute((const)); 
# 211
extern double drem(double __x, double __y) throw(); extern double __drem(double __x, double __y) throw(); 
# 215
extern double significand(double __x) throw(); extern double __significand(double __x) throw(); 
# 221
extern double copysign(double __x, double __y) throw() __attribute((const)); extern double __copysign(double __x, double __y) throw() __attribute((const)); 
# 228
extern double nan(const char * __tagb) throw() __attribute((const)); extern double __nan(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnan(double __value) throw() __attribute((const)); 
# 241
extern inline int isnan(double __value) throw() __attribute((const)); 
# 247
extern double j0(double) throw(); extern double __j0(double) throw(); 
# 248
extern double j1(double) throw(); extern double __j1(double) throw(); 
# 249
extern double jn(int, double) throw(); extern double __jn(int, double) throw(); 
# 250
extern double y0(double) throw(); extern double __y0(double) throw(); 
# 251
extern double y1(double) throw(); extern double __y1(double) throw(); 
# 252
extern double yn(int, double) throw(); extern double __yn(int, double) throw(); 
# 259
extern double erf(double) throw(); extern double __erf(double) throw(); 
# 260
extern double erfc(double) throw(); extern double __erfc(double) throw(); 
# 261
extern double lgamma(double) throw(); extern double __lgamma(double) throw(); 
# 268
extern double tgamma(double) throw(); extern double __tgamma(double) throw(); 
# 274
extern double gamma(double) throw(); extern double __gamma(double) throw(); 
# 281
extern double lgamma_r(double, int * __signgamp) throw(); extern double __lgamma_r(double, int * __signgamp) throw(); 
# 289
extern double rint(double __x) throw(); extern double __rint(double __x) throw(); 
# 292
extern double nextafter(double __x, double __y) throw() __attribute((const)); extern double __nextafter(double __x, double __y) throw() __attribute((const)); 
# 294
extern double nexttoward(double __x, long double __y) throw() __attribute((const)); extern double __nexttoward(double __x, long double __y) throw() __attribute((const)); 
# 298
extern double remainder(double __x, double __y) throw(); extern double __remainder(double __x, double __y) throw(); 
# 302
extern double scalbn(double __x, int __n) throw(); extern double __scalbn(double __x, int __n) throw(); 
# 306
extern int ilogb(double __x) throw(); extern int __ilogb(double __x) throw(); 
# 311
extern double scalbln(double __x, long __n) throw(); extern double __scalbln(double __x, long __n) throw(); 
# 315
extern double nearbyint(double __x) throw(); extern double __nearbyint(double __x) throw(); 
# 319
extern double round(double __x) throw() __attribute((const)); extern double __round(double __x) throw() __attribute((const)); 
# 323
extern double trunc(double __x) throw() __attribute((const)); extern double __trunc(double __x) throw() __attribute((const)); 
# 328
extern double remquo(double __x, double __y, int * __quo) throw(); extern double __remquo(double __x, double __y, int * __quo) throw(); 
# 335
extern long lrint(double __x) throw(); extern long __lrint(double __x) throw(); 
# 337
__extension__ extern long long llrint(double __x) throw(); extern long long __llrint(double __x) throw(); 
# 341
extern long lround(double __x) throw(); extern long __lround(double __x) throw(); 
# 343
__extension__ extern long long llround(double __x) throw(); extern long long __llround(double __x) throw(); 
# 347
extern double fdim(double __x, double __y) throw(); extern double __fdim(double __x, double __y) throw(); 
# 350
extern double fmax(double __x, double __y) throw() __attribute((const)); extern double __fmax(double __x, double __y) throw() __attribute((const)); 
# 353
extern double fmin(double __x, double __y) throw() __attribute((const)); extern double __fmin(double __x, double __y) throw() __attribute((const)); 
# 357
extern int __fpclassify(double __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbit(double __value) throw()
# 362
 __attribute((const)); 
# 366
extern double fma(double __x, double __y, double __z) throw(); extern double __fma(double __x, double __y, double __z) throw(); 
# 375
extern int __issignaling(double __value) throw()
# 376
 __attribute((const)); 
# 383
extern double scalb(double __x, double __n) throw(); extern double __scalb(double __x, double __n) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acosf(float __x) throw(); extern float __acosf(float __x) throw(); 
# 56
extern float asinf(float __x) throw(); extern float __asinf(float __x) throw(); 
# 58
extern float atanf(float __x) throw(); extern float __atanf(float __x) throw(); 
# 60
extern float atan2f(float __y, float __x) throw(); extern float __atan2f(float __y, float __x) throw(); 
# 63
extern float cosf(float __x) throw(); 
# 65
extern float sinf(float __x) throw(); 
# 67
extern float tanf(float __x) throw(); 
# 72
extern float coshf(float __x) throw(); extern float __coshf(float __x) throw(); 
# 74
extern float sinhf(float __x) throw(); extern float __sinhf(float __x) throw(); 
# 76
extern float tanhf(float __x) throw(); extern float __tanhf(float __x) throw(); 
# 81
extern void sincosf(float __x, float * __sinx, float * __cosx) throw(); 
# 88
extern float acoshf(float __x) throw(); extern float __acoshf(float __x) throw(); 
# 90
extern float asinhf(float __x) throw(); extern float __asinhf(float __x) throw(); 
# 92
extern float atanhf(float __x) throw(); extern float __atanhf(float __x) throw(); 
# 100
extern float expf(float __x) throw(); 
# 103
extern float frexpf(float __x, int * __exponent) throw(); extern float __frexpf(float __x, int * __exponent) throw(); 
# 106
extern float ldexpf(float __x, int __exponent) throw(); extern float __ldexpf(float __x, int __exponent) throw(); 
# 109
extern float logf(float __x) throw(); 
# 112
extern float log10f(float __x) throw(); 
# 115
extern float modff(float __x, float * __iptr) throw(); extern float __modff(float __x, float * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern float exp10f(float __x) throw(); 
# 122
extern float pow10f(float __x) throw(); extern float __pow10f(float __x) throw(); 
# 128
extern float expm1f(float __x) throw(); extern float __expm1f(float __x) throw(); 
# 131
extern float log1pf(float __x) throw(); extern float __log1pf(float __x) throw(); 
# 134
extern float logbf(float __x) throw(); extern float __logbf(float __x) throw(); 
# 141
extern float exp2f(float __x) throw(); extern float __exp2f(float __x) throw(); 
# 144
extern float log2f(float __x) throw(); 
# 153
extern float powf(float __x, float __y) throw(); 
# 156
extern float sqrtf(float __x) throw(); extern float __sqrtf(float __x) throw(); 
# 162
extern float hypotf(float __x, float __y) throw(); extern float __hypotf(float __x, float __y) throw(); 
# 169
extern float cbrtf(float __x) throw(); extern float __cbrtf(float __x) throw(); 
# 178
extern float ceilf(float __x) throw() __attribute((const)); extern float __ceilf(float __x) throw() __attribute((const)); 
# 181
extern float fabsf(float __x) throw() __attribute((const)); extern float __fabsf(float __x) throw() __attribute((const)); 
# 184
extern float floorf(float __x) throw() __attribute((const)); extern float __floorf(float __x) throw() __attribute((const)); 
# 187
extern float fmodf(float __x, float __y) throw(); extern float __fmodf(float __x, float __y) throw(); 
# 192
extern int __isinff(float __value) throw() __attribute((const)); 
# 195
extern int __finitef(float __value) throw() __attribute((const)); 
# 204
extern int isinff(float __value) throw() __attribute((const)); 
# 208
extern int finitef(float __value) throw() __attribute((const)); 
# 211
extern float dremf(float __x, float __y) throw(); extern float __dremf(float __x, float __y) throw(); 
# 215
extern float significandf(float __x) throw(); extern float __significandf(float __x) throw(); 
# 221
extern float copysignf(float __x, float __y) throw() __attribute((const)); extern float __copysignf(float __x, float __y) throw() __attribute((const)); 
# 228
extern float nanf(const char * __tagb) throw() __attribute((const)); extern float __nanf(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnanf(float __value) throw() __attribute((const)); 
# 241
extern int isnanf(float __value) throw() __attribute((const)); 
# 247
extern float j0f(float) throw(); extern float __j0f(float) throw(); 
# 248
extern float j1f(float) throw(); extern float __j1f(float) throw(); 
# 249
extern float jnf(int, float) throw(); extern float __jnf(int, float) throw(); 
# 250
extern float y0f(float) throw(); extern float __y0f(float) throw(); 
# 251
extern float y1f(float) throw(); extern float __y1f(float) throw(); 
# 252
extern float ynf(int, float) throw(); extern float __ynf(int, float) throw(); 
# 259
extern float erff(float) throw(); extern float __erff(float) throw(); 
# 260
extern float erfcf(float) throw(); extern float __erfcf(float) throw(); 
# 261
extern float lgammaf(float) throw(); extern float __lgammaf(float) throw(); 
# 268
extern float tgammaf(float) throw(); extern float __tgammaf(float) throw(); 
# 274
extern float gammaf(float) throw(); extern float __gammaf(float) throw(); 
# 281
extern float lgammaf_r(float, int * __signgamp) throw(); extern float __lgammaf_r(float, int * __signgamp) throw(); 
# 289
extern float rintf(float __x) throw(); extern float __rintf(float __x) throw(); 
# 292
extern float nextafterf(float __x, float __y) throw() __attribute((const)); extern float __nextafterf(float __x, float __y) throw() __attribute((const)); 
# 294
extern float nexttowardf(float __x, long double __y) throw() __attribute((const)); extern float __nexttowardf(float __x, long double __y) throw() __attribute((const)); 
# 298
extern float remainderf(float __x, float __y) throw(); extern float __remainderf(float __x, float __y) throw(); 
# 302
extern float scalbnf(float __x, int __n) throw(); extern float __scalbnf(float __x, int __n) throw(); 
# 306
extern int ilogbf(float __x) throw(); extern int __ilogbf(float __x) throw(); 
# 311
extern float scalblnf(float __x, long __n) throw(); extern float __scalblnf(float __x, long __n) throw(); 
# 315
extern float nearbyintf(float __x) throw(); extern float __nearbyintf(float __x) throw(); 
# 319
extern float roundf(float __x) throw() __attribute((const)); extern float __roundf(float __x) throw() __attribute((const)); 
# 323
extern float truncf(float __x) throw() __attribute((const)); extern float __truncf(float __x) throw() __attribute((const)); 
# 328
extern float remquof(float __x, float __y, int * __quo) throw(); extern float __remquof(float __x, float __y, int * __quo) throw(); 
# 335
extern long lrintf(float __x) throw(); extern long __lrintf(float __x) throw(); 
# 337
__extension__ extern long long llrintf(float __x) throw(); extern long long __llrintf(float __x) throw(); 
# 341
extern long lroundf(float __x) throw(); extern long __lroundf(float __x) throw(); 
# 343
__extension__ extern long long llroundf(float __x) throw(); extern long long __llroundf(float __x) throw(); 
# 347
extern float fdimf(float __x, float __y) throw(); extern float __fdimf(float __x, float __y) throw(); 
# 350
extern float fmaxf(float __x, float __y) throw() __attribute((const)); extern float __fmaxf(float __x, float __y) throw() __attribute((const)); 
# 353
extern float fminf(float __x, float __y) throw() __attribute((const)); extern float __fminf(float __x, float __y) throw() __attribute((const)); 
# 357
extern int __fpclassifyf(float __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbitf(float __value) throw()
# 362
 __attribute((const)); 
# 366
extern float fmaf(float __x, float __y, float __z) throw(); extern float __fmaf(float __x, float __y, float __z) throw(); 
# 375
extern int __issignalingf(float __value) throw()
# 376
 __attribute((const)); 
# 383
extern float scalbf(float __x, float __n) throw(); extern float __scalbf(float __x, float __n) throw(); 
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acosl(long double __x) throw(); extern long double __acosl(long double __x) throw(); 
# 56
extern long double asinl(long double __x) throw(); extern long double __asinl(long double __x) throw(); 
# 58
extern long double atanl(long double __x) throw(); extern long double __atanl(long double __x) throw(); 
# 60
extern long double atan2l(long double __y, long double __x) throw(); extern long double __atan2l(long double __y, long double __x) throw(); 
# 63
extern long double cosl(long double __x) throw(); extern long double __cosl(long double __x) throw(); 
# 65
extern long double sinl(long double __x) throw(); extern long double __sinl(long double __x) throw(); 
# 67
extern long double tanl(long double __x) throw(); extern long double __tanl(long double __x) throw(); 
# 72
extern long double coshl(long double __x) throw(); extern long double __coshl(long double __x) throw(); 
# 74
extern long double sinhl(long double __x) throw(); extern long double __sinhl(long double __x) throw(); 
# 76
extern long double tanhl(long double __x) throw(); extern long double __tanhl(long double __x) throw(); 
# 81
extern void sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); extern void __sincosl(long double __x, long double * __sinx, long double * __cosx) throw(); 
# 88
extern long double acoshl(long double __x) throw(); extern long double __acoshl(long double __x) throw(); 
# 90
extern long double asinhl(long double __x) throw(); extern long double __asinhl(long double __x) throw(); 
# 92
extern long double atanhl(long double __x) throw(); extern long double __atanhl(long double __x) throw(); 
# 100
extern long double expl(long double __x) throw(); extern long double __expl(long double __x) throw(); 
# 103
extern long double frexpl(long double __x, int * __exponent) throw(); extern long double __frexpl(long double __x, int * __exponent) throw(); 
# 106
extern long double ldexpl(long double __x, int __exponent) throw(); extern long double __ldexpl(long double __x, int __exponent) throw(); 
# 109
extern long double logl(long double __x) throw(); extern long double __logl(long double __x) throw(); 
# 112
extern long double log10l(long double __x) throw(); extern long double __log10l(long double __x) throw(); 
# 115
extern long double modfl(long double __x, long double * __iptr) throw(); extern long double __modfl(long double __x, long double * __iptr) throw() __attribute((__nonnull__(2))); 
# 120
extern long double exp10l(long double __x) throw(); extern long double __exp10l(long double __x) throw(); 
# 122
extern long double pow10l(long double __x) throw(); extern long double __pow10l(long double __x) throw(); 
# 128
extern long double expm1l(long double __x) throw(); extern long double __expm1l(long double __x) throw(); 
# 131
extern long double log1pl(long double __x) throw(); extern long double __log1pl(long double __x) throw(); 
# 134
extern long double logbl(long double __x) throw(); extern long double __logbl(long double __x) throw(); 
# 141
extern long double exp2l(long double __x) throw(); extern long double __exp2l(long double __x) throw(); 
# 144
extern long double log2l(long double __x) throw(); extern long double __log2l(long double __x) throw(); 
# 153
extern long double powl(long double __x, long double __y) throw(); extern long double __powl(long double __x, long double __y) throw(); 
# 156
extern long double sqrtl(long double __x) throw(); extern long double __sqrtl(long double __x) throw(); 
# 162
extern long double hypotl(long double __x, long double __y) throw(); extern long double __hypotl(long double __x, long double __y) throw(); 
# 169
extern long double cbrtl(long double __x) throw(); extern long double __cbrtl(long double __x) throw(); 
# 178
extern long double ceill(long double __x) throw() __attribute((const)); extern long double __ceill(long double __x) throw() __attribute((const)); 
# 181
extern long double fabsl(long double __x) throw() __attribute((const)); extern long double __fabsl(long double __x) throw() __attribute((const)); 
# 184
extern long double floorl(long double __x) throw() __attribute((const)); extern long double __floorl(long double __x) throw() __attribute((const)); 
# 187
extern long double fmodl(long double __x, long double __y) throw(); extern long double __fmodl(long double __x, long double __y) throw(); 
# 192
extern int __isinfl(long double __value) throw() __attribute((const)); 
# 195
extern int __finitel(long double __value) throw() __attribute((const)); 
# 204
extern int isinfl(long double __value) throw() __attribute((const)); 
# 208
extern int finitel(long double __value) throw() __attribute((const)); 
# 211
extern long double dreml(long double __x, long double __y) throw(); extern long double __dreml(long double __x, long double __y) throw(); 
# 215
extern long double significandl(long double __x) throw(); extern long double __significandl(long double __x) throw(); 
# 221
extern long double copysignl(long double __x, long double __y) throw() __attribute((const)); extern long double __copysignl(long double __x, long double __y) throw() __attribute((const)); 
# 228
extern long double nanl(const char * __tagb) throw() __attribute((const)); extern long double __nanl(const char * __tagb) throw() __attribute((const)); 
# 234
extern int __isnanl(long double __value) throw() __attribute((const)); 
# 241
extern int isnanl(long double __value) throw() __attribute((const)); 
# 247
extern long double j0l(long double) throw(); extern long double __j0l(long double) throw(); 
# 248
extern long double j1l(long double) throw(); extern long double __j1l(long double) throw(); 
# 249
extern long double jnl(int, long double) throw(); extern long double __jnl(int, long double) throw(); 
# 250
extern long double y0l(long double) throw(); extern long double __y0l(long double) throw(); 
# 251
extern long double y1l(long double) throw(); extern long double __y1l(long double) throw(); 
# 252
extern long double ynl(int, long double) throw(); extern long double __ynl(int, long double) throw(); 
# 259
extern long double erfl(long double) throw(); extern long double __erfl(long double) throw(); 
# 260
extern long double erfcl(long double) throw(); extern long double __erfcl(long double) throw(); 
# 261
extern long double lgammal(long double) throw(); extern long double __lgammal(long double) throw(); 
# 268
extern long double tgammal(long double) throw(); extern long double __tgammal(long double) throw(); 
# 274
extern long double gammal(long double) throw(); extern long double __gammal(long double) throw(); 
# 281
extern long double lgammal_r(long double, int * __signgamp) throw(); extern long double __lgammal_r(long double, int * __signgamp) throw(); 
# 289
extern long double rintl(long double __x) throw(); extern long double __rintl(long double __x) throw(); 
# 292
extern long double nextafterl(long double __x, long double __y) throw() __attribute((const)); extern long double __nextafterl(long double __x, long double __y) throw() __attribute((const)); 
# 294
extern long double nexttowardl(long double __x, long double __y) throw() __attribute((const)); extern long double __nexttowardl(long double __x, long double __y) throw() __attribute((const)); 
# 298
extern long double remainderl(long double __x, long double __y) throw(); extern long double __remainderl(long double __x, long double __y) throw(); 
# 302
extern long double scalbnl(long double __x, int __n) throw(); extern long double __scalbnl(long double __x, int __n) throw(); 
# 306
extern int ilogbl(long double __x) throw(); extern int __ilogbl(long double __x) throw(); 
# 311
extern long double scalblnl(long double __x, long __n) throw(); extern long double __scalblnl(long double __x, long __n) throw(); 
# 315
extern long double nearbyintl(long double __x) throw(); extern long double __nearbyintl(long double __x) throw(); 
# 319
extern long double roundl(long double __x) throw() __attribute((const)); extern long double __roundl(long double __x) throw() __attribute((const)); 
# 323
extern long double truncl(long double __x) throw() __attribute((const)); extern long double __truncl(long double __x) throw() __attribute((const)); 
# 328
extern long double remquol(long double __x, long double __y, int * __quo) throw(); extern long double __remquol(long double __x, long double __y, int * __quo) throw(); 
# 335
extern long lrintl(long double __x) throw(); extern long __lrintl(long double __x) throw(); 
# 337
__extension__ extern long long llrintl(long double __x) throw(); extern long long __llrintl(long double __x) throw(); 
# 341
extern long lroundl(long double __x) throw(); extern long __lroundl(long double __x) throw(); 
# 343
__extension__ extern long long llroundl(long double __x) throw(); extern long long __llroundl(long double __x) throw(); 
# 347
extern long double fdiml(long double __x, long double __y) throw(); extern long double __fdiml(long double __x, long double __y) throw(); 
# 350
extern long double fmaxl(long double __x, long double __y) throw() __attribute((const)); extern long double __fmaxl(long double __x, long double __y) throw() __attribute((const)); 
# 353
extern long double fminl(long double __x, long double __y) throw() __attribute((const)); extern long double __fminl(long double __x, long double __y) throw() __attribute((const)); 
# 357
extern int __fpclassifyl(long double __value) throw()
# 358
 __attribute((const)); 
# 361
extern int __signbitl(long double __value) throw()
# 362
 __attribute((const)); 
# 366
extern long double fmal(long double __x, long double __y, long double __z) throw(); extern long double __fmal(long double __x, long double __y, long double __z) throw(); 
# 375
extern int __issignalingl(long double __value) throw()
# 376
 __attribute((const)); 
# 383
extern long double scalbl(long double __x, long double __n) throw(); extern long double __scalbl(long double __x, long double __n) throw(); 
# 168 "/usr/include/math.h" 3
extern int signgam; 
# 210
enum { 
# 211
FP_NAN, 
# 214
FP_INFINITE, 
# 217
FP_ZERO, 
# 220
FP_SUBNORMAL, 
# 223
FP_NORMAL
# 226
}; 
# 354
typedef 
# 348
enum { 
# 349
_IEEE_ = (-1), 
# 350
_SVID_ = 0, 
# 351
_XOPEN_, 
# 352
_POSIX_, 
# 353
_ISOC_
# 354
} _LIB_VERSION_TYPE; 
# 359
extern _LIB_VERSION_TYPE _LIB_VERSION; 
# 370
struct __exception { 
# 375
int type; 
# 376
char *name; 
# 377
double arg1; 
# 378
double arg2; 
# 379
double retval; 
# 380
}; 
# 383
extern int matherr(__exception * __exc) throw(); 
# 534
}
# 34 "/usr/include/stdlib.h" 3
extern "C" {
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
typedef 
# 51
enum { 
# 52
P_ALL, 
# 53
P_PID, 
# 54
P_PGID
# 55
} idtype_t; 
# 45 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static inline unsigned __bswap_32(unsigned __bsx) 
# 46
{ 
# 47
return __builtin_bswap32(__bsx); 
# 48
} 
# 109
static inline __uint64_t __bswap_64(__uint64_t __bsx) 
# 110
{ 
# 111
return __builtin_bswap64(__bsx); 
# 112
} 
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait { 
# 68
int w_status; 
# 70
struct { 
# 72
unsigned __w_termsig:7; 
# 73
unsigned __w_coredump:1; 
# 74
unsigned __w_retcode:8; 
# 75
unsigned:16; 
# 83
} __wait_terminated; 
# 85
struct { 
# 87
unsigned __w_stopval:8; 
# 88
unsigned __w_stopsig:8; 
# 89
unsigned:16; 
# 96
} __wait_stopped; 
# 97
}; 
# 101 "/usr/include/stdlib.h" 3
typedef 
# 98
struct { 
# 99
int quot; 
# 100
int rem; 
# 101
} div_t; 
# 109
typedef 
# 106
struct { 
# 107
long quot; 
# 108
long rem; 
# 109
} ldiv_t; 
# 121
__extension__ typedef 
# 118
struct { 
# 119
long long quot; 
# 120
long long rem; 
# 121
} lldiv_t; 
# 139
extern size_t __ctype_get_mb_cur_max() throw(); 
# 144
extern double atof(const char * __nptr) throw()
# 145
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 147
extern int atoi(const char * __nptr) throw()
# 148
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 150
extern long atol(const char * __nptr) throw()
# 151
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 157
__extension__ extern long long atoll(const char * __nptr) throw()
# 158
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 164
extern double strtod(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 166
 __attribute((__nonnull__(1))); 
# 172
extern float strtof(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 173
 __attribute((__nonnull__(1))); 
# 175
extern long double strtold(const char *__restrict__ __nptr, char **__restrict__ __endptr) throw()
# 177
 __attribute((__nonnull__(1))); 
# 183
extern long strtol(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 185
 __attribute((__nonnull__(1))); 
# 187
extern unsigned long strtoul(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 189
 __attribute((__nonnull__(1))); 
# 195
__extension__ extern long long strtoq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 197
 __attribute((__nonnull__(1))); 
# 200
__extension__ extern unsigned long long strtouq(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 202
 __attribute((__nonnull__(1))); 
# 209
__extension__ extern long long strtoll(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 211
 __attribute((__nonnull__(1))); 
# 214
__extension__ extern unsigned long long strtoull(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base) throw()
# 216
 __attribute((__nonnull__(1))); 
# 239
extern long strtol_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 241
 __attribute((__nonnull__(1, 4))); 
# 243
extern unsigned long strtoul_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 246
 __attribute((__nonnull__(1, 4))); 
# 249
__extension__ extern long long strtoll_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 252
 __attribute((__nonnull__(1, 4))); 
# 255
__extension__ extern unsigned long long strtoull_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, int __base, __locale_t __loc) throw()
# 258
 __attribute((__nonnull__(1, 4))); 
# 260
extern double strtod_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 262
 __attribute((__nonnull__(1, 3))); 
# 264
extern float strtof_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 266
 __attribute((__nonnull__(1, 3))); 
# 268
extern long double strtold_l(const char *__restrict__ __nptr, char **__restrict__ __endptr, __locale_t __loc) throw()
# 271
 __attribute((__nonnull__(1, 3))); 
# 305
extern char *l64a(long __n) throw(); 
# 308
extern long a64l(const char * __s) throw()
# 309
 __attribute((__pure__)) __attribute((__nonnull__(1))); 
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
extern "C" {
# 33
typedef __u_char u_char; 
# 34
typedef __u_short u_short; 
# 35
typedef __u_int u_int; 
# 36
typedef __u_long u_long; 
# 37
typedef __quad_t quad_t; 
# 38
typedef __u_quad_t u_quad_t; 
# 39
typedef __fsid_t fsid_t; 
# 44
typedef __loff_t loff_t; 
# 48
typedef __ino_t ino_t; 
# 55
typedef __ino64_t ino64_t; 
# 60
typedef __dev_t dev_t; 
# 65
typedef __gid_t gid_t; 
# 70
typedef __mode_t mode_t; 
# 75
typedef __nlink_t nlink_t; 
# 80
typedef __uid_t uid_t; 
# 86
typedef __off_t off_t; 
# 93
typedef __off64_t off64_t; 
# 104
typedef __id_t id_t; 
# 109
typedef __ssize_t ssize_t; 
# 115
typedef __daddr_t daddr_t; 
# 116
typedef __caddr_t caddr_t; 
# 122
typedef __key_t key_t; 
# 136
typedef __useconds_t useconds_t; 
# 140
typedef __suseconds_t suseconds_t; 
# 150
typedef unsigned long ulong; 
# 151
typedef unsigned short ushort; 
# 152
typedef unsigned uint; 
# 194
typedef signed char int8_t __attribute((__mode__(__QI__))); 
# 195
typedef short int16_t __attribute((__mode__(__HI__))); 
# 196
typedef int int32_t __attribute((__mode__(__SI__))); 
# 197
typedef long int64_t __attribute((__mode__(__DI__))); 
# 200
typedef unsigned char u_int8_t __attribute((__mode__(__QI__))); 
# 201
typedef unsigned short u_int16_t __attribute((__mode__(__HI__))); 
# 202
typedef unsigned u_int32_t __attribute((__mode__(__SI__))); 
# 203
typedef unsigned long u_int64_t __attribute((__mode__(__DI__))); 
# 205
typedef long register_t __attribute((__mode__(__word__))); 
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t; 
# 30
typedef 
# 28
struct { 
# 29
unsigned long __val[(1024) / ((8) * sizeof(unsigned long))]; 
# 30
} __sigset_t; 
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t; 
# 54
typedef long __fd_mask; 
# 75
typedef 
# 65
struct { 
# 69
__fd_mask fds_bits[1024 / (8 * ((int)sizeof(__fd_mask)))]; 
# 75
} fd_set; 
# 82
typedef __fd_mask fd_mask; 
# 96
extern "C" {
# 106
extern int select(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, timeval *__restrict__ __timeout); 
# 118
extern int pselect(int __nfds, fd_set *__restrict__ __readfds, fd_set *__restrict__ __writefds, fd_set *__restrict__ __exceptfds, const timespec *__restrict__ __timeout, const __sigset_t *__restrict__ __sigmask); 
# 131
}
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
extern "C" {
# 27
__extension__ extern unsigned gnu_dev_major(unsigned long long __dev) throw()
# 28
 __attribute((const)); 
# 30
__extension__ extern unsigned gnu_dev_minor(unsigned long long __dev) throw()
# 31
 __attribute((const)); 
# 33
__extension__ extern unsigned long long gnu_dev_makedev(unsigned __major, unsigned __minor) throw()
# 35
 __attribute((const)); 
# 58
}
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t; 
# 235
typedef __blkcnt_t blkcnt_t; 
# 239
typedef __fsblkcnt_t fsblkcnt_t; 
# 243
typedef __fsfilcnt_t fsfilcnt_t; 
# 262
typedef __blkcnt64_t blkcnt64_t; 
# 263
typedef __fsblkcnt64_t fsblkcnt64_t; 
# 264
typedef __fsfilcnt64_t fsfilcnt64_t; 
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long pthread_t; 
# 63
union pthread_attr_t { 
# 65
char __size[56]; 
# 66
long __align; 
# 67
}; 
# 69
typedef pthread_attr_t pthread_attr_t; 
# 79
typedef 
# 75
struct __pthread_internal_list { 
# 77
__pthread_internal_list *__prev; 
# 78
__pthread_internal_list *__next; 
# 79
} __pthread_list_t; 
# 128
typedef 
# 91
union { 
# 92
struct __pthread_mutex_s { 
# 94
int __lock; 
# 95
unsigned __count; 
# 96
int __owner; 
# 98
unsigned __nusers; 
# 102
int __kind; 
# 104
short __spins; 
# 105
short __elision; 
# 106
__pthread_list_t __list; 
# 125
} __data; 
# 126
char __size[40]; 
# 127
long __align; 
# 128
} pthread_mutex_t; 
# 134
typedef 
# 131
union { 
# 132
char __size[4]; 
# 133
int __align; 
# 134
} pthread_mutexattr_t; 
# 154
typedef 
# 140
union { 
# 142
struct { 
# 143
int __lock; 
# 144
unsigned __futex; 
# 145
__extension__ unsigned long long __total_seq; 
# 146
__extension__ unsigned long long __wakeup_seq; 
# 147
__extension__ unsigned long long __woken_seq; 
# 148
void *__mutex; 
# 149
unsigned __nwaiters; 
# 150
unsigned __broadcast_seq; 
# 151
} __data; 
# 152
char __size[48]; 
# 153
__extension__ long long __align; 
# 154
} pthread_cond_t; 
# 160
typedef 
# 157
union { 
# 158
char __size[4]; 
# 159
int __align; 
# 160
} pthread_condattr_t; 
# 164
typedef unsigned pthread_key_t; 
# 168
typedef int pthread_once_t; 
# 222
typedef 
# 175
union { 
# 178
struct { 
# 179
int __lock; 
# 180
unsigned __nr_readers; 
# 181
unsigned __readers_wakeup; 
# 182
unsigned __writer_wakeup; 
# 183
unsigned __nr_readers_queued; 
# 184
unsigned __nr_writers_queued; 
# 185
int __writer; 
# 186
int __shared; 
# 187
signed char __rwelision; 
# 192
unsigned char __pad1[7]; 
# 195
unsigned long __pad2; 
# 198
unsigned __flags; 
# 200
} __data; 
# 220
char __size[56]; 
# 221
long __align; 
# 222
} pthread_rwlock_t; 
# 228
typedef 
# 225
union { 
# 226
char __size[8]; 
# 227
long __align; 
# 228
} pthread_rwlockattr_t; 
# 234
typedef volatile int pthread_spinlock_t; 
# 243
typedef 
# 240
union { 
# 241
char __size[32]; 
# 242
long __align; 
# 243
} pthread_barrier_t; 
# 249
typedef 
# 246
union { 
# 247
char __size[4]; 
# 248
int __align; 
# 249
} pthread_barrierattr_t; 
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
}
# 321 "/usr/include/stdlib.h" 3
extern long random() throw(); 
# 324
extern void srandom(unsigned __seed) throw(); 
# 330
extern char *initstate(unsigned __seed, char * __statebuf, size_t __statelen) throw()
# 331
 __attribute((__nonnull__(2))); 
# 335
extern char *setstate(char * __statebuf) throw() __attribute((__nonnull__(1))); 
# 343
struct random_data { 
# 345
int32_t *fptr; 
# 346
int32_t *rptr; 
# 347
int32_t *state; 
# 348
int rand_type; 
# 349
int rand_deg; 
# 350
int rand_sep; 
# 351
int32_t *end_ptr; 
# 352
}; 
# 354
extern int random_r(random_data *__restrict__ __buf, int32_t *__restrict__ __result) throw()
# 355
 __attribute((__nonnull__(1, 2))); 
# 357
extern int srandom_r(unsigned __seed, random_data * __buf) throw()
# 358
 __attribute((__nonnull__(2))); 
# 360
extern int initstate_r(unsigned __seed, char *__restrict__ __statebuf, size_t __statelen, random_data *__restrict__ __buf) throw()
# 363
 __attribute((__nonnull__(2, 4))); 
# 365
extern int setstate_r(char *__restrict__ __statebuf, random_data *__restrict__ __buf) throw()
# 367
 __attribute((__nonnull__(1, 2))); 
# 374
extern int rand() throw(); 
# 376
extern void srand(unsigned __seed) throw(); 
# 381
extern int rand_r(unsigned * __seed) throw(); 
# 389
extern double drand48() throw(); 
# 390
extern double erand48(unsigned short  __xsubi[3]) throw() __attribute((__nonnull__(1))); 
# 393
extern long lrand48() throw(); 
# 394
extern long nrand48(unsigned short  __xsubi[3]) throw()
# 395
 __attribute((__nonnull__(1))); 
# 398
extern long mrand48() throw(); 
# 399
extern long jrand48(unsigned short  __xsubi[3]) throw()
# 400
 __attribute((__nonnull__(1))); 
# 403
extern void srand48(long __seedval) throw(); 
# 404
extern unsigned short *seed48(unsigned short  __seed16v[3]) throw()
# 405
 __attribute((__nonnull__(1))); 
# 406
extern void lcong48(unsigned short  __param[7]) throw() __attribute((__nonnull__(1))); 
# 412
struct drand48_data { 
# 414
unsigned short __x[3]; 
# 415
unsigned short __old_x[3]; 
# 416
unsigned short __c; 
# 417
unsigned short __init; 
# 418
__extension__ unsigned long long __a; 
# 420
}; 
# 423
extern int drand48_r(drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 424
 __attribute((__nonnull__(1, 2))); 
# 425
extern int erand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, double *__restrict__ __result) throw()
# 427
 __attribute((__nonnull__(1, 2))); 
# 430
extern int lrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 432
 __attribute((__nonnull__(1, 2))); 
# 433
extern int nrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 436
 __attribute((__nonnull__(1, 2))); 
# 439
extern int mrand48_r(drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 441
 __attribute((__nonnull__(1, 2))); 
# 442
extern int jrand48_r(unsigned short  __xsubi[3], drand48_data *__restrict__ __buffer, long *__restrict__ __result) throw()
# 445
 __attribute((__nonnull__(1, 2))); 
# 448
extern int srand48_r(long __seedval, drand48_data * __buffer) throw()
# 449
 __attribute((__nonnull__(2))); 
# 451
extern int seed48_r(unsigned short  __seed16v[3], drand48_data * __buffer) throw()
# 452
 __attribute((__nonnull__(1, 2))); 
# 454
extern int lcong48_r(unsigned short  __param[7], drand48_data * __buffer) throw()
# 456
 __attribute((__nonnull__(1, 2))); 
# 466
extern void *malloc(size_t __size) throw() __attribute((__malloc__)); 
# 468
extern void *calloc(size_t __nmemb, size_t __size) throw()
# 469
 __attribute((__malloc__)); 
# 480
extern void *realloc(void * __ptr, size_t __size) throw()
# 481
 __attribute((__warn_unused_result__)); 
# 483
extern void free(void * __ptr) throw(); 
# 488
extern void cfree(void * __ptr) throw(); 
# 26 "/usr/include/alloca.h" 3
extern "C" {
# 32
extern void *alloca(size_t __size) throw(); 
# 38
}
# 498 "/usr/include/stdlib.h" 3
extern void *valloc(size_t __size) throw() __attribute((__malloc__)); 
# 503
extern int posix_memalign(void ** __memptr, size_t __alignment, size_t __size) throw()
# 504
 __attribute((__nonnull__(1))); 
# 509
extern void *aligned_alloc(size_t __alignment, size_t __size) throw()
# 510
 __attribute((__malloc__)) __attribute((__alloc_size__(2))); 
# 515
extern void abort() throw() __attribute((__noreturn__)); 
# 519
extern int atexit(void (* __func)(void)) throw() __attribute((__nonnull__(1))); 
# 524
extern "C++" int at_quick_exit(void (* __func)(void)) throw() __asm__("at_quick_exit")
# 525
 __attribute((__nonnull__(1))); 
# 535
extern int on_exit(void (* __func)(int __status, void * __arg), void * __arg) throw()
# 536
 __attribute((__nonnull__(1))); 
# 543
extern void exit(int __status) throw() __attribute((__noreturn__)); 
# 549
extern void quick_exit(int __status) throw() __attribute((__noreturn__)); 
# 557
extern void _Exit(int __status) throw() __attribute((__noreturn__)); 
# 564
extern char *getenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 570
extern char *secure_getenv(const char * __name) throw()
# 571
 __attribute((__nonnull__(1))); 
# 578
extern int putenv(char * __string) throw() __attribute((__nonnull__(1))); 
# 584
extern int setenv(const char * __name, const char * __value, int __replace) throw()
# 585
 __attribute((__nonnull__(2))); 
# 588
extern int unsetenv(const char * __name) throw() __attribute((__nonnull__(1))); 
# 595
extern int clearenv() throw(); 
# 606
extern char *mktemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 619
extern int mkstemp(char * __template) __attribute((__nonnull__(1))); 
# 629
extern int mkstemp64(char * __template) __attribute((__nonnull__(1))); 
# 641
extern int mkstemps(char * __template, int __suffixlen) __attribute((__nonnull__(1))); 
# 651
extern int mkstemps64(char * __template, int __suffixlen)
# 652
 __attribute((__nonnull__(1))); 
# 662
extern char *mkdtemp(char * __template) throw() __attribute((__nonnull__(1))); 
# 673
extern int mkostemp(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 683
extern int mkostemp64(char * __template, int __flags) __attribute((__nonnull__(1))); 
# 693
extern int mkostemps(char * __template, int __suffixlen, int __flags)
# 694
 __attribute((__nonnull__(1))); 
# 705
extern int mkostemps64(char * __template, int __suffixlen, int __flags)
# 706
 __attribute((__nonnull__(1))); 
# 716
extern int system(const char * __command); 
# 723
extern char *canonicalize_file_name(const char * __name) throw()
# 724
 __attribute((__nonnull__(1))); 
# 733
extern char *realpath(const char *__restrict__ __name, char *__restrict__ __resolved) throw(); 
# 741
typedef int (*__compar_fn_t)(const void *, const void *); 
# 744
typedef __compar_fn_t comparison_fn_t; 
# 748
typedef int (*__compar_d_fn_t)(const void *, const void *, void *); 
# 754
extern void *bsearch(const void * __key, const void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 756
 __attribute((__nonnull__(1, 2, 5))); 
# 764
extern void qsort(void * __base, size_t __nmemb, size_t __size, __compar_fn_t __compar)
# 765
 __attribute((__nonnull__(1, 4))); 
# 767
extern void qsort_r(void * __base, size_t __nmemb, size_t __size, __compar_d_fn_t __compar, void * __arg)
# 769
 __attribute((__nonnull__(1, 4))); 
# 774
extern int abs(int __x) throw() __attribute((const)); 
# 775
extern long labs(long __x) throw() __attribute((const)); 
# 779
__extension__ extern long long llabs(long long __x) throw()
# 780
 __attribute((const)); 
# 788
extern div_t div(int __numer, int __denom) throw()
# 789
 __attribute((const)); 
# 790
extern ldiv_t ldiv(long __numer, long __denom) throw()
# 791
 __attribute((const)); 
# 796
__extension__ extern lldiv_t lldiv(long long __numer, long long __denom) throw()
# 798
 __attribute((const)); 
# 811
extern char *ecvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 812
 __attribute((__nonnull__(3, 4))); 
# 817
extern char *fcvt(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 818
 __attribute((__nonnull__(3, 4))); 
# 823
extern char *gcvt(double __value, int __ndigit, char * __buf) throw()
# 824
 __attribute((__nonnull__(3))); 
# 829
extern char *qecvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 831
 __attribute((__nonnull__(3, 4))); 
# 832
extern char *qfcvt(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign) throw()
# 834
 __attribute((__nonnull__(3, 4))); 
# 835
extern char *qgcvt(long double __value, int __ndigit, char * __buf) throw()
# 836
 __attribute((__nonnull__(3))); 
# 841
extern int ecvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 843
 __attribute((__nonnull__(3, 4, 5))); 
# 844
extern int fcvt_r(double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 846
 __attribute((__nonnull__(3, 4, 5))); 
# 848
extern int qecvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 851
 __attribute((__nonnull__(3, 4, 5))); 
# 852
extern int qfcvt_r(long double __value, int __ndigit, int *__restrict__ __decpt, int *__restrict__ __sign, char *__restrict__ __buf, size_t __len) throw()
# 855
 __attribute((__nonnull__(3, 4, 5))); 
# 862
extern int mblen(const char * __s, size_t __n) throw(); 
# 865
extern int mbtowc(wchar_t *__restrict__ __pwc, const char *__restrict__ __s, size_t __n) throw(); 
# 869
extern int wctomb(char * __s, wchar_t __wchar) throw(); 
# 873
extern size_t mbstowcs(wchar_t *__restrict__ __pwcs, const char *__restrict__ __s, size_t __n) throw(); 
# 876
extern size_t wcstombs(char *__restrict__ __s, const wchar_t *__restrict__ __pwcs, size_t __n) throw(); 
# 887
extern int rpmatch(const char * __response) throw() __attribute((__nonnull__(1))); 
# 898
extern int getsubopt(char **__restrict__ __optionp, char *const *__restrict__ __tokens, char **__restrict__ __valuep) throw()
# 901
 __attribute((__nonnull__(1, 2, 3))); 
# 907
extern void setkey(const char * __key) throw() __attribute((__nonnull__(1))); 
# 915
extern int posix_openpt(int __oflag); 
# 923
extern int grantpt(int __fd) throw(); 
# 927
extern int unlockpt(int __fd) throw(); 
# 932
extern char *ptsname(int __fd) throw(); 
# 939
extern int ptsname_r(int __fd, char * __buf, size_t __buflen) throw()
# 940
 __attribute((__nonnull__(2))); 
# 943
extern int getpt(); 
# 950
extern int getloadavg(double  __loadavg[], int __nelem) throw()
# 951
 __attribute((__nonnull__(1))); 
# 967
}
# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std { 
# 196
typedef unsigned long size_t; 
# 197
typedef long ptrdiff_t; 
# 202
}
# 216
namespace std { 
# 218
inline namespace __cxx11 __attribute((__abi_tag__("cxx11" ))) { }
# 219
}
# 220
namespace __gnu_cxx { 
# 222
inline namespace __cxx11 __attribute((__abi_tag__("cxx11" ))) { }
# 223
}
# 68 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 72
template< class _Iterator, class _Container> class __normal_iterator; 
# 76
}
# 78
namespace std __attribute((__visibility__("default"))) { 
# 82
struct __true_type { }; 
# 83
struct __false_type { }; 
# 85
template< bool > 
# 86
struct __truth_type { 
# 87
typedef __false_type __type; }; 
# 90
template<> struct __truth_type< true>  { 
# 91
typedef __true_type __type; }; 
# 95
template< class _Sp, class _Tp> 
# 96
struct __traitor { 
# 98
enum { __value = ((bool)_Sp::__value) || ((bool)_Tp::__value)}; 
# 99
typedef typename __truth_type< __value> ::__type __type; 
# 100
}; 
# 103
template< class , class > 
# 104
struct __are_same { 
# 106
enum { __value}; 
# 107
typedef __false_type __type; 
# 108
}; 
# 110
template< class _Tp> 
# 111
struct __are_same< _Tp, _Tp>  { 
# 113
enum { __value = 1}; 
# 114
typedef __true_type __type; 
# 115
}; 
# 118
template< class _Tp> 
# 119
struct __is_void { 
# 121
enum { __value}; 
# 122
typedef __false_type __type; 
# 123
}; 
# 126
template<> struct __is_void< void>  { 
# 128
enum { __value = 1}; 
# 129
typedef __true_type __type; 
# 130
}; 
# 135
template< class _Tp> 
# 136
struct __is_integer { 
# 138
enum { __value}; 
# 139
typedef __false_type __type; 
# 140
}; 
# 147
template<> struct __is_integer< bool>  { 
# 149
enum { __value = 1}; 
# 150
typedef __true_type __type; 
# 151
}; 
# 154
template<> struct __is_integer< char>  { 
# 156
enum { __value = 1}; 
# 157
typedef __true_type __type; 
# 158
}; 
# 161
template<> struct __is_integer< signed char>  { 
# 163
enum { __value = 1}; 
# 164
typedef __true_type __type; 
# 165
}; 
# 168
template<> struct __is_integer< unsigned char>  { 
# 170
enum { __value = 1}; 
# 171
typedef __true_type __type; 
# 172
}; 
# 176
template<> struct __is_integer< wchar_t>  { 
# 178
enum { __value = 1}; 
# 179
typedef __true_type __type; 
# 180
}; 
# 200
template<> struct __is_integer< short>  { 
# 202
enum { __value = 1}; 
# 203
typedef __true_type __type; 
# 204
}; 
# 207
template<> struct __is_integer< unsigned short>  { 
# 209
enum { __value = 1}; 
# 210
typedef __true_type __type; 
# 211
}; 
# 214
template<> struct __is_integer< int>  { 
# 216
enum { __value = 1}; 
# 217
typedef __true_type __type; 
# 218
}; 
# 221
template<> struct __is_integer< unsigned>  { 
# 223
enum { __value = 1}; 
# 224
typedef __true_type __type; 
# 225
}; 
# 228
template<> struct __is_integer< long>  { 
# 230
enum { __value = 1}; 
# 231
typedef __true_type __type; 
# 232
}; 
# 235
template<> struct __is_integer< unsigned long>  { 
# 237
enum { __value = 1}; 
# 238
typedef __true_type __type; 
# 239
}; 
# 242
template<> struct __is_integer< long long>  { 
# 244
enum { __value = 1}; 
# 245
typedef __true_type __type; 
# 246
}; 
# 249
template<> struct __is_integer< unsigned long long>  { 
# 251
enum { __value = 1}; 
# 252
typedef __true_type __type; 
# 253
}; 
# 270
template<> struct __is_integer< __int128_t>  { enum { __value = 1}; typedef __true_type __type; }; template<> struct __is_integer< __uint128_t>  { enum { __value = 1}; typedef __true_type __type; }; 
# 287
template< class _Tp> 
# 288
struct __is_floating { 
# 290
enum { __value}; 
# 291
typedef __false_type __type; 
# 292
}; 
# 296
template<> struct __is_floating< float>  { 
# 298
enum { __value = 1}; 
# 299
typedef __true_type __type; 
# 300
}; 
# 303
template<> struct __is_floating< double>  { 
# 305
enum { __value = 1}; 
# 306
typedef __true_type __type; 
# 307
}; 
# 310
template<> struct __is_floating< long double>  { 
# 312
enum { __value = 1}; 
# 313
typedef __true_type __type; 
# 314
}; 
# 319
template< class _Tp> 
# 320
struct __is_pointer { 
# 322
enum { __value}; 
# 323
typedef __false_type __type; 
# 324
}; 
# 326
template< class _Tp> 
# 327
struct __is_pointer< _Tp *>  { 
# 329
enum { __value = 1}; 
# 330
typedef __true_type __type; 
# 331
}; 
# 336
template< class _Tp> 
# 337
struct __is_normal_iterator { 
# 339
enum { __value}; 
# 340
typedef __false_type __type; 
# 341
}; 
# 343
template< class _Iterator, class _Container> 
# 344
struct __is_normal_iterator< __gnu_cxx::__normal_iterator< _Iterator, _Container> >  { 
# 347
enum { __value = 1}; 
# 348
typedef __true_type __type; 
# 349
}; 
# 354
template< class _Tp> 
# 355
struct __is_arithmetic : public __traitor< __is_integer< _Tp> , __is_floating< _Tp> >  { 
# 357
}; 
# 362
template< class _Tp> 
# 363
struct __is_scalar : public __traitor< __is_arithmetic< _Tp> , __is_pointer< _Tp> >  { 
# 365
}; 
# 370
template< class _Tp> 
# 371
struct __is_char { 
# 373
enum { __value}; 
# 374
typedef __false_type __type; 
# 375
}; 
# 378
template<> struct __is_char< char>  { 
# 380
enum { __value = 1}; 
# 381
typedef __true_type __type; 
# 382
}; 
# 386
template<> struct __is_char< wchar_t>  { 
# 388
enum { __value = 1}; 
# 389
typedef __true_type __type; 
# 390
}; 
# 393
template< class _Tp> 
# 394
struct __is_byte { 
# 396
enum { __value}; 
# 397
typedef __false_type __type; 
# 398
}; 
# 401
template<> struct __is_byte< char>  { 
# 403
enum { __value = 1}; 
# 404
typedef __true_type __type; 
# 405
}; 
# 408
template<> struct __is_byte< signed char>  { 
# 410
enum { __value = 1}; 
# 411
typedef __true_type __type; 
# 412
}; 
# 415
template<> struct __is_byte< unsigned char>  { 
# 417
enum { __value = 1}; 
# 418
typedef __true_type __type; 
# 419
}; 
# 424
template< class _Tp> 
# 425
struct __is_move_iterator { 
# 427
enum { __value}; 
# 428
typedef __false_type __type; 
# 429
}; 
# 444
}
# 37 "/usr/include/c++/5/ext/type_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 42
template< bool , class > 
# 43
struct __enable_if { 
# 44
}; 
# 46
template< class _Tp> 
# 47
struct __enable_if< true, _Tp>  { 
# 48
typedef _Tp __type; }; 
# 52
template< bool _Cond, class _Iftrue, class _Iffalse> 
# 53
struct __conditional_type { 
# 54
typedef _Iftrue __type; }; 
# 56
template< class _Iftrue, class _Iffalse> 
# 57
struct __conditional_type< false, _Iftrue, _Iffalse>  { 
# 58
typedef _Iffalse __type; }; 
# 62
template< class _Tp> 
# 63
struct __add_unsigned { 
# 66
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 69
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 70
}; 
# 73
template<> struct __add_unsigned< char>  { 
# 74
typedef unsigned char __type; }; 
# 77
template<> struct __add_unsigned< signed char>  { 
# 78
typedef unsigned char __type; }; 
# 81
template<> struct __add_unsigned< short>  { 
# 82
typedef unsigned short __type; }; 
# 85
template<> struct __add_unsigned< int>  { 
# 86
typedef unsigned __type; }; 
# 89
template<> struct __add_unsigned< long>  { 
# 90
typedef unsigned long __type; }; 
# 93
template<> struct __add_unsigned< long long>  { 
# 94
typedef unsigned long long __type; }; 
# 98
template<> struct __add_unsigned< bool> ; 
# 101
template<> struct __add_unsigned< wchar_t> ; 
# 105
template< class _Tp> 
# 106
struct __remove_unsigned { 
# 109
private: typedef __enable_if< std::__is_integer< _Tp> ::__value, _Tp>  __if_type; 
# 112
public: typedef typename __enable_if< std::__is_integer< _Tp> ::__value, _Tp> ::__type __type; 
# 113
}; 
# 116
template<> struct __remove_unsigned< char>  { 
# 117
typedef signed char __type; }; 
# 120
template<> struct __remove_unsigned< unsigned char>  { 
# 121
typedef signed char __type; }; 
# 124
template<> struct __remove_unsigned< unsigned short>  { 
# 125
typedef short __type; }; 
# 128
template<> struct __remove_unsigned< unsigned>  { 
# 129
typedef int __type; }; 
# 132
template<> struct __remove_unsigned< unsigned long>  { 
# 133
typedef long __type; }; 
# 136
template<> struct __remove_unsigned< unsigned long long>  { 
# 137
typedef long long __type; }; 
# 141
template<> struct __remove_unsigned< bool> ; 
# 144
template<> struct __remove_unsigned< wchar_t> ; 
# 148
template< class _Type> inline bool 
# 150
__is_null_pointer(_Type *__ptr) 
# 151
{ return __ptr == 0; } 
# 153
template< class _Type> inline bool 
# 155
__is_null_pointer(_Type) 
# 156
{ return false; } 
# 165
template< class _Tp, bool  = std::__is_integer< _Tp> ::__value> 
# 166
struct __promote { 
# 167
typedef double __type; }; 
# 172
template< class _Tp> 
# 173
struct __promote< _Tp, false>  { 
# 174
}; 
# 177
template<> struct __promote< long double>  { 
# 178
typedef long double __type; }; 
# 181
template<> struct __promote< double>  { 
# 182
typedef double __type; }; 
# 185
template<> struct __promote< float>  { 
# 186
typedef float __type; }; 
# 188
template< class _Tp, class _Up, class 
# 189
_Tp2 = typename __promote< _Tp> ::__type, class 
# 190
_Up2 = typename __promote< _Up> ::__type> 
# 191
struct __promote_2 { 
# 193
typedef __typeof__(_Tp2() + _Up2()) __type; 
# 194
}; 
# 196
template< class _Tp, class _Up, class _Vp, class 
# 197
_Tp2 = typename __promote< _Tp> ::__type, class 
# 198
_Up2 = typename __promote< _Up> ::__type, class 
# 199
_Vp2 = typename __promote< _Vp> ::__type> 
# 200
struct __promote_3 { 
# 202
typedef __typeof__((_Tp2() + _Up2()) + _Vp2()) __type; 
# 203
}; 
# 205
template< class _Tp, class _Up, class _Vp, class _Wp, class 
# 206
_Tp2 = typename __promote< _Tp> ::__type, class 
# 207
_Up2 = typename __promote< _Up> ::__type, class 
# 208
_Vp2 = typename __promote< _Vp> ::__type, class 
# 209
_Wp2 = typename __promote< _Wp> ::__type> 
# 210
struct __promote_4 { 
# 212
typedef __typeof__(((_Tp2() + _Up2()) + _Vp2()) + _Wp2()) __type; 
# 213
}; 
# 216
}
# 75 "/usr/include/c++/5/cmath" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
inline double abs(double __x) 
# 82
{ return __builtin_fabs(__x); } 
# 87
inline float abs(float __x) 
# 88
{ return __builtin_fabsf(__x); } 
# 91
inline long double abs(long double __x) 
# 92
{ return __builtin_fabsl(__x); } 
# 95
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 99
abs(_Tp __x) 
# 100
{ return __builtin_fabs(__x); } 
# 102
using ::acos;
# 106
inline float acos(float __x) 
# 107
{ return __builtin_acosf(__x); } 
# 110
inline long double acos(long double __x) 
# 111
{ return __builtin_acosl(__x); } 
# 114
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 118
acos(_Tp __x) 
# 119
{ return __builtin_acos(__x); } 
# 121
using ::asin;
# 125
inline float asin(float __x) 
# 126
{ return __builtin_asinf(__x); } 
# 129
inline long double asin(long double __x) 
# 130
{ return __builtin_asinl(__x); } 
# 133
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 137
asin(_Tp __x) 
# 138
{ return __builtin_asin(__x); } 
# 140
using ::atan;
# 144
inline float atan(float __x) 
# 145
{ return __builtin_atanf(__x); } 
# 148
inline long double atan(long double __x) 
# 149
{ return __builtin_atanl(__x); } 
# 152
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 156
atan(_Tp __x) 
# 157
{ return __builtin_atan(__x); } 
# 159
using ::atan2;
# 163
inline float atan2(float __y, float __x) 
# 164
{ return __builtin_atan2f(__y, __x); } 
# 167
inline long double atan2(long double __y, long double __x) 
# 168
{ return __builtin_atan2l(__y, __x); } 
# 171
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 174
atan2(_Tp __y, _Up __x) 
# 175
{ 
# 176
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 177
return atan2((__type)__y, (__type)__x); 
# 178
} 
# 180
using ::ceil;
# 184
inline float ceil(float __x) 
# 185
{ return __builtin_ceilf(__x); } 
# 188
inline long double ceil(long double __x) 
# 189
{ return __builtin_ceill(__x); } 
# 192
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 196
ceil(_Tp __x) 
# 197
{ return __builtin_ceil(__x); } 
# 199
using ::cos;
# 203
inline float cos(float __x) 
# 204
{ return __builtin_cosf(__x); } 
# 207
inline long double cos(long double __x) 
# 208
{ return __builtin_cosl(__x); } 
# 211
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 215
cos(_Tp __x) 
# 216
{ return __builtin_cos(__x); } 
# 218
using ::cosh;
# 222
inline float cosh(float __x) 
# 223
{ return __builtin_coshf(__x); } 
# 226
inline long double cosh(long double __x) 
# 227
{ return __builtin_coshl(__x); } 
# 230
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 234
cosh(_Tp __x) 
# 235
{ return __builtin_cosh(__x); } 
# 237
using ::exp;
# 241
inline float exp(float __x) 
# 242
{ return __builtin_expf(__x); } 
# 245
inline long double exp(long double __x) 
# 246
{ return __builtin_expl(__x); } 
# 249
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 253
exp(_Tp __x) 
# 254
{ return __builtin_exp(__x); } 
# 256
using ::fabs;
# 260
inline float fabs(float __x) 
# 261
{ return __builtin_fabsf(__x); } 
# 264
inline long double fabs(long double __x) 
# 265
{ return __builtin_fabsl(__x); } 
# 268
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 272
fabs(_Tp __x) 
# 273
{ return __builtin_fabs(__x); } 
# 275
using ::floor;
# 279
inline float floor(float __x) 
# 280
{ return __builtin_floorf(__x); } 
# 283
inline long double floor(long double __x) 
# 284
{ return __builtin_floorl(__x); } 
# 287
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 291
floor(_Tp __x) 
# 292
{ return __builtin_floor(__x); } 
# 294
using ::fmod;
# 298
inline float fmod(float __x, float __y) 
# 299
{ return __builtin_fmodf(__x, __y); } 
# 302
inline long double fmod(long double __x, long double __y) 
# 303
{ return __builtin_fmodl(__x, __y); } 
# 306
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 309
fmod(_Tp __x, _Up __y) 
# 310
{ 
# 311
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 312
return fmod((__type)__x, (__type)__y); 
# 313
} 
# 315
using ::frexp;
# 319
inline float frexp(float __x, int *__exp) 
# 320
{ return __builtin_frexpf(__x, __exp); } 
# 323
inline long double frexp(long double __x, int *__exp) 
# 324
{ return __builtin_frexpl(__x, __exp); } 
# 327
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 331
frexp(_Tp __x, int *__exp) 
# 332
{ return __builtin_frexp(__x, __exp); } 
# 334
using ::ldexp;
# 338
inline float ldexp(float __x, int __exp) 
# 339
{ return __builtin_ldexpf(__x, __exp); } 
# 342
inline long double ldexp(long double __x, int __exp) 
# 343
{ return __builtin_ldexpl(__x, __exp); } 
# 346
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 350
ldexp(_Tp __x, int __exp) 
# 351
{ return __builtin_ldexp(__x, __exp); } 
# 353
using ::log;
# 357
inline float log(float __x) 
# 358
{ return __builtin_logf(__x); } 
# 361
inline long double log(long double __x) 
# 362
{ return __builtin_logl(__x); } 
# 365
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 369
log(_Tp __x) 
# 370
{ return __builtin_log(__x); } 
# 372
using ::log10;
# 376
inline float log10(float __x) 
# 377
{ return __builtin_log10f(__x); } 
# 380
inline long double log10(long double __x) 
# 381
{ return __builtin_log10l(__x); } 
# 384
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 388
log10(_Tp __x) 
# 389
{ return __builtin_log10(__x); } 
# 391
using ::modf;
# 395
inline float modf(float __x, float *__iptr) 
# 396
{ return __builtin_modff(__x, __iptr); } 
# 399
inline long double modf(long double __x, long double *__iptr) 
# 400
{ return __builtin_modfl(__x, __iptr); } 
# 403
using ::pow;
# 407
inline float pow(float __x, float __y) 
# 408
{ return __builtin_powf(__x, __y); } 
# 411
inline long double pow(long double __x, long double __y) 
# 412
{ return __builtin_powl(__x, __y); } 
# 418
inline double pow(double __x, int __i) 
# 419
{ return __builtin_powi(__x, __i); } 
# 422
inline float pow(float __x, int __n) 
# 423
{ return __builtin_powif(__x, __n); } 
# 426
inline long double pow(long double __x, int __n) 
# 427
{ return __builtin_powil(__x, __n); } 
# 431
template< class _Tp, class _Up> inline typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type 
# 434
pow(_Tp __x, _Up __y) 
# 435
{ 
# 436
typedef typename __gnu_cxx::__promote_2< _Tp, _Up> ::__type __type; 
# 437
return pow((__type)__x, (__type)__y); 
# 438
} 
# 440
using ::sin;
# 444
inline float sin(float __x) 
# 445
{ return __builtin_sinf(__x); } 
# 448
inline long double sin(long double __x) 
# 449
{ return __builtin_sinl(__x); } 
# 452
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 456
sin(_Tp __x) 
# 457
{ return __builtin_sin(__x); } 
# 459
using ::sinh;
# 463
inline float sinh(float __x) 
# 464
{ return __builtin_sinhf(__x); } 
# 467
inline long double sinh(long double __x) 
# 468
{ return __builtin_sinhl(__x); } 
# 471
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 475
sinh(_Tp __x) 
# 476
{ return __builtin_sinh(__x); } 
# 478
using ::sqrt;
# 482
inline float sqrt(float __x) 
# 483
{ return __builtin_sqrtf(__x); } 
# 486
inline long double sqrt(long double __x) 
# 487
{ return __builtin_sqrtl(__x); } 
# 490
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 494
sqrt(_Tp __x) 
# 495
{ return __builtin_sqrt(__x); } 
# 497
using ::tan;
# 501
inline float tan(float __x) 
# 502
{ return __builtin_tanf(__x); } 
# 505
inline long double tan(long double __x) 
# 506
{ return __builtin_tanl(__x); } 
# 509
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 513
tan(_Tp __x) 
# 514
{ return __builtin_tan(__x); } 
# 516
using ::tanh;
# 520
inline float tanh(float __x) 
# 521
{ return __builtin_tanhf(__x); } 
# 524
inline long double tanh(long double __x) 
# 525
{ return __builtin_tanhl(__x); } 
# 528
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_integer< _Tp> ::__value, double> ::__type 
# 532
tanh(_Tp __x) 
# 533
{ return __builtin_tanh(__x); } 
# 536
}
# 555
namespace std __attribute((__visibility__("default"))) { 
# 831
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 834
fpclassify(_Tp __f) 
# 835
{ 
# 836
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 837
return __builtin_fpclassify(0, 1, 4, 3, 2, (__type)__f); 
# 839
} 
# 841
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 844
isfinite(_Tp __f) 
# 845
{ 
# 846
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 847
return __builtin_isfinite((__type)__f); 
# 848
} 
# 850
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 853
isinf(_Tp __f) 
# 854
{ 
# 855
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 856
return __builtin_isinf((__type)__f); 
# 857
} 
# 859
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 862
isnan(_Tp __f) 
# 863
{ 
# 864
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 865
return __builtin_isnan((__type)__f); 
# 866
} 
# 868
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 871
isnormal(_Tp __f) 
# 872
{ 
# 873
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 874
return __builtin_isnormal((__type)__f); 
# 875
} 
# 877
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 880
signbit(_Tp __f) 
# 881
{ 
# 882
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 883
return (sizeof(__type) == sizeof(float)) ? __builtin_signbitf((__type)__f) : ((sizeof(__type) == sizeof(double)) ? __builtin_signbit((__type)__f) : __builtin_signbitl((__type)__f)); 
# 888
} 
# 890
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 893
isgreater(_Tp __f1, _Tp __f2) 
# 894
{ 
# 895
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 896
return __builtin_isgreater((__type)__f1, (__type)__f2); 
# 897
} 
# 899
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 902
isgreaterequal(_Tp __f1, _Tp __f2) 
# 903
{ 
# 904
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 905
return __builtin_isgreaterequal((__type)__f1, (__type)__f2); 
# 906
} 
# 908
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 911
isless(_Tp __f1, _Tp __f2) 
# 912
{ 
# 913
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 914
return __builtin_isless((__type)__f1, (__type)__f2); 
# 915
} 
# 917
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 920
islessequal(_Tp __f1, _Tp __f2) 
# 921
{ 
# 922
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 923
return __builtin_islessequal((__type)__f1, (__type)__f2); 
# 924
} 
# 926
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 929
islessgreater(_Tp __f1, _Tp __f2) 
# 930
{ 
# 931
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 932
return __builtin_islessgreater((__type)__f1, (__type)__f2); 
# 933
} 
# 935
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_arithmetic< _Tp> ::__value, int> ::__type 
# 938
isunordered(_Tp __f1, _Tp __f2) 
# 939
{ 
# 940
typedef typename __gnu_cxx::__promote< _Tp> ::__type __type; 
# 941
return __builtin_isunordered((__type)__f1, (__type)__f2); 
# 942
} 
# 947
}
# 114 "/usr/include/c++/5/cstdlib" 3
namespace std __attribute((__visibility__("default"))) { 
# 118
using ::div_t;
# 119
using ::ldiv_t;
# 121
using ::abort;
# 122
using ::abs;
# 123
using ::atexit;
# 129
using ::atof;
# 130
using ::atoi;
# 131
using ::atol;
# 132
using ::bsearch;
# 133
using ::calloc;
# 134
using ::div;
# 135
using ::exit;
# 136
using ::free;
# 137
using ::getenv;
# 138
using ::labs;
# 139
using ::ldiv;
# 140
using ::malloc;
# 142
using ::mblen;
# 143
using ::mbstowcs;
# 144
using ::mbtowc;
# 146
using ::qsort;
# 152
using ::rand;
# 153
using ::realloc;
# 154
using ::srand;
# 155
using ::strtod;
# 156
using ::strtol;
# 157
using ::strtoul;
# 158
using ::system;
# 160
using ::wcstombs;
# 161
using ::wctomb;
# 166
inline long abs(long __i) { return __builtin_labs(__i); } 
# 169
inline ldiv_t div(long __i, long __j) { return ldiv(__i, __j); } 
# 174
inline long long abs(long long __x) { return __builtin_llabs(__x); } 
# 179
inline __int128_t abs(__int128_t __x) { return (__x >= (0)) ? __x : (-__x); } 
# 196
}
# 209
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 214
using ::lldiv_t;
# 220
using ::_Exit;
# 224
using ::llabs;
# 227
inline lldiv_t div(long long __n, long long __d) 
# 228
{ lldiv_t __q; (__q.quot) = (__n / __d); (__q.rem) = (__n % __d); return __q; } 
# 230
using ::lldiv;
# 241
using ::atoll;
# 242
using ::strtoll;
# 243
using ::strtoull;
# 245
using ::strtof;
# 246
using ::strtold;
# 249
}
# 251
namespace std { 
# 254
using __gnu_cxx::lldiv_t;
# 256
using __gnu_cxx::_Exit;
# 258
using __gnu_cxx::llabs;
# 259
using __gnu_cxx::div;
# 260
using __gnu_cxx::lldiv;
# 262
using __gnu_cxx::atoll;
# 263
using __gnu_cxx::strtof;
# 264
using __gnu_cxx::strtoll;
# 265
using __gnu_cxx::strtoull;
# 266
using __gnu_cxx::strtold;
# 267
}
# 8925 "/usr/local/cuda/include/math_functions.h"
__attribute((always_inline)) inline int signbit(float x); 
# 8929
__attribute((always_inline)) inline int signbit(double x); 
# 8931
__attribute((always_inline)) inline int signbit(long double x); 
# 8933
__attribute((always_inline)) inline int isfinite(float x); 
# 8937
__attribute((always_inline)) inline int isfinite(double x); 
# 8939
__attribute((always_inline)) inline int isfinite(long double x); 
# 8941
__attribute((always_inline)) inline int isnan(float x); 
# 8945
extern "C" __attribute((always_inline)) inline int isnan(double x) throw(); 
# 8947
__attribute((always_inline)) inline int isnan(long double x); 
# 8949
__attribute((always_inline)) inline int isinf(float x); 
# 8953
extern "C" __attribute((always_inline)) inline int isinf(double x) throw(); 
# 8955
__attribute((always_inline)) inline int isinf(long double x); 
# 9002
namespace std { 
# 9004
template< class T> extern T __pow_helper(T, int); 
# 9005
template< class T> extern T __cmath_power(T, unsigned); 
# 9006
}
# 9008
using std::abs;
# 9009
using std::fabs;
# 9010
using std::ceil;
# 9011
using std::floor;
# 9012
using std::sqrt;
# 9013
using std::pow;
# 9014
using std::log;
# 9015
using std::log10;
# 9016
using std::fmod;
# 9017
using std::modf;
# 9018
using std::exp;
# 9019
using std::frexp;
# 9020
using std::ldexp;
# 9021
using std::asin;
# 9022
using std::sin;
# 9023
using std::sinh;
# 9024
using std::acos;
# 9025
using std::cos;
# 9026
using std::cosh;
# 9027
using std::atan;
# 9028
using std::atan2;
# 9029
using std::tan;
# 9030
using std::tanh;
# 9393
namespace std { 
# 9406
extern inline long long abs(long long); 
# 9412
extern inline long abs(long); 
# 9413
extern inline float abs(float); 
# 9414
extern inline double abs(double); 
# 9415
extern inline float fabs(float); 
# 9416
extern inline float ceil(float); 
# 9417
extern inline float floor(float); 
# 9418
extern inline float sqrt(float); 
# 9419
extern inline float pow(float, float); 
# 9428
extern inline float pow(float, int); 
# 9429
extern inline double pow(double, int); 
# 9434
extern inline float log(float); 
# 9435
extern inline float log10(float); 
# 9436
extern inline float fmod(float, float); 
# 9437
extern inline float modf(float, float *); 
# 9438
extern inline float exp(float); 
# 9439
extern inline float frexp(float, int *); 
# 9440
extern inline float ldexp(float, int); 
# 9441
extern inline float asin(float); 
# 9442
extern inline float sin(float); 
# 9443
extern inline float sinh(float); 
# 9444
extern inline float acos(float); 
# 9445
extern inline float cos(float); 
# 9446
extern inline float cosh(float); 
# 9447
extern inline float atan(float); 
# 9448
extern inline float atan2(float, float); 
# 9449
extern inline float tan(float); 
# 9450
extern inline float tanh(float); 
# 9518
}
# 9609
static inline float logb(float a); 
# 9611
static inline int ilogb(float a); 
# 9613
static inline float scalbn(float a, int b); 
# 9615
static inline float scalbln(float a, long b); 
# 9617
static inline float exp2(float a); 
# 9619
static inline float expm1(float a); 
# 9621
static inline float log2(float a); 
# 9623
static inline float log1p(float a); 
# 9625
static inline float acosh(float a); 
# 9627
static inline float asinh(float a); 
# 9629
static inline float atanh(float a); 
# 9631
static inline float hypot(float a, float b); 
# 9633
static inline float norm3d(float a, float b, float c); 
# 9635
static inline float norm4d(float a, float b, float c, float d); 
# 9637
static inline float cbrt(float a); 
# 9639
static inline float erf(float a); 
# 9641
static inline float erfc(float a); 
# 9643
static inline float lgamma(float a); 
# 9645
static inline float tgamma(float a); 
# 9647
static inline float copysign(float a, float b); 
# 9649
static inline float nextafter(float a, float b); 
# 9651
static inline float remainder(float a, float b); 
# 9653
static inline float remquo(float a, float b, int * quo); 
# 9655
static inline float round(float a); 
# 9657
static inline long lround(float a); 
# 9659
static inline long long llround(float a); 
# 9661
static inline float trunc(float a); 
# 9663
static inline float rint(float a); 
# 9665
static inline long lrint(float a); 
# 9667
static inline long long llrint(float a); 
# 9669
static inline float nearbyint(float a); 
# 9671
static inline float fdim(float a, float b); 
# 9673
static inline float fma(float a, float b, float c); 
# 9675
static inline float fmax(float a, float b); 
# 9677
static inline float fmin(float a, float b); 
# 9718
static inline float exp10(float a); 
# 9720
static inline float rsqrt(float a); 
# 9722
static inline float rcbrt(float a); 
# 9724
static inline float sinpi(float a); 
# 9726
static inline float cospi(float a); 
# 9728
static inline void sincospi(float a, float * sptr, float * cptr); 
# 9730
static inline void sincos(float a, float * sptr, float * cptr); 
# 9732
static inline float j0(float a); 
# 9734
static inline float j1(float a); 
# 9736
static inline float jn(int n, float a); 
# 9738
static inline float y0(float a); 
# 9740
static inline float y1(float a); 
# 9742
static inline float yn(int n, float a); 
# 9744
static inline float cyl_bessel_i0(float a); 
# 9746
static inline float cyl_bessel_i1(float a); 
# 9748
static inline float erfinv(float a); 
# 9750
static inline float erfcinv(float a); 
# 9752
static inline float normcdfinv(float a); 
# 9754
static inline float normcdf(float a); 
# 9756
static inline float erfcx(float a); 
# 9758
static inline double copysign(double a, float b); 
# 9760
static inline float copysign(float a, double b); 
# 9762
static inline unsigned min(unsigned a, unsigned b); 
# 9764
static inline unsigned min(int a, unsigned b); 
# 9766
static inline unsigned min(unsigned a, int b); 
# 9768
static inline long min(long a, long b); 
# 9770
static inline unsigned long min(unsigned long a, unsigned long b); 
# 9772
static inline unsigned long min(long a, unsigned long b); 
# 9774
static inline unsigned long min(unsigned long a, long b); 
# 9776
static inline long long min(long long a, long long b); 
# 9778
static inline unsigned long long min(unsigned long long a, unsigned long long b); 
# 9780
static inline unsigned long long min(long long a, unsigned long long b); 
# 9782
static inline unsigned long long min(unsigned long long a, long long b); 
# 9784
static inline float min(float a, float b); 
# 9786
static inline double min(double a, double b); 
# 9788
static inline double min(float a, double b); 
# 9790
static inline double min(double a, float b); 
# 9792
static inline unsigned max(unsigned a, unsigned b); 
# 9794
static inline unsigned max(int a, unsigned b); 
# 9796
static inline unsigned max(unsigned a, int b); 
# 9798
static inline long max(long a, long b); 
# 9800
static inline unsigned long max(unsigned long a, unsigned long b); 
# 9802
static inline unsigned long max(long a, unsigned long b); 
# 9804
static inline unsigned long max(unsigned long a, long b); 
# 9806
static inline long long max(long long a, long long b); 
# 9808
static inline unsigned long long max(unsigned long long a, unsigned long long b); 
# 9810
static inline unsigned long long max(long long a, unsigned long long b); 
# 9812
static inline unsigned long long max(unsigned long long a, long long b); 
# 9814
static inline float max(float a, float b); 
# 9816
static inline double max(double a, double b); 
# 9818
static inline double max(float a, double b); 
# 9820
static inline double max(double a, float b); 
# 248 "/usr/local/cuda/include/math_functions.hpp"
__attribute((always_inline)) inline int signbit(float x) { return __signbitf(x); } 
# 252
__attribute((always_inline)) inline int signbit(double x) { return __signbit(x); } 
# 254
__attribute((always_inline)) inline int signbit(long double x) { return __signbitl(x); } 
# 265
__attribute((always_inline)) inline int isfinite(float x) { return __finitef(x); } 
# 280
__attribute((always_inline)) inline int isfinite(double x) { return __finite(x); } 
# 293
__attribute((always_inline)) inline int isfinite(long double x) { return __finitel(x); } 
# 296
__attribute((always_inline)) inline int isnan(float x) { return __isnanf(x); } 
# 300
extern "C" __attribute((always_inline)) inline int isnan(double x) throw() { return __isnan(x); } 
# 302
__attribute((always_inline)) inline int isnan(long double x) { return __isnanl(x); } 
# 304
__attribute((always_inline)) inline int isinf(float x) { return __isinff(x); } 
# 308
extern "C" __attribute((always_inline)) inline int isinf(double x) throw() { return __isinf(x); } 
# 310
__attribute((always_inline)) inline int isinf(long double x) { return __isinfl(x); } 
# 503
static inline float logb(float a) 
# 504
{ 
# 505
return logbf(a); 
# 506
} 
# 508
static inline int ilogb(float a) 
# 509
{ 
# 510
return ilogbf(a); 
# 511
} 
# 513
static inline float scalbn(float a, int b) 
# 514
{ 
# 515
return scalbnf(a, b); 
# 516
} 
# 518
static inline float scalbln(float a, long b) 
# 519
{ 
# 520
return scalblnf(a, b); 
# 521
} 
# 523
static inline float exp2(float a) 
# 524
{ 
# 525
return exp2f(a); 
# 526
} 
# 528
static inline float expm1(float a) 
# 529
{ 
# 530
return expm1f(a); 
# 531
} 
# 533
static inline float log2(float a) 
# 534
{ 
# 535
return log2f(a); 
# 536
} 
# 538
static inline float log1p(float a) 
# 539
{ 
# 540
return log1pf(a); 
# 541
} 
# 543
static inline float acosh(float a) 
# 544
{ 
# 545
return acoshf(a); 
# 546
} 
# 548
static inline float asinh(float a) 
# 549
{ 
# 550
return asinhf(a); 
# 551
} 
# 553
static inline float atanh(float a) 
# 554
{ 
# 555
return atanhf(a); 
# 556
} 
# 558
static inline float hypot(float a, float b) 
# 559
{ 
# 560
return hypotf(a, b); 
# 561
} 
# 563
static inline float norm3d(float a, float b, float c) 
# 564
{ 
# 565
return norm3df(a, b, c); 
# 566
} 
# 568
static inline float norm4d(float a, float b, float c, float d) 
# 569
{ 
# 570
return norm4df(a, b, c, d); 
# 571
} 
# 573
static inline float cbrt(float a) 
# 574
{ 
# 575
return cbrtf(a); 
# 576
} 
# 578
static inline float erf(float a) 
# 579
{ 
# 580
return erff(a); 
# 581
} 
# 583
static inline float erfc(float a) 
# 584
{ 
# 585
return erfcf(a); 
# 586
} 
# 588
static inline float lgamma(float a) 
# 589
{ 
# 590
return lgammaf(a); 
# 591
} 
# 593
static inline float tgamma(float a) 
# 594
{ 
# 595
return tgammaf(a); 
# 596
} 
# 598
static inline float copysign(float a, float b) 
# 599
{ 
# 600
return copysignf(a, b); 
# 601
} 
# 603
static inline float nextafter(float a, float b) 
# 604
{ 
# 605
return nextafterf(a, b); 
# 606
} 
# 608
static inline float remainder(float a, float b) 
# 609
{ 
# 610
return remainderf(a, b); 
# 611
} 
# 613
static inline float remquo(float a, float b, int *quo) 
# 614
{ 
# 615
return remquof(a, b, quo); 
# 616
} 
# 618
static inline float round(float a) 
# 619
{ 
# 620
return roundf(a); 
# 621
} 
# 623
static inline long lround(float a) 
# 624
{ 
# 625
return lroundf(a); 
# 626
} 
# 628
static inline long long llround(float a) 
# 629
{ 
# 630
return llroundf(a); 
# 631
} 
# 633
static inline float trunc(float a) 
# 634
{ 
# 635
return truncf(a); 
# 636
} 
# 638
static inline float rint(float a) 
# 639
{ 
# 640
return rintf(a); 
# 641
} 
# 643
static inline long lrint(float a) 
# 644
{ 
# 645
return lrintf(a); 
# 646
} 
# 648
static inline long long llrint(float a) 
# 649
{ 
# 650
return llrintf(a); 
# 651
} 
# 653
static inline float nearbyint(float a) 
# 654
{ 
# 655
return nearbyintf(a); 
# 656
} 
# 658
static inline float fdim(float a, float b) 
# 659
{ 
# 660
return fdimf(a, b); 
# 661
} 
# 663
static inline float fma(float a, float b, float c) 
# 664
{ 
# 665
return fmaf(a, b, c); 
# 666
} 
# 668
static inline float fmax(float a, float b) 
# 669
{ 
# 670
return fmaxf(a, b); 
# 671
} 
# 673
static inline float fmin(float a, float b) 
# 674
{ 
# 675
return fminf(a, b); 
# 676
} 
# 681
static inline float exp10(float a) 
# 682
{ 
# 683
return exp10f(a); 
# 684
} 
# 686
static inline float rsqrt(float a) 
# 687
{ 
# 688
return rsqrtf(a); 
# 689
} 
# 691
static inline float rcbrt(float a) 
# 692
{ 
# 693
return rcbrtf(a); 
# 694
} 
# 696
static inline float sinpi(float a) 
# 697
{ 
# 698
return sinpif(a); 
# 699
} 
# 701
static inline float cospi(float a) 
# 702
{ 
# 703
return cospif(a); 
# 704
} 
# 706
static inline void sincospi(float a, float *sptr, float *cptr) 
# 707
{ 
# 708
sincospif(a, sptr, cptr); 
# 709
} 
# 711
static inline void sincos(float a, float *sptr, float *cptr) 
# 712
{ 
# 713
sincosf(a, sptr, cptr); 
# 714
} 
# 716
static inline float j0(float a) 
# 717
{ 
# 718
return j0f(a); 
# 719
} 
# 721
static inline float j1(float a) 
# 722
{ 
# 723
return j1f(a); 
# 724
} 
# 726
static inline float jn(int n, float a) 
# 727
{ 
# 728
return jnf(n, a); 
# 729
} 
# 731
static inline float y0(float a) 
# 732
{ 
# 733
return y0f(a); 
# 734
} 
# 736
static inline float y1(float a) 
# 737
{ 
# 738
return y1f(a); 
# 739
} 
# 741
static inline float yn(int n, float a) 
# 742
{ 
# 743
return ynf(n, a); 
# 744
} 
# 746
static inline float cyl_bessel_i0(float a) 
# 747
{ 
# 748
return cyl_bessel_i0f(a); 
# 749
} 
# 751
static inline float cyl_bessel_i1(float a) 
# 752
{ 
# 753
return cyl_bessel_i1f(a); 
# 754
} 
# 756
static inline float erfinv(float a) 
# 757
{ 
# 758
return erfinvf(a); 
# 759
} 
# 761
static inline float erfcinv(float a) 
# 762
{ 
# 763
return erfcinvf(a); 
# 764
} 
# 766
static inline float normcdfinv(float a) 
# 767
{ 
# 768
return normcdfinvf(a); 
# 769
} 
# 771
static inline float normcdf(float a) 
# 772
{ 
# 773
return normcdff(a); 
# 774
} 
# 776
static inline float erfcx(float a) 
# 777
{ 
# 778
return erfcxf(a); 
# 779
} 
# 781
static inline double copysign(double a, float b) 
# 782
{ 
# 783
return copysign(a, (double)b); 
# 784
} 
# 786
static inline float copysign(float a, double b) 
# 787
{ 
# 788
return copysignf(a, (float)b); 
# 789
} 
# 791
static inline unsigned min(unsigned a, unsigned b) 
# 792
{ 
# 793
return umin(a, b); 
# 794
} 
# 796
static inline unsigned min(int a, unsigned b) 
# 797
{ 
# 798
return umin((unsigned)a, b); 
# 799
} 
# 801
static inline unsigned min(unsigned a, int b) 
# 802
{ 
# 803
return umin(a, (unsigned)b); 
# 804
} 
# 806
static inline long min(long a, long b) 
# 807
{ 
# 813
if (sizeof(long) == sizeof(int)) { 
# 817
return (long)min((int)a, (int)b); 
# 818
} else { 
# 819
return (long)llmin((long long)a, (long long)b); 
# 820
}  
# 821
} 
# 823
static inline unsigned long min(unsigned long a, unsigned long b) 
# 824
{ 
# 828
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 832
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 833
} else { 
# 834
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 835
}  
# 836
} 
# 838
static inline unsigned long min(long a, unsigned long b) 
# 839
{ 
# 843
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 847
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 848
} else { 
# 849
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 850
}  
# 851
} 
# 853
static inline unsigned long min(unsigned long a, long b) 
# 854
{ 
# 858
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 862
return (unsigned long)umin((unsigned)a, (unsigned)b); 
# 863
} else { 
# 864
return (unsigned long)ullmin((unsigned long long)a, (unsigned long long)b); 
# 865
}  
# 866
} 
# 868
static inline long long min(long long a, long long b) 
# 869
{ 
# 870
return llmin(a, b); 
# 871
} 
# 873
static inline unsigned long long min(unsigned long long a, unsigned long long b) 
# 874
{ 
# 875
return ullmin(a, b); 
# 876
} 
# 878
static inline unsigned long long min(long long a, unsigned long long b) 
# 879
{ 
# 880
return ullmin((unsigned long long)a, b); 
# 881
} 
# 883
static inline unsigned long long min(unsigned long long a, long long b) 
# 884
{ 
# 885
return ullmin(a, (unsigned long long)b); 
# 886
} 
# 888
static inline float min(float a, float b) 
# 889
{ 
# 890
return fminf(a, b); 
# 891
} 
# 893
static inline double min(double a, double b) 
# 894
{ 
# 895
return fmin(a, b); 
# 896
} 
# 898
static inline double min(float a, double b) 
# 899
{ 
# 900
return fmin((double)a, b); 
# 901
} 
# 903
static inline double min(double a, float b) 
# 904
{ 
# 905
return fmin(a, (double)b); 
# 906
} 
# 908
static inline unsigned max(unsigned a, unsigned b) 
# 909
{ 
# 910
return umax(a, b); 
# 911
} 
# 913
static inline unsigned max(int a, unsigned b) 
# 914
{ 
# 915
return umax((unsigned)a, b); 
# 916
} 
# 918
static inline unsigned max(unsigned a, int b) 
# 919
{ 
# 920
return umax(a, (unsigned)b); 
# 921
} 
# 923
static inline long max(long a, long b) 
# 924
{ 
# 929
if (sizeof(long) == sizeof(int)) { 
# 933
return (long)max((int)a, (int)b); 
# 934
} else { 
# 935
return (long)llmax((long long)a, (long long)b); 
# 936
}  
# 937
} 
# 939
static inline unsigned long max(unsigned long a, unsigned long b) 
# 940
{ 
# 944
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 948
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 949
} else { 
# 950
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 951
}  
# 952
} 
# 954
static inline unsigned long max(long a, unsigned long b) 
# 955
{ 
# 959
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 963
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 964
} else { 
# 965
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 966
}  
# 967
} 
# 969
static inline unsigned long max(unsigned long a, long b) 
# 970
{ 
# 974
if (sizeof(unsigned long) == sizeof(unsigned)) { 
# 978
return (unsigned long)umax((unsigned)a, (unsigned)b); 
# 979
} else { 
# 980
return (unsigned long)ullmax((unsigned long long)a, (unsigned long long)b); 
# 981
}  
# 982
} 
# 984
static inline long long max(long long a, long long b) 
# 985
{ 
# 986
return llmax(a, b); 
# 987
} 
# 989
static inline unsigned long long max(unsigned long long a, unsigned long long b) 
# 990
{ 
# 991
return ullmax(a, b); 
# 992
} 
# 994
static inline unsigned long long max(long long a, unsigned long long b) 
# 995
{ 
# 996
return ullmax((unsigned long long)a, b); 
# 997
} 
# 999
static inline unsigned long long max(unsigned long long a, long long b) 
# 1000
{ 
# 1001
return ullmax(a, (unsigned long long)b); 
# 1002
} 
# 1004
static inline float max(float a, float b) 
# 1005
{ 
# 1006
return fmaxf(a, b); 
# 1007
} 
# 1009
static inline double max(double a, double b) 
# 1010
{ 
# 1011
return fmax(a, b); 
# 1012
} 
# 1014
static inline double max(float a, double b) 
# 1015
{ 
# 1016
return fmax((double)a, b); 
# 1017
} 
# 1019
static inline double max(double a, float b) 
# 1020
{ 
# 1021
return fmax(a, (double)b); 
# 1022
} 
# 1033
extern "C" inline int min(int a, int b) 
# 1034
{ 
# 1035
return (a < b) ? a : b; 
# 1036
} 
# 1038
extern "C" inline unsigned umin(unsigned a, unsigned b) 
# 1039
{ 
# 1040
return (a < b) ? a : b; 
# 1041
} 
# 1043
extern "C" inline long long llmin(long long a, long long b) 
# 1044
{ 
# 1045
return (a < b) ? a : b; 
# 1046
} 
# 1048
extern "C" inline unsigned long long ullmin(unsigned long long a, unsigned long long 
# 1049
b) 
# 1050
{ 
# 1051
return (a < b) ? a : b; 
# 1052
} 
# 1054
extern "C" inline int max(int a, int b) 
# 1055
{ 
# 1056
return (a > b) ? a : b; 
# 1057
} 
# 1059
extern "C" inline unsigned umax(unsigned a, unsigned b) 
# 1060
{ 
# 1061
return (a > b) ? a : b; 
# 1062
} 
# 1064
extern "C" inline long long llmax(long long a, long long b) 
# 1065
{ 
# 1066
return (a > b) ? a : b; 
# 1067
} 
# 1069
extern "C" inline unsigned long long ullmax(unsigned long long a, unsigned long long 
# 1070
b) 
# 1071
{ 
# 1072
return (a > b) ? a : b; 
# 1073
} 
# 77 "/usr/local/cuda/include/cuda_surface_types.h"
template< class T, int dim = 1> 
# 78
struct surface : public surfaceReference { 
# 81
surface() 
# 82
{ 
# 83
(surfaceReference::channelDesc) = cudaCreateChannelDesc< T> (); 
# 84
} 
# 86
surface(cudaChannelFormatDesc desc) 
# 87
{ 
# 88
(surfaceReference::channelDesc) = desc; 
# 89
} 
# 91
}; 
# 93
template< int dim> 
# 94
struct surface< void, dim>  : public surfaceReference { 
# 97
surface() 
# 98
{ 
# 99
(surfaceReference::channelDesc) = cudaCreateChannelDesc< void> (); 
# 100
} 
# 102
}; 
# 77 "/usr/local/cuda/include/cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
# 78
struct texture : public textureReference { 
# 81
texture(int norm = 0, cudaTextureFilterMode 
# 82
fMode = cudaFilterModePoint, cudaTextureAddressMode 
# 83
aMode = cudaAddressModeClamp) 
# 84
{ 
# 85
(textureReference::normalized) = norm; 
# 86
(textureReference::filterMode) = fMode; 
# 87
((textureReference::addressMode)[0]) = aMode; 
# 88
((textureReference::addressMode)[1]) = aMode; 
# 89
((textureReference::addressMode)[2]) = aMode; 
# 90
(textureReference::channelDesc) = cudaCreateChannelDesc< T> (); 
# 91
(textureReference::sRGB) = 0; 
# 92
} 
# 94
texture(int norm, cudaTextureFilterMode 
# 95
fMode, cudaTextureAddressMode 
# 96
aMode, cudaChannelFormatDesc 
# 97
desc) 
# 98
{ 
# 99
(textureReference::normalized) = norm; 
# 100
(textureReference::filterMode) = fMode; 
# 101
((textureReference::addressMode)[0]) = aMode; 
# 102
((textureReference::addressMode)[1]) = aMode; 
# 103
((textureReference::addressMode)[2]) = aMode; 
# 104
(textureReference::channelDesc) = desc; 
# 105
(textureReference::sRGB) = 0; 
# 106
} 
# 108
}; 
# 90 "/usr/local/cuda/include/device_functions.h"
extern "C" {
# 3230
}
# 3238
__attribute__((unused)) static inline int mulhi(int a, int b); 
# 3240
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b); 
# 3242
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b); 
# 3244
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b); 
# 3246
__attribute__((unused)) static inline long long mul64hi(long long a, long long b); 
# 3248
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b); 
# 3250
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b); 
# 3252
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b); 
# 3254
__attribute__((unused)) static inline int float_as_int(float a); 
# 3256
__attribute__((unused)) static inline float int_as_float(int a); 
# 3258
__attribute__((unused)) static inline unsigned float_as_uint(float a); 
# 3260
__attribute__((unused)) static inline float uint_as_float(unsigned a); 
# 3262
__attribute__((unused)) static inline float saturate(float a); 
# 3264
__attribute__((unused)) static inline int mul24(int a, int b); 
# 3266
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b); 
# 3268
__attribute((deprecated("Please use __trap() instead."))) __attribute__((unused)) static inline void trap(); 
# 3271
__attribute((deprecated("Please use __brkpt() instead."))) __attribute__((unused)) static inline void brkpt(int c = 0); 
# 3273
__attribute((deprecated("Please use __syncthreads() instead."))) __attribute__((unused)) static inline void syncthreads(); 
# 3275
__attribute((deprecated("Please use __prof_trigger() instead."))) __attribute__((unused)) static inline void prof_trigger(int e); 
# 3277
__attribute((deprecated("Please use __threadfence() instead."))) __attribute__((unused)) static inline void threadfence(bool global = true); 
# 3279
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode = cudaRoundZero); 
# 3281
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode = cudaRoundZero); 
# 3283
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode = cudaRoundNearest); 
# 3285
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 83 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline int mulhi(int a, int b) 
# 84
{int volatile ___ = 1;(void)a;(void)b;
# 86
::exit(___);}
#if 0
# 84
{ 
# 85
return __mulhi(a, b); 
# 86
} 
#endif
# 88 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, unsigned b) 
# 89
{int volatile ___ = 1;(void)a;(void)b;
# 91
::exit(___);}
#if 0
# 89
{ 
# 90
return __umulhi(a, b); 
# 91
} 
#endif
# 93 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(int a, unsigned b) 
# 94
{int volatile ___ = 1;(void)a;(void)b;
# 96
::exit(___);}
#if 0
# 94
{ 
# 95
return __umulhi((unsigned)a, b); 
# 96
} 
#endif
# 98 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned mulhi(unsigned a, int b) 
# 99
{int volatile ___ = 1;(void)a;(void)b;
# 101
::exit(___);}
#if 0
# 99
{ 
# 100
return __umulhi(a, (unsigned)b); 
# 101
} 
#endif
# 103 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline long long mul64hi(long long a, long long b) 
# 104
{int volatile ___ = 1;(void)a;(void)b;
# 106
::exit(___);}
#if 0
# 104
{ 
# 105
return __mul64hi(a, b); 
# 106
} 
#endif
# 108 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, unsigned long long b) 
# 109
{int volatile ___ = 1;(void)a;(void)b;
# 111
::exit(___);}
#if 0
# 109
{ 
# 110
return __umul64hi(a, b); 
# 111
} 
#endif
# 113 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(long long a, unsigned long long b) 
# 114
{int volatile ___ = 1;(void)a;(void)b;
# 116
::exit(___);}
#if 0
# 114
{ 
# 115
return __umul64hi((unsigned long long)a, b); 
# 116
} 
#endif
# 118 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned long long mul64hi(unsigned long long a, long long b) 
# 119
{int volatile ___ = 1;(void)a;(void)b;
# 121
::exit(___);}
#if 0
# 119
{ 
# 120
return __umul64hi(a, (unsigned long long)b); 
# 121
} 
#endif
# 123 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline int float_as_int(float a) 
# 124
{int volatile ___ = 1;(void)a;
# 126
::exit(___);}
#if 0
# 124
{ 
# 125
return __float_as_int(a); 
# 126
} 
#endif
# 128 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline float int_as_float(int a) 
# 129
{int volatile ___ = 1;(void)a;
# 131
::exit(___);}
#if 0
# 129
{ 
# 130
return __int_as_float(a); 
# 131
} 
#endif
# 133 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned float_as_uint(float a) 
# 134
{int volatile ___ = 1;(void)a;
# 136
::exit(___);}
#if 0
# 134
{ 
# 135
return __float_as_uint(a); 
# 136
} 
#endif
# 138 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline float uint_as_float(unsigned a) 
# 139
{int volatile ___ = 1;(void)a;
# 141
::exit(___);}
#if 0
# 139
{ 
# 140
return __uint_as_float(a); 
# 141
} 
#endif
# 142 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline float saturate(float a) 
# 143
{int volatile ___ = 1;(void)a;
# 145
::exit(___);}
#if 0
# 143
{ 
# 144
return __saturatef(a); 
# 145
} 
#endif
# 147 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline int mul24(int a, int b) 
# 148
{int volatile ___ = 1;(void)a;(void)b;
# 150
::exit(___);}
#if 0
# 148
{ 
# 149
return __mul24(a, b); 
# 150
} 
#endif
# 152 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned umul24(unsigned a, unsigned b) 
# 153
{int volatile ___ = 1;(void)a;(void)b;
# 155
::exit(___);}
#if 0
# 153
{ 
# 154
return __umul24(a, b); 
# 155
} 
#endif
# 157 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline void trap() 
# 158
{int volatile ___ = 1;
# 160
::exit(___);}
#if 0
# 158
{ 
# 159
__trap(); 
# 160
} 
#endif
# 163 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline void brkpt(int c) 
# 164
{int volatile ___ = 1;(void)c;
# 166
::exit(___);}
#if 0
# 164
{ 
# 165
__brkpt(c); 
# 166
} 
#endif
# 168 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline void syncthreads() 
# 169
{int volatile ___ = 1;
# 171
::exit(___);}
#if 0
# 169
{ 
# 170
__syncthreads(); 
# 171
} 
#endif
# 173 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline void prof_trigger(int e) 
# 174
{int volatile ___ = 1;(void)e;
# 191
::exit(___);}
#if 0
# 174
{ 
# 175
if (e == 0) { __prof_trigger(0); } else { 
# 176
if (e == 1) { __prof_trigger(1); } else { 
# 177
if (e == 2) { __prof_trigger(2); } else { 
# 178
if (e == 3) { __prof_trigger(3); } else { 
# 179
if (e == 4) { __prof_trigger(4); } else { 
# 180
if (e == 5) { __prof_trigger(5); } else { 
# 181
if (e == 6) { __prof_trigger(6); } else { 
# 182
if (e == 7) { __prof_trigger(7); } else { 
# 183
if (e == 8) { __prof_trigger(8); } else { 
# 184
if (e == 9) { __prof_trigger(9); } else { 
# 185
if (e == 10) { __prof_trigger(10); } else { 
# 186
if (e == 11) { __prof_trigger(11); } else { 
# 187
if (e == 12) { __prof_trigger(12); } else { 
# 188
if (e == 13) { __prof_trigger(13); } else { 
# 189
if (e == 14) { __prof_trigger(14); } else { 
# 190
if (e == 15) { __prof_trigger(15); }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  }  
# 191
} 
#endif
# 193 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline void threadfence(bool global) 
# 194
{int volatile ___ = 1;(void)global;
# 196
::exit(___);}
#if 0
# 194
{ 
# 195
global ? __threadfence() : __threadfence_block(); 
# 196
} 
#endif
# 198 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline int float2int(float a, cudaRoundMode mode) 
# 199
{int volatile ___ = 1;(void)a;(void)mode;
# 204
::exit(___);}
#if 0
# 199
{ 
# 200
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
# 204
} 
#endif
# 206 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline unsigned float2uint(float a, cudaRoundMode mode) 
# 207
{int volatile ___ = 1;(void)a;(void)mode;
# 212
::exit(___);}
#if 0
# 207
{ 
# 208
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
# 212
} 
#endif
# 214 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline float int2float(int a, cudaRoundMode mode) 
# 215
{int volatile ___ = 1;(void)a;(void)mode;
# 220
::exit(___);}
#if 0
# 215
{ 
# 216
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
# 220
} 
#endif
# 222 "/usr/local/cuda/include/device_functions.hpp"
__attribute__((unused)) static inline float uint2float(unsigned a, cudaRoundMode mode) 
# 223
{int volatile ___ = 1;(void)a;(void)mode;
# 228
::exit(___);}
#if 0
# 223
{ 
# 224
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
# 228
} 
#endif
# 111 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 119
{ } 
#endif
# 121 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 121
{ } 
#endif
# 123 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 123
{ } 
#endif
# 125 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 125
{ } 
#endif
# 127 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 127
{ } 
#endif
# 129 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 129
{ } 
#endif
# 131 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 131
{ } 
#endif
# 133 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 133
{ } 
#endif
# 135 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 135
{ } 
#endif
# 137 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 137
{ } 
#endif
# 139 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 141
{ } 
#endif
# 143 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 143
{ } 
#endif
# 145 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 145
{ } 
#endif
# 147 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 147
{ } 
#endif
# 149 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 149
{ } 
#endif
# 151 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 151
{ } 
#endif
# 164 "/usr/local/cuda/include/device_atomic_functions.h"
extern "C" {
# 175
}
# 185
__attribute__((unused)) static inline unsigned long long atomicAdd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 185
{ } 
#endif
# 187 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 187
{ } 
#endif
# 189 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS(unsigned long long *address, unsigned long long compare, unsigned long long val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 189
{ } 
#endif
# 191 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 191
{ } 
#endif
# 193 "/usr/local/cuda/include/device_atomic_functions.h"
__attribute__((unused)) static inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
# 193
{ } 
#endif
# 80 "/usr/local/cuda/include/device_double_functions.h"
extern "C" {
# 1134
}
# 1143
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode); 
# 1145
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1147
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1149
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
# 1151
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
# 1153
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
# 1155
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
# 1157
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
# 1159
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1161
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode = cudaRoundNearest); 
# 1163
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
# 1165
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
# 1167
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
# 85 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double fma(double a, double b, double c, cudaRoundMode mode) 
# 86
{int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;
# 91
::exit(___);}
#if 0
# 86
{ 
# 87
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
# 91
} 
#endif
# 93 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double dmul(double a, double b, cudaRoundMode mode) 
# 94
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 99
::exit(___);}
#if 0
# 94
{ 
# 95
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
# 99
} 
#endif
# 101 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double dadd(double a, double b, cudaRoundMode mode) 
# 102
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 107
::exit(___);}
#if 0
# 102
{ 
# 103
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
# 107
} 
#endif
# 109 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double dsub(double a, double b, cudaRoundMode mode) 
# 110
{int volatile ___ = 1;(void)a;(void)b;(void)mode;
# 115
::exit(___);}
#if 0
# 110
{ 
# 111
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
# 115
} 
#endif
# 117 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline int double2int(double a, cudaRoundMode mode) 
# 118
{int volatile ___ = 1;(void)a;(void)mode;
# 123
::exit(___);}
#if 0
# 118
{ 
# 119
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
# 123
} 
#endif
# 125 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned double2uint(double a, cudaRoundMode mode) 
# 126
{int volatile ___ = 1;(void)a;(void)mode;
# 131
::exit(___);}
#if 0
# 126
{ 
# 127
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
# 131
} 
#endif
# 133 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline long long double2ll(double a, cudaRoundMode mode) 
# 134
{int volatile ___ = 1;(void)a;(void)mode;
# 139
::exit(___);}
#if 0
# 134
{ 
# 135
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
# 139
} 
#endif
# 141 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline unsigned long long double2ull(double a, cudaRoundMode mode) 
# 142
{int volatile ___ = 1;(void)a;(void)mode;
# 147
::exit(___);}
#if 0
# 142
{ 
# 143
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
# 147
} 
#endif
# 149 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double ll2double(long long a, cudaRoundMode mode) 
# 150
{int volatile ___ = 1;(void)a;(void)mode;
# 155
::exit(___);}
#if 0
# 150
{ 
# 151
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
# 155
} 
#endif
# 157 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double ull2double(unsigned long long a, cudaRoundMode mode) 
# 158
{int volatile ___ = 1;(void)a;(void)mode;
# 163
::exit(___);}
#if 0
# 158
{ 
# 159
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
# 163
} 
#endif
# 165 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double int2double(int a, cudaRoundMode mode) 
# 166
{int volatile ___ = 1;(void)a;(void)mode;
# 168
::exit(___);}
#if 0
# 166
{ 
# 167
return (double)a; 
# 168
} 
#endif
# 170 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double uint2double(unsigned a, cudaRoundMode mode) 
# 171
{int volatile ___ = 1;(void)a;(void)mode;
# 173
::exit(___);}
#if 0
# 171
{ 
# 172
return (double)a; 
# 173
} 
#endif
# 175 "/usr/local/cuda/include/device_double_functions.hpp"
__attribute__((unused)) static inline double float2double(float a, cudaRoundMode mode) 
# 176
{int volatile ___ = 1;(void)a;(void)mode;
# 178
::exit(___);}
#if 0
# 176
{ 
# 177
return (double)a; 
# 178
} 
#endif
# 94 "/usr/local/cuda/include/sm_20_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 94
{ } 
#endif
# 102 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 102
{ } 
#endif
# 104 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 104
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 106
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 108
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 110
{ } 
#endif
# 112 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 112
{ } 
#endif
# 114 "/usr/local/cuda/include/sm_32_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 114
{ } 
#endif
# 308 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 308
{ } 
#endif
# 311 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 311
{ } 
#endif
# 314 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 314
{ } 
#endif
# 317 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 317
{ } 
#endif
# 320 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 320
{ } 
#endif
# 323 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 323
{ } 
#endif
# 326 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAdd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 326
{ } 
#endif
# 329 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 329
{ } 
#endif
# 332 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 332
{ } 
#endif
# 335 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 335
{ } 
#endif
# 338 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 338
{ } 
#endif
# 341 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 341
{ } 
#endif
# 344 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 344
{ } 
#endif
# 347 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 347
{ } 
#endif
# 350 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 350
{ } 
#endif
# 353 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 353
{ } 
#endif
# 356 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicExch_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 356
{ } 
#endif
# 359 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 359
{ } 
#endif
# 362 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 362
{ } 
#endif
# 365 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 365
{ } 
#endif
# 368 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 368
{ } 
#endif
# 371 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 371
{ } 
#endif
# 374 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMin_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 374
{ } 
#endif
# 377 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 377
{ } 
#endif
# 380 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 380
{ } 
#endif
# 383 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 383
{ } 
#endif
# 386 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMin_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 386
{ } 
#endif
# 389 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 389
{ } 
#endif
# 392 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 392
{ } 
#endif
# 395 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 395
{ } 
#endif
# 398 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicMax_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 398
{ } 
#endif
# 401 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 401
{ } 
#endif
# 404 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 404
{ } 
#endif
# 407 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 407
{ } 
#endif
# 410 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicMax_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 410
{ } 
#endif
# 413 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 413
{ } 
#endif
# 416 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 416
{ } 
#endif
# 419 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 419
{ } 
#endif
# 422 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 422
{ } 
#endif
# 425 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 425
{ } 
#endif
# 428 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 428
{ } 
#endif
# 431 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
# 432
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 432
{ } 
#endif
# 435 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
# 436
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 436
{ } 
#endif
# 439 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_block(unsigned long long *address, unsigned long long 
# 440
compare, unsigned long long 
# 441
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 441
{ } 
#endif
# 444 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicCAS_system(unsigned long long *address, unsigned long long 
# 445
compare, unsigned long long 
# 446
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
# 446
{ } 
#endif
# 449 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 449
{ } 
#endif
# 452 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 452
{ } 
#endif
# 455 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 455
{ } 
#endif
# 458 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicAnd_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 458
{ } 
#endif
# 461 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 461
{ } 
#endif
# 464 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 464
{ } 
#endif
# 467 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 467
{ } 
#endif
# 470 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicAnd_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 470
{ } 
#endif
# 473 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 473
{ } 
#endif
# 476 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 476
{ } 
#endif
# 479 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 479
{ } 
#endif
# 482 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicOr_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 482
{ } 
#endif
# 485 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 485
{ } 
#endif
# 488 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 488
{ } 
#endif
# 491 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 491
{ } 
#endif
# 494 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicOr_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 494
{ } 
#endif
# 497 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 497
{ } 
#endif
# 500 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 500
{ } 
#endif
# 503 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_block(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 503
{ } 
#endif
# 506 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline long long atomicXor_system(long long *address, long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 506
{ } 
#endif
# 509 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 509
{ } 
#endif
# 512 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 512
{ } 
#endif
# 515 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_block(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 515
{ } 
#endif
# 518 "/usr/local/cuda/include/sm_60_atomic_functions.h"
__attribute__((unused)) static inline unsigned long long atomicXor_system(unsigned long long *address, unsigned long long val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
# 518
{ } 
#endif
# 79 "/usr/local/cuda/include/sm_20_intrinsics.h"
extern "C" {
# 1466
}
# 1475
__attribute__((unused)) static inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1475
{ } 
#endif
# 1477 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1477
{ } 
#endif
# 1479 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1479
{ } 
#endif
# 1481 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
# 1481
{ } 
#endif
# 1486 "/usr/local/cuda/include/sm_20_intrinsics.h"
__attribute__((unused)) static inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 1486
{ } 
#endif
# 98 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 98
{ } 
#endif
# 100 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 100
{ } 
#endif
# 102 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 105
{ } 
#endif
# 107 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 107
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 111
{ } 
#endif
# 113 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 113
{ } 
#endif
# 115 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 117
{ } 
#endif
# 119 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 119
{ } 
#endif
# 122 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl(long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 122
{ } 
#endif
# 124 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl(unsigned long long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 124
{ } 
#endif
# 126 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_up(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_up(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 128
{ } 
#endif
# 130 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_down(long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 130
{ } 
#endif
# 132 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_down(unsigned long long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 132
{ } 
#endif
# 134 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long long __shfl_xor(long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 134
{ } 
#endif
# 136 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __shfl_xor(unsigned long long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 136
{ } 
#endif
# 138 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 138
{ } 
#endif
# 140 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 140
{ } 
#endif
# 142 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 142
{ } 
#endif
# 144 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 144
{ } 
#endif
# 148 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 148
{ } 
#endif
# 150 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
# 150
{ } 
#endif
# 152 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 152
{ } 
#endif
# 154 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 154
{ } 
#endif
# 156 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 156
{ } 
#endif
# 158 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
# 158
{ } 
#endif
# 160 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 160
{ } 
#endif
# 162 "/usr/local/cuda/include/sm_30_intrinsics.h"
__attribute__((unused)) static inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
# 162
{ } 
#endif
# 89 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 89
{ } 
#endif
# 90 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 90
{ } 
#endif
# 92 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 92
{ } 
#endif
# 93 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 93
{ } 
#endif
# 94 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 95
{ } 
#endif
# 96 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 96
{ } 
#endif
# 97 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 98
{ } 
#endif
# 99 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 99
{ } 
#endif
# 100 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 101
{ } 
#endif
# 102 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 102
{ } 
#endif
# 103 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 103
{ } 
#endif
# 105 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 105
{ } 
#endif
# 106 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 106
{ } 
#endif
# 107 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 107
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 109
{ } 
#endif
# 110 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 110
{ } 
#endif
# 111 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 112
{ } 
#endif
# 113 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 113
{ } 
#endif
# 114 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 114
{ } 
#endif
# 115 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 115
{ } 
#endif
# 117 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 117
{ } 
#endif
# 118 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 118
{ } 
#endif
# 119 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 119
{ } 
#endif
# 120 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 120
{ } 
#endif
# 121 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 121
{ } 
#endif
# 125 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 125
{ } 
#endif
# 126 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 126
{ } 
#endif
# 128 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 128
{ } 
#endif
# 129 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 129
{ } 
#endif
# 130 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 130
{ } 
#endif
# 131 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 131
{ } 
#endif
# 132 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcg(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 132
{ } 
#endif
# 133 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 133
{ } 
#endif
# 134 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 134
{ } 
#endif
# 135 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 135
{ } 
#endif
# 136 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 136
{ } 
#endif
# 137 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 137
{ } 
#endif
# 138 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 138
{ } 
#endif
# 139 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 139
{ } 
#endif
# 141 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 141
{ } 
#endif
# 142 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 142
{ } 
#endif
# 143 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 143
{ } 
#endif
# 144 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcg(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 144
{ } 
#endif
# 145 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 145
{ } 
#endif
# 146 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 146
{ } 
#endif
# 147 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 147
{ } 
#endif
# 148 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 148
{ } 
#endif
# 149 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 149
{ } 
#endif
# 150 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 150
{ } 
#endif
# 151 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 151
{ } 
#endif
# 153 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 153
{ } 
#endif
# 154 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 154
{ } 
#endif
# 155 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 155
{ } 
#endif
# 156 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 156
{ } 
#endif
# 157 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 157
{ } 
#endif
# 161 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 161
{ } 
#endif
# 162 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 162
{ } 
#endif
# 164 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 164
{ } 
#endif
# 165 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 165
{ } 
#endif
# 166 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 166
{ } 
#endif
# 167 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 167
{ } 
#endif
# 168 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldca(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 168
{ } 
#endif
# 169 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 169
{ } 
#endif
# 170 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 170
{ } 
#endif
# 171 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 171
{ } 
#endif
# 172 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 172
{ } 
#endif
# 173 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 173
{ } 
#endif
# 174 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 174
{ } 
#endif
# 175 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 175
{ } 
#endif
# 177 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 177
{ } 
#endif
# 178 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 178
{ } 
#endif
# 179 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 179
{ } 
#endif
# 180 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldca(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 180
{ } 
#endif
# 181 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 181
{ } 
#endif
# 182 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 182
{ } 
#endif
# 183 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 183
{ } 
#endif
# 184 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 184
{ } 
#endif
# 185 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 185
{ } 
#endif
# 186 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 186
{ } 
#endif
# 187 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 187
{ } 
#endif
# 189 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 189
{ } 
#endif
# 190 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 190
{ } 
#endif
# 191 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 191
{ } 
#endif
# 192 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 192
{ } 
#endif
# 193 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 193
{ } 
#endif
# 197 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 197
{ } 
#endif
# 198 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 198
{ } 
#endif
# 200 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 200
{ } 
#endif
# 201 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 201
{ } 
#endif
# 202 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 202
{ } 
#endif
# 203 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 203
{ } 
#endif
# 204 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline long long __ldcs(const long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 204
{ } 
#endif
# 205 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 205
{ } 
#endif
# 206 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 206
{ } 
#endif
# 207 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 207
{ } 
#endif
# 208 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 208
{ } 
#endif
# 209 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 209
{ } 
#endif
# 210 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 210
{ } 
#endif
# 211 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 211
{ } 
#endif
# 213 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 213
{ } 
#endif
# 214 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 214
{ } 
#endif
# 215 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 215
{ } 
#endif
# 216 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned long long __ldcs(const unsigned long long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 216
{ } 
#endif
# 217 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 217
{ } 
#endif
# 218 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 218
{ } 
#endif
# 219 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 219
{ } 
#endif
# 220 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 220
{ } 
#endif
# 221 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 221
{ } 
#endif
# 222 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 222
{ } 
#endif
# 223 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 223
{ } 
#endif
# 225 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 225
{ } 
#endif
# 226 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 226
{ } 
#endif
# 227 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 227
{ } 
#endif
# 228 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 228
{ } 
#endif
# 229 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
# 229
{ } 
#endif
# 236 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 236
{ } 
#endif
# 237 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 237
{ } 
#endif
# 240 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 240
{ } 
#endif
# 241 "/usr/local/cuda/include/sm_32_intrinsics.h"
__attribute__((unused)) static inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
# 241
{ } 
#endif
# 91 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 91
{ } 
#endif
# 92 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 92
{ } 
#endif
# 94 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 94
{ } 
#endif
# 95 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 95
{ } 
#endif
# 97 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 97
{ } 
#endif
# 98 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 98
{ } 
#endif
# 100 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 100
{ } 
#endif
# 101 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 101
{ } 
#endif
# 108 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 108
{ } 
#endif
# 109 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 109
{ } 
#endif
# 111 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 111
{ } 
#endif
# 112 "/usr/local/cuda/include/sm_61_intrinsics.h"
__attribute__((unused)) static inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
# 112
{ } 
#endif
# 100 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 101
__attribute((always_inline)) __attribute__((unused)) inline void surf1Dread(T *res, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 102
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;
# 111
::exit(___);}
#if 0
# 102
{ 
# 111
} 
#endif
# 113 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 114
__attribute((always_inline)) __attribute__((unused)) inline T surf1Dread(surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 115
{int volatile ___ = 1;(void)surf;(void)x;(void)mode;
# 123
::exit(___);}
#if 0
# 115
{ 
# 123
} 
#endif
# 125 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 126
__attribute((always_inline)) __attribute__((unused)) inline void surf1Dread(T *res, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 127
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;
# 131
::exit(___);}
#if 0
# 127
{ 
# 131
} 
#endif
# 260 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 261
__attribute((always_inline)) __attribute__((unused)) inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 262
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 271
::exit(___);}
#if 0
# 262
{ 
# 271
} 
#endif
# 273 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 274
__attribute((always_inline)) __attribute__((unused)) inline T surf2Dread(surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 275
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;
# 283
::exit(___);}
#if 0
# 275
{ 
# 283
} 
#endif
# 285 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 286
__attribute((always_inline)) __attribute__((unused)) inline void surf2Dread(T *res, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 287
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;
# 291
::exit(___);}
#if 0
# 287
{ 
# 291
} 
#endif
# 422 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 423
__attribute((always_inline)) __attribute__((unused)) inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 424
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 433
::exit(___);}
#if 0
# 424
{ 
# 433
} 
#endif
# 435 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 436
__attribute((always_inline)) __attribute__((unused)) inline T surf3Dread(surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 437
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 445
::exit(___);}
#if 0
# 437
{ 
# 445
} 
#endif
# 447 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 448
__attribute((always_inline)) __attribute__((unused)) inline void surf3Dread(T *res, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 449
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 453
::exit(___);}
#if 0
# 449
{ 
# 453
} 
#endif
# 582 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 583
__attribute((always_inline)) __attribute__((unused)) inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 584
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 593
::exit(___);}
#if 0
# 584
{ 
# 593
} 
#endif
# 595 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 596
__attribute((always_inline)) __attribute__((unused)) inline T surf1DLayeredread(surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 597
{int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;
# 605
::exit(___);}
#if 0
# 597
{ 
# 605
} 
#endif
# 607 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 608
__attribute((always_inline)) __attribute__((unused)) inline void surf1DLayeredread(T *res, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 609
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;
# 613
::exit(___);}
#if 0
# 609
{ 
# 613
} 
#endif
# 768 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 769
__attribute((always_inline)) __attribute__((unused)) inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 770
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 779
::exit(___);}
#if 0
# 770
{ 
# 779
} 
#endif
# 781 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 782
__attribute((always_inline)) __attribute__((unused)) inline T surf2DLayeredread(surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 783
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 791
::exit(___);}
#if 0
# 783
{ 
# 791
} 
#endif
# 793 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 794
__attribute((always_inline)) __attribute__((unused)) inline void surf2DLayeredread(T *res, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 795
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 799
::exit(___);}
#if 0
# 795
{ 
# 799
} 
#endif
# 919 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 920
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 921
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 930
::exit(___);}
#if 0
# 921
{ 
# 930
} 
#endif
# 932 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 933
__attribute((always_inline)) __attribute__((unused)) inline T surfCubemapread(surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 934
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 942
::exit(___);}
#if 0
# 934
{ 
# 942
} 
#endif
# 944 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 945
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapread(T *res, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 946
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 950
::exit(___);}
#if 0
# 946
{ 
# 950
} 
#endif
# 1070 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1071
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1072
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 1081
::exit(___);}
#if 0
# 1072
{ 
# 1081
} 
#endif
# 1083 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1084
__attribute((always_inline)) __attribute__((unused)) inline T surfCubemapLayeredread(surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1085
{int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 1093
::exit(___);}
#if 0
# 1085
{ 
# 1093
} 
#endif
# 1095 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1096
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapLayeredread(T *res, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1097
{int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 1101
::exit(___);}
#if 0
# 1097
{ 
# 1101
} 
#endif
# 1232 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1233
__attribute((always_inline)) __attribute__((unused)) inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1234
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;
# 1254
::exit(___);}
#if 0
# 1234
{ 
# 1254
} 
#endif
# 1256 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1257
__attribute((always_inline)) __attribute__((unused)) inline void surf1Dwrite(T val, surface< void, 1>  surf, int x, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1258
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;
# 1262
::exit(___);}
#if 0
# 1258
{ 
# 1262
} 
#endif
# 1377 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1378
__attribute((always_inline)) __attribute__((unused)) inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1379
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;
# 1399
::exit(___);}
#if 0
# 1379
{ 
# 1399
} 
#endif
# 1401 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1402
__attribute((always_inline)) __attribute__((unused)) inline void surf2Dwrite(T val, surface< void, 2>  surf, int x, int y, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1403
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;
# 1407
::exit(___);}
#if 0
# 1403
{ 
# 1407
} 
#endif
# 1520 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1521
__attribute((always_inline)) __attribute__((unused)) inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1522
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;
# 1542
::exit(___);}
#if 0
# 1522
{ 
# 1542
} 
#endif
# 1544 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1545
__attribute((always_inline)) __attribute__((unused)) inline void surf3Dwrite(T val, surface< void, 3>  surf, int x, int y, int z, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1546
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;
# 1550
::exit(___);}
#if 0
# 1546
{ 
# 1550
} 
#endif
# 1666 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1667
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1668
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;
# 1688
::exit(___);}
#if 0
# 1668
{ 
# 1688
} 
#endif
# 1690 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1691
__attribute((always_inline)) __attribute__((unused)) static inline void surf1DLayeredwrite(T val, surface< void, 241>  surf, int x, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1692
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;
# 1696
::exit(___);}
#if 0
# 1692
{ 
# 1696
} 
#endif
# 1822 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1823
__attribute((always_inline)) __attribute__((unused)) inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1824
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;
# 1844
::exit(___);}
#if 0
# 1824
{ 
# 1844
} 
#endif
# 1846 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1847
__attribute((always_inline)) __attribute__((unused)) inline void surf2DLayeredwrite(T val, surface< void, 242>  surf, int x, int y, int layer, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1848
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;
# 1852
::exit(___);}
#if 0
# 1848
{ 
# 1852
} 
#endif
# 1958 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1959
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1960
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;
# 1980
::exit(___);}
#if 0
# 1960
{ 
# 1980
} 
#endif
# 1982 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 1983
__attribute((always_inline)) __attribute__((unused)) inline void surfCubemapwrite(T val, surface< void, 12>  surf, int x, int y, int face, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 1984
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;
# 1988
::exit(___);}
#if 0
# 1984
{ 
# 1988
} 
#endif
# 2093 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 2094
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, int s, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2095
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;
# 2115
::exit(___);}
#if 0
# 2095
{ 
# 2115
} 
#endif
# 2117 "/usr/local/cuda/include/surface_functions.h"
template< class T> 
# 2118
__attribute((always_inline)) __attribute__((unused)) static inline void surfCubemapLayeredwrite(T val, surface< void, 252>  surf, int x, int y, int layerFace, cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) 
# 2119
{int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;
# 2123
::exit(___);}
#if 0
# 2119
{ 
# 2123
} 
#endif
# 70 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 71
tex1Dfetch(texture< T, 1, cudaReadModeElementType> , int) {int volatile ___ = 1;::exit(___);}
#if 0
# 71
{ } 
#endif
# 73 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> 
# 74
struct __nv_tex_rmnf_ret { }; 
# 76
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
# 77
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
# 78
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
# 79
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
# 80
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
# 81
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
# 82
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
# 83
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
# 84
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
# 85
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
# 86
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
# 87
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
# 88
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
# 89
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
# 90
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
# 91
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
# 92
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
# 94
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 95
tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat> , int) {int volatile ___ = 1;::exit(___);}
#if 0
# 95
{ } 
#endif
# 215 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 216
tex1D(texture< T, 1, cudaReadModeElementType> , float) {int volatile ___ = 1;::exit(___);}
#if 0
# 216
{ } 
#endif
# 218 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 219
tex1D(texture< T, 1, cudaReadModeNormalizedFloat> , float) {int volatile ___ = 1;::exit(___);}
#if 0
# 219
{ } 
#endif
# 345 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 346
tex2D(texture< T, 2, cudaReadModeElementType> , float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 346
{ } 
#endif
# 348 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 349
tex2D(texture< T, 2, cudaReadModeNormalizedFloat> , float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 349
{ } 
#endif
# 475 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 476
tex1DLayered(texture< T, 241, cudaReadModeElementType> , float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 476
{ } 
#endif
# 478 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 479
tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat> , float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 479
{ } 
#endif
# 603 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 604
tex2DLayered(texture< T, 242, cudaReadModeElementType> , float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 604
{ } 
#endif
# 606 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 607
tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat> , float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 607
{ } 
#endif
# 735 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 736
tex3D(texture< T, 3, cudaReadModeElementType> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 736
{ } 
#endif
# 738 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 739
tex3D(texture< T, 3, cudaReadModeNormalizedFloat> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 739
{ } 
#endif
# 864 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 865
texCubemap(texture< T, 12, cudaReadModeElementType> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 865
{ } 
#endif
# 867 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 868
texCubemap(texture< T, 12, cudaReadModeNormalizedFloat> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 868
{ } 
#endif
# 992 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 993
texCubemapLayered(texture< T, 252, cudaReadModeElementType> , float, float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 993
{ } 
#endif
# 995 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 996
texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat> , float, float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 996
{ } 
#endif
# 1121 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> 
# 1122
struct __nv_tex2dgather_ret { }; 
# 1123
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
# 1124
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
# 1125
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
# 1126
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
# 1127
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
# 1128
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
# 1129
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
# 1130
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
# 1131
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
# 1132
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
# 1133
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
# 1135
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
# 1136
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
# 1137
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
# 1138
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
# 1139
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
# 1140
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
# 1141
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
# 1142
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
# 1143
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
# 1144
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
# 1146
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
# 1147
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
# 1148
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
# 1149
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
# 1150
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
# 1151
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
# 1152
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
# 1153
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
# 1154
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
# 1155
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
# 1157
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
# 1158
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
# 1159
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
# 1160
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
# 1161
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
# 1163
template< class T> __attribute__((unused)) static typename __nv_tex2dgather_ret< T> ::type 
# 1164
tex2Dgather(texture< T, 2, cudaReadModeElementType> , float, float, int = 0) {int volatile ___ = 1;::exit(___);}
#if 0
# 1164
{ } 
#endif
# 1166 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static float4 
# 1167
tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat> , float, float, int = 0) {int volatile ___ = 1;::exit(___);}
#if 0
# 1167
{ } 
#endif
# 1232 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1233
tex1DLod(texture< T, 1, cudaReadModeElementType> , float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1233
{ } 
#endif
# 1235 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1236
tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat> , float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1236
{ } 
#endif
# 1360 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1361
tex2DLod(texture< T, 2, cudaReadModeElementType> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1361
{ } 
#endif
# 1363 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1364
tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1364
{ } 
#endif
# 1484 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1485
tex1DLayeredLod(texture< T, 241, cudaReadModeElementType> , float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1485
{ } 
#endif
# 1487 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1488
tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat> , float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1488
{ } 
#endif
# 1612 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1613
tex2DLayeredLod(texture< T, 242, cudaReadModeElementType> , float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1613
{ } 
#endif
# 1615 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1616
tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat> , float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1616
{ } 
#endif
# 1740 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1741
tex3DLod(texture< T, 3, cudaReadModeElementType> , float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1741
{ } 
#endif
# 1743 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1744
tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat> , float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1744
{ } 
#endif
# 1868 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1869
texCubemapLod(texture< T, 12, cudaReadModeElementType> , float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1869
{ } 
#endif
# 1871 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 1872
texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat> , float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1872
{ } 
#endif
# 1996 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 1997
texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType> , float, float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1997
{ } 
#endif
# 1999 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2000
texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat> , float, float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 2000
{ } 
#endif
# 2124 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 2125
tex1DGrad(texture< T, 1, cudaReadModeElementType> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 2125
{ } 
#endif
# 2127 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2128
tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat> , float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 2128
{ } 
#endif
# 2252 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 2253
tex2DGrad(texture< T, 2, cudaReadModeElementType> , float, float, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 2253
{ } 
#endif
# 2255 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2256
tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat> , float, float, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 2256
{ } 
#endif
# 2380 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 2381
tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType> , float, int, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 2381
{ } 
#endif
# 2383 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2384
tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat> , float, int, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 2384
{ } 
#endif
# 2509 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 2510
tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType> , float, float, int, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 2510
{ } 
#endif
# 2512 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2513
tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat> , float, float, int, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 2513
{ } 
#endif
# 2637 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static T 
# 2638
tex3DGrad(texture< T, 3, cudaReadModeElementType> , float, float, float, float4, float4) {int volatile ___ = 1;::exit(___);}
#if 0
# 2638
{ } 
#endif
# 2640 "/usr/local/cuda/include/texture_fetch_functions.h"
template< class T> __attribute__((unused)) static typename __nv_tex_rmnf_ret< T> ::type 
# 2641
tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat> , float, float, float, float4, float4) {int volatile ___ = 1;::exit(___);}
#if 0
# 2641
{ } 
#endif
# 67 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 68
tex1Dfetch(T *, cudaTextureObject_t, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 68
{ } 
#endif
# 121 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 122
tex1Dfetch(cudaTextureObject_t texObject, int x) 
# 123
{int volatile ___ = 1;(void)texObject;(void)x;
# 127
::exit(___);}
#if 0
# 123
{ 
# 124
T ret; 
# 125
tex1Dfetch(&ret, texObject, x); 
# 126
return ret; 
# 127
} 
#endif
# 135 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 136
tex1D(T *, cudaTextureObject_t, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 136
{ } 
#endif
# 190 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 191
tex1D(cudaTextureObject_t texObject, float x) 
# 192
{int volatile ___ = 1;(void)texObject;(void)x;
# 196
::exit(___);}
#if 0
# 192
{ 
# 193
T ret; 
# 194
tex1D(&ret, texObject, x); 
# 195
return ret; 
# 196
} 
#endif
# 205 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 206
tex2D(T *, cudaTextureObject_t, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 206
{ } 
#endif
# 258 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 259
tex2D(cudaTextureObject_t texObject, float x, float y) 
# 260
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;
# 264
::exit(___);}
#if 0
# 260
{ 
# 261
T ret; 
# 262
tex2D(&ret, texObject, x, y); 
# 263
return ret; 
# 264
} 
#endif
# 272 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 273
tex3D(T *, cudaTextureObject_t, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 273
{ } 
#endif
# 325 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 326
tex3D(cudaTextureObject_t texObject, float x, float y, float z) 
# 327
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 331
::exit(___);}
#if 0
# 327
{ 
# 328
T ret; 
# 329
tex3D(&ret, texObject, x, y, z); 
# 330
return ret; 
# 331
} 
#endif
# 340 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 341
tex1DLayered(T *, cudaTextureObject_t, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 341
{ } 
#endif
# 393 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 394
tex1DLayered(cudaTextureObject_t texObject, float x, int layer) 
# 395
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;
# 399
::exit(___);}
#if 0
# 395
{ 
# 396
T ret; 
# 397
tex1DLayered(&ret, texObject, x, layer); 
# 398
return ret; 
# 399
} 
#endif
# 408 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 409
tex2DLayered(T *, cudaTextureObject_t, float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 409
{ } 
#endif
# 461 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 462
tex2DLayered(cudaTextureObject_t texObject, float x, float y, int layer) 
# 463
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;
# 467
::exit(___);}
#if 0
# 463
{ 
# 464
T ret; 
# 465
tex2DLayered(&ret, texObject, x, y, layer); 
# 466
return ret; 
# 467
} 
#endif
# 476 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 477
texCubemap(T *, cudaTextureObject_t, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 477
{ } 
#endif
# 529 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 530
texCubemap(cudaTextureObject_t texObject, float x, float y, float z) 
# 531
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;
# 535
::exit(___);}
#if 0
# 531
{ 
# 532
T ret; 
# 533
texCubemap(&ret, texObject, x, y, z); 
# 534
return ret; 
# 535
} 
#endif
# 544 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 545
texCubemapLayered(T *, cudaTextureObject_t, float, float, float, int) {int volatile ___ = 1;::exit(___);}
#if 0
# 545
{ } 
#endif
# 598 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 599
texCubemapLayered(cudaTextureObject_t texObject, float x, float y, float z, int layer) 
# 600
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;
# 604
::exit(___);}
#if 0
# 600
{ 
# 601
T ret; 
# 602
texCubemapLayered(&ret, texObject, x, y, z, layer); 
# 603
return ret; 
# 604
} 
#endif
# 613 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 614
tex2Dgather(T *, cudaTextureObject_t, float, float, int = 0) {int volatile ___ = 1;::exit(___);}
#if 0
# 614
{ } 
#endif
# 660 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 661
tex2Dgather(cudaTextureObject_t to, float x, float y, int comp = 0) 
# 662
{int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;
# 666
::exit(___);}
#if 0
# 662
{ 
# 663
T ret; 
# 664
tex2Dgather(&ret, to, x, y, comp); 
# 665
return ret; 
# 666
} 
#endif
# 675 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 676
tex1DLod(T *, cudaTextureObject_t, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 676
{ } 
#endif
# 728 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 729
tex1DLod(cudaTextureObject_t texObject, float x, float level) 
# 730
{int volatile ___ = 1;(void)texObject;(void)x;(void)level;
# 734
::exit(___);}
#if 0
# 730
{ 
# 731
T ret; 
# 732
tex1DLod(&ret, texObject, x, level); 
# 733
return ret; 
# 734
} 
#endif
# 743 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 744
tex2DLod(T *, cudaTextureObject_t, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 744
{ } 
#endif
# 797 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 798
tex2DLod(cudaTextureObject_t texObject, float x, float y, float level) 
# 799
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;
# 803
::exit(___);}
#if 0
# 799
{ 
# 800
T ret; 
# 801
tex2DLod(&ret, texObject, x, y, level); 
# 802
return ret; 
# 803
} 
#endif
# 812 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 813
tex3DLod(T *, cudaTextureObject_t, float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 813
{ } 
#endif
# 865 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 866
tex3DLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 867
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 871
::exit(___);}
#if 0
# 867
{ 
# 868
T ret; 
# 869
tex3DLod(&ret, texObject, x, y, z, level); 
# 870
return ret; 
# 871
} 
#endif
# 879 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 880
tex1DLayeredLod(T *, cudaTextureObject_t, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 880
{ } 
#endif
# 932 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 933
tex1DLayeredLod(cudaTextureObject_t texObject, float x, int layer, float level) 
# 934
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;
# 938
::exit(___);}
#if 0
# 934
{ 
# 935
T ret; 
# 936
tex1DLayeredLod(&ret, texObject, x, layer, level); 
# 937
return ret; 
# 938
} 
#endif
# 947 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 948
tex2DLayeredLod(T *, cudaTextureObject_t, float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 948
{ } 
#endif
# 1000 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1001
tex2DLayeredLod(cudaTextureObject_t texObject, float x, float y, int layer, float level) 
# 1002
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;
# 1006
::exit(___);}
#if 0
# 1002
{ 
# 1003
T ret; 
# 1004
tex2DLayeredLod(&ret, texObject, x, y, layer, level); 
# 1005
return ret; 
# 1006
} 
#endif
# 1014 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1015
texCubemapLod(T *, cudaTextureObject_t, float, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1015
{ } 
#endif
# 1067 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1068
texCubemapLod(cudaTextureObject_t texObject, float x, float y, float z, float level) 
# 1069
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;
# 1073
::exit(___);}
#if 0
# 1069
{ 
# 1070
T ret; 
# 1071
texCubemapLod(&ret, texObject, x, y, z, level); 
# 1072
return ret; 
# 1073
} 
#endif
# 1081 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1082
texCubemapLayeredLod(T *, cudaTextureObject_t, float, float, float, int, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1082
{ } 
#endif
# 1134 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1135
texCubemapLayeredLod(cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) 
# 1136
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;
# 1140
::exit(___);}
#if 0
# 1136
{ 
# 1137
T ret; 
# 1138
texCubemapLayeredLod(&ret, texObject, x, y, z, layer, level); 
# 1139
return ret; 
# 1140
} 
#endif
# 1148 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1149
tex1DGrad(T *, cudaTextureObject_t, float, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1149
{ } 
#endif
# 1202 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1203
tex1DGrad(cudaTextureObject_t texObject, float x, float dPdx, float dPdy) 
# 1204
{int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;
# 1208
::exit(___);}
#if 0
# 1204
{ 
# 1205
T ret; 
# 1206
tex1DGrad(&ret, texObject, x, dPdx, dPdy); 
# 1207
return ret; 
# 1208
} 
#endif
# 1216 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1217
tex2DGrad(T *, cudaTextureObject_t, float, float, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 1217
{ } 
#endif
# 1269 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1270
tex2DGrad(cudaTextureObject_t texObject, float x, float y, float2 dPdx, float2 dPdy) 
# 1271
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;
# 1275
::exit(___);}
#if 0
# 1271
{ 
# 1272
T ret; 
# 1273
tex2DGrad(&ret, texObject, x, y, dPdx, dPdy); 
# 1274
return ret; 
# 1275
} 
#endif
# 1283 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1284
tex3DGrad(T *, cudaTextureObject_t, float, float, float, float4, float4) {int volatile ___ = 1;::exit(___);}
#if 0
# 1284
{ } 
#endif
# 1336 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1337
tex3DGrad(cudaTextureObject_t texObject, float x, float y, float z, float4 dPdx, float4 dPdy) 
# 1338
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;
# 1342
::exit(___);}
#if 0
# 1338
{ 
# 1339
T ret; 
# 1340
tex3DGrad(&ret, texObject, x, y, z, dPdx, dPdy); 
# 1341
return ret; 
# 1342
} 
#endif
# 1350 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1351
tex1DLayeredGrad(T *, cudaTextureObject_t, float, int, float, float) {int volatile ___ = 1;::exit(___);}
#if 0
# 1351
{ } 
#endif
# 1404 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1405
tex1DLayeredGrad(cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) 
# 1406
{int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;
# 1410
::exit(___);}
#if 0
# 1406
{ 
# 1407
T ret; 
# 1408
tex1DLayeredGrad(&ret, texObject, x, layer, dPdx, dPdy); 
# 1409
return ret; 
# 1410
} 
#endif
# 1418 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 1419
tex2DLayeredGrad(T *, cudaTextureObject_t, float, float, int, float2, float2) {int volatile ___ = 1;::exit(___);}
#if 0
# 1419
{ } 
#endif
# 1471 "/usr/local/cuda/include/texture_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 1472
tex2DLayeredGrad(cudaTextureObject_t texObject, float x, float y, int layer, float2 dPdx, float2 dPdy) 
# 1473
{int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;
# 1477
::exit(___);}
#if 0
# 1473
{ 
# 1474
T ret; 
# 1475
tex2DLayeredGrad(&ret, texObject, x, y, layer, dPdx, dPdy); 
# 1476
return ret; 
# 1477
} 
#endif
# 68 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 69
surf1Dread(T *, cudaSurfaceObject_t, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 69
{ } 
#endif
# 111 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 112
surf1Dread(cudaSurfaceObject_t surfObject, int x, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 113
{int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;
# 119
::exit(___);}
#if 0
# 113
{ 
# 119
} 
#endif
# 128 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 129
surf2Dread(T *, cudaSurfaceObject_t, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 129
{ } 
#endif
# 172 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 173
surf2Dread(cudaSurfaceObject_t surfObject, int x, int y, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 174
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;
# 180
::exit(___);}
#if 0
# 174
{ 
# 180
} 
#endif
# 189 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 190
surf3Dread(T *, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 190
{ } 
#endif
# 231 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 232
surf3Dread(cudaSurfaceObject_t surfObject, int x, int y, int z, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 233
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;
# 239
::exit(___);}
#if 0
# 233
{ 
# 239
} 
#endif
# 247 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 248
surf1DLayeredread(T *, cudaSurfaceObject_t, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 248
{ } 
#endif
# 290 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 291
surf1DLayeredread(cudaSurfaceObject_t surfObject, int x, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 292
{int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;
# 298
::exit(___);}
#if 0
# 292
{ 
# 298
} 
#endif
# 306 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 307
surf2DLayeredread(T *, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 307
{ } 
#endif
# 348 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 349
surf2DLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layer, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 350
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;
# 356
::exit(___);}
#if 0
# 350
{ 
# 356
} 
#endif
# 364 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 365
surfCubemapread(T *, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 365
{ } 
#endif
# 406 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 407
surfCubemapread(cudaSurfaceObject_t surfObject, int x, int y, int face, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 408
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;
# 414
::exit(___);}
#if 0
# 408
{ 
# 414
} 
#endif
# 422 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 423
surfCubemapLayeredread(T *, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 423
{ } 
#endif
# 464 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static T 
# 465
surfCubemapLayeredread(cudaSurfaceObject_t surfObject, int x, int y, int layerface, cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) 
# 466
{int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;
# 472
::exit(___);}
#if 0
# 466
{ 
# 472
} 
#endif
# 480 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 481
surf1Dwrite(T, cudaSurfaceObject_t, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 481
{ } 
#endif
# 528 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 529
surf2Dwrite(T, cudaSurfaceObject_t, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 529
{ } 
#endif
# 576 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 577
surf3Dwrite(T, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 577
{ } 
#endif
# 626 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 627
surf1DLayeredwrite(T, cudaSurfaceObject_t, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 627
{ } 
#endif
# 675 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 676
surf2DLayeredwrite(T, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 676
{ } 
#endif
# 723 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 724
surfCubemapwrite(T, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 724
{ } 
#endif
# 771 "/usr/local/cuda/include/surface_indirect_functions.h"
template< class T> __attribute__((unused)) static void 
# 772
surfCubemapLayeredwrite(T, cudaSurfaceObject_t, int, int, int, cudaSurfaceBoundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;::exit(___);}
#if 0
# 772
{ } 
#endif
# 68 "/usr/local/cuda/include/device_launch_parameters.h"
extern "C" {
# 71
extern const uint3 __device_builtin_variable_threadIdx; 
# 72
extern const uint3 __device_builtin_variable_blockIdx; 
# 73
extern const dim3 __device_builtin_variable_blockDim; 
# 74
extern const dim3 __device_builtin_variable_gridDim; 
# 75
extern const int __device_builtin_variable_warpSize; 
# 80
}
# 183 "/usr/local/cuda/include/cuda_runtime.h"
template< class T> static inline cudaError_t 
# 184
cudaLaunchKernel(const T *
# 185
func, dim3 
# 186
gridDim, dim3 
# 187
blockDim, void **
# 188
args, size_t 
# 189
sharedMem = 0, cudaStream_t 
# 190
stream = 0) 
# 192
{ 
# 193
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
# 194
} 
# 221
template< class T> static inline cudaError_t 
# 222
cudaSetupArgument(T 
# 223
arg, size_t 
# 224
offset) 
# 226
{ 
# 227
return ::cudaSetupArgument((const void *)(&arg), sizeof(T), offset); 
# 228
} 
# 260
static inline cudaError_t cudaEventCreate(cudaEvent_t *
# 261
event, unsigned 
# 262
flags) 
# 264
{ 
# 265
return ::cudaEventCreateWithFlags(event, flags); 
# 266
} 
# 323
static inline cudaError_t cudaMallocHost(void **
# 324
ptr, size_t 
# 325
size, unsigned 
# 326
flags) 
# 328
{ 
# 329
return ::cudaHostAlloc(ptr, size, flags); 
# 330
} 
# 332
template< class T> static inline cudaError_t 
# 333
cudaHostAlloc(T **
# 334
ptr, size_t 
# 335
size, unsigned 
# 336
flags) 
# 338
{ 
# 339
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
# 340
} 
# 342
template< class T> static inline cudaError_t 
# 343
cudaHostGetDevicePointer(T **
# 344
pDevice, void *
# 345
pHost, unsigned 
# 346
flags) 
# 348
{ 
# 349
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
# 350
} 
# 449
template< class T> static inline cudaError_t 
# 450
cudaMallocManaged(T **
# 451
devPtr, size_t 
# 452
size, unsigned 
# 453
flags = 1) 
# 455
{ 
# 456
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
# 457
} 
# 528
template< class T> static inline cudaError_t 
# 529
cudaStreamAttachMemAsync(cudaStream_t 
# 530
stream, T *
# 531
devPtr, size_t 
# 532
length = 0, unsigned 
# 533
flags = 4) 
# 535
{ 
# 536
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
# 537
} 
# 539
template< class T> inline cudaError_t 
# 540
cudaMalloc(T **
# 541
devPtr, size_t 
# 542
size) 
# 544
{ 
# 545
return ::cudaMalloc((void **)((void *)devPtr), size); 
# 546
} 
# 548
template< class T> static inline cudaError_t 
# 549
cudaMallocHost(T **
# 550
ptr, size_t 
# 551
size, unsigned 
# 552
flags = 0) 
# 554
{ 
# 555
return cudaMallocHost((void **)((void *)ptr), size, flags); 
# 556
} 
# 558
template< class T> static inline cudaError_t 
# 559
cudaMallocPitch(T **
# 560
devPtr, size_t *
# 561
pitch, size_t 
# 562
width, size_t 
# 563
height) 
# 565
{ 
# 566
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
# 567
} 
# 604
template< class T> static inline cudaError_t 
# 605
cudaMemcpyToSymbol(const T &
# 606
symbol, const void *
# 607
src, size_t 
# 608
count, size_t 
# 609
offset = 0, cudaMemcpyKind 
# 610
kind = cudaMemcpyHostToDevice) 
# 612
{ 
# 613
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
# 614
} 
# 656
template< class T> static inline cudaError_t 
# 657
cudaMemcpyToSymbolAsync(const T &
# 658
symbol, const void *
# 659
src, size_t 
# 660
count, size_t 
# 661
offset = 0, cudaMemcpyKind 
# 662
kind = cudaMemcpyHostToDevice, cudaStream_t 
# 663
stream = 0) 
# 665
{ 
# 666
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
# 667
} 
# 702
template< class T> static inline cudaError_t 
# 703
cudaMemcpyFromSymbol(void *
# 704
dst, const T &
# 705
symbol, size_t 
# 706
count, size_t 
# 707
offset = 0, cudaMemcpyKind 
# 708
kind = cudaMemcpyDeviceToHost) 
# 710
{ 
# 711
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
# 712
} 
# 754
template< class T> static inline cudaError_t 
# 755
cudaMemcpyFromSymbolAsync(void *
# 756
dst, const T &
# 757
symbol, size_t 
# 758
count, size_t 
# 759
offset = 0, cudaMemcpyKind 
# 760
kind = cudaMemcpyDeviceToHost, cudaStream_t 
# 761
stream = 0) 
# 763
{ 
# 764
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
# 765
} 
# 787
template< class T> static inline cudaError_t 
# 788
cudaGetSymbolAddress(void **
# 789
devPtr, const T &
# 790
symbol) 
# 792
{ 
# 793
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
# 794
} 
# 816
template< class T> static inline cudaError_t 
# 817
cudaGetSymbolSize(size_t *
# 818
size, const T &
# 819
symbol) 
# 821
{ 
# 822
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
# 823
} 
# 859
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 860
cudaBindTexture(size_t *
# 861
offset, const texture< T, dim, readMode>  &
# 862
tex, const void *
# 863
devPtr, const cudaChannelFormatDesc &
# 864
desc, size_t 
# 865
size = ((2147483647) * 2U) + 1U) 
# 867
{ 
# 868
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
# 869
} 
# 904
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 905
cudaBindTexture(size_t *
# 906
offset, const texture< T, dim, readMode>  &
# 907
tex, const void *
# 908
devPtr, size_t 
# 909
size = ((2147483647) * 2U) + 1U) 
# 911
{ 
# 912
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
# 913
} 
# 960
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 961
cudaBindTexture2D(size_t *
# 962
offset, const texture< T, dim, readMode>  &
# 963
tex, const void *
# 964
devPtr, const cudaChannelFormatDesc &
# 965
desc, size_t 
# 966
width, size_t 
# 967
height, size_t 
# 968
pitch) 
# 970
{ 
# 971
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
# 972
} 
# 1018
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1019
cudaBindTexture2D(size_t *
# 1020
offset, const texture< T, dim, readMode>  &
# 1021
tex, const void *
# 1022
devPtr, size_t 
# 1023
width, size_t 
# 1024
height, size_t 
# 1025
pitch) 
# 1027
{ 
# 1028
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
# 1029
} 
# 1060
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1061
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1062
tex, cudaArray_const_t 
# 1063
array, const cudaChannelFormatDesc &
# 1064
desc) 
# 1066
{ 
# 1067
return ::cudaBindTextureToArray(&tex, array, &desc); 
# 1068
} 
# 1098
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1099
cudaBindTextureToArray(const texture< T, dim, readMode>  &
# 1100
tex, cudaArray_const_t 
# 1101
array) 
# 1103
{ 
# 1104
cudaChannelFormatDesc desc; 
# 1105
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1107
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
# 1108
} 
# 1139
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1140
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1141
tex, cudaMipmappedArray_const_t 
# 1142
mipmappedArray, const cudaChannelFormatDesc &
# 1143
desc) 
# 1145
{ 
# 1146
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
# 1147
} 
# 1177
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1178
cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
# 1179
tex, cudaMipmappedArray_const_t 
# 1180
mipmappedArray) 
# 1182
{ 
# 1183
cudaChannelFormatDesc desc; 
# 1184
cudaArray_t levelArray; 
# 1185
cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
# 1187
if (err != (cudaSuccess)) { 
# 1188
return err; 
# 1189
}  
# 1190
err = ::cudaGetChannelDesc(&desc, levelArray); 
# 1192
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
# 1193
} 
# 1216
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1217
cudaUnbindTexture(const texture< T, dim, readMode>  &
# 1218
tex) 
# 1220
{ 
# 1221
return ::cudaUnbindTexture(&tex); 
# 1222
} 
# 1250
template< class T, int dim, cudaTextureReadMode readMode> static inline cudaError_t 
# 1251
cudaGetTextureAlignmentOffset(size_t *
# 1252
offset, const texture< T, dim, readMode>  &
# 1253
tex) 
# 1255
{ 
# 1256
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
# 1257
} 
# 1302
template< class T> static inline cudaError_t 
# 1303
cudaFuncSetCacheConfig(T *
# 1304
func, cudaFuncCache 
# 1305
cacheConfig) 
# 1307
{ 
# 1308
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
# 1309
} 
# 1311
template< class T> static inline cudaError_t 
# 1312
cudaFuncSetSharedMemConfig(T *
# 1313
func, cudaSharedMemConfig 
# 1314
config) 
# 1316
{ 
# 1317
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
# 1318
} 
# 1347
template< class T> inline cudaError_t 
# 1348
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
# 1349
numBlocks, T 
# 1350
func, int 
# 1351
blockSize, size_t 
# 1352
dynamicSMemSize) 
# 1353
{ 
# 1354
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
# 1355
} 
# 1398
template< class T> inline cudaError_t 
# 1399
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
# 1400
numBlocks, T 
# 1401
func, int 
# 1402
blockSize, size_t 
# 1403
dynamicSMemSize, unsigned 
# 1404
flags) 
# 1405
{ 
# 1406
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
# 1407
} 
# 1412
class __cudaOccupancyB2DHelper { 
# 1413
size_t n; 
# 1415
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
# 1416
size_t operator()(int) 
# 1417
{ 
# 1418
return n; 
# 1419
} 
# 1420
}; 
# 1467
template< class UnaryFunction, class T> static inline cudaError_t 
# 1468
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
# 1469
minGridSize, int *
# 1470
blockSize, T 
# 1471
func, UnaryFunction 
# 1472
blockSizeToDynamicSMemSize, int 
# 1473
blockSizeLimit = 0, unsigned 
# 1474
flags = 0) 
# 1475
{ 
# 1476
cudaError_t status; 
# 1479
int device; 
# 1480
cudaFuncAttributes attr; 
# 1483
int maxThreadsPerMultiProcessor; 
# 1484
int warpSize; 
# 1485
int devMaxThreadsPerBlock; 
# 1486
int multiProcessorCount; 
# 1487
int funcMaxThreadsPerBlock; 
# 1488
int occupancyLimit; 
# 1489
int granularity; 
# 1492
int maxBlockSize = 0; 
# 1493
int numBlocks = 0; 
# 1494
int maxOccupancy = 0; 
# 1497
int blockSizeToTryAligned; 
# 1498
int blockSizeToTry; 
# 1499
int blockSizeLimitAligned; 
# 1500
int occupancyInBlocks; 
# 1501
int occupancyInThreads; 
# 1502
size_t dynamicSMemSize; 
# 1508
if (((!minGridSize) || (!blockSize)) || (!func)) { 
# 1509
return cudaErrorInvalidValue; 
# 1510
}  
# 1516
status = ::cudaGetDevice(&device); 
# 1517
if (status != (cudaSuccess)) { 
# 1518
return status; 
# 1519
}  
# 1521
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
# 1525
if (status != (cudaSuccess)) { 
# 1526
return status; 
# 1527
}  
# 1529
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
# 1533
if (status != (cudaSuccess)) { 
# 1534
return status; 
# 1535
}  
# 1537
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
# 1541
if (status != (cudaSuccess)) { 
# 1542
return status; 
# 1543
}  
# 1545
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
# 1549
if (status != (cudaSuccess)) { 
# 1550
return status; 
# 1551
}  
# 1553
status = cudaFuncGetAttributes(&attr, func); 
# 1554
if (status != (cudaSuccess)) { 
# 1555
return status; 
# 1556
}  
# 1558
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
# 1564
occupancyLimit = maxThreadsPerMultiProcessor; 
# 1565
granularity = warpSize; 
# 1567
if (blockSizeLimit == 0) { 
# 1568
blockSizeLimit = devMaxThreadsPerBlock; 
# 1569
}  
# 1571
if (devMaxThreadsPerBlock < blockSizeLimit) { 
# 1572
blockSizeLimit = devMaxThreadsPerBlock; 
# 1573
}  
# 1575
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
# 1576
blockSizeLimit = funcMaxThreadsPerBlock; 
# 1577
}  
# 1579
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
# 1581
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
# 1585
if (blockSizeLimit < blockSizeToTryAligned) { 
# 1586
blockSizeToTry = blockSizeLimit; 
# 1587
} else { 
# 1588
blockSizeToTry = blockSizeToTryAligned; 
# 1589
}  
# 1591
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
# 1593
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
# 1600
if (status != (cudaSuccess)) { 
# 1601
return status; 
# 1602
}  
# 1604
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
# 1606
if (occupancyInThreads > maxOccupancy) { 
# 1607
maxBlockSize = blockSizeToTry; 
# 1608
numBlocks = occupancyInBlocks; 
# 1609
maxOccupancy = occupancyInThreads; 
# 1610
}  
# 1614
if (occupancyLimit == maxOccupancy) { 
# 1615
break; 
# 1616
}  
# 1617
}  
# 1625
(*minGridSize) = (numBlocks * multiProcessorCount); 
# 1626
(*blockSize) = maxBlockSize; 
# 1628
return status; 
# 1629
} 
# 1662
template< class UnaryFunction, class T> static inline cudaError_t 
# 1663
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
# 1664
minGridSize, int *
# 1665
blockSize, T 
# 1666
func, UnaryFunction 
# 1667
blockSizeToDynamicSMemSize, int 
# 1668
blockSizeLimit = 0) 
# 1669
{ 
# 1670
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
# 1671
} 
# 1707
template< class T> static inline cudaError_t 
# 1708
cudaOccupancyMaxPotentialBlockSize(int *
# 1709
minGridSize, int *
# 1710
blockSize, T 
# 1711
func, size_t 
# 1712
dynamicSMemSize = 0, int 
# 1713
blockSizeLimit = 0) 
# 1714
{ 
# 1715
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
# 1716
} 
# 1766
template< class T> static inline cudaError_t 
# 1767
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
# 1768
minGridSize, int *
# 1769
blockSize, T 
# 1770
func, size_t 
# 1771
dynamicSMemSize = 0, int 
# 1772
blockSizeLimit = 0, unsigned 
# 1773
flags = 0) 
# 1774
{ 
# 1775
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
# 1776
} 
# 1814
template< class T> static inline cudaError_t 
# 1815
cudaLaunch(T *
# 1816
func) 
# 1818
{ 
# 1819
return ::cudaLaunch((const void *)func); 
# 1820
} 
# 1851
template< class T> inline cudaError_t 
# 1852
cudaFuncGetAttributes(cudaFuncAttributes *
# 1853
attr, T *
# 1854
entry) 
# 1856
{ 
# 1857
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
# 1858
} 
# 1880
template< class T, int dim> static inline cudaError_t 
# 1881
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1882
surf, cudaArray_const_t 
# 1883
array, const cudaChannelFormatDesc &
# 1884
desc) 
# 1886
{ 
# 1887
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
# 1888
} 
# 1909
template< class T, int dim> static inline cudaError_t 
# 1910
cudaBindSurfaceToArray(const surface< T, dim>  &
# 1911
surf, cudaArray_const_t 
# 1912
array) 
# 1914
{ 
# 1915
cudaChannelFormatDesc desc; 
# 1916
cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
# 1918
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
# 1919
} 
# 1930
#pragma GCC diagnostic pop
# 29 "/usr/include/stdio.h" 3
extern "C" {
# 44
struct _IO_FILE; 
# 48
typedef _IO_FILE FILE; 
# 64
typedef _IO_FILE __FILE; 
# 94 "/usr/include/wchar.h" 3
typedef 
# 83
struct { 
# 84
int __count; 
# 86
union { 
# 88
unsigned __wch; 
# 92
char __wchb[4]; 
# 93
} __value; 
# 94
} __mbstate_t; 
# 25 "/usr/include/_G_config.h" 3
typedef 
# 22
struct { 
# 23
__off_t __pos; 
# 24
__mbstate_t __state; 
# 25
} _G_fpos_t; 
# 30
typedef 
# 27
struct { 
# 28
__off64_t __pos; 
# 29
__mbstate_t __state; 
# 30
} _G_fpos64_t; 
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list; 
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE; 
# 150
typedef void _IO_lock_t; 
# 156
struct _IO_marker { 
# 157
_IO_marker *_next; 
# 158
_IO_FILE *_sbuf; 
# 162
int _pos; 
# 173
}; 
# 176
enum __codecvt_result { 
# 178
__codecvt_ok, 
# 179
__codecvt_partial, 
# 180
__codecvt_error, 
# 181
__codecvt_noconv
# 182
}; 
# 241
struct _IO_FILE { 
# 242
int _flags; 
# 247
char *_IO_read_ptr; 
# 248
char *_IO_read_end; 
# 249
char *_IO_read_base; 
# 250
char *_IO_write_base; 
# 251
char *_IO_write_ptr; 
# 252
char *_IO_write_end; 
# 253
char *_IO_buf_base; 
# 254
char *_IO_buf_end; 
# 256
char *_IO_save_base; 
# 257
char *_IO_backup_base; 
# 258
char *_IO_save_end; 
# 260
_IO_marker *_markers; 
# 262
_IO_FILE *_chain; 
# 264
int _fileno; 
# 268
int _flags2; 
# 270
__off_t _old_offset; 
# 274
unsigned short _cur_column; 
# 275
signed char _vtable_offset; 
# 276
char _shortbuf[1]; 
# 280
_IO_lock_t *_lock; 
# 289
__off64_t _offset; 
# 297
void *__pad1; 
# 298
void *__pad2; 
# 299
void *__pad3; 
# 300
void *__pad4; 
# 302
size_t __pad5; 
# 303
int _mode; 
# 305
char _unused2[(((15) * sizeof(int)) - ((4) * sizeof(void *))) - sizeof(size_t)]; 
# 307
}; 
# 313
struct _IO_FILE_plus; 
# 315
extern _IO_FILE_plus _IO_2_1_stdin_; 
# 316
extern _IO_FILE_plus _IO_2_1_stdout_; 
# 317
extern _IO_FILE_plus _IO_2_1_stderr_; 
# 333
typedef __ssize_t __io_read_fn(void * __cookie, char * __buf, size_t __nbytes); 
# 341
typedef __ssize_t __io_write_fn(void * __cookie, const char * __buf, size_t __n); 
# 350
typedef int __io_seek_fn(void * __cookie, __off64_t * __pos, int __w); 
# 353
typedef int __io_close_fn(void * __cookie); 
# 358
typedef __io_read_fn cookie_read_function_t; 
# 359
typedef __io_write_fn cookie_write_function_t; 
# 360
typedef __io_seek_fn cookie_seek_function_t; 
# 361
typedef __io_close_fn cookie_close_function_t; 
# 370
typedef 
# 365
struct { 
# 366
__io_read_fn *read; 
# 367
__io_write_fn *write; 
# 368
__io_seek_fn *seek; 
# 369
__io_close_fn *close; 
# 370
} _IO_cookie_io_functions_t; 
# 371
typedef _IO_cookie_io_functions_t cookie_io_functions_t; 
# 373
struct _IO_cookie_file; 
# 376
extern void _IO_cookie_init(_IO_cookie_file * __cfile, int __read_write, void * __cookie, _IO_cookie_io_functions_t __fns); 
# 382
extern "C" {
# 385
extern int __underflow(_IO_FILE *); 
# 386
extern int __uflow(_IO_FILE *); 
# 387
extern int __overflow(_IO_FILE *, int); 
# 429
extern int _IO_getc(_IO_FILE * __fp); 
# 430
extern int _IO_putc(int __c, _IO_FILE * __fp); 
# 431
extern int _IO_feof(_IO_FILE * __fp) throw(); 
# 432
extern int _IO_ferror(_IO_FILE * __fp) throw(); 
# 434
extern int _IO_peekc_locked(_IO_FILE * __fp); 
# 440
extern void _IO_flockfile(_IO_FILE *) throw(); 
# 441
extern void _IO_funlockfile(_IO_FILE *) throw(); 
# 442
extern int _IO_ftrylockfile(_IO_FILE *) throw(); 
# 459
extern int _IO_vfscanf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list, int *__restrict__); 
# 461
extern int _IO_vfprintf(_IO_FILE *__restrict__, const char *__restrict__, __gnuc_va_list); 
# 463
extern __ssize_t _IO_padn(_IO_FILE *, int, __ssize_t); 
# 464
extern size_t _IO_sgetn(_IO_FILE *, void *, size_t); 
# 466
extern __off64_t _IO_seekoff(_IO_FILE *, __off64_t, int, int); 
# 467
extern __off64_t _IO_seekpos(_IO_FILE *, __off64_t, int); 
# 469
extern void _IO_free_backup_area(_IO_FILE *) throw(); 
# 521
}
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list; 
# 110
typedef _G_fpos_t fpos_t; 
# 116
typedef _G_fpos64_t fpos64_t; 
# 168
extern _IO_FILE *stdin; 
# 169
extern _IO_FILE *stdout; 
# 170
extern _IO_FILE *stderr; 
# 178
extern int remove(const char * __filename) throw(); 
# 180
extern int rename(const char * __old, const char * __new) throw(); 
# 185
extern int renameat(int __oldfd, const char * __old, int __newfd, const char * __new) throw(); 
# 195
extern FILE *tmpfile(); 
# 205
extern FILE *tmpfile64(); 
# 209
extern char *tmpnam(char * __s) throw(); 
# 215
extern char *tmpnam_r(char * __s) throw(); 
# 227
extern char *tempnam(const char * __dir, const char * __pfx) throw()
# 228
 __attribute((__malloc__)); 
# 237
extern int fclose(FILE * __stream); 
# 242
extern int fflush(FILE * __stream); 
# 252
extern int fflush_unlocked(FILE * __stream); 
# 262
extern int fcloseall(); 
# 272
extern FILE *fopen(const char *__restrict__ __filename, const char *__restrict__ __modes); 
# 278
extern FILE *freopen(const char *__restrict__ __filename, const char *__restrict__ __modes, FILE *__restrict__ __stream); 
# 297
extern FILE *fopen64(const char *__restrict__ __filename, const char *__restrict__ __modes); 
# 299
extern FILE *freopen64(const char *__restrict__ __filename, const char *__restrict__ __modes, FILE *__restrict__ __stream); 
# 306
extern FILE *fdopen(int __fd, const char * __modes) throw(); 
# 312
extern FILE *fopencookie(void *__restrict__ __magic_cookie, const char *__restrict__ __modes, _IO_cookie_io_functions_t __io_funcs) throw(); 
# 319
extern FILE *fmemopen(void * __s, size_t __len, const char * __modes) throw(); 
# 325
extern FILE *open_memstream(char ** __bufloc, size_t * __sizeloc) throw(); 
# 332
extern void setbuf(FILE *__restrict__ __stream, char *__restrict__ __buf) throw(); 
# 336
extern int setvbuf(FILE *__restrict__ __stream, char *__restrict__ __buf, int __modes, size_t __n) throw(); 
# 343
extern void setbuffer(FILE *__restrict__ __stream, char *__restrict__ __buf, size_t __size) throw(); 
# 347
extern void setlinebuf(FILE * __stream) throw(); 
# 356
extern int fprintf(FILE *__restrict__ __stream, const char *__restrict__ __format, ...); 
# 362
extern int printf(const char *__restrict__ __format, ...); 
# 364
extern int sprintf(char *__restrict__ __s, const char *__restrict__ __format, ...) throw(); 
# 371
extern int vfprintf(FILE *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg); 
# 377
extern int vprintf(const char *__restrict__ __format, __gnuc_va_list __arg); 
# 379
extern int vsprintf(char *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg) throw(); 
# 386
extern int snprintf(char *__restrict__ __s, size_t __maxlen, const char *__restrict__ __format, ...) throw()
# 388
 __attribute((__format__(__printf__, 3, 4))); 
# 390
extern int vsnprintf(char *__restrict__ __s, size_t __maxlen, const char *__restrict__ __format, __gnuc_va_list __arg) throw()
# 392
 __attribute((__format__(__printf__, 3, 0))); 
# 399
extern int vasprintf(char **__restrict__ __ptr, const char *__restrict__ __f, __gnuc_va_list __arg) throw()
# 401
 __attribute((__format__(__printf__, 2, 0))); 
# 402
extern int __asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()
# 404
 __attribute((__format__(__printf__, 2, 3))); 
# 405
extern int asprintf(char **__restrict__ __ptr, const char *__restrict__ __fmt, ...) throw()
# 407
 __attribute((__format__(__printf__, 2, 3))); 
# 412
extern int vdprintf(int __fd, const char *__restrict__ __fmt, __gnuc_va_list __arg)
# 414
 __attribute((__format__(__printf__, 2, 0))); 
# 415
extern int dprintf(int __fd, const char *__restrict__ __fmt, ...)
# 416
 __attribute((__format__(__printf__, 2, 3))); 
# 425
extern int fscanf(FILE *__restrict__ __stream, const char *__restrict__ __format, ...); 
# 431
extern int scanf(const char *__restrict__ __format, ...); 
# 433
extern int sscanf(const char *__restrict__ __s, const char *__restrict__ __format, ...) throw(); 
# 471
extern int vfscanf(FILE *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg)
# 473
 __attribute((__format__(__scanf__, 2, 0))); 
# 479
extern int vscanf(const char *__restrict__ __format, __gnuc_va_list __arg)
# 480
 __attribute((__format__(__scanf__, 1, 0))); 
# 483
extern int vsscanf(const char *__restrict__ __s, const char *__restrict__ __format, __gnuc_va_list __arg) throw()
# 485
 __attribute((__format__(__scanf__, 2, 0))); 
# 531
extern int fgetc(FILE * __stream); 
# 532
extern int getc(FILE * __stream); 
# 538
extern int getchar(); 
# 550
extern int getc_unlocked(FILE * __stream); 
# 551
extern int getchar_unlocked(); 
# 561
extern int fgetc_unlocked(FILE * __stream); 
# 573
extern int fputc(int __c, FILE * __stream); 
# 574
extern int putc(int __c, FILE * __stream); 
# 580
extern int putchar(int __c); 
# 594
extern int fputc_unlocked(int __c, FILE * __stream); 
# 602
extern int putc_unlocked(int __c, FILE * __stream); 
# 603
extern int putchar_unlocked(int __c); 
# 610
extern int getw(FILE * __stream); 
# 613
extern int putw(int __w, FILE * __stream); 
# 622
extern char *fgets(char *__restrict__ __s, int __n, FILE *__restrict__ __stream); 
# 638
extern char *gets(char * __s) __attribute((__deprecated__)); 
# 649
extern char *fgets_unlocked(char *__restrict__ __s, int __n, FILE *__restrict__ __stream); 
# 665
extern __ssize_t __getdelim(char **__restrict__ __lineptr, size_t *__restrict__ __n, int __delimiter, FILE *__restrict__ __stream); 
# 668
extern __ssize_t getdelim(char **__restrict__ __lineptr, size_t *__restrict__ __n, int __delimiter, FILE *__restrict__ __stream); 
# 678
extern __ssize_t getline(char **__restrict__ __lineptr, size_t *__restrict__ __n, FILE *__restrict__ __stream); 
# 689
extern int fputs(const char *__restrict__ __s, FILE *__restrict__ __stream); 
# 695
extern int puts(const char * __s); 
# 702
extern int ungetc(int __c, FILE * __stream); 
# 709
extern size_t fread(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 715
extern size_t fwrite(const void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __s); 
# 726
extern int fputs_unlocked(const char *__restrict__ __s, FILE *__restrict__ __stream); 
# 737
extern size_t fread_unlocked(void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 739
extern size_t fwrite_unlocked(const void *__restrict__ __ptr, size_t __size, size_t __n, FILE *__restrict__ __stream); 
# 749
extern int fseek(FILE * __stream, long __off, int __whence); 
# 754
extern long ftell(FILE * __stream); 
# 759
extern void rewind(FILE * __stream); 
# 773
extern int fseeko(FILE * __stream, __off_t __off, int __whence); 
# 778
extern __off_t ftello(FILE * __stream); 
# 798
extern int fgetpos(FILE *__restrict__ __stream, fpos_t *__restrict__ __pos); 
# 803
extern int fsetpos(FILE * __stream, const fpos_t * __pos); 
# 818
extern int fseeko64(FILE * __stream, __off64_t __off, int __whence); 
# 819
extern __off64_t ftello64(FILE * __stream); 
# 820
extern int fgetpos64(FILE *__restrict__ __stream, fpos64_t *__restrict__ __pos); 
# 821
extern int fsetpos64(FILE * __stream, const fpos64_t * __pos); 
# 826
extern void clearerr(FILE * __stream) throw(); 
# 828
extern int feof(FILE * __stream) throw(); 
# 830
extern int ferror(FILE * __stream) throw(); 
# 835
extern void clearerr_unlocked(FILE * __stream) throw(); 
# 836
extern int feof_unlocked(FILE * __stream) throw(); 
# 837
extern int ferror_unlocked(FILE * __stream) throw(); 
# 846
extern void perror(const char * __s); 
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern int sys_nerr; 
# 27
extern const char *const sys_errlist[]; 
# 30
extern int _sys_nerr; 
# 31
extern const char *const _sys_errlist[]; 
# 858 "/usr/include/stdio.h" 3
extern int fileno(FILE * __stream) throw(); 
# 863
extern int fileno_unlocked(FILE * __stream) throw(); 
# 872
extern FILE *popen(const char * __command, const char * __modes); 
# 878
extern int pclose(FILE * __stream); 
# 884
extern char *ctermid(char * __s) throw(); 
# 890
extern char *cuserid(char * __s); 
# 895
struct obstack; 
# 898
extern int obstack_printf(obstack *__restrict__ __obstack, const char *__restrict__ __format, ...) throw()
# 900
 __attribute((__format__(__printf__, 2, 3))); 
# 901
extern int obstack_vprintf(obstack *__restrict__ __obstack, const char *__restrict__ __format, __gnuc_va_list __args) throw()
# 904
 __attribute((__format__(__printf__, 2, 0))); 
# 912
extern void flockfile(FILE * __stream) throw(); 
# 916
extern int ftrylockfile(FILE * __stream) throw(); 
# 919
extern void funlockfile(FILE * __stream) throw(); 
# 942
}
# 30 "/usr/include/complex.h" 3
extern "C" {
# 53 "/usr/include/x86_64-linux-gnu/bits/cmathcalls.h" 3
extern double __complex__ cacos(double __complex__ __z) throw(); extern double __complex__ __cacos(double __complex__ __z) throw(); 
# 55
extern double __complex__ casin(double __complex__ __z) throw(); extern double __complex__ __casin(double __complex__ __z) throw(); 
# 57
extern double __complex__ catan(double __complex__ __z) throw(); extern double __complex__ __catan(double __complex__ __z) throw(); 
# 60
extern double __complex__ ccos(double __complex__ __z) throw(); extern double __complex__ __ccos(double __complex__ __z) throw(); 
# 62
extern double __complex__ csin(double __complex__ __z) throw(); extern double __complex__ __csin(double __complex__ __z) throw(); 
# 64
extern double __complex__ ctan(double __complex__ __z) throw(); extern double __complex__ __ctan(double __complex__ __z) throw(); 
# 70
extern double __complex__ cacosh(double __complex__ __z) throw(); extern double __complex__ __cacosh(double __complex__ __z) throw(); 
# 72
extern double __complex__ casinh(double __complex__ __z) throw(); extern double __complex__ __casinh(double __complex__ __z) throw(); 
# 74
extern double __complex__ catanh(double __complex__ __z) throw(); extern double __complex__ __catanh(double __complex__ __z) throw(); 
# 77
extern double __complex__ ccosh(double __complex__ __z) throw(); extern double __complex__ __ccosh(double __complex__ __z) throw(); 
# 79
extern double __complex__ csinh(double __complex__ __z) throw(); extern double __complex__ __csinh(double __complex__ __z) throw(); 
# 81
extern double __complex__ ctanh(double __complex__ __z) throw(); extern double __complex__ __ctanh(double __complex__ __z) throw(); 
# 87
extern double __complex__ cexp(double __complex__ __z) throw(); extern double __complex__ __cexp(double __complex__ __z) throw(); 
# 90
extern double __complex__ clog(double __complex__ __z) throw(); extern double __complex__ __clog(double __complex__ __z) throw(); 
# 95
extern double __complex__ clog10(double __complex__ __z) throw(); extern double __complex__ __clog10(double __complex__ __z) throw(); 
# 101
extern double __complex__ cpow(double __complex__ __x, double __complex__ __y) throw(); extern double __complex__ __cpow(double __complex__ __x, double __complex__ __y) throw(); 
# 104
extern double __complex__ csqrt(double __complex__ __z) throw(); extern double __complex__ __csqrt(double __complex__ __z) throw(); 
# 110
extern double cabs(double __complex__ __z) throw(); extern double __cabs(double __complex__ __z) throw(); 
# 113
extern double carg(double __complex__ __z) throw(); extern double __carg(double __complex__ __z) throw(); 
# 116
extern double __complex__ conj(double __complex__ __z) throw(); extern double __complex__ __conj(double __complex__ __z) throw(); 
# 119
extern double __complex__ cproj(double __complex__ __z) throw(); extern double __complex__ __cproj(double __complex__ __z) throw(); 
# 125
extern double cimag(double __complex__ __z) throw(); extern double __cimag(double __complex__ __z) throw(); 
# 128
extern double creal(double __complex__ __z) throw(); extern double __creal(double __complex__ __z) throw(); 
# 53 "/usr/include/x86_64-linux-gnu/bits/cmathcalls.h" 3
extern float __complex__ cacosf(float __complex__ __z) throw(); extern float __complex__ __cacosf(float __complex__ __z) throw(); 
# 55
extern float __complex__ casinf(float __complex__ __z) throw(); extern float __complex__ __casinf(float __complex__ __z) throw(); 
# 57
extern float __complex__ catanf(float __complex__ __z) throw(); extern float __complex__ __catanf(float __complex__ __z) throw(); 
# 60
extern float __complex__ ccosf(float __complex__ __z) throw(); extern float __complex__ __ccosf(float __complex__ __z) throw(); 
# 62
extern float __complex__ csinf(float __complex__ __z) throw(); extern float __complex__ __csinf(float __complex__ __z) throw(); 
# 64
extern float __complex__ ctanf(float __complex__ __z) throw(); extern float __complex__ __ctanf(float __complex__ __z) throw(); 
# 70
extern float __complex__ cacoshf(float __complex__ __z) throw(); extern float __complex__ __cacoshf(float __complex__ __z) throw(); 
# 72
extern float __complex__ casinhf(float __complex__ __z) throw(); extern float __complex__ __casinhf(float __complex__ __z) throw(); 
# 74
extern float __complex__ catanhf(float __complex__ __z) throw(); extern float __complex__ __catanhf(float __complex__ __z) throw(); 
# 77
extern float __complex__ ccoshf(float __complex__ __z) throw(); extern float __complex__ __ccoshf(float __complex__ __z) throw(); 
# 79
extern float __complex__ csinhf(float __complex__ __z) throw(); extern float __complex__ __csinhf(float __complex__ __z) throw(); 
# 81
extern float __complex__ ctanhf(float __complex__ __z) throw(); extern float __complex__ __ctanhf(float __complex__ __z) throw(); 
# 87
extern float __complex__ cexpf(float __complex__ __z) throw(); extern float __complex__ __cexpf(float __complex__ __z) throw(); 
# 90
extern float __complex__ clogf(float __complex__ __z) throw(); extern float __complex__ __clogf(float __complex__ __z) throw(); 
# 95
extern float __complex__ clog10f(float __complex__ __z) throw(); extern float __complex__ __clog10f(float __complex__ __z) throw(); 
# 101
extern float __complex__ cpowf(float __complex__ __x, float __complex__ __y) throw(); extern float __complex__ __cpowf(float __complex__ __x, float __complex__ __y) throw(); 
# 104
extern float __complex__ csqrtf(float __complex__ __z) throw(); extern float __complex__ __csqrtf(float __complex__ __z) throw(); 
# 110
extern float cabsf(float __complex__ __z) throw(); extern float __cabsf(float __complex__ __z) throw(); 
# 113
extern float cargf(float __complex__ __z) throw(); extern float __cargf(float __complex__ __z) throw(); 
# 116
extern float __complex__ conjf(float __complex__ __z) throw(); extern float __complex__ __conjf(float __complex__ __z) throw(); 
# 119
extern float __complex__ cprojf(float __complex__ __z) throw(); extern float __complex__ __cprojf(float __complex__ __z) throw(); 
# 125
extern float cimagf(float __complex__ __z) throw(); extern float __cimagf(float __complex__ __z) throw(); 
# 128
extern float crealf(float __complex__ __z) throw(); extern float __crealf(float __complex__ __z) throw(); 
# 53 "/usr/include/x86_64-linux-gnu/bits/cmathcalls.h" 3
extern long double __complex__ cacosl(long double __complex__ __z) throw(); extern long double __complex__ __cacosl(long double __complex__ __z) throw(); 
# 55
extern long double __complex__ casinl(long double __complex__ __z) throw(); extern long double __complex__ __casinl(long double __complex__ __z) throw(); 
# 57
extern long double __complex__ catanl(long double __complex__ __z) throw(); extern long double __complex__ __catanl(long double __complex__ __z) throw(); 
# 60
extern long double __complex__ ccosl(long double __complex__ __z) throw(); extern long double __complex__ __ccosl(long double __complex__ __z) throw(); 
# 62
extern long double __complex__ csinl(long double __complex__ __z) throw(); extern long double __complex__ __csinl(long double __complex__ __z) throw(); 
# 64
extern long double __complex__ ctanl(long double __complex__ __z) throw(); extern long double __complex__ __ctanl(long double __complex__ __z) throw(); 
# 70
extern long double __complex__ cacoshl(long double __complex__ __z) throw(); extern long double __complex__ __cacoshl(long double __complex__ __z) throw(); 
# 72
extern long double __complex__ casinhl(long double __complex__ __z) throw(); extern long double __complex__ __casinhl(long double __complex__ __z) throw(); 
# 74
extern long double __complex__ catanhl(long double __complex__ __z) throw(); extern long double __complex__ __catanhl(long double __complex__ __z) throw(); 
# 77
extern long double __complex__ ccoshl(long double __complex__ __z) throw(); extern long double __complex__ __ccoshl(long double __complex__ __z) throw(); 
# 79
extern long double __complex__ csinhl(long double __complex__ __z) throw(); extern long double __complex__ __csinhl(long double __complex__ __z) throw(); 
# 81
extern long double __complex__ ctanhl(long double __complex__ __z) throw(); extern long double __complex__ __ctanhl(long double __complex__ __z) throw(); 
# 87
extern long double __complex__ cexpl(long double __complex__ __z) throw(); extern long double __complex__ __cexpl(long double __complex__ __z) throw(); 
# 90
extern long double __complex__ clogl(long double __complex__ __z) throw(); extern long double __complex__ __clogl(long double __complex__ __z) throw(); 
# 95
extern long double __complex__ clog10l(long double __complex__ __z) throw(); extern long double __complex__ __clog10l(long double __complex__ __z) throw(); 
# 101
extern long double __complex__ cpowl(long double __complex__ __x, long double __complex__ __y) throw(); extern long double __complex__ __cpowl(long double __complex__ __x, long double __complex__ __y) throw(); 
# 104
extern long double __complex__ csqrtl(long double __complex__ __z) throw(); extern long double __complex__ __csqrtl(long double __complex__ __z) throw(); 
# 110
extern long double cabsl(long double __complex__ __z) throw(); extern long double __cabsl(long double __complex__ __z) throw(); 
# 113
extern long double cargl(long double __complex__ __z) throw(); extern long double __cargl(long double __complex__ __z) throw(); 
# 116
extern long double __complex__ conjl(long double __complex__ __z) throw(); extern long double __complex__ __conjl(long double __complex__ __z) throw(); 
# 119
extern long double __complex__ cprojl(long double __complex__ __z) throw(); extern long double __complex__ __cprojl(long double __complex__ __z) throw(); 
# 125
extern long double cimagl(long double __complex__ __z) throw(); extern long double __cimagl(long double __complex__ __z) throw(); 
# 128
extern long double creall(long double __complex__ __z) throw(); extern long double __creall(long double __complex__ __z) throw(); 
# 110 "/usr/include/complex.h" 3
}
# 48 "/usr/include/stdint.h" 3
typedef unsigned char uint8_t; 
# 49
typedef unsigned short uint16_t; 
# 51
typedef unsigned uint32_t; 
# 55
typedef unsigned long uint64_t; 
# 65
typedef signed char int_least8_t; 
# 66
typedef short int_least16_t; 
# 67
typedef int int_least32_t; 
# 69
typedef long int_least64_t; 
# 76
typedef unsigned char uint_least8_t; 
# 77
typedef unsigned short uint_least16_t; 
# 78
typedef unsigned uint_least32_t; 
# 80
typedef unsigned long uint_least64_t; 
# 90
typedef signed char int_fast8_t; 
# 92
typedef long int_fast16_t; 
# 93
typedef long int_fast32_t; 
# 94
typedef long int_fast64_t; 
# 103
typedef unsigned char uint_fast8_t; 
# 105
typedef unsigned long uint_fast16_t; 
# 106
typedef unsigned long uint_fast32_t; 
# 107
typedef unsigned long uint_fast64_t; 
# 119
typedef long intptr_t; 
# 122
typedef unsigned long uintptr_t; 
# 134
typedef long intmax_t; 
# 135
typedef unsigned long uintmax_t; 
# 67 "/usr/include/c++/5/bits/stl_relops.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 69
namespace rel_ops { 
# 85
template< class _Tp> inline bool 
# 87
operator!=(const _Tp &__x, const _Tp &__y) 
# 88
{ return !(__x == __y); } 
# 98
template< class _Tp> inline bool 
# 100
operator>(const _Tp &__x, const _Tp &__y) 
# 101
{ return __y < __x; } 
# 111
template< class _Tp> inline bool 
# 113
operator<=(const _Tp &__x, const _Tp &__y) 
# 114
{ return !(__y < __x); } 
# 124
template< class _Tp> inline bool 
# 126
operator>=(const _Tp &__x, const _Tp &__y) 
# 127
{ return !(__x < __y); } 
# 130
}
# 132
}
# 36 "/usr/include/c++/5/bits/move.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 45
template< class _Tp> inline _Tp *
# 47
__addressof(_Tp &__r) 
# 48
{ 
# 49
return reinterpret_cast< _Tp *>(&(const_cast< char &>(reinterpret_cast< const volatile char &>(__r)))); 
# 51
} 
# 54
}
# 159
namespace std __attribute((__visibility__("default"))) { 
# 174
template< class _Tp> inline void 
# 176
swap(_Tp &__a, _Tp &__b) 
# 181
{ 
# 185
_Tp __tmp = __a; 
# 186
__a = __b; 
# 187
__b = __tmp; 
# 188
} 
# 193
template< class _Tp, size_t _Nm> inline void 
# 195
swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm]) 
# 199
{ 
# 200
for (size_t __n = (0); __n < _Nm; ++__n) { 
# 201
swap((__a)[__n], (__b)[__n]); }  
# 202
} 
# 206
}
# 65 "/usr/include/c++/5/bits/stl_pair.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 95
template< class _T1, class _T2> 
# 96
struct pair { 
# 98
typedef _T1 first_type; 
# 99
typedef _T2 second_type; 
# 101
_T1 first; 
# 102
_T2 second; 
# 108
pair() : first(), second() 
# 109
{ } 
# 112
pair(const _T1 &__a, const _T2 &__b) : first(__a), second(__b) 
# 113
{ } 
# 117
template< class _U1, class _U2> 
# 118
pair(const std::pair< _U1, _U2>  &__p) : first((__p.first)), second((__p.second)) 
# 119
{ } 
# 209
}; 
# 212
template< class _T1, class _T2> inline bool 
# 214
operator==(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 215
{ return ((__x.first) == (__y.first)) && ((__x.second) == (__y.second)); } 
# 218
template< class _T1, class _T2> inline bool 
# 220
operator<(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 221
{ return ((__x.first) < (__y.first)) || ((!((__y.first) < (__x.first))) && ((__x.second) < (__y.second))); 
# 222
} 
# 225
template< class _T1, class _T2> inline bool 
# 227
operator!=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 228
{ return !(__x == __y); } 
# 231
template< class _T1, class _T2> inline bool 
# 233
operator>(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 234
{ return __y < __x; } 
# 237
template< class _T1, class _T2> inline bool 
# 239
operator<=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 240
{ return !(__y < __x); } 
# 243
template< class _T1, class _T2> inline bool 
# 245
operator>=(const pair< _T1, _T2>  &__x, const pair< _T1, _T2>  &__y) 
# 246
{ return !(__x < __y); } 
# 284
template< class _T1, class _T2> inline pair< _T1, _T2>  
# 286
make_pair(_T1 __x, _T2 __y) 
# 287
{ return pair< _T1, _T2> (__x, __y); } 
# 293
}
# 42 "/usr/include/c++/5/bits/functexcept.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 48
void __throw_bad_exception() __attribute((__noreturn__)); 
# 52
void __throw_bad_alloc() __attribute((__noreturn__)); 
# 56
void __throw_bad_cast() __attribute((__noreturn__)); 
# 59
void __throw_bad_typeid() __attribute((__noreturn__)); 
# 63
void __throw_logic_error(const char *) __attribute((__noreturn__)); 
# 66
void __throw_domain_error(const char *) __attribute((__noreturn__)); 
# 69
void __throw_invalid_argument(const char *) __attribute((__noreturn__)); 
# 72
void __throw_length_error(const char *) __attribute((__noreturn__)); 
# 75
void __throw_out_of_range(const char *) __attribute((__noreturn__)); 
# 78
void __throw_out_of_range_fmt(const char *, ...) __attribute((__noreturn__))
# 79
 __attribute((__format__(__gnu_printf__, 1, 2))); 
# 82
void __throw_runtime_error(const char *) __attribute((__noreturn__)); 
# 85
void __throw_range_error(const char *) __attribute((__noreturn__)); 
# 88
void __throw_overflow_error(const char *) __attribute((__noreturn__)); 
# 91
void __throw_underflow_error(const char *) __attribute((__noreturn__)); 
# 95
void __throw_ios_failure(const char *) __attribute((__noreturn__)); 
# 98
void __throw_system_error(int) __attribute((__noreturn__)); 
# 101
void __throw_future_error(int) __attribute((__noreturn__)); 
# 105
void __throw_bad_function_call() __attribute((__noreturn__)); 
# 108
}
# 37 "/usr/include/c++/5/ext/numeric_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 54
template< class _Value> 
# 55
struct __numeric_traits_integer { 
# 58
static const _Value __min = ((((_Value)(-1)) < 0) ? ((_Value)1) << ((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)) : ((_Value)0)); 
# 59
static const _Value __max = ((((_Value)(-1)) < 0) ? (((((_Value)1) << (((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)) - (1))) - 1) << 1) + 1 : (~((_Value)0))); 
# 63
static const bool __is_signed = (((_Value)(-1)) < 0); 
# 64
static const int __digits = ((sizeof(_Value) * (8)) - (((_Value)(-1)) < 0)); 
# 65
}; 
# 67
template< class _Value> const _Value 
# 68
__numeric_traits_integer< _Value> ::__min; 
# 70
template< class _Value> const _Value 
# 71
__numeric_traits_integer< _Value> ::__max; 
# 73
template< class _Value> const bool 
# 74
__numeric_traits_integer< _Value> ::__is_signed; 
# 76
template< class _Value> const int 
# 77
__numeric_traits_integer< _Value> ::__digits; 
# 99
template< class _Value> 
# 100
struct __numeric_traits_floating { 
# 103
static const int __max_digits10 = ((2) + ((((std::__are_same< _Value, float> ::__value) ? 24 : ((std::__are_same< _Value, double> ::__value) ? 53 : 64)) * 643L) / (2136))); 
# 106
static const bool __is_signed = true; 
# 107
static const int __digits10 = ((std::__are_same< _Value, float> ::__value) ? 6 : ((std::__are_same< _Value, double> ::__value) ? 15 : 18)); 
# 108
static const int __max_exponent10 = ((std::__are_same< _Value, float> ::__value) ? 38 : ((std::__are_same< _Value, double> ::__value) ? 308 : 4932)); 
# 109
}; 
# 111
template< class _Value> const int 
# 112
__numeric_traits_floating< _Value> ::__max_digits10; 
# 114
template< class _Value> const bool 
# 115
__numeric_traits_floating< _Value> ::__is_signed; 
# 117
template< class _Value> const int 
# 118
__numeric_traits_floating< _Value> ::__digits10; 
# 120
template< class _Value> const int 
# 121
__numeric_traits_floating< _Value> ::__max_exponent10; 
# 123
template< class _Value> 
# 124
struct __numeric_traits : public __conditional_type< std::__is_integer< _Value> ::__value, __numeric_traits_integer< _Value> , __numeric_traits_floating< _Value> > ::__type { 
# 128
}; 
# 131
}
# 70 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 89
struct input_iterator_tag { }; 
# 92
struct output_iterator_tag { }; 
# 95
struct forward_iterator_tag : public input_iterator_tag { }; 
# 99
struct bidirectional_iterator_tag : public forward_iterator_tag { }; 
# 103
struct random_access_iterator_tag : public bidirectional_iterator_tag { }; 
# 116
template< class _Category, class _Tp, class _Distance = ptrdiff_t, class 
# 117
_Pointer = _Tp *, class _Reference = _Tp &> 
# 118
struct iterator { 
# 121
typedef _Category iterator_category; 
# 123
typedef _Tp value_type; 
# 125
typedef _Distance difference_type; 
# 127
typedef _Pointer pointer; 
# 129
typedef _Reference reference; 
# 130
}; 
# 165
template< class _Iterator> 
# 166
struct iterator_traits { 
# 168
typedef typename _Iterator::iterator_category iterator_category; 
# 169
typedef typename _Iterator::value_type value_type; 
# 170
typedef typename _Iterator::difference_type difference_type; 
# 171
typedef typename _Iterator::pointer pointer; 
# 172
typedef typename _Iterator::reference reference; 
# 173
}; 
# 177
template< class _Tp> 
# 178
struct iterator_traits< _Tp *>  { 
# 180
typedef random_access_iterator_tag iterator_category; 
# 181
typedef _Tp value_type; 
# 182
typedef ptrdiff_t difference_type; 
# 183
typedef _Tp *pointer; 
# 184
typedef _Tp &reference; 
# 185
}; 
# 188
template< class _Tp> 
# 189
struct iterator_traits< const _Tp *>  { 
# 191
typedef random_access_iterator_tag iterator_category; 
# 192
typedef _Tp value_type; 
# 193
typedef ptrdiff_t difference_type; 
# 194
typedef const _Tp *pointer; 
# 195
typedef const _Tp &reference; 
# 196
}; 
# 202
template< class _Iter> inline typename iterator_traits< _Iter> ::iterator_category 
# 204
__iterator_category(const _Iter &) 
# 205
{ return typename iterator_traits< _Iter> ::iterator_category(); } 
# 211
template< class _Iterator, bool _HasBase> 
# 212
struct _Iter_base { 
# 214
typedef _Iterator iterator_type; 
# 215
static iterator_type _S_base(_Iterator __it) 
# 216
{ return __it; } 
# 217
}; 
# 219
template< class _Iterator> 
# 220
struct _Iter_base< _Iterator, true>  { 
# 222
typedef typename _Iterator::iterator_type iterator_type; 
# 223
static iterator_type _S_base(_Iterator __it) 
# 224
{ return (__it.base()); } 
# 225
}; 
# 236
}
# 46 "/usr/include/c++/5/debug/debug.h" 3
namespace std { 
# 48
namespace __debug { }
# 49
}
# 54
namespace __gnu_debug { 
# 56
using namespace std::__debug;
# 57
}
# 67 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71
template< class _InputIterator> inline typename iterator_traits< _InputIterator> ::difference_type 
# 73
__distance(_InputIterator __first, _InputIterator __last, input_iterator_tag) 
# 75
{ 
# 79
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 80
while (__first != __last) 
# 81
{ 
# 82
++__first; 
# 83
++__n; 
# 84
}  
# 85
return __n; 
# 86
} 
# 88
template< class _RandomAccessIterator> inline typename iterator_traits< _RandomAccessIterator> ::difference_type 
# 90
__distance(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag) 
# 92
{ 
# 96
return __last - __first; 
# 97
} 
# 112
template< class _InputIterator> inline typename iterator_traits< _InputIterator> ::difference_type 
# 114
distance(_InputIterator __first, _InputIterator __last) 
# 115
{ 
# 117
return std::__distance(__first, __last, std::__iterator_category(__first)); 
# 119
} 
# 121
template< class _InputIterator, class _Distance> inline void 
# 123
__advance(_InputIterator &__i, _Distance __n, input_iterator_tag) 
# 124
{ 
# 127
; 
# 128
while (__n--) { 
# 129
++__i; }  
# 130
} 
# 132
template< class _BidirectionalIterator, class _Distance> inline void 
# 134
__advance(_BidirectionalIterator &__i, _Distance __n, bidirectional_iterator_tag) 
# 136
{ 
# 140
if (__n > 0) { 
# 141
while (__n--) { 
# 142
++__i; }  } else { 
# 144
while (__n++) { 
# 145
--__i; }  }  
# 146
} 
# 148
template< class _RandomAccessIterator, class _Distance> inline void 
# 150
__advance(_RandomAccessIterator &__i, _Distance __n, random_access_iterator_tag) 
# 152
{ 
# 156
__i += __n; 
# 157
} 
# 171
template< class _InputIterator, class _Distance> inline void 
# 173
advance(_InputIterator &__i, _Distance __n) 
# 174
{ 
# 176
typename iterator_traits< _InputIterator> ::difference_type __d = __n; 
# 177
std::__advance(__i, __d, std::__iterator_category(__i)); 
# 178
} 
# 203
}
# 68 "/usr/include/c++/5/bits/stl_iterator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 96
template< class _Iterator> 
# 97
class reverse_iterator : public iterator< typename iterator_traits< _Iterator> ::iterator_category, typename iterator_traits< _Iterator> ::value_type, typename iterator_traits< _Iterator> ::difference_type, typename iterator_traits< _Iterator> ::pointer, typename iterator_traits< _Iterator> ::reference>  { 
# 105
protected: _Iterator current; 
# 107
typedef iterator_traits< _Iterator>  __traits_type; 
# 110
public: typedef _Iterator iterator_type; 
# 111
typedef typename iterator_traits< _Iterator> ::difference_type difference_type; 
# 112
typedef typename iterator_traits< _Iterator> ::pointer pointer; 
# 113
typedef typename iterator_traits< _Iterator> ::reference reference; 
# 121
reverse_iterator() : current() { } 
# 127
explicit reverse_iterator(iterator_type __x) : current(__x) { } 
# 132
reverse_iterator(const reverse_iterator &__x) : current(__x.current) 
# 133
{ } 
# 139
template< class _Iter> 
# 140
reverse_iterator(const ::std::reverse_iterator< _Iter>  &__x) : current((__x.base())) 
# 141
{ } 
# 147
iterator_type base() const 
# 148
{ return current; } 
# 161
reference operator*() const 
# 162
{ 
# 163
_Iterator __tmp = current; 
# 164
return *(--__tmp); 
# 165
} 
# 173
pointer operator->() const 
# 174
{ return &operator*(); } 
# 182
reverse_iterator &operator++() 
# 183
{ 
# 184
--(current); 
# 185
return *this; 
# 186
} 
# 194
reverse_iterator operator++(int) 
# 195
{ 
# 196
reverse_iterator __tmp = *this; 
# 197
--(current); 
# 198
return __tmp; 
# 199
} 
# 207
reverse_iterator &operator--() 
# 208
{ 
# 209
++(current); 
# 210
return *this; 
# 211
} 
# 219
reverse_iterator operator--(int) 
# 220
{ 
# 221
reverse_iterator __tmp = *this; 
# 222
++(current); 
# 223
return __tmp; 
# 224
} 
# 232
reverse_iterator operator+(difference_type __n) const 
# 233
{ return ((reverse_iterator)((current) - __n)); } 
# 242
reverse_iterator &operator+=(difference_type __n) 
# 243
{ 
# 244
(current) -= __n; 
# 245
return *this; 
# 246
} 
# 254
reverse_iterator operator-(difference_type __n) const 
# 255
{ return ((reverse_iterator)((current) + __n)); } 
# 264
reverse_iterator &operator-=(difference_type __n) 
# 265
{ 
# 266
(current) += __n; 
# 267
return *this; 
# 268
} 
# 276
reference operator[](difference_type __n) const 
# 277
{ return *((*this) + __n); } 
# 278
}; 
# 290
template< class _Iterator> inline bool 
# 292
operator==(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 293
__y) 
# 294
{ return (__x.base()) == (__y.base()); } 
# 296
template< class _Iterator> inline bool 
# 298
operator<(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 299
__y) 
# 300
{ return (__y.base()) < (__x.base()); } 
# 302
template< class _Iterator> inline bool 
# 304
operator!=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 305
__y) 
# 306
{ return !(__x == __y); } 
# 308
template< class _Iterator> inline bool 
# 310
operator>(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 311
__y) 
# 312
{ return __y < __x; } 
# 314
template< class _Iterator> inline bool 
# 316
operator<=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 317
__y) 
# 318
{ return !(__y < __x); } 
# 320
template< class _Iterator> inline bool 
# 322
operator>=(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 323
__y) 
# 324
{ return !(__x < __y); } 
# 326
template< class _Iterator> inline typename reverse_iterator< _Iterator> ::difference_type 
# 328
operator-(const reverse_iterator< _Iterator>  &__x, const reverse_iterator< _Iterator>  &
# 329
__y) 
# 330
{ return (__y.base()) - (__x.base()); } 
# 332
template< class _Iterator> inline reverse_iterator< _Iterator>  
# 334
operator+(typename reverse_iterator< _Iterator> ::difference_type __n, const reverse_iterator< _Iterator>  &
# 335
__x) 
# 336
{ return ((reverse_iterator< _Iterator> )((__x.base()) - __n)); } 
# 340
template< class _IteratorL, class _IteratorR> inline bool 
# 342
operator==(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 343
__y) 
# 344
{ return (__x.base()) == (__y.base()); } 
# 346
template< class _IteratorL, class _IteratorR> inline bool 
# 348
operator<(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 349
__y) 
# 350
{ return (__y.base()) < (__x.base()); } 
# 352
template< class _IteratorL, class _IteratorR> inline bool 
# 354
operator!=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 355
__y) 
# 356
{ return !(__x == __y); } 
# 358
template< class _IteratorL, class _IteratorR> inline bool 
# 360
operator>(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 361
__y) 
# 362
{ return __y < __x; } 
# 364
template< class _IteratorL, class _IteratorR> inline bool 
# 366
operator<=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 367
__y) 
# 368
{ return !(__y < __x); } 
# 370
template< class _IteratorL, class _IteratorR> inline bool 
# 372
operator>=(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 373
__y) 
# 374
{ return !(__x < __y); } 
# 376
template< class _IteratorL, class _IteratorR> inline typename reverse_iterator< _IteratorL> ::difference_type 
# 385
operator-(const reverse_iterator< _IteratorL>  &__x, const reverse_iterator< _IteratorR>  &
# 386
__y) 
# 388
{ return (__y.base()) - (__x.base()); } 
# 414
template< class _Container> 
# 415
class back_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 419
protected: _Container *container; 
# 423
public: typedef _Container container_type; 
# 427
explicit back_insert_iterator(_Container &__x) : container((&__x)) { } 
# 442
back_insert_iterator &operator=(typename _Container::const_reference __value) 
# 443
{ 
# 444
((container)->push_back(__value)); 
# 445
return *this; 
# 446
} 
# 465
back_insert_iterator &operator*() 
# 466
{ return *this; } 
# 470
back_insert_iterator &operator++() 
# 471
{ return *this; } 
# 475
back_insert_iterator operator++(int) 
# 476
{ return *this; } 
# 477
}; 
# 490
template< class _Container> inline back_insert_iterator< _Container>  
# 492
back_inserter(_Container &__x) 
# 493
{ return ((back_insert_iterator< _Container> )(__x)); } 
# 505
template< class _Container> 
# 506
class front_insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 510
protected: _Container *container; 
# 514
public: typedef _Container container_type; 
# 517
explicit front_insert_iterator(_Container &__x) : container((&__x)) { } 
# 532
front_insert_iterator &operator=(typename _Container::const_reference __value) 
# 533
{ 
# 534
((container)->push_front(__value)); 
# 535
return *this; 
# 536
} 
# 555
front_insert_iterator &operator*() 
# 556
{ return *this; } 
# 560
front_insert_iterator &operator++() 
# 561
{ return *this; } 
# 565
front_insert_iterator operator++(int) 
# 566
{ return *this; } 
# 567
}; 
# 580
template< class _Container> inline front_insert_iterator< _Container>  
# 582
front_inserter(_Container &__x) 
# 583
{ return ((front_insert_iterator< _Container> )(__x)); } 
# 599
template< class _Container> 
# 600
class insert_iterator : public iterator< output_iterator_tag, void, void, void, void>  { 
# 604
protected: _Container *container; 
# 605
typename _Container::iterator iter; 
# 609
public: typedef _Container container_type; 
# 615
insert_iterator(_Container &__x, typename _Container::iterator __i) : container((&__x)), iter(__i) 
# 616
{ } 
# 643
insert_iterator &operator=(typename _Container::const_reference __value) 
# 644
{ 
# 645
(iter) = ((container)->insert(iter, __value)); 
# 646
++(iter); 
# 647
return *this; 
# 648
} 
# 669
insert_iterator &operator*() 
# 670
{ return *this; } 
# 674
insert_iterator &operator++() 
# 675
{ return *this; } 
# 679
insert_iterator &operator++(int) 
# 680
{ return *this; } 
# 681
}; 
# 694
template< class _Container, class _Iterator> inline insert_iterator< _Container>  
# 696
inserter(_Container &__x, _Iterator __i) 
# 697
{ 
# 698
return insert_iterator< _Container> (__x, (typename _Container::iterator)__i); 
# 700
} 
# 705
}
# 707
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 718
using std::iterator_traits;
# 719
using std::iterator;
# 720
template< class _Iterator, class _Container> 
# 721
class __normal_iterator { 
# 724
protected: _Iterator _M_current; 
# 726
typedef std::iterator_traits< _Iterator>  __traits_type; 
# 729
public: typedef _Iterator iterator_type; 
# 730
typedef typename std::iterator_traits< _Iterator> ::iterator_category iterator_category; 
# 731
typedef typename std::iterator_traits< _Iterator> ::value_type value_type; 
# 732
typedef typename std::iterator_traits< _Iterator> ::difference_type difference_type; 
# 733
typedef typename std::iterator_traits< _Iterator> ::reference reference; 
# 734
typedef typename std::iterator_traits< _Iterator> ::pointer pointer; 
# 736
__normal_iterator() : _M_current(_Iterator()) 
# 737
{ } 
# 740
explicit __normal_iterator(const _Iterator &__i) : _M_current(__i) 
# 741
{ } 
# 744
template< class _Iter> 
# 745
__normal_iterator(const __gnu_cxx::__normal_iterator< _Iter, typename __enable_if< std::__are_same< _Iter, typename _Container::pointer> ::__value, _Container> ::__type>  &
# 748
__i) : _M_current((__i.base())) 
# 749
{ } 
# 753
reference operator*() const 
# 754
{ return *(_M_current); } 
# 757
pointer operator->() const 
# 758
{ return _M_current; } 
# 761
__normal_iterator &operator++() 
# 762
{ 
# 763
++(_M_current); 
# 764
return *this; 
# 765
} 
# 768
__normal_iterator operator++(int) 
# 769
{ return ((__normal_iterator)((_M_current)++)); } 
# 773
__normal_iterator &operator--() 
# 774
{ 
# 775
--(_M_current); 
# 776
return *this; 
# 777
} 
# 780
__normal_iterator operator--(int) 
# 781
{ return ((__normal_iterator)((_M_current)--)); } 
# 785
reference operator[](difference_type __n) const 
# 786
{ return (_M_current)[__n]; } 
# 789
__normal_iterator &operator+=(difference_type __n) 
# 790
{ (_M_current) += __n; return *this; } 
# 793
__normal_iterator operator+(difference_type __n) const 
# 794
{ return ((__normal_iterator)((_M_current) + __n)); } 
# 797
__normal_iterator &operator-=(difference_type __n) 
# 798
{ (_M_current) -= __n; return *this; } 
# 801
__normal_iterator operator-(difference_type __n) const 
# 802
{ return ((__normal_iterator)((_M_current) - __n)); } 
# 805
const _Iterator &base() const 
# 806
{ return _M_current; } 
# 807
}; 
# 818
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 820
operator==(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 821
__rhs) 
# 823
{ return (__lhs.base()) == (__rhs.base()); } 
# 825
template< class _Iterator, class _Container> inline bool 
# 827
operator==(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 828
__rhs) 
# 830
{ return (__lhs.base()) == (__rhs.base()); } 
# 832
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 834
operator!=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 835
__rhs) 
# 837
{ return (__lhs.base()) != (__rhs.base()); } 
# 839
template< class _Iterator, class _Container> inline bool 
# 841
operator!=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 842
__rhs) 
# 844
{ return (__lhs.base()) != (__rhs.base()); } 
# 847
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 849
operator<(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 850
__rhs) 
# 852
{ return (__lhs.base()) < (__rhs.base()); } 
# 854
template< class _Iterator, class _Container> inline bool 
# 856
operator<(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 857
__rhs) 
# 859
{ return (__lhs.base()) < (__rhs.base()); } 
# 861
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 863
operator>(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 864
__rhs) 
# 866
{ return (__lhs.base()) > (__rhs.base()); } 
# 868
template< class _Iterator, class _Container> inline bool 
# 870
operator>(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 871
__rhs) 
# 873
{ return (__lhs.base()) > (__rhs.base()); } 
# 875
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 877
operator<=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 878
__rhs) 
# 880
{ return (__lhs.base()) <= (__rhs.base()); } 
# 882
template< class _Iterator, class _Container> inline bool 
# 884
operator<=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 885
__rhs) 
# 887
{ return (__lhs.base()) <= (__rhs.base()); } 
# 889
template< class _IteratorL, class _IteratorR, class _Container> inline bool 
# 891
operator>=(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 892
__rhs) 
# 894
{ return (__lhs.base()) >= (__rhs.base()); } 
# 896
template< class _Iterator, class _Container> inline bool 
# 898
operator>=(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 899
__rhs) 
# 901
{ return (__lhs.base()) >= (__rhs.base()); } 
# 907
template< class _IteratorL, class _IteratorR, class _Container> inline typename __normal_iterator< _IteratorL, _Container> ::difference_type 
# 916
operator-(const __normal_iterator< _IteratorL, _Container>  &__lhs, const __normal_iterator< _IteratorR, _Container>  &
# 917
__rhs) 
# 919
{ return (__lhs.base()) - (__rhs.base()); } 
# 921
template< class _Iterator, class _Container> inline typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 923
operator-(const __normal_iterator< _Iterator, _Container>  &__lhs, const __normal_iterator< _Iterator, _Container>  &
# 924
__rhs) 
# 926
{ return (__lhs.base()) - (__rhs.base()); } 
# 928
template< class _Iterator, class _Container> inline __normal_iterator< _Iterator, _Container>  
# 930
operator+(typename __normal_iterator< _Iterator, _Container> ::difference_type 
# 931
__n, const __normal_iterator< _Iterator, _Container>  &__i) 
# 933
{ return ((__normal_iterator< _Iterator, _Container> )((__i.base()) + __n)); } 
# 936
}
# 33 "/usr/include/c++/5/bits/predefined_ops.h" 3
namespace __gnu_cxx { 
# 35
namespace __ops { 
# 37
struct _Iter_less_iter { 
# 39
template< class _Iterator1, class _Iterator2> bool 
# 42
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 43
{ return (*__it1) < (*__it2); } 
# 44
}; 
# 47
inline _Iter_less_iter __iter_less_iter() 
# 48
{ return _Iter_less_iter(); } 
# 50
struct _Iter_less_val { 
# 52
template< class _Iterator, class _Value> bool 
# 54
operator()(_Iterator __it, _Value &__val) const 
# 55
{ return (*__it) < __val; } 
# 56
}; 
# 59
inline _Iter_less_val __iter_less_val() 
# 60
{ return _Iter_less_val(); } 
# 63
inline _Iter_less_val __iter_comp_val(_Iter_less_iter) 
# 64
{ return _Iter_less_val(); } 
# 66
struct _Val_less_iter { 
# 68
template< class _Value, class _Iterator> bool 
# 70
operator()(_Value &__val, _Iterator __it) const 
# 71
{ return __val < (*__it); } 
# 72
}; 
# 75
inline _Val_less_iter __val_less_iter() 
# 76
{ return _Val_less_iter(); } 
# 79
inline _Val_less_iter __val_comp_iter(_Iter_less_iter) 
# 80
{ return _Val_less_iter(); } 
# 82
struct _Iter_equal_to_iter { 
# 84
template< class _Iterator1, class _Iterator2> bool 
# 86
operator()(_Iterator1 __it1, _Iterator2 __it2) const 
# 87
{ return (*__it1) == (*__it2); } 
# 88
}; 
# 91
inline _Iter_equal_to_iter __iter_equal_to_iter() 
# 92
{ return _Iter_equal_to_iter(); } 
# 94
struct _Iter_equal_to_val { 
# 96
template< class _Iterator, class _Value> bool 
# 98
operator()(_Iterator __it, _Value &__val) const 
# 99
{ return (*__it) == __val; } 
# 100
}; 
# 103
inline _Iter_equal_to_val __iter_equal_to_val() 
# 104
{ return _Iter_equal_to_val(); } 
# 107
inline _Iter_equal_to_val __iter_comp_val(_Iter_equal_to_iter) 
# 108
{ return _Iter_equal_to_val(); } 
# 110
template< class _Compare> 
# 111
struct _Iter_comp_iter { 
# 113
_Compare _M_comp; 
# 115
_Iter_comp_iter(_Compare __comp) : _M_comp(__comp) 
# 117
{ } 
# 119
template< class _Iterator1, class _Iterator2> bool 
# 122
operator()(_Iterator1 __it1, _Iterator2 __it2) 
# 123
{ return (bool)(_M_comp)(*__it1, *__it2); } 
# 124
}; 
# 126
template< class _Compare> inline _Iter_comp_iter< _Compare>  
# 129
__iter_comp_iter(_Compare __comp) 
# 130
{ return ((_Iter_comp_iter< _Compare> )(__comp)); } 
# 132
template< class _Compare> 
# 133
struct _Iter_comp_val { 
# 135
_Compare _M_comp; 
# 137
_Iter_comp_val(_Compare __comp) : _M_comp(__comp) 
# 139
{ } 
# 141
template< class _Iterator, class _Value> bool 
# 143
operator()(_Iterator __it, _Value &__val) 
# 144
{ return (bool)(_M_comp)(*__it, __val); } 
# 145
}; 
# 147
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 149
__iter_comp_val(_Compare __comp) 
# 150
{ return ((_Iter_comp_val< _Compare> )(__comp)); } 
# 152
template< class _Compare> inline _Iter_comp_val< _Compare>  
# 154
__iter_comp_val(_Iter_comp_iter< _Compare>  __comp) 
# 155
{ return ((_Iter_comp_val< _Compare> )((__comp._M_comp))); } 
# 157
template< class _Compare> 
# 158
struct _Val_comp_iter { 
# 160
_Compare _M_comp; 
# 162
_Val_comp_iter(_Compare __comp) : _M_comp(__comp) 
# 164
{ } 
# 166
template< class _Value, class _Iterator> bool 
# 168
operator()(_Value &__val, _Iterator __it) 
# 169
{ return (bool)(_M_comp)(__val, *__it); } 
# 170
}; 
# 172
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 174
__val_comp_iter(_Compare __comp) 
# 175
{ return ((_Val_comp_iter< _Compare> )(__comp)); } 
# 177
template< class _Compare> inline _Val_comp_iter< _Compare>  
# 179
__val_comp_iter(_Iter_comp_iter< _Compare>  __comp) 
# 180
{ return ((_Val_comp_iter< _Compare> )((__comp._M_comp))); } 
# 182
template< class _Value> 
# 183
struct _Iter_equals_val { 
# 185
_Value &_M_value; 
# 187
_Iter_equals_val(_Value &__value) : _M_value(__value) 
# 189
{ } 
# 191
template< class _Iterator> bool 
# 193
operator()(_Iterator __it) 
# 194
{ return (*__it) == (_M_value); } 
# 195
}; 
# 197
template< class _Value> inline _Iter_equals_val< _Value>  
# 199
__iter_equals_val(_Value &__val) 
# 200
{ return ((_Iter_equals_val< _Value> )(__val)); } 
# 202
template< class _Iterator1> 
# 203
struct _Iter_equals_iter { 
# 205
typename std::iterator_traits< _Iterator1> ::reference _M_ref; 
# 207
_Iter_equals_iter(_Iterator1 __it1) : _M_ref(*__it1) 
# 209
{ } 
# 211
template< class _Iterator2> bool 
# 213
operator()(_Iterator2 __it2) 
# 214
{ return (*__it2) == (_M_ref); } 
# 215
}; 
# 217
template< class _Iterator> inline _Iter_equals_iter< _Iterator>  
# 219
__iter_comp_iter(_Iter_equal_to_iter, _Iterator __it) 
# 220
{ return ((_Iter_equals_iter< _Iterator> )(__it)); } 
# 222
template< class _Predicate> 
# 223
struct _Iter_pred { 
# 225
_Predicate _M_pred; 
# 227
_Iter_pred(_Predicate __pred) : _M_pred(__pred) 
# 229
{ } 
# 231
template< class _Iterator> bool 
# 233
operator()(_Iterator __it) 
# 234
{ return (bool)(_M_pred)(*__it); } 
# 235
}; 
# 237
template< class _Predicate> inline _Iter_pred< _Predicate>  
# 239
__pred_iter(_Predicate __pred) 
# 240
{ return ((_Iter_pred< _Predicate> )(__pred)); } 
# 242
template< class _Compare, class _Value> 
# 243
struct _Iter_comp_to_val { 
# 245
_Compare _M_comp; 
# 246
_Value &_M_value; 
# 248
_Iter_comp_to_val(_Compare __comp, _Value &__value) : _M_comp(__comp), _M_value(__value) 
# 250
{ } 
# 252
template< class _Iterator> bool 
# 254
operator()(_Iterator __it) 
# 255
{ return (bool)(_M_comp)(*__it, _M_value); } 
# 256
}; 
# 258
template< class _Compare, class _Value> _Iter_comp_to_val< _Compare, _Value>  
# 260
__iter_comp_val(_Compare __comp, _Value &__val) 
# 261
{ return _Iter_comp_to_val< _Compare, _Value> (__comp, __val); } 
# 263
template< class _Compare, class _Iterator1> 
# 264
struct _Iter_comp_to_iter { 
# 266
_Compare _M_comp; 
# 267
typename std::iterator_traits< _Iterator1> ::reference _M_ref; 
# 269
_Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1) : _M_comp(__comp), _M_ref(*__it1) 
# 271
{ } 
# 273
template< class _Iterator2> bool 
# 275
operator()(_Iterator2 __it2) 
# 276
{ return (bool)(_M_comp)(*__it2, _M_ref); } 
# 277
}; 
# 279
template< class _Compare, class _Iterator> inline _Iter_comp_to_iter< _Compare, _Iterator>  
# 281
__iter_comp_iter(_Iter_comp_iter< _Compare>  __comp, _Iterator __it) 
# 282
{ return _Iter_comp_to_iter< _Compare, _Iterator> ((__comp._M_comp), __it); } 
# 284
template< class _Predicate> 
# 285
struct _Iter_negate { 
# 287
_Predicate _M_pred; 
# 289
_Iter_negate(_Predicate __pred) : _M_pred(__pred) 
# 291
{ } 
# 293
template< class _Iterator> bool 
# 295
operator()(_Iterator __it) 
# 296
{ return !((bool)(_M_pred)(*__it)); } 
# 297
}; 
# 299
template< class _Predicate> inline _Iter_negate< _Predicate>  
# 301
__negate(_Iter_pred< _Predicate>  __pred) 
# 302
{ return ((_Iter_negate< _Predicate> )((__pred._M_pred))); } 
# 304
}
# 305
}
# 73 "/usr/include/c++/5/bits/stl_algobase.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 81
template< bool _BoolType> 
# 82
struct __iter_swap { 
# 84
template< class _ForwardIterator1, class _ForwardIterator2> static void 
# 86
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 87
{ 
# 89
typedef typename iterator_traits< _ForwardIterator1> ::value_type _ValueType1; 
# 90
_ValueType1 __tmp = *__a; 
# 91
(*__a) = (*__b); 
# 92
(*__b) = __tmp; 
# 93
} 
# 94
}; 
# 97
template<> struct __iter_swap< true>  { 
# 99
template< class _ForwardIterator1, class _ForwardIterator2> static void 
# 101
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 102
{ 
# 103
swap(*__a, *__b); 
# 104
} 
# 105
}; 
# 118
template< class _ForwardIterator1, class _ForwardIterator2> inline void 
# 120
iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b) 
# 121
{ 
# 130
typedef typename iterator_traits< _ForwardIterator1> ::value_type _ValueType1; 
# 132
typedef typename iterator_traits< _ForwardIterator2> ::value_type _ValueType2; 
# 140
typedef typename iterator_traits< _ForwardIterator1> ::reference _ReferenceType1; 
# 142
typedef typename iterator_traits< _ForwardIterator2> ::reference _ReferenceType2; 
# 143
std::__iter_swap< __are_same< typename iterator_traits< _ForwardIterator1> ::value_type, typename iterator_traits< _ForwardIterator2> ::value_type> ::__value && __are_same< typename iterator_traits< _ForwardIterator1> ::value_type &, typename iterator_traits< _ForwardIterator1> ::reference> ::__value && __are_same< typename iterator_traits< _ForwardIterator2> ::value_type &, typename iterator_traits< _ForwardIterator2> ::reference> ::__value> ::iter_swap(__a, __b); 
# 150
} 
# 164
template< class _ForwardIterator1, class _ForwardIterator2> _ForwardIterator2 
# 166
swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 167
__first2) 
# 168
{ 
# 174
; 
# 176
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 177
std::iter_swap(__first1, __first2); }  
# 178
return __first2; 
# 179
} 
# 192
template< class _Tp> inline const _Tp &
# 195
min(const _Tp &__a, const _Tp &__b) 
# 196
{ 
# 200
if (__b < __a) { 
# 201
return __b; }  
# 202
return __a; 
# 203
} 
# 216
template< class _Tp> inline const _Tp &
# 219
max(const _Tp &__a, const _Tp &__b) 
# 220
{ 
# 224
if (__a < __b) { 
# 225
return __b; }  
# 226
return __a; 
# 227
} 
# 240
template< class _Tp, class _Compare> inline const _Tp &
# 243
min(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 244
{ 
# 246
if (__comp(__b, __a)) { 
# 247
return __b; }  
# 248
return __a; 
# 249
} 
# 262
template< class _Tp, class _Compare> inline const _Tp &
# 265
max(const _Tp &__a, const _Tp &__b, _Compare __comp) 
# 266
{ 
# 268
if (__comp(__a, __b)) { 
# 269
return __b; }  
# 270
return __a; 
# 271
} 
# 275
template< class _Iterator> 
# 276
struct _Niter_base : public _Iter_base< _Iterator, __is_normal_iterator< _Iterator> ::__value>  { 
# 278
}; 
# 280
template< class _Iterator> inline typename _Niter_base< _Iterator> ::iterator_type 
# 282
__niter_base(_Iterator __it) 
# 283
{ return std::_Niter_base< _Iterator> ::_S_base(__it); } 
# 286
template< class _Iterator> 
# 287
struct _Miter_base : public _Iter_base< _Iterator, __is_move_iterator< _Iterator> ::__value>  { 
# 289
}; 
# 291
template< class _Iterator> inline typename _Miter_base< _Iterator> ::iterator_type 
# 293
__miter_base(_Iterator __it) 
# 294
{ return std::_Miter_base< _Iterator> ::_S_base(__it); } 
# 302
template< bool , bool , class > 
# 303
struct __copy_move { 
# 305
template< class _II, class _OI> static _OI 
# 307
__copy_m(_II __first, _II __last, _OI __result) 
# 308
{ 
# 309
for (; __first != __last; (++__result), (++__first)) { 
# 310
(*__result) = (*__first); }  
# 311
return __result; 
# 312
} 
# 313
}; 
# 331
template<> struct __copy_move< false, false, random_access_iterator_tag>  { 
# 333
template< class _II, class _OI> static _OI 
# 335
__copy_m(_II __first, _II __last, _OI __result) 
# 336
{ 
# 337
typedef typename iterator_traits< _II> ::difference_type _Distance; 
# 338
for (_Distance __n = __last - __first; __n > 0; --__n) 
# 339
{ 
# 340
(*__result) = (*__first); 
# 341
++__first; 
# 342
++__result; 
# 343
}  
# 344
return __result; 
# 345
} 
# 346
}; 
# 368
template< bool _IsMove> 
# 369
struct __copy_move< _IsMove, true, random_access_iterator_tag>  { 
# 371
template< class _Tp> static _Tp *
# 373
__copy_m(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 374
{ 
# 382
const ptrdiff_t _Num = __last - __first; 
# 383
if (_Num) { 
# 384
__builtin_memmove(__result, __first, sizeof(_Tp) * _Num); }  
# 385
return __result + _Num; 
# 386
} 
# 387
}; 
# 389
template< bool _IsMove, class _II, class _OI> inline _OI 
# 391
__copy_move_a(_II __first, _II __last, _OI __result) 
# 392
{ 
# 393
typedef typename iterator_traits< _II> ::value_type _ValueTypeI; 
# 394
typedef typename iterator_traits< _OI> ::value_type _ValueTypeO; 
# 395
typedef typename iterator_traits< _II> ::iterator_category _Category; 
# 396
const bool __simple = (__is_trivial(_ValueTypeI) && __is_pointer< _II> ::__value && __is_pointer< _OI> ::__value && __are_same< typename iterator_traits< _II> ::value_type, typename iterator_traits< _OI> ::value_type> ::__value); 
# 401
return std::__copy_move< _IsMove, __simple, typename iterator_traits< _II> ::iterator_category> ::__copy_m(__first, __last, __result); 
# 403
} 
# 407
template< class _CharT> struct char_traits; 
# 410
template< class _CharT, class _Traits> class istreambuf_iterator; 
# 413
template< class _CharT, class _Traits> class ostreambuf_iterator; 
# 416
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(_CharT *, _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 422
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, ostreambuf_iterator< _CharT, char_traits< _CharT> > > ::__type __copy_move_a2(const _CharT *, const _CharT *, ostreambuf_iterator< _CharT, char_traits< _CharT> > ); 
# 428
template< bool _IsMove, class _CharT> typename __gnu_cxx::__enable_if< __is_char< _CharT> ::__value, _CharT *> ::__type __copy_move_a2(istreambuf_iterator< _CharT, char_traits< _CharT> > , istreambuf_iterator< _CharT, char_traits< _CharT> > , _CharT *); 
# 434
template< bool _IsMove, class _II, class _OI> inline _OI 
# 436
__copy_move_a2(_II __first, _II __last, _OI __result) 
# 437
{ 
# 438
return (_OI)std::__copy_move_a< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)); 
# 441
} 
# 460
template< class _II, class _OI> inline _OI 
# 462
copy(_II __first, _II __last, _OI __result) 
# 463
{ 
# 468
; 
# 470
return std::__copy_move_a2< __is_move_iterator< _II> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 473
} 
# 512
template< bool , bool , class > 
# 513
struct __copy_move_backward { 
# 515
template< class _BI1, class _BI2> static _BI2 
# 517
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 518
{ 
# 519
while (__first != __last) { 
# 520
(*(--__result)) = (*(--__last)); }  
# 521
return __result; 
# 522
} 
# 523
}; 
# 541
template<> struct __copy_move_backward< false, false, random_access_iterator_tag>  { 
# 543
template< class _BI1, class _BI2> static _BI2 
# 545
__copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result) 
# 546
{ 
# 547
typename iterator_traits< _BI1> ::difference_type __n; 
# 548
for (__n = (__last - __first); __n > 0; --__n) { 
# 549
(*(--__result)) = (*(--__last)); }  
# 550
return __result; 
# 551
} 
# 552
}; 
# 570
template< bool _IsMove> 
# 571
struct __copy_move_backward< _IsMove, true, random_access_iterator_tag>  { 
# 573
template< class _Tp> static _Tp *
# 575
__copy_move_b(const _Tp *__first, const _Tp *__last, _Tp *__result) 
# 576
{ 
# 584
const ptrdiff_t _Num = __last - __first; 
# 585
if (_Num) { 
# 586
__builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num); }  
# 587
return __result - _Num; 
# 588
} 
# 589
}; 
# 591
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 593
__copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result) 
# 594
{ 
# 595
typedef typename iterator_traits< _BI1> ::value_type _ValueType1; 
# 596
typedef typename iterator_traits< _BI2> ::value_type _ValueType2; 
# 597
typedef typename iterator_traits< _BI1> ::iterator_category _Category; 
# 598
const bool __simple = (__is_trivial(_ValueType1) && __is_pointer< _BI1> ::__value && __is_pointer< _BI2> ::__value && __are_same< typename iterator_traits< _BI1> ::value_type, typename iterator_traits< _BI2> ::value_type> ::__value); 
# 603
return std::__copy_move_backward< _IsMove, __simple, typename iterator_traits< _BI1> ::iterator_category> ::__copy_move_b(__first, __last, __result); 
# 607
} 
# 609
template< bool _IsMove, class _BI1, class _BI2> inline _BI2 
# 611
__copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result) 
# 612
{ 
# 613
return (_BI2)std::__copy_move_backward_a< _IsMove> (std::__niter_base(__first), std::__niter_base(__last), std::__niter_base(__result)); 
# 616
} 
# 636
template< class _BI1, class _BI2> inline _BI2 
# 638
copy_backward(_BI1 __first, _BI1 __last, _BI2 __result) 
# 639
{ 
# 646
; 
# 648
return std::__copy_move_backward_a2< __is_move_iterator< _BI1> ::__value> (std::__miter_base(__first), std::__miter_base(__last), __result); 
# 651
} 
# 694
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, void> ::__type 
# 697
__fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 698
__value) 
# 699
{ 
# 700
for (; __first != __last; ++__first) { 
# 701
(*__first) = __value; }  
# 702
} 
# 704
template< class _ForwardIterator, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, void> ::__type 
# 707
__fill_a(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 708
__value) 
# 709
{ 
# 710
const _Tp __tmp = __value; 
# 711
for (; __first != __last; ++__first) { 
# 712
(*__first) = __tmp; }  
# 713
} 
# 716
template< class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, void> ::__type 
# 719
__fill_a(_Tp *__first, _Tp *__last, const _Tp &__c) 
# 720
{ 
# 721
const _Tp __tmp = __c; 
# 722
if (const size_t __len = __last - __first) { 
# 723
__builtin_memset(__first, static_cast< unsigned char>(__tmp), __len); }  
# 724
} 
# 738
template< class _ForwardIterator, class _Tp> inline void 
# 740
fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp &__value) 
# 741
{ 
# 745
; 
# 747
std::__fill_a(std::__niter_base(__first), std::__niter_base(__last), __value); 
# 749
} 
# 751
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< !__is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 754
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 755
{ 
# 756
for (__decltype((__n + 0)) __niter = __n; __niter > 0; (--__niter), (++__first)) { 
# 758
(*__first) = __value; }  
# 759
return __first; 
# 760
} 
# 762
template< class _OutputIterator, class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_scalar< _Tp> ::__value, _OutputIterator> ::__type 
# 765
__fill_n_a(_OutputIterator __first, _Size __n, const _Tp &__value) 
# 766
{ 
# 767
const _Tp __tmp = __value; 
# 768
for (__decltype((__n + 0)) __niter = __n; __niter > 0; (--__niter), (++__first)) { 
# 770
(*__first) = __tmp; }  
# 771
return __first; 
# 772
} 
# 774
template< class _Size, class _Tp> inline typename __gnu_cxx::__enable_if< __is_byte< _Tp> ::__value, _Tp *> ::__type 
# 777
__fill_n_a(_Tp *__first, _Size __n, const _Tp &__c) 
# 778
{ 
# 779
std::__fill_a(__first, __first + __n, __c); 
# 780
return __first + __n; 
# 781
} 
# 798
template< class _OI, class _Size, class _Tp> inline _OI 
# 800
fill_n(_OI __first, _Size __n, const _Tp &__value) 
# 801
{ 
# 805
return (_OI)std::__fill_n_a(std::__niter_base(__first), __n, __value); 
# 806
} 
# 808
template< bool _BoolType> 
# 809
struct __equal { 
# 811
template< class _II1, class _II2> static bool 
# 813
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 814
{ 
# 815
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 816
if (!((*__first1) == (*__first2))) { 
# 817
return false; }  }  
# 818
return true; 
# 819
} 
# 820
}; 
# 823
template<> struct __equal< true>  { 
# 825
template< class _Tp> static bool 
# 827
equal(const _Tp *__first1, const _Tp *__last1, const _Tp *__first2) 
# 828
{ 
# 829
if (const size_t __len = __last1 - __first1) { 
# 830
return !(__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len)); }  
# 831
return true; 
# 832
} 
# 833
}; 
# 835
template< class _II1, class _II2> inline bool 
# 837
__equal_aux(_II1 __first1, _II1 __last1, _II2 __first2) 
# 838
{ 
# 839
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 840
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 841
const bool __simple = ((__is_integer< typename iterator_traits< _II1> ::value_type> ::__value || __is_pointer< typename iterator_traits< _II1> ::value_type> ::__value) && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value && __are_same< typename iterator_traits< _II1> ::value_type, typename iterator_traits< _II2> ::value_type> ::__value); 
# 847
return std::__equal< __simple> ::equal(__first1, __last1, __first2); 
# 848
} 
# 850
template< class , class > 
# 851
struct __lc_rai { 
# 853
template< class _II1, class _II2> static _II1 
# 855
__newlast1(_II1, _II1 __last1, _II2, _II2) 
# 856
{ return __last1; } 
# 858
template< class _II> static bool 
# 860
__cnd2(_II __first, _II __last) 
# 861
{ return __first != __last; } 
# 862
}; 
# 865
template<> struct __lc_rai< random_access_iterator_tag, random_access_iterator_tag>  { 
# 867
template< class _RAI1, class _RAI2> static _RAI1 
# 869
__newlast1(_RAI1 __first1, _RAI1 __last1, _RAI2 
# 870
__first2, _RAI2 __last2) 
# 871
{ 
# 873
const typename iterator_traits< _RAI1> ::difference_type __diff1 = __last1 - __first1; 
# 875
const typename iterator_traits< _RAI2> ::difference_type __diff2 = __last2 - __first2; 
# 876
return (__diff2 < __diff1) ? __first1 + __diff2 : __last1; 
# 877
} 
# 879
template< class _RAI> static bool 
# 881
__cnd2(_RAI, _RAI) 
# 882
{ return true; } 
# 883
}; 
# 885
template< class _II1, class _II2, class _Compare> bool 
# 887
__lexicographical_compare_impl(_II1 __first1, _II1 __last1, _II2 
# 888
__first2, _II2 __last2, _Compare 
# 889
__comp) 
# 890
{ 
# 891
typedef typename iterator_traits< _II1> ::iterator_category _Category1; 
# 892
typedef typename iterator_traits< _II2> ::iterator_category _Category2; 
# 893
typedef __lc_rai< typename iterator_traits< _II1> ::iterator_category, typename iterator_traits< _II2> ::iterator_category>  __rai_type; 
# 895
__last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2); 
# 896
for (; (__first1 != __last1) && __rai_type::__cnd2(__first2, __last2); (++__first1), (++__first2)) 
# 898
{ 
# 899
if (__comp(__first1, __first2)) { 
# 900
return true; }  
# 901
if (__comp(__first2, __first1)) { 
# 902
return false; }  
# 903
}  
# 904
return (__first1 == __last1) && (__first2 != __last2); 
# 905
} 
# 907
template< bool _BoolType> 
# 908
struct __lexicographical_compare { 
# 910
template< class _II1, class _II2> static bool __lc(_II1, _II1, _II2, _II2); 
# 912
}; 
# 914
template< bool _BoolType> 
# 915
template< class _II1, class _II2> bool 
# 918
__lexicographical_compare< _BoolType> ::__lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2) 
# 919
{ 
# 920
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_less_iter()); 
# 923
} 
# 926
template<> struct __lexicographical_compare< true>  { 
# 928
template< class _Tp, class _Up> static bool 
# 930
__lc(const _Tp *__first1, const _Tp *__last1, const _Up *
# 931
__first2, const _Up *__last2) 
# 932
{ 
# 933
const size_t __len1 = __last1 - __first1; 
# 934
const size_t __len2 = __last2 - __first2; 
# 935
if (const size_t __len = std::min(__len1, __len2)) { 
# 936
if (int __result = __builtin_memcmp(__first1, __first2, __len)) { 
# 937
return __result < 0; }  }  
# 938
return __len1 < __len2; 
# 939
} 
# 940
}; 
# 942
template< class _II1, class _II2> inline bool 
# 944
__lexicographical_compare_aux(_II1 __first1, _II1 __last1, _II2 
# 945
__first2, _II2 __last2) 
# 946
{ 
# 947
typedef typename iterator_traits< _II1> ::value_type _ValueType1; 
# 948
typedef typename iterator_traits< _II2> ::value_type _ValueType2; 
# 949
const bool __simple = (__is_byte< typename iterator_traits< _II1> ::value_type> ::__value && __is_byte< typename iterator_traits< _II2> ::value_type> ::__value && (!__gnu_cxx::__numeric_traits< typename iterator_traits< _II1> ::value_type> ::__is_signed) && (!__gnu_cxx::__numeric_traits< typename iterator_traits< _II2> ::value_type> ::__is_signed) && __is_pointer< _II1> ::__value && __is_pointer< _II2> ::__value); 
# 956
return std::__lexicographical_compare< __simple> ::__lc(__first1, __last1, __first2, __last2); 
# 958
} 
# 960
template< class _ForwardIterator, class _Tp, class _Compare> _ForwardIterator 
# 962
__lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 963
__val, _Compare __comp) 
# 964
{ 
# 966
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 968
_DistanceType __len = std::distance(__first, __last); 
# 970
while (__len > 0) 
# 971
{ 
# 972
_DistanceType __half = __len >> 1; 
# 973
_ForwardIterator __middle = __first; 
# 974
std::advance(__middle, __half); 
# 975
if (__comp(__middle, __val)) 
# 976
{ 
# 977
__first = __middle; 
# 978
++__first; 
# 979
__len = ((__len - __half) - 1); 
# 980
} else { 
# 982
__len = __half; }  
# 983
}  
# 984
return __first; 
# 985
} 
# 998
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 1000
lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 1001
__val) 
# 1002
{ 
# 1007
; 
# 1009
return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val()); 
# 1011
} 
# 1016
inline int __lg(int __n) 
# 1017
{ return ((sizeof(int) * (8)) - (1)) - (__builtin_clz(__n)); } 
# 1020
inline unsigned __lg(unsigned __n) 
# 1021
{ return ((sizeof(int) * (8)) - (1)) - (__builtin_clz(__n)); } 
# 1024
inline long __lg(long __n) 
# 1025
{ return ((sizeof(long) * (8)) - (1)) - (__builtin_clzl(__n)); } 
# 1028
inline unsigned long __lg(unsigned long __n) 
# 1029
{ return ((sizeof(long) * (8)) - (1)) - (__builtin_clzl(__n)); } 
# 1032
inline long long __lg(long long __n) 
# 1033
{ return ((sizeof(long long) * (8)) - (1)) - (__builtin_clzll(__n)); } 
# 1036
inline unsigned long long __lg(unsigned long long __n) 
# 1037
{ return ((sizeof(long long) * (8)) - (1)) - (__builtin_clzll(__n)); } 
# 1055
template< class _II1, class _II2> inline bool 
# 1057
equal(_II1 __first1, _II1 __last1, _II2 __first2) 
# 1058
{ 
# 1065
; 
# 1067
return std::__equal_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2)); 
# 1070
} 
# 1087
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool 
# 1089
equal(_IIter1 __first1, _IIter1 __last1, _IIter2 
# 1090
__first2, _BinaryPredicate __binary_pred) 
# 1091
{ 
# 1095
; 
# 1097
for (; __first1 != __last1; (++__first1), (++__first2)) { 
# 1098
if (!((bool)__binary_pred(*__first1, *__first2))) { 
# 1099
return false; }  }  
# 1100
return true; 
# 1101
} 
# 1215
template< class _II1, class _II2> inline bool 
# 1217
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1218
__first2, _II2 __last2) 
# 1219
{ 
# 1229
; 
# 1230
; 
# 1232
return std::__lexicographical_compare_aux(std::__niter_base(__first1), std::__niter_base(__last1), std::__niter_base(__first2), std::__niter_base(__last2)); 
# 1236
} 
# 1251
template< class _II1, class _II2, class _Compare> inline bool 
# 1253
lexicographical_compare(_II1 __first1, _II1 __last1, _II2 
# 1254
__first2, _II2 __last2, _Compare __comp) 
# 1255
{ 
# 1259
; 
# 1260
; 
# 1262
return std::__lexicographical_compare_impl(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 1265
} 
# 1267
template< class _InputIterator1, class _InputIterator2, class 
# 1268
_BinaryPredicate> pair< _InputIterator1, _InputIterator2>  
# 1270
__mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1271
__first2, _BinaryPredicate __binary_pred) 
# 1272
{ 
# 1273
while ((__first1 != __last1) && __binary_pred(__first1, __first2)) 
# 1274
{ 
# 1275
++__first1; 
# 1276
++__first2; 
# 1277
}  
# 1278
return pair< _InputIterator1, _InputIterator2> (__first1, __first2); 
# 1279
} 
# 1294
template< class _InputIterator1, class _InputIterator2> inline pair< _InputIterator1, _InputIterator2>  
# 1296
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1297
__first2) 
# 1298
{ 
# 1305
; 
# 1307
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 1309
} 
# 1327
template< class _InputIterator1, class _InputIterator2, class 
# 1328
_BinaryPredicate> inline pair< _InputIterator1, _InputIterator2>  
# 1330
mismatch(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 1331
__first2, _BinaryPredicate __binary_pred) 
# 1332
{ 
# 1336
; 
# 1338
return std::__mismatch(__first1, __last1, __first2, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 1340
} 
# 1428
}
# 42 "/usr/include/c++/5/bits/algorithmfwd.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 203
template< class _FIter, class _Tp> bool binary_search(_FIter, _FIter, const _Tp &); 
# 207
template< class _FIter, class _Tp, class _Compare> bool binary_search(_FIter, _FIter, const _Tp &, _Compare); 
# 211
template< class _IIter, class _OIter> inline _OIter copy(_IIter, _IIter, _OIter); 
# 215
template< class _BIter1, class _BIter2> inline _BIter2 copy_backward(_BIter1, _BIter1, _BIter2); 
# 232
template< class _FIter, class _Tp> inline pair< _FIter, _FIter>  equal_range(_FIter, _FIter, const _Tp &); 
# 236
template< class _FIter, class _Tp, class _Compare> inline pair< _FIter, _FIter>  equal_range(_FIter, _FIter, const _Tp &, _Compare); 
# 240
template< class _FIter, class _Tp> inline void fill(_FIter, _FIter, const _Tp &); 
# 244
template< class _OIter, class _Size, class _Tp> inline _OIter fill_n(_OIter, _Size, const _Tp &); 
# 250
template< class _FIter1, class _FIter2> inline _FIter1 find_end(_FIter1, _FIter1, _FIter2, _FIter2); 
# 254
template< class _FIter1, class _FIter2, class _BinaryPredicate> inline _FIter1 find_end(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate); 
# 271
template< class _IIter1, class _IIter2> inline bool includes(_IIter1, _IIter1, _IIter2, _IIter2); 
# 275
template< class _IIter1, class _IIter2, class _Compare> inline bool includes(_IIter1, _IIter1, _IIter2, _IIter2, _Compare); 
# 279
template< class _BIter> inline void inplace_merge(_BIter, _BIter, _BIter); 
# 283
template< class _BIter, class _Compare> inline void inplace_merge(_BIter, _BIter, _BIter, _Compare); 
# 334
template< class _FIter1, class _FIter2> inline void iter_swap(_FIter1, _FIter2); 
# 338
template< class _FIter, class _Tp> inline _FIter lower_bound(_FIter, _FIter, const _Tp &); 
# 342
template< class _FIter, class _Tp, class _Compare> inline _FIter lower_bound(_FIter, _FIter, const _Tp &, _Compare); 
# 346
template< class _RAIter> inline void make_heap(_RAIter, _RAIter); 
# 350
template< class _RAIter, class _Compare> inline void make_heap(_RAIter, _RAIter, _Compare); 
# 354
template< class _Tp> inline const _Tp &max(const _Tp &, const _Tp &); 
# 359
template< class _Tp, class _Compare> inline const _Tp &max(const _Tp &, const _Tp &, _Compare); 
# 367
template< class _Tp> inline const _Tp &min(const _Tp &, const _Tp &); 
# 372
template< class _Tp, class _Compare> inline const _Tp &min(const _Tp &, const _Tp &, _Compare); 
# 433
template< class _BIter> inline bool next_permutation(_BIter, _BIter); 
# 437
template< class _BIter, class _Compare> inline bool next_permutation(_BIter, _BIter, _Compare); 
# 450
template< class _IIter, class _RAIter> inline _RAIter partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter); 
# 454
template< class _IIter, class _RAIter, class _Compare> inline _RAIter partial_sort_copy(_IIter, _IIter, _RAIter, _RAIter, _Compare); 
# 471
template< class _RAIter> inline void pop_heap(_RAIter, _RAIter); 
# 475
template< class _RAIter, class _Compare> inline void pop_heap(_RAIter, _RAIter, _Compare); 
# 479
template< class _BIter> inline bool prev_permutation(_BIter, _BIter); 
# 483
template< class _BIter, class _Compare> inline bool prev_permutation(_BIter, _BIter, _Compare); 
# 487
template< class _RAIter> inline void push_heap(_RAIter, _RAIter); 
# 491
template< class _RAIter, class _Compare> inline void push_heap(_RAIter, _RAIter, _Compare); 
# 497
template< class _FIter, class _Tp> inline _FIter remove(_FIter, _FIter, const _Tp &); 
# 501
template< class _FIter, class _Predicate> inline _FIter remove_if(_FIter, _FIter, _Predicate); 
# 505
template< class _IIter, class _OIter, class _Tp> inline _OIter remove_copy(_IIter, _IIter, _OIter, const _Tp &); 
# 509
template< class _IIter, class _OIter, class _Predicate> inline _OIter remove_copy_if(_IIter, _IIter, _OIter, _Predicate); 
# 515
template< class _IIter, class _OIter, class _Tp> inline _OIter replace_copy(_IIter, _IIter, _OIter, const _Tp &, const _Tp &); 
# 519
template< class _Iter, class _OIter, class _Predicate, class _Tp> inline _OIter replace_copy_if(_Iter, _Iter, _OIter, _Predicate, const _Tp &); 
# 525
template< class _BIter> inline void reverse(_BIter, _BIter); 
# 529
template< class _BIter, class _OIter> _OIter reverse_copy(_BIter, _BIter, _OIter); 
# 533
inline namespace _V2 { 
# 535
template< class _FIter> inline _FIter rotate(_FIter, _FIter, _FIter); 
# 538
}
# 540
template< class _FIter, class _OIter> inline _OIter rotate_copy(_FIter, _FIter, _FIter, _OIter); 
# 557
template< class _RAIter> inline void sort_heap(_RAIter, _RAIter); 
# 561
template< class _RAIter, class _Compare> inline void sort_heap(_RAIter, _RAIter, _Compare); 
# 565
template< class _BIter, class _Predicate> inline _BIter stable_partition(_BIter, _BIter, _Predicate); 
# 569
template< class _Tp> inline void swap(_Tp &, _Tp &); 
# 578
template< class _Tp, size_t _Nm> inline void swap(_Tp (& __a)[_Nm], _Tp (& __b)[_Nm]); 
# 586
template< class _FIter1, class _FIter2> _FIter2 swap_ranges(_FIter1, _FIter1, _FIter2); 
# 592
template< class _FIter> inline _FIter unique(_FIter, _FIter); 
# 596
template< class _FIter, class _BinaryPredicate> inline _FIter unique(_FIter, _FIter, _BinaryPredicate); 
# 602
template< class _FIter, class _Tp> inline _FIter upper_bound(_FIter, _FIter, const _Tp &); 
# 606
template< class _FIter, class _Tp, class _Compare> inline _FIter upper_bound(_FIter, _FIter, const _Tp &, _Compare); 
# 614
template< class _FIter> inline _FIter adjacent_find(_FIter, _FIter); 
# 618
template< class _FIter, class _BinaryPredicate> inline _FIter adjacent_find(_FIter, _FIter, _BinaryPredicate); 
# 622
template< class _IIter, class _Tp> inline typename iterator_traits< _IIter> ::difference_type count(_IIter, _IIter, const _Tp &); 
# 626
template< class _IIter, class _Predicate> inline typename iterator_traits< _IIter> ::difference_type count_if(_IIter, _IIter, _Predicate); 
# 630
template< class _IIter1, class _IIter2> inline bool equal(_IIter1, _IIter1, _IIter2); 
# 634
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline bool equal(_IIter1, _IIter1, _IIter2, _BinaryPredicate); 
# 638
template< class _IIter, class _Tp> inline _IIter find(_IIter, _IIter, const _Tp &); 
# 642
template< class _FIter1, class _FIter2> _FIter1 find_first_of(_FIter1, _FIter1, _FIter2, _FIter2); 
# 646
template< class _FIter1, class _FIter2, class _BinaryPredicate> _FIter1 find_first_of(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate); 
# 650
template< class _IIter, class _Predicate> inline _IIter find_if(_IIter, _IIter, _Predicate); 
# 654
template< class _IIter, class _Funct> _Funct for_each(_IIter, _IIter, _Funct); 
# 658
template< class _FIter, class _Generator> void generate(_FIter, _FIter, _Generator); 
# 662
template< class _OIter, class _Size, class _Generator> _OIter generate_n(_OIter, _Size, _Generator); 
# 666
template< class _IIter1, class _IIter2> inline bool lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2); 
# 670
template< class _IIter1, class _IIter2, class _Compare> inline bool lexicographical_compare(_IIter1, _IIter1, _IIter2, _IIter2, _Compare); 
# 674
template< class _FIter> inline _FIter max_element(_FIter, _FIter); 
# 679
template< class _FIter, class _Compare> inline _FIter max_element(_FIter, _FIter, _Compare); 
# 684
template< class _IIter1, class _IIter2, class _OIter> inline _OIter merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter); 
# 688
template< class _IIter1, class _IIter2, class _OIter, class 
# 689
_Compare> inline _OIter 
# 688
merge(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare); 
# 693
template< class _FIter> inline _FIter min_element(_FIter, _FIter); 
# 698
template< class _FIter, class _Compare> inline _FIter min_element(_FIter, _FIter, _Compare); 
# 703
template< class _IIter1, class _IIter2> inline pair< _IIter1, _IIter2>  mismatch(_IIter1, _IIter1, _IIter2); 
# 707
template< class _IIter1, class _IIter2, class _BinaryPredicate> inline pair< _IIter1, _IIter2>  mismatch(_IIter1, _IIter1, _IIter2, _BinaryPredicate); 
# 711
template< class _RAIter> inline void nth_element(_RAIter, _RAIter, _RAIter); 
# 715
template< class _RAIter, class _Compare> inline void nth_element(_RAIter, _RAIter, _RAIter, _Compare); 
# 719
template< class _RAIter> inline void partial_sort(_RAIter, _RAIter, _RAIter); 
# 723
template< class _RAIter, class _Compare> inline void partial_sort(_RAIter, _RAIter, _RAIter, _Compare); 
# 727
template< class _BIter, class _Predicate> inline _BIter partition(_BIter, _BIter, _Predicate); 
# 731
template< class _RAIter> inline void random_shuffle(_RAIter, _RAIter); 
# 735
template< class _RAIter, class _Generator> void random_shuffle(_RAIter, _RAIter, _Generator &); 
# 744
template< class _FIter, class _Tp> void replace(_FIter, _FIter, const _Tp &, const _Tp &); 
# 748
template< class _FIter, class _Predicate, class _Tp> void replace_if(_FIter, _FIter, _Predicate, const _Tp &); 
# 752
template< class _FIter1, class _FIter2> inline _FIter1 search(_FIter1, _FIter1, _FIter2, _FIter2); 
# 756
template< class _FIter1, class _FIter2, class _BinaryPredicate> inline _FIter1 search(_FIter1, _FIter1, _FIter2, _FIter2, _BinaryPredicate); 
# 760
template< class _FIter, class _Size, class _Tp> inline _FIter search_n(_FIter, _FIter, _Size, const _Tp &); 
# 764
template< class _FIter, class _Size, class _Tp, class 
# 765
_BinaryPredicate> inline _FIter 
# 764
search_n(_FIter, _FIter, _Size, const _Tp &, _BinaryPredicate); 
# 769
template< class _IIter1, class _IIter2, class _OIter> inline _OIter set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter); 
# 773
template< class _IIter1, class _IIter2, class _OIter, class 
# 774
_Compare> inline _OIter 
# 773
set_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare); 
# 778
template< class _IIter1, class _IIter2, class _OIter> inline _OIter set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter); 
# 782
template< class _IIter1, class _IIter2, class _OIter, class 
# 783
_Compare> inline _OIter 
# 782
set_intersection(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare); 
# 787
template< class _IIter1, class _IIter2, class _OIter> inline _OIter set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter); 
# 791
template< class _IIter1, class _IIter2, class _OIter, class 
# 792
_Compare> inline _OIter 
# 791
set_symmetric_difference(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare); 
# 797
template< class _IIter1, class _IIter2, class _OIter> inline _OIter set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter); 
# 801
template< class _IIter1, class _IIter2, class _OIter, class 
# 802
_Compare> inline _OIter 
# 801
set_union(_IIter1, _IIter1, _IIter2, _IIter2, _OIter, _Compare); 
# 806
template< class _RAIter> inline void sort(_RAIter, _RAIter); 
# 810
template< class _RAIter, class _Compare> inline void sort(_RAIter, _RAIter, _Compare); 
# 814
template< class _RAIter> inline void stable_sort(_RAIter, _RAIter); 
# 818
template< class _RAIter, class _Compare> inline void stable_sort(_RAIter, _RAIter, _Compare); 
# 822
template< class _IIter, class _OIter, class _UnaryOperation> _OIter transform(_IIter, _IIter, _OIter, _UnaryOperation); 
# 826
template< class _IIter1, class _IIter2, class _OIter, class 
# 827
_BinaryOperation> _OIter 
# 826
transform(_IIter1, _IIter1, _IIter2, _OIter, _BinaryOperation); 
# 831
template< class _IIter, class _OIter> inline _OIter unique_copy(_IIter, _IIter, _OIter); 
# 835
template< class _IIter, class _OIter, class _BinaryPredicate> inline _OIter unique_copy(_IIter, _IIter, _OIter, _BinaryPredicate); 
# 840
}
# 62 "/usr/include/c++/5/bits/stl_heap.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 71
template< class _RandomAccessIterator, class _Distance, class 
# 72
_Compare> _Distance 
# 74
__is_heap_until(_RandomAccessIterator __first, _Distance __n, _Compare 
# 75
__comp) 
# 76
{ 
# 77
_Distance __parent = (0); 
# 78
for (_Distance __child = (1); __child < __n; ++__child) 
# 79
{ 
# 80
if (__comp(__first + __parent, __first + __child)) { 
# 81
return __child; }  
# 82
if ((__child & 1) == 0) { 
# 83
++__parent; }  
# 84
}  
# 85
return __n; 
# 86
} 
# 90
template< class _RandomAccessIterator, class _Distance> inline bool 
# 92
__is_heap(_RandomAccessIterator __first, _Distance __n) 
# 93
{ 
# 94
return std::__is_heap_until(__first, __n, __gnu_cxx::__ops::__iter_less_iter()) == __n; 
# 96
} 
# 98
template< class _RandomAccessIterator, class _Compare, class 
# 99
_Distance> inline bool 
# 101
__is_heap(_RandomAccessIterator __first, _Compare __comp, _Distance __n) 
# 102
{ 
# 103
return std::__is_heap_until(__first, __n, __gnu_cxx::__ops::__iter_comp_iter(__comp)) == __n; 
# 105
} 
# 107
template< class _RandomAccessIterator> inline bool 
# 109
__is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 110
{ return std::__is_heap(__first, std::distance(__first, __last)); } 
# 112
template< class _RandomAccessIterator, class _Compare> inline bool 
# 114
__is_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 115
__comp) 
# 116
{ return std::__is_heap(__first, __comp, std::distance(__first, __last)); } 
# 121
template< class _RandomAccessIterator, class _Distance, class _Tp, class 
# 122
_Compare> void 
# 124
__push_heap(_RandomAccessIterator __first, _Distance 
# 125
__holeIndex, _Distance __topIndex, _Tp __value, _Compare 
# 126
__comp) 
# 127
{ 
# 128
_Distance __parent = (__holeIndex - 1) / 2; 
# 129
while ((__holeIndex > __topIndex) && __comp(__first + __parent, __value)) 
# 130
{ 
# 131
(*(__first + __holeIndex)) = (*(__first + __parent)); 
# 132
__holeIndex = __parent; 
# 133
__parent = ((__holeIndex - 1) / 2); 
# 134
}  
# 135
(*(__first + __holeIndex)) = __value; 
# 136
} 
# 148
template< class _RandomAccessIterator> inline void 
# 150
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 151
{ 
# 153
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 155
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 161
; 
# 162
; 
# 164
_ValueType __value = *(__last - 1); 
# 165
std::__push_heap(__first, (_DistanceType)((__last - __first) - 1), (_DistanceType)0, __value, __gnu_cxx::__ops::__iter_less_val()); 
# 168
} 
# 182
template< class _RandomAccessIterator, class _Compare> inline void 
# 184
push_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 185
__comp) 
# 186
{ 
# 188
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 190
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 195
; 
# 196
; 
# 198
_ValueType __value = *(__last - 1); 
# 199
std::__push_heap(__first, (_DistanceType)((__last - __first) - 1), (_DistanceType)0, __value, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 202
} 
# 204
template< class _RandomAccessIterator, class _Distance, class 
# 205
_Tp, class _Compare> void 
# 207
__adjust_heap(_RandomAccessIterator __first, _Distance __holeIndex, _Distance 
# 208
__len, _Tp __value, _Compare __comp) 
# 209
{ 
# 210
const _Distance __topIndex = __holeIndex; 
# 211
_Distance __secondChild = __holeIndex; 
# 212
while (__secondChild < ((__len - 1) / 2)) 
# 213
{ 
# 214
__secondChild = (2 * (__secondChild + 1)); 
# 215
if (__comp(__first + __secondChild, __first + (__secondChild - 1))) { 
# 217
__secondChild--; }  
# 218
(*(__first + __holeIndex)) = (*(__first + __secondChild)); 
# 219
__holeIndex = __secondChild; 
# 220
}  
# 221
if (((__len & 1) == 0) && (__secondChild == ((__len - 2) / 2))) 
# 222
{ 
# 223
__secondChild = (2 * (__secondChild + 1)); 
# 224
(*(__first + __holeIndex)) = (*(__first + (__secondChild - 1))); 
# 226
__holeIndex = (__secondChild - 1); 
# 227
}  
# 228
std::__push_heap(__first, __holeIndex, __topIndex, __value, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 231
} 
# 233
template< class _RandomAccessIterator, class _Compare> inline void 
# 235
__pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _RandomAccessIterator 
# 236
__result, _Compare __comp) 
# 237
{ 
# 239
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 241
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 243
_ValueType __value = *__result; 
# 244
(*__result) = (*__first); 
# 245
std::__adjust_heap(__first, (_DistanceType)0, (_DistanceType)(__last - __first), __value, __comp); 
# 248
} 
# 261
template< class _RandomAccessIterator> inline void 
# 263
pop_heap(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 264
{ 
# 266
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 272
; 
# 273
; 
# 274
; 
# 276
if ((__last - __first) > 1) 
# 277
{ 
# 278
--__last; 
# 279
std::__pop_heap(__first, __last, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 281
}  
# 282
} 
# 295
template< class _RandomAccessIterator, class _Compare> inline void 
# 297
pop_heap(_RandomAccessIterator __first, _RandomAccessIterator 
# 298
__last, _Compare __comp) 
# 299
{ 
# 303
; 
# 304
; 
# 305
; 
# 307
if ((__last - __first) > 1) 
# 308
{ 
# 309
--__last; 
# 310
std::__pop_heap(__first, __last, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 312
}  
# 313
} 
# 315
template< class _RandomAccessIterator, class _Compare> void 
# 317
__make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 318
__comp) 
# 319
{ 
# 321
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 323
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 325
if ((__last - __first) < 2) { 
# 326
return; }  
# 328
const _DistanceType __len = __last - __first; 
# 329
_DistanceType __parent = (__len - 2) / 2; 
# 330
while (true) 
# 331
{ 
# 332
_ValueType __value = *(__first + __parent); 
# 333
std::__adjust_heap(__first, __parent, __len, __value, __comp); 
# 335
if (__parent == 0) { 
# 336
return; }  
# 337
__parent--; 
# 338
}  
# 339
} 
# 349
template< class _RandomAccessIterator> inline void 
# 351
make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 352
{ 
# 358
; 
# 360
std::__make_heap(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 362
} 
# 374
template< class _RandomAccessIterator, class _Compare> inline void 
# 376
make_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 377
__comp) 
# 378
{ 
# 382
; 
# 384
std::__make_heap(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 386
} 
# 388
template< class _RandomAccessIterator, class _Compare> void 
# 390
__sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 391
__comp) 
# 392
{ 
# 393
while ((__last - __first) > 1) 
# 394
{ 
# 395
--__last; 
# 396
std::__pop_heap(__first, __last, __last, __comp); 
# 397
}  
# 398
} 
# 408
template< class _RandomAccessIterator> inline void 
# 410
sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 411
{ 
# 417
; 
# 418
; 
# 420
std::__sort_heap(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 422
} 
# 434
template< class _RandomAccessIterator, class _Compare> inline void 
# 436
sort_heap(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 437
__comp) 
# 438
{ 
# 442
; 
# 443
; 
# 445
std::__sort_heap(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 447
} 
# 530
}
# 35 "/usr/include/c++/5/exception" 3
#pragma GCC visibility push ( default )
# 40
extern "C++" {
# 42
namespace std { 
# 60
class exception { 
# 63
public: exception() throw() { } 
# 64
virtual ~exception() throw(); 
# 68
virtual const char *what() const throw(); 
# 69
}; 
# 73
class bad_exception : public exception { 
# 76
public: bad_exception() throw() { } 
# 80
virtual ~bad_exception() throw(); 
# 83
virtual const char *what() const throw(); 
# 84
}; 
# 87
typedef void (*terminate_handler)(void); 
# 90
typedef void (*unexpected_handler)(void); 
# 93
terminate_handler set_terminate(terminate_handler) throw(); 
# 102
void terminate() throw() __attribute((__noreturn__)); 
# 105
unexpected_handler set_unexpected(unexpected_handler) throw(); 
# 114
void unexpected() __attribute((__noreturn__)); 
# 127
bool uncaught_exception() throw() __attribute((__pure__)); 
# 130
}
# 132
namespace __gnu_cxx { 
# 152
void __verbose_terminate_handler(); 
# 155
}
# 157
}
# 159
#pragma GCC visibility pop
# 42 "/usr/include/c++/5/new" 3
#pragma GCC visibility push ( default )
# 44
extern "C++" {
# 46
namespace std { 
# 54
class bad_alloc : public exception { 
# 57
public: bad_alloc() throw() { } 
# 61
virtual ~bad_alloc() throw(); 
# 64
virtual const char *what() const throw(); 
# 65
}; 
# 82
struct nothrow_t { }; 
# 84
extern const nothrow_t nothrow; 
# 88
typedef void (*new_handler)(void); 
# 92
new_handler set_new_handler(new_handler) throw(); 
# 98
}
# 111
void *operator new(std::size_t) throw(std::bad_alloc)
# 112
 __attribute((__externally_visible__)); 
# 113
void *operator new[](std::size_t) throw(std::bad_alloc)
# 114
 __attribute((__externally_visible__)); 
# 115
void operator delete(void *) throw()
# 116
 __attribute((__externally_visible__)); 
# 117
void operator delete[](void *) throw()
# 118
 __attribute((__externally_visible__)); 
# 119
void *operator new(std::size_t, const std::nothrow_t &) throw()
# 120
 __attribute((__externally_visible__)); 
# 121
void *operator new[](std::size_t, const std::nothrow_t &) throw()
# 122
 __attribute((__externally_visible__)); 
# 123
void operator delete(void *, const std::nothrow_t &) throw()
# 124
 __attribute((__externally_visible__)); 
# 125
void operator delete[](void *, const std::nothrow_t &) throw()
# 126
 __attribute((__externally_visible__)); 
# 129
inline void *operator new(std::size_t, void *__p) throw() 
# 130
{ return __p; } 
# 131
inline void *operator new[](std::size_t, void *__p) throw() 
# 132
{ return __p; } 
# 135
inline void operator delete(void *, void *) throw() { } 
# 136
inline void operator delete[](void *, void *) throw() { } 
# 138
}
# 140
#pragma GCC visibility pop
# 40 "/usr/include/c++/5/ext/new_allocator.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 44
using std::size_t;
# 45
using std::ptrdiff_t;
# 57
template< class _Tp> 
# 58
class new_allocator { 
# 61
public: typedef std::size_t size_type; 
# 62
typedef std::ptrdiff_t difference_type; 
# 63
typedef _Tp *pointer; 
# 64
typedef const _Tp *const_pointer; 
# 65
typedef _Tp &reference; 
# 66
typedef const _Tp &const_reference; 
# 67
typedef _Tp value_type; 
# 69
template< class _Tp1> 
# 70
struct rebind { 
# 71
typedef __gnu_cxx::new_allocator< _Tp1>  other; }; 
# 79
new_allocator() throw() { } 
# 81
new_allocator(const new_allocator &) throw() { } 
# 83
template< class _Tp1> 
# 84
new_allocator(const __gnu_cxx::new_allocator< _Tp1>  &) throw() { } 
# 86
~new_allocator() throw() { } 
# 89
pointer address(reference __x) const 
# 90
{ return std::__addressof(__x); } 
# 93
const_pointer address(const_reference __x) const 
# 94
{ return std::__addressof(__x); } 
# 99
pointer allocate(size_type __n, const void * = 0) 
# 100
{ 
# 101
if (__n > this->max_size()) { 
# 102
std::__throw_bad_alloc(); }  
# 104
return static_cast< _Tp *>(::operator new(__n * sizeof(_Tp))); 
# 105
} 
# 109
void deallocate(pointer __p, size_type) 
# 110
{ ::operator delete(__p); } 
# 113
size_type max_size() const throw() 
# 114
{ return ((std::size_t)(-1)) / sizeof(_Tp); } 
# 129
void construct(pointer __p, const _Tp &__val) 
# 130
{ ::new ((void *)__p) (_Tp)(__val); } 
# 133
void destroy(pointer __p) { (__p->~_Tp()); } 
# 135
}; 
# 137
template< class _Tp> inline bool 
# 139
operator==(const new_allocator< _Tp>  &, const new_allocator< _Tp>  &) 
# 140
{ return true; } 
# 142
template< class _Tp> inline bool 
# 144
operator!=(const new_allocator< _Tp>  &, const new_allocator< _Tp>  &) 
# 145
{ return false; } 
# 148
}
# 50 "/usr/include/c++/5/bits/memoryfwd.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 63
template< class > class allocator; 
# 67
template<> class allocator< void> ; 
# 70
template< class , class > struct uses_allocator; 
# 76
}
# 52 "/usr/include/c++/5/bits/allocator.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 63
template<> class allocator< void>  { 
# 66
public: typedef size_t size_type; 
# 67
typedef ptrdiff_t difference_type; 
# 68
typedef void *pointer; 
# 69
typedef const void *const_pointer; 
# 70
typedef void value_type; 
# 72
template< class _Tp1> 
# 73
struct rebind { 
# 74
typedef std::allocator< _Tp1>  other; }; 
# 81
}; 
# 91
template< class _Tp> 
# 92
class allocator : public __gnu_cxx::new_allocator< _Tp>  { 
# 95
public: typedef ::std::size_t size_type; 
# 96
typedef ::std::ptrdiff_t difference_type; 
# 97
typedef _Tp *pointer; 
# 98
typedef const _Tp *const_pointer; 
# 99
typedef _Tp &reference; 
# 100
typedef const _Tp &const_reference; 
# 101
typedef _Tp value_type; 
# 103
template< class _Tp1> 
# 104
struct rebind { 
# 105
typedef ::std::allocator< _Tp1>  other; }; 
# 113
allocator() throw() { } 
# 115
allocator(const allocator &__a) throw() : ::__gnu_cxx::new_allocator< _Tp> (__a) 
# 116
{ } 
# 118
template< class _Tp1> 
# 119
allocator(const ::std::allocator< _Tp1>  &) throw() { } 
# 121
~allocator() throw() { } 
# 124
}; 
# 126
template< class _T1, class _T2> inline bool 
# 128
operator==(const allocator< _T1>  &, const allocator< _T2>  &) throw() 
# 130
{ return true; } 
# 132
template< class _Tp> inline bool 
# 134
operator==(const allocator< _Tp>  &, const allocator< _Tp>  &) throw() 
# 136
{ return true; } 
# 138
template< class _T1, class _T2> inline bool 
# 140
operator!=(const allocator< _T1>  &, const allocator< _T2>  &) throw() 
# 142
{ return false; } 
# 144
template< class _Tp> inline bool 
# 146
operator!=(const allocator< _Tp>  &, const allocator< _Tp>  &) throw() 
# 148
{ return false; } 
# 155
extern template class allocator< char> ;
# 156
extern template class allocator< wchar_t> ;
# 163
template< class _Alloc, bool  = __is_empty(_Alloc)> 
# 164
struct __alloc_swap { 
# 165
static void _S_do_it(_Alloc &, _Alloc &) { } }; 
# 167
template< class _Alloc> 
# 168
struct __alloc_swap< _Alloc, false>  { 
# 171
static void _S_do_it(_Alloc &__one, _Alloc &__two) 
# 172
{ 
# 174
if (__one != __two) { 
# 175
swap(__one, __two); }  
# 176
} 
# 177
}; 
# 180
template< class _Alloc, bool  = __is_empty(_Alloc)> 
# 181
struct __alloc_neq { 
# 184
static bool _S_do_it(const _Alloc &, const _Alloc &) 
# 185
{ return false; } 
# 186
}; 
# 188
template< class _Alloc> 
# 189
struct __alloc_neq< _Alloc, false>  { 
# 192
static bool _S_do_it(const _Alloc &__one, const _Alloc &__two) 
# 193
{ return __one != __two; } 
# 194
}; 
# 227
}
# 41 "/usr/include/c++/5/ext/alloc_traits.h" 3
namespace __gnu_cxx __attribute((__visibility__("default"))) { 
# 94
template< class _Alloc> 
# 95
struct __alloc_traits { 
# 100
typedef _Alloc allocator_type; 
# 172
typedef typename _Alloc::pointer pointer; 
# 173
typedef typename _Alloc::const_pointer const_pointer; 
# 174
typedef typename _Alloc::value_type value_type; 
# 175
typedef typename _Alloc::reference reference; 
# 176
typedef typename _Alloc::const_reference const_reference; 
# 177
typedef typename _Alloc::size_type size_type; 
# 178
typedef typename _Alloc::difference_type difference_type; 
# 181
static pointer allocate(_Alloc &__a, size_type __n) 
# 182
{ return (__a.allocate(__n)); } 
# 184
static void deallocate(_Alloc &__a, pointer __p, size_type __n) 
# 185
{ (__a.deallocate(__p, __n)); } 
# 187
template< class _Tp> static void 
# 188
construct(_Alloc &__a, pointer __p, const _Tp &__arg) 
# 189
{ (__a.construct(__p, __arg)); } 
# 191
static void destroy(_Alloc &__a, pointer __p) 
# 192
{ (__a.destroy(__p)); } 
# 194
static size_type max_size(const _Alloc &__a) 
# 195
{ return (__a.max_size()); } 
# 197
static const _Alloc &_S_select_on_copy(const _Alloc &__a) { return __a; } 
# 199
static void _S_on_swap(_Alloc &__a, _Alloc &__b) 
# 200
{ 
# 203
std::__alloc_swap< _Alloc> ::_S_do_it(__a, __b); 
# 204
} 
# 206
template< class _Tp> 
# 207
struct rebind { 
# 208
typedef typename _Alloc::template rebind< _Tp> ::other other; }; 
# 210
}; 
# 213
}
# 63 "/usr/include/c++/5/bits/stl_construct.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 77
template< class _T1, class _T2> inline void 
# 79
_Construct(_T1 *__p, const _T2 &__value) 
# 80
{ 
# 83
::new (static_cast< void *>(__p)) (_T1)(__value); 
# 84
} 
# 90
template< class _Tp> inline void 
# 92
_Destroy(_Tp *__pointer) 
# 93
{ (__pointer->~_Tp()); } 
# 95
template< bool > 
# 96
struct _Destroy_aux { 
# 98
template< class _ForwardIterator> static void 
# 100
__destroy(_ForwardIterator __first, _ForwardIterator __last) 
# 101
{ 
# 102
for (; __first != __last; ++__first) { 
# 103
std::_Destroy(std::__addressof(*__first)); }  
# 104
} 
# 105
}; 
# 108
template<> struct _Destroy_aux< true>  { 
# 110
template< class _ForwardIterator> static void 
# 112
__destroy(_ForwardIterator, _ForwardIterator) { } 
# 113
}; 
# 120
template< class _ForwardIterator> inline void 
# 122
_Destroy(_ForwardIterator __first, _ForwardIterator __last) 
# 123
{ 
# 125
typedef typename iterator_traits< _ForwardIterator> ::value_type _Value_type; 
# 126
std::_Destroy_aux< __has_trivial_destructor(typename iterator_traits< _ForwardIterator> ::value_type)> ::__destroy(__first, __last); 
# 128
} 
# 136
template< class _ForwardIterator, class _Allocator> void 
# 138
_Destroy(_ForwardIterator __first, _ForwardIterator __last, _Allocator &
# 139
__alloc) 
# 140
{ 
# 141
typedef __gnu_cxx::__alloc_traits< _Allocator>  __traits; 
# 142
for (; __first != __last; ++__first) { 
# 143
__traits::destroy(__alloc, std::__addressof(*__first)); }  
# 144
} 
# 146
template< class _ForwardIterator, class _Tp> inline void 
# 148
_Destroy(_ForwardIterator __first, _ForwardIterator __last, allocator< _Tp>  &) 
# 150
{ 
# 151
_Destroy(__first, __last); 
# 152
} 
# 155
}
# 62 "/usr/include/c++/5/bits/stl_tempbuf.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 83
template< class _Tp> pair< _Tp *, long>  
# 85
get_temporary_buffer(ptrdiff_t __len) 
# 86
{ 
# 87
const ptrdiff_t __max = (__gnu_cxx::__numeric_traits_integer< long> ::__max / sizeof(_Tp)); 
# 89
if (__len > __max) { 
# 90
__len = __max; }  
# 92
while (__len > (0)) 
# 93
{ 
# 94
_Tp *__tmp = static_cast< _Tp *>(::operator new(__len * sizeof(_Tp), std::nothrow)); 
# 96
if (__tmp != 0) { 
# 97
return pair< _Tp *, long> (__tmp, __len); }  
# 98
__len /= (2); 
# 99
}  
# 100
return pair< _Tp *, long> (static_cast< _Tp *>(0), 0); 
# 101
} 
# 110
template< class _Tp> inline void 
# 112
return_temporary_buffer(_Tp *__p) 
# 113
{ ::operator delete(__p, std::nothrow); } 
# 121
template< class _ForwardIterator, class _Tp> 
# 122
class _Temporary_buffer { 
# 128
public: typedef _Tp value_type; 
# 129
typedef value_type *pointer; 
# 130
typedef pointer iterator; 
# 131
typedef ptrdiff_t size_type; 
# 134
protected: size_type _M_original_len; 
# 135
size_type _M_len; 
# 136
pointer _M_buffer; 
# 141
public: size_type size() const 
# 142
{ return _M_len; } 
# 146
size_type requested_size() const 
# 147
{ return _M_original_len; } 
# 151
iterator begin() 
# 152
{ return _M_buffer; } 
# 156
iterator end() 
# 157
{ return (_M_buffer) + (_M_len); } 
# 163
_Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last); 
# 165
~_Temporary_buffer() 
# 166
{ 
# 167
std::_Destroy(_M_buffer, (_M_buffer) + (_M_len)); 
# 168
std::return_temporary_buffer(_M_buffer); 
# 169
} 
# 173
private: _Temporary_buffer(const _Temporary_buffer &); 
# 176
void operator=(const _Temporary_buffer &); 
# 177
}; 
# 180
template< bool > 
# 181
struct __uninitialized_construct_buf_dispatch { 
# 183
template< class _Pointer, class _ForwardIterator> static void 
# 185
__ucr(_Pointer __first, _Pointer __last, _ForwardIterator 
# 186
__seed) 
# 187
{ 
# 188
if (__first == __last) { 
# 189
return; }  
# 191
_Pointer __cur = __first; 
# 192
try 
# 193
{ 
# 194
std::_Construct(std::__addressof(*__first), *__seed); 
# 196
_Pointer __prev = __cur; 
# 197
++__cur; 
# 198
for (; __cur != __last; (++__cur), (++__prev)) { 
# 199
std::_Construct(std::__addressof(*__cur), *__prev); }  
# 201
(*__seed) = (*__prev); 
# 202
} 
# 203
catch (...) 
# 204
{ 
# 205
std::_Destroy(__first, __cur); 
# 206
throw; 
# 207
}  
# 208
} 
# 209
}; 
# 212
template<> struct __uninitialized_construct_buf_dispatch< true>  { 
# 214
template< class _Pointer, class _ForwardIterator> static void 
# 216
__ucr(_Pointer, _Pointer, _ForwardIterator) { } 
# 217
}; 
# 229
template< class _Pointer, class _ForwardIterator> inline void 
# 231
__uninitialized_construct_buf(_Pointer __first, _Pointer __last, _ForwardIterator 
# 232
__seed) 
# 233
{ 
# 235
typedef typename iterator_traits< _Pointer> ::value_type _ValueType; 
# 237
std::__uninitialized_construct_buf_dispatch< __has_trivial_constructor(typename iterator_traits< _Pointer> ::value_type)> ::__ucr(__first, __last, __seed); 
# 240
} 
# 242
template< class _ForwardIterator, class _Tp> 
# 244
_Temporary_buffer< _ForwardIterator, _Tp> ::_Temporary_buffer(_ForwardIterator __first, _ForwardIterator __last) : _M_original_len(std::distance(__first, __last)), _M_len((0)), _M_buffer((0)) 
# 247
{ 
# 248
try 
# 249
{ 
# 250
pair< _Tp *, long>  __p(std::get_temporary_buffer< value_type> (_M_original_len)); 
# 252
(_M_buffer) = (__p.first); 
# 253
(_M_len) = (__p.second); 
# 254
if (_M_buffer) { 
# 255
std::__uninitialized_construct_buf(_M_buffer, (_M_buffer) + (_M_len), __first); }  
# 257
} 
# 258
catch (...) 
# 259
{ 
# 260
std::return_temporary_buffer(_M_buffer); 
# 261
(_M_buffer) = 0; 
# 262
(_M_len) = (0); 
# 263
throw; 
# 264
}  
# 265
} 
# 268
}
# 71 "/usr/include/c++/5/bits/stl_algo.h" 3
namespace std __attribute((__visibility__("default"))) { 
# 76
template< class _Iterator, class _Compare> void 
# 78
__move_median_to_first(_Iterator __result, _Iterator __a, _Iterator __b, _Iterator 
# 79
__c, _Compare __comp) 
# 80
{ 
# 81
if (__comp(__a, __b)) 
# 82
{ 
# 83
if (__comp(__b, __c)) { 
# 84
std::iter_swap(__result, __b); } else { 
# 85
if (__comp(__a, __c)) { 
# 86
std::iter_swap(__result, __c); } else { 
# 88
std::iter_swap(__result, __a); }  }  
# 89
} else { 
# 90
if (__comp(__a, __c)) { 
# 91
std::iter_swap(__result, __a); } else { 
# 92
if (__comp(__b, __c)) { 
# 93
std::iter_swap(__result, __c); } else { 
# 95
std::iter_swap(__result, __b); }  }  }  
# 96
} 
# 99
template< class _InputIterator, class _Predicate> inline _InputIterator 
# 101
__find_if(_InputIterator __first, _InputIterator __last, _Predicate 
# 102
__pred, input_iterator_tag) 
# 103
{ 
# 104
while ((__first != __last) && (!__pred(__first))) { 
# 105
++__first; }  
# 106
return __first; 
# 107
} 
# 110
template< class _RandomAccessIterator, class _Predicate> _RandomAccessIterator 
# 112
__find_if(_RandomAccessIterator __first, _RandomAccessIterator __last, _Predicate 
# 113
__pred, random_access_iterator_tag) 
# 114
{ 
# 116
typename iterator_traits< _RandomAccessIterator> ::difference_type __trip_count = (__last - __first) >> 2; 
# 118
for (; __trip_count > 0; --__trip_count) 
# 119
{ 
# 120
if (__pred(__first)) { 
# 121
return __first; }  
# 122
++__first; 
# 124
if (__pred(__first)) { 
# 125
return __first; }  
# 126
++__first; 
# 128
if (__pred(__first)) { 
# 129
return __first; }  
# 130
++__first; 
# 132
if (__pred(__first)) { 
# 133
return __first; }  
# 134
++__first; 
# 135
}  
# 137
switch (__last - __first) 
# 138
{ 
# 139
case 3:  
# 140
if (__pred(__first)) { 
# 141
return __first; }  
# 142
++__first; 
# 143
case 2:  
# 144
if (__pred(__first)) { 
# 145
return __first; }  
# 146
++__first; 
# 147
case 1:  
# 148
if (__pred(__first)) { 
# 149
return __first; }  
# 150
++__first; 
# 151
case 0:  
# 152
default:  
# 153
return __last; 
# 154
}  
# 155
} 
# 157
template< class _Iterator, class _Predicate> inline _Iterator 
# 159
__find_if(_Iterator __first, _Iterator __last, _Predicate __pred) 
# 160
{ 
# 161
return __find_if(__first, __last, __pred, std::__iterator_category(__first)); 
# 163
} 
# 166
template< class _InputIterator, class _Predicate> inline _InputIterator 
# 168
__find_if_not(_InputIterator __first, _InputIterator __last, _Predicate 
# 169
__pred) 
# 170
{ 
# 171
return std::__find_if(__first, __last, __gnu_cxx::__ops::__negate(__pred), std::__iterator_category(__first)); 
# 174
} 
# 179
template< class _InputIterator, class _Predicate, class _Distance> _InputIterator 
# 181
__find_if_not_n(_InputIterator __first, _Distance &__len, _Predicate __pred) 
# 182
{ 
# 183
for (; __len; (--__len), (++__first)) { 
# 184
if (!__pred(__first)) { 
# 185
break; }  }  
# 186
return __first; 
# 187
} 
# 202
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 203
_BinaryPredicate> _ForwardIterator1 
# 205
__search(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 206
__first2, _ForwardIterator2 __last2, _BinaryPredicate 
# 207
__predicate) 
# 208
{ 
# 210
if ((__first1 == __last1) || (__first2 == __last2)) { 
# 211
return __first1; }  
# 214
_ForwardIterator2 __p1(__first2); 
# 215
if ((++__p1) == __last2) { 
# 216
return std::__find_if(__first1, __last1, __gnu_cxx::__ops::__iter_comp_iter(__predicate, __first2)); }  
# 220
_ForwardIterator2 __p; 
# 221
_ForwardIterator1 __current = __first1; 
# 223
for (; ;) 
# 224
{ 
# 225
__first1 = std::__find_if(__first1, __last1, __gnu_cxx::__ops::__iter_comp_iter(__predicate, __first2)); 
# 229
if (__first1 == __last1) { 
# 230
return __last1; }  
# 232
__p = __p1; 
# 233
__current = __first1; 
# 234
if ((++__current) == __last1) { 
# 235
return __last1; }  
# 237
while (__predicate(__current, __p)) 
# 238
{ 
# 239
if ((++__p) == __last2) { 
# 240
return __first1; }  
# 241
if ((++__current) == __last1) { 
# 242
return __last1; }  
# 243
}  
# 244
++__first1; 
# 245
}  
# 246
return __first1; 
# 247
} 
# 254
template< class _ForwardIterator, class _Integer, class 
# 255
_UnaryPredicate> _ForwardIterator 
# 257
__search_n_aux(_ForwardIterator __first, _ForwardIterator __last, _Integer 
# 258
__count, _UnaryPredicate __unary_pred, forward_iterator_tag) 
# 260
{ 
# 261
__first = std::__find_if(__first, __last, __unary_pred); 
# 262
while (__first != __last) 
# 263
{ 
# 265
typename iterator_traits< _ForwardIterator> ::difference_type __n = __count; 
# 266
_ForwardIterator __i = __first; 
# 267
++__i; 
# 268
while ((__i != __last) && (__n != 1) && __unary_pred(__i)) 
# 269
{ 
# 270
++__i; 
# 271
--__n; 
# 272
}  
# 273
if (__n == 1) { 
# 274
return __first; }  
# 275
if (__i == __last) { 
# 276
return __last; }  
# 277
__first = std::__find_if(++__i, __last, __unary_pred); 
# 278
}  
# 279
return __last; 
# 280
} 
# 286
template< class _RandomAccessIter, class _Integer, class 
# 287
_UnaryPredicate> _RandomAccessIter 
# 289
__search_n_aux(_RandomAccessIter __first, _RandomAccessIter __last, _Integer 
# 290
__count, _UnaryPredicate __unary_pred, random_access_iterator_tag) 
# 292
{ 
# 294
typedef typename iterator_traits< _RandomAccessIter> ::difference_type _DistanceType; 
# 296
_DistanceType __tailSize = __last - __first; 
# 297
_DistanceType __remainder = __count; 
# 299
while (__remainder <= __tailSize) 
# 300
{ 
# 301
__first += __remainder; 
# 302
__tailSize -= __remainder; 
# 305
_RandomAccessIter __backTrack = __first; 
# 306
while (__unary_pred(--__backTrack)) 
# 307
{ 
# 308
if ((--__remainder) == 0) { 
# 309
return __first - __count; }  
# 310
}  
# 311
__remainder = ((__count + 1) - (__first - __backTrack)); 
# 312
}  
# 313
return __last; 
# 314
} 
# 316
template< class _ForwardIterator, class _Integer, class 
# 317
_UnaryPredicate> _ForwardIterator 
# 319
__search_n(_ForwardIterator __first, _ForwardIterator __last, _Integer 
# 320
__count, _UnaryPredicate 
# 321
__unary_pred) 
# 322
{ 
# 323
if (__count <= 0) { 
# 324
return __first; }  
# 326
if (__count == 1) { 
# 327
return std::__find_if(__first, __last, __unary_pred); }  
# 329
return std::__search_n_aux(__first, __last, __count, __unary_pred, std::__iterator_category(__first)); 
# 331
} 
# 334
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 335
_BinaryPredicate> _ForwardIterator1 
# 337
__find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 338
__first2, _ForwardIterator2 __last2, forward_iterator_tag, forward_iterator_tag, _BinaryPredicate 
# 340
__comp) 
# 341
{ 
# 342
if (__first2 == __last2) { 
# 343
return __last1; }  
# 345
_ForwardIterator1 __result = __last1; 
# 346
while (1) 
# 347
{ 
# 348
_ForwardIterator1 __new_result = std::__search(__first1, __last1, __first2, __last2, __comp); 
# 350
if (__new_result == __last1) { 
# 351
return __result; } else 
# 353
{ 
# 354
__result = __new_result; 
# 355
__first1 = __new_result; 
# 356
++__first1; 
# 357
}  
# 358
}  
# 359
} 
# 362
template< class _BidirectionalIterator1, class _BidirectionalIterator2, class 
# 363
_BinaryPredicate> _BidirectionalIterator1 
# 365
__find_end(_BidirectionalIterator1 __first1, _BidirectionalIterator1 
# 366
__last1, _BidirectionalIterator2 
# 367
__first2, _BidirectionalIterator2 
# 368
__last2, bidirectional_iterator_tag, bidirectional_iterator_tag, _BinaryPredicate 
# 370
__comp) 
# 371
{ 
# 378
typedef reverse_iterator< _BidirectionalIterator1>  _RevIterator1; 
# 379
typedef reverse_iterator< _BidirectionalIterator2>  _RevIterator2; 
# 381
_RevIterator1 __rlast1(__first1); 
# 382
_RevIterator2 __rlast2(__first2); 
# 383
_RevIterator1 __rresult = std::__search(((_RevIterator1)(__last1)), __rlast1, ((_RevIterator2)(__last2)), __rlast2, __comp); 
# 387
if (__rresult == __rlast1) { 
# 388
return __last1; } else 
# 390
{ 
# 391
_BidirectionalIterator1 __result = (__rresult.base()); 
# 392
std::advance(__result, -std::distance(__first2, __last2)); 
# 393
return __result; 
# 394
}  
# 395
} 
# 423
template< class _ForwardIterator1, class _ForwardIterator2> inline _ForwardIterator1 
# 425
find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 426
__first2, _ForwardIterator2 __last2) 
# 427
{ 
# 434
; 
# 435
; 
# 437
return std::__find_end(__first1, __last1, __first2, __last2, std::__iterator_category(__first1), std::__iterator_category(__first2), __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 441
} 
# 471
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 472
_BinaryPredicate> inline _ForwardIterator1 
# 474
find_end(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 475
__first2, _ForwardIterator2 __last2, _BinaryPredicate 
# 476
__comp) 
# 477
{ 
# 484
; 
# 485
; 
# 487
return std::__find_end(__first1, __last1, __first2, __last2, std::__iterator_category(__first1), std::__iterator_category(__first2), __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 491
} 
# 636
template< class _InputIterator, class _OutputIterator, class 
# 637
_Predicate> _OutputIterator 
# 639
__remove_copy_if(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 640
__result, _Predicate __pred) 
# 641
{ 
# 642
for (; __first != __last; ++__first) { 
# 643
if (!__pred(__first)) 
# 644
{ 
# 645
(*__result) = (*__first); 
# 646
++__result; 
# 647
}  }  
# 648
return __result; 
# 649
} 
# 665
template< class _InputIterator, class _OutputIterator, class _Tp> inline _OutputIterator 
# 667
remove_copy(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 668
__result, const _Tp &__value) 
# 669
{ 
# 676
; 
# 678
return std::__remove_copy_if(__first, __last, __result, __gnu_cxx::__ops::__iter_equals_val(__value)); 
# 680
} 
# 697
template< class _InputIterator, class _OutputIterator, class 
# 698
_Predicate> inline _OutputIterator 
# 700
remove_copy_if(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 701
__result, _Predicate __pred) 
# 702
{ 
# 709
; 
# 711
return std::__remove_copy_if(__first, __last, __result, __gnu_cxx::__ops::__pred_iter(__pred)); 
# 713
} 
# 855
template< class _ForwardIterator, class _Predicate> _ForwardIterator 
# 857
__remove_if(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 858
__pred) 
# 859
{ 
# 860
__first = std::__find_if(__first, __last, __pred); 
# 861
if (__first == __last) { 
# 862
return __first; }  
# 863
_ForwardIterator __result = __first; 
# 864
++__first; 
# 865
for (; __first != __last; ++__first) { 
# 866
if (!__pred(__first)) 
# 867
{ 
# 868
(*__result) = (*__first); 
# 869
++__result; 
# 870
}  }  
# 871
return __result; 
# 872
} 
# 891
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 893
remove(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 894
__value) 
# 895
{ 
# 901
; 
# 903
return std::__remove_if(__first, __last, __gnu_cxx::__ops::__iter_equals_val(__value)); 
# 905
} 
# 924
template< class _ForwardIterator, class _Predicate> inline _ForwardIterator 
# 926
remove_if(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 927
__pred) 
# 928
{ 
# 934
; 
# 936
return std::__remove_if(__first, __last, __gnu_cxx::__ops::__pred_iter(__pred)); 
# 938
} 
# 940
template< class _ForwardIterator, class _BinaryPredicate> _ForwardIterator 
# 942
__adjacent_find(_ForwardIterator __first, _ForwardIterator __last, _BinaryPredicate 
# 943
__binary_pred) 
# 944
{ 
# 945
if (__first == __last) { 
# 946
return __last; }  
# 947
_ForwardIterator __next = __first; 
# 948
while ((++__next) != __last) 
# 949
{ 
# 950
if (__binary_pred(__first, __next)) { 
# 951
return __first; }  
# 952
__first = __next; 
# 953
}  
# 954
return __last; 
# 955
} 
# 957
template< class _ForwardIterator, class _BinaryPredicate> _ForwardIterator 
# 959
__unique(_ForwardIterator __first, _ForwardIterator __last, _BinaryPredicate 
# 960
__binary_pred) 
# 961
{ 
# 963
__first = std::__adjacent_find(__first, __last, __binary_pred); 
# 964
if (__first == __last) { 
# 965
return __last; }  
# 968
_ForwardIterator __dest = __first; 
# 969
++__first; 
# 970
while ((++__first) != __last) { 
# 971
if (!__binary_pred(__dest, __first)) { 
# 972
(*(++__dest)) = (*__first); }  }  
# 973
return ++__dest; 
# 974
} 
# 990
template< class _ForwardIterator> inline _ForwardIterator 
# 992
unique(_ForwardIterator __first, _ForwardIterator __last) 
# 993
{ 
# 999
; 
# 1001
return std::__unique(__first, __last, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 1003
} 
# 1020
template< class _ForwardIterator, class _BinaryPredicate> inline _ForwardIterator 
# 1022
unique(_ForwardIterator __first, _ForwardIterator __last, _BinaryPredicate 
# 1023
__binary_pred) 
# 1024
{ 
# 1031
; 
# 1033
return std::__unique(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 1035
} 
# 1043
template< class _ForwardIterator, class _OutputIterator, class 
# 1044
_BinaryPredicate> _OutputIterator 
# 1046
__unique_copy(_ForwardIterator __first, _ForwardIterator __last, _OutputIterator 
# 1047
__result, _BinaryPredicate __binary_pred, forward_iterator_tag, output_iterator_tag) 
# 1049
{ 
# 1055
_ForwardIterator __next = __first; 
# 1056
(*__result) = (*__first); 
# 1057
while ((++__next) != __last) { 
# 1058
if (!__binary_pred(__first, __next)) 
# 1059
{ 
# 1060
__first = __next; 
# 1061
(*(++__result)) = (*__first); 
# 1062
}  }  
# 1063
return ++__result; 
# 1064
} 
# 1072
template< class _InputIterator, class _OutputIterator, class 
# 1073
_BinaryPredicate> _OutputIterator 
# 1075
__unique_copy(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 1076
__result, _BinaryPredicate __binary_pred, input_iterator_tag, output_iterator_tag) 
# 1078
{ 
# 1084
typename iterator_traits< _InputIterator> ::value_type __value = *__first; 
# 1086
__decltype((__gnu_cxx::__ops::__iter_comp_val(__binary_pred))) __rebound_pred = __gnu_cxx::__ops::__iter_comp_val(__binary_pred); 
# 1088
(*__result) = __value; 
# 1089
while ((++__first) != __last) { 
# 1090
if (!__rebound_pred(__first, __value)) 
# 1091
{ 
# 1092
__value = (*__first); 
# 1093
(*(++__result)) = __value; 
# 1094
}  }  
# 1095
return ++__result; 
# 1096
} 
# 1104
template< class _InputIterator, class _ForwardIterator, class 
# 1105
_BinaryPredicate> _ForwardIterator 
# 1107
__unique_copy(_InputIterator __first, _InputIterator __last, _ForwardIterator 
# 1108
__result, _BinaryPredicate __binary_pred, input_iterator_tag, forward_iterator_tag) 
# 1110
{ 
# 1115
(*__result) = (*__first); 
# 1116
while ((++__first) != __last) { 
# 1117
if (!__binary_pred(__result, __first)) { 
# 1118
(*(++__result)) = (*__first); }  }  
# 1119
return ++__result; 
# 1120
} 
# 1127
template< class _BidirectionalIterator> void 
# 1129
__reverse(_BidirectionalIterator __first, _BidirectionalIterator __last, bidirectional_iterator_tag) 
# 1131
{ 
# 1132
while (true) { 
# 1133
if ((__first == __last) || (__first == (--__last))) { 
# 1134
return; } else 
# 1136
{ 
# 1137
std::iter_swap(__first, __last); 
# 1138
++__first; 
# 1139
}  }  
# 1140
} 
# 1147
template< class _RandomAccessIterator> void 
# 1149
__reverse(_RandomAccessIterator __first, _RandomAccessIterator __last, random_access_iterator_tag) 
# 1151
{ 
# 1152
if (__first == __last) { 
# 1153
return; }  
# 1154
--__last; 
# 1155
while (__first < __last) 
# 1156
{ 
# 1157
std::iter_swap(__first, __last); 
# 1158
++__first; 
# 1159
--__last; 
# 1160
}  
# 1161
} 
# 1175
template< class _BidirectionalIterator> inline void 
# 1177
reverse(_BidirectionalIterator __first, _BidirectionalIterator __last) 
# 1178
{ 
# 1182
; 
# 1183
std::__reverse(__first, __last, std::__iterator_category(__first)); 
# 1184
} 
# 1202
template< class _BidirectionalIterator, class _OutputIterator> _OutputIterator 
# 1204
reverse_copy(_BidirectionalIterator __first, _BidirectionalIterator __last, _OutputIterator 
# 1205
__result) 
# 1206
{ 
# 1212
; 
# 1214
while (__first != __last) 
# 1215
{ 
# 1216
--__last; 
# 1217
(*__result) = (*__last); 
# 1218
++__result; 
# 1219
}  
# 1220
return __result; 
# 1221
} 
# 1227
template< class _EuclideanRingElement> _EuclideanRingElement 
# 1229
__gcd(_EuclideanRingElement __m, _EuclideanRingElement __n) 
# 1230
{ 
# 1231
while (__n != 0) 
# 1232
{ 
# 1233
_EuclideanRingElement __t = __m % __n; 
# 1234
__m = __n; 
# 1235
__n = __t; 
# 1236
}  
# 1237
return __m; 
# 1238
} 
# 1240
inline namespace _V2 { 
# 1244
template< class _ForwardIterator> _ForwardIterator 
# 1246
__rotate(_ForwardIterator __first, _ForwardIterator 
# 1247
__middle, _ForwardIterator 
# 1248
__last, forward_iterator_tag) 
# 1250
{ 
# 1251
if (__first == __middle) { 
# 1252
return __last; } else { 
# 1253
if (__last == __middle) { 
# 1254
return __first; }  }  
# 1256
_ForwardIterator __first2 = __middle; 
# 1257
do 
# 1258
{ 
# 1259
std::iter_swap(__first, __first2); 
# 1260
++__first; 
# 1261
++__first2; 
# 1262
if (__first == __middle) { 
# 1263
__middle = __first2; }  
# 1264
} 
# 1265
while (__first2 != __last); 
# 1267
_ForwardIterator __ret = __first; 
# 1269
__first2 = __middle; 
# 1271
while (__first2 != __last) 
# 1272
{ 
# 1273
std::iter_swap(__first, __first2); 
# 1274
++__first; 
# 1275
++__first2; 
# 1276
if (__first == __middle) { 
# 1277
__middle = __first2; } else { 
# 1278
if (__first2 == __last) { 
# 1279
__first2 = __middle; }  }  
# 1280
}  
# 1281
return __ret; 
# 1282
} 
# 1285
template< class _BidirectionalIterator> _BidirectionalIterator 
# 1287
__rotate(_BidirectionalIterator __first, _BidirectionalIterator 
# 1288
__middle, _BidirectionalIterator 
# 1289
__last, bidirectional_iterator_tag) 
# 1291
{ 
# 1296
if (__first == __middle) { 
# 1297
return __last; } else { 
# 1298
if (__last == __middle) { 
# 1299
return __first; }  }  
# 1301
std::__reverse(__first, __middle, bidirectional_iterator_tag()); 
# 1302
std::__reverse(__middle, __last, bidirectional_iterator_tag()); 
# 1304
while ((__first != __middle) && (__middle != __last)) 
# 1305
{ 
# 1306
std::iter_swap(__first, --__last); 
# 1307
++__first; 
# 1308
}  
# 1310
if (__first == __middle) 
# 1311
{ 
# 1312
std::__reverse(__middle, __last, bidirectional_iterator_tag()); 
# 1313
return __last; 
# 1314
} else 
# 1316
{ 
# 1317
std::__reverse(__first, __middle, bidirectional_iterator_tag()); 
# 1318
return __first; 
# 1319
}  
# 1320
} 
# 1323
template< class _RandomAccessIterator> _RandomAccessIterator 
# 1325
__rotate(_RandomAccessIterator __first, _RandomAccessIterator 
# 1326
__middle, _RandomAccessIterator 
# 1327
__last, random_access_iterator_tag) 
# 1329
{ 
# 1334
if (__first == __middle) { 
# 1335
return __last; } else { 
# 1336
if (__last == __middle) { 
# 1337
return __first; }  }  
# 1340
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _Distance; 
# 1342
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 1344
_Distance __n = __last - __first; 
# 1345
_Distance __k = __middle - __first; 
# 1347
if (__k == (__n - __k)) 
# 1348
{ 
# 1349
std::swap_ranges(__first, __middle, __middle); 
# 1350
return __middle; 
# 1351
}  
# 1353
_RandomAccessIterator __p = __first; 
# 1354
_RandomAccessIterator __ret = __first + (__last - __middle); 
# 1356
for (; ;) 
# 1357
{ 
# 1358
if (__k < (__n - __k)) 
# 1359
{ 
# 1360
if (__is_pod(_ValueType) && (__k == 1)) 
# 1361
{ 
# 1362
_ValueType __t = *__p; 
# 1363
std::copy(__p + 1, __p + __n, __p); 
# 1364
(*((__p + __n) - 1)) = __t; 
# 1365
return __ret; 
# 1366
}  
# 1367
_RandomAccessIterator __q = __p + __k; 
# 1368
for (_Distance __i = (0); __i < (__n - __k); ++__i) 
# 1369
{ 
# 1370
std::iter_swap(__p, __q); 
# 1371
++__p; 
# 1372
++__q; 
# 1373
}  
# 1374
__n %= __k; 
# 1375
if (__n == 0) { 
# 1376
return __ret; }  
# 1377
std::swap(__n, __k); 
# 1378
__k = (__n - __k); 
# 1379
} else 
# 1381
{ 
# 1382
__k = (__n - __k); 
# 1383
if (__is_pod(_ValueType) && (__k == 1)) 
# 1384
{ 
# 1385
_ValueType __t = *((__p + __n) - 1); 
# 1386
std::copy_backward(__p, (__p + __n) - 1, __p + __n); 
# 1387
(*__p) = __t; 
# 1388
return __ret; 
# 1389
}  
# 1390
_RandomAccessIterator __q = __p + __n; 
# 1391
__p = (__q - __k); 
# 1392
for (_Distance __i = (0); __i < (__n - __k); ++__i) 
# 1393
{ 
# 1394
--__p; 
# 1395
--__q; 
# 1396
std::iter_swap(__p, __q); 
# 1397
}  
# 1398
__n %= __k; 
# 1399
if (__n == 0) { 
# 1400
return __ret; }  
# 1401
std::swap(__n, __k); 
# 1402
}  
# 1403
}  
# 1404
} 
# 1429
template< class _ForwardIterator> inline _ForwardIterator 
# 1431
rotate(_ForwardIterator __first, _ForwardIterator __middle, _ForwardIterator 
# 1432
__last) 
# 1433
{ 
# 1437
; 
# 1438
; 
# 1440
return std::__rotate(__first, __middle, __last, std::__iterator_category(__first)); 
# 1442
} 
# 1444
}
# 1466
template< class _ForwardIterator, class _OutputIterator> inline _OutputIterator 
# 1468
rotate_copy(_ForwardIterator __first, _ForwardIterator __middle, _ForwardIterator 
# 1469
__last, _OutputIterator __result) 
# 1470
{ 
# 1475
; 
# 1476
; 
# 1478
return std::copy(__first, __middle, std::copy(__middle, __last, __result)); 
# 1480
} 
# 1483
template< class _ForwardIterator, class _Predicate> _ForwardIterator 
# 1485
__partition(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 1486
__pred, forward_iterator_tag) 
# 1487
{ 
# 1488
if (__first == __last) { 
# 1489
return __first; }  
# 1491
while (__pred(*__first)) { 
# 1492
if ((++__first) == __last) { 
# 1493
return __first; }  }  
# 1495
_ForwardIterator __next = __first; 
# 1497
while ((++__next) != __last) { 
# 1498
if (__pred(*__next)) 
# 1499
{ 
# 1500
std::iter_swap(__first, __next); 
# 1501
++__first; 
# 1502
}  }  
# 1504
return __first; 
# 1505
} 
# 1508
template< class _BidirectionalIterator, class _Predicate> _BidirectionalIterator 
# 1510
__partition(_BidirectionalIterator __first, _BidirectionalIterator __last, _Predicate 
# 1511
__pred, bidirectional_iterator_tag) 
# 1512
{ 
# 1513
while (true) 
# 1514
{ 
# 1515
while (true) { 
# 1516
if (__first == __last) { 
# 1517
return __first; } else { 
# 1518
if (__pred(*__first)) { 
# 1519
++__first; } else { 
# 1521
break; }  }  }  
# 1522
--__last; 
# 1523
while (true) { 
# 1524
if (__first == __last) { 
# 1525
return __first; } else { 
# 1526
if (!((bool)__pred(*__last))) { 
# 1527
--__last; } else { 
# 1529
break; }  }  }  
# 1530
std::iter_swap(__first, __last); 
# 1531
++__first; 
# 1532
}  
# 1533
} 
# 1543
template< class _ForwardIterator, class _Pointer, class _Predicate, class 
# 1544
_Distance> _ForwardIterator 
# 1546
__stable_partition_adaptive(_ForwardIterator __first, _ForwardIterator 
# 1547
__last, _Predicate 
# 1548
__pred, _Distance __len, _Pointer 
# 1549
__buffer, _Distance 
# 1550
__buffer_size) 
# 1551
{ 
# 1552
if (__len == 1) { 
# 1553
return __first; }  
# 1555
if (__len <= __buffer_size) 
# 1556
{ 
# 1557
_ForwardIterator __result1 = __first; 
# 1558
_Pointer __result2 = __buffer; 
# 1563
(*__result2) = (*__first); 
# 1564
++__result2; 
# 1565
++__first; 
# 1566
for (; __first != __last; ++__first) { 
# 1567
if (__pred(__first)) 
# 1568
{ 
# 1569
(*__result1) = (*__first); 
# 1570
++__result1; 
# 1571
} else 
# 1573
{ 
# 1574
(*__result2) = (*__first); 
# 1575
++__result2; 
# 1576
}  }  
# 1578
std::copy(__buffer, __result2, __result1); 
# 1579
return __result1; 
# 1580
}  
# 1582
_ForwardIterator __middle = __first; 
# 1583
std::advance(__middle, __len / 2); 
# 1584
_ForwardIterator __left_split = std::__stable_partition_adaptive(__first, __middle, __pred, __len / 2, __buffer, __buffer_size); 
# 1591
_Distance __right_len = __len - (__len / 2); 
# 1592
_ForwardIterator __right_split = std::__find_if_not_n(__middle, __right_len, __pred); 
# 1595
if (__right_len) { 
# 1596
__right_split = std::__stable_partition_adaptive(__right_split, __last, __pred, __right_len, __buffer, __buffer_size); }  
# 1601
std::rotate(__left_split, __middle, __right_split); 
# 1602
std::advance(__left_split, std::distance(__middle, __right_split)); 
# 1603
return __left_split; 
# 1604
} 
# 1606
template< class _ForwardIterator, class _Predicate> _ForwardIterator 
# 1608
__stable_partition(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 1609
__pred) 
# 1610
{ 
# 1611
__first = std::__find_if_not(__first, __last, __pred); 
# 1613
if (__first == __last) { 
# 1614
return __first; }  
# 1617
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 1619
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 1621
_Temporary_buffer< _ForwardIterator, typename iterator_traits< _ForwardIterator> ::value_type>  __buf(__first, __last); 
# 1622
return std::__stable_partition_adaptive(__first, __last, __pred, (_DistanceType)(__buf.requested_size()), (__buf.begin()), (_DistanceType)(__buf.size())); 
# 1627
} 
# 1646
template< class _ForwardIterator, class _Predicate> inline _ForwardIterator 
# 1648
stable_partition(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 1649
__pred) 
# 1650
{ 
# 1656
; 
# 1658
return std::__stable_partition(__first, __last, __gnu_cxx::__ops::__pred_iter(__pred)); 
# 1660
} 
# 1663
template< class _RandomAccessIterator, class _Compare> void 
# 1665
__heap_select(_RandomAccessIterator __first, _RandomAccessIterator 
# 1666
__middle, _RandomAccessIterator 
# 1667
__last, _Compare __comp) 
# 1668
{ 
# 1669
std::__make_heap(__first, __middle, __comp); 
# 1670
for (_RandomAccessIterator __i = __middle; __i < __last; ++__i) { 
# 1671
if (__comp(__i, __first)) { 
# 1672
std::__pop_heap(__first, __middle, __i, __comp); }  }  
# 1673
} 
# 1677
template< class _InputIterator, class _RandomAccessIterator, class 
# 1678
_Compare> _RandomAccessIterator 
# 1680
__partial_sort_copy(_InputIterator __first, _InputIterator __last, _RandomAccessIterator 
# 1681
__result_first, _RandomAccessIterator 
# 1682
__result_last, _Compare 
# 1683
__comp) 
# 1684
{ 
# 1686
typedef typename iterator_traits< _InputIterator> ::value_type _InputValueType; 
# 1687
typedef iterator_traits< _RandomAccessIterator>  _RItTraits; 
# 1688
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 1690
if (__result_first == __result_last) { 
# 1691
return __result_last; }  
# 1692
_RandomAccessIterator __result_real_last = __result_first; 
# 1693
while ((__first != __last) && (__result_real_last != __result_last)) 
# 1694
{ 
# 1695
(*__result_real_last) = (*__first); 
# 1696
++__result_real_last; 
# 1697
++__first; 
# 1698
}  
# 1700
std::__make_heap(__result_first, __result_real_last, __comp); 
# 1701
while (__first != __last) 
# 1702
{ 
# 1703
if (__comp(__first, __result_first)) { 
# 1704
std::__adjust_heap(__result_first, (_DistanceType)0, (_DistanceType)(__result_real_last - __result_first), (_InputValueType)(*__first), __comp); }  
# 1708
++__first; 
# 1709
}  
# 1710
std::__sort_heap(__result_first, __result_real_last, __comp); 
# 1711
return __result_real_last; 
# 1712
} 
# 1732
template< class _InputIterator, class _RandomAccessIterator> inline _RandomAccessIterator 
# 1734
partial_sort_copy(_InputIterator __first, _InputIterator __last, _RandomAccessIterator 
# 1735
__result_first, _RandomAccessIterator 
# 1736
__result_last) 
# 1737
{ 
# 1739
typedef typename iterator_traits< _InputIterator> ::value_type _InputValueType; 
# 1741
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _OutputValueType; 
# 1743
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 1752
; 
# 1753
; 
# 1755
return std::__partial_sort_copy(__first, __last, __result_first, __result_last, __gnu_cxx::__ops::__iter_less_iter()); 
# 1758
} 
# 1780
template< class _InputIterator, class _RandomAccessIterator, class 
# 1781
_Compare> inline _RandomAccessIterator 
# 1783
partial_sort_copy(_InputIterator __first, _InputIterator __last, _RandomAccessIterator 
# 1784
__result_first, _RandomAccessIterator 
# 1785
__result_last, _Compare 
# 1786
__comp) 
# 1787
{ 
# 1789
typedef typename iterator_traits< _InputIterator> ::value_type _InputValueType; 
# 1791
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _OutputValueType; 
# 1793
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 1805
; 
# 1806
; 
# 1808
return std::__partial_sort_copy(__first, __last, __result_first, __result_last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 1811
} 
# 1814
template< class _RandomAccessIterator, class _Compare> void 
# 1816
__unguarded_linear_insert(_RandomAccessIterator __last, _Compare 
# 1817
__comp) 
# 1818
{ 
# 1820
typename iterator_traits< _RandomAccessIterator> ::value_type __val = *__last; 
# 1821
_RandomAccessIterator __next = __last; 
# 1822
--__next; 
# 1823
while (__comp(__val, __next)) 
# 1824
{ 
# 1825
(*__last) = (*__next); 
# 1826
__last = __next; 
# 1827
--__next; 
# 1828
}  
# 1829
(*__last) = __val; 
# 1830
} 
# 1833
template< class _RandomAccessIterator, class _Compare> void 
# 1835
__insertion_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 1836
__last, _Compare __comp) 
# 1837
{ 
# 1838
if (__first == __last) { return; }  
# 1840
for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i) 
# 1841
{ 
# 1842
if (__comp(__i, __first)) 
# 1843
{ 
# 1845
typename iterator_traits< _RandomAccessIterator> ::value_type __val = *__i; 
# 1846
std::copy_backward(__first, __i, __i + 1); 
# 1847
(*__first) = __val; 
# 1848
} else { 
# 1850
std::__unguarded_linear_insert(__i, __gnu_cxx::__ops::__val_comp_iter(__comp)); }  
# 1852
}  
# 1853
} 
# 1856
template< class _RandomAccessIterator, class _Compare> inline void 
# 1858
__unguarded_insertion_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 1859
__last, _Compare __comp) 
# 1860
{ 
# 1861
for (_RandomAccessIterator __i = __first; __i != __last; ++__i) { 
# 1862
std::__unguarded_linear_insert(__i, __gnu_cxx::__ops::__val_comp_iter(__comp)); }  
# 1864
} 
# 1870
enum { _S_threshold = 16}; 
# 1873
template< class _RandomAccessIterator, class _Compare> void 
# 1875
__final_insertion_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 1876
__last, _Compare __comp) 
# 1877
{ 
# 1878
if ((__last - __first) > ((int)_S_threshold)) 
# 1879
{ 
# 1880
std::__insertion_sort(__first, __first + ((int)_S_threshold), __comp); 
# 1881
std::__unguarded_insertion_sort(__first + ((int)_S_threshold), __last, __comp); 
# 1883
} else { 
# 1885
std::__insertion_sort(__first, __last, __comp); }  
# 1886
} 
# 1889
template< class _RandomAccessIterator, class _Compare> _RandomAccessIterator 
# 1891
__unguarded_partition(_RandomAccessIterator __first, _RandomAccessIterator 
# 1892
__last, _RandomAccessIterator 
# 1893
__pivot, _Compare __comp) 
# 1894
{ 
# 1895
while (true) 
# 1896
{ 
# 1897
while (__comp(__first, __pivot)) { 
# 1898
++__first; }  
# 1899
--__last; 
# 1900
while (__comp(__pivot, __last)) { 
# 1901
--__last; }  
# 1902
if (!(__first < __last)) { 
# 1903
return __first; }  
# 1904
std::iter_swap(__first, __last); 
# 1905
++__first; 
# 1906
}  
# 1907
} 
# 1910
template< class _RandomAccessIterator, class _Compare> inline _RandomAccessIterator 
# 1912
__unguarded_partition_pivot(_RandomAccessIterator __first, _RandomAccessIterator 
# 1913
__last, _Compare __comp) 
# 1914
{ 
# 1915
_RandomAccessIterator __mid = __first + ((__last - __first) / 2); 
# 1916
std::__move_median_to_first(__first, __first + 1, __mid, __last - 1, __comp); 
# 1918
return std::__unguarded_partition(__first + 1, __last, __first, __comp); 
# 1919
} 
# 1921
template< class _RandomAccessIterator, class _Compare> inline void 
# 1923
__partial_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 1924
__middle, _RandomAccessIterator 
# 1925
__last, _Compare 
# 1926
__comp) 
# 1927
{ 
# 1928
std::__heap_select(__first, __middle, __last, __comp); 
# 1929
std::__sort_heap(__first, __middle, __comp); 
# 1930
} 
# 1933
template< class _RandomAccessIterator, class _Size, class _Compare> void 
# 1935
__introsort_loop(_RandomAccessIterator __first, _RandomAccessIterator 
# 1936
__last, _Size 
# 1937
__depth_limit, _Compare __comp) 
# 1938
{ 
# 1939
while ((__last - __first) > ((int)_S_threshold)) 
# 1940
{ 
# 1941
if (__depth_limit == 0) 
# 1942
{ 
# 1943
std::__partial_sort(__first, __last, __last, __comp); 
# 1944
return; 
# 1945
}  
# 1946
--__depth_limit; 
# 1947
_RandomAccessIterator __cut = std::__unguarded_partition_pivot(__first, __last, __comp); 
# 1949
std::__introsort_loop(__cut, __last, __depth_limit, __comp); 
# 1950
__last = __cut; 
# 1951
}  
# 1952
} 
# 1956
template< class _RandomAccessIterator, class _Compare> inline void 
# 1958
__sort(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 1959
__comp) 
# 1960
{ 
# 1961
if (__first != __last) 
# 1962
{ 
# 1963
std::__introsort_loop(__first, __last, std::__lg(__last - __first) * 2, __comp); 
# 1966
std::__final_insertion_sort(__first, __last, __comp); 
# 1967
}  
# 1968
} 
# 1970
template< class _RandomAccessIterator, class _Size, class _Compare> void 
# 1972
__introselect(_RandomAccessIterator __first, _RandomAccessIterator __nth, _RandomAccessIterator 
# 1973
__last, _Size __depth_limit, _Compare 
# 1974
__comp) 
# 1975
{ 
# 1976
while ((__last - __first) > 3) 
# 1977
{ 
# 1978
if (__depth_limit == 0) 
# 1979
{ 
# 1980
std::__heap_select(__first, __nth + 1, __last, __comp); 
# 1982
std::iter_swap(__first, __nth); 
# 1983
return; 
# 1984
}  
# 1985
--__depth_limit; 
# 1986
_RandomAccessIterator __cut = std::__unguarded_partition_pivot(__first, __last, __comp); 
# 1988
if (__cut <= __nth) { 
# 1989
__first = __cut; } else { 
# 1991
__last = __cut; }  
# 1992
}  
# 1993
std::__insertion_sort(__first, __last, __comp); 
# 1994
} 
# 2016
template< class _ForwardIterator, class _Tp, class _Compare> inline _ForwardIterator 
# 2018
lower_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2019
__val, _Compare __comp) 
# 2020
{ 
# 2022
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2029
; 
# 2031
return std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 2033
} 
# 2035
template< class _ForwardIterator, class _Tp, class _Compare> _ForwardIterator 
# 2037
__upper_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2038
__val, _Compare __comp) 
# 2039
{ 
# 2041
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 2043
_DistanceType __len = std::distance(__first, __last); 
# 2045
while (__len > 0) 
# 2046
{ 
# 2047
_DistanceType __half = __len >> 1; 
# 2048
_ForwardIterator __middle = __first; 
# 2049
std::advance(__middle, __half); 
# 2050
if (__comp(__val, __middle)) { 
# 2051
__len = __half; } else 
# 2053
{ 
# 2054
__first = __middle; 
# 2055
++__first; 
# 2056
__len = ((__len - __half) - 1); 
# 2057
}  
# 2058
}  
# 2059
return __first; 
# 2060
} 
# 2073
template< class _ForwardIterator, class _Tp> inline _ForwardIterator 
# 2075
upper_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2076
__val) 
# 2077
{ 
# 2079
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2084
; 
# 2086
return std::__upper_bound(__first, __last, __val, __gnu_cxx::__ops::__val_less_iter()); 
# 2088
} 
# 2105
template< class _ForwardIterator, class _Tp, class _Compare> inline _ForwardIterator 
# 2107
upper_bound(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2108
__val, _Compare __comp) 
# 2109
{ 
# 2111
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2118
; 
# 2120
return std::__upper_bound(__first, __last, __val, __gnu_cxx::__ops::__val_comp_iter(__comp)); 
# 2122
} 
# 2124
template< class _ForwardIterator, class _Tp, class 
# 2125
_CompareItTp, class _CompareTpIt> pair< _ForwardIterator, _ForwardIterator>  
# 2127
__equal_range(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2128
__val, _CompareItTp 
# 2129
__comp_it_val, _CompareTpIt __comp_val_it) 
# 2130
{ 
# 2132
typedef typename iterator_traits< _ForwardIterator> ::difference_type _DistanceType; 
# 2134
_DistanceType __len = std::distance(__first, __last); 
# 2136
while (__len > 0) 
# 2137
{ 
# 2138
_DistanceType __half = __len >> 1; 
# 2139
_ForwardIterator __middle = __first; 
# 2140
std::advance(__middle, __half); 
# 2141
if (__comp_it_val(__middle, __val)) 
# 2142
{ 
# 2143
__first = __middle; 
# 2144
++__first; 
# 2145
__len = ((__len - __half) - 1); 
# 2146
} else { 
# 2147
if (__comp_val_it(__val, __middle)) { 
# 2148
__len = __half; } else 
# 2150
{ 
# 2151
_ForwardIterator __left = std::__lower_bound(__first, __middle, __val, __comp_it_val); 
# 2153
std::advance(__first, __len); 
# 2154
_ForwardIterator __right = std::__upper_bound(++__middle, __first, __val, __comp_val_it); 
# 2156
return pair< _ForwardIterator, _ForwardIterator> (__left, __right); 
# 2157
}  }  
# 2158
}  
# 2159
return pair< _ForwardIterator, _ForwardIterator> (__first, __first); 
# 2160
} 
# 2179
template< class _ForwardIterator, class _Tp> inline pair< _ForwardIterator, _ForwardIterator>  
# 2181
equal_range(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2182
__val) 
# 2183
{ 
# 2185
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2191
; 
# 2192
; 
# 2194
return std::__equal_range(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val(), __gnu_cxx::__ops::__val_less_iter()); 
# 2197
} 
# 2216
template< class _ForwardIterator, class _Tp, class _Compare> inline pair< _ForwardIterator, _ForwardIterator>  
# 2218
equal_range(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2219
__val, _Compare __comp) 
# 2220
{ 
# 2222
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2231
; 
# 2233
; 
# 2235
return std::__equal_range(__first, __last, __val, __gnu_cxx::__ops::__iter_comp_val(__comp), __gnu_cxx::__ops::__val_comp_iter(__comp)); 
# 2238
} 
# 2252
template< class _ForwardIterator, class _Tp> bool 
# 2254
binary_search(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2255
__val) 
# 2256
{ 
# 2258
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2263
; 
# 2264
; 
# 2266
_ForwardIterator __i = std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_less_val()); 
# 2269
return (__i != __last) && (!(__val < (*__i))); 
# 2270
} 
# 2287
template< class _ForwardIterator, class _Tp, class _Compare> bool 
# 2289
binary_search(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 2290
__val, _Compare __comp) 
# 2291
{ 
# 2293
typedef typename iterator_traits< _ForwardIterator> ::value_type _ValueType; 
# 2300
; 
# 2302
; 
# 2304
_ForwardIterator __i = std::__lower_bound(__first, __last, __val, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 2307
return (__i != __last) && (!((bool)__comp(__val, *__i))); 
# 2308
} 
# 2313
template< class _InputIterator1, class _InputIterator2, class 
# 2314
_OutputIterator, class _Compare> void 
# 2316
__move_merge_adaptive(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2317
__first2, _InputIterator2 __last2, _OutputIterator 
# 2318
__result, _Compare __comp) 
# 2319
{ 
# 2320
while ((__first1 != __last1) && (__first2 != __last2)) 
# 2321
{ 
# 2322
if (__comp(__first2, __first1)) 
# 2323
{ 
# 2324
(*__result) = (*__first2); 
# 2325
++__first2; 
# 2326
} else 
# 2328
{ 
# 2329
(*__result) = (*__first1); 
# 2330
++__first1; 
# 2331
}  
# 2332
++__result; 
# 2333
}  
# 2334
if (__first1 != __last1) { 
# 2335
std::copy(__first1, __last1, __result); }  
# 2336
} 
# 2339
template< class _BidirectionalIterator1, class _BidirectionalIterator2, class 
# 2340
_BidirectionalIterator3, class _Compare> void 
# 2342
__move_merge_adaptive_backward(_BidirectionalIterator1 __first1, _BidirectionalIterator1 
# 2343
__last1, _BidirectionalIterator2 
# 2344
__first2, _BidirectionalIterator2 
# 2345
__last2, _BidirectionalIterator3 
# 2346
__result, _Compare 
# 2347
__comp) 
# 2348
{ 
# 2349
if (__first1 == __last1) 
# 2350
{ 
# 2351
std::copy_backward(__first2, __last2, __result); 
# 2352
return; 
# 2353
} else { 
# 2354
if (__first2 == __last2) { 
# 2355
return; }  }  
# 2357
--__last1; 
# 2358
--__last2; 
# 2359
while (true) 
# 2360
{ 
# 2361
if (__comp(__last2, __last1)) 
# 2362
{ 
# 2363
(*(--__result)) = (*__last1); 
# 2364
if (__first1 == __last1) 
# 2365
{ 
# 2366
std::copy_backward(__first2, ++__last2, __result); 
# 2367
return; 
# 2368
}  
# 2369
--__last1; 
# 2370
} else 
# 2372
{ 
# 2373
(*(--__result)) = (*__last2); 
# 2374
if (__first2 == __last2) { 
# 2375
return; }  
# 2376
--__last2; 
# 2377
}  
# 2378
}  
# 2379
} 
# 2382
template< class _BidirectionalIterator1, class _BidirectionalIterator2, class 
# 2383
_Distance> _BidirectionalIterator1 
# 2385
__rotate_adaptive(_BidirectionalIterator1 __first, _BidirectionalIterator1 
# 2386
__middle, _BidirectionalIterator1 
# 2387
__last, _Distance 
# 2388
__len1, _Distance __len2, _BidirectionalIterator2 
# 2389
__buffer, _Distance 
# 2390
__buffer_size) 
# 2391
{ 
# 2392
_BidirectionalIterator2 __buffer_end; 
# 2393
if ((__len1 > __len2) && (__len2 <= __buffer_size)) 
# 2394
{ 
# 2395
if (__len2) 
# 2396
{ 
# 2397
__buffer_end = std::copy(__middle, __last, __buffer); 
# 2398
std::copy_backward(__first, __middle, __last); 
# 2399
return std::copy(__buffer, __buffer_end, __first); 
# 2400
} else { 
# 2402
return __first; }  
# 2403
} else { 
# 2404
if (__len1 <= __buffer_size) 
# 2405
{ 
# 2406
if (__len1) 
# 2407
{ 
# 2408
__buffer_end = std::copy(__first, __middle, __buffer); 
# 2409
std::copy(__middle, __last, __first); 
# 2410
return std::copy_backward(__buffer, __buffer_end, __last); 
# 2411
} else { 
# 2413
return __last; }  
# 2414
} else 
# 2416
{ 
# 2417
std::rotate(__first, __middle, __last); 
# 2418
std::advance(__first, std::distance(__middle, __last)); 
# 2419
return __first; 
# 2420
}  }  
# 2421
} 
# 2424
template< class _BidirectionalIterator, class _Distance, class 
# 2425
_Pointer, class _Compare> void 
# 2427
__merge_adaptive(_BidirectionalIterator __first, _BidirectionalIterator 
# 2428
__middle, _BidirectionalIterator 
# 2429
__last, _Distance 
# 2430
__len1, _Distance __len2, _Pointer 
# 2431
__buffer, _Distance __buffer_size, _Compare 
# 2432
__comp) 
# 2433
{ 
# 2434
if ((__len1 <= __len2) && (__len1 <= __buffer_size)) 
# 2435
{ 
# 2436
_Pointer __buffer_end = std::copy(__first, __middle, __buffer); 
# 2437
std::__move_merge_adaptive(__buffer, __buffer_end, __middle, __last, __first, __comp); 
# 2439
} else { 
# 2440
if (__len2 <= __buffer_size) 
# 2441
{ 
# 2442
_Pointer __buffer_end = std::copy(__middle, __last, __buffer); 
# 2443
std::__move_merge_adaptive_backward(__first, __middle, __buffer, __buffer_end, __last, __comp); 
# 2445
} else 
# 2447
{ 
# 2448
_BidirectionalIterator __first_cut = __first; 
# 2449
_BidirectionalIterator __second_cut = __middle; 
# 2450
_Distance __len11 = (0); 
# 2451
_Distance __len22 = (0); 
# 2452
if (__len1 > __len2) 
# 2453
{ 
# 2454
__len11 = (__len1 / 2); 
# 2455
std::advance(__first_cut, __len11); 
# 2456
__second_cut = std::__lower_bound(__middle, __last, *__first_cut, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 2459
__len22 = std::distance(__middle, __second_cut); 
# 2460
} else 
# 2462
{ 
# 2463
__len22 = (__len2 / 2); 
# 2464
std::advance(__second_cut, __len22); 
# 2465
__first_cut = std::__upper_bound(__first, __middle, *__second_cut, __gnu_cxx::__ops::__val_comp_iter(__comp)); 
# 2468
__len11 = std::distance(__first, __first_cut); 
# 2469
}  
# 2471
_BidirectionalIterator __new_middle = std::__rotate_adaptive(__first_cut, __middle, __second_cut, __len1 - __len11, __len22, __buffer, __buffer_size); 
# 2475
std::__merge_adaptive(__first, __first_cut, __new_middle, __len11, __len22, __buffer, __buffer_size, __comp); 
# 2477
std::__merge_adaptive(__new_middle, __second_cut, __last, __len1 - __len11, __len2 - __len22, __buffer, __buffer_size, __comp); 
# 2481
}  }  
# 2482
} 
# 2485
template< class _BidirectionalIterator, class _Distance, class 
# 2486
_Compare> void 
# 2488
__merge_without_buffer(_BidirectionalIterator __first, _BidirectionalIterator 
# 2489
__middle, _BidirectionalIterator 
# 2490
__last, _Distance 
# 2491
__len1, _Distance __len2, _Compare 
# 2492
__comp) 
# 2493
{ 
# 2494
if ((__len1 == 0) || (__len2 == 0)) { 
# 2495
return; }  
# 2497
if ((__len1 + __len2) == 2) 
# 2498
{ 
# 2499
if (__comp(__middle, __first)) { 
# 2500
std::iter_swap(__first, __middle); }  
# 2501
return; 
# 2502
}  
# 2504
_BidirectionalIterator __first_cut = __first; 
# 2505
_BidirectionalIterator __second_cut = __middle; 
# 2506
_Distance __len11 = (0); 
# 2507
_Distance __len22 = (0); 
# 2508
if (__len1 > __len2) 
# 2509
{ 
# 2510
__len11 = (__len1 / 2); 
# 2511
std::advance(__first_cut, __len11); 
# 2512
__second_cut = std::__lower_bound(__middle, __last, *__first_cut, __gnu_cxx::__ops::__iter_comp_val(__comp)); 
# 2515
__len22 = std::distance(__middle, __second_cut); 
# 2516
} else 
# 2518
{ 
# 2519
__len22 = (__len2 / 2); 
# 2520
std::advance(__second_cut, __len22); 
# 2521
__first_cut = std::__upper_bound(__first, __middle, *__second_cut, __gnu_cxx::__ops::__val_comp_iter(__comp)); 
# 2524
__len11 = std::distance(__first, __first_cut); 
# 2525
}  
# 2527
std::rotate(__first_cut, __middle, __second_cut); 
# 2528
_BidirectionalIterator __new_middle = __first_cut; 
# 2529
std::advance(__new_middle, std::distance(__middle, __second_cut)); 
# 2530
std::__merge_without_buffer(__first, __first_cut, __new_middle, __len11, __len22, __comp); 
# 2532
std::__merge_without_buffer(__new_middle, __second_cut, __last, __len1 - __len11, __len2 - __len22, __comp); 
# 2534
} 
# 2536
template< class _BidirectionalIterator, class _Compare> void 
# 2538
__inplace_merge(_BidirectionalIterator __first, _BidirectionalIterator 
# 2539
__middle, _BidirectionalIterator 
# 2540
__last, _Compare 
# 2541
__comp) 
# 2542
{ 
# 2544
typedef typename iterator_traits< _BidirectionalIterator> ::value_type _ValueType; 
# 2546
typedef typename iterator_traits< _BidirectionalIterator> ::difference_type _DistanceType; 
# 2548
if ((__first == __middle) || (__middle == __last)) { 
# 2549
return; }  
# 2551
const _DistanceType __len1 = std::distance(__first, __middle); 
# 2552
const _DistanceType __len2 = std::distance(__middle, __last); 
# 2554
typedef _Temporary_buffer< _BidirectionalIterator, typename iterator_traits< _BidirectionalIterator> ::value_type>  _TmpBuf; 
# 2555
_TmpBuf __buf(__first, __last); 
# 2557
if ((__buf.begin()) == 0) { 
# 2558
std::__merge_without_buffer(__first, __middle, __last, __len1, __len2, __comp); } else { 
# 2561
std::__merge_adaptive(__first, __middle, __last, __len1, __len2, (__buf.begin()), (_DistanceType)(__buf.size()), __comp); }  
# 2564
} 
# 2584
template< class _BidirectionalIterator> inline void 
# 2586
inplace_merge(_BidirectionalIterator __first, _BidirectionalIterator 
# 2587
__middle, _BidirectionalIterator 
# 2588
__last) 
# 2589
{ 
# 2595
; 
# 2596
; 
# 2598
std::__inplace_merge(__first, __middle, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 2600
} 
# 2624
template< class _BidirectionalIterator, class _Compare> inline void 
# 2626
inplace_merge(_BidirectionalIterator __first, _BidirectionalIterator 
# 2627
__middle, _BidirectionalIterator 
# 2628
__last, _Compare 
# 2629
__comp) 
# 2630
{ 
# 2637
; 
# 2638
; 
# 2640
std::__inplace_merge(__first, __middle, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 2642
} 
# 2646
template< class _InputIterator, class _OutputIterator, class 
# 2647
_Compare> _OutputIterator 
# 2649
__move_merge(_InputIterator __first1, _InputIterator __last1, _InputIterator 
# 2650
__first2, _InputIterator __last2, _OutputIterator 
# 2651
__result, _Compare __comp) 
# 2652
{ 
# 2653
while ((__first1 != __last1) && (__first2 != __last2)) 
# 2654
{ 
# 2655
if (__comp(__first2, __first1)) 
# 2656
{ 
# 2657
(*__result) = (*__first2); 
# 2658
++__first2; 
# 2659
} else 
# 2661
{ 
# 2662
(*__result) = (*__first1); 
# 2663
++__first1; 
# 2664
}  
# 2665
++__result; 
# 2666
}  
# 2667
return std::copy(__first2, __last2, std::copy(__first1, __last1, __result)); 
# 2670
} 
# 2672
template< class _RandomAccessIterator1, class _RandomAccessIterator2, class 
# 2673
_Distance, class _Compare> void 
# 2675
__merge_sort_loop(_RandomAccessIterator1 __first, _RandomAccessIterator1 
# 2676
__last, _RandomAccessIterator2 
# 2677
__result, _Distance __step_size, _Compare 
# 2678
__comp) 
# 2679
{ 
# 2680
const _Distance __two_step = 2 * __step_size; 
# 2682
while ((__last - __first) >= __two_step) 
# 2683
{ 
# 2684
__result = std::__move_merge(__first, __first + __step_size, __first + __step_size, __first + __two_step, __result, __comp); 
# 2688
__first += __two_step; 
# 2689
}  
# 2690
__step_size = std::min((_Distance)(__last - __first), __step_size); 
# 2692
std::__move_merge(__first, __first + __step_size, __first + __step_size, __last, __result, __comp); 
# 2694
} 
# 2696
template< class _RandomAccessIterator, class _Distance, class 
# 2697
_Compare> void 
# 2699
__chunk_insertion_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 2700
__last, _Distance 
# 2701
__chunk_size, _Compare __comp) 
# 2702
{ 
# 2703
while ((__last - __first) >= __chunk_size) 
# 2704
{ 
# 2705
std::__insertion_sort(__first, __first + __chunk_size, __comp); 
# 2706
__first += __chunk_size; 
# 2707
}  
# 2708
std::__insertion_sort(__first, __last, __comp); 
# 2709
} 
# 2711
enum { _S_chunk_size = 7}; 
# 2713
template< class _RandomAccessIterator, class _Pointer, class _Compare> void 
# 2715
__merge_sort_with_buffer(_RandomAccessIterator __first, _RandomAccessIterator 
# 2716
__last, _Pointer 
# 2717
__buffer, _Compare __comp) 
# 2718
{ 
# 2720
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _Distance; 
# 2722
const _Distance __len = __last - __first; 
# 2723
const _Pointer __buffer_last = __buffer + __len; 
# 2725
_Distance __step_size = (_S_chunk_size); 
# 2726
std::__chunk_insertion_sort(__first, __last, __step_size, __comp); 
# 2728
while (__step_size < __len) 
# 2729
{ 
# 2730
std::__merge_sort_loop(__first, __last, __buffer, __step_size, __comp); 
# 2732
__step_size *= 2; 
# 2733
std::__merge_sort_loop(__buffer, __buffer_last, __first, __step_size, __comp); 
# 2735
__step_size *= 2; 
# 2736
}  
# 2737
} 
# 2739
template< class _RandomAccessIterator, class _Pointer, class 
# 2740
_Distance, class _Compare> void 
# 2742
__stable_sort_adaptive(_RandomAccessIterator __first, _RandomAccessIterator 
# 2743
__last, _Pointer 
# 2744
__buffer, _Distance __buffer_size, _Compare 
# 2745
__comp) 
# 2746
{ 
# 2747
const _Distance __len = ((__last - __first) + 1) / 2; 
# 2748
const _RandomAccessIterator __middle = __first + __len; 
# 2749
if (__len > __buffer_size) 
# 2750
{ 
# 2751
std::__stable_sort_adaptive(__first, __middle, __buffer, __buffer_size, __comp); 
# 2753
std::__stable_sort_adaptive(__middle, __last, __buffer, __buffer_size, __comp); 
# 2755
} else 
# 2757
{ 
# 2758
std::__merge_sort_with_buffer(__first, __middle, __buffer, __comp); 
# 2759
std::__merge_sort_with_buffer(__middle, __last, __buffer, __comp); 
# 2760
}  
# 2761
std::__merge_adaptive(__first, __middle, __last, (_Distance)(__middle - __first), (_Distance)(__last - __middle), __buffer, __buffer_size, __comp); 
# 2766
} 
# 2769
template< class _RandomAccessIterator, class _Compare> void 
# 2771
__inplace_stable_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 2772
__last, _Compare __comp) 
# 2773
{ 
# 2774
if ((__last - __first) < 15) 
# 2775
{ 
# 2776
std::__insertion_sort(__first, __last, __comp); 
# 2777
return; 
# 2778
}  
# 2779
_RandomAccessIterator __middle = __first + ((__last - __first) / 2); 
# 2780
std::__inplace_stable_sort(__first, __middle, __comp); 
# 2781
std::__inplace_stable_sort(__middle, __last, __comp); 
# 2782
std::__merge_without_buffer(__first, __middle, __last, __middle - __first, __last - __middle, __comp); 
# 2786
} 
# 2795
template< class _InputIterator1, class _InputIterator2, class 
# 2796
_Compare> bool 
# 2798
__includes(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2799
__first2, _InputIterator2 __last2, _Compare 
# 2800
__comp) 
# 2801
{ 
# 2802
while ((__first1 != __last1) && (__first2 != __last2)) { 
# 2803
if (__comp(__first2, __first1)) { 
# 2804
return false; } else { 
# 2805
if (__comp(__first1, __first2)) { 
# 2806
++__first1; } else { 
# 2808
(++__first1), (++__first2); }  }  }  
# 2810
return __first2 == __last2; 
# 2811
} 
# 2831
template< class _InputIterator1, class _InputIterator2> inline bool 
# 2833
includes(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2834
__first2, _InputIterator2 __last2) 
# 2835
{ 
# 2845
; 
# 2846
; 
# 2848
return std::__includes(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_less_iter()); 
# 2850
} 
# 2873
template< class _InputIterator1, class _InputIterator2, class 
# 2874
_Compare> inline bool 
# 2876
includes(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 2877
__first2, _InputIterator2 __last2, _Compare 
# 2878
__comp) 
# 2879
{ 
# 2889
; 
# 2890
; 
# 2892
return std::__includes(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 2894
} 
# 2906
template< class _BidirectionalIterator, class _Compare> bool 
# 2908
__next_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 2909
__last, _Compare __comp) 
# 2910
{ 
# 2911
if (__first == __last) { 
# 2912
return false; }  
# 2913
_BidirectionalIterator __i = __first; 
# 2914
++__i; 
# 2915
if (__i == __last) { 
# 2916
return false; }  
# 2917
__i = __last; 
# 2918
--__i; 
# 2920
for (; ;) 
# 2921
{ 
# 2922
_BidirectionalIterator __ii = __i; 
# 2923
--__i; 
# 2924
if (__comp(__i, __ii)) 
# 2925
{ 
# 2926
_BidirectionalIterator __j = __last; 
# 2927
while (!__comp(__i, --__j)) 
# 2928
{ }  
# 2929
std::iter_swap(__i, __j); 
# 2930
std::__reverse(__ii, __last, std::__iterator_category(__first)); 
# 2932
return true; 
# 2933
}  
# 2934
if (__i == __first) 
# 2935
{ 
# 2936
std::__reverse(__first, __last, std::__iterator_category(__first)); 
# 2938
return false; 
# 2939
}  
# 2940
}  
# 2941
} 
# 2955
template< class _BidirectionalIterator> inline bool 
# 2957
next_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 2958
__last) 
# 2959
{ 
# 2965
; 
# 2967
return std::__next_permutation(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 2969
} 
# 2986
template< class _BidirectionalIterator, class _Compare> inline bool 
# 2988
next_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 2989
__last, _Compare __comp) 
# 2990
{ 
# 2997
; 
# 2999
return std::__next_permutation(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 3001
} 
# 3003
template< class _BidirectionalIterator, class _Compare> bool 
# 3005
__prev_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 3006
__last, _Compare __comp) 
# 3007
{ 
# 3008
if (__first == __last) { 
# 3009
return false; }  
# 3010
_BidirectionalIterator __i = __first; 
# 3011
++__i; 
# 3012
if (__i == __last) { 
# 3013
return false; }  
# 3014
__i = __last; 
# 3015
--__i; 
# 3017
for (; ;) 
# 3018
{ 
# 3019
_BidirectionalIterator __ii = __i; 
# 3020
--__i; 
# 3021
if (__comp(__ii, __i)) 
# 3022
{ 
# 3023
_BidirectionalIterator __j = __last; 
# 3024
while (!__comp(--__j, __i)) 
# 3025
{ }  
# 3026
std::iter_swap(__i, __j); 
# 3027
std::__reverse(__ii, __last, std::__iterator_category(__first)); 
# 3029
return true; 
# 3030
}  
# 3031
if (__i == __first) 
# 3032
{ 
# 3033
std::__reverse(__first, __last, std::__iterator_category(__first)); 
# 3035
return false; 
# 3036
}  
# 3037
}  
# 3038
} 
# 3053
template< class _BidirectionalIterator> inline bool 
# 3055
prev_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 3056
__last) 
# 3057
{ 
# 3063
; 
# 3065
return std::__prev_permutation(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 3067
} 
# 3084
template< class _BidirectionalIterator, class _Compare> inline bool 
# 3086
prev_permutation(_BidirectionalIterator __first, _BidirectionalIterator 
# 3087
__last, _Compare __comp) 
# 3088
{ 
# 3095
; 
# 3097
return std::__prev_permutation(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 3099
} 
# 3104
template< class _InputIterator, class _OutputIterator, class 
# 3105
_Predicate, class _Tp> _OutputIterator 
# 3107
__replace_copy_if(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 3108
__result, _Predicate 
# 3109
__pred, const _Tp &__new_value) 
# 3110
{ 
# 3111
for (; __first != __last; (++__first), (++__result)) { 
# 3112
if (__pred(__first)) { 
# 3113
(*__result) = __new_value; } else { 
# 3115
(*__result) = (*__first); }  }  
# 3116
return __result; 
# 3117
} 
# 3133
template< class _InputIterator, class _OutputIterator, class _Tp> inline _OutputIterator 
# 3135
replace_copy(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 3136
__result, const _Tp &
# 3137
__old_value, const _Tp &__new_value) 
# 3138
{ 
# 3145
; 
# 3147
return std::__replace_copy_if(__first, __last, __result, __gnu_cxx::__ops::__iter_equals_val(__old_value), __new_value); 
# 3150
} 
# 3167
template< class _InputIterator, class _OutputIterator, class 
# 3168
_Predicate, class _Tp> inline _OutputIterator 
# 3170
replace_copy_if(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 3171
__result, _Predicate 
# 3172
__pred, const _Tp &__new_value) 
# 3173
{ 
# 3180
; 
# 3182
return std::__replace_copy_if(__first, __last, __result, __gnu_cxx::__ops::__pred_iter(__pred), __new_value); 
# 3185
} 
# 3187
template< class _InputIterator, class _Predicate> typename iterator_traits< _InputIterator> ::difference_type 
# 3189
__count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred) 
# 3190
{ 
# 3191
typename iterator_traits< _InputIterator> ::difference_type __n = (0); 
# 3192
for (; __first != __last; ++__first) { 
# 3193
if (__pred(__first)) { 
# 3194
++__n; }  }  
# 3195
return __n; 
# 3196
} 
# 3759
template< class _InputIterator, class _Function> _Function 
# 3761
for_each(_InputIterator __first, _InputIterator __last, _Function __f) 
# 3762
{ 
# 3765
; 
# 3766
for (; __first != __last; ++__first) { 
# 3767
__f(*__first); }  
# 3768
return __f; 
# 3769
} 
# 3780
template< class _InputIterator, class _Tp> inline _InputIterator 
# 3782
find(_InputIterator __first, _InputIterator __last, const _Tp &
# 3783
__val) 
# 3784
{ 
# 3789
; 
# 3790
return std::__find_if(__first, __last, __gnu_cxx::__ops::__iter_equals_val(__val)); 
# 3792
} 
# 3804
template< class _InputIterator, class _Predicate> inline _InputIterator 
# 3806
find_if(_InputIterator __first, _InputIterator __last, _Predicate 
# 3807
__pred) 
# 3808
{ 
# 3813
; 
# 3815
return std::__find_if(__first, __last, __gnu_cxx::__ops::__pred_iter(__pred)); 
# 3817
} 
# 3835
template< class _InputIterator, class _ForwardIterator> _InputIterator 
# 3837
find_first_of(_InputIterator __first1, _InputIterator __last1, _ForwardIterator 
# 3838
__first2, _ForwardIterator __last2) 
# 3839
{ 
# 3846
; 
# 3847
; 
# 3849
for (; __first1 != __last1; ++__first1) { 
# 3850
for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter) { 
# 3851
if ((*__first1) == (*__iter)) { 
# 3852
return __first1; }  }  }  
# 3853
return __last1; 
# 3854
} 
# 3875
template< class _InputIterator, class _ForwardIterator, class 
# 3876
_BinaryPredicate> _InputIterator 
# 3878
find_first_of(_InputIterator __first1, _InputIterator __last1, _ForwardIterator 
# 3879
__first2, _ForwardIterator __last2, _BinaryPredicate 
# 3880
__comp) 
# 3881
{ 
# 3888
; 
# 3889
; 
# 3891
for (; __first1 != __last1; ++__first1) { 
# 3892
for (_ForwardIterator __iter = __first2; __iter != __last2; ++__iter) { 
# 3893
if (__comp(*__first1, *__iter)) { 
# 3894
return __first1; }  }  }  
# 3895
return __last1; 
# 3896
} 
# 3907
template< class _ForwardIterator> inline _ForwardIterator 
# 3909
adjacent_find(_ForwardIterator __first, _ForwardIterator __last) 
# 3910
{ 
# 3915
; 
# 3917
return std::__adjacent_find(__first, __last, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 3919
} 
# 3932
template< class _ForwardIterator, class _BinaryPredicate> inline _ForwardIterator 
# 3934
adjacent_find(_ForwardIterator __first, _ForwardIterator __last, _BinaryPredicate 
# 3935
__binary_pred) 
# 3936
{ 
# 3942
; 
# 3944
return std::__adjacent_find(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred)); 
# 3946
} 
# 3957
template< class _InputIterator, class _Tp> inline typename iterator_traits< _InputIterator> ::difference_type 
# 3959
count(_InputIterator __first, _InputIterator __last, const _Tp &__value) 
# 3960
{ 
# 3965
; 
# 3967
return std::__count_if(__first, __last, __gnu_cxx::__ops::__iter_equals_val(__value)); 
# 3969
} 
# 3980
template< class _InputIterator, class _Predicate> inline typename iterator_traits< _InputIterator> ::difference_type 
# 3982
count_if(_InputIterator __first, _InputIterator __last, _Predicate __pred) 
# 3983
{ 
# 3988
; 
# 3990
return std::__count_if(__first, __last, __gnu_cxx::__ops::__pred_iter(__pred)); 
# 3992
} 
# 4020
template< class _ForwardIterator1, class _ForwardIterator2> inline _ForwardIterator1 
# 4022
search(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 4023
__first2, _ForwardIterator2 __last2) 
# 4024
{ 
# 4031
; 
# 4032
; 
# 4034
return std::__search(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_equal_to_iter()); 
# 4036
} 
# 4059
template< class _ForwardIterator1, class _ForwardIterator2, class 
# 4060
_BinaryPredicate> inline _ForwardIterator1 
# 4062
search(_ForwardIterator1 __first1, _ForwardIterator1 __last1, _ForwardIterator2 
# 4063
__first2, _ForwardIterator2 __last2, _BinaryPredicate 
# 4064
__predicate) 
# 4065
{ 
# 4072
; 
# 4073
; 
# 4075
return std::__search(__first1, __last1, __first2, __last2, __gnu_cxx::__ops::__iter_comp_iter(__predicate)); 
# 4077
} 
# 4094
template< class _ForwardIterator, class _Integer, class _Tp> inline _ForwardIterator 
# 4096
search_n(_ForwardIterator __first, _ForwardIterator __last, _Integer 
# 4097
__count, const _Tp &__val) 
# 4098
{ 
# 4103
; 
# 4105
return std::__search_n(__first, __last, __count, __gnu_cxx::__ops::__iter_equals_val(__val)); 
# 4107
} 
# 4127
template< class _ForwardIterator, class _Integer, class _Tp, class 
# 4128
_BinaryPredicate> inline _ForwardIterator 
# 4130
search_n(_ForwardIterator __first, _ForwardIterator __last, _Integer 
# 4131
__count, const _Tp &__val, _BinaryPredicate 
# 4132
__binary_pred) 
# 4133
{ 
# 4138
; 
# 4140
return std::__search_n(__first, __last, __count, __gnu_cxx::__ops::__iter_comp_val(__binary_pred, __val)); 
# 4142
} 
# 4161
template< class _InputIterator, class _OutputIterator, class 
# 4162
_UnaryOperation> _OutputIterator 
# 4164
transform(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 4165
__result, _UnaryOperation __unary_op) 
# 4166
{ 
# 4172
; 
# 4174
for (; __first != __last; (++__first), (++__result)) { 
# 4175
(*__result) = __unary_op(*__first); }  
# 4176
return __result; 
# 4177
} 
# 4198
template< class _InputIterator1, class _InputIterator2, class 
# 4199
_OutputIterator, class _BinaryOperation> _OutputIterator 
# 4201
transform(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4202
__first2, _OutputIterator __result, _BinaryOperation 
# 4203
__binary_op) 
# 4204
{ 
# 4211
; 
# 4213
for (; __first1 != __last1; ((++__first1), (++__first2)), (++__result)) { 
# 4214
(*__result) = __binary_op(*__first1, *__first2); }  
# 4215
return __result; 
# 4216
} 
# 4231
template< class _ForwardIterator, class _Tp> void 
# 4233
replace(_ForwardIterator __first, _ForwardIterator __last, const _Tp &
# 4234
__old_value, const _Tp &__new_value) 
# 4235
{ 
# 4243
; 
# 4245
for (; __first != __last; ++__first) { 
# 4246
if ((*__first) == __old_value) { 
# 4247
(*__first) = __new_value; }  }  
# 4248
} 
# 4263
template< class _ForwardIterator, class _Predicate, class _Tp> void 
# 4265
replace_if(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 4266
__pred, const _Tp &__new_value) 
# 4267
{ 
# 4275
; 
# 4277
for (; __first != __last; ++__first) { 
# 4278
if (__pred(*__first)) { 
# 4279
(*__first) = __new_value; }  }  
# 4280
} 
# 4295
template< class _ForwardIterator, class _Generator> void 
# 4297
generate(_ForwardIterator __first, _ForwardIterator __last, _Generator 
# 4298
__gen) 
# 4299
{ 
# 4304
; 
# 4306
for (; __first != __last; ++__first) { 
# 4307
(*__first) = __gen(); }  
# 4308
} 
# 4326
template< class _OutputIterator, class _Size, class _Generator> _OutputIterator 
# 4328
generate_n(_OutputIterator __first, _Size __n, _Generator __gen) 
# 4329
{ 
# 4335
for (__decltype((__n + 0)) __niter = __n; __niter > 0; (--__niter), (++__first)) { 
# 4337
(*__first) = __gen(); }  
# 4338
return __first; 
# 4339
} 
# 4362
template< class _InputIterator, class _OutputIterator> inline _OutputIterator 
# 4364
unique_copy(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 4365
__result) 
# 4366
{ 
# 4373
; 
# 4375
if (__first == __last) { 
# 4376
return __result; }  
# 4377
return std::__unique_copy(__first, __last, __result, __gnu_cxx::__ops::__iter_equal_to_iter(), std::__iterator_category(__first), std::__iterator_category(__result)); 
# 4381
} 
# 4402
template< class _InputIterator, class _OutputIterator, class 
# 4403
_BinaryPredicate> inline _OutputIterator 
# 4405
unique_copy(_InputIterator __first, _InputIterator __last, _OutputIterator 
# 4406
__result, _BinaryPredicate 
# 4407
__binary_pred) 
# 4408
{ 
# 4413
; 
# 4415
if (__first == __last) { 
# 4416
return __result; }  
# 4417
return std::__unique_copy(__first, __last, __result, __gnu_cxx::__ops::__iter_comp_iter(__binary_pred), std::__iterator_category(__first), std::__iterator_category(__result)); 
# 4421
} 
# 4434
template< class _RandomAccessIterator> inline void 
# 4436
random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 4437
{ 
# 4441
; 
# 4443
if (__first != __last) { 
# 4444
for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i) 
# 4445
{ 
# 4447
_RandomAccessIterator __j = __first + (std::rand() % ((__i - __first) + 1)); 
# 4449
if (__i != __j) { 
# 4450
std::iter_swap(__i, __j); }  
# 4451
}  }  
# 4452
} 
# 4468
template< class _RandomAccessIterator, class _RandomNumberGenerator> void 
# 4470
random_shuffle(_RandomAccessIterator __first, _RandomAccessIterator __last, _RandomNumberGenerator &
# 4474
__rand) 
# 4476
{ 
# 4480
; 
# 4482
if (__first == __last) { 
# 4483
return; }  
# 4484
for (_RandomAccessIterator __i = __first + 1; __i != __last; ++__i) 
# 4485
{ 
# 4486
_RandomAccessIterator __j = __first + __rand((__i - __first) + 1); 
# 4487
if (__i != __j) { 
# 4488
std::iter_swap(__i, __j); }  
# 4489
}  
# 4490
} 
# 4508
template< class _ForwardIterator, class _Predicate> inline _ForwardIterator 
# 4510
partition(_ForwardIterator __first, _ForwardIterator __last, _Predicate 
# 4511
__pred) 
# 4512
{ 
# 4518
; 
# 4520
return std::__partition(__first, __last, __pred, std::__iterator_category(__first)); 
# 4522
} 
# 4541
template< class _RandomAccessIterator> inline void 
# 4543
partial_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 4544
__middle, _RandomAccessIterator 
# 4545
__last) 
# 4546
{ 
# 4552
; 
# 4553
; 
# 4555
std::__partial_sort(__first, __middle, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 4557
} 
# 4578
template< class _RandomAccessIterator, class _Compare> inline void 
# 4580
partial_sort(_RandomAccessIterator __first, _RandomAccessIterator 
# 4581
__middle, _RandomAccessIterator 
# 4582
__last, _Compare 
# 4583
__comp) 
# 4584
{ 
# 4591
; 
# 4592
; 
# 4594
std::__partial_sort(__first, __middle, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 4596
} 
# 4613
template< class _RandomAccessIterator> inline void 
# 4615
nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth, _RandomAccessIterator 
# 4616
__last) 
# 4617
{ 
# 4623
; 
# 4624
; 
# 4626
if ((__first == __last) || (__nth == __last)) { 
# 4627
return; }  
# 4629
std::__introselect(__first, __nth, __last, std::__lg(__last - __first) * 2, __gnu_cxx::__ops::__iter_less_iter()); 
# 4632
} 
# 4651
template< class _RandomAccessIterator, class _Compare> inline void 
# 4653
nth_element(_RandomAccessIterator __first, _RandomAccessIterator __nth, _RandomAccessIterator 
# 4654
__last, _Compare __comp) 
# 4655
{ 
# 4662
; 
# 4663
; 
# 4665
if ((__first == __last) || (__nth == __last)) { 
# 4666
return; }  
# 4668
std::__introselect(__first, __nth, __last, std::__lg(__last - __first) * 2, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 4671
} 
# 4687
template< class _RandomAccessIterator> inline void 
# 4689
sort(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 4690
{ 
# 4696
; 
# 4698
std::__sort(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 4699
} 
# 4716
template< class _RandomAccessIterator, class _Compare> inline void 
# 4718
sort(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 4719
__comp) 
# 4720
{ 
# 4727
; 
# 4729
std::__sort(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 4730
} 
# 4732
template< class _InputIterator1, class _InputIterator2, class 
# 4733
_OutputIterator, class _Compare> _OutputIterator 
# 4735
__merge(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4736
__first2, _InputIterator2 __last2, _OutputIterator 
# 4737
__result, _Compare __comp) 
# 4738
{ 
# 4739
while ((__first1 != __last1) && (__first2 != __last2)) 
# 4740
{ 
# 4741
if (__comp(__first2, __first1)) 
# 4742
{ 
# 4743
(*__result) = (*__first2); 
# 4744
++__first2; 
# 4745
} else 
# 4747
{ 
# 4748
(*__result) = (*__first1); 
# 4749
++__first1; 
# 4750
}  
# 4751
++__result; 
# 4752
}  
# 4753
return std::copy(__first2, __last2, std::copy(__first1, __last1, __result)); 
# 4755
} 
# 4776
template< class _InputIterator1, class _InputIterator2, class 
# 4777
_OutputIterator> inline _OutputIterator 
# 4779
merge(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4780
__first2, _InputIterator2 __last2, _OutputIterator 
# 4781
__result) 
# 4782
{ 
# 4793
; 
# 4794
; 
# 4796
return std::__merge(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_less_iter()); 
# 4799
} 
# 4824
template< class _InputIterator1, class _InputIterator2, class 
# 4825
_OutputIterator, class _Compare> inline _OutputIterator 
# 4827
merge(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4828
__first2, _InputIterator2 __last2, _OutputIterator 
# 4829
__result, _Compare __comp) 
# 4830
{ 
# 4841
; 
# 4842
; 
# 4844
return std::__merge(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 4847
} 
# 4849
template< class _RandomAccessIterator, class _Compare> inline void 
# 4851
__stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 4852
__comp) 
# 4853
{ 
# 4855
typedef typename iterator_traits< _RandomAccessIterator> ::value_type _ValueType; 
# 4857
typedef typename iterator_traits< _RandomAccessIterator> ::difference_type _DistanceType; 
# 4859
typedef _Temporary_buffer< _RandomAccessIterator, typename iterator_traits< _RandomAccessIterator> ::value_type>  _TmpBuf; 
# 4860
_TmpBuf __buf(__first, __last); 
# 4862
if ((__buf.begin()) == 0) { 
# 4863
std::__inplace_stable_sort(__first, __last, __comp); } else { 
# 4865
std::__stable_sort_adaptive(__first, __last, (__buf.begin()), (_DistanceType)(__buf.size()), __comp); }  
# 4867
} 
# 4886
template< class _RandomAccessIterator> inline void 
# 4888
stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last) 
# 4889
{ 
# 4895
; 
# 4897
std::__stable_sort(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 4899
} 
# 4919
template< class _RandomAccessIterator, class _Compare> inline void 
# 4921
stable_sort(_RandomAccessIterator __first, _RandomAccessIterator __last, _Compare 
# 4922
__comp) 
# 4923
{ 
# 4930
; 
# 4932
std::__stable_sort(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 4934
} 
# 4936
template< class _InputIterator1, class _InputIterator2, class 
# 4937
_OutputIterator, class 
# 4938
_Compare> _OutputIterator 
# 4940
__set_union(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4941
__first2, _InputIterator2 __last2, _OutputIterator 
# 4942
__result, _Compare __comp) 
# 4943
{ 
# 4944
while ((__first1 != __last1) && (__first2 != __last2)) 
# 4945
{ 
# 4946
if (__comp(__first1, __first2)) 
# 4947
{ 
# 4948
(*__result) = (*__first1); 
# 4949
++__first1; 
# 4950
} else { 
# 4951
if (__comp(__first2, __first1)) 
# 4952
{ 
# 4953
(*__result) = (*__first2); 
# 4954
++__first2; 
# 4955
} else 
# 4957
{ 
# 4958
(*__result) = (*__first1); 
# 4959
++__first1; 
# 4960
++__first2; 
# 4961
}  }  
# 4962
++__result; 
# 4963
}  
# 4964
return std::copy(__first2, __last2, std::copy(__first1, __last1, __result)); 
# 4966
} 
# 4986
template< class _InputIterator1, class _InputIterator2, class 
# 4987
_OutputIterator> inline _OutputIterator 
# 4989
set_union(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 4990
__first2, _InputIterator2 __last2, _OutputIterator 
# 4991
__result) 
# 4992
{ 
# 5006
; 
# 5007
; 
# 5009
return std::__set_union(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_less_iter()); 
# 5012
} 
# 5033
template< class _InputIterator1, class _InputIterator2, class 
# 5034
_OutputIterator, class _Compare> inline _OutputIterator 
# 5036
set_union(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5037
__first2, _InputIterator2 __last2, _OutputIterator 
# 5038
__result, _Compare __comp) 
# 5039
{ 
# 5053
; 
# 5054
; 
# 5056
return std::__set_union(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5059
} 
# 5061
template< class _InputIterator1, class _InputIterator2, class 
# 5062
_OutputIterator, class 
# 5063
_Compare> _OutputIterator 
# 5065
__set_intersection(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5066
__first2, _InputIterator2 __last2, _OutputIterator 
# 5067
__result, _Compare __comp) 
# 5068
{ 
# 5069
while ((__first1 != __last1) && (__first2 != __last2)) { 
# 5070
if (__comp(__first1, __first2)) { 
# 5071
++__first1; } else { 
# 5072
if (__comp(__first2, __first1)) { 
# 5073
++__first2; } else 
# 5075
{ 
# 5076
(*__result) = (*__first1); 
# 5077
++__first1; 
# 5078
++__first2; 
# 5079
++__result; 
# 5080
}  }  }  
# 5081
return __result; 
# 5082
} 
# 5101
template< class _InputIterator1, class _InputIterator2, class 
# 5102
_OutputIterator> inline _OutputIterator 
# 5104
set_intersection(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5105
__first2, _InputIterator2 __last2, _OutputIterator 
# 5106
__result) 
# 5107
{ 
# 5119
; 
# 5120
; 
# 5122
return std::__set_intersection(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_less_iter()); 
# 5125
} 
# 5147
template< class _InputIterator1, class _InputIterator2, class 
# 5148
_OutputIterator, class _Compare> inline _OutputIterator 
# 5150
set_intersection(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5151
__first2, _InputIterator2 __last2, _OutputIterator 
# 5152
__result, _Compare __comp) 
# 5153
{ 
# 5165
; 
# 5166
; 
# 5168
return std::__set_intersection(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5171
} 
# 5173
template< class _InputIterator1, class _InputIterator2, class 
# 5174
_OutputIterator, class 
# 5175
_Compare> _OutputIterator 
# 5177
__set_difference(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5178
__first2, _InputIterator2 __last2, _OutputIterator 
# 5179
__result, _Compare __comp) 
# 5180
{ 
# 5181
while ((__first1 != __last1) && (__first2 != __last2)) { 
# 5182
if (__comp(__first1, __first2)) 
# 5183
{ 
# 5184
(*__result) = (*__first1); 
# 5185
++__first1; 
# 5186
++__result; 
# 5187
} else { 
# 5188
if (__comp(__first2, __first1)) { 
# 5189
++__first2; } else 
# 5191
{ 
# 5192
++__first1; 
# 5193
++__first2; 
# 5194
}  }  }  
# 5195
return std::copy(__first1, __last1, __result); 
# 5196
} 
# 5217
template< class _InputIterator1, class _InputIterator2, class 
# 5218
_OutputIterator> inline _OutputIterator 
# 5220
set_difference(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5221
__first2, _InputIterator2 __last2, _OutputIterator 
# 5222
__result) 
# 5223
{ 
# 5235
; 
# 5236
; 
# 5238
return std::__set_difference(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_less_iter()); 
# 5241
} 
# 5265
template< class _InputIterator1, class _InputIterator2, class 
# 5266
_OutputIterator, class _Compare> inline _OutputIterator 
# 5268
set_difference(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5269
__first2, _InputIterator2 __last2, _OutputIterator 
# 5270
__result, _Compare __comp) 
# 5271
{ 
# 5283
; 
# 5284
; 
# 5286
return std::__set_difference(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5289
} 
# 5291
template< class _InputIterator1, class _InputIterator2, class 
# 5292
_OutputIterator, class 
# 5293
_Compare> _OutputIterator 
# 5295
__set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 
# 5296
__last1, _InputIterator2 
# 5297
__first2, _InputIterator2 
# 5298
__last2, _OutputIterator 
# 5299
__result, _Compare 
# 5300
__comp) 
# 5301
{ 
# 5302
while ((__first1 != __last1) && (__first2 != __last2)) { 
# 5303
if (__comp(__first1, __first2)) 
# 5304
{ 
# 5305
(*__result) = (*__first1); 
# 5306
++__first1; 
# 5307
++__result; 
# 5308
} else { 
# 5309
if (__comp(__first2, __first1)) 
# 5310
{ 
# 5311
(*__result) = (*__first2); 
# 5312
++__first2; 
# 5313
++__result; 
# 5314
} else 
# 5316
{ 
# 5317
++__first1; 
# 5318
++__first2; 
# 5319
}  }  }  
# 5320
return std::copy(__first2, __last2, std::copy(__first1, __last1, __result)); 
# 5322
} 
# 5341
template< class _InputIterator1, class _InputIterator2, class 
# 5342
_OutputIterator> inline _OutputIterator 
# 5344
set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5345
__first2, _InputIterator2 __last2, _OutputIterator 
# 5346
__result) 
# 5347
{ 
# 5361
; 
# 5362
; 
# 5364
return std::__set_symmetric_difference(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_less_iter()); 
# 5367
} 
# 5389
template< class _InputIterator1, class _InputIterator2, class 
# 5390
_OutputIterator, class _Compare> inline _OutputIterator 
# 5392
set_symmetric_difference(_InputIterator1 __first1, _InputIterator1 __last1, _InputIterator2 
# 5393
__first2, _InputIterator2 __last2, _OutputIterator 
# 5394
__result, _Compare 
# 5395
__comp) 
# 5396
{ 
# 5410
; 
# 5411
; 
# 5413
return std::__set_symmetric_difference(__first1, __last1, __first2, __last2, __result, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5416
} 
# 5418
template< class _ForwardIterator, class _Compare> _ForwardIterator 
# 5421
__min_element(_ForwardIterator __first, _ForwardIterator __last, _Compare 
# 5422
__comp) 
# 5423
{ 
# 5424
if (__first == __last) { 
# 5425
return __first; }  
# 5426
_ForwardIterator __result = __first; 
# 5427
while ((++__first) != __last) { 
# 5428
if (__comp(__first, __result)) { 
# 5429
__result = __first; }  }  
# 5430
return __result; 
# 5431
} 
# 5440
template< class _ForwardIterator> inline _ForwardIterator 
# 5443
min_element(_ForwardIterator __first, _ForwardIterator __last) 
# 5444
{ 
# 5449
; 
# 5451
return std::__min_element(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 5453
} 
# 5464
template< class _ForwardIterator, class _Compare> inline _ForwardIterator 
# 5467
min_element(_ForwardIterator __first, _ForwardIterator __last, _Compare 
# 5468
__comp) 
# 5469
{ 
# 5475
; 
# 5477
return std::__min_element(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5479
} 
# 5481
template< class _ForwardIterator, class _Compare> _ForwardIterator 
# 5484
__max_element(_ForwardIterator __first, _ForwardIterator __last, _Compare 
# 5485
__comp) 
# 5486
{ 
# 5487
if (__first == __last) { return __first; }  
# 5488
_ForwardIterator __result = __first; 
# 5489
while ((++__first) != __last) { 
# 5490
if (__comp(__result, __first)) { 
# 5491
__result = __first; }  }  
# 5492
return __result; 
# 5493
} 
# 5502
template< class _ForwardIterator> inline _ForwardIterator 
# 5505
max_element(_ForwardIterator __first, _ForwardIterator __last) 
# 5506
{ 
# 5511
; 
# 5513
return std::__max_element(__first, __last, __gnu_cxx::__ops::__iter_less_iter()); 
# 5515
} 
# 5526
template< class _ForwardIterator, class _Compare> inline _ForwardIterator 
# 5529
max_element(_ForwardIterator __first, _ForwardIterator __last, _Compare 
# 5530
__comp) 
# 5531
{ 
# 5537
; 
# 5539
return std::__max_element(__first, __last, __gnu_cxx::__ops::__iter_comp_iter(__comp)); 
# 5541
} 
# 5544
}
# 59 "/usr/local/cuda/include/cuda.h"
typedef uint32_t cuuint32_t; 
# 60
typedef uint64_t cuuint64_t; 
# 211
extern "C" {
# 221
typedef unsigned long long CUdeviceptr; 
# 228
typedef int CUdevice; 
# 229
typedef struct CUctx_st *CUcontext; 
# 230
typedef struct CUmod_st *CUmodule; 
# 231
typedef struct CUfunc_st *CUfunction; 
# 232
typedef struct CUarray_st *CUarray; 
# 233
typedef struct CUmipmappedArray_st *CUmipmappedArray; 
# 234
typedef struct CUtexref_st *CUtexref; 
# 235
typedef struct CUsurfref_st *CUsurfref; 
# 236
typedef CUevent_st *CUevent; 
# 237
typedef CUstream_st *CUstream; 
# 238
typedef struct CUgraphicsResource_st *CUgraphicsResource; 
# 239
typedef unsigned long long CUtexObject; 
# 240
typedef unsigned long long CUsurfObject; 
# 244
typedef 
# 242
struct CUuuid_st { 
# 243
char bytes[16]; 
# 244
} CUuuid; 
# 259
typedef 
# 257
struct CUipcEventHandle_st { 
# 258
char reserved[64]; 
# 259
} CUipcEventHandle; 
# 266
typedef 
# 264
struct CUipcMemHandle_st { 
# 265
char reserved[64]; 
# 266
} CUipcMemHandle; 
# 273
typedef 
# 271
enum CUipcMem_flags_enum { 
# 272
CU_IPC_MEM_LAZY_ENABLE_PEER_ACCESS = 1
# 273
} CUipcMem_flags; 
# 284
typedef 
# 280
enum CUmemAttach_flags_enum { 
# 281
CU_MEM_ATTACH_GLOBAL = 1, 
# 282
CU_MEM_ATTACH_HOST, 
# 283
CU_MEM_ATTACH_SINGLE = 4
# 284
} CUmemAttach_flags; 
# 301
typedef 
# 289
enum CUctx_flags_enum { 
# 290
CU_CTX_SCHED_AUTO, 
# 291
CU_CTX_SCHED_SPIN, 
# 292
CU_CTX_SCHED_YIELD, 
# 293
CU_CTX_SCHED_BLOCKING_SYNC = 4, 
# 294
CU_CTX_BLOCKING_SYNC = 4, 
# 297
CU_CTX_SCHED_MASK = 7, 
# 298
CU_CTX_MAP_HOST, 
# 299
CU_CTX_LMEM_RESIZE_TO_MAX = 16, 
# 300
CU_CTX_FLAGS_MASK = 31
# 301
} CUctx_flags; 
# 309
typedef 
# 306
enum CUstream_flags_enum { 
# 307
CU_STREAM_DEFAULT, 
# 308
CU_STREAM_NON_BLOCKING
# 309
} CUstream_flags; 
# 339
typedef 
# 334
enum CUevent_flags_enum { 
# 335
CU_EVENT_DEFAULT, 
# 336
CU_EVENT_BLOCKING_SYNC, 
# 337
CU_EVENT_DISABLE_TIMING, 
# 338
CU_EVENT_INTERPROCESS = 4
# 339
} CUevent_flags; 
# 357
typedef 
# 345
enum CUstreamWaitValue_flags_enum { 
# 346
CU_STREAM_WAIT_VALUE_GEQ, 
# 348
CU_STREAM_WAIT_VALUE_EQ, 
# 349
CU_STREAM_WAIT_VALUE_AND, 
# 350
CU_STREAM_WAIT_VALUE_FLUSH = 1073741824
# 357
} CUstreamWaitValue_flags; 
# 370
typedef 
# 362
enum CUstreamWriteValue_flags_enum { 
# 363
CU_STREAM_WRITE_VALUE_DEFAULT, 
# 364
CU_STREAM_WRITE_VALUE_NO_MEMORY_BARRIER
# 370
} CUstreamWriteValue_flags; 
# 380
typedef 
# 375
enum CUstreamBatchMemOpType_enum { 
# 376
CU_STREAM_MEM_OP_WAIT_VALUE_32 = 1, 
# 377
CU_STREAM_MEM_OP_WRITE_VALUE_32, 
# 378
CU_STREAM_MEM_OP_FLUSH_REMOTE_WRITES
# 380
} CUstreamBatchMemOpType; 
# 412
typedef 
# 385
union CUstreamBatchMemOpParams_union { 
# 386
CUstreamBatchMemOpType operation; 
# 387
struct CUstreamMemOpWaitValueParams_st { 
# 388
CUstreamBatchMemOpType operation; 
# 389
CUdeviceptr address; 
# 390
union { 
# 391
cuuint32_t value; 
# 392
cuuint64_t pad; 
# 393
}; 
# 394
unsigned flags; 
# 395
CUdeviceptr alias; 
# 396
} waitValue; 
# 397
struct CUstreamMemOpWriteValueParams_st { 
# 398
CUstreamBatchMemOpType operation; 
# 399
CUdeviceptr address; 
# 400
union { 
# 401
cuuint32_t value; 
# 402
cuuint64_t pad; 
# 403
}; 
# 404
unsigned flags; 
# 405
CUdeviceptr alias; 
# 406
} writeValue; 
# 407
struct CUstreamMemOpFlushRemoteWritesParams_st { 
# 408
CUstreamBatchMemOpType operation; 
# 409
unsigned flags; 
# 410
} flushRemoteWrites; 
# 411
cuuint64_t pad[6]; 
# 412
} CUstreamBatchMemOpParams; 
# 421
typedef 
# 418
enum CUoccupancy_flags_enum { 
# 419
CU_OCCUPANCY_DEFAULT, 
# 420
CU_OCCUPANCY_DISABLE_CACHING_OVERRIDE
# 421
} CUoccupancy_flags; 
# 435
typedef 
# 426
enum CUarray_format_enum { 
# 427
CU_AD_FORMAT_UNSIGNED_INT8 = 1, 
# 428
CU_AD_FORMAT_UNSIGNED_INT16, 
# 429
CU_AD_FORMAT_UNSIGNED_INT32, 
# 430
CU_AD_FORMAT_SIGNED_INT8 = 8, 
# 431
CU_AD_FORMAT_SIGNED_INT16, 
# 432
CU_AD_FORMAT_SIGNED_INT32, 
# 433
CU_AD_FORMAT_HALF = 16, 
# 434
CU_AD_FORMAT_FLOAT = 32
# 435
} CUarray_format; 
# 445
typedef 
# 440
enum CUaddress_mode_enum { 
# 441
CU_TR_ADDRESS_MODE_WRAP, 
# 442
CU_TR_ADDRESS_MODE_CLAMP, 
# 443
CU_TR_ADDRESS_MODE_MIRROR, 
# 444
CU_TR_ADDRESS_MODE_BORDER
# 445
} CUaddress_mode; 
# 453
typedef 
# 450
enum CUfilter_mode_enum { 
# 451
CU_TR_FILTER_MODE_POINT, 
# 452
CU_TR_FILTER_MODE_LINEAR
# 453
} CUfilter_mode; 
# 556
typedef 
# 458
enum CUdevice_attribute_enum { 
# 459
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_BLOCK = 1, 
# 460
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_X, 
# 461
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Y, 
# 462
CU_DEVICE_ATTRIBUTE_MAX_BLOCK_DIM_Z, 
# 463
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_X, 
# 464
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Y, 
# 465
CU_DEVICE_ATTRIBUTE_MAX_GRID_DIM_Z, 
# 466
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_BLOCK, 
# 467
CU_DEVICE_ATTRIBUTE_SHARED_MEMORY_PER_BLOCK = 8, 
# 468
CU_DEVICE_ATTRIBUTE_TOTAL_CONSTANT_MEMORY, 
# 469
CU_DEVICE_ATTRIBUTE_WARP_SIZE, 
# 470
CU_DEVICE_ATTRIBUTE_MAX_PITCH, 
# 471
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_BLOCK, 
# 472
CU_DEVICE_ATTRIBUTE_REGISTERS_PER_BLOCK = 12, 
# 473
CU_DEVICE_ATTRIBUTE_CLOCK_RATE, 
# 474
CU_DEVICE_ATTRIBUTE_TEXTURE_ALIGNMENT, 
# 475
CU_DEVICE_ATTRIBUTE_GPU_OVERLAP, 
# 476
CU_DEVICE_ATTRIBUTE_MULTIPROCESSOR_COUNT, 
# 477
CU_DEVICE_ATTRIBUTE_KERNEL_EXEC_TIMEOUT, 
# 478
CU_DEVICE_ATTRIBUTE_INTEGRATED, 
# 479
CU_DEVICE_ATTRIBUTE_CAN_MAP_HOST_MEMORY, 
# 480
CU_DEVICE_ATTRIBUTE_COMPUTE_MODE, 
# 481
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_WIDTH, 
# 482
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_WIDTH, 
# 483
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_HEIGHT, 
# 484
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH, 
# 485
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT, 
# 486
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH, 
# 487
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_WIDTH, 
# 488
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_HEIGHT, 
# 489
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LAYERED_LAYERS, 
# 490
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_WIDTH = 27, 
# 491
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_HEIGHT, 
# 492
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_ARRAY_NUMSLICES, 
# 493
CU_DEVICE_ATTRIBUTE_SURFACE_ALIGNMENT, 
# 494
CU_DEVICE_ATTRIBUTE_CONCURRENT_KERNELS, 
# 495
CU_DEVICE_ATTRIBUTE_ECC_ENABLED, 
# 496
CU_DEVICE_ATTRIBUTE_PCI_BUS_ID, 
# 497
CU_DEVICE_ATTRIBUTE_PCI_DEVICE_ID, 
# 498
CU_DEVICE_ATTRIBUTE_TCC_DRIVER, 
# 499
CU_DEVICE_ATTRIBUTE_MEMORY_CLOCK_RATE, 
# 500
CU_DEVICE_ATTRIBUTE_GLOBAL_MEMORY_BUS_WIDTH, 
# 501
CU_DEVICE_ATTRIBUTE_L2_CACHE_SIZE, 
# 502
CU_DEVICE_ATTRIBUTE_MAX_THREADS_PER_MULTIPROCESSOR, 
# 503
CU_DEVICE_ATTRIBUTE_ASYNC_ENGINE_COUNT, 
# 504
CU_DEVICE_ATTRIBUTE_UNIFIED_ADDRESSING, 
# 505
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_WIDTH, 
# 506
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LAYERED_LAYERS, 
# 507
CU_DEVICE_ATTRIBUTE_CAN_TEX2D_GATHER, 
# 508
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_WIDTH, 
# 509
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_GATHER_HEIGHT, 
# 510
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_WIDTH_ALTERNATE, 
# 511
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_HEIGHT_ALTERNATE, 
# 512
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE3D_DEPTH_ALTERNATE, 
# 513
CU_DEVICE_ATTRIBUTE_PCI_DOMAIN_ID, 
# 514
CU_DEVICE_ATTRIBUTE_TEXTURE_PITCH_ALIGNMENT, 
# 515
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_WIDTH, 
# 516
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_WIDTH, 
# 517
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURECUBEMAP_LAYERED_LAYERS, 
# 518
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_WIDTH, 
# 519
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_WIDTH, 
# 520
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_HEIGHT, 
# 521
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_WIDTH, 
# 522
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_HEIGHT, 
# 523
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE3D_DEPTH, 
# 524
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_WIDTH, 
# 525
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE1D_LAYERED_LAYERS, 
# 526
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_WIDTH, 
# 527
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_HEIGHT, 
# 528
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACE2D_LAYERED_LAYERS, 
# 529
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_WIDTH, 
# 530
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_WIDTH, 
# 531
CU_DEVICE_ATTRIBUTE_MAXIMUM_SURFACECUBEMAP_LAYERED_LAYERS, 
# 532
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_LINEAR_WIDTH, 
# 533
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_WIDTH, 
# 534
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_HEIGHT, 
# 535
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_LINEAR_PITCH, 
# 536
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_WIDTH, 
# 537
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE2D_MIPMAPPED_HEIGHT, 
# 538
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MAJOR, 
# 539
CU_DEVICE_ATTRIBUTE_COMPUTE_CAPABILITY_MINOR, 
# 540
CU_DEVICE_ATTRIBUTE_MAXIMUM_TEXTURE1D_MIPMAPPED_WIDTH, 
# 541
CU_DEVICE_ATTRIBUTE_STREAM_PRIORITIES_SUPPORTED, 
# 542
CU_DEVICE_ATTRIBUTE_GLOBAL_L1_CACHE_SUPPORTED, 
# 543
CU_DEVICE_ATTRIBUTE_LOCAL_L1_CACHE_SUPPORTED, 
# 544
CU_DEVICE_ATTRIBUTE_MAX_SHARED_MEMORY_PER_MULTIPROCESSOR, 
# 545
CU_DEVICE_ATTRIBUTE_MAX_REGISTERS_PER_MULTIPROCESSOR, 
# 546
CU_DEVICE_ATTRIBUTE_MANAGED_MEMORY, 
# 547
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD, 
# 548
CU_DEVICE_ATTRIBUTE_MULTI_GPU_BOARD_GROUP_ID, 
# 549
CU_DEVICE_ATTRIBUTE_HOST_NATIVE_ATOMIC_SUPPORTED, 
# 550
CU_DEVICE_ATTRIBUTE_SINGLE_TO_DOUBLE_PRECISION_PERF_RATIO, 
# 551
CU_DEVICE_ATTRIBUTE_PAGEABLE_MEMORY_ACCESS, 
# 552
CU_DEVICE_ATTRIBUTE_CONCURRENT_MANAGED_ACCESS, 
# 553
CU_DEVICE_ATTRIBUTE_COMPUTE_PREEMPTION_SUPPORTED, 
# 554
CU_DEVICE_ATTRIBUTE_CAN_USE_HOST_POINTER_FOR_REGISTERED_MEM, 
# 555
CU_DEVICE_ATTRIBUTE_MAX
# 556
} CUdevice_attribute; 
# 572
typedef 
# 561
struct CUdevprop_st { 
# 562
int maxThreadsPerBlock; 
# 563
int maxThreadsDim[3]; 
# 564
int maxGridSize[3]; 
# 565
int sharedMemPerBlock; 
# 566
int totalConstantMemory; 
# 567
int SIMDWidth; 
# 568
int memPitch; 
# 569
int regsPerBlock; 
# 570
int clockRate; 
# 571
int textureAlign; 
# 572
} CUdevprop; 
# 586
typedef 
# 577
enum CUpointer_attribute_enum { 
# 578
CU_POINTER_ATTRIBUTE_CONTEXT = 1, 
# 579
CU_POINTER_ATTRIBUTE_MEMORY_TYPE, 
# 580
CU_POINTER_ATTRIBUTE_DEVICE_POINTER, 
# 581
CU_POINTER_ATTRIBUTE_HOST_POINTER, 
# 582
CU_POINTER_ATTRIBUTE_P2P_TOKENS, 
# 583
CU_POINTER_ATTRIBUTE_SYNC_MEMOPS, 
# 584
CU_POINTER_ATTRIBUTE_BUFFER_ID, 
# 585
CU_POINTER_ATTRIBUTE_IS_MANAGED
# 586
} CUpointer_attribute; 
# 647
typedef 
# 591
enum CUfunction_attribute_enum { 
# 597
CU_FUNC_ATTRIBUTE_MAX_THREADS_PER_BLOCK, 
# 604
CU_FUNC_ATTRIBUTE_SHARED_SIZE_BYTES, 
# 610
CU_FUNC_ATTRIBUTE_CONST_SIZE_BYTES, 
# 615
CU_FUNC_ATTRIBUTE_LOCAL_SIZE_BYTES, 
# 620
CU_FUNC_ATTRIBUTE_NUM_REGS, 
# 629
CU_FUNC_ATTRIBUTE_PTX_VERSION, 
# 638
CU_FUNC_ATTRIBUTE_BINARY_VERSION, 
# 644
CU_FUNC_ATTRIBUTE_CACHE_MODE_CA, 
# 646
CU_FUNC_ATTRIBUTE_MAX
# 647
} CUfunction_attribute; 
# 657
typedef 
# 652
enum CUfunc_cache_enum { 
# 653
CU_FUNC_CACHE_PREFER_NONE, 
# 654
CU_FUNC_CACHE_PREFER_SHARED, 
# 655
CU_FUNC_CACHE_PREFER_L1, 
# 656
CU_FUNC_CACHE_PREFER_EQUAL
# 657
} CUfunc_cache; 
# 666
typedef 
# 662
enum CUsharedconfig_enum { 
# 663
CU_SHARED_MEM_CONFIG_DEFAULT_BANK_SIZE, 
# 664
CU_SHARED_MEM_CONFIG_FOUR_BYTE_BANK_SIZE, 
# 665
CU_SHARED_MEM_CONFIG_EIGHT_BYTE_BANK_SIZE
# 666
} CUsharedconfig; 
# 676
typedef 
# 671
enum CUmemorytype_enum { 
# 672
CU_MEMORYTYPE_HOST = 1, 
# 673
CU_MEMORYTYPE_DEVICE, 
# 674
CU_MEMORYTYPE_ARRAY, 
# 675
CU_MEMORYTYPE_UNIFIED
# 676
} CUmemorytype; 
# 685
typedef 
# 681
enum CUcomputemode_enum { 
# 682
CU_COMPUTEMODE_DEFAULT, 
# 683
CU_COMPUTEMODE_PROHIBITED = 2, 
# 684
CU_COMPUTEMODE_EXCLUSIVE_PROCESS
# 685
} CUcomputemode; 
# 697
typedef 
# 690
enum CUmem_advise_enum { 
# 691
CU_MEM_ADVISE_SET_READ_MOSTLY = 1, 
# 692
CU_MEM_ADVISE_UNSET_READ_MOSTLY, 
# 693
CU_MEM_ADVISE_SET_PREFERRED_LOCATION, 
# 694
CU_MEM_ADVISE_UNSET_PREFERRED_LOCATION, 
# 695
CU_MEM_ADVISE_SET_ACCESSED_BY, 
# 696
CU_MEM_ADVISE_UNSET_ACCESSED_BY
# 697
} CUmem_advise; 
# 704
typedef 
# 699
enum CUmem_range_attribute_enum { 
# 700
CU_MEM_RANGE_ATTRIBUTE_READ_MOSTLY = 1, 
# 701
CU_MEM_RANGE_ATTRIBUTE_PREFERRED_LOCATION, 
# 702
CU_MEM_RANGE_ATTRIBUTE_ACCESSED_BY, 
# 703
CU_MEM_RANGE_ATTRIBUTE_LAST_PREFETCH_LOCATION
# 704
} CUmem_range_attribute; 
# 848
typedef 
# 709
enum CUjit_option_enum { 
# 716
CU_JIT_MAX_REGISTERS, 
# 731
CU_JIT_THREADS_PER_BLOCK, 
# 739
CU_JIT_WALL_TIME, 
# 748
CU_JIT_INFO_LOG_BUFFER, 
# 757
CU_JIT_INFO_LOG_BUFFER_SIZE_BYTES, 
# 766
CU_JIT_ERROR_LOG_BUFFER, 
# 775
CU_JIT_ERROR_LOG_BUFFER_SIZE_BYTES, 
# 783
CU_JIT_OPTIMIZATION_LEVEL, 
# 791
CU_JIT_TARGET_FROM_CUCONTEXT, 
# 799
CU_JIT_TARGET, 
# 808
CU_JIT_FALLBACK_STRATEGY, 
# 816
CU_JIT_GENERATE_DEBUG_INFO, 
# 823
CU_JIT_LOG_VERBOSE, 
# 830
CU_JIT_GENERATE_LINE_INFO, 
# 838
CU_JIT_CACHE_MODE, 
# 843
CU_JIT_NEW_SM3X_OPT, 
# 844
CU_JIT_FAST_COMPILE, 
# 846
CU_JIT_NUM_OPTIONS
# 848
} CUjit_option; 
# 871
typedef 
# 853
enum CUjit_target_enum { 
# 855
CU_TARGET_COMPUTE_10 = 10, 
# 856
CU_TARGET_COMPUTE_11, 
# 857
CU_TARGET_COMPUTE_12, 
# 858
CU_TARGET_COMPUTE_13, 
# 859
CU_TARGET_COMPUTE_20 = 20, 
# 860
CU_TARGET_COMPUTE_21, 
# 861
CU_TARGET_COMPUTE_30 = 30, 
# 862
CU_TARGET_COMPUTE_32 = 32, 
# 863
CU_TARGET_COMPUTE_35 = 35, 
# 864
CU_TARGET_COMPUTE_37 = 37, 
# 865
CU_TARGET_COMPUTE_50 = 50, 
# 866
CU_TARGET_COMPUTE_52 = 52, 
# 867
CU_TARGET_COMPUTE_53, 
# 868
CU_TARGET_COMPUTE_60 = 60, 
# 869
CU_TARGET_COMPUTE_61, 
# 870
CU_TARGET_COMPUTE_62
# 871
} CUjit_target; 
# 882
typedef 
# 876
enum CUjit_fallback_enum { 
# 878
CU_PREFER_PTX, 
# 880
CU_PREFER_BINARY
# 882
} CUjit_fallback; 
# 892
typedef 
# 887
enum CUjit_cacheMode_enum { 
# 889
CU_JIT_CACHE_OPTION_NONE, 
# 890
CU_JIT_CACHE_OPTION_CG, 
# 891
CU_JIT_CACHE_OPTION_CA
# 892
} CUjit_cacheMode; 
# 930
typedef 
# 897
enum CUjitInputType_enum { 
# 903
CU_JIT_INPUT_CUBIN, 
# 909
CU_JIT_INPUT_PTX, 
# 915
CU_JIT_INPUT_FATBINARY, 
# 921
CU_JIT_INPUT_OBJECT, 
# 927
CU_JIT_INPUT_LIBRARY, 
# 929
CU_JIT_NUM_INPUT_TYPES
# 930
} CUjitInputType; 
# 933
typedef struct CUlinkState_st *CUlinkState; 
# 945
typedef 
# 939
enum CUgraphicsRegisterFlags_enum { 
# 940
CU_GRAPHICS_REGISTER_FLAGS_NONE, 
# 941
CU_GRAPHICS_REGISTER_FLAGS_READ_ONLY, 
# 942
CU_GRAPHICS_REGISTER_FLAGS_WRITE_DISCARD, 
# 943
CU_GRAPHICS_REGISTER_FLAGS_SURFACE_LDST = 4, 
# 944
CU_GRAPHICS_REGISTER_FLAGS_TEXTURE_GATHER = 8
# 945
} CUgraphicsRegisterFlags; 
# 954
typedef 
# 950
enum CUgraphicsMapResourceFlags_enum { 
# 951
CU_GRAPHICS_MAP_RESOURCE_FLAGS_NONE, 
# 952
CU_GRAPHICS_MAP_RESOURCE_FLAGS_READ_ONLY, 
# 953
CU_GRAPHICS_MAP_RESOURCE_FLAGS_WRITE_DISCARD
# 954
} CUgraphicsMapResourceFlags; 
# 966
typedef 
# 959
enum CUarray_cubemap_face_enum { 
# 960
CU_CUBEMAP_FACE_POSITIVE_X, 
# 961
CU_CUBEMAP_FACE_NEGATIVE_X, 
# 962
CU_CUBEMAP_FACE_POSITIVE_Y, 
# 963
CU_CUBEMAP_FACE_NEGATIVE_Y, 
# 964
CU_CUBEMAP_FACE_POSITIVE_Z, 
# 965
CU_CUBEMAP_FACE_NEGATIVE_Z
# 966
} CUarray_cubemap_face; 
# 978
typedef 
# 971
enum CUlimit_enum { 
# 972
CU_LIMIT_STACK_SIZE, 
# 973
CU_LIMIT_PRINTF_FIFO_SIZE, 
# 974
CU_LIMIT_MALLOC_HEAP_SIZE, 
# 975
CU_LIMIT_DEV_RUNTIME_SYNC_DEPTH, 
# 976
CU_LIMIT_DEV_RUNTIME_PENDING_LAUNCH_COUNT, 
# 977
CU_LIMIT_MAX
# 978
} CUlimit; 
# 988
typedef 
# 983
enum CUresourcetype_enum { 
# 984
CU_RESOURCE_TYPE_ARRAY, 
# 985
CU_RESOURCE_TYPE_MIPMAPPED_ARRAY, 
# 986
CU_RESOURCE_TYPE_LINEAR, 
# 987
CU_RESOURCE_TYPE_PITCH2D
# 988
} CUresourcetype; 
# 1390
typedef 
# 993
enum cudaError_enum { 
# 999
CUDA_SUCCESS, 
# 1005
CUDA_ERROR_INVALID_VALUE, 
# 1011
CUDA_ERROR_OUT_OF_MEMORY, 
# 1017
CUDA_ERROR_NOT_INITIALIZED, 
# 1022
CUDA_ERROR_DEINITIALIZED, 
# 1029
CUDA_ERROR_PROFILER_DISABLED, 
# 1037
CUDA_ERROR_PROFILER_NOT_INITIALIZED, 
# 1044
CUDA_ERROR_PROFILER_ALREADY_STARTED, 
# 1051
CUDA_ERROR_PROFILER_ALREADY_STOPPED, 
# 1057
CUDA_ERROR_NO_DEVICE = 100, 
# 1063
CUDA_ERROR_INVALID_DEVICE, 
# 1070
CUDA_ERROR_INVALID_IMAGE = 200, 
# 1080
CUDA_ERROR_INVALID_CONTEXT, 
# 1089
CUDA_ERROR_CONTEXT_ALREADY_CURRENT, 
# 1094
CUDA_ERROR_MAP_FAILED = 205, 
# 1099
CUDA_ERROR_UNMAP_FAILED, 
# 1105
CUDA_ERROR_ARRAY_IS_MAPPED, 
# 1110
CUDA_ERROR_ALREADY_MAPPED, 
# 1118
CUDA_ERROR_NO_BINARY_FOR_GPU, 
# 1123
CUDA_ERROR_ALREADY_ACQUIRED, 
# 1128
CUDA_ERROR_NOT_MAPPED, 
# 1134
CUDA_ERROR_NOT_MAPPED_AS_ARRAY, 
# 1140
CUDA_ERROR_NOT_MAPPED_AS_POINTER, 
# 1146
CUDA_ERROR_ECC_UNCORRECTABLE, 
# 1152
CUDA_ERROR_UNSUPPORTED_LIMIT, 
# 1159
CUDA_ERROR_CONTEXT_ALREADY_IN_USE, 
# 1165
CUDA_ERROR_PEER_ACCESS_UNSUPPORTED, 
# 1170
CUDA_ERROR_INVALID_PTX, 
# 1175
CUDA_ERROR_INVALID_GRAPHICS_CONTEXT, 
# 1181
CUDA_ERROR_NVLINK_UNCORRECTABLE, 
# 1186
CUDA_ERROR_INVALID_SOURCE = 300, 
# 1191
CUDA_ERROR_FILE_NOT_FOUND, 
# 1196
CUDA_ERROR_SHARED_OBJECT_SYMBOL_NOT_FOUND, 
# 1201
CUDA_ERROR_SHARED_OBJECT_INIT_FAILED, 
# 1206
CUDA_ERROR_OPERATING_SYSTEM, 
# 1212
CUDA_ERROR_INVALID_HANDLE = 400, 
# 1218
CUDA_ERROR_NOT_FOUND = 500, 
# 1226
CUDA_ERROR_NOT_READY = 600, 
# 1235
CUDA_ERROR_ILLEGAL_ADDRESS = 700, 
# 1246
CUDA_ERROR_LAUNCH_OUT_OF_RESOURCES, 
# 1257
CUDA_ERROR_LAUNCH_TIMEOUT, 
# 1263
CUDA_ERROR_LAUNCH_INCOMPATIBLE_TEXTURING, 
# 1270
CUDA_ERROR_PEER_ACCESS_ALREADY_ENABLED, 
# 1277
CUDA_ERROR_PEER_ACCESS_NOT_ENABLED, 
# 1283
CUDA_ERROR_PRIMARY_CONTEXT_ACTIVE = 708, 
# 1290
CUDA_ERROR_CONTEXT_IS_DESTROYED, 
# 1298
CUDA_ERROR_ASSERT, 
# 1305
CUDA_ERROR_TOO_MANY_PEERS, 
# 1311
CUDA_ERROR_HOST_MEMORY_ALREADY_REGISTERED, 
# 1317
CUDA_ERROR_HOST_MEMORY_NOT_REGISTERED, 
# 1326
CUDA_ERROR_HARDWARE_STACK_ERROR, 
# 1334
CUDA_ERROR_ILLEGAL_INSTRUCTION, 
# 1343
CUDA_ERROR_MISALIGNED_ADDRESS, 
# 1354
CUDA_ERROR_INVALID_ADDRESS_SPACE, 
# 1362
CUDA_ERROR_INVALID_PC, 
# 1372
CUDA_ERROR_LAUNCH_FAILED, 
# 1378
CUDA_ERROR_NOT_PERMITTED = 800, 
# 1384
CUDA_ERROR_NOT_SUPPORTED, 
# 1389
CUDA_ERROR_UNKNOWN = 999
# 1390
} CUresult; 
# 1399
typedef 
# 1395
enum CUdevice_P2PAttribute_enum { 
# 1396
CU_DEVICE_P2P_ATTRIBUTE_PERFORMANCE_RANK = 1, 
# 1397
CU_DEVICE_P2P_ATTRIBUTE_ACCESS_SUPPORTED, 
# 1398
CU_DEVICE_P2P_ATTRIBUTE_NATIVE_ATOMIC_SUPPORTED
# 1399
} CUdevice_P2PAttribute; 
# 1413
typedef void (*CUstreamCallback)(CUstream hStream, CUresult status, void * userData); 
# 1421
typedef size_t (*CUoccupancyB2DSize)(int blockSize); 
# 1497
typedef 
# 1476
struct CUDA_MEMCPY2D_st { 
# 1477
size_t srcXInBytes; 
# 1478
size_t srcY; 
# 1480
CUmemorytype srcMemoryType; 
# 1481
const void *srcHost; 
# 1482
CUdeviceptr srcDevice; 
# 1483
CUarray srcArray; 
# 1484
size_t srcPitch; 
# 1486
size_t dstXInBytes; 
# 1487
size_t dstY; 
# 1489
CUmemorytype dstMemoryType; 
# 1490
void *dstHost; 
# 1491
CUdeviceptr dstDevice; 
# 1492
CUarray dstArray; 
# 1493
size_t dstPitch; 
# 1495
size_t WidthInBytes; 
# 1496
size_t Height; 
# 1497
} CUDA_MEMCPY2D; 
# 1530
typedef 
# 1502
struct CUDA_MEMCPY3D_st { 
# 1503
size_t srcXInBytes; 
# 1504
size_t srcY; 
# 1505
size_t srcZ; 
# 1506
size_t srcLOD; 
# 1507
CUmemorytype srcMemoryType; 
# 1508
const void *srcHost; 
# 1509
CUdeviceptr srcDevice; 
# 1510
CUarray srcArray; 
# 1511
void *reserved0; 
# 1512
size_t srcPitch; 
# 1513
size_t srcHeight; 
# 1515
size_t dstXInBytes; 
# 1516
size_t dstY; 
# 1517
size_t dstZ; 
# 1518
size_t dstLOD; 
# 1519
CUmemorytype dstMemoryType; 
# 1520
void *dstHost; 
# 1521
CUdeviceptr dstDevice; 
# 1522
CUarray dstArray; 
# 1523
void *reserved1; 
# 1524
size_t dstPitch; 
# 1525
size_t dstHeight; 
# 1527
size_t WidthInBytes; 
# 1528
size_t Height; 
# 1529
size_t Depth; 
# 1530
} CUDA_MEMCPY3D; 
# 1563
typedef 
# 1535
struct CUDA_MEMCPY3D_PEER_st { 
# 1536
size_t srcXInBytes; 
# 1537
size_t srcY; 
# 1538
size_t srcZ; 
# 1539
size_t srcLOD; 
# 1540
CUmemorytype srcMemoryType; 
# 1541
const void *srcHost; 
# 1542
CUdeviceptr srcDevice; 
# 1543
CUarray srcArray; 
# 1544
CUcontext srcContext; 
# 1545
size_t srcPitch; 
# 1546
size_t srcHeight; 
# 1548
size_t dstXInBytes; 
# 1549
size_t dstY; 
# 1550
size_t dstZ; 
# 1551
size_t dstLOD; 
# 1552
CUmemorytype dstMemoryType; 
# 1553
void *dstHost; 
# 1554
CUdeviceptr dstDevice; 
# 1555
CUarray dstArray; 
# 1556
CUcontext dstContext; 
# 1557
size_t dstPitch; 
# 1558
size_t dstHeight; 
# 1560
size_t WidthInBytes; 
# 1561
size_t Height; 
# 1562
size_t Depth; 
# 1563
} CUDA_MEMCPY3D_PEER; 
# 1575
typedef 
# 1568
struct CUDA_ARRAY_DESCRIPTOR_st { 
# 1570
size_t Width; 
# 1571
size_t Height; 
# 1573
CUarray_format Format; 
# 1574
unsigned NumChannels; 
# 1575
} CUDA_ARRAY_DESCRIPTOR; 
# 1589
typedef 
# 1580
struct CUDA_ARRAY3D_DESCRIPTOR_st { 
# 1582
size_t Width; 
# 1583
size_t Height; 
# 1584
size_t Depth; 
# 1586
CUarray_format Format; 
# 1587
unsigned NumChannels; 
# 1588
unsigned Flags; 
# 1589
} CUDA_ARRAY3D_DESCRIPTOR; 
# 1629
typedef 
# 1598
struct CUDA_RESOURCE_DESC_st { 
# 1600
CUresourcetype resType; 
# 1602
union { 
# 1603
struct { 
# 1604
CUarray hArray; 
# 1605
} array; 
# 1606
struct { 
# 1607
CUmipmappedArray hMipmappedArray; 
# 1608
} mipmap; 
# 1609
struct { 
# 1610
CUdeviceptr devPtr; 
# 1611
CUarray_format format; 
# 1612
unsigned numChannels; 
# 1613
size_t sizeInBytes; 
# 1614
} linear; 
# 1615
struct { 
# 1616
CUdeviceptr devPtr; 
# 1617
CUarray_format format; 
# 1618
unsigned numChannels; 
# 1619
size_t width; 
# 1620
size_t height; 
# 1621
size_t pitchInBytes; 
# 1622
} pitch2D; 
# 1623
struct { 
# 1624
int reserved[32]; 
# 1625
} reserved; 
# 1626
} res; 
# 1628
unsigned flags; 
# 1629
} CUDA_RESOURCE_DESC; 
# 1645
typedef 
# 1634
struct CUDA_TEXTURE_DESC_st { 
# 1635
CUaddress_mode addressMode[3]; 
# 1636
CUfilter_mode filterMode; 
# 1637
unsigned flags; 
# 1638
unsigned maxAnisotropy; 
# 1639
CUfilter_mode mipmapFilterMode; 
# 1640
float mipmapLevelBias; 
# 1641
float minMipmapLevelClamp; 
# 1642
float maxMipmapLevelClamp; 
# 1643
float borderColor[4]; 
# 1644
int reserved[12]; 
# 1645
} CUDA_TEXTURE_DESC; 
# 1687
typedef 
# 1650
enum CUresourceViewFormat_enum { 
# 1652
CU_RES_VIEW_FORMAT_NONE, 
# 1653
CU_RES_VIEW_FORMAT_UINT_1X8, 
# 1654
CU_RES_VIEW_FORMAT_UINT_2X8, 
# 1655
CU_RES_VIEW_FORMAT_UINT_4X8, 
# 1656
CU_RES_VIEW_FORMAT_SINT_1X8, 
# 1657
CU_RES_VIEW_FORMAT_SINT_2X8, 
# 1658
CU_RES_VIEW_FORMAT_SINT_4X8, 
# 1659
CU_RES_VIEW_FORMAT_UINT_1X16, 
# 1660
CU_RES_VIEW_FORMAT_UINT_2X16, 
# 1661
CU_RES_VIEW_FORMAT_UINT_4X16, 
# 1662
CU_RES_VIEW_FORMAT_SINT_1X16, 
# 1663
CU_RES_VIEW_FORMAT_SINT_2X16, 
# 1664
CU_RES_VIEW_FORMAT_SINT_4X16, 
# 1665
CU_RES_VIEW_FORMAT_UINT_1X32, 
# 1666
CU_RES_VIEW_FORMAT_UINT_2X32, 
# 1667
CU_RES_VIEW_FORMAT_UINT_4X32, 
# 1668
CU_RES_VIEW_FORMAT_SINT_1X32, 
# 1669
CU_RES_VIEW_FORMAT_SINT_2X32, 
# 1670
CU_RES_VIEW_FORMAT_SINT_4X32, 
# 1671
CU_RES_VIEW_FORMAT_FLOAT_1X16, 
# 1672
CU_RES_VIEW_FORMAT_FLOAT_2X16, 
# 1673
CU_RES_VIEW_FORMAT_FLOAT_4X16, 
# 1674
CU_RES_VIEW_FORMAT_FLOAT_1X32, 
# 1675
CU_RES_VIEW_FORMAT_FLOAT_2X32, 
# 1676
CU_RES_VIEW_FORMAT_FLOAT_4X32, 
# 1677
CU_RES_VIEW_FORMAT_UNSIGNED_BC1, 
# 1678
CU_RES_VIEW_FORMAT_UNSIGNED_BC2, 
# 1679
CU_RES_VIEW_FORMAT_UNSIGNED_BC3, 
# 1680
CU_RES_VIEW_FORMAT_UNSIGNED_BC4, 
# 1681
CU_RES_VIEW_FORMAT_SIGNED_BC4, 
# 1682
CU_RES_VIEW_FORMAT_UNSIGNED_BC5, 
# 1683
CU_RES_VIEW_FORMAT_SIGNED_BC5, 
# 1684
CU_RES_VIEW_FORMAT_UNSIGNED_BC6H, 
# 1685
CU_RES_VIEW_FORMAT_SIGNED_BC6H, 
# 1686
CU_RES_VIEW_FORMAT_UNSIGNED_BC7
# 1687
} CUresourceViewFormat; 
# 1703
typedef 
# 1692
struct CUDA_RESOURCE_VIEW_DESC_st { 
# 1694
CUresourceViewFormat format; 
# 1695
size_t width; 
# 1696
size_t height; 
# 1697
size_t depth; 
# 1698
unsigned firstMipmapLevel; 
# 1699
unsigned lastMipmapLevel; 
# 1700
unsigned firstLayer; 
# 1701
unsigned lastLayer; 
# 1702
unsigned reserved[16]; 
# 1703
} CUDA_RESOURCE_VIEW_DESC; 
# 1711
typedef 
# 1708
struct CUDA_POINTER_ATTRIBUTE_P2P_TOKENS_st { 
# 1709
unsigned long long p2pToken; 
# 1710
unsigned vaSpaceToken; 
# 1711
} CUDA_POINTER_ATTRIBUTE_P2P_TOKENS; 
# 1858
CUresult cuGetErrorString(CUresult error, const char ** pStr); 
# 1877
CUresult cuGetErrorName(CUresult error, const char ** pStr); 
# 1909
CUresult cuInit(unsigned Flags); 
# 1939
CUresult cuDriverGetVersion(int * driverVersion); 
# 1979
CUresult cuDeviceGet(CUdevice * device, int ordinal); 
# 2004
CUresult cuDeviceGetCount(int * count); 
# 2032
CUresult cuDeviceGetName(char * name, int len, CUdevice dev); 
# 2059
CUresult cuDeviceTotalMem_v2(size_t * bytes, CUdevice dev); 
# 2254
CUresult cuDeviceGetAttribute(int * pi, CUdevice_attribute attrib, CUdevice dev); 
# 2331
CUresult cuDeviceGetProperties(CUdevprop * prop, CUdevice dev); 
# 2364
CUresult cuDeviceComputeCapability(int * major, int * minor, CUdevice dev); 
# 2432
CUresult cuDevicePrimaryCtxRetain(CUcontext * pctx, CUdevice dev); 
# 2466
CUresult cuDevicePrimaryCtxRelease(CUdevice dev); 
# 2529
CUresult cuDevicePrimaryCtxSetFlags(CUdevice dev, unsigned flags); 
# 2553
CUresult cuDevicePrimaryCtxGetState(CUdevice dev, unsigned * flags, int * active); 
# 2591
CUresult cuDevicePrimaryCtxReset(CUdevice dev); 
# 2697
CUresult cuCtxCreate_v2(CUcontext * pctx, unsigned flags, CUdevice dev); 
# 2737
CUresult cuCtxDestroy_v2(CUcontext ctx); 
# 2773
CUresult cuCtxPushCurrent_v2(CUcontext ctx); 
# 2807
CUresult cuCtxPopCurrent_v2(CUcontext * pctx); 
# 2833
CUresult cuCtxSetCurrent(CUcontext ctx); 
# 2852
CUresult cuCtxGetCurrent(CUcontext * pctx); 
# 2882
CUresult cuCtxGetDevice(CUdevice * device); 
# 2910
CUresult cuCtxGetFlags(unsigned * flags); 
# 2940
CUresult cuCtxSynchronize(); 
# 3035
CUresult cuCtxSetLimit(CUlimit limit, size_t value); 
# 3074
CUresult cuCtxGetLimit(size_t * pvalue, CUlimit limit); 
# 3117
CUresult cuCtxGetCacheConfig(CUfunc_cache * pconfig); 
# 3167
CUresult cuCtxSetCacheConfig(CUfunc_cache config); 
# 3209
CUresult cuCtxGetSharedMemConfig(CUsharedconfig * pConfig); 
# 3261
CUresult cuCtxSetSharedMemConfig(CUsharedconfig config); 
# 3299
CUresult cuCtxGetApiVersion(CUcontext ctx, unsigned * version); 
# 3338
CUresult cuCtxGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
# 3393
CUresult cuCtxAttach(CUcontext * pctx, unsigned flags); 
# 3429
CUresult cuCtxDetach(CUcontext ctx); 
# 3483
CUresult cuModuleLoad(CUmodule * module, const char * fname); 
# 3519
CUresult cuModuleLoadData(CUmodule * module, const void * image); 
# 3561
CUresult cuModuleLoadDataEx(CUmodule * module, const void * image, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 3602
CUresult cuModuleLoadFatBinary(CUmodule * module, const void * fatCubin); 
# 3627
CUresult cuModuleUnload(CUmodule hmod); 
# 3657
CUresult cuModuleGetFunction(CUfunction * hfunc, CUmodule hmod, const char * name); 
# 3691
CUresult cuModuleGetGlobal_v2(CUdeviceptr * dptr, size_t * bytes, CUmodule hmod, const char * name); 
# 3725
CUresult cuModuleGetTexRef(CUtexref * pTexRef, CUmodule hmod, const char * name); 
# 3756
CUresult cuModuleGetSurfRef(CUsurfref * pSurfRef, CUmodule hmod, const char * name); 
# 3798
CUresult cuLinkCreate_v2(unsigned numOptions, CUjit_option * options, void ** optionValues, CUlinkState * stateOut); 
# 3835
CUresult cuLinkAddData_v2(CUlinkState state, CUjitInputType type, void * data, size_t size, const char * name, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 3874
CUresult cuLinkAddFile_v2(CUlinkState state, CUjitInputType type, const char * path, unsigned numOptions, CUjit_option * options, void ** optionValues); 
# 3901
CUresult cuLinkComplete(CUlinkState state, void ** cubinOut, size_t * sizeOut); 
# 3915
CUresult cuLinkDestroy(CUlinkState state); 
# 3963
CUresult cuMemGetInfo_v2(size_t * free, size_t * total); 
# 3996
CUresult cuMemAlloc_v2(CUdeviceptr * dptr, size_t bytesize); 
# 4057
CUresult cuMemAllocPitch_v2(CUdeviceptr * dptr, size_t * pPitch, size_t WidthInBytes, size_t Height, unsigned ElementSizeBytes); 
# 4086
CUresult cuMemFree_v2(CUdeviceptr dptr); 
# 4119
CUresult cuMemGetAddressRange_v2(CUdeviceptr * pbase, size_t * psize, CUdeviceptr dptr); 
# 4165
CUresult cuMemAllocHost_v2(void ** pp, size_t bytesize); 
# 4195
CUresult cuMemFreeHost(void * p); 
# 4277
CUresult cuMemHostAlloc(void ** pp, size_t bytesize, unsigned Flags); 
# 4330
CUresult cuMemHostGetDevicePointer_v2(CUdeviceptr * pdptr, void * p, unsigned Flags); 
# 4355
CUresult cuMemHostGetFlags(unsigned * pFlags, void * p); 
# 4465
CUresult cuMemAllocManaged(CUdeviceptr * dptr, size_t bytesize, unsigned flags); 
# 4494
CUresult cuDeviceGetByPCIBusId(CUdevice * dev, const char * pciBusId); 
# 4522
CUresult cuDeviceGetPCIBusId(char * pciBusId, int len, CUdevice dev); 
# 4564
CUresult cuIpcGetEventHandle(CUipcEventHandle * pHandle, CUevent event); 
# 4601
CUresult cuIpcOpenEventHandle(CUevent * phEvent, CUipcEventHandle handle); 
# 4638
CUresult cuIpcGetMemHandle(CUipcMemHandle * pHandle, CUdeviceptr dptr); 
# 4689
CUresult cuIpcOpenMemHandle(CUdeviceptr * pdptr, CUipcMemHandle handle, unsigned Flags); 
# 4720
CUresult cuIpcCloseMemHandle(CUdeviceptr dptr); 
# 4803
CUresult cuMemHostRegister_v2(void * p, size_t bytesize, unsigned Flags); 
# 4827
CUresult cuMemHostUnregister(void * p); 
# 4863
CUresult cuMemcpy(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount); 
# 4892
CUresult cuMemcpyPeer(CUdeviceptr dstDevice, CUcontext dstContext, CUdeviceptr srcDevice, CUcontext srcContext, size_t ByteCount); 
# 4928
CUresult cuMemcpyHtoD_v2(CUdeviceptr dstDevice, const void * srcHost, size_t ByteCount); 
# 4961
CUresult cuMemcpyDtoH_v2(void * dstHost, CUdeviceptr srcDevice, size_t ByteCount); 
# 4994
CUresult cuMemcpyDtoD_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount); 
# 5029
CUresult cuMemcpyDtoA_v2(CUarray dstArray, size_t dstOffset, CUdeviceptr srcDevice, size_t ByteCount); 
# 5066
CUresult cuMemcpyAtoD_v2(CUdeviceptr dstDevice, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 5101
CUresult cuMemcpyHtoA_v2(CUarray dstArray, size_t dstOffset, const void * srcHost, size_t ByteCount); 
# 5136
CUresult cuMemcpyAtoH_v2(void * dstHost, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 5175
CUresult cuMemcpyAtoA_v2(CUarray dstArray, size_t dstOffset, CUarray srcArray, size_t srcOffset, size_t ByteCount); 
# 5336
CUresult cuMemcpy2D_v2(const CUDA_MEMCPY2D * pCopy); 
# 5495
CUresult cuMemcpy2DUnaligned_v2(const CUDA_MEMCPY2D * pCopy); 
# 5663
CUresult cuMemcpy3D_v2(const CUDA_MEMCPY3D * pCopy); 
# 5688
CUresult cuMemcpy3DPeer(const CUDA_MEMCPY3D_PEER * pCopy); 
# 5728
CUresult cuMemcpyAsync(CUdeviceptr dst, CUdeviceptr src, size_t ByteCount, CUstream hStream); 
# 5759
CUresult cuMemcpyPeerAsync(CUdeviceptr dstDevice, CUcontext dstContext, CUdeviceptr srcDevice, CUcontext srcContext, size_t ByteCount, CUstream hStream); 
# 5798
CUresult cuMemcpyHtoDAsync_v2(CUdeviceptr dstDevice, const void * srcHost, size_t ByteCount, CUstream hStream); 
# 5835
CUresult cuMemcpyDtoHAsync_v2(void * dstHost, CUdeviceptr srcDevice, size_t ByteCount, CUstream hStream); 
# 5872
CUresult cuMemcpyDtoDAsync_v2(CUdeviceptr dstDevice, CUdeviceptr srcDevice, size_t ByteCount, CUstream hStream); 
# 5911
CUresult cuMemcpyHtoAAsync_v2(CUarray dstArray, size_t dstOffset, const void * srcHost, size_t ByteCount, CUstream hStream); 
# 5950
CUresult cuMemcpyAtoHAsync_v2(void * dstHost, CUarray srcArray, size_t srcOffset, size_t ByteCount, CUstream hStream); 
# 6115
CUresult cuMemcpy2DAsync_v2(const CUDA_MEMCPY2D * pCopy, CUstream hStream); 
# 6287
CUresult cuMemcpy3DAsync_v2(const CUDA_MEMCPY3D * pCopy, CUstream hStream); 
# 6314
CUresult cuMemcpy3DPeerAsync(const CUDA_MEMCPY3D_PEER * pCopy, CUstream hStream); 
# 6350
CUresult cuMemsetD8_v2(CUdeviceptr dstDevice, unsigned char uc, size_t N); 
# 6384
CUresult cuMemsetD16_v2(CUdeviceptr dstDevice, unsigned short us, size_t N); 
# 6418
CUresult cuMemsetD32_v2(CUdeviceptr dstDevice, unsigned ui, size_t N); 
# 6457
CUresult cuMemsetD2D8_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc, size_t Width, size_t Height); 
# 6497
CUresult cuMemsetD2D16_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us, size_t Width, size_t Height); 
# 6537
CUresult cuMemsetD2D32_v2(CUdeviceptr dstDevice, size_t dstPitch, unsigned ui, size_t Width, size_t Height); 
# 6573
CUresult cuMemsetD8Async(CUdeviceptr dstDevice, unsigned char uc, size_t N, CUstream hStream); 
# 6609
CUresult cuMemsetD16Async(CUdeviceptr dstDevice, unsigned short us, size_t N, CUstream hStream); 
# 6644
CUresult cuMemsetD32Async(CUdeviceptr dstDevice, unsigned ui, size_t N, CUstream hStream); 
# 6685
CUresult cuMemsetD2D8Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned char uc, size_t Width, size_t Height, CUstream hStream); 
# 6727
CUresult cuMemsetD2D16Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned short us, size_t Width, size_t Height, CUstream hStream); 
# 6769
CUresult cuMemsetD2D32Async(CUdeviceptr dstDevice, size_t dstPitch, unsigned ui, size_t Width, size_t Height, CUstream hStream); 
# 6872
CUresult cuArrayCreate_v2(CUarray * pHandle, const CUDA_ARRAY_DESCRIPTOR * pAllocateArray); 
# 6905
CUresult cuArrayGetDescriptor_v2(CUDA_ARRAY_DESCRIPTOR * pArrayDescriptor, CUarray hArray); 
# 6936
CUresult cuArrayDestroy(CUarray hArray); 
# 7116
CUresult cuArray3DCreate_v2(CUarray * pHandle, const CUDA_ARRAY3D_DESCRIPTOR * pAllocateArray); 
# 7152
CUresult cuArray3DGetDescriptor_v2(CUDA_ARRAY3D_DESCRIPTOR * pArrayDescriptor, CUarray hArray); 
# 7279
CUresult cuMipmappedArrayCreate(CUmipmappedArray * pHandle, const CUDA_ARRAY3D_DESCRIPTOR * pMipmappedArrayDesc, unsigned numMipmapLevels); 
# 7305
CUresult cuMipmappedArrayGetLevel(CUarray * pLevelArray, CUmipmappedArray hMipmappedArray, unsigned level); 
# 7325
CUresult cuMipmappedArrayDestroy(CUmipmappedArray hMipmappedArray); 
# 7571
CUresult cuPointerGetAttribute(void * data, CUpointer_attribute attribute, CUdeviceptr ptr); 
# 7640
CUresult cuMemPrefetchAsync(CUdeviceptr devPtr, size_t count, CUdevice dstDevice, CUstream hStream); 
# 7726
CUresult cuMemAdvise(CUdeviceptr devPtr, size_t count, CUmem_advise advice, CUdevice device); 
# 7783
CUresult cuMemRangeGetAttribute(void * data, size_t dataSize, CUmem_range_attribute attribute, CUdeviceptr devPtr, size_t count); 
# 7822
CUresult cuMemRangeGetAttributes(void ** data, size_t * dataSizes, CUmem_range_attribute * attributes, size_t numAttributes, CUdeviceptr devPtr, size_t count); 
# 7866
CUresult cuPointerSetAttribute(const void * value, CUpointer_attribute attribute, CUdeviceptr ptr); 
# 7908
CUresult cuPointerGetAttributes(unsigned numAttributes, CUpointer_attribute * attributes, void ** data, CUdeviceptr ptr); 
# 7956
CUresult cuStreamCreate(CUstream * phStream, unsigned Flags); 
# 8004
CUresult cuStreamCreateWithPriority(CUstream * phStream, unsigned flags, int priority); 
# 8034
CUresult cuStreamGetPriority(CUstream hStream, int * priority); 
# 8061
CUresult cuStreamGetFlags(CUstream hStream, unsigned * flags); 
# 8102
CUresult cuStreamWaitEvent(CUstream hStream, CUevent hEvent, unsigned Flags); 
# 8173
CUresult cuStreamAddCallback(CUstream hStream, CUstreamCallback callback, void * userData, unsigned flags); 
# 8252
CUresult cuStreamAttachMemAsync(CUstream hStream, CUdeviceptr dptr, size_t length, unsigned flags); 
# 8283
CUresult cuStreamQuery(CUstream hStream); 
# 8310
CUresult cuStreamSynchronize(CUstream hStream); 
# 8339
CUresult cuStreamDestroy_v2(CUstream hStream); 
# 8394
CUresult cuEventCreate(CUevent * phEvent, unsigned Flags); 
# 8430
CUresult cuEventRecord(CUevent hEvent, CUstream hStream); 
# 8464
CUresult cuEventQuery(CUevent hEvent); 
# 8498
CUresult cuEventSynchronize(CUevent hEvent); 
# 8527
CUresult cuEventDestroy_v2(CUevent hEvent); 
# 8571
CUresult cuEventElapsedTime(float * pMilliseconds, CUevent hStart, CUevent hEnd); 
# 8606
CUresult cuStreamWaitValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value, unsigned flags); 
# 8639
CUresult cuStreamWriteValue32(CUstream stream, CUdeviceptr addr, cuuint32_t value, unsigned flags); 
# 8671
CUresult cuStreamBatchMemOp(CUstream stream, unsigned count, CUstreamBatchMemOpParams * paramArray, unsigned flags); 
# 8739
CUresult cuFuncGetAttribute(int * pi, CUfunction_attribute attrib, CUfunction hfunc); 
# 8782
CUresult cuFuncSetCacheConfig(CUfunction hfunc, CUfunc_cache config); 
# 8834
CUresult cuFuncSetSharedMemConfig(CUfunction hfunc, CUsharedconfig config); 
# 8948
CUresult cuLaunchKernel(CUfunction f, unsigned gridDimX, unsigned gridDimY, unsigned gridDimZ, unsigned blockDimX, unsigned blockDimY, unsigned blockDimZ, unsigned sharedMemBytes, CUstream hStream, void ** kernelParams, void ** extra); 
# 9009
CUresult cuFuncSetBlockShape(CUfunction hfunc, int x, int y, int z); 
# 9043
CUresult cuFuncSetSharedSize(CUfunction hfunc, unsigned bytes); 
# 9075
CUresult cuParamSetSize(CUfunction hfunc, unsigned numbytes); 
# 9108
CUresult cuParamSeti(CUfunction hfunc, int offset, unsigned value); 
# 9141
CUresult cuParamSetf(CUfunction hfunc, int offset, float value); 
# 9176
CUresult cuParamSetv(CUfunction hfunc, int offset, void * ptr, unsigned numbytes); 
# 9213
CUresult cuLaunch(CUfunction f); 
# 9252
CUresult cuLaunchGrid(CUfunction f, int grid_width, int grid_height); 
# 9299
CUresult cuLaunchGridAsync(CUfunction f, int grid_width, int grid_height, CUstream hStream); 
# 9324
CUresult cuParamSetTexRef(CUfunction hfunc, int texunit, CUtexref hTexRef); 
# 9362
CUresult cuOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, CUfunction func, int blockSize, size_t dynamicSMemSize); 
# 9402
CUresult cuOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, CUfunction func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
# 9452
CUresult cuOccupancyMaxPotentialBlockSize(int * minGridSize, int * blockSize, CUfunction func, CUoccupancyB2DSize blockSizeToDynamicSMemSize, size_t dynamicSMemSize, int blockSizeLimit); 
# 9496
CUresult cuOccupancyMaxPotentialBlockSizeWithFlags(int * minGridSize, int * blockSize, CUfunction func, CUoccupancyB2DSize blockSizeToDynamicSMemSize, size_t dynamicSMemSize, int blockSizeLimit, unsigned flags); 
# 9539
CUresult cuTexRefSetArray(CUtexref hTexRef, CUarray hArray, unsigned Flags); 
# 9566
CUresult cuTexRefSetMipmappedArray(CUtexref hTexRef, CUmipmappedArray hMipmappedArray, unsigned Flags); 
# 9610
CUresult cuTexRefSetAddress_v2(size_t * ByteOffset, CUtexref hTexRef, CUdeviceptr dptr, size_t bytes); 
# 9662
CUresult cuTexRefSetAddress2D_v3(CUtexref hTexRef, const CUDA_ARRAY_DESCRIPTOR * desc, CUdeviceptr dptr, size_t Pitch); 
# 9691
CUresult cuTexRefSetFormat(CUtexref hTexRef, CUarray_format fmt, int NumPackedComponents); 
# 9731
CUresult cuTexRefSetAddressMode(CUtexref hTexRef, int dim, CUaddress_mode am); 
# 9764
CUresult cuTexRefSetFilterMode(CUtexref hTexRef, CUfilter_mode fm); 
# 9797
CUresult cuTexRefSetMipmapFilterMode(CUtexref hTexRef, CUfilter_mode fm); 
# 9823
CUresult cuTexRefSetMipmapLevelBias(CUtexref hTexRef, float bias); 
# 9851
CUresult cuTexRefSetMipmapLevelClamp(CUtexref hTexRef, float minMipmapLevelClamp, float maxMipmapLevelClamp); 
# 9877
CUresult cuTexRefSetMaxAnisotropy(CUtexref hTexRef, unsigned maxAniso); 
# 9907
CUresult cuTexRefSetBorderColor(CUtexref hTexRef, float * pBorderColor); 
# 9942
CUresult cuTexRefSetFlags(CUtexref hTexRef, unsigned Flags); 
# 9968
CUresult cuTexRefGetAddress_v2(CUdeviceptr * pdptr, CUtexref hTexRef); 
# 9994
CUresult cuTexRefGetArray(CUarray * phArray, CUtexref hTexRef); 
# 10019
CUresult cuTexRefGetMipmappedArray(CUmipmappedArray * phMipmappedArray, CUtexref hTexRef); 
# 10045
CUresult cuTexRefGetAddressMode(CUaddress_mode * pam, CUtexref hTexRef, int dim); 
# 10069
CUresult cuTexRefGetFilterMode(CUfilter_mode * pfm, CUtexref hTexRef); 
# 10095
CUresult cuTexRefGetFormat(CUarray_format * pFormat, int * pNumChannels, CUtexref hTexRef); 
# 10119
CUresult cuTexRefGetMipmapFilterMode(CUfilter_mode * pfm, CUtexref hTexRef); 
# 10143
CUresult cuTexRefGetMipmapLevelBias(float * pbias, CUtexref hTexRef); 
# 10168
CUresult cuTexRefGetMipmapLevelClamp(float * pminMipmapLevelClamp, float * pmaxMipmapLevelClamp, CUtexref hTexRef); 
# 10192
CUresult cuTexRefGetMaxAnisotropy(int * pmaxAniso, CUtexref hTexRef); 
# 10219
CUresult cuTexRefGetBorderColor(float * pBorderColor, CUtexref hTexRef); 
# 10242
CUresult cuTexRefGetFlags(unsigned * pFlags, CUtexref hTexRef); 
# 10281
CUresult cuTexRefCreate(CUtexref * pTexRef); 
# 10301
CUresult cuTexRefDestroy(CUtexref hTexRef); 
# 10340
CUresult cuSurfRefSetArray(CUsurfref hSurfRef, CUarray hArray, unsigned Flags); 
# 10361
CUresult cuSurfRefGetArray(CUarray * phArray, CUsurfref hSurfRef); 
# 10583
CUresult cuTexObjectCreate(CUtexObject * pTexObject, const CUDA_RESOURCE_DESC * pResDesc, const CUDA_TEXTURE_DESC * pTexDesc, const CUDA_RESOURCE_VIEW_DESC * pResViewDesc); 
# 10601
CUresult cuTexObjectDestroy(CUtexObject texObject); 
# 10620
CUresult cuTexObjectGetResourceDesc(CUDA_RESOURCE_DESC * pResDesc, CUtexObject texObject); 
# 10639
CUresult cuTexObjectGetTextureDesc(CUDA_TEXTURE_DESC * pTexDesc, CUtexObject texObject); 
# 10659
CUresult cuTexObjectGetResourceViewDesc(CUDA_RESOURCE_VIEW_DESC * pResViewDesc, CUtexObject texObject); 
# 10700
CUresult cuSurfObjectCreate(CUsurfObject * pSurfObject, const CUDA_RESOURCE_DESC * pResDesc); 
# 10718
CUresult cuSurfObjectDestroy(CUsurfObject surfObject); 
# 10737
CUresult cuSurfObjectGetResourceDesc(CUDA_RESOURCE_DESC * pResDesc, CUsurfObject surfObject); 
# 10779
CUresult cuDeviceCanAccessPeer(int * canAccessPeer, CUdevice dev, CUdevice peerDev); 
# 10816
CUresult cuDeviceGetP2PAttribute(int * value, CUdevice_P2PAttribute attrib, CUdevice srcDevice, CUdevice dstDevice); 
# 10865
CUresult cuCtxEnablePeerAccess(CUcontext peerContext, unsigned Flags); 
# 10890
CUresult cuCtxDisablePeerAccess(CUcontext peerContext); 
# 10934
CUresult cuGraphicsUnregisterResource(CUgraphicsResource resource); 
# 10972
CUresult cuGraphicsSubResourceGetMappedArray(CUarray * pArray, CUgraphicsResource resource, unsigned arrayIndex, unsigned mipLevel); 
# 11003
CUresult cuGraphicsResourceGetMappedMipmappedArray(CUmipmappedArray * pMipmappedArray, CUgraphicsResource resource); 
# 11039
CUresult cuGraphicsResourceGetMappedPointer_v2(CUdeviceptr * pDevPtr, size_t * pSize, CUgraphicsResource resource); 
# 11080
CUresult cuGraphicsResourceSetMapFlags_v2(CUgraphicsResource resource, unsigned flags); 
# 11119
CUresult cuGraphicsMapResources(unsigned count, CUgraphicsResource * resources, CUstream hStream); 
# 11155
CUresult cuGraphicsUnmapResources(unsigned count, CUgraphicsResource * resources, CUstream hStream); 
# 11159
CUresult cuGetExportTable(const void ** ppExportTable, const CUuuid * pExportTableId); 
# 11478
}
# 62 "/usr/local/cuda/include/cuComplex.h"
extern "C" {
# 67
typedef float2 cuFloatComplex; 
# 69
static inline float cuCrealf(cuFloatComplex x) 
# 70
{ 
# 71
return x.x; 
# 72
} 
# 74
static inline float cuCimagf(cuFloatComplex x) 
# 75
{ 
# 76
return x.y; 
# 77
} 
# 79
static inline cuFloatComplex make_cuFloatComplex(float 
# 80
r, float i) 
# 81
{ 
# 82
cuFloatComplex res; 
# 83
(res.x) = r; 
# 84
(res.y) = i; 
# 85
return res; 
# 86
} 
# 88
static inline cuFloatComplex cuConjf(cuFloatComplex x) 
# 89
{ 
# 90
return make_cuFloatComplex(cuCrealf(x), -cuCimagf(x)); 
# 91
} 
# 92
static inline cuFloatComplex cuCaddf(cuFloatComplex x, cuFloatComplex 
# 93
y) 
# 94
{ 
# 95
return make_cuFloatComplex(cuCrealf(x) + cuCrealf(y), cuCimagf(x) + cuCimagf(y)); 
# 97
} 
# 99
static inline cuFloatComplex cuCsubf(cuFloatComplex x, cuFloatComplex 
# 100
y) 
# 101
{ 
# 102
return make_cuFloatComplex(cuCrealf(x) - cuCrealf(y), cuCimagf(x) - cuCimagf(y)); 
# 104
} 
# 111
static inline cuFloatComplex cuCmulf(cuFloatComplex x, cuFloatComplex 
# 112
y) 
# 113
{ 
# 114
cuFloatComplex prod; 
# 115
prod = make_cuFloatComplex((cuCrealf(x) * cuCrealf(y)) - (cuCimagf(x) * cuCimagf(y)), (cuCrealf(x) * cuCimagf(y)) + (cuCimagf(x) * cuCrealf(y))); 
# 119
return prod; 
# 120
} 
# 127
static inline cuFloatComplex cuCdivf(cuFloatComplex x, cuFloatComplex 
# 128
y) 
# 129
{ 
# 130
cuFloatComplex quot; 
# 131
float s = fabsf(cuCrealf(y)) + fabsf(cuCimagf(y)); 
# 132
float oos = (1.0F) / s; 
# 133
float ars = cuCrealf(x) * oos; 
# 134
float ais = cuCimagf(x) * oos; 
# 135
float brs = cuCrealf(y) * oos; 
# 136
float bis = cuCimagf(y) * oos; 
# 137
s = ((brs * brs) + (bis * bis)); 
# 138
oos = ((1.0F) / s); 
# 139
quot = make_cuFloatComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos); 
# 141
return quot; 
# 142
} 
# 152
static inline float cuCabsf(cuFloatComplex x) 
# 153
{ 
# 154
float a = cuCrealf(x); 
# 155
float b = cuCimagf(x); 
# 156
float v, w, t; 
# 157
a = fabsf(a); 
# 158
b = fabsf(b); 
# 159
if (a > b) { 
# 160
v = a; 
# 161
w = b; 
# 162
} else { 
# 163
v = b; 
# 164
w = a; 
# 165
}  
# 166
t = (w / v); 
# 167
t = ((1.0F) + (t * t)); 
# 168
t = (v * sqrtf(t)); 
# 169
if (((v == (0.0F)) || (v > (3.402823466e+38F))) || (w > (3.402823466e+38F))) { 
# 170
t = (v + w); 
# 171
}  
# 172
return t; 
# 173
} 
# 176
typedef double2 cuDoubleComplex; 
# 178
static inline double cuCreal(cuDoubleComplex x) 
# 179
{ 
# 180
return x.x; 
# 181
} 
# 183
static inline double cuCimag(cuDoubleComplex x) 
# 184
{ 
# 185
return x.y; 
# 186
} 
# 188
static inline cuDoubleComplex make_cuDoubleComplex(double 
# 189
r, double i) 
# 190
{ 
# 191
cuDoubleComplex res; 
# 192
(res.x) = r; 
# 193
(res.y) = i; 
# 194
return res; 
# 195
} 
# 197
static inline cuDoubleComplex cuConj(cuDoubleComplex x) 
# 198
{ 
# 199
return make_cuDoubleComplex(cuCreal(x), -cuCimag(x)); 
# 200
} 
# 202
static inline cuDoubleComplex cuCadd(cuDoubleComplex x, cuDoubleComplex 
# 203
y) 
# 204
{ 
# 205
return make_cuDoubleComplex(cuCreal(x) + cuCreal(y), cuCimag(x) + cuCimag(y)); 
# 207
} 
# 209
static inline cuDoubleComplex cuCsub(cuDoubleComplex x, cuDoubleComplex 
# 210
y) 
# 211
{ 
# 212
return make_cuDoubleComplex(cuCreal(x) - cuCreal(y), cuCimag(x) - cuCimag(y)); 
# 214
} 
# 221
static inline cuDoubleComplex cuCmul(cuDoubleComplex x, cuDoubleComplex 
# 222
y) 
# 223
{ 
# 224
cuDoubleComplex prod; 
# 225
prod = make_cuDoubleComplex((cuCreal(x) * cuCreal(y)) - (cuCimag(x) * cuCimag(y)), (cuCreal(x) * cuCimag(y)) + (cuCimag(x) * cuCreal(y))); 
# 229
return prod; 
# 230
} 
# 237
static inline cuDoubleComplex cuCdiv(cuDoubleComplex x, cuDoubleComplex 
# 238
y) 
# 239
{ 
# 240
cuDoubleComplex quot; 
# 241
double s = fabs(cuCreal(y)) + fabs(cuCimag(y)); 
# 242
double oos = (1.0) / s; 
# 243
double ars = cuCreal(x) * oos; 
# 244
double ais = cuCimag(x) * oos; 
# 245
double brs = cuCreal(y) * oos; 
# 246
double bis = cuCimag(y) * oos; 
# 247
s = ((brs * brs) + (bis * bis)); 
# 248
oos = ((1.0) / s); 
# 249
quot = make_cuDoubleComplex(((ars * brs) + (ais * bis)) * oos, ((ais * brs) - (ars * bis)) * oos); 
# 251
return quot; 
# 252
} 
# 260
static inline double cuCabs(cuDoubleComplex x) 
# 261
{ 
# 262
double a = cuCreal(x); 
# 263
double b = cuCimag(x); 
# 264
double v, w, t; 
# 265
a = fabs(a); 
# 266
b = fabs(b); 
# 267
if (a > b) { 
# 268
v = a; 
# 269
w = b; 
# 270
} else { 
# 271
v = b; 
# 272
w = a; 
# 273
}  
# 274
t = (w / v); 
# 275
t = ((1.0) + (t * t)); 
# 276
t = (v * sqrt(t)); 
# 277
if (((v == (0.0)) || (v > (1.797693134862315708e+308))) || (w > (1.797693134862315708e+308))) 
# 278
{ 
# 279
t = (v + w); 
# 280
}  
# 281
return t; 
# 282
} 
# 285
}
# 289
typedef cuFloatComplex cuComplex; 
# 290
static inline cuComplex make_cuComplex(float x, float 
# 291
y) 
# 292
{ 
# 293
return make_cuFloatComplex(x, y); 
# 294
} 
# 297
static inline cuDoubleComplex cuComplexFloatToDouble(cuFloatComplex 
# 298
c) 
# 299
{ 
# 300
return make_cuDoubleComplex((double)cuCrealf(c), (double)cuCimagf(c)); 
# 301
} 
# 303
static inline cuFloatComplex cuComplexDoubleToFloat(cuDoubleComplex 
# 304
c) 
# 305
{ 
# 306
return make_cuFloatComplex((float)cuCreal(c), (float)cuCimag(c)); 
# 307
} 
# 310
static inline cuComplex cuCfmaf(cuComplex x, cuComplex y, cuComplex d) 
# 311
{ 
# 312
float real_res; 
# 313
float imag_res; 
# 315
real_res = ((cuCrealf(x) * cuCrealf(y)) + cuCrealf(d)); 
# 316
imag_res = ((cuCrealf(x) * cuCimagf(y)) + cuCimagf(d)); 
# 318
real_res = ((-(cuCimagf(x) * cuCimagf(y))) + real_res); 
# 319
imag_res = ((cuCimagf(x) * cuCrealf(y)) + imag_res); 
# 321
return make_cuComplex(real_res, imag_res); 
# 322
} 
# 324
static inline cuDoubleComplex cuCfma(cuDoubleComplex x, cuDoubleComplex y, cuDoubleComplex d) 
# 325
{ 
# 326
double real_res; 
# 327
double imag_res; 
# 329
real_res = ((cuCreal(x) * cuCreal(y)) + cuCreal(d)); 
# 330
imag_res = ((cuCreal(x) * cuCimag(y)) + cuCimag(d)); 
# 332
real_res = ((-(cuCimag(x) * cuCimag(y))) + real_res); 
# 333
imag_res = ((cuCimag(x) * cuCreal(y)) + imag_res); 
# 335
return make_cuDoubleComplex(real_res, imag_res); 
# 336
} 
# 74 "/usr/local/cuda/include/cufft.h"
extern "C" {
# 97
typedef 
# 78
enum cufftResult_t { 
# 79
CUFFT_SUCCESS, 
# 80
CUFFT_INVALID_PLAN, 
# 81
CUFFT_ALLOC_FAILED, 
# 82
CUFFT_INVALID_TYPE, 
# 83
CUFFT_INVALID_VALUE, 
# 84
CUFFT_INTERNAL_ERROR, 
# 85
CUFFT_EXEC_FAILED, 
# 86
CUFFT_SETUP_FAILED, 
# 87
CUFFT_INVALID_SIZE, 
# 88
CUFFT_UNALIGNED_DATA, 
# 89
CUFFT_INCOMPLETE_PARAMETER_LIST, 
# 90
CUFFT_INVALID_DEVICE, 
# 91
CUFFT_PARSE_ERROR, 
# 92
CUFFT_NO_WORKSPACE, 
# 93
CUFFT_NOT_IMPLEMENTED, 
# 94
CUFFT_LICENSE_ERROR, 
# 95
CUFFT_NOT_SUPPORTED
# 97
} cufftResult; 
# 107
typedef float cufftReal; 
# 108
typedef double cufftDoubleReal; 
# 113
typedef cuComplex cufftComplex; 
# 114
typedef cuDoubleComplex cufftDoubleComplex; 
# 128
typedef 
# 121
enum cufftType_t { 
# 122
CUFFT_R2C = 42, 
# 123
CUFFT_C2R = 44, 
# 124
CUFFT_C2C = 41, 
# 125
CUFFT_D2Z = 106, 
# 126
CUFFT_Z2D = 108, 
# 127
CUFFT_Z2Z = 105
# 128
} cufftType; 
# 133
typedef 
# 131
enum cufftCompatibility_t { 
# 132
CUFFT_COMPATIBILITY_FFTW_PADDING = 1
# 133
} cufftCompatibility; 
# 143
typedef int cufftHandle; 
# 146
__attribute((visibility("default"))) cufftResult cufftPlan1d(cufftHandle * plan, int nx, cufftType type, int batch); 
# 151
__attribute((visibility("default"))) cufftResult cufftPlan2d(cufftHandle * plan, int nx, int ny, cufftType type); 
# 155
__attribute((visibility("default"))) cufftResult cufftPlan3d(cufftHandle * plan, int nx, int ny, int nz, cufftType type); 
# 159
__attribute((visibility("default"))) cufftResult cufftPlanMany(cufftHandle * plan, int rank, int * n, int * inembed, int istride, int idist, int * onembed, int ostride, int odist, cufftType type, int batch); 
# 167
__attribute((visibility("default"))) cufftResult cufftMakePlan1d(cufftHandle plan, int nx, cufftType type, int batch, size_t * workSize); 
# 173
__attribute((visibility("default"))) cufftResult cufftMakePlan2d(cufftHandle plan, int nx, int ny, cufftType type, size_t * workSize); 
# 178
__attribute((visibility("default"))) cufftResult cufftMakePlan3d(cufftHandle plan, int nx, int ny, int nz, cufftType type, size_t * workSize); 
# 183
__attribute((visibility("default"))) cufftResult cufftMakePlanMany(cufftHandle plan, int rank, int * n, int * inembed, int istride, int idist, int * onembed, int ostride, int odist, cufftType type, int batch, size_t * workSize); 
# 192
__attribute((visibility("default"))) cufftResult cufftMakePlanMany64(cufftHandle plan, int rank, long long * n, long long * inembed, long long istride, long long idist, long long * onembed, long long ostride, long long odist, cufftType type, long long batch, size_t * workSize); 
# 204
__attribute((visibility("default"))) cufftResult cufftGetSizeMany64(cufftHandle plan, int rank, long long * n, long long * inembed, long long istride, long long idist, long long * onembed, long long ostride, long long odist, cufftType type, long long batch, size_t * workSize); 
# 218
__attribute((visibility("default"))) cufftResult cufftEstimate1d(int nx, cufftType type, int batch, size_t * workSize); 
# 223
__attribute((visibility("default"))) cufftResult cufftEstimate2d(int nx, int ny, cufftType type, size_t * workSize); 
# 227
__attribute((visibility("default"))) cufftResult cufftEstimate3d(int nx, int ny, int nz, cufftType type, size_t * workSize); 
# 231
__attribute((visibility("default"))) cufftResult cufftEstimateMany(int rank, int * n, int * inembed, int istride, int idist, int * onembed, int ostride, int odist, cufftType type, int batch, size_t * workSize); 
# 239
__attribute((visibility("default"))) cufftResult cufftCreate(cufftHandle * handle); 
# 241
__attribute((visibility("default"))) cufftResult cufftGetSize1d(cufftHandle handle, int nx, cufftType type, int batch, size_t * workSize); 
# 247
__attribute((visibility("default"))) cufftResult cufftGetSize2d(cufftHandle handle, int nx, int ny, cufftType type, size_t * workSize); 
# 252
__attribute((visibility("default"))) cufftResult cufftGetSize3d(cufftHandle handle, int nx, int ny, int nz, cufftType type, size_t * workSize); 
# 257
__attribute((visibility("default"))) cufftResult cufftGetSizeMany(cufftHandle handle, int rank, int * n, int * inembed, int istride, int idist, int * onembed, int ostride, int odist, cufftType type, int batch, size_t * workArea); 
# 263
__attribute((visibility("default"))) cufftResult cufftGetSize(cufftHandle handle, size_t * workSize); 
# 265
__attribute((visibility("default"))) cufftResult cufftSetWorkArea(cufftHandle plan, void * workArea); 
# 267
__attribute((visibility("default"))) cufftResult cufftSetAutoAllocation(cufftHandle plan, int autoAllocate); 
# 269
__attribute((visibility("default"))) cufftResult cufftExecC2C(cufftHandle plan, cufftComplex * idata, cufftComplex * odata, int direction); 
# 274
__attribute((visibility("default"))) cufftResult cufftExecR2C(cufftHandle plan, cufftReal * idata, cufftComplex * odata); 
# 278
__attribute((visibility("default"))) cufftResult cufftExecC2R(cufftHandle plan, cufftComplex * idata, cufftReal * odata); 
# 282
__attribute((visibility("default"))) cufftResult cufftExecZ2Z(cufftHandle plan, cufftDoubleComplex * idata, cufftDoubleComplex * odata, int direction); 
# 287
__attribute((visibility("default"))) cufftResult cufftExecD2Z(cufftHandle plan, cufftDoubleReal * idata, cufftDoubleComplex * odata); 
# 291
__attribute((visibility("default"))) cufftResult cufftExecZ2D(cufftHandle plan, cufftDoubleComplex * idata, cufftDoubleReal * odata); 
# 297
__attribute((visibility("default"))) cufftResult cufftSetStream(cufftHandle plan, cudaStream_t stream); 
# 300
__attribute((visibility("default"))) cufftResult cufftSetCompatibilityMode(cufftHandle plan, cufftCompatibility mode); 
# 303
__attribute((visibility("default"))) cufftResult cufftDestroy(cufftHandle plan); 
# 305
__attribute((visibility("default"))) cufftResult cufftGetVersion(int * version); 
# 307
__attribute((visibility("default"))) cufftResult cufftGetProperty(libraryPropertyType type, int * value); 
# 311
}
# 39 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/cuerror.cuh"
inline void _cuErrCheck(const cudaError_t err, const char *file, const int line) 
# 40
{ 
# 41
if (err != (cudaSuccess)) 
# 42
{ 
# 43
fprintf(stderr, "\n"); 
# 44
fprintf(stderr, "CUDA ERROR in file=`%s`, line=%d\n", file, line); 
# 45
fprintf(stderr, "CUDA ERROR %d: %s\n", err, cudaGetErrorString((cudaError_t)err)); 
# 46
fprintf(stderr, "\n"); 
# 47
cudaDeviceReset(); 
# 48
exit(1); 
# 49
}  
# 50
} 
# 57
static const char *cufftGetErrorEnum(cufftResult error) 
# 58
{ 
# 59
switch (error) 
# 60
{ 
# 61
case CUFFT_SUCCESS:  
# 62
return "CUFFT_SUCCESS"; 
# 63
case CUFFT_INVALID_PLAN:  
# 64
return "CUFFT_INVALID_PLAN"; 
# 65
case CUFFT_ALLOC_FAILED:  
# 66
return "CUFFT_ALLOC_FAILED"; 
# 67
case CUFFT_INVALID_TYPE:  
# 68
return "CUFFT_INVALID_TYPE"; 
# 69
case CUFFT_INVALID_VALUE:  
# 70
return "CUFFT_INVALID_VALUE"; 
# 71
case CUFFT_INTERNAL_ERROR:  
# 72
return "CUFFT_INTERNAL_ERROR"; 
# 73
case CUFFT_EXEC_FAILED:  
# 74
return "CUFFT_EXEC_FAILED"; 
# 75
case CUFFT_SETUP_FAILED:  
# 76
return "CUFFT_SETUP_FAILED"; 
# 77
case CUFFT_INVALID_SIZE:  
# 78
return "CUFFT_INVALID_SIZE"; 
# 79
case CUFFT_UNALIGNED_DATA:  
# 80
return "CUFFT_UNALIGNED_DATA"; 
# 81
case CUFFT_INCOMPLETE_PARAMETER_LIST:  
# 82
return "CUFFT_INCOMPLETE_PARAMETER_LIST"; 
# 83
case CUFFT_INVALID_DEVICE:  
# 84
return "CUFFT_INVALID_DEVICE"; 
# 85
case CUFFT_NO_WORKSPACE:  
# 86
return "CUFFT_NO_WORKSPACE"; 
# 87
case CUFFT_PARSE_ERROR:  
# 88
return "CUFFT_PARSE_ERROR"; 
# 89
case CUFFT_NOT_IMPLEMENTED:  
# 90
return "CUFFT_NOT_IMPLEMENTED"; 
# 91
case CUFFT_LICENSE_ERROR:  
# 92
return "CUFFT_LICENSE_ERROR"; 
# 93
default:  
# 94
return "UNKNOWN ERROR!"; 
# 95
}  
# 96
} 
# 98
inline void _cufftErrChk(cufftResult err, const char *file, const int line) 
# 99
{ 
# 100
if ((CUFFT_SUCCESS) != err) { 
# 101
fprintf(stderr, "\n"); 
# 102
fprintf(stderr, "CUFFT ERROR in file=`%s`, line=%d\n", file, line); 
# 103
fprintf(stderr, "CUFFT ERROR %d: %s\n", err, cufftGetErrorEnum((cufftResult)err)); 
# 104
fprintf(stderr, "\n"); 
# 105
cudaDeviceReset(); 
# 106
exit(1); 
# 107
}  
# 108
} 
# 96 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.hpp"
uint16_t nx, ny, nz; 
# 99
inline void set_lattice_size(const uint16_t _nx, const uint16_t _ny, const uint16_t _nz) 
# 100
{ 
# 101
nx = _nx; 
# 102
ny = _ny; 
# 103
nz = _nz; 
# 104
} 
# 106
inline void set_lattice() 
# 107
{ 
# 108
set_lattice_size((uint16_t)64, (uint16_t)48, (uint16_t)32); 
# 109
} 
# 111
inline void get_lattice_size(uint16_t *_nx, uint16_t *_ny, uint16_t *_nz) 
# 112
{ 
# 113
(*_nx) = nx; 
# 114
(*_ny) = ny; 
# 115
(*_nz) = nz; 
# 116
} 
# 119
static double d_charge[1]; 
# 120
static double d_lcutoff[1]; 
# 121
static double d_kkx[64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))]; 
# 122
static double d_kky[48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))]; 
# 123
static double d_kkz[32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))]; 
# 134
class Coulomb { 
# 139
public: Coulomb(int devId = 0, int nthreads = 1024); 
# 140
~Coulomb(); 
# 143
void set_charge(const double charge); 
# 146
void get_density_enlarged(cuDoubleComplex * d_psi, double * h_result = 0, double * h_t = 0, const int _nthreads = -1); 
# 147
void get_vcoulomb_enlarged(cuDoubleComplex * h_result = 0, double * h_t = 0, int _nthreads = -1, unsigned kernel_type = 0); 
# 149
void get_vcoulomb_lessened(double * d_vcoulomb, double * h_result = 0, double * h_t = 0, const int _nthreads = -1); 
# 152
void save_info(const double sigma); 
# 153
void get_lattice(unsigned * nx, unsigned * ny, unsigned * nz, unsigned * cx, unsigned * cy, unsigned * cz, double * _lcutoff); 
# 154
void get_lattice(unsigned * lattice, double * _lcutoff); 
# 157
cufftHandle plan_forward; 
# 158
cufftHandle plan_forward_cb; 
# 159
cufftHandle plan_inverse; 
# 160
cufftHandle plan_inverse_cb; 
# 165
private: cuDoubleComplex *d_wrk_arr; 
# 166
cuDoubleComplex *d_density_k; 
# 167
double *d_density; 
# 169
int _devId; 
# 170
cudaDeviceProp dev_prop; 
# 171
dim3 gpu_threads; 
# 172
dim3 gpu_blocks; 
# 173
double lcutoff; 
# 177
}; 
# 15 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/complex_operators.cuh"
__attribute__((unused)) static cufftDoubleComplex operator*(const cufftDoubleComplex &a, const cufftDoubleComplex &b) {int volatile ___ = 1;(void)a;(void)b;
# 17
::exit(___);}
#if 0
# 15
{ 
# 16
return make_cuDoubleComplex(((a.x) * (b.x)) - ((a.y) * (b.y)), ((a.x) * (b.y)) + ((a.y) * (b.x))); 
# 17
} 
#endif
# 19 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/complex_operators.cuh"
__attribute__((unused)) static cufftDoubleComplex operator*(const double &a, const cufftDoubleComplex &b) {int volatile ___ = 1;(void)a;(void)b;
# 21
::exit(___);}
#if 0
# 19
{ 
# 20
return make_cuDoubleComplex(a * (b.x), a * (b.y)); 
# 21
} 
#endif
# 23 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/complex_operators.cuh"
__attribute__((unused)) static cufftDoubleComplex &operator*=(cufftDoubleComplex &a, const cufftDoubleComplex &b) {int volatile ___ = 1;(void)a;(void)b;
# 25
::exit(___);}
#if 0
# 23
{ 
# 24
return a = ((a * b)); 
# 25
} 
#endif
# 27 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/complex_operators.cuh"
__attribute__((unused)) static cufftDoubleComplex e_pow_I(double x) {int volatile ___ = 1;(void)x;
# 31
::exit(___);}
#if 0
# 27
{ 
# 28
cufftDoubleComplex e; 
# 29
sincos(x, &(e.y), &(e.x)); 
# 30
return e; 
# 31
} 
#endif
# 40 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const unsigned nx, const unsigned ny, const unsigned nz, const unsigned 
# 41
cx, const unsigned cy, const unsigned cz> static void 
# 42
__wrapper__device_stub___kernel_enlarge_1Dindexing__(cuDoubleComplex *&array_in, double *&array_out) {exit(1);}
#if 0
# 43
{ 
# 44
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 45
size_t ix, iy, iz, i; 
# 47
if (ixyz < (((nx) * (ny)) * (nz))) 
# 48
{ 
# 49
i = ixyz; ix = (i / (48 * 32)); i = (i - ((ix * (48)) * (32))); iy = (i / (32)); iz = (i - (iy * (32))); ; 
# 50
double density = (((array_in[ixyz]).x) * ((array_in[ixyz]).x)) + (((array_in[ixyz]).y) * ((array_in[ixyz]).y)); 
# 53
i = ((((cz) + iz) + (((nz) + ((2) * (cz))) * ((cy) + iy))) + ((((nz) + ((2) * (cz))) * ((ny) + ((2) * (cy)))) * ((cx) + ix))); ; 
# 54
(array_out[i]) = density; 
# 55
}  
# 56
} 
#endif
# 40 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const unsigned nx, const unsigned ny, const unsigned nz, const unsigned 
# 41
cx, const unsigned cy, const unsigned cz> void 
# 42
__kernel_enlarge_1Dindexing__(cuDoubleComplex *array_in, double *array_out) 
# 43
{__wrapper__device_stub___kernel_enlarge_1Dindexing__<nx,ny,nz,cx,cy,cz>(array_in,array_out);
# 56
return;}
#if 0
# 43
{ 
# 44
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 45
size_t ix, iy, iz, i; 
# 47
if (ixyz < (((nx) * (ny)) * (nz))) 
# 48
{ 
# 49
i = ixyz; ix = (i / (48 * 32)); i = (i - ((ix * (48)) * (32))); iy = (i / (32)); iz = (i - (iy * (32))); ; 
# 50
double density = (((array_in[ixyz]).x) * ((array_in[ixyz]).x)) + (((array_in[ixyz]).y) * ((array_in[ixyz]).y)); 
# 53
i = ((((cz) + iz) + (((nz) + ((2) * (cz))) * ((cy) + iy))) + ((((nz) + ((2) * (cz))) * ((ny) + ((2) * (cy)))) * ((cx) + ix))); ; 
# 54
(array_out[i]) = density; 
# 55
}  
# 56
} 
#endif
# 67 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const unsigned nx, const unsigned ny, const unsigned nz, const unsigned 
# 68
cx, const unsigned cy, const unsigned cz> static void 
# 69
__wrapper__device_stub___kernel_lessen_1Dindexing__(double *&array_in, double *&array_out) {exit(1);}
#if 0
# 70
{ 
# 72
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 73
size_t ix, iy, iz, i; 
# 75
if (ixyz < ((64 * 48) * 32)) 
# 76
{ 
# 77
i = ixyz; ix = (i / (48 * 32)); i = (i - ((ix * (48)) * (32))); iy = (i / (32)); iz = (i - (iy * (32))); ; 
# 78
i = ((((cz) + iz) + ((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) * ((cy) + iy))) + (((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * ((cx) + ix))); ; 
# 79
(array_out[ixyz]) = (array_in[i]); 
# 80
}  
# 81
} 
#endif
# 67 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const unsigned nx, const unsigned ny, const unsigned nz, const unsigned 
# 68
cx, const unsigned cy, const unsigned cz> void 
# 69
__kernel_lessen_1Dindexing__(double *array_in, double *array_out) 
# 70
{__wrapper__device_stub___kernel_lessen_1Dindexing__<nx,ny,nz,cx,cy,cz>(array_in,array_out);
# 81
return;}
#if 0
# 70
{ 
# 72
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 73
size_t ix, iy, iz, i; 
# 75
if (ixyz < ((64 * 48) * 32)) 
# 76
{ 
# 77
i = ixyz; ix = (i / (48 * 32)); i = (i - ((ix * (48)) * (32))); iy = (i / (32)); iz = (i - (iy * (32))); ; 
# 78
i = ((((cz) + iz) + ((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) * ((cy) + iy))) + (((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * ((cx) + ix))); ; 
# 79
(array_out[ixyz]) = (array_in[i]); 
# 80
}  
# 81
} 
#endif
# 95 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
__attribute__((unused)) inline cuDoubleComplex cmath_DZ_mul(double r, cuDoubleComplex z1) 
# 96
{int volatile ___ = 1;(void)r;(void)z1;
# 101
::exit(___);}
#if 0
# 96
{ 
# 97
cuDoubleComplex z2; 
# 98
(z2.x) = (r * (z1.x)); 
# 99
(z2.y) = (r * (z1.y)); 
# 100
return z2; 
# 101
} 
#endif
# 136 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 137
__wrapper__device_stub_kernel_coulomb_sph_cutoff0(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 138
{ 
# 139
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 140
int ix, iy, iz, i; 
# 141
double kx, ky, kz, _k2; 
# 142
cufftDoubleComplex density; 
# 144
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 145
{ 
# 147
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 151
if (ix < ((nx) / 2)) { kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)ix)); } else { 
# 152
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - (nx)))); }  
# 154
if (iy < ((ny) / 2)) { ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)iy)); } else { 
# 155
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - (ny)))); }  
# 157
if (iz < ((nz) / 2)) { kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)iz)); } else { 
# 158
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)(iz - (nz)))); }  
# 161
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 162
density = (density_k[ixyz]); 
# 164
density = (((_k2 > (1.000000000000000078e-15)) ? cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density) : make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))))); 
# 170
(vcoulomb_k[ixyz]) = density; 
# 172
}  
# 173
} 
#endif
# 136 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 137
kernel_coulomb_sph_cutoff0(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 138
{__wrapper__device_stub_kernel_coulomb_sph_cutoff0<nx,ny,nz>(density_k,vcoulomb_k);
# 173
return;}
#if 0
# 138
{ 
# 139
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 140
int ix, iy, iz, i; 
# 141
double kx, ky, kz, _k2; 
# 142
cufftDoubleComplex density; 
# 144
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 145
{ 
# 147
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 151
if (ix < ((nx) / 2)) { kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)ix)); } else { 
# 152
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - (nx)))); }  
# 154
if (iy < ((ny) / 2)) { ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)iy)); } else { 
# 155
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - (ny)))); }  
# 157
if (iz < ((nz) / 2)) { kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)iz)); } else { 
# 158
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)(iz - (nz)))); }  
# 161
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 162
density = (density_k[ixyz]); 
# 164
density = (((_k2 > (1.000000000000000078e-15)) ? cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density) : make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))))); 
# 170
(vcoulomb_k[ixyz]) = density; 
# 172
}  
# 173
} 
#endif
# 178 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 179
__wrapper__device_stub_kernel_coulomb_sph_cutoff1(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 180
{ 
# 181
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 182
int ix, iy, iz, i; 
# 183
double kx, ky, kz, _k2; 
# 184
cufftDoubleComplex density; 
# 186
if (ixyz == (0)) 
# 187
{ 
# 188
density = (density_k[ixyz]); 
# 189
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 191
(vcoulomb_k[ixyz]) = density; 
# 192
} else { 
# 193
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 194
{ 
# 196
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 200
if (ix < ((nx) / 2)) { kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)ix)); } else { 
# 201
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - (nx)))); }  
# 203
if (iy < ((ny) / 2)) { ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)iy)); } else { 
# 204
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - (ny)))); }  
# 206
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * iz); 
# 209
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 210
density = (density_k[ixyz]); 
# 212
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 213
(vcoulomb_k[ixyz]) = density; 
# 225
}  }  
# 226
} 
#endif
# 178 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 179
kernel_coulomb_sph_cutoff1(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 180
{__wrapper__device_stub_kernel_coulomb_sph_cutoff1<nx,ny,nz>(density_k,vcoulomb_k);
# 226
return;}
#if 0
# 180
{ 
# 181
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 182
int ix, iy, iz, i; 
# 183
double kx, ky, kz, _k2; 
# 184
cufftDoubleComplex density; 
# 186
if (ixyz == (0)) 
# 187
{ 
# 188
density = (density_k[ixyz]); 
# 189
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 191
(vcoulomb_k[ixyz]) = density; 
# 192
} else { 
# 193
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 194
{ 
# 196
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 200
if (ix < ((nx) / 2)) { kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)ix)); } else { 
# 201
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - (nx)))); }  
# 203
if (iy < ((ny) / 2)) { ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)iy)); } else { 
# 204
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - (ny)))); }  
# 206
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * iz); 
# 209
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 210
density = (density_k[ixyz]); 
# 212
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 213
(vcoulomb_k[ixyz]) = density; 
# 225
}  }  
# 226
} 
#endif
# 228 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 229
__wrapper__device_stub_kernel_coulomb_sph_cutoff2(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 230
{ 
# 231
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 232
int ix, iy, iz, i; 
# 233
double kx, ky, kz, _k2; 
# 234
cufftDoubleComplex density; 
# 236
if (ixyz == (0)) 
# 237
{ 
# 238
density = (density_k[ixyz]); 
# 239
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 241
(vcoulomb_k[ixyz]) = density; 
# 242
} else { 
# 243
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 244
{ 
# 246
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 250
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))); 
# 251
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))); 
# 252
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))); 
# 254
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 256
density = (density_k[ixyz]); 
# 258
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 259
(vcoulomb_k[ixyz]) = density; 
# 260
}  }  
# 261
} 
#endif
# 228 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 229
kernel_coulomb_sph_cutoff2(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 230
{__wrapper__device_stub_kernel_coulomb_sph_cutoff2<nx,ny,nz>(density_k,vcoulomb_k);
# 261
return;}
#if 0
# 230
{ 
# 231
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 232
int ix, iy, iz, i; 
# 233
double kx, ky, kz, _k2; 
# 234
cufftDoubleComplex density; 
# 236
if (ixyz == (0)) 
# 237
{ 
# 238
density = (density_k[ixyz]); 
# 239
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 241
(vcoulomb_k[ixyz]) = density; 
# 242
} else { 
# 243
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 244
{ 
# 246
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 250
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))); 
# 251
ky = ((((2.0) * (3.141592653589793116)) / ((double)ny)) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))); 
# 252
kz = ((((2.0) * (3.141592653589793116)) / ((double)nz)) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))); 
# 254
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 256
density = (density_k[ixyz]); 
# 258
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 259
(vcoulomb_k[ixyz]) = density; 
# 260
}  }  
# 261
} 
#endif
# 269 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 270
__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst0(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 271
{ 
# 272
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 273
int ix, iy, iz, i; 
# 274
double k2; 
# 275
cufftDoubleComplex density; 
# 277
if (ixyz == (0)) 
# 278
{ 
# 279
density = (density_k[ixyz]); 
# 280
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 282
(vcoulomb_k[ixyz]) = density; 
# 283
} else { 
# 284
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 285
{ 
# 286
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 289
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 291
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 292
(vcoulomb_k[ixyz]) = density; 
# 293
}  }  
# 294
} 
#endif
# 269 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 270
kernel_coulomb_sph_cutoff_cnst0(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 271
{__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst0<nx,ny,nz>(density_k,vcoulomb_k);
# 294
return;}
#if 0
# 271
{ 
# 272
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 273
int ix, iy, iz, i; 
# 274
double k2; 
# 275
cufftDoubleComplex density; 
# 277
if (ixyz == (0)) 
# 278
{ 
# 279
density = (density_k[ixyz]); 
# 280
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 282
(vcoulomb_k[ixyz]) = density; 
# 283
} else { 
# 284
if (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 285
{ 
# 286
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 289
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 291
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 292
(vcoulomb_k[ixyz]) = density; 
# 293
}  }  
# 294
} 
#endif
# 297 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 298
__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst1(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 299
{ 
# 300
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 301
int ix, iy, iz, i; 
# 302
double k2; 
# 303
cufftDoubleComplex density; 
# 305
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 306
{ 
# 307
if (ixyz == (0)) 
# 308
{ 
# 309
density = (density_k[ixyz]); 
# 310
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 312
(vcoulomb_k[ixyz]) = density; 
# 313
} else 
# 315
{ 
# 316
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 319
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 321
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 322
(vcoulomb_k[ixyz]) = density; 
# 323
}  
# 324
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / 2); 
# 325
}  
# 326
} 
#endif
# 297 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 298
kernel_coulomb_sph_cutoff_cnst1(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 299
{__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst1<nx,ny,nz>(density_k,vcoulomb_k);
# 326
return;}
#if 0
# 299
{ 
# 300
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 301
int ix, iy, iz, i; 
# 302
double k2; 
# 303
cufftDoubleComplex density; 
# 305
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 306
{ 
# 307
if (ixyz == (0)) 
# 308
{ 
# 309
density = (density_k[ixyz]); 
# 310
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 312
(vcoulomb_k[ixyz]) = density; 
# 313
} else 
# 315
{ 
# 316
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 319
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 321
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 322
(vcoulomb_k[ixyz]) = density; 
# 323
}  
# 324
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / 2); 
# 325
}  
# 326
} 
#endif
# 328 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 329
__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst2(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 330
{ 
# 331
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 332
int ix, iy, iz, i; 
# 333
double k2; 
# 334
cufftDoubleComplex density; 
# 336
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 337
{ 
# 338
if (ixyz == (0)) 
# 339
{ 
# 340
density = (density_k[ixyz]); 
# 341
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 343
(vcoulomb_k[ixyz]) = density; 
# 344
} else 
# 346
{ 
# 347
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 350
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 352
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 353
(vcoulomb_k[ixyz]) = density; 
# 354
}  
# 355
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / 4); 
# 356
}  
# 357
} 
#endif
# 328 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 329
kernel_coulomb_sph_cutoff_cnst2(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 330
{__wrapper__device_stub_kernel_coulomb_sph_cutoff_cnst2<nx,ny,nz>(density_k,vcoulomb_k);
# 357
return;}
#if 0
# 330
{ 
# 331
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 332
int ix, iy, iz, i; 
# 333
double k2; 
# 334
cufftDoubleComplex density; 
# 336
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 337
{ 
# 338
if (ixyz == (0)) 
# 339
{ 
# 340
density = (density_k[ixyz]); 
# 341
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 343
(vcoulomb_k[ixyz]) = density; 
# 344
} else 
# 346
{ 
# 347
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 350
k2 = (((((d_kkx)[ix]) * ((d_kkx)[ix])) + (((d_kky)[iy]) * ((d_kky)[iy]))) + (((d_kkz)[iz]) * ((d_kkz)[iz]))); 
# 352
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * k2)))) / (((((double)nx) * (ny)) * (nz)) * k2), density_k[ixyz]); 
# 353
(vcoulomb_k[ixyz]) = density; 
# 354
}  
# 355
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / 4); 
# 356
}  
# 357
} 
#endif
# 361 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> static void 
# 362
__wrapper__device_stub_kernel_coulomb_sph_cutoff(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 363
{ 
# 365
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 366
int i, ix, iy, iz; 
# 367
double _k2; 
# 368
cuDoubleComplex density; 
# 371
if (ixyz == (0)) 
# 372
{ 
# 374
density = (density_k[0]); 
# 376
(density.x) *= (((((1.5) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 377
(density.y) *= (((((1.5) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 379
(vcoulomb_k[ixyz]) = density; 
# 380
} else { 
# 381
if (ixyz < (((nx) * (ny)) * (nz))) 
# 382
{ 
# 383
i = ixyz; ix = (i / ((ny) * (nz))); i = (i - ((ix * (ny)) * (nz))); iy = (i / (nz)); iz = (i - (iy * (nz))); ; 
# 384
density = (density_k[ixyz]); 
# 385
_k2 = ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))) / (((((double)nx) * (1.0)) * (nx)) * (1.0))); 
# 387
_k2 += ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))) / (((((double)ny) * (1.0)) * (ny)) * (1.0))); 
# 389
_k2 += ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))) / (((((double)nz) * (1.0)) * (nz)) * (1.0))); 
# 392
(density.x) = (((((d_charge)[0]) * (density.x)) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2)); 
# 393
(density.y) = (((((d_charge)[0]) * (density.y)) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2)); 
# 395
(vcoulomb_k[ixyz]) = density; 
# 396
}  }  
# 397
} 
#endif
# 361 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz> void 
# 362
kernel_coulomb_sph_cutoff(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 363
{__wrapper__device_stub_kernel_coulomb_sph_cutoff<nx,ny,nz>(density_k,vcoulomb_k);
# 397
return;}
#if 0
# 363
{ 
# 365
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 366
int i, ix, iy, iz; 
# 367
double _k2; 
# 368
cuDoubleComplex density; 
# 371
if (ixyz == (0)) 
# 372
{ 
# 374
density = (density_k[0]); 
# 376
(density.x) *= (((((1.5) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 377
(density.y) *= (((((1.5) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 379
(vcoulomb_k[ixyz]) = density; 
# 380
} else { 
# 381
if (ixyz < (((nx) * (ny)) * (nz))) 
# 382
{ 
# 383
i = ixyz; ix = (i / ((ny) * (nz))); i = (i - ((ix * (ny)) * (nz))); iy = (i / (nz)); iz = (i - (iy * (nz))); ; 
# 384
density = (density_k[ixyz]); 
# 385
_k2 = ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))) / (((((double)nx) * (1.0)) * (nx)) * (1.0))); 
# 387
_k2 += ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))) * ((double)(iy - ((ny) * ((2 * iy) / (ny)))))) / (((((double)ny) * (1.0)) * (ny)) * (1.0))); 
# 389
_k2 += ((((((4.0) * (3.141592653589793116)) * (3.141592653589793116)) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))) * ((double)(iz - ((nz) * ((2 * iz) / (nz)))))) / (((((double)nz) * (1.0)) * (nz)) * (1.0))); 
# 392
(density.x) = (((((d_charge)[0]) * (density.x)) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2)); 
# 393
(density.y) = (((((d_charge)[0]) * (density.y)) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2)); 
# 395
(vcoulomb_k[ixyz]) = density; 
# 396
}  }  
# 397
} 
#endif
# 402 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz, const int batch> static void 
# 403
__wrapper__device_stub_kernel_coulomb_sph_cutoff3(cuDoubleComplex *&density_k, cuDoubleComplex *&vcoulomb_k) {exit(1);}
#if 0
# 404
{ 
# 405
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 406
int ix, iy, iz, i; 
# 407
double kx, ky, kz, _k2; 
# 408
cufftDoubleComplex density; 
# 410
if (ixyz == (0)) 
# 411
{ 
# 412
density = (density_k[0]); 
# 413
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 415
(vcoulomb_k[ixyz]) = density; 
# 416
} else { 
# 418
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 419
{ 
# 421
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 424
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))); 
# 425
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((ny) * ((2 * iy) / (ny)))))); 
# 426
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nz) * ((2 * iz) / (nz)))))); 
# 428
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 430
density = (density_k[ixyz]); 
# 432
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 433
(vcoulomb_k[ixyz]) = density; 
# 435
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / (batch)); 
# 436
}  }  
# 437
} 
#endif
# 402 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/kernels.cuh"
template< const int nx, const int ny, const int nz, const int batch> void 
# 403
kernel_coulomb_sph_cutoff3(cuDoubleComplex *density_k, cuDoubleComplex *vcoulomb_k) 
# 404
{__wrapper__device_stub_kernel_coulomb_sph_cutoff3<nx,ny,nz,batch>(density_k,vcoulomb_k);
# 437
return;}
#if 0
# 404
{ 
# 405
size_t ixyz = (__device_builtin_variable_threadIdx.x) + ((__device_builtin_variable_blockIdx.x) * (__device_builtin_variable_blockDim.x)); 
# 406
int ix, iy, iz, i; 
# 407
double kx, ky, kz, _k2; 
# 408
cufftDoubleComplex density; 
# 410
if (ixyz == (0)) 
# 411
{ 
# 412
density = (density_k[0]); 
# 413
density = make_cuDoubleComplex((((((density.x) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz)), (((((density.y) * (1.5)) * ((d_charge)[0])) * ((d_lcutoff)[0])) * ((d_lcutoff)[0])) / ((((double)nx) * (ny)) * (nz))); 
# 415
(vcoulomb_k[ixyz]) = density; 
# 416
} else { 
# 418
while (ixyz < (((nx) * (ny)) * (((nz) / 2) + 1))) 
# 419
{ 
# 421
i = ixyz; ix = (i / ((ny) * (((nz) / 2) + 1))); i = (i - ((ix * (ny)) * (((nz) / 2) + 1))); iy = (i / (((nz) / 2) + 1)); iz = (i - (iy * (((nz) / 2) + 1))); ; 
# 424
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nx) * ((2 * ix) / (nx)))))); 
# 425
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((ny) * ((2 * iy) / (ny)))))); 
# 426
kx = ((((2.0) * (3.141592653589793116)) / ((double)nx)) * ((double)(ix - ((nz) * ((2 * iz) / (nz)))))); 
# 428
_k2 = (((kx * kx) + (ky * ky)) + (kz * kz)); 
# 430
density = (density_k[ixyz]); 
# 432
density = cmath_DZ_mul((((d_charge)[0]) * ((1.0) - cos(((d_lcutoff)[0]) * sqrt((3.0) * _k2)))) / (((((double)nx) * (ny)) * (nz)) * _k2), density); 
# 433
(vcoulomb_k[ixyz]) = density; 
# 435
ixyz += ((((nx) * (ny)) * (((nz) / 2) + 1)) / (batch)); 
# 436
}  }  
# 437
} 
#endif
# 7 "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu"
Coulomb::Coulomb(int devId, int nthreads) : _devId(devId) 
# 9
{ 
# 11
cudaSetDevice(_devId); 
# 12
cudaGetDeviceProperties(&(dev_prop), _devId); 
# 13
dim3 _threads(nthreads); 
# 14
dim3 _blocks((int)ceilf(((float)((64 * 48) * 32)) / nthreads)); 
# 15
(gpu_threads) = _threads; 
# 16
(gpu_blocks) = _blocks; 
# 19
(lcutoff) = (((double)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) / ((1.0) + sqrt((3.0)))); 
# 20
_cuErrCheck(cudaMemcpyToSymbol(d_lcutoff, &(lcutoff), sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 20); 
# 23
_cuErrCheck(cudaMalloc((void **)(&(d_density)), ((((size_t)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 23); 
# 24
_cuErrCheck(cudaMalloc((void **)(&(d_density_k)), ((((size_t)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) * sizeof(cuDoubleComplex)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 24); 
# 27
size_t wrk_sizes[4] = {(0)}; 
# 28
_cufftErrChk(cufftCreate(&(plan_forward)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 28); 
# 29
_cufftErrChk(cufftSetAutoAllocation(plan_forward, 0), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 29); 
# 30
_cufftErrChk(cufftMakePlan3d(plan_forward, 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))), CUFFT_D2Z, &((wrk_sizes)[0])), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 30); 
# 32
_cufftErrChk(cufftCreate(&(plan_forward_cb)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 32); 
# 33
_cufftErrChk(cufftSetAutoAllocation(plan_forward_cb, 0), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 33); 
# 34
_cufftErrChk(cufftMakePlan3d(plan_forward, 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))), CUFFT_D2Z, &((wrk_sizes)[1])), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 34); 
# 36
_cufftErrChk(cufftCreate(&(plan_inverse)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 36); 
# 37
_cufftErrChk(cufftSetAutoAllocation(plan_inverse, 0), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 37); 
# 38
_cufftErrChk(cufftMakePlan3d(plan_inverse, 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))), CUFFT_Z2D, &((wrk_sizes)[2])), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 38); 
# 40
_cufftErrChk(cufftCreate(&(plan_inverse_cb)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 40); 
# 41
_cufftErrChk(cufftSetAutoAllocation(plan_inverse_cb, 0), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 41); 
# 42
_cufftErrChk(cufftMakePlan3d(plan_inverse_cb, 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))), CUFFT_Z2D, &((wrk_sizes)[3])), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 42); 
# 45
_cuErrCheck(cudaMalloc((void **)(&(d_wrk_arr)), (size_t)(*std::max_element(wrk_sizes, &((wrk_sizes)[3])))), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 45); 
# 46
_cufftErrChk(cufftSetWorkArea(plan_forward, d_wrk_arr), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 46); 
# 47
_cufftErrChk(cufftSetWorkArea(plan_forward_cb, d_wrk_arr), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 47); 
# 48
_cufftErrChk(cufftSetWorkArea(plan_inverse, d_wrk_arr), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 48); 
# 49
_cufftErrChk(cufftSetWorkArea(plan_inverse_cb, d_wrk_arr), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 49); 
# 52
double kkx[64 + 128]; 
# 53
double kky[48 + 144]; 
# 54
double kkz[32 + 160]; 
# 55
uint16_t i; int j; 
# 56
for (i = (0); i <= (((64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) / 2) - 1); i++) { ((kkx)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))))) * ((double)i)); }  j = (-i); 
# 57
for (i = ((64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) / 2); i < (64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))); i++) { ((kkx)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))))) * ((double)j)); j++; }  
# 58
_cuErrCheck(cudaMemcpyToSymbol(d_kkx, kkx, (64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) * sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 58); 
# 60
for (i = (0); i <= (((48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))) / 2) - 1); i++) { ((kky)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))))) * ((double)i)); }  j = (-i); 
# 61
for (i = ((48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))) / 2); i < (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))); i++) { ((kky)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))))) * ((double)j)); j++; }  
# 62
_cuErrCheck(cudaMemcpyToSymbol(d_kky, kky, (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)))) * sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 62); 
# 64
for (i = (0); i <= (((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) / 2) - 1); i++) { ((kkz)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))))) * ((double)i)); }  j = (-i); 
# 65
for (i = ((32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) / 2); i < (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))); i++) { ((kkz)[i]) = ((((2.0) * (3.141592653589793116)) / ((double)(32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))))) * ((double)j)); j++; }  
# 66
_cuErrCheck(cudaMemcpyToSymbol(d_kkz, kkz, (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))) * sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 66); 
# 71
printf("Instance of class Coulomb.\n"); 
# 72
printf("Compiled for lattice:  %ux%ux%u\n", 64, 48, 32); 
# 73
printf("Computational lattice: %ux%ux%u\n", 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))); 
# 74
printf("Computational lattice: %ux%ux%u\n", 64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)), 48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))), 32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)))); 
# 75
printf("Cutoff length lc:      %.3lf\n", lcutoff); 
# 77
for (unsigned ii = (0); ii < (4); ii++) { 
# 78
printf("Plan %u: %lu\n", ii, (wrk_sizes)[ii]); }  
# 80
printf("Mem allocated:\n"); 
# 81
printf("    density (real space)    %lu\tB\n", (((64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * sizeof(double)); 
# 82
printf("    density (recip. space)  %lu\tB\n", (((64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * sizeof(cuDoubleComplex)); 
# 83
printf("    total                   %lu\tB\n", ((((64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * (sizeof(cuDoubleComplex) + sizeof(double))) + (*std::max_element(wrk_sizes, &((wrk_sizes)[3])))); 
# 86
printf("\n"); 
# 87
printf("threads: (%u,%u,%u)\n", (gpu_threads).x, (gpu_threads).y, (gpu_threads).z); 
# 88
printf("blocks:  (%u,%u,%u)\n", (gpu_blocks).x, (gpu_blocks).y, (gpu_blocks).z); 
# 89
printf("\n"); 
# 90
printf("\n"); 
# 92
} 
# 94
Coulomb::~Coulomb() 
# 95
{ 
# 96
if ((d_density) != (__null)) { _cuErrCheck(cudaFree(d_density), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 96); }  
# 97
if ((d_density) != (__null)) { _cuErrCheck(cudaFree(d_density_k), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 97); }  
# 98
if ((d_density) != (__null)) { _cuErrCheck(cudaFree(d_wrk_arr), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 98); }  
# 102
cufftDestroy(plan_forward); 
# 103
cufftDestroy(plan_forward_cb); 
# 104
cufftDestroy(plan_inverse); 
# 105
cufftDestroy(plan_inverse_cb); 
# 106
} 
# 108
void Coulomb::set_charge(const double charge) 
# 109
{ 
# 110
_cuErrCheck(cudaMemcpyToSymbol(d_charge, &charge, sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 110); 
# 111
} 
# 114
void Coulomb::get_density_enlarged(cuDoubleComplex *d_psi, double *h_result, double *h_t, const int _nthreads) 
# 115
{ 
# 116
dim3 _threads(_nthreads); 
# 117
dim3 _blocks((int)ceilf(((((float)64) * (48)) * (32)) / _nthreads)); 
# 118
if (_nthreads < 32) { _threads = (gpu_threads); _blocks = (gpu_blocks); }  
# 120
float rep; 
# 121
cudaEvent_t rep_start, rep_end; cudaEventCreate(&rep_start); cudaEventCreate(&rep_end); ; 
# 122
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); ; 
# 125
_cuErrCheck(cudaMemset((void *)(d_density), 0, ((((size_t)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * sizeof(double)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 125); 
# 128
(cudaConfigureCall(_blocks, _threads)) ? (void)0 : (__kernel_enlarge_1Dindexing__< 64U, 48U, 32U, 64U, 72U, 80U> )(d_psi, d_density); 
# 129
_cuErrCheck(cudaGetLastError(), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 129); 
# 130
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); cudaEventRecord(rep_end); cudaEventSynchronize(rep_end); cudaEventElapsedTime(&rep, rep_start, rep_end); ; 
# 132
if (h_result) { _cuErrCheck(cudaMemcpy(h_result, d_density, ((((size_t)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (32 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))))) * sizeof(double), cudaMemcpyDeviceToHost), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 132); }  
# 133
if (h_t) { (*h_t) = ((double)rep); }  
# 134
} 
# 137
void Coulomb::get_vcoulomb_enlarged(cuDoubleComplex *h_result, double *h_t, int _nthreads, unsigned kernel_type) 
# 138
{ 
# 139
if (_nthreads < 32) { _nthreads = 1024; }  
# 142
float rep; 
# 143
cudaEvent_t rep_start, rep_end; cudaEventCreate(&rep_start); cudaEventCreate(&rep_end); ; 
# 144
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); ; 
# 149
_cufftErrChk(cufftExecD2Z(plan_forward, (double *)(d_density), (cuDoubleComplex *)(d_density_k)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 149); 
# 152
switch (kernel_type) 
# 153
{ 
# 154
case 0:  
# 155
{ 
# 156
dim3 _threads0(_nthreads); 
# 157
dim3 _blocks0((int)ceilf(((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / _nthreads)); 
# 158
(cudaConfigureCall(_blocks0, _threads0)) ? (void)0 : (kernel_coulomb_sph_cutoff0< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 159
} 
# 160
case 1:  
# 161
{ 
# 162
dim3 _threads1(_nthreads); 
# 163
dim3 _blocks1((int)ceilf(((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / _nthreads)); 
# 164
(cudaConfigureCall(_blocks1, _threads1)) ? (void)0 : (kernel_coulomb_sph_cutoff1< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 165
} 
# 166
case 2:  
# 167
{ 
# 168
dim3 _threads2(_nthreads); 
# 169
dim3 _blocks2((int)ceilf(((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / _nthreads)); 
# 170
(cudaConfigureCall(_blocks2, _threads2)) ? (void)0 : (kernel_coulomb_sph_cutoff2< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 171
} 
# 172
case 3:  
# 173
{ 
# 174
dim3 _threads3(_nthreads); 
# 175
dim3 _blocks3((int)ceilf(((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / _nthreads)); 
# 176
(cudaConfigureCall(_blocks3, _threads3)) ? (void)0 : (kernel_coulomb_sph_cutoff_cnst0< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 177
} 
# 178
case 4:  
# 179
{ 
# 180
dim3 _threads3(_nthreads); 
# 181
dim3 _blocks3((int)ceilf((((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / (2)) / _nthreads)); 
# 182
(cudaConfigureCall(_blocks3, _threads3)) ? (void)0 : (kernel_coulomb_sph_cutoff_cnst1< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 183
} 
# 184
case 5:  
# 185
{ 
# 186
dim3 _threads3(_nthreads); 
# 187
dim3 _blocks3((int)ceilf((((((float)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) / (4)) / _nthreads)); 
# 188
(cudaConfigureCall(_blocks3, _threads3)) ? (void)0 : (kernel_coulomb_sph_cutoff_cnst2< 192, 192, 192> )(d_density_k, d_density_k); break; 
# 189
} 
# 190
}  
# 196
_cufftErrChk(cufftExecZ2D(plan_inverse, (cuDoubleComplex *)(d_density_k), (double *)(d_density)), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 196); 
# 197
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); cudaEventRecord(rep_end); cudaEventSynchronize(rep_end); cudaEventElapsedTime(&rep, rep_start, rep_end); ; 
# 199
if (h_result) { _cuErrCheck(cudaMemcpy(h_result, d_density_k, ((((size_t)(64 + (2 * ((((((97 * 64) / 112) + 32) - 1) / 32) * 32)))) * (48 + (2 * (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2))))) * (((32 / 2) + (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2))) + 1)) * sizeof(cuDoubleComplex), cudaMemcpyDeviceToHost), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 199); }  
# 200
if (h_t) { (*h_t) = ((double)rep); }  
# 201
} 
# 204
void Coulomb::get_vcoulomb_lessened(double *d_vcoulomb, double *h_result, double *h_t, const int _nthreads) 
# 205
{ 
# 206
dim3 _threads(_nthreads); 
# 207
dim3 _blocks((int)ceilf(((((float)64) * (48)) * (32)) / _nthreads)); 
# 208
if (_nthreads < 32) { _threads = (gpu_threads); _blocks = (gpu_blocks); }  
# 210
float rep; 
# 211
cudaEvent_t rep_start, rep_end; cudaEventCreate(&rep_start); cudaEventCreate(&rep_end); ; 
# 212
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); ; 
# 214
(cudaConfigureCall(_blocks, _threads)) ? (void)0 : (__kernel_lessen_1Dindexing__< 64U, 48U, 32U, 64U, 72U, 80U> )(d_density, d_vcoulomb); 
# 215
_cuErrCheck(cudaGetLastError(), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 215); 
# 216
cudaEventRecord(rep_start); cudaEventSynchronize(rep_start); cudaEventRecord(rep_end); cudaEventSynchronize(rep_end); cudaEventElapsedTime(&rep, rep_start, rep_end); ; 
# 218
if (h_result) { _cuErrCheck(cudaMemcpy(h_result, d_vcoulomb, ((((size_t)64) * (48)) * (32)) * sizeof(double), cudaMemcpyDeviceToHost), "/home/konrad/Pulpit/CUDA/VC_spherical_cutoff/Coulomb/Coulomb.cu", 218); }  
# 219
if (h_t) { (*h_t) = ((double)rep); }  
# 220
} 
# 222
void Coulomb::save_info(const double sigma) 
# 223
{ 
# 225
FILE *file_info = fopen("coulomb.info", "w"); 
# 226
fprintf(file_info, "nx\t%u\n", 64); 
# 227
fprintf(file_info, "ny\t%u\n", 48); 
# 228
fprintf(file_info, "nz\t%u\n", 32); 
# 229
fprintf(file_info, "cx\t%u\n", (((((97 * 64) / 112) + 32) - 1) / 32) * 32); 
# 230
fprintf(file_info, "cy\t%u\n", ((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)); 
# 231
fprintf(file_info, "cz\t%u\n", ((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)); 
# 232
fprintf(file_info, "aho\t%lf\n", sigma); 
# 233
fclose(file_info); 
# 234
} 
# 236
void Coulomb::get_lattice(unsigned *nx, unsigned *ny, unsigned *nz, unsigned *cx, unsigned *cy, unsigned *cz, double *_lcutoff) 
# 237
{ 
# 238
if (nx) { (*nx) = (64); }  
# 239
if (ny) { (*ny) = (48); }  
# 240
if (nz) { (*nz) = (32); }  
# 241
if (cx) { (*cx) = ((((((97 * 64) / 112) + 32) - 1) / 32) * 32); }  
# 242
if (cy) { (*cy) = (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 48) / 2)); }  
# 243
if (cz) { (*cz) = (((((((97 * 64) / 112) + 32) - 1) / 32) * 32) + ((64 - 32) / 2)); }  
# 244
if (_lcutoff) { (*_lcutoff) = (lcutoff); }  
# 245
} 
# 247
void Coulomb::get_lattice(unsigned *lattice, double *_lcutoff) 
# 248
{ 
# 249
this->get_lattice(lattice + 0, lattice + 1, lattice + 2, lattice + 3, lattice + 4, lattice + 5, _lcutoff); 
# 250
} 

# 1 "Coulomb.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__15_Coulomb_cpp1_ii_9a02c5bc
# 1 "Coulomb.cudafe1.stub.c"
#include "Coulomb.cudafe1.stub.c"
# 1 "Coulomb.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
