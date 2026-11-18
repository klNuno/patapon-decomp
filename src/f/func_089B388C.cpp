#include "common.h"

extern "C" {

struct S0;
typedef void (S0::*P0)();

struct S1 {
    u8 pad_00[0x50];
    s32 unk_50;
    u8 pad_54[4];
    S0 *unk_58;
    P0 unk_5C;
    u8 unk_68;
    f32 unk_6C;
    f32 unk_70;
    S0 *unk_74;
    P0 unk_78;
    u8 unk_84;
    f32 unk_88;
    f32 unk_8C;
};

s32 func_088CEEE0(void);
void func_088CED30(void *, s32);

void func_089B388C(S1 *arg0, u32 arg1) {
    f32 a;
    f32 b;

    if (arg0->unk_50 && func_088CEEE0()) {
        func_088CED30(arg0, arg1);
        if (arg0->unk_68 == 1) {
            f32 x = arg0->unk_6C;
            a = x + (f32)arg1 / 4800.0f;
            arg0->unk_6C = *(a < arg0->unk_70 ? &a : &arg0->unk_70);
            if (arg0->unk_6C >= arg0->unk_70 && arg0->unk_5C) {
                (arg0->unk_58->*arg0->unk_5C)();
            }
        }
        if (arg0->unk_84 == 1) {
            f32 x = arg0->unk_88;
            b = x + (f32)arg1 / 4800.0f;
            arg0->unk_88 = *(b < arg0->unk_8C ? &b : &arg0->unk_8C);
            if (arg0->unk_88 >= arg0->unk_8C && arg0->unk_78) {
                (arg0->unk_74->*arg0->unk_78)();
            }
        }
    }
}

}
