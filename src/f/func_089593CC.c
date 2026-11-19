#include "common.h"

void func_0880416C(void *);
void func_08959394(s32 *, void *);
void func_0895939C(s32 *, void *);
void func_08959440(s32 *, void *, s32, s32);

void *func_089593CC(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_0895939C(&temp, arg0);
        func_08959394(&temp2, arg0);
        func_08959440(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
