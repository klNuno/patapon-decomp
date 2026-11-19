#include "common.h"

void func_0880416C(void *);
void func_089136C0(void *, s32);
void func_089D5138(s32 *);
void func_089D534C(void *, s16);

void *func_089D50D0(void *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_089D5138((s32 *)arg0);
        func_089136C0((u8 *)arg0 + 0x50, -1);
        func_089D534C((u8 *)arg0 + 8, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
