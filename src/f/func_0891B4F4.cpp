#include "common.h"

extern "C" {
struct A;
typedef u8 (A::*P)(u32, bool);

typedef struct {
    f32 unk_00;
    P unk_04;
} E;

typedef struct {
    E *unk_00;
    s32 unk_04;
} N;

typedef struct {
    s32 unk_00;
} I_0891B8D4;

typedef struct {
    u8 pad_00[0x10];
} L_0891B8D4;

typedef struct {
    u8 pad_00[0x90];
    A *unk_90;
    u8 pad_94[0x220];
    L_0891B8D4 unk_2B4;
    f32 unk_2C4;
    A *unk_2C8;
    u8 pad_2CC[0x220];
    L_0891B8D4 unk_4EC;
    f32 unk_4FC;
    A *unk_500;
    u8 pad_504[0x220];
    L_0891B8D4 unk_724;
    f32 unk_734;
    u8 pad_738[0x3088];
    char unk_37C0[0x1445];
    u8 unk_4C05;
    u8 unk_4C06;
    u8 pad_4C07[1];
    s32 unk_4C08;
} T;

s32 func_08913AE0(char *);
void func_0891AEB4(s32 *, s32 *);
void func_0891AEAC(s32 *, s32);
s32 func_0891B898(s32 *, s32 *);
void func_0891B8B0(s32 *);
s32 *func_0891B8C4(s32 *arg0, s32 *arg1);
void func_0891B8D4(I_0891B8D4 *, L_0891B8D4 *, s32);
s32 func_0891B964(s32 *arg0);

void func_0891B4F4(T *arg0, u32 arg1) {
    if (arg0->unk_4C05 != 0) {
        switch (arg0->unk_4C08) {
        case 2: {
            I_0891B8D4 temp;
            I_0891B8D4 temp2;
            I_0891B8D4 temp3;
            f32 temp4;

            func_0891AEB4(&temp.unk_00, (s32 *)&arg0->unk_4EC);
            func_0891AEAC((s32 *)(u32)&temp2, (s32)((u8 *)arg0 + 0x4EC));
            if (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0) {
                do {
                    N *temp5 = (N *)func_0891B964(&temp.unk_00);
                    u8 temp6 = 0;
                    if (temp5->unk_00->unk_00 < arg0->unk_4FC) {
                        temp6 = (arg0->unk_2C8->*temp5->unk_00->unk_04)(arg1, temp5->unk_04 == 0);
                        temp5->unk_04 = 1;
                    }
                    if (temp6 == 1) {
                        func_0891B8D4(&temp3, &arg0->unk_4EC, temp.unk_00);
                        func_0891B8C4(&temp.unk_00, &temp3.unk_00);
                    } else {
                        func_0891B8B0(&temp.unk_00);
                    }
                } while (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0);
            }
            temp4 = (f32)arg1;
            temp4 /= 4800.0f;
            arg0->unk_4FC += temp4;
            break;
        }
        case 1: {
            I_0891B8D4 temp;
            I_0891B8D4 temp2;
            I_0891B8D4 temp3;
            f32 temp4;

            func_0891AEB4(&temp.unk_00, (s32 *)&arg0->unk_2B4);
            func_0891AEAC((s32 *)(u32)&temp2, (s32)((u8 *)arg0 + 0x2B4));
            if (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0) {
                do {
                    N *temp5 = (N *)func_0891B964(&temp.unk_00);
                    u8 temp6 = 0;
                    if (temp5->unk_00->unk_00 < arg0->unk_2C4) {
                        temp6 = (arg0->unk_90->*temp5->unk_00->unk_04)(arg1, temp5->unk_04 == 0);
                        temp5->unk_04 = 1;
                    }
                    if (temp6 == 1) {
                        func_0891B8D4(&temp3, &arg0->unk_2B4, temp.unk_00);
                        func_0891B8C4(&temp.unk_00, &temp3.unk_00);
                    } else {
                        func_0891B8B0(&temp.unk_00);
                    }
                } while (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0);
            }
            temp4 = (f32)arg1;
            temp4 /= 4800.0f;
            arg0->unk_2C4 += temp4;
            break;
        }
        case 3: {
            I_0891B8D4 temp;
            I_0891B8D4 temp2;
            I_0891B8D4 temp3;
            f32 temp4;

            func_0891AEB4(&temp.unk_00, (s32 *)&arg0->unk_724);
            func_0891AEAC((s32 *)(u32)&temp2, (s32)((u8 *)arg0 + 0x724));
            if (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0) {
                do {
                    N *temp5 = (N *)func_0891B964(&temp.unk_00);
                    u8 temp6 = 0;
                    if (temp5->unk_00->unk_00 < arg0->unk_734) {
                        temp6 = (arg0->unk_500->*temp5->unk_00->unk_04)(arg1, temp5->unk_04 == 0);
                        temp5->unk_04 = 1;
                    }
                    if (temp6 == 1) {
                        func_0891B8D4(&temp3, &arg0->unk_724, temp.unk_00);
                        func_0891B8C4(&temp.unk_00, &temp3.unk_00);
                    } else {
                        func_0891B8B0(&temp.unk_00);
                    }
                } while (func_0891B898(&temp.unk_00, &temp2.unk_00) != 0);
            }
            temp4 = (f32)arg1;
            temp4 /= 4800.0f;
            arg0->unk_734 += temp4;
            if (func_08913AE0(arg0->unk_37C0) != 0) {
                arg0->unk_4C06 = 1;
            }
            break;
        }
        }
    }
}
}
