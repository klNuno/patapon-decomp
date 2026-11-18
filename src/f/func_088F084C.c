#include "common.h"

typedef struct {
    u8 unk_00;
    u8 unk_01;
    u8 unk_02;
    u8 unk_03;
} C_088F084C;

typedef struct {
    u8 pad_00[0x224];
    s32 unk_224;
} S_088F084C;

u8 *func_08852BA8(void *);
void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
void func_088ACCAC(s32, s32, s32, C_088F084C *);
s32 func_089A8D10(s32, s32);

void func_088F084C(S_088F084C *arg0, void *arg1) {
    C_088F084C c;
    s32 *a;
    s32 *b;
    s32 *d;
    s32 *e;
    s32 *f;
    s32 *g;
    s32 idx;
    s32 r;
    u8 *p;
    s32 n;

    a = func_0885356C(arg1, 0, 1, 4);
    b = func_0885356C(arg1, 1, 1, 4);
    d = func_0885356C(arg1, 2, 1, 4);
    e = func_0885356C(arg1, 3, 1, 4);
    f = func_0885356C(arg1, 4, 1, 4);
    g = func_0885356C(arg1, 5, 1, 4);
    idx = *func_0885356C(arg1, 6, 0, 4);
    r = func_089A8D10(arg0->unk_224, *(s32 *)(func_08852BA8(arg1) + idx));
    p = (u8 *)&c;
    n = 4;
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    c.unk_00 = *d;
    c.unk_01 = *e;
    c.unk_02 = *f;
    c.unk_03 = *g;
    func_088ACCAC(*a, *b, r, &c);
    func_08852F00(arg1, 0);
}
