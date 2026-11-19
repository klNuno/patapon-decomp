#include "common.h"

extern "C" {

struct E {};

struct T {
    u8 pad_00[8];
    f32 unk_08;
    E *unk_0C;
    void (E::*unk_10)();
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20, unk_24;
    u8 pad_28[0x20];
    u8 unk_48;
    u8 pad_49[7];
    u8 unk_50;
};

s32 func_0893A1E4(T *arg0, u32 arg1, u8 arg2) {
    if (arg2 == 1) {
        arg0->unk_20 = 0.0f;
        arg0->unk_24 = 0.7f;
        arg0->unk_1C = 1;
    }
    if (arg0->unk_1C == 1) {
        f32 temp = arg0->unk_20 + (f32)arg1 / 4800.0f;
        f32 *p = temp < arg0->unk_24 ? &temp : &arg0->unk_24;
        arg0->unk_20 = *p;
        if (arg0->unk_20 >= arg0->unk_24 && arg0->unk_10 != NULL) {
            (arg0->unk_0C->*arg0->unk_10)();
        }
    }
    f32 t = arg0->unk_24;
    f32 v = t;
    u32 b = *(u32 *)&v;
    u32 *p = (u32 *)&v;
    p = (u32 *)(u32)p;
    *(u32 *)&v = (b << 1) >> 1;
    arg0->unk_08 = 1.0f - (*(f32 *)p <= 0.0001f ? 1.0f : arg0->unk_20 / t);
    if ((arg0->unk_1C != 0 && arg0->unk_20 >= arg0->unk_24) == 1) {
        arg0->unk_1C = 0;
        arg0->unk_50 = 1;
        arg0->unk_48 = 0;
        return 1;
    }
    return 0;
}

}
