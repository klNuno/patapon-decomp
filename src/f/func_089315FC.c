#include "common.h"

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_08880778(void *, s32);
void func_08931664(void *);

void *func_089315FC(void *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_08931664(arg0);
        func_08804000((u8 *)arg0 + 0x10, func_08880778, 0xA0, 4);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
