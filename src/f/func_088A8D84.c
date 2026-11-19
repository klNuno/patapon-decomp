#include "common.h"

void func_0880416C(void *);
void func_088A8DF8(s32 *, s32 *, s32, s32);
void func_088A8D70(s32 *, s32);
void func_088A8D78(s32 *, s32 *);

void *func_088A8D84(s32 *arg0, s16 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    if (arg0 != NULL) {
        func_088A8D78(&temp1, arg0);
        func_088A8D70(&temp2, (s32)arg0);
        func_088A8DF8(&temp0, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
