#include "common.h"

extern "C" {
struct V0 {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
    virtual void unk_14(s32);
};
struct V1 {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(s32);
};
struct R {
    u8 pad_00[0x1212D0];
    u8 unk_1212D0[4];
};
struct Q : V0 {
    u8 pad_2C[0x20];
    R *unk_4C;
    s32 unk_50;
    u8 pad_54[0xC];
    V1 unk_60;
    u8 pad_E4[0x10];
    f32 unk_F4, unk_F8, unk_FC, unk_100;
};

f32 func_0881A1E0(f32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_088CE494(s32, void *);
char *func_0898A324(void *);
s32 func_0898583C(s32);
extern f32 D_089DD50C[];
extern f32 D_08A06504[];
extern f32 D_08A06508[];
extern f32 D_08A0650C[];
extern f32 D_08A06510[];

void func_0898DD50(Q *arg0, s32 arg1) {
    f32 a, b, c, d;
    f32 temp;
    if (arg0->unk_50 == 4) {
        goto block_4;
    }
    switch (arg0->unk_50) {
    case 0:
        temp = arg0->unk_F8 - (0.033333335f * D_089DD50C[0]);
        arg0->unk_F8 = temp;
        arg0->unk_F4 += temp;
        if (arg0->unk_10() == -2 && arg0->unk_F4 < 120.0f) {
            arg0->unk_14(2);
        }
        if (arg0->unk_F4 <= 20.0f) {
            func_08878864(func_089B53D8(func_088586E8()), 0x1B0106, 2, 1.0f, 0.0f, 0.0f);
            arg0->unk_F4 = 20.0f;
            arg0->unk_50 = 1;
        }
        break;
    case 1:
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 2;
            arg0->unk_FC = 0.0f;
        }
        arg0->unk_F4 = 20.0f + 60.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        a = 0.05f + arg0->unk_FC;
        arg0->unk_FC = *(D_08A06504[0] < a ? D_08A06504 : &a);
        break;
    case 2:
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 3;
            arg0->unk_FC = 0.0f;
        }
        arg0->unk_F4 = 20.0f + 30.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        b = 0.08f + arg0->unk_FC;
        arg0->unk_FC = *(D_08A06508[0] < b ? D_08A06508 : &b);
        break;
    case 3:
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 4;
        }
        arg0->unk_F4 = 20.0f + 15.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        c = 0.1f + arg0->unk_FC;
        arg0->unk_FC = *(D_08A0650C[0] < c ? D_08A0650C : &c);
        break;
    }
    goto end;
block_4:
    d = arg0->unk_100 - 0.05f;
    temp = *(d < D_08A06510[0] ? D_08A06510 : &d);
    arg0->unk_100 = temp;
    if (temp <= 0.0f) {
        func_088CE494(func_0898583C((s32)func_0898A324(arg0->unk_4C->unk_1212D0)), arg0);
        arg0->unk_50 = 5;
    }
end:
    arg0->unk_60.unk_0C(arg1);
}
}
