#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} V_0890DE5C;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} K_0890DE5C;

typedef struct S_0890DE5C S_0890DE5C;

typedef struct {
    u8 pad_00[0xDA0];
    u8 unk_DA0[1];
} S0;

extern f32 D_089FF938[];
extern f32 D_089FF940[];
extern f32 D_089FF948[];
extern f32 D_089FF950[];
extern u8 D_089FF954[];

void func_0890DE5C(S_0890DE5C *arg0, K_0890DE5C *arg1, V_0890DE5C *arg2);
void func_0890DFD4(S_0890DE5C *, K_0890DE5C *, s32, u8 *, s32 *);

void func_0890BB54(S0 *arg0, K_0890DE5C *arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    V_0890DE5C a;
    volatile f32 b[6];
    s32 c[2];
    volatile u8 *p;
    s32 n;
    u8 *r;
    u32 x;

    p = (u8 *)&a;
    n = sizeof(a);
    if (p != NULL) {
        do {
            *p++ = 0;
        } while (--n);
    }
    a.unk_00 = arg2;
    a.unk_04 = arg3;
    a.unk_08 = arg4;
    a.unk_0C = arg5;
    a.unk_10 = arg6;
    a.unk_14 = arg7;
    func_0890DE5C((S_0890DE5C *)arg0->unk_DA0, arg1, &a);
    b[0] = D_089FF938[1];
    b[1] = D_089FF940[0];
    b[2] = D_089FF940[1];
    b[3] = D_089FF948[0];
    b[4] = D_089FF948[1];
    b[5] = D_089FF950[0];
    r = (u8 *)&a.unk_04;
    x = ((u32)r[3] << 24) | (((u32)r[2] << 16) | ((u32)r[0] | ((u32)r[1] << 8)));
    c[0] = 2;
    c[1] = ((volatile s32 *)b)[x];
    func_0890DFD4((S_0890DE5C *)arg0->unk_DA0, arg1, 2, D_089FF954, c);
}
