#include "common.h"

extern u8 D_08A44484[];
extern void func_0880416C(void *);
extern void func_08808470(void *, s32);

u8 **func_0880789C(u8 **arg0, s16 arg1) {
    if (arg0 != NULL) {
        *arg0 = D_08A44484;
        func_08808470(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
