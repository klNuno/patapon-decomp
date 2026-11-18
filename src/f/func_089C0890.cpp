#include "common.h"

extern "C" {

struct A_089C0890 {
    virtual void v0();
    virtual void v1(void *, s32 *, s32);
};

struct C_089C0890 {
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

struct SP_089C0890 {
    void *unk_00;
    C_089C0890 unk_04;
};

typedef struct {
    s32 unk_00;
    A_089C0890 *unk_04;
    SP_089C0890 unk_08;
} Obj_089C0890;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[0x18];
} M_089C0890;

class V_089C0890 {
public:
    u8 pad_00[0x28];
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

typedef struct {
    u8 pad_00[0x90];
    V_089C0890 unk_90;
} R_089C0890;

typedef struct {
    u8 pad_00[0x2E3C0];
    u8 unk_2E3C0[4];
} W_089C0890;

typedef struct {
    W_089C0890 *unk_00;
    u8 pad_04[0x15C];
    u8 unk_160[0xBA8 - 0x160];
    s32 unk_BA8;
    u8 pad_BAC[4];
    s32 unk_BB0;
    u8 pad_BB4[0x10];
    u8 unk_BC4[0x20];
    u8 unk_BE4[4];
} S_089C0890;

extern void *D_08AD1E28[];
extern char *D_089F29F4[];
extern f32 D_089F29E8[];
extern char *D_089F29E0[];
extern char D_089F29FC[];

void func_08855354(M_089C0890 *);
void func_08864E80(void *, M_089C0890 *);
void func_08865FEC(void *, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, char *);
void func_089579E8(void *, s32, s32, f32);
void func_0897B950(void *, s32);
void func_089853B4(void *, s32);
void func_08985654(void);
void func_08985704(Obj_089C0890 *, S_089C0890 *);
R_089C0890 *func_08985828(S_089C0890 *, s32);
void func_089C4800(void *);
void func_089D3BB8(void *, char *, s32);

void func_089C0890(S_089C0890 *arg0) {
    Obj_089C0890 o;
    M_089C0890 m;
    void *g;
    s32 i;
    char **p;
    SP_089C0890 *s;
    C_089C0890 *c;
    R_089C0890 *r;
    s32 *k;
    void *x;

    func_08985654();
    g = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    for (i = 0, p = D_089F29F4; i < 2; i++, p++) {
        func_08985704(&o, arg0);
        x = o.unk_08.unk_00;
        func_08865FEC(x, func_08868CAC(g, 7, *p, 1), 1);
        s = &o.unk_08;
        if (o.unk_08.unk_00 != NULL) {
            c = &o.unk_08.unk_04;
            if (c->release() == 0) {
                o.unk_04->v1(s->unk_00, c->unk_00, o.unk_00);
                func_089853B4(s->unk_00, o.unk_00);
            }
        }
    }
    func_08855354(&m);
    m.unk_30 = D_089F29E8[0];
    m.unk_34 = D_089F29E8[1];
    r = func_08985828(arg0, 1);
    func_08864E80(r, &m);
    r->unk_90.v3(3);
    k = func_08868E8C(g, 7, D_089F29E0[0]);
    func_0897B950(arg0->unk_160, *k);
    func_089579E8(arg0->unk_00->unk_2E3C0, *k, 5, 0.0f);
    arg0->unk_BA8 = 0;
    arg0->unk_BB0 = 1;
    func_089D3BB8(arg0->unk_BC4, D_089F29FC, 0xD);
    func_089C4800(arg0->unk_BE4);
}

}
