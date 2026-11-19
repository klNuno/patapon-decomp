#include "common.h"

extern "C" {

class Unk00 {
public:
    virtual void unk_08();
    virtual s32 unk_0C();
};

struct Unk01 {
    u8 pad_00[8];
    Unk00 *unk_08;
    u8 pad_0C[0x10];
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
};

s32 *func_0884EBA0(s32, s32);
f32 *func_0884EBB0(s32, s32);

static inline void unk_00(Unk01 *arg0, s32 arg1, s32 arg2, s32 arg3)
{
    *func_0884EBA0(arg1, arg2) = arg0->unk_1C;
    *func_0884EBA0(arg1, arg2 + 1) = arg0->unk_20;
    *func_0884EBA0(arg1, arg2 + 2) = arg0->unk_24;
    *func_0884EBA0(arg1, arg2 + 3) = arg0->unk_28;
    *func_0884EBA0(arg1, arg2 + 4) = arg0->unk_2C;
    *func_0884EBB0(arg1, arg3) = arg0->unk_30;
    *func_0884EBB0(arg1, arg3 + 1) = arg0->unk_34;
    *func_0884EBB0(arg1, arg3 + 2) = arg0->unk_38;
}

s32 func_089723C0(Unk01 *arg0, s32 arg1)
{
    s32 t = arg0->unk_08->unk_0C();
    switch (arg1) {
    case 0:
        unk_00(arg0, t, 0x19, 0xE);
        return 1;
    case 1:
        unk_00(arg0, t, 0x1E, 0x11);
        return 1;
    case 2:
        unk_00(arg0, t, 0x23, 0x14);
        return 1;
    case 3:
        unk_00(arg0, t, 0x28, 0x17);
        return 1;
    case 4:
        unk_00(arg0, t, 0x2D, 0x1A);
        return 1;
    case 5:
        unk_00(arg0, t, 0x32, 0x1D);
        return 1;
    default:
        return 0;
    }
}

}
