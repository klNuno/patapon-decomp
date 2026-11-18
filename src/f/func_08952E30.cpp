#include "common.h"

extern "C" {

struct A {
    virtual s32 *unk_08(s32, s32);
    virtual void unk_0C(s32, s32 *, s32);
};

struct C {
    s32 *unk_00;
    s32 func_00()
    {
        return unk_00 != NULL ? *unk_00 : 0;
    }
    s32 func_04()
    {
        --*unk_00;
        return func_00();
    }
};

struct SP {
    s32 unk_00;
    C unk_04;
};

struct H {
    s32 unk_00;
    A *unk_04;
    SP unk_08;
};

struct B {
    u8 pad_00[0x10];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(s32, s32, s32, s32);
};

typedef struct {
    u8 pad_00[0x108];
    s32 unk_108;
} N;

typedef struct {
    u8 pad_00[0xEA8D0];
    u8 unk_EA8D0[1];
} G;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} T1;

typedef struct {
    u8 pad_00[0x190];
} M;

typedef struct {
    u8 pad_00[0x10A0];
    s32 unk_10A0;
    u8 unk_10A4[8];
    B *unk_10AC;
    u8 pad_10B0[0x10];
    M unk_10C0;
    u8 unk_1250;
    u8 unk_1251;
} S;

extern G *D_08AD1E28[];
extern char D_08A049B0[];
extern char D_08A049C0[];
extern char D_08A049D4[];
extern char D_08A049F0[];
extern char D_08A049FC[];
A *func_08827AD4(void);
s32 func_08858B9C(void);
void func_08865FE4(void *, s32);
void func_08866028(void *);
void func_0886A45C(s32, s32);
void func_0887432C(H *, s32);
s32 func_0888B03C(s32 *, char *);
s32 func_0888B078(s32 *, char *);
void func_088E20F4(H *, H *);
void func_088F2FE4(H *, void *);
N *func_0896CE18(void *, char *, s32, s32);
void func_08974448(M *, T1 *, f32);
void func_08974584(M *, f32, f32);
void func_08974648(M *, f32, f32);
void func_0897470C(M *, f32, f32, f32, f32);
B *func_08975570(s32 arg0, s32 arg1);

void func_08952E30(S *arg0)
{
    s32 t;
    H h;
    T1 v;
    H u;
    G *g;
    N *n;
    SP *p;
    C *c;
    s32 a;
    s32 b;
    s32 d;
    B *o;

    arg0->unk_1250 = 0;
    arg0->unk_1251 = 0;
    g = D_08AD1E28[0];
    n = func_0896CE18((g != NULL ? g : NULL)->unk_EA8D0, D_08A049B0, 0, 1);
    n = func_0896CE18(n, D_08A049C0, 0, 1);
    n = func_0896CE18(n, D_08A049D4, 0, 1);
    n = func_0896CE18(n, D_08A049F0, 0, 1);
    t = n->unk_108;
    d = func_08858B9C();
    a = func_0888B03C(&t, D_08A049FC);
    b = func_0888B078(&t, D_08A049FC);
    o = func_08975570(d, a);
    h.unk_00 = d;
    h.unk_04 = func_08827AD4();
    h.unk_08.unk_00 = (s32)o;
    h.unk_08.unk_04.unk_00 = h.unk_04->unk_08((s32)o, h.unk_00);
    *h.unk_08.unk_04.unk_00 = 1;
    func_088E20F4(&u, &h);
    func_088F2FE4(&u, arg0->unk_10A4);
    func_0887432C(&u, -1);
    p = &h.unk_08;
    if (h.unk_08.unk_00 != 0) {
        c = &h.unk_08.unk_04;
        if (c->func_04() == 0) {
            h.unk_04->unk_0C(p->unk_00, *(s32 **)c, h.unk_00);
            func_0886A45C(p->unk_00, h.unk_00);
        }
    }
    arg0->unk_10AC->unk_10(a, b, arg0->unk_10A0, 0);
    func_08866028(&arg0->unk_10C0);
    func_08865FE4(&arg0->unk_10C0, (s32)arg0->unk_10AC);
    v.unk_00 = 0.0f;
    v.unk_04 = 0.0f;
    v.unk_08 = 0.0f;
    func_08974448(&arg0->unk_10C0, &v, 0.0f);
    func_08974584(&arg0->unk_10C0, 0.0f, 0.0f);
    func_08974648(&arg0->unk_10C0, 0.0f, 0.0f);
    func_0897470C(&arg0->unk_10C0, 1.0f, -1.0f, 1.0f, 0.0f);
}

}
