#include "common.h"

extern "C" {

typedef struct E_0897BA58 {
    struct E_0897BA58 *unk_00;
    struct E_0897BA58 *unk_04;
    u8 pad_08[0x18];
} E_0897BA58;

struct V_0897BA58 {
    u8 pad_00[8];
    virtual E_0897BA58 *v0();
    virtual u32 v1();
};

typedef struct S_0897BA58 {
    E_0897BA58 *unk_00;
    E_0897BA58 *unk_04;
    void *unk_08;
    u8 unk_0C[0x84];
    void *unk_90;
    void *unk_94;
    void *unk_98;
    void *unk_9C;
    s32 unk_A0;
} S_0897BA58;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    S_0897BA58 unk_08;
} O_0897BA58;

extern u8 D_08A48040[];
extern u8 D_08A48050[];

O_0897BA58 *func_0897BA58(O_0897BA58 *arg0, s32 arg1, s32 arg2) {
    S_0897BA58 *s;
    E_0897BA58 *e;
    E_0897BA58 *p;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08.unk_08 = D_08A48050;
    s = &arg0->unk_08;
    arg0->unk_08.unk_08 = D_08A48040;
    arg0->unk_08.unk_90 = (void *)(((u32)s->unk_0C + 3) & ~3);
    e = ((V_0897BA58 *)s)->v0();
    s->unk_00 = e;
    s->unk_04 = e + (((V_0897BA58 *)s)->v1() - 1);
    e->unk_04 = (E_0897BA58 *)s;
    s->unk_04->unk_00 = (E_0897BA58 *)s;
    for (i = 1; i < ((V_0897BA58 *)s)->v1(); i++) {
        p = e;
        e++;
        p->unk_00 = e;
        e->unk_04 = p;
    }
    s->unk_9C = s;
    s->unk_A0 = 0;
    s->unk_94 = &s->unk_94;
    s->unk_98 = &s->unk_94;
    return arg0;
}

}
