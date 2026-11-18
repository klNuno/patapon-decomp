#include "common.h"

extern s32 func_08822AD0(s32, s32);
extern s32 func_0885AB7C(s32, s32, s32);
extern s32 func_0885AB3C(s32, s32);

s32 func_088E5DA8(s32 *arg0, s32 arg1) {
    s32 n;
    s32 i;
    s32 temp;

    n = *(s32 *)(func_0885AB3C(*arg0, 2));
    for (i = 0; i < n; i++) {
        temp = func_0885AB7C(*arg0, 2, i);
        if (func_08822AD0(temp, arg1) == 0) {
            return temp;
        }
    }
    return 0;
}
