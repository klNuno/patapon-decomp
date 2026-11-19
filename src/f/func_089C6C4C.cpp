#include "common.h"

extern "C" {
struct T {
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32);
};
struct T2 {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x38];
    T unk_90;
};
struct T3 {
    virtual void unk_08();
    virtual void unk_0C(T2 *, s32 *, s32);
};
struct T4 {
    s32 unk_00;
    T3 *unk_04;
    T2 *unk_08;
    s32 *unk_0C;
};
struct M_089CA16C {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    u8 pad_38[8];
};
struct T6 {
    M_089CA16C unk_00;
    u8 pad_40[0x20];
};
struct Sub_089BD220;
struct T5 {
    u8 pad_00[0x24C];
    u8 unk_24C[0xC98 - 0x24C];
    s32 unk_C98;
    u8 pad_C9C[0x20];
    u8 unk_CBC[0x18];
};
extern void func_08865FEC(s32, s32, s32);
void func_08855354(M_089CA16C *);
void func_08864E80(void *, M_089CA16C *);
s32 func_08868CAC(void *, s32, char *, s32);
s32 *func_08868E8C(void *, s32, s32);
void func_0897B950(Sub_089BD220 *, s32);
void func_089853B4(T2 *, s32);
void func_08985654(void);
void func_08985704(T4 *, T5 *);
void func_0898ABB8(void *, f32, s32, s32);
void func_089D3BB8(void *, const void *, s32);
extern void *D_08AD1E28[];
extern u8 D_089F33C8[];
extern s32 D_08A096F8[];
extern char *D_08A09708[];
extern char *D_08A09718[];
extern char *D_08A09728[];
extern char *D_08A09740[];
extern char *D_08A09750[];
extern char *D_08A09754[];
extern char *D_08A09764[];
extern char *D_08A09774[];
extern char *D_08A09784[];
extern char *D_08A09794[];
extern f32 D_089F3368[];
extern f32 D_089F3370[];
extern f32 D_089F3378[];
extern f32 D_089F3380[];
extern f32 D_089F3388[];
extern f32 D_089F3390[];
extern f32 D_089F3398[];

inline void func_089C6C4C_00(T4 &arg0)
{
    s32 *volatile &temp = arg0.unk_0C;
    if (arg0.unk_08 != 0) {
        --*temp;
        s32 *temp2 = temp;
        if ((temp2 != 0 ? *temp2 : 0) == 0) {
            s32 *temp3 = temp;
            T2 *temp4 = *(T2 *volatile *)&arg0.unk_08;
            arg0.unk_04->unk_0C(temp4, temp3, arg0.unk_00);
            func_089853B4(arg0.unk_08, arg0.unk_00);
        }
    }
}

void func_089C6C4C(T5 *arg0)
{
    T4 temp1;
    T4 temp2;
    T4 temp3;
    T4 temp4;
    T4 temp5;
    T4 temp6;
    T4 temp7;
    T4 temp8;
    T4 temp9;
    T4 temp10;
    T4 temp11;
    T4 temp12;
    T6 temp13;
    M_089CA16C temp14;
    M_089CA16C temp15;
    M_089CA16C temp16;
    M_089CA16C temp17;
    M_089CA16C temp18;
    M_089CA16C temp19;
    M_089CA16C temp20;

    func_08985654();
    T2 *temp21;
    char *temp22;
    void *temp = D_08AD1E28[0];
    temp = temp != 0 ? temp : 0;

    func_08985704(&temp1, arg0);
    temp22 = D_08A09708[0];
    temp21 = *(T2 *volatile *)&temp1.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp2, arg0);
    temp22 = D_08A09718[0];
    temp21 = *(T2 *volatile *)&temp2.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp3, arg0);
    temp22 = D_08A09728[0];
    temp21 = *(T2 *volatile *)&temp3.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp4, arg0);
    temp22 = D_08A09740[0];
    temp21 = *(T2 *volatile *)&temp4.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp5, arg0);
    temp22 = D_08A09750[0];
    temp21 = *(T2 *volatile *)&temp5.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp6, arg0);
    temp22 = D_08A09754[0];
    temp21 = *(T2 *volatile *)&temp6.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp7, arg0);
    temp22 = D_08A09764[0];
    temp21 = *(T2 *volatile *)&temp7.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp8, arg0);
    temp22 = D_08A09774[0];
    temp21 = *(T2 *volatile *)&temp8.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp9, arg0);
    temp22 = D_08A09784[0];
    temp21 = *(T2 *volatile *)&temp9.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp10, arg0);
    temp22 = D_08A09794[0];
    temp21 = *(T2 *volatile *)&temp10.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp11, arg0);
    temp22 = D_08A09794[0];
    temp21 = *(T2 *volatile *)&temp11.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);
    func_08985704(&temp12, arg0);
    temp22 = D_08A09794[0];
    temp21 = *(T2 *volatile *)&temp12.unk_08;
    func_08865FEC((s32)temp21, func_08868CAC(temp, 7, temp22, 1), 1);

    func_08855354(&temp13.unk_00);
    temp13.unk_00.unk_30 = D_089F3368[0];
    temp13.unk_00.unk_34 = D_089F3368[1];
    func_08864E80(temp4.unk_08, &temp13.unk_00);
    func_08855354(&temp14);
    temp14.unk_30 = D_089F3370[0];
    temp14.unk_34 = D_089F3370[1];
    func_08864E80(temp5.unk_08, &temp14);
    func_08855354(&temp15);
    temp15.unk_30 = D_089F3378[0];
    temp15.unk_34 = D_089F3378[1];
    func_08864E80(temp6.unk_08, &temp15);
    func_08855354(&temp16);
    func_08864E80(temp7.unk_08, &temp16);
    func_08855354(&temp17);
    temp17.unk_30 = D_089F3380[0];
    temp17.unk_34 = D_089F3380[1];
    func_08864E80(temp9.unk_08, &temp17);
    func_08855354(&temp18);
    temp18.unk_30 = D_089F3388[0];
    temp18.unk_34 = D_089F3388[1];
    func_08864E80(temp10.unk_08, &temp18);
    func_08855354(&temp19);
    temp19.unk_30 = D_089F3390[0];
    temp19.unk_34 = D_089F3390[1];
    func_08864E80(temp11.unk_08, &temp19);
    func_08855354(&temp20);
    temp20.unk_30 = D_089F3398[0];
    temp20.unk_34 = D_089F3398[1];
    func_08864E80(temp12.unk_08, &temp20);

    temp1.unk_08->unk_90.unk_14(1);
    temp4.unk_08->unk_90.unk_14(10);
    temp7.unk_08->unk_90.unk_14(-1);
    temp8.unk_08->unk_90.unk_14(-100);
    temp9.unk_08->unk_90.unk_14(1000);
    temp10.unk_08->unk_90.unk_14(-1002);
    temp11.unk_08->unk_90.unk_14(-1003);
    temp12.unk_08->unk_90.unk_14(-1004);

    func_0898ABB8(temp10.unk_08, 0.0f, 1, 0);
    func_0898ABB8(temp11.unk_08, 0.0f, 1, 0);
    func_0898ABB8(temp12.unk_08, 0.0f, 1, 0);
    temp10.unk_08->unk_54 = 0x41100000;
    temp11.unk_08->unk_54 = 0x41100000;
    temp12.unk_08->unk_54 = 0x41100000;

    func_0897B950((Sub_089BD220 *)arg0->unk_24C, *func_08868E8C(temp, 7, D_08A096F8[0]));
    func_089D3BB8(arg0->unk_CBC, D_089F33C8, 0x18);
    arg0->unk_C98 = 0x3F800000;

    func_089C6C4C_00(temp12);
    func_089C6C4C_00(temp11);
    func_089C6C4C_00(temp10);
    func_089C6C4C_00(temp9);
    func_089C6C4C_00(temp8);
    func_089C6C4C_00(temp7);
    func_089C6C4C_00(temp6);
    func_089C6C4C_00(temp5);
    func_089C6C4C_00(temp4);
    func_089C6C4C_00(temp3);
    func_089C6C4C_00(temp2);
    func_089C6C4C_00(temp1);
}
}
