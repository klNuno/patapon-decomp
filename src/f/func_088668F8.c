#include "common.h"

typedef struct { f32 unk_00, unk_04; } V;
typedef struct { f32 unk_00, unk_04, unk_08, unk_0C; } W;
typedef struct { f32 unk_00[16]; } M_0887DB48;
typedef struct { u8 pad_00[0x20]; s32 unk_20; } R_08866690;
typedef struct {
    u8 pad_00[0x28];
    f32 unk_28;
    union { f32 unk_00; s32 unk_04; } unk_2C;
    W unk_30;
    s32 unk_40, unk_44, unk_48, unk_4C, unk_50;
    u8 pad_54[4];
    s32 unk_58, unk_5C, unk_60;
    u8 pad_64[4];
    s32 unk_68;
} T;
typedef struct {
    s32 unk_00, unk_04, unk_08, unk_0C;
    u8 pad_10[4];
    u8 unk_14;
    u8 pad_15[0xB];
    M_0887DB48 unk_20, unk_60, unk_A0;
    s32 unk_E0;
    V unk_E4, unk_EC;
    W unk_F4;
    u8 pad_104[0xC];
    f32 unk_110, unk_114, unk_118, unk_11C;
} S;

void func_08855354(M_0887DB48 *);
extern s32 func_088554A0(s32, s32, s32);
R_08866690 *func_0885AAF8(s32);
s32 func_0885AB7C(s32, s32, s32);
void func_08866B54(void *, s32, s32);
s32 func_08866B80(M_0887DB48 *, s32);
void func_08866C54(void *, s32, s32);

s32 func_088668F8(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp11, temp12;
    M_0887DB48 temp;
    T *temp2;
    T *temp3;
    s32 temp4;
    f32 temp5, temp6, temp7, temp8, temp9, temp10;
    arg0->unk_04 = arg1;
    arg0->unk_00 = arg2;
    arg0->unk_08 = arg3;
    func_0885AAF8(arg0->unk_04);
    temp3 = NULL;
    func_08855354(&arg0->unk_60);
    func_08855354(&arg0->unk_A0);
    temp4 = arg0->unk_08;
    temp2 = (T *)func_0885AB7C(arg0->unk_04, 0, temp4);
    temp6 = temp2->unk_30.unk_0C;
    temp5 = temp2->unk_30.unk_08;
    arg0->unk_E4.unk_00 = 0.0f;
    arg0->unk_E4.unk_04 = 0.0f;
    arg0->unk_EC.unk_00 = temp5;
    arg0->unk_EC.unk_04 = temp6;
    temp4 = temp2->unk_50;
    arg0->unk_E0 = temp4;
    if (temp4 >= 0) {
        temp3 = (T *)func_0885AB7C(arg0->unk_04, 2, temp4);
    }
    if (temp3 != NULL) {
        arg0->unk_E0 = temp3->unk_2C.unk_04;
        temp7 = temp3->unk_30.unk_0C;
        temp8 = temp3->unk_30.unk_08;
        temp9 = temp3->unk_30.unk_04;
        temp10 = temp3->unk_30.unk_00;
        arg0->unk_F4.unk_00 = temp10;
        arg0->unk_F4.unk_04 = temp9;
        arg0->unk_F4.unk_08 = temp8;
        arg0->unk_F4.unk_0C = temp7;
        if (temp2->unk_68 != 0) {
            arg0->unk_EC.unk_00 = temp3->unk_30.unk_08;
            arg0->unk_EC.unk_04 = temp3->unk_30.unk_0C;
        }
    }
    if (temp2->unk_5C != 0) {
        arg0->unk_E4.unk_00 -= arg0->unk_EC.unk_00 / 2.0f;
        arg0->unk_E4.unk_04 -= arg0->unk_EC.unk_04 / 2.0f;
    }
    arg0->unk_E4.unk_00 += temp2->unk_28;
    arg0->unk_E4.unk_04 += temp2->unk_2C.unk_00;
    arg0->unk_110 = (f32)temp2->unk_40 / 255.0f;
    arg0->unk_114 = (f32)temp2->unk_44 / 255.0f;
    arg0->unk_118 = (f32)temp2->unk_48 / 255.0f;
    arg0->unk_11C = (f32)temp2->unk_4C / 255.0f;
    temp12 = temp2->unk_30.unk_04;
    temp11 = temp2->unk_30.unk_00;
    func_08855354(&arg0->unk_20);
    arg0->unk_20.unk_00[12] = temp11;
    arg0->unk_20.unk_00[13] = temp12;
    func_088554A0((s32)&temp, (s32)&arg0->unk_60, (s32)&arg0->unk_20);
    func_08866B54(&arg0->unk_A0, 0, func_08866B80(&temp, 0));
    func_08866B54(&arg0->unk_A0, 1, func_08866B80(&temp, 1));
    func_08866B54(&arg0->unk_A0, 2, func_08866B80(&temp, 2));
    func_08866B54(&arg0->unk_A0, 3, func_08866B80(&temp, 3));
    temp4 = temp2->unk_60;
    arg0->unk_0C = temp4;
    func_08866C54(arg0, temp4, 1);
    arg0->unk_14 = temp2->unk_58 != 0;
    return 1;
}
