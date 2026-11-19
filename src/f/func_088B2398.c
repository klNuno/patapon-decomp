#include "common.h"

void func_0880416C(void *);
void func_088B2384(s32 *, void *);
void func_088B238C(s32 *, void *);
void func_088B240C(s32 *, void *, s32, s32);

void *func_088B2398(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_088B238C(&temp, arg0);
        func_088B2384(&temp2, arg0);
        func_088B240C(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
