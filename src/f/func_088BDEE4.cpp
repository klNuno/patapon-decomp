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

    s32 unk_10() { return unk_0C != NULL ? *unk_0C : 0; }

    void unk_14() {
        if (unk_08 != 0) {
            --*unk_0C;
            if (unk_10() == 0) {
                unk_04->unk_0C(unk_08, *(s32 **)&unk_0C, unk_00);
                func_088BE5E8(unk_08, unk_00);
            }
        }
    }
};

struct U {
    f32 unk_00, unk_04, unk_08, unk_0C;
    void unk_10(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
        unk_00 = arg0;
        unk_04 = arg1;
        unk_08 = arg2;
        unk_0C = arg3;
    }
};

struct T {
    u8 pad_00[0x40];
    U unk_40;
    u8 pad_50[0x2C];
    u8 unk_7C[0x410];
    s32 unk_48C, unk_490;
    u8 unk_494;
    u8 pad_495[3];
    f32 unk_498;
};

s32 func_088CEEE0(char *arg0);
void func_088BDC78(H *, u8 *, u32);
void func_088BE100(void *arg0, H *arg1, U *arg2, s32 arg3);

void func_088BDEE4(T *arg0) {
    H a, b, c;
    U d, e;

    if ((u8)func_088CEEE0((char *)arg0) != 0) {
        if (arg0->unk_494 == 0) {
            func_088BDC78(&a, arg0->unk_7C, arg0->unk_48C);
            func_088BE100(arg0, &a, &arg0->unk_40, 1);
            a.unk_14();
        } else {
            f32 x, y, z;
            func_088BDC78(&b, arg0->unk_7C, arg0->unk_490);
            z = arg0->unk_40.unk_0C * arg0->unk_498;
            y = arg0->unk_40.unk_08;
            x = arg0->unk_40.unk_04;
            d.unk_00 = arg0->unk_40.unk_00;
            d.unk_04 = x;
            d.unk_08 = y;
            d.unk_0C = z;
            func_088BE100(arg0, &b, &d, 1);
            b.unk_14();
            func_088BDC78(&c, arg0->unk_7C, arg0->unk_48C);
            z = 1.0f - arg0->unk_498;
            e.unk_10(arg0->unk_40.unk_00, arg0->unk_40.unk_04, arg0->unk_40.unk_08, arg0->unk_40.unk_0C * z);
            func_088BE100(arg0, &c, &e, 1);
            c.unk_14();
        }
    }
}

}
