#include "common.h"

extern void func_0880416C(void *);
extern void func_08860FF4(void *, s32);
extern void func_088883E8(void *, s32);

void *func_088882F8(u8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        if (arg0 != NULL) {
            func_08860FF4(arg0 + 0x74, 0);
            func_088883E8(arg0, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
