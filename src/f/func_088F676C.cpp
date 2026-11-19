#include "common.h"

extern "C" {

typedef struct E_088F676C {
    struct E_088F676C *unk_00;
    struct E_088F676C *unk_04;
    u8 pad_08[0x410];
} E_088F676C;

class C_088F676C {
public:
    u8 pad_00[8];
    virtual E_088F676C *v08();
    virtual u32 v0C();
};

typedef struct A_088F676C {
    u8 unk_00;
} A_088F676C;

typedef struct {
    E_088F676C *unk_00;
    E_088F676C *unk_04;
    void *unk_08;
    u8 unk_0C[0x10600];
    u8 *unk_1060C;
    void *unk_10610;
    void *unk_10614;
    void *unk_10618;
    s32 unk_1061C;
    A_088F676C unk_10620;
} P_088F676C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08[0x210];
    u8 *unk_218;
    s32 unk_21C;
    s32 unk_220;
    P_088F676C unk_224;
    s32 unk_10848;
    s32 unk_1084C;
    u8 unk_10850;
} S_088F676C;

extern char *const D_089E3318[];
extern u8 D_08A46734[];
extern u8 D_08A46724[];

s32 *func_088E5B9C(s32 *arg0, char *arg1);

S_088F676C *func_088F676C(S_088F676C *arg0, s32 arg1, s32 arg2) {
    P_088F676C *q;
    E_088F676C *p;
    E_088F676C *prev;
    u32 i;
    A_088F676C a;
    char *s;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_218 = (u8 *)(((u32)arg0->unk_08 & 0xF) + (u32)arg0 + 8);
    arg0->unk_21C = 0;
    s = D_089E3318[0];
    func_088E5B9C(&arg0->unk_220, s);
    arg0->unk_224.unk_08 = D_08A46734;
    arg0->unk_224.unk_08 = D_08A46724;
    q = &arg0->unk_224;
    q->unk_1060C = q->unk_0C;
    p = ((C_088F676C *)q)->v08();
    q->unk_00 = p;
    q->unk_04 = p + (((C_088F676C *)q)->v0C() - 1);
    p->unk_04 = (E_088F676C *)q;
    q->unk_04->unk_00 = (E_088F676C *)q;
    for (i = 1; i < ((C_088F676C *)q)->v0C(); i++) {
        prev = p;
        p++;
        prev->unk_00 = p;
        p->unk_04 = prev;
    }
    q->unk_10618 = q;
    q->unk_1061C = 0;
    q->unk_10610 = &q->unk_10610;
    q->unk_10614 = &q->unk_10610;
    const A_088F676C *temp = &a;
    A_088F676C *temp2 = &q->unk_10620;
    *(u8 *&)temp2 = *(const u8 *&)temp;
    arg0->unk_10848 = 0;
    arg0->unk_1084C = 0;
    arg0->unk_10850 = 1;
    return arg0;
}

}
