#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S;

void func_08852F00(void *, s32);
void *func_0885356C(void *, s32, s32, s32);
void func_088890C4(f32, f32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AADC8(S *arg0, void *arg1) {
    s32 *a;
    f32 *b;
    f32 *c;
    s32 p;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    p = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (p == 0) {
        func_08852F00(arg1, 0);
    } else {
        func_088890C4(*b, *c, p);
        func_08852F00(arg1, 0);
    }
}
