#include "common.h"

extern "C" {

struct B {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct S {
    u8 pad_00[0x96C];
    B unk_96C;
    u8 pad_970[0x90];
    s32 unk_A00;
};

struct P {
    f32 unk_00;
    f32 unk_04;
};

struct M {
    u8 pad_00[0x30];
    P unk_30;
    s32 unk_38;
    s32 unk_3C;
    u8 pad_40[0x10];
};

struct D {
    u8 pad_00[0x20];
};

void func_088157E8(s32, s32);
void func_08855354(char *);
void func_088564A4(void *, u32);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
extern f32 D_089ECE08[];
extern D D_08A05988[];

void func_0897DC7C(S *arg0, const volatile P *arg1) {
    M m;
    u8 c[0x10];
    f32 x;
    f32 y;

    arg0->unk_96C.unk_14(0, 0);
    func_088157E8(4, 0);
    func_08855354((char *)&m);
    func_0886575C(0, 1, 0);
    func_088564A4(c, 0x4C00036E);
    f32 temp = *(volatile f32 *)D_089ECE08;
    x = arg1->unk_00;
    y = arg1->unk_04 + temp;
    x += temp;
    ((volatile M *)&m)->unk_30.unk_00 = x;
    ((volatile M *)&m)->unk_30.unk_04 = y;
    ((volatile M *)&m)->unk_38 = 0;
    ((volatile M *)&m)->unk_3C = 0x3F800000;
    func_088651A4(&D_08A05988[arg0->unk_A00], (M *)&m, c, 0, 1);
    func_088564A4(c, 0xFF3C2FE1);
    y = arg1->unk_04;
    x = arg1->unk_00;
    ((volatile M *)&m)->unk_30.unk_00 = x;
    ((volatile M *)&m)->unk_30.unk_04 = y;
    ((volatile M *)&m)->unk_38 = 0;
    ((volatile M *)&m)->unk_3C = 0x3F800000;
    func_088651A4(&D_08A05988[arg0->unk_A00], (M *)&m, c, 0, 1);
    func_08865870();
    func_088157E8(7, 1);
}

}
