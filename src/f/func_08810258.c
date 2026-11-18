#include "common.h"

void func_0880416C(void *);
s32 func_0880DFC4(void);
s32 *func_0880F23C(void *);
void func_0880FC44(s32, s32, s32);
s32 func_0880FCD8(void *);
s32 func_0880FF94(void *);

void *func_08810258(void *arg0, s16 arg1) {
    s32 temp_s1;
    s32 *temp_s0;

    if (arg0 != NULL) {
        if (func_0880DFC4() != 0) {
            temp_s1 = func_0880FCD8(arg0);
            temp_s0 = func_0880F23C(arg0);
            func_0880FC44(temp_s1, *temp_s0, func_0880FF94(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
