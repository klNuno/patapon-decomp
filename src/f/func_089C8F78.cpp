#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x28];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14(s32);
};

struct Q {
    u8 pad_00[0x54];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
    u8 pad_60[0x30];
    V unk_90;
};

struct A {
    virtual void v08();
    virtual void v0C(void *, s32 *, s32);
};

struct C {
    s32 *unk_00;
    s32 get() {
        s32 v;
        if (unk_00 != NULL) {
            v = *unk_00;
        } else {
            v = 0;
        }
        return v;
    }
    s32 release() {
        --*unk_00;
        return get();
    }
};

struct P {
    void *unk_00;
    C unk_04;
};

struct Obj_089C0890 {
    s32 unk_00;
    A *unk_04;
    P unk_08;
};

struct M {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
};

struct M_089C0890 {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
};

struct W {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[4];
};

struct S_089C0890 {
    W *unk_00;
    u8 pad_04[0x15C];
    s32 unk_160;
    void *unk_164;
    u8 pad_168[8];
    u8 unk_170[0x310];
    u8 unk_480[0xA50];
    u8 unk_ED0[0x32];
};

typedef S_089C0890 Obj_089C9308;
typedef u8 S089CB69C;
typedef void Obj2_089991B0;

extern void *D_08AD1E28[];
extern void *D_08AD8DD8[];
extern char *D_089F37D8[];
extern char *D_089F37B8[];
extern f32 D_089F37D0[];
extern f32 D_089F37C0[];
extern char D_089F3894[];

void func_08855354(M_089C0890 *);
void func_08864E80(void *, M_089C0890 *);
void func_08865FEC(void *, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, char *);
Obj2_089991B0 *func_0892E894(void *);
void func_089579E8(void *, s32, s32, f32);
void func_0897B950(void *, s32);
void func_089853B4(void *, s32);
void func_08985654(void);
void func_08985704(Obj_089C0890 *, S_089C0890 *);
Q *func_08985828(S_089C0890 *, s32);
void func_0898ABB8(void *, f32, s32, s32);
void func_089CA058(Obj_089C9308 *);
void func_089CB69C(S089CB69C *);
void func_089D3BB8(void *, char *, s32);

void func_089C8F78(S_089C0890 *arg0) {
    Obj_089C0890 o;
    M_089C0890 m;
    M n;
    void *g;
    s32 i;
    char **p;
    P *s;
    C *c;
    Q *q;
    Q *r;
    s32 *k;
    void *x;
    u32 j;
    u32 l;

    func_08985654();
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    for (i = 0, p = D_089F37D8; i < 12; i++, p++) {
        func_08985704(&o, arg0);
        x = o.unk_08.unk_00;
        func_08865FEC(x, func_08868CAC(g, 7, *p, 1), 1);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v0C(s->unk_00, c->unk_00, o.unk_00);
                func_089853B4(s->unk_00, o.unk_00);
            }
        }
    }
    func_089CA058(arg0);
    j = 0;
    do {
        func_08985828(arg0, j + 1)->unk_90.v14(1);
    } while (++j < 8);
    l = 0;
    do {
        func_08855354(&m);
        m.unk_30 = D_089F37D0[0];
        m.unk_34 = D_089F37D0[1];
        q = func_08985828(arg0, l + 9);
        func_08864E80(q, &m);
        func_0898ABB8(q, 0.0f, 2, 0);
        q->unk_54 = q->unk_5C;
        q->unk_90.v14(2);
    } while (++l < 2);
    func_08855354((M_089C0890 *)&n);
    n.unk_30 = D_089F37C0[0];
    n.unk_34 = D_089F37C0[1];
    r = func_08985828(arg0, 11);
    func_08864E80(r, (M_089C0890 *)&n);
    r->unk_90.v14(2);
    func_089D3BB8(arg0->unk_ED0, D_089F3894, 0x32);
    func_089CB69C(arg0->unk_170);
    k = func_08868E8C(g, 7, D_089F37B8[0]);
    func_0897B950(arg0->unk_480, *k);
    func_089579E8(arg0->unk_00->unk_2E3C0, *k, 7, 0.0f);
    arg0->unk_164 = func_0892E894(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL);
    arg0->unk_160 = 0;
}

}
