#include "common.h"

void func_0880416C(void *);
void func_088E1970(void *, s16);
void func_088E1AFC(void *, s16);

void *func_088E1B60(u8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 + 4 != NULL) {
            func_088E1970(arg0 + 0x2024, 0);
            func_088E1AFC(arg0 + 4, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
