#include "common.h"

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
    f32 unk_94;
    u8 pad_98[0x18];
    f32 unk_B0;
    f32 unk_B4;
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

void func_089A7978(S0 *arg0, s32 arg1) {
    f32 *a;
    f32 *b;
    f32 *c;
    f32 *d;
    S2 *p;
    S1 *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    t = arg0->unk_10;
    if (t != NULL) {
        p = t->unk_110;
        if (p != NULL) {
            p->unk_90 = *a;
            p->unk_94 = *b;
            p->unk_B0 = *c;
            p->unk_B4 = *d;
        }
    }
    func_08852F00(arg1, 0);
}
