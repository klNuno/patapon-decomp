#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x34];
    s32 unk_34;
};

struct B {
    u8 pad_00[0xC];
    s32 unk_0C;
};

struct P_08956380 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    f32 unk_14;
};

struct E {};

struct F {
    E unk_00;
    u8 pad_01[3];
};

struct V {
    A **unk_00;
    u32 unk_04;

    void unk_08(A *arg0, u32 arg1, E arg2);
};

void func_0895276C(s32 *, s32 *, s32 *, E);

inline void V::unk_08(A *arg0, u32 arg1, E arg2) {
    if (arg1 < 2U) {
        u32 off = *(volatile u32 *)&unk_04 * sizeof(A *);
        A **p = (A **)((u8 *)unk_00 + off);
        p[-1] = NULL;
    }
    volatile u32 *n = &unk_04;
    A **volatile *b = &unk_00;
    u32 k = *(volatile u32 *)&unk_04;
    A **p = unk_00;
    u32 off = k * sizeof(A *);
    A **q = p + 1;
    A **r = (A **)((u8 *)p + off);
    if (p != q && q != r) {
        func_0895276C((s32 *)p, (s32 *)q, (s32 *)r, arg2);
    }
    u32 off2 = *n * sizeof(A *);
    A **q2 = (A **)((u8 *)*b + off2);
    q2[-1] = arg0;
}

struct T {
    u8 pad_00[4];
    char *unk_04;
    u8 pad_08[0x10];
    B *unk_18;
    u8 pad_1C[0x1C4];
    s32 unk_1E0;
    u8 pad_1E4[4];
    u32 unk_1E8;
    u8 unk_1EC[0x104];
    u8 *unk_2F0;
    u32 unk_2F4;
    u8 unk_2F8[0xC];
    V unk_304;
    u8 unk_30C[0x884];
    u8 unk_B90[0x1A20];
    f32 unk_25B0;
    s32 unk_25B4;
    u8 pad_25B8[4];
    A *unk_25BC;
    f32 unk_25C0;
    u32 unk_25C4;
    u32 unk_25C8;
    u8 unk_25CC[0x24];
    s32 unk_25F0;
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
void func_08879610(void *, s32);
void func_0887A12C(void *, s32);
char *func_0888AA58(char *);
P_08956380 *func_0888AA78(P_08956380 *, s32, s32, s32, s32, s32, f32);
void func_088A3A88(void *, P_08956380 *);
void func_088A3B14(void *, P_08956380 *);
f32 func_0894B664(s32);
void func_0894B700(void *, void *, void *, u32);
f32 func_0894BB3C(s32, void *);
s32 func_0894BDF4(void *);
void func_08951C88(T *, A *, f32);
s32 func_08952574(char *);
void func_08952584(T *);
s32 func_089525B4(s32 *);
void func_08956270(char *);
extern u32 D_08A04650[];

void func_08951F40(T *arg0, A *arg1) {
    P_08956380 a;
    P_08956380 b;
    F c;
    F d;
    F e;
    u32 n = arg0->unk_1E8;
    s32 t = n != 0;
    s32 ret = 0;

    if (t != 0) {
        t = arg0->unk_25F0 >= 0;
    }
    if (t != 0) {
        t = n < (u32)(arg0->unk_25F0 + 15);
    }
    if (t != 0) {
        if (n >= (u32)(arg0->unk_25F0 + 8)) {
            ret = 1;
        }
    }
    arg0->unk_25BC = arg1;
    if (arg1 != NULL) {
        u32 temp = arg0->unk_25C4 + 1;
        arg0->unk_25C4 = temp;
        arg0->unk_25C8 = *(temp < arg0->unk_25C8 ? &arg0->unk_25C8 : &arg0->unk_25C4);
    } else {
        arg0->unk_25C4 = 0;
    }

    if (arg1->unk_34 == 6) {
        arg0->unk_304.unk_08(arg1, arg0->unk_25C4, c.unk_00);
    } else if (ret == 0) {
        arg0->unk_304.unk_08(arg1, arg0->unk_25C4, d.unk_00);
        s32 temp = func_0894BDF4(arg0->unk_18);
        func_0894B700(arg0->unk_18, arg0->unk_2F8, arg0->unk_1EC,
                     *(arg0->unk_25C4 < D_08A04650[0] ? D_08A04650 : &arg0->unk_25C4));
        if (arg0->unk_18->unk_0C <= 0 || (temp == 2 && func_0894BDF4(arg0->unk_18) != 2)) {
            arg0->unk_25C4 = 1;
            func_08956270(arg0->unk_04);
            func_08952584(arg0);
            func_08878864(func_089B53D8(func_088586E8()), 0x30104, 2, 1.0f, 0.0f, 0.0f);
        } else if (func_0894BDF4(arg0->unk_18) == 2) {
            arg0->unk_25C4 = 25;
        }
    } else {
        arg0->unk_304.unk_08(arg1, arg0->unk_25C4, e.unk_00);
    }
    arg0->unk_25B0 = func_0894B664(func_08952574((char *)arg0));
    f32 temp = func_0894BB3C(func_08952574((char *)arg0), arg0->unk_1EC);
    if (ret != 0) {
        ret = arg1->unk_34;
        s32 temp2 = func_089525B4((s32 *)arg0);
        if (ret != -1) {
            func_0888AA78(&a, (s32)arg1, arg0->unk_1E0, 0, 0, -1, 1.0f);
            func_088A3B14(arg0->unk_25CC, &a);
            func_0887A12C(arg0->unk_B90, 1);
        } else {
            func_0887A12C(arg0->unk_B90, 0);
            func_088A3A88(arg0->unk_25CC, (P_08956380 *)func_0888AA58((char *)&b));
        }
        func_08879610(arg0->unk_30C, temp2);
        arg0->unk_25B4 = temp2;
        arg0->unk_1E8 = 0;
    } else {
        func_08951C88(arg0, arg1, temp);
        arg0->unk_25C0 = temp;
    }

    u8 *p;
    u32 off;
    u8 **v;
    p = arg0->unk_2F0;
    v = &arg0->unk_2F0;
    off = arg0->unk_2F4 << 5;
    if ((u32)p != (u32)(p + off)) {
        u8 *q = *(u8 *volatile *)v + off;
        do {
            p += 0x20;
        } while (p != q);
    }
    arg0->unk_2F4 = 0;
}

}
