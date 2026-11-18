#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[0x14];
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
    u8 unk_0C[0xEE0];
    void *unk_EEC;
    void *unk_EF0;
    void *unk_EF4;
    void *unk_EF8;
    s32 unk_EFC;
    W unk_F00;
} M;

typedef struct S {
    s32 unk_00;
    s32 unk_04;
    M unk_08;
} S;

extern u8 D_08A48014[];
extern u8 D_08A48004[];

S *func_0897A320(S *arg0, s32 arg1, s32 arg2) {
    M *m;
    E *p;
    E *e;
    u32 i;
    Z b;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08.unk_08 = D_08A48014;
    m = &arg0->unk_08;
    arg0->unk_08.unk_08 = D_08A48004;
    arg0->unk_08.unk_EEC = m->unk_0C;
    p = ((V *)&arg0->unk_08)->v0();
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
    m->unk_EF8 = m;
    m->unk_EFC = 0;
    m->unk_EF0 = &m->unk_EF0;
    m->unk_EF4 = &m->unk_EF0;
    m->unk_F00 = W(b);
    return arg0;
}

}
