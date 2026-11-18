#include "common.h"

extern "C" {

typedef struct E_0894BE0C {
    struct E_0894BE0C *unk_00;
    struct E_0894BE0C *unk_04;
    u8 pad_08[0x18];
} E_0894BE0C;

struct V_0894BE0C {
    u8 pad_00[0x8];
    virtual E_0894BE0C *v08();
    virtual u32 v0C();
};

typedef struct P_0894BE0C {
    E_0894BE0C *unk_00;
    E_0894BE0C *unk_04;
    void *unk_08;
    u8 unk_0C[0x2004];
    u32 unk_2010;
    void *unk_2014;
    void *unk_2018;
    void *unk_201C;
    s32 unk_2020;
} P_0894BE0C;

typedef struct {
    s32 unk_00;
    P_0894BE0C unk_04;
} S_0894BE0C;

extern u8 D_08A47800[];
extern u8 D_08A47810[];
void func_0894C638(S_0894BE0C *);

S_0894BE0C *func_0894BE0C(S_0894BE0C *arg0, s32 arg1) {
    P_0894BE0C *p;
    E_0894BE0C *e;
    E_0894BE0C *prev;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04.unk_08 = D_08A47810;
    p = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A47800;
    p->unk_2010 = ((u32)p->unk_0C + 3) & ~3;
    e = ((V_0894BE0C *)p)->v08();
    p->unk_00 = e;
    p->unk_04 = e + (((V_0894BE0C *)p)->v0C() - 1);
    e->unk_04 = (E_0894BE0C *)p;
    p->unk_04->unk_00 = (E_0894BE0C *)p;
    for (i = 1; i < ((V_0894BE0C *)p)->v0C(); i++) {
        prev = e;
        e++;
        prev->unk_00 = e;
        e->unk_04 = prev;
    }
    p->unk_201C = p;
    p->unk_2020 = 0;
    p->unk_2014 = &p->unk_2014;
    p->unk_2018 = &p->unk_2014;
    func_0894C638(arg0);
    return arg0;
}

}
