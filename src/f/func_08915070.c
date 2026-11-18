#include "common.h"

typedef struct {
    u8 pad_00[0x83C];
    u8 unk_83C;
    u8 pad_83D[3];
    f32 unk_840;
    f32 unk_844;
    u8 pad_848[0x10];
    u8 unk_858;
    u8 pad_859[3];
    f32 unk_85C;
    f32 unk_860;
    s32 unk_864;
} T;

typedef struct {
    u8 pad_00[8];
} L;

typedef struct {
    f32 unk_00[16];
} M;

typedef struct {
    f32 unk_00[4];
    u8 pad_10[0xC];
} S;

extern f32 D_08A005D0[];
extern f32 D_08A005D8[];
extern f32 D_08A005E0[];
extern f32 D_08A005E8[];
extern f32 D_08A005F0[];
extern f32 D_08A00600[];
extern f32 D_08A00608[];
void func_08864A30(L *);
void func_08864A68(L *, s32);
s32 func_08814C0C(s32);
void func_08855354(char *);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);

void func_08915070(T *arg0) {
    L temp;
    struct { u8 pad_00[4]; f32 unk_04[8]; } temp1;
    f32 temp8;
    f32 temp9;
    S temp2;
    M temp3;
    f32 temp4;
    u32 temp5;
    u32 *temp6;
    f32 temp7;

    if (arg0->unk_864 != 0 || arg0->unk_83C != 0 || arg0->unk_858 != 0) {
        func_08864A30(&temp);
        temp1.unk_04[0] = D_08A005D0[1];
        temp1.unk_04[1] = D_08A005D8[0];
        temp1.unk_04[2] = D_08A005D8[1];
        temp1.unk_04[3] = D_08A005E0[0];
        temp1.unk_04[4] = D_08A005E0[1];
        temp1.unk_04[5] = D_08A005E8[0];
        temp1.unk_04[6] = D_08A005E8[1];
        temp1.unk_04[7] = D_08A005F0[0];
        temp2.unk_00[0] = D_08A00600[0];
        temp2.unk_00[1] = D_08A00600[1];
        temp2.unk_00[2] = D_08A00608[0];
        temp2.unk_00[3] = D_08A00608[1];

        if (arg0->unk_83C == 1) {
            temp4 = arg0->unk_844;
            temp8 = temp4;
            temp5 = *(u32 *)&temp8;
            temp5 = (temp5 << 1) >> 1;
            temp6 = (u32 *)&temp8;
            *(u32 *)&temp8 = temp5;
            temp7 = *(f32 *)temp6 <= 0.0001f ? 1.0f : arg0->unk_840 / temp4;
            temp2.unk_00[3] *= temp7;
        } else if (arg0->unk_858 == 1) {
            temp4 = arg0->unk_860;
            temp9 = temp4;
            temp5 = *(u32 *)&temp9;
            temp5 = (temp5 << 1) >> 1;
            temp6 = (u32 *)&temp9;
            *(u32 *)&temp9 = temp5;
            temp7 = *(f32 *)temp6 <= 0.0001f ? 1.0f : arg0->unk_85C / temp4;
            temp7 = 1.0f - temp7;
            temp2.unk_00[3] *= temp7;
        }
        func_0886575C(0, 1, 1);
        func_08814C0C(9);
        func_08855354((char *)&temp3);
        func_088651A4(temp1.unk_04, &temp3, temp2.unk_00, 0, 1);
        func_08865870();
        func_08864A68(&temp, -1);
    }
}
