#include "common.h"

void func_0880416C(void *);
void func_088F23D0(void *, s32);
void func_088FC228(void *, s32);

u8 *func_089121B8(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_088F23D0(arg0 + 0x40, -1);
        func_088FC228(arg0 + 0x28, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
