#include "common.h"

void func_0880416C(void *);
void func_0886AFF0(s32 *, s32 *, s32, s32);
void func_0886B108(s32 *, s32);
void func_0886B110(s32 *, s32 *);

void *func_0886AF7C(s32 *arg0, s16 arg1) {
    s32 temp0;
    s32 temp1;
    s32 temp2;

    if (arg0 != NULL) {
        func_0886B110(&temp1, arg0);
        func_0886B108(&temp2, (s32)arg0);
        func_0886AFF0(&temp0, arg0, temp1, temp2);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
