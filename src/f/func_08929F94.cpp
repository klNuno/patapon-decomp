#include "common.h"

extern "C" {

struct O;
struct A;
struct A_089316C4;
struct S_0892ACA8;
struct S;

struct V {
    virtual s32 *func_00(void *, s32);
    virtual void func_04(s32, s32 *, s32);
};

void func_089298BC(O *, A *);
void func_089316C4(A_089316C4 *);
s32 *func_08868E8C(void *, s32, char *);
s32 func_0887744C(u8 *, char *, s32);
u32 func_0885AB08(s32, s32);
s32 func_0885AB7C(s32, s32, u32);
s32 func_08822AD0(char *, char *);
void *func_08827A50(s32, s32);
V *func_08827AD4(void);
S_0892ACA8 *func_0892ACA8(S_0892ACA8 *, s8 *, s32, void *, s32);
void func_0892AC5C(s32, char **);
void *func_0892AF08(void *, u32, S *);
s32 func_0892C008(s32);

extern void *D_08AD1E28[];
extern u8 *D_08AD1F14[];
extern char D_08A02928[];
extern char D_08A02934[];

struct R {
    s32 unk_00;
    V *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    s32 *func_00(void *p)
    {
        unk_04 = func_08827AD4();
        unk_08 = (s32)p;
        return unk_04->func_00(p, *(volatile s32 *)&unk_00);
    }

    void func_04(const R &r, s32 *x)
    {
        unk_00 = *(const volatile s32 *)&r.unk_00;
        unk_04 = r.unk_04;
        unk_08 = *(const volatile s32 *)&r.unk_08;
        unk_0C = x;
    }

    void func_08()
    {
        if (*(volatile s32 *)&unk_08 != 0) {
            --**(s32 *volatile *)&unk_0C;
            s32 *p = *(s32 *volatile *)&unk_0C;
            s32 x;
            if (p != NULL) {
                x = *p;
            } else {
                x = 0;
            }
            if (x == 0) {
                unk_04->func_04(unk_08, p, unk_00);
                func_0892AC5C(unk_08, (char **)unk_00);
            }
        }
    }
};

struct N {
    N *unk_00;
    N *unk_04;
    s32 unk_08;
    N *unk_0C;
};

struct S {
    s32 unk_00;
    u8 pad_04[0x1004];
    R *unk_1008;
    s32 unk_100C;
    s32 unk_1010;
    s32 unk_1014;
    u8 pad_1018[0x304];
    void **unk_131C;
    s32 unk_1320;
    u8 pad_1324[0x28];
    N unk_134C;
    u8 pad_135C[0x10];
    s32 unk_136C;
    u8 pad_1370[0x10];
    u8 unk_1380[0x2C8];
    void *unk_1648;
    u8 pad_164C[0x58];
    void (*unk_16A4)(O *, A *);
    s32 unk_16A8;
    u8 pad_16AC[8];
    s32 unk_16B4;
    s32 unk_16B8;
    u8 pad_16BC[0x44];
    s32 unk_1700;
};

void func_08929F94(S *arg0, s32 arg1)
{
    R r;
    s32 h;
    u32 k;
    u32 l;
    u32 i;
    char *p;
    u32 j;
    char *q;
    char *x;
    s32 n;
    S_0892ACA8 *o;
    s32 *c;
    R *dest;
    N *e;
    N *prev;
    s32 ok;
    void **out;

    arg0->unk_1010 = arg1;
    func_089316C4((A_089316C4 *)arg0->unk_1380);
    void *g = D_08AD1E28[0];
    arg0->unk_1014 = *func_08868E8C(g != NULL ? g : NULL, 1, D_08A02928);
    u8 *b = D_08AD1F14[0];
    h = func_0887744C(b != NULL ? b : NULL, D_08A02934, 1);
    k = func_0885AB08(h, 0);
    l = func_0885AB08(h, 1);

    for (i = 0; i < k; ++i) {
        p = (char *)func_0885AB7C(h, 0, i);
        x = NULL;
        if (p[0x2C] != 0) {
            for (j = 0; j < l; ++j) {
                q = (char *)func_0885AB7C(h, 1, j);
                if (func_08822AD0(q, p + 0x2C) == 0) {
                    x = q + 0x20;
                    break;
                }
            }
        }
        n = arg0->unk_00;
        o = (S_0892ACA8 *)func_08827A50(0x20, n);
        if (o != NULL) {
            o = func_0892ACA8(o, (s8 *)p, (s32)x, arg0->unk_1648, arg0->unk_1700);
        }
        r.unk_00 = n;
        c = r.func_00(o);
        *c = 1;
        dest = &arg0->unk_1008[arg0->unk_100C];
        r.unk_0C = c;
        if (dest != NULL) {
            dest->func_04(r, c);
            if (*(volatile s32 *)&dest->unk_08 != 0) {
                ++*dest->unk_0C;
            }
        }
        ++arg0->unk_100C;
        r.func_08();
    }

    u32 m = 0;
    void *t;
    do {
        t = func_08827A50(0x5E0, arg0->unk_00);
        if (t != NULL) {
            t = func_0892AF08(t, m, arg0);
        }
        e = (N *)func_0892C008((s32)t);
        if (&arg0->unk_134C != e) {
            prev = arg0->unk_134C.unk_00;
            if (prev != &arg0->unk_134C) {
                e->unk_00 = prev;
                arg0->unk_134C.unk_00->unk_04 = e;
                arg0->unk_134C.unk_00 = e;
                ok = 1;
            } else {
                arg0->unk_134C.unk_00 = e;
                arg0->unk_134C.unk_04 = e;
                e->unk_00 = &arg0->unk_134C;
                ok = 1;
            }
            e->unk_04 = &arg0->unk_134C;
            if (ok != 0) {
                e->unk_0C = &arg0->unk_134C;
                ++arg0->unk_136C;
            }
        }
        out = &arg0->unk_131C[arg0->unk_1320];
        if (out != NULL) {
            *out = t;
        }
        ++m;
        ++arg0->unk_1320;
    } while (m < 0xC0);

    arg0->unk_16A4 = func_089298BC;
    arg0->unk_16B4 = 9;
    arg0->unk_16B8 = 0;
    arg0->unk_16A8 = 0;
}

}
