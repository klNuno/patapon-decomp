#pragma divbyzerocheck on
#include "common.h"

extern "C" {

struct S_0887EC08 {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
    u8 pad_10[0x58];
    u32 unk_68[0x12];
    u32 unk_B0;
    u32 unk_B4;
    u32 unk_B8;
};

inline bool has_0887EC08(u32 v, u32 m) { return (v & m) != 0; }

void func_0887EC08(S_0887EC08 *arg0, bool arg1, s32 arg2, u32 arg3) {
    u32 nm;

    if (arg1 == true) {
        nm = ~arg3;
        arg0->unk_00 |= arg3;
        arg0->unk_04 &= nm;
        if (arg0->unk_68[arg2] == 0) {
            arg0->unk_04 |= arg3;
        }
        arg0->unk_0C &= nm;
        if (has_0887EC08(arg0->unk_B0, arg3) == true) {
            if (arg0->unk_68[arg2] % *(volatile u32 *)&arg0->unk_B8 == 0) {
                arg0->unk_0C |= arg3;
            }
        } else {
            if (arg0->unk_68[arg2] % arg0->unk_B4 == 0) {
                if (arg0->unk_68[arg2] != 0) {
                    arg0->unk_B0 |= arg3;
                    arg0->unk_68[arg2] = 0;
                }
                arg0->unk_0C |= arg3;
            }
        }
        arg0->unk_68[arg2] = arg0->unk_68[arg2] + 1;
        if (arg0->unk_68[arg2] == 0xFFFFFFFF) {
            arg0->unk_68[arg2] = 0;
        }
    } else {
        nm = ~arg3;
        arg0->unk_08 &= nm;
        if (has_0887EC08(arg0->unk_00, arg3) == true) {
            arg0->unk_08 |= arg3;
        }
        arg0->unk_00 &= nm;
        arg0->unk_04 &= nm;
        arg0->unk_0C &= nm;
        arg0->unk_B0 &= nm;
        arg0->unk_68[arg2] = 0;
    }
}

}
