#include "common.h"

extern "C" {

struct S0;
typedef void (S0::*P0)();

struct S2 {
    u8 pad_00[0x58];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(u32, s32);
};

struct S1 {
    u8 pad_00[0xD98];
    S0 *unk_D98;
    P0 unk_D9C;
    u8 unk_DA8;
    f32 unk_DAC;
    f32 unk_DB0;
    S0 *unk_DB4;
    P0 unk_DB8;
    u8 unk_DC4;
    f32 unk_DC8;
    f32 unk_DCC;
    u8 pad_DD0[4];
    S2 unk_DD4;
};

s32 func_089AE140(char *arg0);
u8 func_089AE274(s32);

void func_089ADF6C(S1 *arg0, u32 arg1, s32 arg2) {
    f32 a;
    f32 b;

    if (arg0->unk_DA8 == 1) {
        f32 x = arg0->unk_DAC;
        a = x + (f32)arg1 / 4800.0f;
        arg0->unk_DAC = *(a < arg0->unk_DB0 ? &a : &arg0->unk_DB0);
        if (arg0->unk_DAC >= arg0->unk_DB0 && arg0->unk_D9C) {
            (arg0->unk_D98->*arg0->unk_D9C)();
        }
    }
    if (arg0->unk_DC4 == 1) {
        f32 x = arg0->unk_DC8;
        b = x + (f32)arg1 / 4800.0f;
        arg0->unk_DC8 = *(b < arg0->unk_DCC ? &b : &arg0->unk_DCC);
        if (arg0->unk_DC8 >= arg0->unk_DCC && arg0->unk_DB8) {
            (arg0->unk_DB4->*arg0->unk_DB8)();
        }
    }
    if ((u8)func_089AE140((char *)arg0) == 1 && !(func_089AE274((s32)arg0) & 0xFF)) {
        arg0->unk_DD4.unk_14(arg1, arg2);
    }
}

}
