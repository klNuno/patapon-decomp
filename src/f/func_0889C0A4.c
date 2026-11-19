#include "common.h"

typedef struct {
    u8 pad_00[4];
    u32 unk_04;
    u8 pad_08[4];
    u32 unk_0C;
    u8 pad_10[8];
    u32 unk_18;
    u8 pad_1C[8];
    u32 unk_24[1];
} Unk;

typedef struct {
    u8 pad_00[0x3C];
    Unk *unk_3C;
    void *unk_40;
    u8 pad_44[0x10];
    u8 unk_54;
    u8 pad_55[3];
    u32 unk_58;
    u32 unk_5C;
    u32 unk_60;
    u32 unk_64;
    u8 pad_68[0x10];
    u32 unk_78;
    u32 unk_7C;
    u32 unk_80;
    s32 unk_84;
    u32 unk_88;
    f32 unk_8C;
} T;

void func_0889B834(T *, u32);

void func_0889C0A4(T *arg0, f32 arg1, f32 arg2) {
    s32 temp;
    s32 temp2;
    Unk *temp3;
    f32 temp4;
    u32 temp5;
    if (arg0->unk_40 == 0 || arg0->unk_3C == 0) {
        return;
    }
    temp = (s32)arg1;
    arg0->unk_8C = 1.0f;
    arg0->unk_7C = arg0->unk_3C->unk_24[temp];
    arg0->unk_78 = 0;
    temp3 = arg0->unk_3C;
    arg0->unk_58 = (u32)((f32)temp3->unk_0C * ((f32)temp3->unk_18 * arg2));
    arg0->unk_54 = 0;
    temp3 = arg0->unk_3C;
    arg0->unk_40 = (u8 *)temp3 + temp3->unk_04;
    temp5 = (u32)arg1;
    arg0->unk_5C = temp5;
    arg0->unk_60 = (u32)arg2;
    arg0->unk_64 = 0;
    arg0->unk_88 = 0;
    arg0->unk_80 = temp5;
    temp4 = arg1 - (f32)temp;
    if (temp4 > 0.0f) {
        temp2 = arg0->unk_84;
        arg0->unk_84 = -1;
        arg0->unk_58 = 0;
        temp3 = arg0->unk_3C;
        func_0889B834(arg0, (u32)(temp4 * (f32)(temp3->unk_18 * temp3->unk_0C) - 1.0f));
        temp3 = arg0->unk_3C;
        arg0->unk_58 = (u32)((f32)temp3->unk_0C * ((f32)temp3->unk_18 * arg2));
        arg0->unk_84 = temp2;
    }
}
