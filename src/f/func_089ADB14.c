#include "common.h"

void func_0880416C(void *);
extern u8 D_08A487F8[];

void **func_089ADB14(void **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A487F8;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
