#include "common.h"

u32 func_0887AFCC(void *);
extern s32 D_089F96E0[];

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    u32 unk_14;
} S;

f32 func_0887ADC8(void *arg0) {
    S *temp0 = (S *)arg0;
    f32 temp1;
    u32 temp2;
    f32 temp3;

    temp1 = (f32)temp0->unk_14 / 2.0f;
    temp2 = func_0887AFCC(arg0) >> 1;
    temp3 = (f32)(u32)*(D_089F96E0[0] < temp0->unk_0C ? &temp0->unk_0C : D_089F96E0);
    return temp1 + temp3 / (2.0f * (f32)temp2);
}
