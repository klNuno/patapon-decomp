#include "common.h"

extern "C" {

struct P_088FA384 {
    s32 unk_00;
    s32 unk_04;
    P_088FA384(s32 x, s32 y) : unk_00(x), unk_04(y) {}
};

typedef struct {
    u8 pad_00[0xB21EC];
    s32 unk_B21EC;
} G_088FA384;

typedef struct {
    u8 pad_00[0x10];
    G_088FA384 *unk_10;
} Obj_088FA384;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_08911008(s32, P_088FA384 *, u32, u32, u32);

void func_088FA384(Obj_088FA384 *arg0, void *arg1) {
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    P_088FA384 pt(*b, *a);
    func_08911008(arg0->unk_10->unk_B21EC, &pt, *c, *d, *e);
    func_08852F00(arg1, 0);
}

}
