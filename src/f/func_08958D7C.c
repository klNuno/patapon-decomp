#include "common.h"

typedef struct {
    s32 *unk_00;
    u32 unk_04;
} T;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x44];
    T unk_50;
    u8 pad_58[8];
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    u8 unk_6C;
} S;

void func_08958D7C(S *arg0) {
    T *temp;
    s32 *temp2;
    u32 temp3;
    s32 *temp4;

    arg0->unk_08 = 0;
    temp = &arg0->unk_50;
    temp3 = temp->unk_04;
    temp2 = temp->unk_00;
    if ((u32)temp2 != (u32)(temp2 + temp3)) {
        temp4 = *(s32 *volatile *)&temp->unk_00 + temp3;
        do {
            temp2++;
        } while (temp2 != temp4);
    }
    arg0->unk_50.unk_04 = 0;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 1;
    arg0->unk_6C = 0;
}
