#include "common.h"

void func_0880416C(void *);
void func_089238BC(s32 *arg0, s32 arg1);
void func_089238C4(s32 *, void *);
void func_08923944(s32 *, void *, s32, s32);

void *func_089238D0(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_089238C4(&temp, arg0);
        func_089238BC(&temp2, (s32)arg0);
        func_08923944(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
