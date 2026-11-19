#include "common.h"

void func_0880416C(void *);
extern s32 func_0897A79C(s32);
void func_0897A444(u8 *, s16);

u8 *func_0897A728(u8 *arg0, s16 arg1)
{
    if (arg0 != NULL) {
        u8 *temp;

        func_0897A79C((s32)arg0);
        temp = arg0 + 8;
        if (temp != NULL) {
            func_0897A444(temp, 0);
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
