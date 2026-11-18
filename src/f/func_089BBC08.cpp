#include "common.h"

extern "C" {

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} V;

typedef struct {
    u8 pad_00[0x404];
    V unk_404;
} A;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 unk_08;
    u8 unk_09;
    u8 pad_0A[2];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 pad_24[0x16AC];
    s32 unk_16D0;
    u8 pad_16D4[0x540];
    V unk_1C14;
    A unk_1C1C;
} T;

typedef struct {
    u8 pad_00[2];
    u8 unk_02;
    u8 unk_03;
} E;

typedef struct {
    u8 pad_00[0x19CE0];
    E unk_19CE0[257];
} B;

typedef struct {
    u8 pad_00[0x1498];
    B *unk_1498;
} G;

extern u8 *D_08AD1F14[];
extern s32 D_08A08F2C[];
extern s32 D_08A08F30[];
extern s32 D_08A08F34[];
extern s32 D_08A08F38[];
extern s32 D_08A08F3C[];

s32 func_08998D18(s32);
void func_08946084(s32);
s32 func_089BBC00(void);
void func_089BCDFC(T *);

static inline void temp(V &arg0) {
    u32 n = arg0.unk_04;
    s32 *p = arg0.unk_00;
    V *q = &arg0;
    if ((u32)p != (u32)(p + n)) {
        s32 *r = *(s32 *volatile *)&q->unk_00 + n;
        do {
            p++;
        } while (p != r);
    }
    arg0.unk_04 = 0;
}

static inline const s32 &temp2(const s32 &arg0, const s32 &arg1) {
    if (*(const volatile s32 *)&arg0 < arg1) {
        return arg1;
    }
    return arg0;
}

void func_089BBC08(T *arg0, A *arg1, s32 arg2, s32 arg3) {
    s32 x;
    s32 y;
    u32 i;
    s32 j;
    s32 *r;
    E *s;
    E *t;
    s32 n;
    s32 *p;
    s32 *q;
    s32 *z;
    V *v;

    arg0->unk_08 = 1;
    arg0->unk_09 = 0;
    arg0->unk_16D0 = -1;
    arg0->unk_10 = arg2;
    arg0->unk_14 = -1;
    func_08946084(func_08998D18(arg0->unk_04));
    v = &arg0->unk_1C14;
    temp(arg0->unk_1C14);

    i = 0;
    if (func_089BBC00() != 0) {
        do {
            r = &arg0->unk_1C14.unk_00[arg0->unk_1C14.unk_04];
            if (r != NULL) {
                *r = D_08A08F2C[0];
            }
            ++i;
            ++arg0->unk_1C14.unk_04;
        } while (i < (u32)func_089BBC00());
    }
    s = ((G *)(D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL))->unk_1498->unk_19CE0;
    j = 0;
    do {
        t = &s[1];
        if (s[1].unk_02 != 0) {
            (*(s32 *volatile *)(u32)v)[*(volatile u8 *)&t->unk_03] = j;
            if (arg2 == -1 && arg3 != -1 && j == arg3) {
                n = *(volatile u8 *)&t->unk_03;
                arg0->unk_0C = n;
                arg0->unk_1C = n % 4;
                arg0->unk_20 = *(volatile s32 *)&arg0->unk_0C / 4;
                x = arg0->unk_20 - 1;
                n = temp2(D_08A08F30[0], x);
                arg0->unk_18 = n;
                arg0->unk_18 = *(n < *(volatile s32 *)D_08A08F34 ? &arg0->unk_18 : D_08A08F34);
            } else if (j == arg2) {
                arg0->unk_14 = *(volatile u8 *)&t->unk_03;
                n = *(volatile u8 *)&t->unk_03;
                arg0->unk_0C = n;
                arg0->unk_1C = n % 4;
                arg0->unk_20 = *(volatile s32 *)&arg0->unk_0C / 4;
                y = arg0->unk_20 - 1;
                n = temp2(D_08A08F38[0], y);
                arg0->unk_18 = n;
                arg0->unk_18 = *(n < *(volatile s32 *)D_08A08F3C ? &arg0->unk_18 : D_08A08F3C);
            }
        }
        ++j;
        ++s;
    } while (j < 0x100);

    func_089BCDFC(arg0);
    if (&arg0->unk_1C1C != arg1) {
        p = arg1->unk_404.unk_00;
        q = p + arg1->unk_404.unk_04;
        temp(arg0->unk_1C1C.unk_404);
        z = arg0->unk_1C1C.unk_404.unk_00;
        if (p != q) {
            do {
                if (z != NULL) {
                    *z = *p;
                }
                ++p;
                ++z;
                ++arg0->unk_1C1C.unk_404.unk_04;
            } while (p != q);
        }
    }
}

}
