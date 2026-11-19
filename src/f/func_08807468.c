#include "common.h"

extern u8 D_08A444E4[];
void func_0880416C(void *);
void func_08806520(void *, s32);

u8 **func_08807468(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A444E4;
        func_08806520(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
