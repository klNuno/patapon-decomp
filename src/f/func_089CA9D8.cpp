#include "common.h"

extern "C" {
extern f32 D_089DD50C[];
extern f32 D_08A09B10[];
extern f32 D_08A09B14[];
extern f32 D_08A09B18[];
extern f32 D_08A09B1C[];

f32 func_0881A1E0(f32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);
char *func_0898A324(void *);
s32 func_0898583C(char *);
extern s32 func_088CE494(s32, s32);
}

class Unk00 {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(u32);
};

class Unk01 {
public:
    u8 pad_00[0x28];
    virtual void unk_08();
    virtual void unk_0C();
    virtual s32 unk_10();
    virtual void unk_14(s32);
};

class Unk02 : public Unk01 {
public:
    u8 pad_2C[0x20];
    u8 *unk_4C;
    u32 unk_50;
    u8 pad_54[0xC];
    Unk00 unk_60;
    u8 pad_E4[0x10];
    f32 unk_F4;
    f32 unk_F8;
    f32 unk_FC;
    f32 unk_100;
    f32 unk_104;
};

static inline const f32 &unk_00(const f32 &arg0, const f32 &arg1)
{
    if (arg1 < arg0)
        return arg1;
    return arg0;
}

static inline const f32 &unk_04(const f32 &arg0, const f32 &arg1)
{
    if (arg0 < arg1)
        return arg1;
    return arg0;
}

extern "C" void func_089CA9D8(Unk02 *arg0, u32 arg1)
{
    switch (arg0->unk_50) {
    case 0:
        arg0->unk_F8 -= (1.0f / 30.0f) * D_089DD50C[0];
        arg0->unk_F4 += arg0->unk_F8;
        if (arg0->unk_10() == -2 && arg0->unk_F4 < 120.0f)
            arg0->unk_14(2);
        if (arg0->unk_F4 <= 20.0f) {
            func_08878864(func_089B53D8(func_088586E8()), 0x1B0106, 2, 1.0f, 0.0f, 0.0f);
            arg0->unk_F4 = 20.0f;
            arg0->unk_50 = 1;
        }
        break;

    case 1:
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 2;
            arg0->unk_FC = 0.0f;
        }
        arg0->unk_F4 = 20.0f + 60.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        arg0->unk_FC = unk_00(0.05f + arg0->unk_FC, D_08A09B10[0]);
        break;

    case 2:
        if (arg0->unk_FC >= 1.0f) {
            arg0->unk_50 = 3;
            arg0->unk_FC = 0.0f;
        }
        arg0->unk_F4 = 20.0f + 30.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        arg0->unk_FC = unk_00(0.08f + arg0->unk_FC, D_08A09B14[0]);
        break;

    case 3:
        if (arg0->unk_FC >= 1.0f)
            arg0->unk_50 = 4;
        arg0->unk_F4 = 20.0f + 15.0f * func_0881A1E0(3.1415927f * arg0->unk_FC);
        arg0->unk_FC = unk_00(0.1f + arg0->unk_FC, D_08A09B18[0]);
        break;

    case 4:
        arg0->unk_104 -= (f32)arg1 / 4800.0f;
        if (arg0->unk_104 <= 0.0f)
            arg0->unk_50 = 5;
        break;

    case 5:
        arg0->unk_100 = unk_04(arg0->unk_100 - 0.05f, D_08A09B1C[0]);
        if (arg0->unk_100 <= 0.0f) {
            func_088CE494(func_0898583C(func_0898A324(arg0->unk_4C + 0x1212D0)), (s32)arg0);
            arg0->unk_50 = 6;
        }
        break;
    }
    arg0->unk_60.unk_0C(arg1);
}
