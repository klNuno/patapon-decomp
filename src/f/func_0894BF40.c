#include "common.h"

typedef struct H_0894C638 {
    s32 unk_00;
} H_0894C638;

void func_0880416C(void *);
void func_0894BF34(H_0894C638 *, void *);
void func_0894BF2C(H_0894C638 *, void *);
void func_0894BFB4(H_0894C638 *, void *, H_0894C638, H_0894C638);

void *func_0894BF40(void *arg0, s16 arg1)
{
    H_0894C638 ret;
    H_0894C638 temp;
    H_0894C638 temp2;

    if (arg0 != 0) {
        func_0894BF34(&temp, arg0);
        func_0894BF2C(&temp2, arg0);
        func_0894BFB4(&ret, arg0, temp, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
