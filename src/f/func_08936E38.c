#include "common.h"

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

typedef struct {
    u8 pad_00[0xDA0];
    f32 unk_DA0;
    f32 unk_DA4;
    f32 unk_DA8;
    f32 unk_DAC;
} U;

typedef struct {
    u8 pad_00[0x14];
    U *unk_14;
} T;

void func_08936E38(T *arg0, void *arg1) {
    f32 *a = (f32 *)func_0885356C(arg1, 0, 1, 4);
    f32 b = *(f32 *)func_0885356C(arg1, 1, 1, 4);
    U *u = arg0->unk_14;
    u->unk_DA0 = *a;
    u->unk_DA4 = b;
    u->unk_DA8 = 0.0f;
    u->unk_DAC = 1.0f;
    func_08852F00(arg1, 0);
}
