#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x40];
} Unk0897CD60;

extern void func_0883DABC(s32, s32, s32);
extern f32 D_08A05938[];
extern f32 D_08A0593C[];
extern f32 D_08A05940[];
extern f32 D_08A05944[];

void func_0897CD60(Unk0897CD60 *arg0, s32 arg1) {
    f32 temp1C;
    f32 temp18;
    f32 temp14;
    f32 temp10;

    if (arg1 == -1) {
        s32 i = 0;
        Unk0897CD60 *temp0 = arg0;
        Unk0897CD60 *temp1 = arg0;
        do {
            f32 *temp2;
            f32 *temp3;
            f32 temp4 = temp0->unk_08;
            f32 temp6;
            f32 temp5 = temp0->unk_00;
            f32 temp7;
            f32 temp8;

            temp1C = 1.0f - temp4;
            if (*D_08A05938 < temp1C) {
                temp2 = D_08A05938;
            } else {
                temp2 = &temp1C;
            }
            temp6 = *temp2;
            temp18 = 1.0f + temp4;
            if (*D_08A0593C < temp18) {
                temp3 = D_08A0593C;
            } else {
                temp3 = &temp18;
            }
            temp7 = *temp3;
            temp8 = 128.0f * temp5;
            temp1->unk_04 = temp5;
            func_0883DABC(temp1->unk_10, (s32)(temp8 * temp6), (s32)(temp8 * temp7));
            i++;
            temp0++;
            temp1++;
        } while (i < 10);
    } else {
        Unk0897CD60 *temp0 = &arg0[arg1];
        f32 temp6;
        f32 temp4 = temp0->unk_00;
        f32 temp5 = temp0->unk_08;
        f32 *temp2;
        f32 *temp3;
        f32 temp7;
        f32 temp8;

        temp14 = 1.0f - temp5;
        if (*D_08A05940 < temp14) {
            temp2 = D_08A05940;
        } else {
            temp2 = &temp14;
        }
        temp6 = *temp2;
        temp10 = 1.0f + temp5;
        if (*D_08A05944 < temp10) {
            temp3 = D_08A05944;
        } else {
            temp3 = &temp10;
        }
        temp7 = *temp3;
        arg0[arg1].unk_0C = temp5;
        temp8 = 128.0f * temp4;
        func_0883DABC(arg0[arg1].unk_10, (s32)(temp8 * temp6), (s32)(temp8 * temp7));
    }
}
