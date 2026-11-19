#include "common.h"

extern "C" {

class A_0897EC5C {
public:
    u8 pad_00[0x58];
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10(void *, s32 *, s32);
};

class B_0897EC5C {
public:
    u8 pad_00[0x58];
    virtual void v00();
    virtual void v01();
    virtual void v02(void *);
};

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V_0897EC5C;

typedef struct {
    u8 pad_00[0xD90];
    s32 unk_D90;
    s32 unk_D94;
    u8 pad_D98[0x98];
    u8 unk_E30[0x1950];
    A_0897EC5C unk_2780;
    u8 pad_27DC[0x11E4];
    B_0897EC5C unk_39C0;
    u8 pad_3A1C[0x6FC];
    u8 unk_4118[1];
} S_0897EC5C;

extern f32 D_08A05B00[];
extern f32 D_08A05B08[];
extern f32 D_08A05B10[];
extern f32 D_08A05B14[];
extern f32 D_08A05B18[];
extern f32 D_08A05B20[];

void func_089ADE80(S_0897EC5C *);
void func_08925F04(void *, s32, s32);

void func_0897EC5C(S_0897EC5C *arg0) {
    V_0897EC5C a;
    V_0897EC5C b;
    V_0897EC5C c;

    func_089ADE80(arg0);
    arg0->unk_2780.v10(arg0->unk_E30, &arg0->unk_D90, arg0->unk_D94);
    arg0->unk_39C0.v02(arg0->unk_E30);
    a.unk_00 = D_08A05B00[0];
    a.unk_04 = D_08A05B00[1];
    a.unk_08 = D_08A05B08[0];
    func_08925F04(arg0->unk_4118, (s32)&a, 3);
    b.unk_00 = D_08A05B08[1];
    b.unk_04 = D_08A05B10[0];
    b.unk_08 = D_08A05B14[0];
    func_08925F04(arg0->unk_4118, (s32)&b, 3);
    c.unk_00 = D_08A05B18[0];
    c.unk_04 = D_08A05B18[1];
    c.unk_08 = D_08A05B20[0];
    func_08925F04(arg0->unk_4118, (s32)&c, 3);
}

}
