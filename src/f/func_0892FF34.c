#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S0;

extern int func_08852F00(s32, s32);
extern s32 *func_0885356C(s32, s32, s32, s32);
void func_0892AA94(s32, u32, f32, f32, s32);

void func_0892FF34(S0 *arg0, s32 arg1) {
    s32 *a;
    f32 *b;
    f32 *c;

    a = func_0885356C(arg1, 0, 1, 4);
    b = (f32 *)func_0885356C(arg1, 1, 1, 4);
    c = (f32 *)func_0885356C(arg1, 2, 1, 4);
    func_0892AA94(arg0->unk_10, *a, *b, *c, *func_0885356C(arg1, 2, 1, 4) == 1);
    func_08852F00(arg1, 0);
}
