#include "common.h"

extern void func_0880416C(void *);
void func_08865F78(void *, s32);
void func_089458C8(void *, s32);

void *func_0894597C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78((u8 *)arg0 + 0x10, -1);
        func_089458C8(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
