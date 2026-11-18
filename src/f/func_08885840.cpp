#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x104];
    bool unk_104;
    u8 pad_105[0x118 - 0x105];
    u32 unk_118;
    u32 unk_11C;
    u8 pad_120[4];
    u32 unk_124;
} S_08885840;

s32 func_0887ED98(s32, s32);
void func_08885EC0(S_08885840 *);
void func_08885F0C(S_08885840 *);
void func_08885FE4(S_08885840 *);

void func_08885840(S_08885840 *arg0, s32 arg1) {
    if (func_0887ED98(arg1, 0x10) != 0) {
        if (arg0->unk_118 != 0) {
            arg0->unk_118--;
        } else if (arg0->unk_11C != 0) {
            arg0->unk_11C--;
        }
    }
    if (func_0887ED98(arg1, 0x40) != 0) {
        if (arg0->unk_118 < 10 && arg0->unk_118 + 1 < arg0->unk_124) {
            arg0->unk_118++;
        } else if (arg0->unk_124 > arg0->unk_11C + 11) {
            arg0->unk_11C++;
        }
    }
    if (func_0887ED98(arg1, 0x2000) != 0) {
        func_08885EC0(arg0);
    }
    if (func_0887ED98(arg1, 0x20) != 0) {
        func_08885F0C(arg0);
    }
    if (func_0887ED98(arg1, 0x80) != 0) {
        func_08885FE4(arg0);
    }
    if (func_0887ED98(arg1, 0x1000) != 0) {
        arg0->unk_104 = !arg0->unk_104;
    }
}

}
