#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
} E;

typedef struct {
    u8 pad_00[0x1004];
    const E *unk_1004;
    s32 unk_1008;
} Unk;

typedef struct {
    u8 unk_00[0x1004];
    E *unk_1004;
    s32 unk_1008;
} A;

typedef struct {
    s32 unk_00;
    A unk_04;
} Obj;

Obj *func_0896A178(Obj *arg0, const s32 *arg1, const Unk *arg2)
{
    A *a;
    s32 n;
    const E *src;
    E *dst;
    E **p;
    s32 *q;

    arg0->unk_00 = *arg1;
    a = &arg0->unk_04;
    a->unk_1004 = (E *)((u32)a + ((u32)a & 3));
    n = arg2->unk_1008;
    a->unk_1008 = n;
    src = arg2->unk_1004;
    dst = *(E *volatile *)&arg0->unk_04.unk_1004;
    p = &a->unk_1004;
    if ((u32)dst != (u32)(dst + n)) {
        q = &a->unk_1008;
        do {
            if (dst != NULL) {
                const E *temp = src++;
                dst->unk_00 = temp->unk_00;
                dst->unk_04 = temp->unk_04;
            }
            dst++;
        } while (dst != *p + *q);
    }
    return arg0;
}
