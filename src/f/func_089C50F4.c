#include "common.h"

void func_0880416C(void *);
void func_089C5168(s32 *, void *, s32, s32);
void func_089C50E0(s32 *, void *);
void func_089C50E8(s32 *, void *);

void *func_089C50F4(s32 *arg0, s16 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    if (arg0 != NULL) {
        func_089C50E8(&temp1, arg0);
        func_089C50E0(&temp2, arg0);
        func_089C5168(&temp0, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
