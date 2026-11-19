#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(void *);
};

struct S {
    u8 pad_00[0x1212D0];
    char unk_1212D0[4];
};

struct T {
    u8 pad_00[0x4C];
    S *unk_4C;
    u32 unk_50;
    u8 pad_54[0xC];
    u8 unk_60[0x84];
    u8 pad_E4[0x10];
    f32 unk_F4;
    f32 unk_F8;
    f32 unk_FC;
    f32 unk_100;
    s32 unk_104;
    u8 unk_108;
    u8 pad_109[0x13];
    s32 unk_11C;
};

extern f32 D_08A0957C[];
extern f32 D_08A09580[];
extern f32 D_08A09584[];
extern f32 D_08A09588[];

f32 func_0881A1E0(f32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
s32 func_0898A324(char *);
s32 func_0898583C(s32);
s32 func_088CE494(s32, void *);
void func_089C3DB4(T *);

static inline const f32 &func_inline(const f32 &arg0, const f32 &arg1) {
    if (arg1 < arg0) {
        return arg1;
    }
    return arg0;
}

static inline const f32 &func_inline2(const f32 &arg0, const f32 &arg1) {
    if (arg0 < arg1) {
        return arg1;
    }
    return arg0;
}

void func_089C393C(T *arg0, void *arg1) {
    switch (arg0->unk_50) {
    case 0:
        arg0->unk_F4 += 20.0f;
        break;
    case 1: {
        s32 n = --arg0->unk_11C;
        if (n < 19) {
            arg0->unk_F8 = 10.0f;
            arg0->unk_50 = 2;
        }
        break;
    }
    case 2:
        --arg0->unk_11C;
        if (arg0->unk_104 != 0) {
            arg0->unk_108 = 1;
            arg0->unk_50 = 7;
        } else {
            f32 delta = arg0->unk_F8;
            f32 t = (arg0->unk_F4 -= delta);
            if (t <= 20.0f) {
                arg0->unk_F4 = 20.0f;
                arg0->unk_108 = 1;
                func_08878864(func_089B53D8(func_088586E8()), 0x200112, 2, 1.0f, 0.0f, 0.0f);
                arg0->unk_50 = 3;
            }
        }
        break;
    case 3: {
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 4;
            arg0->unk_FC = 0.0f;
        }
        f32 t = func_0881A1E0(3.1415927f * arg0->unk_FC);
        f32 v = 60.0f;
        v *= t;
        arg0->unk_F4 = 20.0f + v;
        f32 u = 0.05f + arg0->unk_FC;
        arg0->unk_FC = func_inline(u, D_08A0957C[0]);
        break;
    }
    case 4: {
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 5;
            arg0->unk_FC = 0.0f;
        }
        f32 t = func_0881A1E0(3.1415927f * arg0->unk_FC);
        f32 v = 30.0f;
        v *= t;
        arg0->unk_F4 = 20.0f + v;
        f32 u = 0.08f + arg0->unk_FC;
        arg0->unk_FC = func_inline(u, D_08A09580[0]);
        break;
    }
    case 5: {
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 6;
        }
        f32 t = func_0881A1E0(3.1415927f * arg0->unk_FC);
        f32 v = 15.0f;
        v *= t;
        arg0->unk_F4 = 20.0f + v;
        f32 u = 0.1f + arg0->unk_FC;
        arg0->unk_FC = func_inline(u, D_08A09584[0]);
        break;
    }
    case 6: {
        f32 u = arg0->unk_100 - 0.05f;
        f32 t = func_inline2(u, D_08A09588[0]);
        arg0->unk_100 = t;
        if (t <= 0.0f) {
            func_088CE494(func_0898583C(func_0898A324(arg0->unk_4C->unk_1212D0)), arg0);
            arg0->unk_50 = 8;
        }
        break;
    }
    case 7:
        func_089C3DB4(arg0);
        break;
    }
    ((V *)arg0->unk_60)->unk_0C(arg1);
}

}
