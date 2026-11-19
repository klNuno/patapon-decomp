#include "common.h"

extern "C" {

struct O;
typedef void (O::*P)();

struct S {
    u8 pad_00[0x28];
    O *unk_28;
    P unk_2C;
    volatile u8 unk_38;
    u8 pad_39[3];
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[8];
    u8 unk_50;
};

inline const f32 &func_min(const f32 &arg0, const f32 &arg1) {
    return (arg0 < arg1) ? arg0 : arg1;
}

s32 func_0893A4D8(S *arg0, u32 arg1, u8 arg2) {
    f32 a;
    f32 b;
    f32 c;
    f32 d;
    bool e;

    if (arg2 == 1) {
        arg0->unk_3C = 0.0f;
        arg0->unk_40 = 0.7f;
        arg0->unk_38 = 1;
    }
    if (arg0->unk_38 == 1) {
        a = arg0->unk_3C + (f32)arg1 / 4800.0f;
        arg0->unk_3C = func_min(a, arg0->unk_40);
        if (arg0->unk_3C >= arg0->unk_40 && arg0->unk_2C) {
            (arg0->unk_28->*arg0->unk_2C)();
        }
    }
    c = arg0->unk_40;
    b = c;
    u32 n = *(u32 *)&b;
    u32 *p = (u32 *)&b;
    *(u32 *)&b = (n << 1) >> 1;
    if (*(f32 *&)p <= 0.0001f) {
        d = 1.0f;
    } else {
        d = arg0->unk_3C / c;
    }
    arg0->unk_44 = 1.0f - d;
    e = arg0->unk_38 && arg0->unk_3C >= arg0->unk_40;
    if ((u8)e == 1) {
        arg0->unk_50 = 1;
        arg0->unk_38 = 0;
        return 1;
    }
    return 0;
}

}
