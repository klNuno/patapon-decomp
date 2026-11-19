#include "common.h"

extern void *D_08AD1E28[];
s32 *func_08868E8C(void *, s32, s32);

s32 func_089450E8(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        return 0;
    }
    return *func_08868E8C(D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL, 0xF, arg1);
}
