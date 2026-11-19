#include "common.h"

void func_0880416C(void *);
void func_088E19E4(s32 *, void *, s32, s32);
void func_088E195C(s32 *, void *);
void func_088E1964(s32 *, void *);

void *func_088E1970(s32 *arg0, s16 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    if (arg0 != NULL) {
        func_088E1964(&temp1, arg0);
        func_088E195C(&temp2, arg0);
        func_088E19E4(&temp0, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
