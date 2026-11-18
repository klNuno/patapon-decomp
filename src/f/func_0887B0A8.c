#include "common.h"

extern s32 D_089F96E0[];
extern f32 D_089F96E8[];

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x20];
    u8 unk_30;
} S;

f32 func_0887B0A8(S *arg0, u8 *arg1) {
    f32 temp0;
    f32 temp1;
    f32 temp2;
    s32 temp3;

    temp0 = (f32)(u32)*(D_089F96E0[0] < arg0->unk_0C ? &arg0->unk_0C : D_089F96E0);
    temp1 = 9830400.0f;
    temp1 /= 2.0f;
    if (temp0 < temp1) {
        temp3 = 1;
    } else {
        temp3 = 0;
        temp0 = temp1 - (temp0 - temp1);
    }
    if (arg1 != NULL) {
        *arg1 = (u8)temp3;
    }
    if (arg0->unk_30) {
        return 0.0f;
    }
    temp2 = temp0 / temp1;
    temp2 = *(D_089F96E8[0] < temp2 ? D_089F96E8 : &temp2);
    return temp2;
}
