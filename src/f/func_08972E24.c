#include "common.h"

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
} U;

typedef struct {
    u8 pad_00[4];
    U *unk_04;
} S_089734B8;

typedef struct {
    s32 unk_00;
    u8 pad_04[4];
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    u8 pad_34[8];
    s32 unk_3C;
    s32 unk_40;
    u32 unk_44;
    s32 unk_48;
    f32 unk_4C;
} S;

S_089734B8 *func_08852FFC(s32);
extern s32 func_08853004(s32);
f32 *func_0884EBB0(s32, s32);
s32 func_088586E8(void);
u32 func_089B5464(s32);
extern s32 func_08958924(s32);

void func_08972E24(S *arg0)
{
    S_089734B8 *temp = func_08852FFC(arg0->unk_08);
    s32 temp2 = func_08853004(arg0->unk_08);
    s32 temp3;
    f32 temp4;
    f32 temp5;

    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_30 = 0.0f;
    if (arg0->unk_3C == 0) {
        temp4 = *func_0884EBB0(temp2, 0x1F);
        arg0->unk_4C = temp4;
        arg0->unk_48 = (s32)(1000.0f * temp4);
        arg0->unk_48 %= 8;
        arg0->unk_44 = func_089B5464(func_088586E8()) % 10U;
    }
    switch (arg0->unk_48) {
    case 0:
        if (arg0->unk_20 & 1) {
            arg0->unk_24 = 1;
        } else {
            arg0->unk_24 = 0;
        }
        break;
    case 1:
        if (arg0->unk_20 & 1) {
            arg0->unk_24 = 3;
        } else {
            arg0->unk_24 = 2;
        }
        break;
    case 2:
        if (arg0->unk_20 & 1) {
            arg0->unk_24 = 5;
        } else {
            arg0->unk_24 = 4;
        }
        break;
    case 3:
        if (arg0->unk_20 & 1) {
            arg0->unk_24 = 7;
        } else {
            arg0->unk_24 = 6;
        }
        break;
    case 4:
    case 6:
        arg0->unk_24 = 0;
        if (arg0->unk_40 != 1) {
            arg0->unk_30 = (1.0f / (f32)(arg0->unk_40 - 1)) * (f32)arg0->unk_20;
        }
        break;
    case 5:
    case 7:
        arg0->unk_24 = 0;
        temp3 = arg0->unk_40;
        if (temp3 != 1) {
            temp5 = 1.0f / (f32)--temp3;
            arg0->unk_30 = temp5 * (f32)(temp3 - arg0->unk_20);
        }
        break;
    }
    if ((u32)(func_08958924(arg0->unk_00 + 0x2980) != 0) == 1) {
        arg0->unk_24 += 20;
    } else if (((temp->unk_04->unk_BD >> 7) & 1) == 1) {
        arg0->unk_24 += 10;
    }
}
