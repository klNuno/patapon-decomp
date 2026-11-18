#include "common.h"

typedef struct {
    s8 unk_00;
    s8 unk_01;
} T;

typedef struct {
    f32 unk_00[2];
} V2;

typedef struct {
    f32 unk_00[4];
} V4;

typedef struct {
    T unk_00[16];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    s16 unk_2E;
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[2];
    V2 unk_38;
    V4 unk_40;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    V4 unk_60;
    V4 unk_70;
    f32 unk_80;
    s32 unk_84[0x41];
} S;

S *func_08893EC4(S *arg0, const S *arg1) {
    const volatile T *p;
    T *q;
    s32 j;
    const s32 *r;
    s32 *s;
    s32 i;

    j = 16;
    p = arg1->unk_00;
    q = arg0->unk_00;

    do {
        s8 t;
        s8 u;

        t = p->unk_00;
        u = p->unk_01;
        q->unk_00 = t;
        q->unk_01 = u;
        p++;
        q++;
    } while (--j > 0);
    arg0->unk_20 = arg1->unk_20;
    arg0->unk_24 = arg1->unk_24;
    arg0->unk_26 = arg1->unk_26;
    arg0->unk_28 = arg1->unk_28;
    arg0->unk_2A = arg1->unk_2A;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_2E = arg1->unk_2E;
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_54 = arg1->unk_54;
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_5C = arg1->unk_5C;
    arg0->unk_60 = arg1->unk_60;
    arg0->unk_70 = arg1->unk_70;
    arg0->unk_80 = arg1->unk_80;
    r = arg1->unk_84;
    s = arg0->unk_84;
    i = 0x41;
    do {
        *s++ = *r++;
    } while (--i > 0);
    return arg0;
}
