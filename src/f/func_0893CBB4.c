#include "common.h"

void func_0893CD18(void *);
void func_0893F388(void *, s32);
void func_0880416C(void *);

void *func_0893CBB4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0893CD18(arg0);
        func_0893F388((u8 *)arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
