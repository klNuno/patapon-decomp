#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} P088FA53C;

typedef struct {
    u8 pad_00[0xB21EC];
    s32 unk_B21EC;
} W088FA53C;

typedef struct {
    u8 pad_00[0x10];
    W088FA53C *unk_10;
    u8 pad_14[0xC];
    s32 unk_20;
} T088FA53C;

s32 *func_0885356C(void *, s32, s32, s32);
u8 *func_08852BA8(void *);
s32 func_089A8D10(s32, s32);
void func_08911028(s32, P088FA53C *, u32, u32, u32, s32, s32, u32);
void func_08852F00(void *, s32);

void func_088FA53C(T088FA53C *arg0, void *arg1) {
    P088FA53C p;
    s32 *a;
    s32 *b;
    s32 *c;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 *g;
    s32 s;
    s32 idx;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    c = func_0885356C(arg1, 2, 1, 4);
    d = func_0885356C(arg1, 3, 1, 4);
    e = func_0885356C(arg1, 4, 1, 4);
    f = func_0885356C(arg1, 5, 1, 4);
    g = func_0885356C(arg1, 6, 1, 4);
    s = *a;
    p.unk_00 = *b;
    p.unk_04 = s;
    idx = *g;
    s = func_089A8D10(arg0->unk_20, *(s32 *)(func_08852BA8(arg1) + idx));
    func_08911028(arg0->unk_10->unk_B21EC, &p, *c, *d, *e, *f, s, *g);
    func_08852F00(arg1, 0);
}
