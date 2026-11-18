#include "common.h"

extern "C" {
typedef struct {
    f32 unk_00, unk_04;
} V2;
typedef struct {
    V2 unk_00, unk_08;
} V4;

class A {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(f32, V2 *, V2 *);
};

struct S {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x18];
    A unk_70;
    u8 pad_74[0x6CC];
    A unk_740;
    u8 pad_744[0x6CC];
    A unk_E10;
};

struct T {
    f32 unk_00, unk_04;
};

void func_089B295C(s32, V4 *, s32);
void func_089B298C(s32, s32, T *, V2 *);
void func_089B2A88(s32);
void func_089B34E8(S *);
extern V2 D_08A08650[], D_08A08658[], D_089F1CD0[], D_089F1CE0[];
extern T D_089F1CB8[];
extern f32 D_089F1CC0[], D_089F1CC4[];

void func_089B2D00(S *arg0)
{
    V2 temp, temp2, temp3;
    T temp4;
    V2 temp5;
    V2 temp6, temp7, temp8, temp9, temp10, temp11;
    struct {
        V4 unk_00;
        u8 pad_10[8];
    } temp12;
    f32 temp16, temp15, temp14, temp13;

    temp15 = D_089F1CD0[0].unk_00;
    temp16 = D_089F1CD0[0].unk_04;
    temp13 = D_089F1CE0[0].unk_00;
    temp14 = D_089F1CE0[0].unk_04;
    temp12.unk_00.unk_00 = D_08A08650[0];
    temp12.unk_00.unk_08 = D_08A08658[0];
    func_089B295C(arg0->unk_54, &temp12.unk_00, 1);
    temp.unk_00 = 1.0f;
    temp.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x15, D_089F1CB8, &temp);
    temp2.unk_00 = 1.0f;
    temp2.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x16, D_089F1CB8, &temp2);
    temp3.unk_00 = 1.0f;
    temp3.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x17, D_089F1CB8, &temp3);
    temp5.unk_00 = 1.0f;
    temp5.unk_04 = 1.0f;
    temp4.unk_00 = D_089F1CB8[0].unk_00 + temp15;
    temp4.unk_04 = D_089F1CB8[0].unk_04 + temp16;
    func_089B298C(arg0->unk_54, 0x21, &temp4, &temp5);
    func_089B2A88(arg0->unk_54);
    temp7.unk_00 = 1.0f;
    temp7.unk_04 = 1.0f;
    temp6.unk_00 = D_089F1CB8[0].unk_00 + temp15;
    temp6.unk_04 = D_089F1CB8[0].unk_04 + temp16;
    arg0->unk_70.unk_1C(1.0f, &temp6, &temp7);
    temp9.unk_00 = 1.0f;
    temp9.unk_04 = 1.0f;
    temp8.unk_00 = D_089F1CB8[0].unk_00 + D_089F1CC0[0];
    temp8.unk_04 = D_089F1CB8[0].unk_04 + D_089F1CC4[0];
    arg0->unk_740.unk_1C(1.0f, &temp8, &temp9);
    temp11.unk_00 = 1.0f;
    temp11.unk_04 = 1.0f;
    temp10.unk_00 = D_089F1CB8[0].unk_00 + temp13;
    temp10.unk_04 = D_089F1CB8[0].unk_04 + temp14;
    arg0->unk_E10.unk_1C(1.0f, &temp10, &temp11);
    func_089B34E8(arg0);
}
}
