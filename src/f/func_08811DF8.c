#include "common.h"

void func_0880416C(void *);
s32 *func_0880F5B4(void *);
void func_08811E7C(s32, s32);
s32 func_08811E9C(void *);

void *func_08811DF8(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if (*func_0880F5B4(arg0) != 0) {
            func_08811E7C(func_08811E9C(arg0), *func_0880F5B4(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
