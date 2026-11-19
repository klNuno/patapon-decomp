#include "common.h"

extern u8 D_08A4525C[];
void func_0880416C(void *);

void **func_0887C644(void **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A4525C;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
