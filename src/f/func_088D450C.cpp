#include "common.h"

struct T1 {
    f32 unk_00;
    f32 unk_04;
};

class T2 {
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, f32, f32, void *, s32);
    virtual void unk_18(s32);
    u8 pad_04[0x60];
    s32 unk_64;
    s32 unk_68;
    u8 pad_6C[0x654];
    f32 unk_6C0;
    f32 unk_6C4;
    f32 unk_6C8;
    f32 unk_6CC;
};

struct T3 {
    u8 pad_00[0x6E0];
    T2 *unk_6E0;
    u8 pad_6E4[0x34];
    s32 unk_718;
    u8 pad_71C[0x194];
    u8 unk_8B0[0x14];
    s32 unk_8C4;
    u8 pad_8C8[0xC];
    f32 unk_8D4;
    f32 unk_8D8;
    u8 pad_8DC[8];
    s32 unk_8E4;
    u8 pad_8E8[5];
    u8 unk_8ED;
};

extern "C" {

void func_088D52D0(T3 *, f32);
void func_0892CDE8(T3 *, s32, s32, T1 *, u8, s32);

void func_088D450C(T3 *arg0, s32 arg1) {
    T1 temp;
    f32 x;
    T2 *p;
    f32 a, b;
    x = arg0->unk_8D4;
    if (arg0->unk_718 == 4 || arg0->unk_718 == 2) {
        x = arg0->unk_8D8;
    }
    if (arg1 != 0) {
        func_088D52D0(arg0, x);
        arg0->unk_6E0->unk_14(arg0->unk_8C4, 0.0f, 0.0f, arg0->unk_8B0, arg1);
        arg0->unk_6E0->unk_18(0);
        arg0->unk_8E4 = 0;
        p = arg0->unk_6E0;
        a = p->unk_6C8 - p->unk_6C0;
        b = p->unk_6CC - p->unk_6C4;
        temp.unk_00 = 24.0f + a;
        temp.unk_04 = b;
        func_0892CDE8(arg0, p->unk_68, p->unk_64, &temp, arg0->unk_8ED, -1);
        arg0->unk_8ED = 0;
    }
}

}
