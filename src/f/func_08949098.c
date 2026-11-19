#include "common.h"

void func_0880416C(void *);
void func_0894910C(s32 *, void *, s32, s32);
void func_08949074(s32 *, s32);
void func_0894907C(s32 *, s32 *);

void *func_08949098(s32 *arg0, s16 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    if (arg0 != NULL) {
        func_0894907C(&temp1, arg0);
        func_08949074(&temp2, (s32)arg0);
        func_0894910C(&temp0, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
