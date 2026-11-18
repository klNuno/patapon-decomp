#include "common.h"
extern "C" {
struct V {
    virtual s32 *unk_08(s32, s32);
    virtual void unk_0C(s32, s32 *, s32);
};
struct H {
    s32 unk_00;
    V *unk_04;
    s32 unk_08;
    s32 *unk_0C;
};
struct D {
    D *unk_00;
    D *unk_04;
    u8 pad_08[4];
    D *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    u8 *unk_24;
};
struct A {
    u8 pad_00[0x28];
    s32 unk_28;
};
struct S {
    s32 unk_00;
    u8 unk_04[8];
    u8 unk_0C[0xC];
    u8 unk_18[0x110];
    H *unk_128;
    u32 unk_12C;
    D unk_130;
    D unk_158;
    u8 pad_180[0x194];
    s32 unk_314;
};

void *func_08827A50(s32, s32);
V *func_08827AD4(void);
void func_089457D8(void *);
void func_08945E64(void *);
void func_089C4404(void *);
void func_089C44FC(void *);
void func_089C4E00(s32, s32);
s32 func_089C3194(void *, A *, s32);
s32 func_089C3D94(s32 arg0);
extern u8 D_08A48CE4[];

S *func_089C3FD0(S *arg0, A *arg1, s32 arg2)
{
    H h;
    D *d;
    s32 n;
    u32 i;
    s32 p;

    arg0->unk_00 = arg2;
    func_089457D8(arg0->unk_04);
    func_08945E64(arg0->unk_0C);
    arg0->unk_128 = (H *)(((u32)arg0->unk_18 & 0xF) + (u32)arg0 + 0x18);
    d = &arg0->unk_130;
    arg0->unk_12C = 0;
    arg0->unk_130.unk_24 = D_08A48CE4;
    func_089C44FC(d);
    d->unk_04 = d;
    d->unk_00 = d;
    func_089C4404(d);
    d = &arg0->unk_158;
    arg0->unk_158.unk_24 = D_08A48CE4;
    func_089C44FC(d);
    d->unk_04 = d;
    d->unk_00 = d;
    func_089C4404(d);
    arg0->unk_314 = 0;

    n = arg1->unk_28;
    i = 0;
    do {
        H *t;
        D *q;
        s32 *c;
        s32 z;
        p = (s32)func_08827A50(0x120, n);
        if (p != 0)
            p = func_089C3194((void *)p, arg1, arg2);
        h.unk_00 = n;
        h.unk_04 = func_08827AD4();
        h.unk_08 = p;
        c = h.unk_04->unk_08(p, *(volatile s32 *)&h.unk_00);
        *c = 1;
        h.unk_0C = c;
        t = arg0->unk_128 + arg0->unk_12C;
        if (t != NULL) {
            t->unk_00 = *(volatile s32 *)&h.unk_00;
            t->unk_04 = *(V *volatile *)&h.unk_04;
            t->unk_08 = *(volatile s32 *)&h.unk_08;
            t->unk_0C = c;
            if (t->unk_08 != 0)
                ++*t->unk_0C;
        }
        ++arg0->unk_12C;
        q = (D *)func_089C3D94(h.unk_08);
        if (&arg0->unk_130 != q) {
            s32 r;
            if (arg0->unk_130.unk_00 != &arg0->unk_130) {
                q->unk_00 = arg0->unk_130.unk_00;
                arg0->unk_130.unk_00->unk_04 = q;
                arg0->unk_130.unk_00 = q;
                r = 1;
            } else {
                arg0->unk_130.unk_00 = q;
                arg0->unk_130.unk_04 = q;
                q->unk_00 = &arg0->unk_130;
                r = 1;
            }
            q->unk_04 = &arg0->unk_130;
            if (r) {
                q->unk_0C = &arg0->unk_130;
                ++arg0->unk_130.unk_20;
            }
        }
        if (h.unk_08 != 0) {
            --**(s32 *volatile *)&h.unk_0C;
            c = *(s32 *volatile *)&h.unk_0C;
            if (c != NULL) {
                z = *c;
            } else {
                z = 0;
            }
            if (z == 0) {
                h.unk_04->unk_0C(h.unk_08, c, h.unk_00);
                func_089C4E00(h.unk_08, h.unk_00);
            }
        }
        ++i;
    } while (i < 0x10U);
    return arg0;
}
}
