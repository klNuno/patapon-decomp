#include "common.h"

extern u8 D_08A4879C[];
void func_0880416C(void *);

void **func_089AD6E8(void **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A4879C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
