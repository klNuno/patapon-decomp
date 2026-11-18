#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct {
    u8 pad_00[0x13C];
    V3 unk_13C;
    u8 pad_148[0x10];
    u8 unk_158;
    u8 pad_159[3];
    s32 unk_15C;
    f32 unk_160;
} S0;

s32 func_0881F08C(void *, void *, u32);
extern void func_0881F120(void *, void *, s32);
extern f32 D_08A06A50[];
extern f32 D_08A06A58[];
extern f32 D_08A06A5C[];

void func_08996820(S0 *arg0, V3 *arg1) {
    V3 v;

    v.unk_00 = D_08A06A50[1];
    v.unk_04 = D_08A06A58[0];
    v.unk_08 = D_08A06A5C[0];
    if (func_0881F08C(&v, arg1, 0xC) != 0) {
        func_0881F120(&arg0->unk_13C, arg1, 0xC);
        arg0->unk_15C = 0;
        arg0->unk_160 = 1.0f;
        arg0->unk_158 = 1;
    }
}
