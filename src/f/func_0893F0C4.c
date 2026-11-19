#include "common.h"

typedef struct {
    u8 pad_00[0xB0];
    f32 unk_B0;
    f32 unk_B4;
    f32 unk_B8;
    u8 pad_BC[4];
    f32 unk_C0;
    f32 unk_C4;
    f32 unk_C8;
} S;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} T;

s32 func_0893F0C4(S **arg0, T *arg1) {
    S *temp = *arg0;
    f32 temp0;
    f32 temp1;
    f32 temp2;
    f32 temp3;
    f32 temp4;
    f32 temp5;

    temp5 = temp->unk_C8;
    temp4 = temp->unk_C4;
    temp3 = temp->unk_B8;
    temp2 = temp->unk_B4;
    temp1 = temp->unk_B0;
    temp0 = temp->unk_C0;
    arg1->unk_00 = temp0;
    arg1->unk_04 = temp4;
    arg1->unk_08 = temp5;
    arg1->unk_0C = 1.0f;
    arg1->unk_10 = temp1;
    arg1->unk_14 = temp2;
    arg1->unk_18 = temp3;
    arg1->unk_1C = 1.0f;
    return 1;
}
