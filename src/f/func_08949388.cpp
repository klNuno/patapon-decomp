#include "common.h"

extern "C" {

typedef struct Unk_08949388 {
    u8 pad_00[0x104];
    bool unk_104;
    u8 pad_105[0x40F];
    u32 unk_514;
    u32 unk_518;
    u8 pad_51C[0x1702C];
    u32 unk_17548;
} Unk_08949388;

s32 func_0887ED98(s32, s32);
void func_08949F0C(Unk_08949388 *);
void func_08949F64(Unk_08949388 *);
void func_0894A088(Unk_08949388 *);

void func_08949388(Unk_08949388 *arg0, s32 arg1) {
    if (func_0887ED98(arg1, 0x10) != 0) {
        if (arg0->unk_514 != 0) {
            arg0->unk_514--;
        } else if (arg0->unk_518 != 0) {
            arg0->unk_518--;
        }
    }
    if (func_0887ED98(arg1, 0x40) != 0) {
        if (arg0->unk_514 < 10 && arg0->unk_514 + 1 < arg0->unk_17548) {
            arg0->unk_514++;
        } else if (arg0->unk_17548 > arg0->unk_518 + 11) {
            arg0->unk_518++;
        }
    }
    if (func_0887ED98(arg1, 0x2000) != 0) {
        func_08949F0C(arg0);
    }
    if (func_0887ED98(arg1, 0x20) != 0) {
        func_08949F64(arg0);
    }
    if (func_0887ED98(arg1, 0x80) != 0) {
        func_0894A088(arg0);
    }
    if (func_0887ED98(arg1, 0x1000) != 0) {
        arg0->unk_104 = !arg0->unk_104;
    }
}

}
