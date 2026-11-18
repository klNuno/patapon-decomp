#include "common.h"

void func_0880416C(void *);
void func_08912C38(void *, s32);
void func_08931AD0(void *, s32);
void func_0894E448(void *, s32);
void func_0894E5D4(void *, s32);

u8 *func_0894E638(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_08931AD0(arg0 + 0x1A180, -1);
        func_08912C38(arg0 + 0x190B0, -1);
        if (arg0 != NULL) {
            func_0894E448(arg0 + 0x19094, 0);
            func_0894E5D4(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
