#include "common.h"

void func_08979DAC(s32, s32, s8 *);
void func_0897B4E0(s32, s32, s8 *, s32);

void func_08979C1C(s32 arg0, s32 arg1, s8 *arg2, s32 arg3) {
    if ((arg2[0] == 0x53 && arg2[1] == 0x47 && arg2[2] == 0x58) ||
        (arg2[0] == 0x52 && arg2[1] == 0x49 && arg2[2] == 0x46 && arg2[3] == 0x46)) {
        func_08979DAC(arg0, arg1, arg2);
    }
    func_0897B4E0(arg0, arg1, arg2, arg3);
}
