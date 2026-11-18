#include "common.h"

extern "C" {

struct B {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

struct T {
    u8 pad_00[0xC];
    B *unk_0C;
    u8 pad_10[8];
    s32 unk_18;
};

struct P { f32 unk_00, unk_04; };
struct M {
    f32 unk_00;
    u8 pad_04[0x10];
    f32 unk_14;
    u8 pad_18[0x10];
    f32 unk_28;
    u8 pad_2C[4];
    P unk_30;
    s32 unk_38, unk_3C;
    u8 pad_40[0x10];
};

struct D { u8 pad_00[0x20]; };

void func_088154E8(s32, s32);
void func_088157E8(s32, s32);
void func_08855354(char *);
void func_088651A4(void *, M *, void *, s32, s32);
void func_0886575C(s32, s32, s32);
extern s32 func_08865870(void);
extern D D_08A0610C[];

void func_08988548(T *arg0, s32 arg1, const P *arg2, f32 arg4, s32 arg3) {
    M m;
    arg0->unk_0C->unk_14(arg0->unk_18, 0);
    func_088157E8(4, 0);
    func_0886575C(0, 1, 0);
    func_08855354((char *)&m);
    m.unk_00 = arg4;
    m.unk_14 = arg4;
    m.unk_28 = arg4;
    f32 b = arg2->unk_04;
    f32 a = arg2->unk_00;
    m.unk_30.unk_00 = a;
    m.unk_30.unk_04 = b;
    m.unk_3C = 0x3F800000;
    m.unk_38 = 0;
    func_088154E8(1, arg3);
    func_088651A4(&D_08A0610C[arg1], &m, NULL, 0, 0);
    func_08865870();
    func_088157E8(7, 1);
}

}
