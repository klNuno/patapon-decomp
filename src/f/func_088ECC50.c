#include "common.h"

typedef struct {
    f32 unk_00;
    u8 pad_04[0x4];
    f32 unk_08;
    u8 pad_0C[0x4];
    f32 unk_10;
    u8 pad_14[0x4];
    f32 unk_18;
    u8 pad_1C[0x4];
    f32 unk_20;
    s32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    u8 pad_34[0xC];
    f32 unk_40;
    f32 unk_44;
    f32 unk_48;
    f32 unk_4C;
    f32 unk_50;
    u8 pad_54[0x2C];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
    f32 unk_8C;
    f32 unk_90;
    f32 unk_94;
    f32 unk_98;
    u8 pad_9C[0x4];
    f32 unk_A0;
    f32 unk_A4;
    f32 unk_A8;
    f32 unk_AC;
    f32 unk_B0;
    f32 unk_B4;
    f32 unk_B8;
    u8 pad_BC[0x4];
    f32 unk_C0;
    f32 unk_C4;
    f32 unk_C8;
    f32 unk_CC;
    f32 unk_D0;
    u8 pad_D4[0xC];
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
    s32 unk_EC;
    s32 unk_F0;
    s32 unk_F4;
    s32 unk_F8;
} T;

void func_088ECC50(T *arg0, s32 *arg1, void *arg2, u8 arg3) {
    s32 temp0;
    s32 temp1;

    if (arg0 == NULL) {
        return;
    }
    temp0 = (arg3 & 0x70) != 0;
    temp1 = (arg3 & 0xE) != 0;
    switch (*arg1) {
    case 0:
        if (temp0 != 0) {
            arg0->unk_00 = *(f32 *)arg2;
        }
        break;
    case 1:
        if (temp0 != 0) {
            arg0->unk_08 = *(f32 *)arg2;
        }
        break;
    case 2:
        if (temp0 != 0) {
            arg0->unk_10 = *(f32 *)arg2;
        }
        break;
    case 3:
        if (temp0 != 0) {
            arg0->unk_18 = *(f32 *)arg2;
        }
        break;
    case 4:
        if (temp0 != 0) {
            arg0->unk_20 = *(f32 *)arg2;
        }
        break;
    case 5:
        if (temp0 != 0) {
            arg0->unk_28 = *(f32 *)arg2;
        }
        break;
    case 6:
        if (temp1 != 0) {
            arg0->unk_24 = (s32)*(f32 *)arg2;
        }
        break;
    case 7:
        if (temp0 != 0) {
            arg0->unk_2C = *(f32 *)arg2;
        }
        break;
    case 8:
        if (temp0 != 0) {
            arg0->unk_30 = *(f32 *)arg2;
        }
        break;
    case 9:
        if (temp0 != 0) {
            arg0->unk_40 = *(f32 *)arg2;
        }
        break;
    case 10:
        if (temp0 != 0) {
            arg0->unk_44 = *(f32 *)arg2;
        }
        break;
    case 11:
        if (temp0 != 0) {
            arg0->unk_48 = *(f32 *)arg2;
        }
        break;
    case 12:
        if (temp0 != 0) {
            arg0->unk_4C = *(f32 *)arg2;
        }
        break;
    case 13:
        if (temp0 != 0) {
            arg0->unk_50 = *(f32 *)arg2;
        }
        break;
    case 14:
        if (temp0 != 0) {
            arg0->unk_80 = *(f32 *)arg2;
        }
        break;
    case 15:
        if (temp0 != 0) {
            arg0->unk_84 = *(f32 *)arg2;
        }
        break;
    case 16:
        if (temp0 != 0) {
            arg0->unk_88 = *(f32 *)arg2;
        }
        break;
    case 17:
        if (temp0 != 0) {
            arg0->unk_8C = *(f32 *)arg2;
        }
        break;
    case 18:
        if (temp0 != 0) {
            arg0->unk_90 = *(f32 *)arg2;
        }
        break;
    case 19:
        if (temp0 != 0) {
            arg0->unk_94 = *(f32 *)arg2;
        }
        break;
    case 20:
        if (temp0 != 0) {
            arg0->unk_98 = *(f32 *)arg2;
        }
        break;
    case 21:
        if (temp0 != 0) {
            arg0->unk_A0 = *(f32 *)arg2;
        }
        break;
    case 22:
        if (temp0 != 0) {
            arg0->unk_A4 = *(f32 *)arg2;
        }
        break;
    case 23:
        if (temp0 != 0) {
            arg0->unk_A8 = *(f32 *)arg2;
        }
        break;
    case 24:
        if (temp0 != 0) {
            arg0->unk_AC = *(f32 *)arg2;
        }
        break;
    case 25:
        if (temp0 != 0) {
            arg0->unk_B0 = *(f32 *)arg2;
        }
        break;
    case 26:
        if (temp0 != 0) {
            arg0->unk_B4 = *(f32 *)arg2;
        }
        break;
    case 27:
        if (temp0 != 0) {
            arg0->unk_B8 = *(f32 *)arg2;
        }
        break;
    case 28:
        if (temp0 != 0) {
            arg0->unk_C0 = *(f32 *)arg2;
        }
        break;
    case 29:
        if (temp0 != 0) {
            arg0->unk_C4 = *(f32 *)arg2;
        }
        break;
    case 30:
        if (temp0 != 0) {
            arg0->unk_C8 = *(f32 *)arg2;
        }
        break;
    case 31:
        if (temp0 != 0) {
            arg0->unk_CC = *(f32 *)arg2;
        }
        break;
    case 32:
        if (temp0 != 0) {
            arg0->unk_D0 = *(f32 *)arg2;
        }
        break;
    case 33:
        if (temp1 != 0) {
            arg0->unk_E0 = (s32)*(f32 *)arg2;
        }
        break;
    case 34:
        if (temp1 != 0) {
            arg0->unk_E4 = *(s32 *)arg2;
        }
        break;
    case 35:
        if (temp1 != 0) {
            arg0->unk_E8 = *(s32 *)arg2;
        }
        break;
    case 36:
        if (temp1 != 0) {
            arg0->unk_EC = *(s32 *)arg2;
        }
        break;
    case 37:
        if (temp1 != 0) {
            arg0->unk_F0 = *(s32 *)arg2;
        }
        break;
    case 38:
        if (temp1 != 0) {
            arg0->unk_F4 = *(s32 *)arg2;
        }
        break;
    case 39:
        if (temp1 != 0) {
            arg0->unk_F8 = *(s32 *)arg2;
        }
        break;
    }
}
