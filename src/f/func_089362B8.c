#include "common.h"

typedef struct {
    u8 pad_00[0xD80];
    f32 unk_D80;
    f32 unk_D84;
    u8 pad_D88[0x18];
    f32 unk_DA0;
    f32 unk_DA4;
} T;

typedef struct {
    u8 pad_00[0x14];
    T *unk_14;
} S;

void func_08852F00(void *, s32);
f32 *func_0885356C(void *, s32, s32, s32);

void func_089362B8(S *arg0, void *arg1) {
    f32 *a;
    f32 *b;
    f32 *c;
    f32 *d;
    T *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    t = arg0->unk_14;
    *a = t->unk_D80;
    *b = t->unk_D84;
    *c = t->unk_DA0;
    *d = t->unk_DA4;
    func_08852F00(arg1, 0);
}
