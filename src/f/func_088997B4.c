#include "common.h"

typedef struct { f32 unk_00[2]; } F2;
typedef struct { f32 unk_00[4]; } F4;

typedef struct {
    char unk_00[0x20];
    s32 unk_20;
    s16 unk_24;
    s16 unk_26;
    s16 unk_28;
    s16 unk_2A;
    s16 unk_2C;
    s16 unk_2E;
    s32 unk_30;
    s16 unk_34;
    u8 pad_36[0x1A];
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    char unk_60[0x20];
    s32 unk_80;
} S_08875BAC;

typedef struct {
    F4 unk_00;
    F4 unk_10;
    s32 unk_20;
} S;

typedef union {
    s32 unk_00[0x41];
    struct {
        u8 pad_00[0x28];
        s32 unk_28;
        u8 pad_2C[4];
        s32 unk_30;
        u8 pad_34[0x1C];
        S unk_50;
        S unk_74;
        u8 pad_98[0xC];
        S unk_A4;
        u8 pad_C8[0xC];
        S unk_D4;
        u8 pad_F8[0xC];
    } unk_04;
} W;

typedef struct {
    char unk_00[0x20];
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
    F2 unk_38;
    F4 unk_40;
    f32 unk_50;
    f32 unk_54;
    f32 unk_58;
    f32 unk_5C;
    S unk_60;
    W unk_84;
} T;

typedef struct {
    u8 pad_00[4];
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    char unk_18[0x40];
    volatile s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    char unk_70[0x40];
    char unk_B0[0x40];
    char unk_F0[0x40];
} E;

typedef struct {
    u32 unk_00;
    E *unk_04;
} A;

void func_08822B3C(char *, char *);
void func_08875BAC(S_08875BAC *arg0);
void func_088763F8(void *);
void func_088766F0(void *);
s32 func_0888AFAC(char *);
s32 func_088BCF68(s32 arg0);
s32 func_0893D3B0(void *);

s32 func_088997B4(u8 *arg0, T *arg1, u32 arg2) {
    A *a;
    E *p;
    T t;
    volatile s8 *src;
    s8 *dst;
    s32 n;
    s32 *sw;
    s32 *dw;
    s32 k;

    a = (A *)func_088BCF68(func_0893D3B0(arg0 + 0x378));
    if (arg1 == NULL) {
        return 0;
    }

    func_088763F8(&t.unk_60);
    func_088766F0(&t.unk_84);
    func_08875BAC((S_08875BAC *)&t);
    src = (s8 *)t.unk_00;
    n = 0x10;
    dst = (s8 *)arg1->unk_00;
    do {
        s8 x = src[0];
        s8 y = src[1];
        --n;
        dst[0] = x;
        dst[1] = y;
        src += 2;
        dst += 2;
    } while (n > 0);

    sw = t.unk_84.unk_00;
    dw = arg1->unk_84.unk_00;
    arg1->unk_20 = t.unk_20;
    k = 0x41;
    arg1->unk_24 = t.unk_24;
    arg1->unk_26 = t.unk_26;
    arg1->unk_28 = t.unk_28;
    arg1->unk_2A = t.unk_2A;
    arg1->unk_2C = t.unk_2C;
    arg1->unk_2E = t.unk_2E;
    arg1->unk_30 = t.unk_30;
    arg1->unk_34 = t.unk_34;
    arg1->unk_38 = t.unk_38;
    arg1->unk_40 = t.unk_40;
    arg1->unk_50 = t.unk_50;
    arg1->unk_54 = t.unk_54;
    arg1->unk_58 = t.unk_58;
    arg1->unk_5C = t.unk_5C;
    arg1->unk_60.unk_00 = t.unk_60.unk_00;
    arg1->unk_60.unk_10 = t.unk_60.unk_10;
    *(f32 *)&arg1->unk_60.unk_20 = *(f32 *)&t.unk_60.unk_20;
    do {
        s32 x = *sw;
        --k;
        *dw = x;
        ++sw;
        ++dw;
    } while (k > 0);

    if (arg2 >= a->unk_00) {
        return 0;
    }
    p = &a->unk_04[arg2];
    arg1->unk_20 = arg2;
    arg1->unk_50 = p->unk_04;
    arg1->unk_54 = p->unk_08;
    arg1->unk_5C = p->unk_0C;
    arg1->unk_24 = p->unk_58;
    arg1->unk_26 = p->unk_58;
    arg1->unk_84.unk_04.unk_28 = p->unk_5C;
    arg1->unk_84.unk_04.unk_30 = p->unk_60;
    arg1->unk_28 = p->unk_64;
    arg1->unk_2A = p->unk_68;
    arg1->unk_30 = p->unk_14;
    arg1->unk_34 = p->unk_6C;
    arg1->unk_60.unk_20 = func_0888AFAC(p->unk_18);
    func_08822B3C((char *)&arg1->unk_60, p->unk_18);
    arg1->unk_84.unk_04.unk_50.unk_20 = func_0888AFAC(p->unk_18);
    func_08822B3C((char *)&arg1->unk_84.unk_04.unk_50, p->unk_18);
    arg1->unk_84.unk_04.unk_74.unk_20 = func_0888AFAC(p->unk_70);
    func_08822B3C((char *)&arg1->unk_84.unk_04.unk_74, p->unk_70);
    arg1->unk_84.unk_04.unk_A4.unk_20 = func_0888AFAC(p->unk_B0);
    func_08822B3C((char *)&arg1->unk_84.unk_04.unk_A4, p->unk_B0);
    arg1->unk_84.unk_04.unk_D4.unk_20 = func_0888AFAC(p->unk_F0);
    func_08822B3C((char *)&arg1->unk_84.unk_04.unk_D4, p->unk_F0);
    return 1;
}
