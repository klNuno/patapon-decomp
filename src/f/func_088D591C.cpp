#include "common.h"

extern "C" {

typedef struct E {
    struct E *unk_00;
    void *unk_04;
    u8 pad_08[0x58];
} E;

class V {
public:
    E *unk_00;
    E *unk_04;
    virtual E *v0();
    virtual u32 v1();
};

typedef struct M {
    E *unk_00;
    E *unk_04;
    void *unk_08;
    u8 unk_0C[0xC10];
    u32 unk_C1C;
    void *unk_C20;
    void *unk_C24;
    void *unk_C28;
    s32 unk_C2C;
} M;

typedef struct S {
    s32 unk_00;
    M unk_04;
} S;

extern char D_08A4628C[];
extern char D_08A4629C[];

S *func_088D591C(S *arg0, s32 arg1) {
    M *m;
    E *p;
    E *e;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04.unk_08 = D_08A4629C;
    m = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A4628C;
    arg0->unk_04.unk_C1C = ((u32)m->unk_0C + 0xF) & ~0xF;
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
    m->unk_C28 = m;
    m->unk_C2C = 0;
    m->unk_C20 = &m->unk_C20;
    m->unk_C24 = &m->unk_C20;
    return arg0;
}

}
