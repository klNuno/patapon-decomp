#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(s32);
};

struct T {
    u8 pad_00[0x10];
    V unk_10;
    u8 pad_94[0x60];
    s32 unk_F4;
    u8 pad_F8[0x8C];
    s32 unk_184;
    u8 pad_188[0x11C];
    s32 unk_2A4;
    u8 pad_2A8[0x38];
    char unk_2E0[0x50];
    s32 unk_330;
    u8 unk_334[0xD4C];
    u8 unk_1080[0x111A0];
    u8 unk_12220[0x12210];
    s32 unk_24430;
    u8 unk_24434;
    u8 unk_24435;
    u8 unk_24436;
    u8 pad_24437[0x10A3D];
    u8 unk_34E74;
};

s32 func_088586E8(void);
s32 func_089B53D8(s32);
s32 func_0887ED98(s32, s32);
s32 func_0887EDA8(s32, s32);
void func_08878864(s32, s32, f32, f32, s32, f32);
void func_0897C3F4(f32, void *, s32);
void func_08913708(char *, s32);
void func_08918548(char *, s32);
void func_08915370(void *, s32);
void func_08876C60(void *);
void func_08977A5C(void *);
void func_089D23B8(void *);
extern u8 *D_08AD1F14[];

inline void *unk_00() {
    u8 *p = D_08AD1F14[0];
    return p != NULL ? p : NULL;
}

void func_08917E20(T *arg0, s32 arg1, s32 arg2) {
    s32 a;
    s32 b;
    s32 c;
    s32 d;

    func_08913708(arg0->unk_2E0, arg1);
    arg0->unk_10.unk_0C(arg1);
    a = arg0->unk_24430;
    if (arg2 != 0) {
        if (func_0887ED98(arg0->unk_330, 0x10) != 0) {
            b = arg0->unk_24430 - 1;
            arg0->unk_24430 = b;
            if (b < 0) {
                arg0->unk_24430 = 2;
            }
        }
        if (func_0887ED98(arg0->unk_330, 0x40) != 0) {
            if (++arg0->unk_24430 > 2) {
                arg0->unk_24430 = 0;
            }
        }
    }
    if (arg0->unk_24430 != a) {
        c = func_089B53D8(func_088586E8());
        func_08878864(c, 1, 1.0f, 0.0f, 2, 0.0f);
        d = arg0->unk_24430;
        if (d == 0) {
            arg0->unk_24434 = 1;
            arg0->unk_F4 = 0;
        } else if (d == 1) {
            arg0->unk_24435 = 1;
            arg0->unk_184 = 0;
        } else if (d == 2) {
            arg0->unk_24436 = 1;
            arg0->unk_2A4 = 0;
        }
    }
    if (arg2 != 0) {
        if (func_0887EDA8(arg0->unk_330, 0x4000) != 0) {
            c = func_089B53D8(func_088586E8());
            func_08878864(c, 0, 1.0f, 0.0f, 2, 0.0f);
            d = arg0->unk_24430;
            if (d == 0) {
                func_0897C3F4(0.8f, (u8 *)func_089B53D8(func_088586E8()) + 0x14, 5);
                func_08977A5C(arg0->unk_1080);
                func_08918548((char *)arg0, 3);
                func_08876C60(unk_00());
            } else if (d == 1) {
                arg0->unk_34E74 = 0;
                func_08876C60(unk_00());
                func_08915370(arg0->unk_334, 2);
                func_08918548((char *)arg0, 1);
            } else if (d == 2) {
                func_08918548((char *)arg0, 8);
                func_089D23B8(arg0->unk_12220);
            }
        }
    }
}

}
