#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x64C];
    s32 unk_654;
    f32 unk_658;
    u8 pad_65C[0x20CE];
    u8 unk_272A;
} Unk0;

extern f32 D_08A00980[];
s32 func_0887EDA8(s32, s32);

s32 func_0891A508(Unk0 *arg0) {
    volatile f32 temp;
    f32 temp2;
    f32 temp3;
    const volatile f32 *temp4;
    f32 temp6;

    temp2 = 25.0f * (f32)(arg0->unk_654 - 5);
    if (D_08A00980[0] < temp2) {
        temp4 = &temp2;
    } else {
        temp4 = D_08A00980;
    }
    temp6 = -*temp4;
    temp = temp6;
    temp3 = arg0->unk_658 - 1.0f;
    if (temp3 < temp6) {
        temp4 = &temp;
    } else {
        temp4 = &temp3;
    }
    if ((arg0->unk_658 = *temp4) <= temp6) {
        arg0->unk_272A = 1;
        return 1;
    }
    if (func_0887EDA8(arg0->unk_04, 0x6000) != 0) {
        arg0->unk_658 = temp6;
    }
    return 0;
}
