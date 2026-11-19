#include "common.h"

void func_0880416C(void *);
void func_088A6690(s32 *arg0, s32 *arg1);
void func_088A678C(s32 *arg0, s32 arg1);
void func_088A686C(s32 *, s32 *, s32, s32);

s32 *func_088A67F8(s32 *arg0, s16 arg1) {
    s32 temp;
    s32 temp2;
    s32 temp3;

    if (arg0 != NULL) {
        func_088A6690(&temp2, arg0);
        func_088A678C(&temp3, (s32)arg0);
        func_088A686C(&temp, arg0, temp2, temp3);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
