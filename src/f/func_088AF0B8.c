#include "common.h"

typedef struct {
    u8 pad_00[8];
    f32 *unk_08;
    u8 pad_0C[0xC];
    f32 unk_18;
    f32 unk_1C;
    u16 unk_20;
    u16 unk_22;
    u8 pad_24[0x1C];
    s32 unk_40;
    u8 pad_44[4];
    f32 unk_48;
    f32 unk_4C;
    s32 unk_50;
    u8 pad_54[4];
    f32 unk_58;
    f32 unk_5C;
    u8 pad_60[4];
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
    s32 unk_70;
} S;

s32 func_088586E8(void);
f32 *func_088FAABC(s32);
f32 *func_088FAB04(s32);
f32 *func_088FAB4C(s32);
s32 func_08926B10(s32, s32);
s32 func_089B53E4(s32);

void func_088AF0B8(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp;
    f32 temp2;
    f32 *temp3 = arg0->unk_08;
    u16 temp4;

    temp2 = temp3[1] + arg0->unk_1C;
    temp = temp3[0] + arg0->unk_18;
    arg0->unk_58 = 0.0f;
    arg0->unk_5C = 0.0f;
    if (arg3 != -1) {
        arg0->unk_08 = func_088FAABC(arg3);
        temp4 = (u16)(u32)func_088FAB04(arg3)[1];
        arg0->unk_20 = (u16)(u32)func_088FAB04(arg3)[0];
        arg0->unk_22 = temp4;
        temp3 = func_088FAB4C(arg3);
        arg0->unk_58 = temp3[0];
        arg0->unk_5C = temp3[1];
        arg0->unk_40 = 1;
    }
    arg0->unk_70 = 0x10;
    if (arg3 != 0) {
        arg0->unk_70 = *(volatile s32 *)&arg0->unk_70 | 0x100;
    } else {
        arg0->unk_70 = *(volatile s32 *)&arg0->unk_70 & ~0x100;
    }
    temp3 = arg0->unk_08;
    arg0->unk_18 = temp - temp3[0];
    arg0->unk_1C = temp2 - temp3[1];
    arg0->unk_6C = arg3;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_48 = 480.0f;
    arg0->unk_4C = 58.0f;
    arg0->unk_50 = func_08926B10(func_089B53E4(func_088586E8()), arg3);
}
