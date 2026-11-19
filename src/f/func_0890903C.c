#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V;

typedef struct {
    void *volatile unk_00;
    V unk_04;
    s32 unk_10;
} Unk;

typedef struct {
    Unk *unk_00;
    s32 volatile unk_04;
    Unk unk_08;
    void *unk_1C;
} Obj;

extern u8 D_08A46358[];
extern u8 D_08A46364[];
extern u8 D_08A46850[];

Obj *func_0890903C(Obj *arg0, s32 arg1, const V *arg2)
{
    volatile V temp;
    Unk *p;

    temp = *arg2;
    arg0->unk_1C = D_08A46364;
    arg0->unk_04 = 0;
    p = &arg0->unk_08;
    arg0->unk_04 = 0;
    if (p != NULL) {
        p->unk_00 = D_08A46358;
        p->unk_00 = D_08A46850;
        p->unk_04 = *(V *)&temp;
        p->unk_10 = arg1;
    }
    arg0->unk_00 = p;
    return arg0;
}
