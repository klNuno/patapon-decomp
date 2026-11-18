#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    u32 unk_0C;
    u8 pad_10[8];
    u32 unk_18;
} S;

typedef struct {
    u8 pad_00[0x3C];
    S *unk_3C;
} T;

u32 func_0889C3B8(T *arg0, u32 arg1) {
    S *temp0;
    f32 temp1;
    f32 temp2;

    temp0 = arg0->unk_3C;
    if (temp0 == NULL) {
        return 120;
    }
    temp1 = (f32)temp0->unk_18;
    temp2 = 1000000.0f / (f32)arg1;
    return (u32)((f32)temp0->unk_0C * (temp1 * temp2));
}
