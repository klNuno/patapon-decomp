#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14[1];
} S2;

typedef struct {
    u8 pad_00[0x114];
    S2 *unk_114;
} S1;

typedef struct {
    u8 pad_00[0x10];
    S1 *unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);
f32 *func_08992A3C(void *, s32);

void func_089A7DE4(S0 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    S2 *p;
    u8 *q;
    f32 *f;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    *b = 0;
    p = arg0->unk_10->unk_114;
    if (p != NULL) {
        q = p->unk_14;
        if (q != NULL) {
            f = func_08992A3C(q, *a);
            if (f != NULL) {
                *b = (u8)(*f > 0.0f);
            }
        }
    }
    func_08852F00(arg1, 0);
}
