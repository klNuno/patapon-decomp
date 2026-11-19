#include "common.h"

void func_0880416C(void *);
void func_08935358(s32 *, void *);
void func_08935360(s32 *, void *);
void func_089353E0(s32 *, void *, s32, s32);

void *func_0893536C(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_08935360(&temp, arg0);
        func_08935358(&temp2, arg0);
        func_089353E0(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
