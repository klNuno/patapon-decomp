#include "common.h"

extern u8 D_08A44770[];
void func_0880416C(void *);

void **func_0882705C(void **arg0, s16 arg1)
{
    if (arg0 != NULL) {
        *arg0 = D_08A44770;
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
