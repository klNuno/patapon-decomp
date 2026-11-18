#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x108];
    s32 *unk_108;
} D_08961190_T;

struct N_08961190 {
    s32 unk_00;
    N_08961190 *unk_04;
    D_08961190_T *unk_08;

    int eq2(N_08961190 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08961190 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08961190 *o) { return !(bool)eq(o); }
};

struct It_08961190 {
    N_08961190 *p;
    void next() {
        if (p != NULL) {
            p = p->unk_04;
        }
    }
};

struct L_08961190 {
    u8 pad_00[0x24];
    N_08961190 unk_24;

    N_08961190 *end() { return &unk_24; }
};

class V_08961190 {
public:
    u8 pad_00[0x8];
    virtual void v08();
    virtual void v0C();
    virtual void v10();
    virtual void v14();
    virtual void v18();
    virtual void v1C();
    virtual void v20();
    virtual void v24();
    virtual void v28();
    virtual void v2C();
    virtual void v30();
};

class W_08961190 : public V_08961190 {
public:
    u8 pad_0C[0x14];
    void *unk_20;
};

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
} H_08961190;

typedef struct {
    u8 pad_00[0x118];
    s32 unk_118;
} G_08961190;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    u8 pad_24[0xAC];
    H_08961190 *unk_D0;
    u8 pad_D4[0xC];
    G_08961190 *unk_E0;
    u8 pad_E4[0x2C];
    s32 unk_110;
    u8 pad_114[0x4];
    W_08961190 *unk_118;

    H_08961190 *getD0() {
        if (unk_D0 != NULL) {
            return unk_D0;
        } else {
            return NULL;
        }
    }
} S_08961190;

extern s32 D_08A04DEC[];

L_08961190 *func_0896CE18(s32, s32, s32, s32);
void func_08965744(W_08961190 *, s32);
s32 func_08965A10(s32, s32);
void func_08965820(W_08961190 *, s32, s32 *, s32);

s32 func_08961190(S_08961190 *arg0, s32 arg1) {
    L_08961190 *l;
    W_08961190 *w;
    s32 g;
    It_08961190 it;
    s32 *b;
    s32 a;
    s32 r;

    if (arg0->getD0()->unk_54 != 0) {
        l = func_0896CE18(arg1, D_08A04DEC[0], 0, 1);
        if (l == NULL) {
            return 0;
        }
        w = arg0->unk_118;
        if (w == NULL) {
            return 0;
        }
        if (w != NULL) {
            w->unk_20 = arg0;
            arg0->unk_118->v30();
            func_08965744(arg0->unk_118, arg0->unk_20);
            if (arg0->unk_E0 != NULL) {
                g = arg0->unk_E0->unk_118;
                if (g != 0) {
                    for (it.p = l->unk_24.unk_04; it.p->ne(l->end()); it.next()) {
                        a = arg0->unk_110;
                        b = (*(D_08961190_T **)&it.p->unk_08)->unk_108;
                        r = func_08965A10(g, b[9]);
                        if (r != 0) {
                            func_08965820(arg0->unk_118, r, b, a);
                        }
                    }
                }
            }
        }
    }
    return 1;
}

}
