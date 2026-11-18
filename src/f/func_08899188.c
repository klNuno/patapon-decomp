#include "common.h"

typedef struct {
    u8 pad_00[0x14A0];
    s32 unk_14A0;
} G;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 *unk_0C;
    s32 unk_10;
} A;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    u8 pad_28[6];
    s16 unk_2E;
    u8 pad_30[0x30];
    char unk_60[0x20];
    s32 unk_80;
    u8 pad_84[0x50];
    char unk_D4[0xB4];
} B;

typedef struct {
    u8 pad_00[0x50];
    char unk_50[0xB4];
} C;

extern G *D_08AD1F14[];
extern s32 D_089DDF2C[];
extern char D_089FA544[];
extern char D_089FA4F8[];
extern char D_089FA508[];
extern s8 D_08AD22A0[];

void func_08822B3C(char *, char *);
extern s32 func_0885AB7C(s32, s32, s32);
s32 func_08877434(G *, s32);
extern int func_088836EC(s32, s32, s32, s32);
s32 func_0888AFAC(char *);
s32 func_0888B03C(s32 *, char *);
extern s32 func_0899ED9C(s32);
A *func_0899F140(s32);
A *func_0899F148(s32, s32, s32);

static inline G *func_08899188_0(void) {
    G *temp = D_08AD1F14[0];
    return temp != NULL ? temp : NULL;
}

static inline s32 func_08899188_1(s32 arg0, s32 arg1) {
    B *temp;
    s32 n;
    s32 i;
    if (arg0 == 0) {
        n = -1;
    } else {
        temp = (B *)func_0885AB7C(arg0, 1, 0);
        n = 0;
        i = 0;
        if (i < arg1) {
            do {
                if (temp->unk_26 == -1) {
                    n += temp->unk_24;
                } else {
                    n += temp->unk_26;
                }
                ++i;
                ++temp;
            } while (i < arg1);
        }
    }
    return n;
}

void func_08899188(void) {
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 a;
    s32 n;
    B *b;
    s32 i;
    s32 t;
    s32 j;
    s32 k;
    s32 v;
    C *c;
    A *p;
    char *q;
    s32 *s;

    a = func_08899188_0()->unk_14A0 + 0x264;
    func_0885AB7C(a, 0, 0);
    b = (B *)func_0885AB7C(a, 1, 0);
    c = (C *)func_0885AB7C(a, 2, 0);
    n = 0;
    i = 0;
    do {
        t = func_08877434(func_08899188_0(), i);
        p = func_0899F140(t);
        if (func_0899F140(t)->unk_04 != 0) {
            if (p->unk_0C != NULL) {
                b->unk_20 = n;
                s = p->unk_0C;
                if (*s == D_089DDF2C[0]) {
                    temp0 = (s32)s;
                    temp1 = func_0888B03C(&temp0, D_089FA544);
                    v = func_0888B03C(&temp1, D_089FA4F8);
                    D_08AD22A0[0] = 1;
                    func_088836EC((s32)&p->unk_0C, v, 6, 0);
                    D_08AD22A0[0] = 0;
                }
                if (b->unk_80 == 0) {
                    q = b->unk_D4;
                    if (b->unk_2E == 0) {
                        q = c[func_08899188_1(a, b->unk_20)].unk_50;
                    }
                    b->unk_80 = func_0888AFAC(q);
                    func_08822B3C(b->unk_60, q);
                }
                j = 0;
                do {
                    k = 0;
                    do {
                        p = func_0899F148(t, j, k);
                        if (p->unk_10 > 0) {
                            if (p->unk_04 != 0) {
                                s = p->unk_0C;
                                if (*s == D_089DDF2C[0]) {
                                    temp2 = (s32)s;
                                    func_088836EC((s32)&p->unk_0C, func_0888B03C(&temp2, D_089FA508), 6, 0);
                                }
                            }
                        }
                        ++k;
                    } while (k < 3);
                    ++j;
                } while (j < 6);
                ++n;
                ++b;
            }
        }
        ++i;
    } while (i < 3);
    i = 0;
    do {
        func_0899ED9C(func_08877434(func_08899188_0(), i));
        ++i;
    } while (i < 3);
}
