#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x14];
} T0;

typedef struct {
    u8 pad_00[0x18];
    s32 unk_18;
} T1;

typedef struct {
    u8 pad_00[0x3C];
    T1 *unk_3C;
    T0 *unk_40;
    u8 pad_44[0x10];
    u8 unk_54;
    u8 pad_55[7];
    s32 unk_5C;
    u32 unk_60;
    u8 pad_64[0x14];
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0xC];
    f32 unk_8C;
    u8 pad_90[4];
    s32 unk_94;
} T;

void func_0889C004(T *arg0, f32 arg1, f32 arg2) {
    T0 *temp = arg0->unk_40;
    s32 temp1;
    if (temp == NULL || arg0->unk_3C == NULL) {
        return;
    }
    temp1 = arg0->unk_94;
    arg0->unk_7C = temp1;
    temp += temp1;
    arg0->unk_78 = temp->unk_04 * arg0->unk_3C->unk_18;
    arg0->unk_5C = temp->unk_00;
    arg0->unk_60 = (u32)arg2;
    arg0->unk_8C = 1.0f;
    arg0->unk_54 = 0;
}
