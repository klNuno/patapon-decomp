#include "common.h"

typedef struct {
    u8 pad_00[0x4C];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
    u8 pad_58[4];
    f32 unk_5C;
} T;

typedef struct {
    u8 pad_00[0xCF0];
    T unk_CF0;
    u8 pad_D50[0x55C];
    u8 unk_12AC;
} S088E8FDC_Q;

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} S088E8FDC_W;

typedef struct {
    u8 pad_00[0x14];
    S088E8FDC_W *unk_14;
} S088E8FDC;

void func_08852F00(s32, s32);
s32 *func_0885356C(s32, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08894FBC(s32, s32, s32);
S088E8FDC_Q *func_08890D90(s32, s32);

void func_088E9260(S088E8FDC *arg0, s32 arg1) {
    s32 *temp, *temp1, *temp2, *temp3, *temp4;
    f32 *temp5;
    s32 *temp6;
    S088E8FDC_W *temp7;
    s32 temp8;
    S088E8FDC_Q *temp9;
    T *temp10;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp1 = func_0885356C(arg1, 1, 1, 4);
    temp2 = func_0885356C(arg1, 2, 1, 4);
    temp3 = func_0885356C(arg1, 3, 1, 4);
    temp4 = func_0885356C(arg1, 4, 1, 4);
    temp5 = (f32 *)func_0885356C(arg1, 5, 1, 4);
    temp6 = func_0885356C(arg1, 6, 1, 4);
    temp7 = arg0->unk_14;
    if (temp7 != NULL && (*temp == 0 || *temp == 1U)) {
        temp8 = func_08894FBC(func_08899E18(temp7->unk_36B10, *temp), *temp1, 1);
        if (temp8 != 0) {
            temp9 = func_08890D90(temp8, *temp2);
            if (temp9 != NULL) {
                temp10 = &temp9->unk_CF0;
                *temp3 = temp10->unk_4C;
                *temp4 = (u8)(temp10->unk_5C <= temp10->unk_54);
                *temp5 = (f32)(s32)temp10->unk_54;
                *temp6 = temp9->unk_12AC;
            }
        }
    }
    func_08852F00(arg1, 0);
}
