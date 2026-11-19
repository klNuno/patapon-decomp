#include "common.h"

extern "C" {

struct S0;
typedef void (S0::*P0)();

struct S1 {
    u8 pad_00[0x28];
    S0 *unk_28;
    P0 unk_2C;
    u8 unk_38;
    f32 unk_3C;
    f32 unk_40;
    f32 unk_44;
    u8 pad_48[0x244];
    u8 unk_28C;
};

s32 func_0893A064(S1 *arg0, u32 arg1, u8 arg2) {
    f32 temp;
    f32 abs;
    f32 n;

    if (arg2 == 1) {
        arg0->unk_3C = 0.0f;
        arg0->unk_40 = 0.7f;
        arg0->unk_38 = 1;
    }
    if (arg0->unk_28C == 1) {
        return 0;
    }
    if (arg0->unk_38 == 1) {
        f32 x = arg0->unk_3C;
        temp = x + (f32)arg1 / 4800.0f;
        arg0->unk_3C = *(temp < arg0->unk_40 ? &temp : &arg0->unk_40);
        if (arg0->unk_3C >= arg0->unk_40 && arg0->unk_2C) {
            (arg0->unk_28->*arg0->unk_2C)();
        }
    }
    n = arg0->unk_40;
    abs = n;
    u32 u = *(u32 *)&abs;
    u32 *pabs = (u32 *)&abs;
    *(u32 *)&abs = (u << 1) >> 1;
    arg0->unk_44 = *(f32 *&)pabs <= 0.0001f ? 1.0f : arg0->unk_3C / n;
    if ((arg0->unk_38 && arg0->unk_3C >= arg0->unk_40) == 1) {
        arg0->unk_38 = 0;
        return 1;
    }
    return 0;
}

}
