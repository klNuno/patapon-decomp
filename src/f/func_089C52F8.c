#include "common.h"

void func_0880416C(void *);
void func_089C52E4(s32 *, void *);
void func_089C52EC(s32 *, void *);
void func_089C536C(s32 *, void *, s32, s32);

void *func_089C52F8(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_089C52EC(&temp, arg0);
        func_089C52E4(&temp2, arg0);
        func_089C536C(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
