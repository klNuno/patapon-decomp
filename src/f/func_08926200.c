#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T0;

typedef struct {
    u8 pad_00[0x44];
    s32 *unk_44;
    u32 unk_48;
} T1;

typedef struct T2 {
    void *unk_00;
    struct T2 *unk_04;
    T1 *unk_08;
} T2;

typedef struct {
    u8 pad_00[8];
    f32 unk_08;
    u8 pad_0C[0x18];
} T3;

typedef struct {
    u8 pad_00[0x294];
    T2 unk_294;
    u8 pad_2A0[0xDB4];
    T3 *unk_1054;
} T4;

extern void func_089263B4(T4 *, T0 *, s32, s32);
extern f32 D_08A027D4[];
extern u8 *D_08AD1F14[];

void func_08926200(T4 *arg0, T0 *arg1, s32 arg2) {
    struct { T0 unk_00; u8 pad_08[0x10]; } temp12;
    f32 *temp0;
    f32 temp1;
    T2 *temp2;
    T2 *temp3;
    u8 *temp4;
    f32 temp5;
    s32 temp7;
    s32 temp6;
    T1 *temp8;
    s32 **temp9;
    u32 temp10;
    u32 temp11;

    temp0 = &arg1->unk_00;
    temp1 = arg1->unk_04;
    if (*temp0 < D_08A027D4[0]) {
        temp0 = D_08A027D4;
    }
    temp12.unk_00.unk_00 = *temp0;
    temp12.unk_00.unk_04 = temp1;
    temp2 = arg0->unk_294.unk_04;
    temp3 = &arg0->unk_294;
    temp4 = D_08AD1F14[0] != NULL ? D_08AD1F14[0] : NULL;
    temp5 = 15.0f;
    if (*(s32 *)(temp4 + 0x2474) == 4) {
        temp5 = 10.0f;
    }

    goto test;
    do {
        temp8 = temp2->unk_08;
        temp10 = 0;
        if (temp8->unk_48 != 0) {
            temp11 = 0;
            temp9 = &temp8->unk_44;
            do {
                func_089263B4(arg0, &temp12.unk_00, arg2, *(s32 *)((u8 *)*temp9 + temp11));
                temp10++;
                temp12.unk_00.unk_00 += arg0->unk_1054[*(s32 *)((u8 *)*temp9 + temp11)].unk_08;
                temp11 += sizeof(s32);
            } while (temp10 < temp8->unk_48);
        }
        temp12.unk_00.unk_00 += temp5;
        if (temp2 != NULL) {
            temp2 = temp2->unk_04;
        }
    test:
        temp7 = 0;
        temp6 = 0;
        if (*(s32 *)&temp2->unk_08 == *(s32 *)&temp3->unk_08 &&
            *(s32 *)&temp2->unk_04 == *(s32 *)&temp3->unk_04) {
            temp6 = 1;
        }
        if (temp6 && temp2->unk_00 == temp3->unk_00) {
            temp7 = 1;
        }
    } while (((temp7 != 0) ^ 1) != 0);
}
