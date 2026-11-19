#include "common.h"

void func_0880416C(void *);
void func_08810258(void *, s32);
extern void func_08886B8C(void *, s32);

u8 *func_088857D0(u8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        u8 *temp = arg0 + 0x120;
        if (temp != NULL) {
            if (temp != NULL) {
                func_08886B8C(temp, 0);
            }
        }
        func_08810258(arg0 + 0x10C, -1);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
