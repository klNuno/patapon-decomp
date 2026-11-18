#include "common.h"

extern s32 func_08822AD0(char *, char *);
u32 func_0882C214(s32);
char *func_0882C278(s32, u32);

s32 func_0893EE58(s32 *arg0, char *arg1) {
    u32 n;
    u32 i;

    n = func_0882C214(*arg0);
    for (i = 0; i < n; i++) {
        if (func_08822AD0(arg1, &func_0882C278(*arg0, i)[0x150]) == 0) {
            return i;
        }
    }
    return -1;
}
