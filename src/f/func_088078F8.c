#include "common.h"

void func_0880416C(void *);
void func_08807954(void *, s16);
extern u8 D_08A44448[];

void **func_088078F8(void **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A44448;
        func_08807954(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
