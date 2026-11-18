#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

typedef struct {
    u8 pad_00[0xF0];
    u8 unk_F0[4];
} T;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
void func_088B4BA8(void *, s32, f32);

void func_088A9BD0(S *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    T *t;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    t = (T *)func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (t == NULL) {
        func_08852F00(arg1, 0);
    } else {
        func_088B4BA8(t->unk_F0, *b, *c);
        func_08852F00(arg1, 0);
    }
}
