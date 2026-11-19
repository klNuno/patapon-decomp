#include "common.h"

extern "C" {

class T;

typedef void (T::*P)();

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    T *unk_0C;
    P unk_10;
    u8 unk_1C;
    u8 pad_1D[3];
    f32 unk_20;
    f32 unk_24;
} S;

static inline const f32 &func_0893A368_1(const f32 &a, const f32 &b) {
    return a < b ? a : b;
}

static inline f32 func_0893A368_2(f32 x) {
    u32 t = *(u32 *)&x;
    u32 *p = (u32 *)&x;
    *(u32 *)&x = t & 0x7FFFFFFF;
    return *(f32 *&)p;
}

s32 func_0893A368(S *arg0, u32 arg1, s32 arg2) {
    f32 t;
    bool r;
    if ((u8)arg2 == 1) {
        arg0->unk_20 = 0.0f;
        arg0->unk_24 = 0.7f;
        arg0->unk_1C = 1;
    }
    if (arg0->unk_1C == 1) {
        arg0->unk_20 = func_0893A368_1(arg0->unk_20 + (f32)arg1 / 4800.0f, arg0->unk_24);
        if (arg0->unk_20 >= arg0->unk_24 && arg0->unk_10 != NULL) {
            (arg0->unk_0C->*arg0->unk_10)();
        }
    }
    t = arg0->unk_24;
    arg0->unk_08 = func_0893A368_2(t) <= 0.0001f ? 1.0f : arg0->unk_20 / t;
    r = arg0->unk_1C != 0 && arg0->unk_20 >= arg0->unk_24;
    if (r == true) {
        arg0->unk_1C = 0;
        return 1;
    }
    return 0;
}

}
