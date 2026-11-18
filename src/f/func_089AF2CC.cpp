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
    f32 unk_740;
};

struct T {
    f32 unk_00, unk_04;
};

void func_089B295C(s32, V4 *, s32);
void func_089B298C(s32, s32, T *, V2 *);
void func_089B2A88(s32);
void func_089B34E8(S *);
extern V2 D_08A08480[], D_08A08488[];
extern T D_089F08A8[];
extern f32 D_089F08B0[], D_089F08B4[];

void func_089AF2CC(S *arg0) {
    V2 temp, temp2, temp3, temp4, temp5;
    struct {
        V4 unk_00;
        u8 pad_10[8];
    } temp6;
    f32 temp7, temp8;

    temp6.unk_00.unk_00 = D_08A08480[0];
    temp6.unk_00.unk_08 = D_08A08488[0];
    func_089B295C(arg0->unk_54, &temp6.unk_00, 1);
    temp2.unk_00 = 1.0f;
    temp2.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x15, D_089F08A8, &temp2);
    temp3.unk_00 = 1.0f;
    temp3.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x16, D_089F08A8, &temp3);
    temp4.unk_00 = 1.0f;
    temp4.unk_04 = 1.0f;
    func_089B298C(arg0->unk_54, 0x17, D_089F08A8, &temp4);
    func_089B2A88(arg0->unk_54);
    temp7 = D_089F08B0[0];
    temp.unk_00 = temp7;
    temp.unk_04 = D_089F08B4[0];
    temp8 = 29.5f - 0.5f * arg0->unk_740;
    temp.unk_04 = temp8;
    temp.unk_00 = temp7 + D_089F08A8[0].unk_00;
    temp.unk_04 = temp8 + D_089F08A8[0].unk_04;
    temp5.unk_00 = 1.0f;
    temp5.unk_04 = 1.0f;
    arg0->unk_70.unk_1C(1.0f, &temp, &temp5);
    func_089B34E8(arg0);
}
}
