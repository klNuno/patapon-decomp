#include "common.h"

typedef struct {
    u8 pad_00[4];
    u8 *unk_04;
} T;

typedef struct {
    u32 unk_00[3];
} U;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S7_0896FDA0;

typedef struct {
    S7_0896FDA0 *unk_00;
    s32 unk_04;
} Obj_0896FDA0;

T *func_08852FFC(s32);
void func_0896FDA0(Obj_0896FDA0 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
extern const U D_08A05300[];

static inline s32 unk_00(u8 *p, u32 x)
{
    return (p[x >> 3] >> (x & 7)) & 1;
}

void func_0896EF84(Obj_0896FDA0 *arg0)
{
    U x;
    U y;
    U z;
    s32 i;
    u32 *a;
    u32 *b;
    u32 *c;
    T *t;

    t = func_08852FFC(arg0->unk_04);
    x = D_08A05300[0];
    a = x.unk_00;
    y = D_08A05300[1];
    b = y.unk_00;
    z = D_08A05300[2];
    c = z.unk_00;
    i = 0;
    do {
        u8 *p = t->unk_04;
        u8 changed = 0;
        if (unk_00(p, *a) == 0 && unk_00(p, *b) == 0) {
            u32 j = *c;
            u8 *q = p + (j >> 3);
            u8 v = *q;
            if (((v >> (j & 7)) & 1) == 1) {
                *q = v & (u8)((1 << (j & 7)) ^ 0xFF);
                changed = 1;
            }
        } else {
            u32 j = *c;
            u8 *q = p + (j >> 3);
            u8 v = *q;
            if (((v >> (j & 7)) & 1) == 0) {
                *q = v | (u8)(1 << (j & 7));
                changed = 1;
            }
        }
        if (changed == 1) {
            if (unk_00(t->unk_04, *c) == 1) {
                func_0896FDA0(arg0, 0, i, 1, 0x2E);
                func_0896FDA0(arg0, 0, i, 2, 0x2D);
            } else {
                func_0896FDA0(arg0, 0, i, 1, 2);
                func_0896FDA0(arg0, 0, i, 2, 2);
            }
        }
        i++;
        a++;
        b++;
        c++;
    } while (i < 3);
}
