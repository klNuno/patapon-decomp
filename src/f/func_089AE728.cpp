#include "common.h"

extern "C" {

class U {
    u8 pad_00[0x10];

public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32, s32, s32, s32);
};

struct V {
    f32 unk_00;
    f32 unk_04;
};

struct W {
    s32 unk_00;
    s32 unk_04;
    V *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
    f32 unk_1C;
};

struct X {
    u8 pad_00[0x5C];
    U unk_5C;
    u8 unk_70[0xA0];
    W unk_110;
    u8 pad_130[0x6B0];
    W unk_7E0;
};

extern char *D_08A083F4[];

s32 func_0888B03C(s32 *, char *);
s32 func_0888B078(s32 *, char *);
void func_08865FE4(s32 arg0, s32 arg1);
void func_088AF260(void *, s32);
s32 func_089B2A90(s32);
extern s32 func_089B3448(s32, s32);

void func_089AE728(X *arg0, s32 arg1, s32 *arg2) {
    s32 *temp = arg2;
    X *temp2 = arg0;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    V *temp6;

    func_089B3448((s32)arg0, arg1);
    temp3 = func_0888B03C(temp, D_08A083F4[0]);
    temp4 = func_0888B078(temp, D_08A083F4[0]);
    temp5 = func_089B2A90(arg1);
    ((U *)&temp2->unk_5C)->unk_10(temp3, temp4, temp5, 0);
    func_08865FE4((s32)temp2->unk_70, (s32)&temp2->unk_5C);
    func_088AF260(&temp2->unk_110, 1);
    temp2->unk_110.unk_04 = 1;
    temp6 = temp2->unk_110.unk_08;
    temp2->unk_110.unk_18 = 14.0f - temp6->unk_00;
    temp2->unk_110.unk_1C = 14.0f - temp6->unk_04;
    func_088AF260(&temp2->unk_7E0, 1);
    temp2->unk_7E0.unk_04 = 0;
    temp6 = temp2->unk_7E0.unk_08;
    temp2->unk_7E0.unk_18 = 14.0f - temp6->unk_00;
    temp2->unk_7E0.unk_1C = 14.0f - temp6->unk_04;
}

}
