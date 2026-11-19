#include "common.h"

void func_08925AB0(void *);
void func_08865EE0(void *);
void func_0899EA7C(void *);
s32 func_08998BF8(char *);
void func_089A05D4(void *, void *, s32);
void func_0899D1F0(void *, s32, char *);
void func_08925F04(void *, s32, s32);
extern u8 D_08A485BC[];
extern u8 D_08A48B20[];
extern f32 D_08A08B58[];
extern f32 D_08A08B60[];
extern f32 D_08A08B68[];
extern f32 D_08A08B6C[];
extern f32 D_08A08B70[];
extern f32 D_08A08B78[];
extern f32 D_08A08B80[];
extern f32 D_08A08B84[];
extern f32 D_08A08B88[];
extern f32 D_08A08B90[];
extern f32 D_08A08B98[];
extern f32 D_08A08B9C[];
extern f32 D_08A08BA0[];
extern f32 D_08A08BA8[];
extern f32 D_08A08BB0[];
extern f32 D_08A08BB4[];
extern f32 D_08A08BB8[];
extern f32 D_08A08BC0[];
extern f32 D_08A08BC8[];
extern f32 D_08A08BCC[];
extern f32 D_08A08BD0[];
extern f32 D_08A08BD8[];
extern f32 D_08A08BE0[];
extern f32 D_08A08BE4[];
extern f32 D_08A08BE8[];
extern f32 D_08A08BF0[];
extern f32 D_08A08BF8[];
extern f32 D_08A08BFC[];
extern f32 D_08A08C00[];
extern f32 D_08A08C08[];
extern f32 D_08A08C10[];
extern f32 D_08A08C14[];


typedef struct {
    u8 pad_00[0x1058];
    u8 *unk_1058;
    s32 unk_105C;
    s32 unk_1060;
    char *unk_1064;
    u8 unk_1068;
    u8 unk_1069;
    u8 pad_106A[6];
    u8 unk_1070[0x3F0];
    u8 unk_1460[0x2F8];
    u8 unk_1758[0xF18];
    u8 unk_2670[0x7F0];
    s32 unk_2E60;
    s32 unk_2E64;
    s32 unk_2E68;
    s32 unk_2E6C;
    u8 unk_2E70[0x1058];
    u8 unk_3EC8[0x1058];
    u8 unk_4F20[0x1058];
    u8 unk_5F78[0x404];
    u8 *unk_637C;
    s32 unk_6380;
    u8 unk_6384[0x404];
    u8 *unk_6788;
    s32 unk_678C;
} Unk;

Unk *func_089B6BE8(Unk *arg0, s32 arg1, s32 arg2, char *arg3)
{
    s32 temp;
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
    f32 temp13[3];
    f32 temp14[3];
    f32 temp15[3];

    arg0->unk_1058 = D_08A485BC;
    func_08925AB0(arg0);
    arg0->unk_1058 = D_08A48B20;
    arg0->unk_105C = arg2;
    arg0->unk_1060 = arg1;
    arg0->unk_1064 = arg3;
    arg0->unk_1068 = 0;
    arg0->unk_1069 = 0;
    func_08865EE0(&arg0->unk_1070[0x0]);
    func_08865EE0(&arg0->unk_1070[0x90]);
    func_08865EE0(&arg0->unk_1070[0x120]);
    func_08865EE0(&arg0->unk_1070[0x1B0]);
    func_08865EE0(&arg0->unk_1070[0x240]);
    func_08865EE0(&arg0->unk_1070[0x2D0]);
    func_08865EE0(&arg0->unk_1070[0x360]);

    func_0899EA7C(arg0->unk_1460);
    temp = func_08998BF8(arg3);
    func_089A05D4(arg0->unk_1758, arg0->unk_1460, temp);
    func_0899D1F0(arg0->unk_2670, 0, arg3);
    arg0->unk_2E60 = 0;
    arg0->unk_2E64 = 0;
    arg0->unk_2E68 = 0;
    arg0->unk_2E6C = 0;
    func_08925AB0(arg0->unk_2E70);
    func_08925AB0(arg0->unk_3EC8);
    func_08925AB0(arg0->unk_4F20);
    arg0->unk_637C = (u8 *)(((u32)arg0->unk_5F78 & 3) + (u32)arg0 + 0x5F78);
    arg0->unk_6380 = 0;
    arg0->unk_6788 = (u8 *)(((u32)arg0->unk_6384 & 3) + (u32)arg0 + 0x6384);
    arg0->unk_678C = 0;

    temp0[0] = D_08A08B58[0];
    temp0[1] = D_08A08B58[1];
    temp0[2] = D_08A08B60[0];
    func_08925F04(arg0, (s32)temp0, 3);

    temp1[0] = D_08A08B60[1];
    temp1[1] = D_08A08B68[0];
    temp1[2] = D_08A08B6C[0];
    func_08925F04(arg0, (s32)temp1, 3);

    temp2[0] = D_08A08B70[0];
    temp2[1] = D_08A08B70[1];
    temp2[2] = D_08A08B78[0];
    func_08925F04(arg0, (s32)temp2, 3);

    temp3[0] = D_08A08B78[1];
    temp3[1] = D_08A08B80[0];
    temp3[2] = D_08A08B84[0];
    func_08925F04(arg0, (s32)temp3, 3);

    temp4[0] = D_08A08B88[0];
    temp4[1] = D_08A08B88[1];
    temp4[2] = D_08A08B90[0];
    func_08925F04(arg0->unk_4F20, (s32)temp4, 3);

    temp5[0] = D_08A08B90[1];
    temp5[1] = D_08A08B98[0];
    temp5[2] = D_08A08B9C[0];
    func_08925F04(arg0->unk_4F20, (s32)temp5, 3);

    temp6[0] = D_08A08BA0[0];
    temp6[1] = D_08A08BA0[1];
    temp6[2] = D_08A08BA8[0];
    func_08925F04(arg0->unk_4F20, (s32)temp6, 3);

    temp7[0] = D_08A08BA8[1];
    temp7[1] = D_08A08BB0[0];
    temp7[2] = D_08A08BB4[0];
    func_08925F04(arg0->unk_2E70, (s32)temp7, 3);

    temp8[0] = D_08A08BB8[0];
    temp8[1] = D_08A08BB8[1];
    temp8[2] = D_08A08BC0[0];
    func_08925F04(arg0->unk_2E70, (s32)temp8, 3);

    temp9[0] = D_08A08BC0[1];
    temp9[1] = D_08A08BC8[0];
    temp9[2] = D_08A08BCC[0];
    func_08925F04(arg0->unk_2E70, (s32)temp9, 3);

    temp10[0] = D_08A08BD0[0];
    temp10[1] = D_08A08BD0[1];
    temp10[2] = D_08A08BD8[0];
    func_08925F04(arg0->unk_2E70, (s32)temp10, 3);

    temp11[0] = D_08A08BD8[1];
    temp11[1] = D_08A08BE0[0];
    temp11[2] = D_08A08BE4[0];
    func_08925F04(arg0->unk_2E70, (s32)temp11, 3);

    temp12[0] = D_08A08BE8[0];
    temp12[1] = D_08A08BE8[1];
    temp12[2] = D_08A08BF0[0];
    func_08925F04(arg0->unk_3EC8, (s32)temp12, 3);

    temp13[0] = D_08A08BF0[1];
    temp13[1] = D_08A08BF8[0];
    temp13[2] = D_08A08BFC[0];
    func_08925F04(arg0->unk_3EC8, (s32)temp13, 3);

    temp14[0] = D_08A08C00[0];
    temp14[1] = D_08A08C00[1];
    temp14[2] = D_08A08C08[0];
    func_08925F04(arg0->unk_3EC8, (s32)temp14, 3);

    temp15[0] = D_08A08C08[1];
    temp15[1] = D_08A08C10[0];
    temp15[2] = D_08A08C14[0];
    func_08925F04(arg0->unk_3EC8, (s32)temp15, 3);
    return arg0;
}
