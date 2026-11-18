#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P088FA89C;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S088FA89C;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
void func_08911018(s32, P088FA89C *, s32, u32);

void func_088FA89C(S088FA89C *arg0, void *arg1) {
    P088FA89C sp28;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 ta;
    s32 tb;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    ta = *a;
    tb = *b;
    sp28.unk_00 = tb;
    sp28.unk_04 = ta;
    func_08911018(*(s32 *)&arg0->unk_10[0xB21EC], &sp28, *c, *d);
    func_08852F00(arg1, 0);
}
