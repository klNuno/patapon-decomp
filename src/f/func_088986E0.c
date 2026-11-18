#include "common.h"

typedef struct {
    s8 unk_00;
    s8 unk_01;
} P;

typedef struct {
    f32 unk_00[4];
} F;

typedef struct {
    u32 unk_00;
    u32 unk_04;
} W;

typedef struct {
    P unk_00[16];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    f32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    F unk_40[4];
    W unk_80[8];
    F unk_C0[4];
    W unk_100[32];
    P unk_200[16];
    P unk_220[16];
    P unk_240[16];
} B;

typedef struct {
    u8 pad_00[0x14];
    B unk_14;
    B *unk_274;
} T;

s32 func_088986E0(T *arg0, B *arg1) {
    P *q, *p;
    s32 n;
    W *b, *a;
    s32 m;
    W *d, *c;
    s32 j;
    P *q1, *p1;
    s32 n1;
    P *q2, *p2;
    s32 n2;
    P *q3, *p3;
    s32 n3;

    if (arg1 == NULL) {
        return 0;
    }
    arg0->unk_274 = arg1;
    p = arg0->unk_14.unk_00;
    n = 16;
    q = arg1->unk_00;
    do {
        s8 x, y;
        x = *(volatile s8 *)&q->unk_00;
        y = *(volatile s8 *)&q->unk_01;
        p->unk_00 = x;
        p->unk_01 = y;
        q++;
        p++;
    } while (--n > 0);
    b = arg1->unk_80;
    a = arg0->unk_14.unk_80;
    m = 8;
    arg0->unk_14.unk_20 = arg1->unk_20;
    arg0->unk_14.unk_24 = arg1->unk_24;
    arg0->unk_14.unk_28 = arg1->unk_28;
    arg0->unk_14.unk_2C = arg1->unk_2C;
    arg0->unk_14.unk_30 = arg1->unk_30;
    arg0->unk_14.unk_34 = arg1->unk_34;
    arg0->unk_14.unk_38 = arg1->unk_38;
    arg0->unk_14.unk_3C = arg1->unk_3C;
    arg0->unk_14.unk_40[0] = arg1->unk_40[0];
    arg0->unk_14.unk_40[1] = arg1->unk_40[1];
    arg0->unk_14.unk_40[2] = arg1->unk_40[2];
    arg0->unk_14.unk_40[3] = arg1->unk_40[3];
    do {
        u32 x, y;
        x = *(volatile u32 *)&b->unk_00;
        y = *(volatile u32 *)&b->unk_04;
        a->unk_00 = x;
        a->unk_04 = y;
        b++;
        a++;
    } while (--m > 0);
    d = arg1->unk_100;
    c = arg0->unk_14.unk_100;
    j = 32;
    arg0->unk_14.unk_C0[0] = arg1->unk_C0[0];
    arg0->unk_14.unk_C0[1] = arg1->unk_C0[1];
    arg0->unk_14.unk_C0[2] = arg1->unk_C0[2];
    arg0->unk_14.unk_C0[3] = arg1->unk_C0[3];
    do {
        u32 x, y;
        x = *(volatile u32 *)&d->unk_00;
        y = *(volatile u32 *)&d->unk_04;
        c->unk_00 = x;
        c->unk_04 = y;
        d++;
        c++;
    } while (--j > 0);
    q1 = arg1->unk_200;
    p1 = arg0->unk_14.unk_200;
    n1 = 16;
    do {
        s8 x, y;
        x = *(volatile s8 *)&q1->unk_00;
        y = *(volatile s8 *)&q1->unk_01;
        p1->unk_00 = x;
        p1->unk_01 = y;
        q1++;
        p1++;
    } while (--n1 > 0);
    q2 = arg1->unk_220;
    p2 = arg0->unk_14.unk_220;
    n2 = 16;
    do {
        s8 x, y;
        x = *(volatile s8 *)&q2->unk_00;
        y = *(volatile s8 *)&q2->unk_01;
        p2->unk_00 = x;
        p2->unk_01 = y;
        q2++;
        p2++;
    } while (--n2 > 0);
    q3 = arg1->unk_240;
    p3 = arg0->unk_14.unk_240;
    n3 = 16;
    do {
        s8 x, y;
        x = *(volatile s8 *)&q3->unk_00;
        y = *(volatile s8 *)&q3->unk_01;
        p3->unk_00 = x;
        p3->unk_01 = y;
        q3++;
        p3++;
    } while (--n3 > 0);
    return 1;
}
