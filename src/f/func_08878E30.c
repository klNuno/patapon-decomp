#include "common.h"

void func_088792B8(s32 arg0, char *arg1, s32 arg2);
void func_08878EDC(s32 *, char *, s32, s32, f32, f32, f32, s32);

void func_08878E30(s32 *arg0, char *arg1, s32 arg2, s32 arg3, f32 arg5, f32 arg6, f32 arg7, s32 arg4) {
    volatile s32 temp;

    func_088792B8((s32)&temp, arg1, arg2);
    if (temp >= 0) {
        func_08878EDC(arg0, arg1, temp, arg3, arg5, arg6, arg7, arg4);
    } else {
        *arg0 = -1;
    }
}
