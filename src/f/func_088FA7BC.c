#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P088FA7BC;

typedef struct {
    u8 pad_00[0x10];
    u8 *unk_10;
} S088FA7BC;

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_08911020(s32, P088FA7BC *, s32);

void func_088FA7BC(S088FA7BC *arg0, void *arg1) {
    P088FA7BC sp28;
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
    tb = *b;
    ta = *a;
    sp28.unk_00 = tb;
    sp28.unk_04 = ta;
    *d = func_08911020(*(s32 *)&arg0->unk_10[0xB21EC], &sp28, *c);
    func_08852F00(arg1, 0);
}
