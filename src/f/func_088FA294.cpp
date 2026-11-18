#include "common.h"

extern "C" {

typedef struct {
    s32 unk_00;
    s32 unk_04;
    void set(s32 x, s32 y) { unk_00 = x; unk_04 = y; }
} P_088FA294;

typedef struct {
    u8 pad_00[0xB21EC];
    void *unk_B21EC;
} W_088FA294;

typedef struct {
    u8 pad_00[0x10];
    W_088FA294 *unk_10;
} T_088FA294;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08910FB0(void *, P_088FA294 *, s32 *, bool, s32);

void func_088FA294(T_088FA294 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    P_088FA294 p;
    s32 e;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    p.set(*b, *a);
    e = *d;
    func_08910FB0(arg0->unk_10->unk_B21EC, &p, &e, *c == 0, 1);
    func_08852F00(arg1, 0);
}

}
