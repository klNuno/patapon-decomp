#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} A;

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    u16 unk_0C[8];
} E;

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    u8 pad_14[12];
} P;

typedef struct {
    u8 unk_00[4];
} B4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    B4 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    u16 unk_40;
    u16 unk_42;
} S0;

typedef struct {
    S0 unk_00;
    u8 pad_44[12];
} R;

typedef struct {
    u8 pad_00[8];
    A *unk_08;
    u8 pad_0C[12];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[0x60];
    char unk_80[0x2808];
    s32 unk_2888;
    u8 pad_288C[4];
    f32 unk_2890;
    f32 unk_2894;
    u8 pad_2898[0x3C];
    u8 unk_28D4;
    u8 pad_28D5[0x1C07];
    E *unk_44DC;
    s32 unk_44E0;
    E *unk_44E4;
} T;

typedef struct T0891E1DC T0891E1DC;

void *func_08807190(s32, void *);
void func_0881F5C0(void *, s32, s32);
f32 func_0887ADC8(void *);
void func_088AF7D0(S0 *, T *, u16, P *, f32, f32);
void func_0891E1DC(T0891E1DC *arg0, volatile u16 *arg1, s32 arg2);
S0 *func_0891E47C(S0 *arg0, S0 *arg1);
s32 func_0891E52C(char *arg0, s32 arg1);
s32 func_0891E544(char *arg0);

void func_0891E298(T *arg0, void *arg1) {
    P temp;
    R temp2;
    s32 *temp4;
    E **temp5;
    E *temp6;
    volatile u16 *temp7;
    f32 temp3;
    s32 temp8;
    A *temp9;
    f32 temp10;
    f32 temp11;
    S0 *temp12;
    u16 temp13;

    temp3 = func_0887ADC8(arg1);
    temp4 = &arg0->unk_44E0;
    temp5 = &arg0->unk_44DC;
    goto test;
    do {
        func_0881F5C0(&temp, 0, 0x20);
        temp.unk_10 = -1;
        temp9 = arg0->unk_08;
        temp10 = temp9->unk_04 + arg0->unk_1C;
        temp11 = temp9->unk_00 + arg0->unk_18;
        temp.unk_08 = temp11;
        temp.unk_0C = temp10;
        if (arg0->unk_28D4 != 0) {
            temp6 = arg0->unk_44E4;
            func_0891E1DC((T0891E1DC *)arg0, (volatile u16 *)((u32)temp6 + 12),
                         (s32)(temp6 + 1));
        }
        arg0->unk_28D4 = 0;
        temp7 = arg0->unk_44E4->unk_0C;
        for (; *temp7 != 0; temp7++) {
            temp13 = *temp7;
            if (temp13 == 0x5C) {
                temp6 = arg0->unk_44E4;
                if (temp7 == temp6->unk_0C) {
                    func_0891E1DC((T0891E1DC *)arg0, temp7 + 1, (s32)(temp6 + 1));
                    continue;
                }
                arg0->unk_28D4 = 1;
            } else if (temp13 != 0x5F) {
                func_088AF7D0(&temp2.unk_00, arg0, temp13, &temp, arg0->unk_2890, arg0->unk_2894);
                temp12 = func_08807190(0x50, (void *)func_0891E52C(arg0->unk_80, func_0891E544(arg0->unk_80)));
                if (temp12 != NULL) {
                    func_0891E47C(temp12, &temp2.unk_00);
                }
                arg0->unk_2888++;
                arg0->unk_2890 += temp2.unk_00.unk_28 + arg0->unk_18;
            }
        }
        arg0->unk_44E4++;
    test:
        temp6 = arg0->unk_44E4;
        temp8 = 1;
        if (!(temp3 >= temp6->unk_08)) {
            temp8 = 0;
        }
        if ((temp8 ^ 1) != 0) {
            return;
        }
    } while (temp6 != *temp5 + *temp4);
}

