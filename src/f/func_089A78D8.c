#include "common.h"

typedef struct {
    u8 pad_00[0xB0];
    f32 unk_B0;
    f32 unk_B4;
    f32 unk_B8;
    f32 unk_BC;
} S2;

typedef struct {
    u8 pad_00[0x110];
    S2 *unk_110;
} S1;

typedef struct {
    u8 pad_00[0x10];
    S1 *unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern f32 *func_0885356C(s32, s32, s32, s32);

void func_089A78D8(S0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;
    S2 *p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_10 != NULL) {
        p = arg0->unk_10->unk_110;
        if (p != NULL) {
            f32 x = *a;
            f32 y = *b;
            p->unk_B0 = x;
            p->unk_B4 = y;
            p->unk_B8 = 0.0f;
            p->unk_BC = 1.0f;
        }
    }
    func_08852F00(arg1, 0);
}
