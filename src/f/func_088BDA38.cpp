#include "common.h"

extern "C" {

struct V {
    virtual void unk_08();
    virtual void unk_0C(s32, s32 *, s32);
};

void func_088BE5E8(s32, s32);

struct H {
    s32 unk_00;
    V *unk_04;
    s32 unk_08;
    s32 *unk_0C;

    void unk_10() {
        if (unk_08 != 0) {
            --*unk_0C;
            s32 *p = unk_0C;
            if ((p != NULL ? *p : 0) == 0) {
                unk_04->unk_0C(unk_08, p, unk_00);
                func_088BE5E8(unk_08, unk_00);
            }
        }
    }
};

struct U {};

struct T {
    u8 pad_00[0x7C];
    u8 unk_7C[0x408];
    u32 unk_484;
    u8 pad_488[0x14];
    f32 unk_49C;
    f32 unk_4A0;
    s32 unk_4A4;
    U *unk_4A8;
    void (U::*unk_4AC)();
    u8 unk_4B8;
    u8 pad_4B9[3];
    f32 unk_4BC;
    f32 unk_4C0;
};

void func_088BDC78(H *, u8 *, u32);
void func_088CED30(void *, s32);
void func_0894AC44(s32, s32);
void func_0894B480(char *arg0, f32 fparg0);
extern f32 D_089E01A0[];

void func_088BDA38(T *arg0, u32 arg1) {
    H h;
    f32 x;
    f32 y;
    f32 a, b;
    f32 *p;
    u32 i;

    func_088CED30(arg0, arg1);
    if (arg0->unk_4B8 == 1) {
        u32 *q;
        u32 bits;

        a = arg0->unk_4C0;
        y = a;
        bits = *(u32 *)&y;
        bits = (bits << 1) >> 1;
        q = (u32 *)&y;
        *(u32 *)&y = bits;
        b = (*(f32 *&)q <= 0.0001f) ? 1.0f : arg0->unk_4BC / a;
        a = arg0->unk_4A0;
        f32 c = D_089E01A0[arg0->unk_4A4] - a;
        c *= b;
        arg0->unk_49C = a + c;
        if (arg0->unk_4B8 == 1) {
            x = arg0->unk_4BC + ((f32)arg1 / 4800.0f);
            p = x < arg0->unk_4C0 ? &x : &arg0->unk_4C0;
            arg0->unk_4BC = *p;
            if (arg0->unk_4BC >= arg0->unk_4C0 && arg0->unk_4AC) {
                (arg0->unk_4A8->*arg0->unk_4AC)();
            }
        }
        if ((u8)(arg0->unk_4B8 != 0 && arg0->unk_4BC >= arg0->unk_4C0) == 1) {
            arg0->unk_4B8 = 0;
        }
    }
    for (i = 0; i < arg0->unk_484; i++) {
        func_088BDC78(&h, arg0->unk_7C, i);
        func_0894B480((char *)h.unk_08, arg0->unk_49C);
        func_0894AC44(h.unk_08, arg1);
        h.unk_10();
    }
}

}
