#include "common.h"

void func_0880416C(void *);
extern s32 func_088CF04C(s32, s32);
void func_088CF054(s32 *, void *);
void func_088CF0D4(s32 *, void *, s32, s32);

void *func_088CF060(void *arg0, s16 arg1)
{
    s32 ret;
    s32 temp;
    s32 temp2;

    if (arg0 != 0) {
        func_088CF054(&temp, arg0);
        func_088CF04C((s32)&temp2, (s32)arg0);
        func_088CF0D4(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
