#include "common.h"

void func_08804000(void *, void (*)(void *, s32), s32, s32);
void func_0880416C(void *);
void func_08950650(void);
extern void func_0887DAB8(void *, s16);

u8 *func_089504A4(u8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        func_08804000(arg0 + 0x120, (void (*)(void *, s32))func_08950650, 0x320, 8);
        func_0887DAB8(arg0 + 0x10, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
