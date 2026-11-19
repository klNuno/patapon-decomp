#include "common.h"

typedef struct {
    u8 pad_00[0xBE];
    u8 unk_BE;
    u8 unk_BF;
} U;

typedef struct {
    u8 pad_00[4];
    U *unk_04;
} T;

typedef struct {
    char *unk_00;
    s32 unk_04;
    u8 pad_08[0x31];
    u8 unk_39;
    u8 pad_3A[2];
    f32 unk_3C;
} S;

T *func_08852FFC(s32);
extern s32 func_08853004(s32);
s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);
void func_0896FEFC(char **, s32 *);
void func_0896FF0C(char **, u8 *);
void func_0896FF28(S *, s32, f32);

void func_0896F7CC(S *arg0) {
    u8 temp0;
    s32 temp1;
    T *temp2 = func_08852FFC(arg0->unk_04);
    s32 temp3 = func_08853004(arg0->unk_04);
    s32 temp4;
    f32 temp5;

    temp1 = 0;
    temp4 = 0;
    if (((temp2->unk_04->unk_BE >> 3) & 1) == 0) {
        func_0896FEFC(&arg0->unk_00, &temp1);
        if (temp1 != 0) {
            temp2->unk_04->unk_BE |= 8;
            *func_0884EBB0(temp3, 0x13) = 0.0f;
        } else {
            *func_0884EBB0(temp3, 0x13) += 1.0f / 30.0f;
        }
    }
    if (((temp2->unk_04->unk_BE >> 1) & 1) == 1 ||
        ((temp2->unk_04->unk_BE >> 2) & 1) == 1) {
        *func_0884EBB0(temp3, 0x12) += 1.0f / 30.0f;
    }
    if (arg0->unk_39 == 0) {
        temp5 = arg0->unk_3C - 1.0f / 30.0f;
        arg0->unk_3C = temp5;
        if (temp5 < 0.0f) {
            arg0->unk_39 = 1;
        }
    }
    *func_0884EBA0(temp3, 0x1E) = 0;
    if (*func_0884EBA0(temp3, 0x25) == 1 || *func_0884EBA0(temp3, 0x25) == 3 ||
        *func_0884EBA0(temp3, 0x25) == 4 || *func_0884EBA0(temp3, 0x25) == 2) {
        if (*func_0884EBB0(temp3, 0x20) < 0.25f) {
            temp4 = 1;
        } else if (*func_0884EBB0(temp3, 0x20) < 0.8f) {
            temp4 = 5;
        } else {
            temp4 = 6;
        }
    } else if (((temp2->unk_04->unk_BF >> 4) & 1) == 1) {
        temp4 = 4;
    } else {
        if (((temp2->unk_04->unk_BE >> 3) & 1) == 1) {
            func_0896FEFC(&arg0->unk_00, &temp1);
            if (temp1 == 0) {
                temp4 = 2;
                goto dispatch;
            }
        }
        if (((temp2->unk_04->unk_BE >> 2) & 1) == 1 && *func_0884EBB0(temp3, 0x12) >= 1.0f) {
            temp4 = 4;
        } else if (((temp2->unk_04->unk_BE >> 1) & 1) == 1 && *func_0884EBB0(temp3, 0x12) >= 2.0f) {
            temp4 = 4;
        }
    }
dispatch:
    temp0 = 0;
    switch (temp4) {
    case 1:
    case 2:
        *func_0884EBA0(temp3, 0x1E) = -1;
        *func_0884EBB0(temp3, 0x12) = 0.0f;
        if (temp4 == 2) {
            func_0896FF0C(&arg0->unk_00, &temp0);
            if (temp0 == 0 && ((temp2->unk_04->unk_BE >> 3) & 1) == 1) {
                temp2->unk_04->unk_BE |= 4;
                temp2->unk_04->unk_BE &= 0xF7;
                func_0896FF28(arg0, 0x140000, 0.0f);
                return;
            }
        }
        if (arg0->unk_39 == 1) {
            func_0896FF28(arg0, 0x140001, 0.0f);
            arg0->unk_39 = 0;
            arg0->unk_3C = 2.0f;
        }
        temp2->unk_04->unk_BE |= 2;
        temp2->unk_04->unk_BE &= 0xF7;
        break;
    case 3:
        if (*func_0884EBB0(temp3, 0x21) > 0.0f) {
            temp2->unk_04->unk_BE &= 0xEF;
            temp2->unk_04->unk_BE &= 0xDF;
        } else {
            *func_0884EBA0(temp3, 0x1E) = -1;
            temp2->unk_04->unk_BE &= 0xFD;
            temp2->unk_04->unk_BE &= 0xFB;
            temp2->unk_04->unk_BE &= 0xEF;
            temp2->unk_04->unk_BE |= 0x20;
        }
        break;
    case 4:
        *func_0884EBA0(temp3, 0x1E) = -1;
        temp2->unk_04->unk_BE &= 0xFD;
        temp2->unk_04->unk_BE &= 0xFB;
        break;
    case 5:
        temp4 = *func_0884EBA0(temp3, 0x25);
        *func_0884EBA0(temp3, 0x1E) = temp4;
        *func_0884EBA0(temp3, 0x74) = 0;
        temp2->unk_04->unk_BE &= 0xFD;
        temp2->unk_04->unk_BE &= 0xFB;
        break;
    case 6:
        temp4 = *func_0884EBA0(temp3, 0x25);
        *func_0884EBA0(temp3, 0x1E) = temp4;
        *func_0884EBA0(temp3, 0x74) = 1;
        temp2->unk_04->unk_BE &= 0xFD;
        temp2->unk_04->unk_BE &= 0xFB;
        break;
    case 0:
    default:
        break;
    }
}
