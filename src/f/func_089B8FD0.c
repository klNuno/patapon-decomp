#include "common.h"

void func_0880416C(void *);
void func_089B926C(s32 *, void *);
void func_089B8FC4(s32 *, void *);
void func_089B9044(s32 *, void *, s32, s32);

void *func_089B8FD0(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_089B8FC4(&temp, arg0);
        func_089B926C(&temp2, arg0);
        func_089B9044(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
