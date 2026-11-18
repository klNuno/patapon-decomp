#include "common.h"

typedef struct {
    u8 pad_00[0x90];
    f32 unk_90;
    f32 unk_94;
    u8 pad_98[0x18];
    f32 unk_B0;
    f32 unk_B4;
} T;

typedef struct {
    u8 pad_00[0x110];
    T *unk_110;
} U;

typedef struct {
    u8 pad_00[0x10];
    U *unk_10;
} S;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);

void func_089A6CE8(S *arg0, void *arg1) {
    f32 *a;
    f32 *b;
    f32 *c;
    f32 *d;
    T *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    if (arg0->unk_10 != NULL) {
        t = arg0->unk_10->unk_110;
        if (t != NULL) {
            *a = t->unk_90;
            *b = t->unk_94;
            *c = t->unk_B0;
            *d = t->unk_B4;
        }
    }
    func_08852F00(arg1, 0);
}
