#include "common.h"

typedef struct {
    f32 unk_00[8];
} S3;

typedef struct {
    f32 unk_00[2];
} V;

typedef struct {
    f32 unk_00[12];
    V unk_30;
    f32 unk_38;
    f32 unk_3C;
} M;

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0893CEA8;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x10];
    V4 unk_10;
    s32 unk_20;
    u8 pad_24[0x10];
    u8 unk_34;
    u8 pad_35[3];
    f32 unk_38;
    f32 unk_3C;
} T;

s32 func_08814C0C(s32);
void func_08855354(char *);
void func_08864A30(L_0893CEA8 *);
void func_08864A68(L_0893CEA8 *, s32);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
extern f32 D_08A00388[];
extern f32 D_08A00390[];
extern f32 D_08A00398[];
extern f32 D_08A003A0[];
extern f32 D_08A003A8[];

void func_089137D0(char *arg0) {
    T *temp = (T *)arg0;
    L_0893CEA8 temp8;
    struct {
        u8 pad_00[4];
        S3 unk_04;
    } temp9;
    f32 temp10;
    f32 temp11;
    struct {
        V4 unk_00;
        u8 pad_10[0xC];
    } temp12;
    M temp13;
    s32 temp3;
    f32 temp4;
    f32 temp5;
    u32 temp6;
    u32 *temp7;

    temp3 = temp->unk_20;
    if ((temp3 != 1 || temp->unk_34 != 0) && temp3 != 3) {
        func_08864A30(&temp8);
        temp9.unk_04.unk_00[0] = D_08A00388[1];
        temp9.unk_04.unk_00[1] = D_08A00390[0];
        temp9.unk_04.unk_00[2] = D_08A00390[1];
        temp9.unk_04.unk_00[3] = D_08A00398[0];
        temp9.unk_04.unk_00[4] = D_08A00398[1];
        temp9.unk_04.unk_00[5] = D_08A003A0[0];
        temp9.unk_04.unk_00[6] = D_08A003A0[1];
        temp9.unk_04.unk_00[7] = D_08A003A8[0];
        temp12.unk_00 = temp->unk_10;

        if (temp->unk_20 == 1) {
            temp4 = temp->unk_3C;
            temp10 = temp4;
            temp6 = *(u32 *)&temp10;
            temp6 = (temp6 << 1) >> 1;
            temp7 = (u32 *)&temp10;
            *(u32 *)&temp10 = temp6;
            temp5 = *(f32 *)temp7 <= 0.0001f ? 1.0f : temp->unk_38 / temp4;
            temp5 = 1.0f - temp5;
        } else {
            temp4 = temp->unk_3C;
            temp11 = temp4;
            temp6 = *(u32 *)&temp11;
            temp6 = (temp6 << 1) >> 1;
            temp7 = (u32 *)&temp11;
            *(u32 *)&temp11 = temp6;
            temp5 = *(f32 *)temp7 <= 0.0001f ? 1.0f : temp->unk_38 / temp4;
        }
        temp12.unk_00.unk_0C = temp5;
        func_0886575C(0, 1, 1);
        func_08814C0C(9);
        func_08855354((char *)&temp13);
        func_088651A4(&temp9.unk_04, &temp13, &temp12.unk_00, 0, 1);
        func_08865870();
        func_08864A68(&temp8, -1);
    }
}
