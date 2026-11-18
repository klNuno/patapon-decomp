#include "common.h"

void func_0880416C(void *);
void func_08810790(s32, s32, s32);
s32 *func_088107AC(s32 *);
s32 func_088107D0(s32 *);
void func_088107F4(s32 *);

s32 *func_08810708(s32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088107F4(arg0);
        if (*arg0 != 0) {
            func_08810790(func_088107D0(arg0), *arg0, *func_088107AC(arg0));
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
