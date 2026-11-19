#include "common.h"

extern u8 D_08A4474C[];
void func_0880416C(void *);
void func_0880FD88(void *, s32);

u8 **func_0880FD2C(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4474C;
        func_0880FD88(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
