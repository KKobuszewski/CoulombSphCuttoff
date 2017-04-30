#include "fatBinaryCtl.h"
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000af8,0x0000004801010001,0x0000000000000ab0\n"
".quad 0x0000004000000aad,0x0000003400050000,0x0000000000000000,0x0000000000002015\n"
".quad 0x0000000000000000,0x000000000000487a,0x0000000000000000,0x762e1cf000010a13\n"
".quad 0x35206e6f69737265,0x677261742e0a302e,0x32355f6d73207465,0x7365726464612e0a\n"
".quad 0x3620657a69735f73,0x6f6c673af4002e34,0x696c612e206c6162,0x38622e2031206e67\n"
".quad 0x726874364e5a5f20,0x7473797336747375,0x6961746564366d65,0x657571657330316c\n"
".quad 0x6573336c6169746e,0x2e0a3b5d315b4571,0x0043646572616873,0x633453030043381f\n"
".quad 0x6235630048616475,0x37fe000d5f6b6c75,0x41424f4c475f3134,0x37315f5f4e5f5f4c\n"
".quad 0x6f6e5f747365745f,0x5f317070635f6d72,0x63363633645f6969,0x6f5f733931623231\n"
".quad 0x615f706968635f6e,0x726f7461636f6c6c,0x00c93b5d34325b45,0x6f7234531400860f\n"
".quad 0x0b00430f00c9746f,0x63616c70323102ff,0x737265646c6f6865,0x321f220036315f32\n"
".quad 0x220036331f220036,0x36351f220036341f,0x1f220036361f2200,0x0036381f22003637\n"
".quad 0x334f200036391f22,0x0f0712003730315f,0x203411ff00290a03,0x746572203233752e\n"
".quad 0x43746e656d657269,0x652e0a3b746e756f,0x033e206e72657478,0x5b61746164738002\n"
".quad 0x736939ff03ce3b5d,0x6e652e20656c6269,0x36315a5f20797274,0x445f6c656e72656b\n"
".quad 0x656375646572645a,0x45343230316a4c49,0x6f64375064507645,0x5f305332656c6275\n"
".quad 0x617261702e0a2869,0x003b3436752e206d,0x305f3f00395f111b,0x0043311f2e00432c\n"
".quad 0x32332f004332172f,0x0a290a33d0220043,0x2e206765722e0a7b,0x393c702563017070\n"
".quad 0x3233628500123b3e,0xa60011383c722520,0x3c64662520343666,0xc200130000243635\n"
".quad 0x0a3b3e31323c6472,0x2e220093646c0a0a,0x5b202c374f001875,0x004c3b5d2d220162\n"
".quad 0x4c311f24004c381f,0x1924004c361f0000,0x351f012001004c32,0x0a3b5d337324004b\n"
".quad 0x3101f30046766f6d,0x646961746325202c,0x7d6c68730a3b782e,0x3118001c2c362201\n"
".quad 0x6e25202c3762002c,0x3244001606002b74,0x646171001525202c,0x240018732e6f6c2e\n"
".quad 0x7300380000482c33,0x1c6464610a3b3272,0x37a000212c342400,0x6c2e707465730a3b\n"
".quad 0x3170250954004f74,0x6d0a3b35b300202c,0x6b656469772e6c75,0x1300712c39643200\n"
".quad 0x3132015502008138,0x0300630303a42c30,0x3900001c2c140016,0x617476630a3b9300\n"
".quad 0x003c0404116f742e,0x006b371e001f3211,0x56381900a4313123,0x312f00362c332600\n"
".quad 0x2f00c00105005631,0x5632130000563864,0x3526005736312900,0x3b32310cf100372c\n"
".quad 0x726220317025400a,0x3b345f3042422061,0x696e752e6172620a,0x170a0a3b3141000f\n"
".quad 0x00790302133a1000,0x5b202c3940032303,0x21001c3b5d2700a6,0x66257b32001f3276\n"
".quad 0x7d3131646652010f,0x0300a45d35220029,0x03001f343123003f,0x616d660a3b850007\n"
".quad 0x00a80000206e722e,0x341f000703004606,0x0a01c734130000e8,0x0f013f353128013e\n"
".quad 0x0b00383613010038,0x1f01213731280120,0x009136120500de36,0xdf37312a00de3713\n"
".quad 0x07371300b1321300,0x00f8321300df0c00,0x3b30323e00073618,0x0b00623232230168\n"
".quad 0x001f2c3332340141,0x342300620d005001,0x3263014e0601a72c,0x01067a74730a3b33\n"
".quad 0x1d5d12005a010029,0x01fd351301fd0b00,0x53321503383a312b,0x3f3215023f351103\n"
".quad 0x4232130042331a02,0x311f00023f331f00,0x331f00d7020c023f,0x0102012f0203023d\n"
".quad 0x01730200f9331c01,0x003d361900063217,0x002c0000802c3823,0x010f381f0801100f\n"
".quad 0x334804113a322903,0x457518004530202c,0xd300370300200000,0x732e7261620a3a35\n"
".quad 0x14048a3020636e79,0x31046d3313015267,0x5233150152313135,0xa20706723b372101\n"
".quad 0x642c352300d60000,0x361300001d3b1f00,0x363930342b62001d,0x3724001c0402dc5d\n"
".quad 0x0e0f00470100232c,0x371f00b937130902,0x2200b934130900b9,0x00b93415020b3532\n"
".quad 0xb9381f0200b9391f,0x324a00b939140900,0x30333400b9383430,0xb90f00470100232c\n"
".quad 0x1f00b93033230800,0x00b935130900b939,0x351500b937323131,0x0100ba31312f00b9\n"
".quad 0x33140800ba31332f,0xba0b070f2b1003a3,0x470100232c332400,0x022c040900ba0f00\n"
".quad 0x36130900bb31312f,0x1600ba33362100bb,0x0200ba331f00ba36,0x024a040900ba341f\n"
".quad 0x2400b93231352b4b,0x0f00460100222c36,0x1f00b936140900b9,0x00b937130900b933\n"
".quad 0x00b9371602e53312,0x6c6f768c00b93512,0x1900a5656c697461,0x150500260f00c237\n"
".quad 0x3402f7351b023f38,0x004f0100222c3933,0xd40a00470e00cb01,0x342f09006d391f00\n"
".quad 0x1831342511009330,0x32343402d1321b02,0x930f004f0100222c,0x0a006d32342f1100\n"
".quad 0x020e04120093331f,0x35343402a9362b2b,0x920f004e0100212c,0x1f0a006c351f1200\n"
".quad 0x2b01de0412009236,0x2c3834340282332b,0x00920f004e010021,0x391f0a006c381f12\n"
".quad 0x01b7303525110092,0x212c31353402490b,0x1100920f004e0100,0x321f0a006c31352f\n"
".quad 0x2b1b01dc04120092,0x00202c3435340247,0x141200910f004d01,0x4107da351303ae34\n"
".quad 0x381303a2732e656e,0x381603a1301103a2,0x0a800f060d0003a1,0x36642f0034311103\n"
".quad 0x01045d351000045d,0x1300097f5d1f0b2e,0x380109b70a0bf839,0x0162311200560509\n"
".quad 0x0300245b11083a07,0x3a37af08a20500c9,0x0a7d0a3b7465720a,0x383231353f160f39\n"
".quad 0x0f370e003a0e240f,0x0042311f2700420f,0x1d00420f0f350e2e,0x0f34381f010f340f\n"
".quad 0x5e0e300f34331f10,0x01670e260f330f01,0x0f01700e260f320f,0x300f01780e250f31\n"
".quad 0x130f30311aa8ff0f,0xff0f30311f0f3031,0x30311f0e213113e2,0x31130f30311a170f\n"
".quad 0x06b10f30311f0f30,0x311f220f300f010f,0x33150e7704130f30,0x770e290f300f0152\n"
".quad 0x30311f1f0f300f0e,0xb934150e7704130f,0x0e760e290f300f00,0x0f30311f1f0f300f\n"
".quad 0x311f0f2f33362913,0x2e0f0e750e2b0f2f,0x29140f2e311f1e0f,0x0f2e31150f2e3133\n"
".quad 0x0e75341f050e750f,0x0f400f0e75351e12,0x3b362f120e750f04,0x080f0e750d380f08\n"
".quad 0x7d0f0734362f6f0f,0x312f7d0f0732332f,0x0f06381f7d0f0736,0x0e75331c03ae0233\n"
".quad 0x03a137160e753719,0x75321f220e75351f,0x35312f07a5044c0e,0x753635323f1f0e75\n"
".quad 0x0e750e003a0e240e,0x0042311f2700420f,0x1d00420f0e750e2e,0x0e75371f010e750f\n"
".quad 0x5e0e300e75301f10,0x01670e260e750f01,0x0f01700e260e750f,0x750f01780e250e75\n"
".quad 0x130e75321aa8ff0e,0xff0e75321f0e7532,0x75321f0d663213e2,0x32130e75321a170e\n"
".quad 0x06b10e75321f0e75,0x321f220e750f010f,0x33150dbc04130e75,0xbc0e290e750f0152\n"
".quad 0x75321f1f0e750f0d,0x1f0e74333629130e,0x0f0dbb0e2a0e7432,0x130e73321f1e0e73\n"
".quad 0x7332150e73313329,0x27311f050dba0f0e,0x850f0dba321e120d,0x332f120d270f040e\n"
".quad 0x0f0dba0e380e4d3b,0x0e4c34362f6e0e4d,0x2f7d0e4c32332f7d,0x4b381f7d0e4c3631\n"
".quad 0xba311c066302330e,0xa136160dba36190d,0x342f210dba331f03,0xc93934244b0dba39\n"
".quad 0x313f1f0dba331f00,0x38322f252b673832,0x1f0800420f2d2b66,0x0f2b640e2e004231\n"
".quad 0x1f010dba0f1d0042,0x6337342f0f0dba36,0x362b6238322f312b,0x322f362b6138322f\n"
".quad 0xba38322f352b6038,0x130dba331ab7ff0d,0xff0dba331f0dba33,0xba331f0cab3313e2\n"
".quad 0x33130dba331a170d,0x06b10dba331f0dba,0x331f220dba0f010f,0x0db9333629130dba\n"
".quad 0x0d010d2a0db9331f,0x0db8331f1f0db80f,0x333f0db831332913,0x38322f0a0d00395f\n"
".quad 0x0d0039322e110a24,0x120bdb0f040dca0f,0x000e380d933b302f,0x34362f6e0d930f0d\n"
".quad 0x2ae632332f7d0d92,0x381f7d0d92361f7e,0x391c03ac01330d91,0x35150cff35190cff\n"
".quad 0x220cff31312f039f,0x7136144c0cff361f,0x361f1f0cff311f06,0x2d3863361f253865\n"
".quad 0x5f361f2d3861361f,0x1f1b385d361f2d38,0x0cfa341f100cfa35,0x361f36385b361f30\n"
".quad 0x353857361f363859,0x341ab8ff3855361f,0x341f0cf634130cf6,0x0be73413e2ff0cf6\n"
".quad 0xf6341a170cf6341f,0xf6341f0cf634130c,0x0cf60f010f06b10c,0x331a130cf6341f22\n"
".quad 0x0c3f375f343f3854,0x361e120c3f351f0b,0x650f0438650f0c3f,0x0cd20f0d11001109\n"
".quad 0x6e0cd20f0c3f0e37,0x332f7d0cd134362f,0x7e37b70f7e28b032,0x1c03ac013437b50f\n"
".quad 0x150c3f34190c3f37,0x220c3e391f039f34,0x0473044c0c3e331f,0x3b7465720a3a39c0\n"
".quad 0x0000000a0a0a7d0a\n"
".text\n");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[353];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 1, fatbinData, 0 };
#ifdef __cplusplus
}
#endif
