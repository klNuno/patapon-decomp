#include "common.h"

void func_0880416C(void *);
void func_08865F78(void *, s32);

u8 *func_0894ABE4(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08865F78(arg0 + 0xA0, -1);
        func_08865F78(arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
