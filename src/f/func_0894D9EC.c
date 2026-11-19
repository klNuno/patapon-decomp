#include "common.h"

void func_0880416C(void *);
s32 func_0894D0F0(s32 arg0, s16 arg1);
u8 *func_0894E638(u8 *arg0, s16 arg1);

u8 *func_0894D9EC(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        func_0894E638(arg0 + 0x110, -1);
        func_0894D0F0((s32)arg0, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
