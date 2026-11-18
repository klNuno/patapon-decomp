#include "common.h"

extern "C" {

typedef struct E_088B2260 {
    struct E_088B2260 *unk_00;
    struct E_088B2260 *unk_04;
    u8 pad_08[0x14];
} E_088B2260;

struct V_088B2260 {
    u8 pad_00[0x8];
    virtual E_088B2260 *v08();
    virtual u32 v0C();
};

typedef struct P_088B2260 {
    E_088B2260 *unk_00;
    E_088B2260 *unk_04;
    void *unk_08;
    u8 unk_0C[0x704];
    u32 unk_710;
    void *unk_714;
    void *unk_718;
    void *unk_71C;
    s32 unk_720;
} P_088B2260;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    P_088B2260 unk_08;
} S_088B2260;

extern u8 D_08A45C3C[];
extern u8 D_08A45C4C[];

S_088B2260 *func_088B2260(S_088B2260 *arg0, s32 arg1, s32 arg2) {
    P_088B2260 *p;
    E_088B2260 *e;
    E_088B2260 *prev;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08.unk_08 = D_08A45C4C;
    p = &arg0->unk_08;
    arg0->unk_08.unk_08 = D_08A45C3C;
    p->unk_710 = ((u32)p->unk_0C + 3) & ~3;
    e = ((V_088B2260 *)p)->v08();
    p->unk_00 = e;
    p->unk_04 = e + (((V_088B2260 *)p)->v0C() - 1);
    e->unk_04 = (E_088B2260 *)p;
    p->unk_04->unk_00 = (E_088B2260 *)p;
    for (i = 1; i < ((V_088B2260 *)p)->v0C(); i++) {
        prev = e;
        e++;
        prev->unk_00 = e;
        e->unk_04 = prev;
    }
    p->unk_71C = p;
    p->unk_720 = 0;
    p->unk_714 = &p->unk_714;
    p->unk_718 = &p->unk_714;
    return arg0;
}

}
