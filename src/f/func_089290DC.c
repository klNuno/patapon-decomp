#include "common.h"

extern int func_0880416C(s32);
void func_089290C8(s32 *arg0, s32 arg1);
void func_089290D0(s32 *arg0, s32 *arg1);
void func_08929150(s32 *, s32 *, s32, s32);

s32 *func_089290DC(s32 *arg0, s16 arg1) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    if (arg0 != NULL) {
        func_089290D0(&temp2, arg0);
        func_089290C8(&temp3, (s32)arg0);
        func_08929150(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C((s32)arg0);
        }
    }
    return arg0;
}
