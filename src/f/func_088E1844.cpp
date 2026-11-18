#include "common.h"

extern "C" {

typedef struct N_088E1844 {
    struct N_088E1844 *unk_00;
    struct N_088E1844 *unk_04;
    u8 pad_08[0x38];
} N_088E1844;

struct V_088E1844 {
    u8 pad_00[0x8];
    virtual N_088E1844 *v00();
    virtual u32 v01();
};

typedef struct S_088E1844 {
    N_088E1844 *unk_00;
    N_088E1844 *unk_04;
    void *unk_08;
    u8 unk_0C[0x2010];
    u8 *unk_201C;
    struct S_088E1844 *unk_2020;
    struct S_088E1844 *unk_2024;
    struct S_088E1844 *unk_2028;
    s32 unk_202C;
} S_088E1844;

typedef struct {
    s32 unk_00;
    S_088E1844 unk_04;
} T_088E1844;

extern u8 D_08A464F4[];
extern u8 D_08A464E4[];

T_088E1844 *func_088E1844(T_088E1844 *arg0, s32 arg1) {
    S_088E1844 *s;
    N_088E1844 *p;
    N_088E1844 *q;
    u32 i;

    arg0->unk_00 = arg1;
    arg0->unk_04.unk_08 = D_08A464F4;
    s = &arg0->unk_04;
    arg0->unk_04.unk_08 = D_08A464E4;
    arg0->unk_04.unk_201C = (u8 *)(((u32)s->unk_0C + 0xF) & ~0xF);
    p = ((V_088E1844 *)s)->v00();
    s->unk_00 = p;
    s->unk_04 = p + (((V_088E1844 *)s)->v01() - 1);
    p->unk_04 = (N_088E1844 *)s;
    s->unk_04->unk_00 = (N_088E1844 *)s;
    for (i = 1; i < ((V_088E1844 *)s)->v01(); i++) {
        q = p;
        p++;
        q->unk_00 = p;
        p->unk_04 = q;
    }
    s->unk_2028 = s;
    s->unk_202C = 0;
    s->unk_2020 = (S_088E1844 *)&s->unk_2020;
    s->unk_2024 = (S_088E1844 *)&s->unk_2020;
    return arg0;
}

}
