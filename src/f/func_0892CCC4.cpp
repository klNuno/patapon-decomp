#include "common.h"

extern "C" {

typedef struct Obj_089794B0 Obj_089794B0;

class Sub_0892CCC4 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct A_0892CCC4 {
    u8 pad_00[0x740];
    Sub_0892CCC4 unk_740;
    u8 pad_7C4[0xC];
    Sub_0892CCC4 unk_7D0;
    u8 pad_854[0x1C];
    s32 unk_870;
    s32 unk_874;
    s32 unk_878;
    s32 unk_87C;
    s32 unk_880;
    s32 unk_884;
    u8 pad_888[0x8];
    s32 unk_890;
    s32 unk_894;
    u8 pad_898[0x1];
    u8 unk_899;
} A_0892CCC4;

extern void func_08865FEC(s32, s32, s32);
s32 func_08868CAC(Obj_089794B0 *, s32, s32, s32);
s32 sceUtilityGetSystemParamInt(s32, s32 *);
extern s32 D_089E6F78[];
extern s32 D_089E6F7C[];
extern s32 D_089E6F80[];
extern s32 D_089F88F0[];
extern s32 D_08A7BA28[];
extern Obj_089794B0 *D_08AD1E28[];

void func_0892CCC4(A_0892CCC4 *arg0) {
    Obj_089794B0 *temp;
    s32 s;

    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FEC((s32)&arg0->unk_740, func_08868CAC(temp, 1, D_089E6F78[0], 1), 0);
    arg0->unk_740.unk_14(0, 0);
    if (D_089F88F0[0] != 0) {
        D_089F88F0[0] = sceUtilityGetSystemParamInt(9, D_08A7BA28);
    }
    s = D_089E6F7C[0];
    if (D_08A7BA28[0] != 0) {
        s = D_089E6F80[0];
    }
    func_08865FEC((s32)&arg0->unk_7D0, func_08868CAC(temp, 1, s, 1), 0);
    arg0->unk_7D0.unk_14(0, 1);
    arg0->unk_870 = 0;
    arg0->unk_874 = 0;
    arg0->unk_878 = 0;
    arg0->unk_87C = 0;
    arg0->unk_880 = 0;
    arg0->unk_884 = 0;
    arg0->unk_890 = 0;
    arg0->unk_894 = 0;
    arg0->unk_899 = 0;
}

}
