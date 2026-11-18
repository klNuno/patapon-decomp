#include "common.h"

void func_088F23D0(void *, s32);
void func_08865F78(void *, s32);
void func_0880416C(void *);

u8 *func_089BAD9C(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088F23D0(arg0 + 0x2E0, -1);
        func_08865F78(arg0 + 0x240, -1);
        func_08865F78(arg0 + 0x1B0, -1);
        func_08865F78(arg0 + 0x120, -1);
        func_08865F78(arg0 + 0x90, -1);
        func_08865F78(arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
