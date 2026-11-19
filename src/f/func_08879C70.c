#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[8];
    u32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
} Unk1;

typedef struct {
    u8 pad_00[0x104];
    Unk1 *unk_104;
    s32 unk_108;
} Unk0;

s32 func_08879C70(Unk0 *arg0) {
    s32 temp2;
    s32 temp3;
    s32 temp4;
    s32 temp5;
    Unk1 *temp;

    temp = arg0->unk_104;
    temp2 = 0;
    temp3 = 0;
    temp4 = 0;
    temp5 = 0;
    if ((u32)temp != (u32)(temp + arg0->unk_108)) {
        volatile s32 *temp6 = &arg0->unk_108;
        Unk1 *volatile *temp7 = &arg0->unk_104;
        u32 temp11;
        Unk1 *temp12;
        do {
            if (temp->unk_0C < 2U) {
                if (temp->unk_00 != 0) {
                    f32 temp9 = (f32)temp4;
                    s32 temp10 = temp->unk_10;
                    f32 temp8;
                    temp5++;
                    temp8 = (f32)temp10 / 10.0f;
                    temp4 = (s32)(temp9 + temp8 * temp8);
                }
            } else {
                f32 temp9 = (f32)temp2;
                s32 temp10 = temp->unk_10;
                f32 temp8;
                temp3++;
                temp8 = (f32)temp10 / 10.0f;
                temp2 = (s32)(temp9 + temp8 * temp8);
            }
            temp11 = (u32)*temp6 << 5;
            temp12 = *temp7;
            temp++;
        } while (temp != (Unk1 *)((u32)temp12 + temp11));
    }
    temp3 = 4 - temp3;
    if (temp5 > 0) {
        temp2 += (s32)((f32)temp4 * ((f32)temp3 / (f32)temp5));
    }
    return temp2;
}
