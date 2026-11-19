#include "common.h"

extern u8 D_08A445C8[];
void func_0880416C(void *);
void func_088041A8(void *, s16);
void func_0880627C(void *, s16);

void *func_0880B068(u8 **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A445C8;
        func_0880627C(arg0 + 1, -1);
        func_088041A8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
