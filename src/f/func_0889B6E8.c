#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    s32 unk_04;
    u8 pad_08[0x14];
    volatile u32 unk_1C;
} S0889B620_3C;

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[0x2];
    u16 unk_12;
    u8 pad_14[0x8];
} E0889B620;

typedef struct {
    u8 pad_00[0x3C];
    S0889B620_3C *unk_3C;
    E0889B620 *unk_40;
    u8 pad_44[0x28];
    s32 unk_6C;
    s32 unk_70;
    u32 unk_74;
    s32 unk_78;
    s32 unk_7C;
    u8 pad_80[0x14];
    u32 unk_94;
} S0889B620;

s32 func_0889C3B8(S0889B620 *, s32);

void func_0889B6E8(S0889B620 *arg0, u32 arg1) {
    if (arg0->unk_3C != NULL) {
        f32 temp;
        s32 temp2;
        arg0->unk_74 = arg1;
        temp = 60000000.0f / (f32)arg1;
        temp2 = (u32)temp;
        arg0->unk_6C = func_0889C3B8(arg0, temp2);
    }
}
