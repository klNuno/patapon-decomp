#include "common.h"

extern int func_0880416C(s32);
void func_089473B8(s32 *arg0, s32 arg1);
void func_089472DC(s32 *arg0, s32 *arg1);
void func_08946E2C(s32 *, s32 *, s32, s32);

s32 *func_08946DB8(s32 *arg0, s16 arg1) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    if (arg0 != NULL) {
        func_089472DC(&temp2, arg0);
        func_089473B8(&temp3, (s32)arg0);
        func_08946E2C(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C((s32)arg0);
        }
    }
    return arg0;
}
