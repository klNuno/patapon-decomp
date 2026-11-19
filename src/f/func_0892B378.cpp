#include "common.h"

extern "C" {

struct A {
    f32 unk_00;
    f32 unk_04;
};

class C;

struct S {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[0x14];
    s32 unk_64;
    u8 pad_68[0x24];
    f32 unk_8C;
    s32 unk_90;
    char unk_94[1];
};

struct T;
struct N_08882F6C {
    u8 pad_00[0x28];
    u8 *unk_28;
    u8 pad_2C[0x18];
    void (*unk_44)(void);
    s32 unk_48;
    T *unk_4C;
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
};
struct V {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};
struct W {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};
struct U {
    u8 unk_00;
    u8 pad_01[3];
    s32 unk_04;
    s32 unk_08;
    u8 pad_0C[0x10];
};

struct T {
    u8 pad_00[0x170];
    u8 unk_170[0x18];
    u8 unk_188[0x18];
    char unk_1A0[0xB0];
    u8 unk_250[0x50];
    s32 unk_2A0;
    u8 pad_2A4[0xC];
    char unk_2B0[0x40];
    s32 unk_2F0;
    s32 unk_2F4;
    s32 *unk_2F8;
    u8 pad_2FC[4];
    char unk_300[0xA0];
    U unk_3A0;
    U unk_3BC;
    U unk_3D8;
    u8 unk_3F4;
    u8 pad_3F5[3];
    s32 unk_3F8;
    s32 unk_3FC;
    s32 unk_400;
    f32 unk_404;
    s32 unk_408;
    N_08882F6C *unk_40C;
    s32 unk_410;
    s32 unk_414;
    u8 pad_418[0x100];
    s32 unk_518;
    s32 unk_51C;
    s32 unk_520;
    s32 unk_524;
    s32 unk_528;
    s32 unk_52C;
    u8 pad_530[0x18];
    s32 unk_548;
    s32 unk_54C;
    u8 pad_550[0x28];
    u8 unk_578;
    u8 pad_579[3];
    s32 unk_57C;
    s32 unk_580;
    u8 pad_584[4];
    char unk_588[0x40];
    s32 unk_5C8;
    u8 unk_5CC;
    u8 pad_5CD;
    u8 unk_5CE;
    u8 unk_5CF;
    u8 unk_5D0;
};

extern char D_08A029D8[];
extern u8 *D_08AD1E28[];

void func_08822918(char *, char *);
u32 func_08822BC4(char *);
void func_08822D5C(char *, char *, s32);
void func_08855354(char *);
s32 func_0885A680(void);
char *func_08864E80(char *, char *);
void func_08865FE4(s32, s32);
void func_08865FEC(char *, s32, s32);
s32 func_08868CAC(void *, s32, char *, s32);
void func_08882F6C(N_08882F6C *, u8);
void func_088830C8(u8 *, void *, void *);
void func_08883150(N_08882F6C *);
s32 func_0892ABD8(s32);
s32 func_0892AE70(char *);
s32 func_0892AE78(char **);
s32 func_0892AE88(s32 *);
s32 func_0892AE90(char *);
void func_0892AE98(void);
void func_0892C02C(char *, s32);
N_08882F6C *func_089317E4(s32, s32);
void func_08932DA4(C *, const A *, const A *);
void func_089D46C4(char *);

static inline void func_inline(char *arg0, s32 arg1) {
    if (arg0 != NULL) {
        do {
            *arg0++ = 0;
        } while (--arg1 != 0);
    }
}

static inline u8 *func_inline2(void) {
    u8 *p = D_08AD1E28[0];
    return p != NULL ? p : NULL;
}

void func_0892B378(T *arg0, s32 *arg1, const A *arg2, const A *arg3, s32 arg4, f32 arg5, s32 arg6) {
    char temp0[0x100];
    struct { s32 unk_00[2]; u8 pad_08[8]; } temp1;
    A temp2;
    S *p;

    func_08855354(arg0->unk_2B0);
    arg0->unk_2F0 = 0;
    arg0->unk_2F4 = 0;
    arg0->unk_414 = 0;
    arg0->unk_2F8 = arg1;
    arg0->unk_51C = ((S *)func_0892AE88(arg1))->unk_90;
    arg0->unk_520 = arg6;
    p = (S *)func_0892AE88(arg0->unk_2F8);
    func_08932DA4((C *)arg0->unk_170, arg2, arg3);
    s32 x = func_0892AE90((char *)arg0->unk_2F8);
    if (x != 0) {
        func_0892C02C((char *)arg0, x);
    }
    arg0->unk_40C = NULL;
    arg0->unk_408 = arg4;
    arg0->unk_410 = 0;
    arg0->unk_5CE = 1;
    arg0->unk_5CF = 0;
    if (p->unk_64 == 1) {
        s32 k = *(volatile s32 *)&arg0->unk_408;
        if (k != -1) {
            N_08882F6C *q = (arg0->unk_40C = func_089317E4(func_0892ABD8(arg0->unk_2A0), k));
            q->unk_44 = func_0892AE98;
            q->unk_54 = -1;
            q->unk_58 = 0;
            q->unk_48 = 0;
            func_08882F6C(*(N_08882F6C *volatile *)&arg0->unk_40C, 0);
            arg0->unk_40C->unk_4C = arg0;
            (*(N_08882F6C *volatile *)&arg0->unk_40C)->unk_50 = 8;
            f32 f = p->unk_8C;
            temp2.unk_00 = f;
            temp2.unk_04 = f;
            temp1.unk_00[0] = 0;
            temp1.unk_00[1] = 0;
            func_088830C8((u8 *)arg0->unk_40C, temp1.unk_00, &temp2);
            arg0->unk_40C->unk_28 = arg0->unk_188;
            func_08883150(*(N_08882F6C *volatile *)&arg0->unk_40C);
        }
    }
    arg0->unk_5D0 = 0;
    if ((u8)func_0892AE78((char **)arg0->unk_2F8) == 1U) {
        if (func_0892AE70((char *)arg0->unk_2F8) == 0) {
            S *q = (S *)func_0892AE88(arg0->unk_2F8);
            func_inline(temp0, 0x100);
            func_08822BC4(q->unk_94);
            func_08822D5C(temp0, q->unk_94, 0xFF);
            temp0[0xFF] = 0;
            if (func_08822BC4(temp0) != 0) {
                func_08822918(temp0, D_08A029D8);
            }
            u8 *r = func_inline2();
            s32 s = func_08868CAC(r, 6, temp0, 0);
            if (s == 0) {
                s = func_08868CAC(r, 8, temp0, 0);
            }
            if (s != 0) {
                arg0->unk_5D0 = 1;
                func_08865FE4((s32)arg0->unk_300, s);
                ((V *)arg0->unk_300)->unk_14(0, 1);
                func_08864E80(arg0->unk_300, arg0->unk_1A0);
            }
        } else {
            arg0->unk_5D0 = 1;
            func_08865FEC(arg0->unk_300, func_0892AE70((char *)arg0->unk_2F8), 1);
            ((V *)arg0->unk_300)->unk_14(0, 1);
            func_08864E80(arg0->unk_300, arg0->unk_1A0);
        }
    }
    arg0->unk_3BC.unk_00 = 0;
    arg0->unk_3BC.unk_04 = 0;
    arg0->unk_3BC.unk_08 = 0;
    arg0->unk_3D8.unk_00 = 0;
    arg0->unk_3D8.unk_04 = 0;
    arg0->unk_3D8.unk_08 = 0;
    arg0->unk_3F4 = 0;
    arg0->unk_3F8 = 0;
    arg0->unk_3FC = 0;
    arg0->unk_404 = 1.0f;
    arg0->unk_400 = 0;
    *(volatile u8 *)&arg0->unk_3A0.unk_00 = 0;
    arg0->unk_3A0.unk_04 = 0;
    *(volatile s32 *)&arg0->unk_3A0.unk_08 = 0;
    *(f32 *)&arg0->unk_3A0.unk_08 = arg5;
    arg0->unk_3A0.unk_00 = 1;
    func_089D46C4(arg0->unk_588);
    ((W *)arg0->unk_250)->unk_14(p->unk_4C);
    arg0->unk_524 = -1;
    arg0->unk_518 = func_0885A680();
    arg0->unk_528 = 0;
    arg0->unk_52C = 0;
    arg0->unk_578 = 0;
    arg0->unk_57C = 0;
    arg0->unk_580 = 0;
    arg0->unk_548 = 0;
    arg0->unk_54C = 0;
    arg0->unk_5C8 = 0;
    arg0->unk_5CC = 1;
}

}
