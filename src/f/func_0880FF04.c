#include "common.h"

extern u8 D_08A4472C[];
extern void func_0880416C(void *);
extern void func_0880FD88(void *, s32);

u8 **func_0880FF04(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A4472C;
        func_0880FD88(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
