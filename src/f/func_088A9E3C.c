#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);
f32 func_088B4D74(s32, s32);

void func_088A9E3C(S0 *arg0, s32 arg1) {
    s32 *a;
    s32 *b;
    f32 *c;
    s32 r;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    r = func_0888A5A0(func_088BCF58(arg0->unk_10), *a);
    if (r == 0) {
        func_08852F00(arg1, 0);
        return;
    }
    *c = func_088B4D74(r + 0xF0, *b);
    func_08852F00(arg1, 0);
}
