#include "common.h"

extern void *D_08AD1E28[];
s32 *func_08868E8C(void *, s32, s32);

s32 func_0887744C(void *arg0, s32 arg1, s32 arg2)
{
    void *temp;
    s32 *p;

    if (arg1 == 0) {
        return 0;
    }
    temp = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    if (temp == NULL) {
        return 0;
    }
    p = func_08868E8C(temp, arg2, arg1);
    if (p != NULL) {
        return *p;
    }
    return 0;
}
