#include "common.h"

extern "C" {

typedef struct G_08928198 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} G_08928198;

typedef struct E_08928198 {
    u8 pad_00[0x44];
    G_08928198 unk_44;
    u8 pad_50[0x10];
    u8 unk_60[1];
} E_08928198;

typedef struct V_08928198 {
    E_08928198 **unk_00;
    s32 unk_04;
} V_08928198;

typedef struct W_08928198 {
    u8 pad_00[0x204];
    V_08928198 unk_204;
} W_08928198;

typedef struct O_08928198 {
    u8 pad_00[4];
    u8 *unk_04;
    u8 pad_08[0x20C];
    W_08928198 unk_214;
} O_08928198;

typedef struct R_08928198 {
    u8 pad_00[8];
    u8 unk_08[4];
} R_08928198;

class Q_08928198 {
public:
    u8 pad_00[0x10];
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
    virtual void v34();
    virtual void v38();
    virtual void v3C();
    virtual void v40();
    virtual void v44();
    virtual void *v48(void *);
};

typedef struct P_08928198 {
    u8 pad_00[0x40];
    Q_08928198 *unk_40;
} P_08928198;

typedef struct S_08928198 {
    u8 pad_00[0x18];
    s32 unk_18;
    u8 pad_1C[0xC];
    O_08928198 *unk_28;
    P_08928198 *unk_2C;
} S_08928198;

R_08928198 *func_08927D18(S_08928198 *, P_08928198 *, void *);
void func_089282AC(S_08928198 *, void *);

void func_08928198(S_08928198 *arg0) {
    E_08928198 **p;
    E_08928198 *e;
    G_08928198 *g;
    R_08928198 *r;
    W_08928198 *w;
    E_08928198 ***data;
    s32 *sz;

    p = arg0->unk_28->unk_214.unk_204.unk_00;
    w = &arg0->unk_28->unk_214;
    data = &w->unk_204.unk_00;
    if ((u32)p != (u32)(p + arg0->unk_28->unk_214.unk_204.unk_04)) {
        sz = &w->unk_204.unk_04;
        do {
            e = *p;
            if (e != NULL) {
                g = &e->unk_44;
                if (g->unk_04 == arg0->unk_18) {
                    r = func_08927D18(arg0, arg0->unk_2C,
                                      arg0->unk_2C->unk_40->v48(arg0->unk_28->unk_04 + (g->unk_00 << 7) + 0x40));
                    if (r != NULL && g->unk_08 < 4 && r->unk_08[g->unk_08] != 0) {
                        func_089282AC(arg0, e->unk_60);
                    }
                }
            }
            p++;
        } while (p != *data + *sz);
    }
}

}
