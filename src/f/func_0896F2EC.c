#include "common.h"

typedef struct {
    u8 pad_00[0xBB];
    u8 unk_BB;
    u8 unk_BC;
    u8 unk_BD;
    u8 unk_BE;
    u8 unk_BF;
} F;

typedef struct {
    u8 pad_00[4];
    F *unk_04;
} M;

typedef struct {
    u8 pad_00[0x36B08];
    u8 *unk_36B08;
    u8 pad_36B0C[4];
    s32 unk_36B10;
    u8 pad_36B14[0x4C];
    u8 unk_36B60[1];
} S_08873BB8;

typedef struct {
    u8 pad_00[0x92EF];
    u8 unk_92EF;
} R;

typedef struct Obj_0896FDA0 {
    S_08873BB8 *unk_00;
    s32 unk_04;
} Obj_0896FDA0;

extern f32 D_08A05320[], D_08A05328[], D_08A0532C[];
M *func_08852FFC(s32);
s32 func_08853004(s32);
s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);
void func_0896FDA0(Obj_0896FDA0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_0896FF1C(Obj_0896FDA0 *, f32);
void func_0896FF78(Obj_0896FDA0 *, s32, f32);
void func_08874610(S_08873BB8 *, s32);
s32 func_088BCF70(s32 arg0);
void func_088CFBE0(s32, s32, s32);
void func_088CFA9C(s32, s32, s32);
void func_088CF3B4(f32, s32, s32, s32);
void func_088CFD24(f32, s32, s32, s32);
void func_0896FE24(Obj_0896FDA0 *, s32);
void *func_08899E18(s32, s32);
void func_0887FCC4(char *arg0, s8 arg1);

void func_0896F2EC(Obj_0896FDA0 *arg0) {
    typedef union { f32 unk_00; u32 unk_00_2; } U;
    volatile U temp[3];
    M *p;
    s32 q;
    F *r;
    u32 f;
    M *s;
    s32 i;
    volatile U *t;
    R *u;
    s32 n;

    p = func_08852FFC(arg0->unk_04);
    q = func_08853004(arg0->unk_04);
    r = p->unk_04;
    f = r->unk_BF;
    if (((f >> 3) & 1) != 1 && ((f >> 4) & 1) != 0
        && ((r->unk_BD >> 7) & 1) != 1 && *func_0884EBA0(q, 0x19) != 0
        && !(*func_0884EBB0(q, 0x21) >= 3.5f)) {
        (*(F *volatile *)&p->unk_04)->unk_BF |= 8;
        (*(F *volatile *)&p->unk_04)->unk_BF |= 0x20;
        *func_0884EBB0(q, 0x15) = 0.0f;
        *func_0884EBA0(q, 0x20) = 0;
        (*(F *volatile *)&p->unk_04)->unk_BB &= 0xDF;
        (*(F *volatile *)&p->unk_04)->unk_BC &= 0xF7;
        (*(F *volatile *)&p->unk_04)->unk_BD &= 0xFD;
        (*(F *volatile *)&p->unk_04)->unk_BE &= 0xFD;
        (*(F *volatile *)&p->unk_04)->unk_BE &= 0xFB;
        s = func_08852FFC(arg0->unk_04);
        t = temp;
        i = 0;
        temp[0].unk_00 = D_08A05320[1];
        temp[1].unk_00 = D_08A05328[0];
        temp[2].unk_00 = D_08A0532C[0];
        do {
            u32 j = t->unk_00_2;
            if ((((s32)((u8 *)s->unk_04)[j >> 3] >> (j & 7)) & 1) == 1) {
                func_0896FDA0(arg0, 0, i, 1, 0x2E);
                func_0896FDA0(arg0, 0, i, 2, 0x2D);
            } else {
                func_0896FDA0(arg0, 0, i, 1, 2);
                func_0896FDA0(arg0, 0, i, 2, 2);
            }
            ++t;
        } while (++i < 3);
        func_0896FF1C(arg0, 0.5f);
        func_0896FF78(arg0, 0x30202, 0.0f);
        func_0896FF78(arg0, 0x30204, 0.0f);
        func_08874610(arg0->unk_00, 0);
        n = func_088BCF70((s32)arg0->unk_00->unk_36B60);
        func_088CFBE0(n, 0, 0);
        func_088CFA9C(n, 0, 0);
        func_088CF3B4(1.0f, n, 0, 0);
        func_088CFD24(1.0f, n, 0, 0xF);
        func_0896FE24(arg0, 1);
        u = (R *)func_08899E18(arg0->unk_00->unk_36B10, 0);
        u->unk_92EF = 1;
        func_0887FCC4((char *)arg0->unk_00->unk_36B08 + 0x1A00, 0);
        if (*func_0884EBA0(q, 0x19) == 1) {
            p->unk_04->unk_BF |= 0x40;
        } else {
            p->unk_04->unk_BF &= 0xBF;
        }
    }
}
