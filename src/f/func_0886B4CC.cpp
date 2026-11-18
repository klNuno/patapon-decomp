#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[0xC];
} E;

class V {
public:
    E *unk_00;
    E *unk_04;
    virtual E *v0();
    virtual u32 v1();
};

struct Z {
};

struct W {
    Z unk_00;
    W(const Z &z) : unk_00(z) {}
};

typedef struct M {
    E *unk_00;
    E *unk_04;
    void *unk_08;
    u8 unk_0C[0xA00];
    void *unk_A0C;
    void *unk_A10;
    void *unk_A14;
    void *unk_A18;
    s32 unk_A1C;
    W unk_A20;
} M;

typedef struct S {
    void *unk_00;
    M unk_04;
} S;

extern u8 D_08A44F08[];
extern u8 D_08A44F18[];
extern u8 D_08A44F28[];

S *func_0886B4CC(S *arg0) {
    M *m;
    E *p;
    E *e;
    u32 i;
    Z b;

    arg0->unk_00 = D_08A44F28;
    arg0->unk_04.unk_08 = D_08A44F08;
    m = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A44F18;
    arg0->unk_04.unk_A0C = m->unk_0C;
    p = ((V *)&arg0->unk_04)->v0();
    m->unk_00 = p;
    m->unk_04 = p + (((V *)m)->v1() - 1);
    p->unk_04 = m;
    m->unk_04->unk_00 = (E *)m;
    for (i = 1; i < ((V *)m)->v1(); i++) {
        e = p;
        p++;
        e->unk_00 = p;
        p->unk_04 = e;
    }
    m->unk_A18 = m;
    m->unk_A1C = 0;
    m->unk_A10 = &m->unk_A10;
    m->unk_A14 = &m->unk_A10;
    m->unk_A20 = W(b);
    return arg0;
}

}
