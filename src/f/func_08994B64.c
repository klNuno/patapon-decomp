#include "common.h"

typedef struct {
    u8 pad_00[0x1058];
    void *unk_1058;
    s32 unk_105C;
    s32 unk_1060;
    u8 pad_1064[0xC];
    u8 unk_1070[0x7800 - 0x1070];
    u8 unk_7800[0xAA90 - 0x7800];
    u8 unk_AA90[0x46180 - 0xAA90];
    u8 unk_46180[0x462F0 - 0x46180];
    u8 unk_462F0[0x47348 - 0x462F0];
    u8 unk_47348[4];
} S;

void func_08925AB0(void *);
void func_08925F04(void *, s32, s32);
void *func_08995730(void *, s32, s32);
void func_089A2C3C(void *, void *, s32, s32);
void func_089B6BE8(void *, void *, s32, s32);
void func_089B8AEC(void *, void *, s32, s32);

extern u8 D_08A485BC[];
extern u8 D_08A485CC[];
extern f32 D_08A06930[];
extern f32 D_08A06938[];
extern f32 D_08A06940[];
extern f32 D_08A06944[];
extern f32 D_08A06948[];
extern f32 D_08A06950[];
extern f32 D_08A06958[];
extern f32 D_08A0695C[];
extern f32 D_08A06960[];
extern f32 D_08A06968[];
extern f32 D_08A06970[];
extern f32 D_08A06974[];
extern f32 D_08A06978[];
extern f32 D_08A06980[];
extern f32 D_08A06988[];
extern f32 D_08A0698C[];
extern f32 D_08A06990[];
extern f32 D_08A06998[];
extern f32 D_08A069A0[];
extern f32 D_08A069A4[];
extern f32 D_08A069A8[];
extern f32 D_08A069B0[];
extern f32 D_08A069B8[];
extern f32 D_08A069BC[];
extern f32 D_08A069C0[];
extern f32 D_08A069C8[];

S *func_08994B64(S *arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 temp0[3];
    f32 temp1[3];
    f32 temp2[3];
    f32 temp3[3];
    f32 temp4[3];
    f32 temp5[3];
    f32 temp6[3];
    f32 temp7[3];
    f32 temp8[3];
    f32 temp9[3];
    f32 temp10[3];
    f32 temp11[3];
    f32 temp12[3];

    arg0->unk_1058 = D_08A485BC;
    func_08925AB0(arg0);
    arg0->unk_1058 = D_08A485CC;
    arg0->unk_105C = arg1;
    arg0->unk_1060 = arg3;
    func_089B6BE8(arg0->unk_1070, arg0, arg1, arg3);
    func_089B8AEC(arg0->unk_7800, arg0, arg1, arg3);
    func_089A2C3C(arg0->unk_AA90, arg0, arg1, arg3);
    func_08995730(arg0->unk_46180, arg1, (s32)arg0);
    func_08925AB0(arg0->unk_462F0);
    func_08925AB0(arg0->unk_47348);

    temp0[0] = D_08A06930[0];
    temp0[1] = D_08A06930[1];
    temp0[2] = D_08A06938[0];
    func_08925F04(arg0, (s32)temp0, 3);

    temp1[0] = D_08A06938[1];
    temp1[1] = D_08A06940[0];
    temp1[2] = D_08A06944[0];
    func_08925F04(arg0, (s32)temp1, 3);

    temp2[0] = D_08A06948[0];
    temp2[1] = D_08A06948[1];
    temp2[2] = D_08A06950[0];
    func_08925F04(arg0, (s32)temp2, 3);

    temp3[0] = D_08A06950[1];
    temp3[1] = D_08A06958[0];
    temp3[2] = D_08A0695C[0];
    func_08925F04(arg0, (s32)temp3, 3);

    temp4[0] = D_08A06960[0];
    temp4[1] = D_08A06960[1];
    temp4[2] = D_08A06968[0];
    func_08925F04(arg0, (s32)temp4, 3);

    temp5[0] = D_08A06968[1];
    temp5[1] = D_08A06970[0];
    temp5[2] = D_08A06974[0];
    func_08925F04(arg0, (s32)temp5, 3);

    temp6[0] = D_08A06978[0];
    temp6[1] = D_08A06978[1];
    temp6[2] = D_08A06980[0];
    func_08925F04(arg0->unk_462F0, (s32)temp6, 3);

    temp7[0] = D_08A06980[1];
    temp7[1] = D_08A06988[0];
    temp7[2] = D_08A0698C[0];
    func_08925F04(arg0->unk_462F0, (s32)temp7, 3);

    temp8[0] = D_08A06990[0];
    temp8[1] = D_08A06990[1];
    temp8[2] = D_08A06998[0];
    func_08925F04(arg0->unk_462F0, (s32)temp8, 3);

    temp9[0] = D_08A06998[1];
    temp9[1] = D_08A069A0[0];
    temp9[2] = D_08A069A4[0];
    func_08925F04(arg0->unk_47348, (s32)temp9, 3);

    temp10[0] = D_08A069A8[0];
    temp10[1] = D_08A069A8[1];
    temp10[2] = D_08A069B0[0];
    func_08925F04(arg0->unk_47348, (s32)temp10, 3);

    temp11[0] = D_08A069B0[1];
    temp11[1] = D_08A069B8[0];
    temp11[2] = D_08A069BC[0];
    func_08925F04(arg0->unk_47348, (s32)temp11, 3);

    temp12[0] = D_08A069C0[0];
    temp12[1] = D_08A069C0[1];
    temp12[2] = D_08A069C8[0];
    func_08925F04(arg0->unk_47348, (s32)temp12, 3);
    return arg0;
}
