#include "common.h"

typedef struct {
    s8 c[10];
} Digits;

extern s8 D_08A0554C[];

void func_08822B3C(s8 *, s8 *);
s32 func_08822BC4(s8 *);
s32 func_0881E218(s32);

s8 *func_08974E50(s8 *arg0, s32 arg1, s8 *arg2) {
    Digits d;
    s32 i;

    func_08822B3C(arg2, arg0);
    if (arg1 < 0) {
        return arg2;
    }
    for (i = func_08822BC4(arg0) - 1; i >= 0; i--) {
        if (func_0881E218(arg2[i]) != 0) {
            break;
        }
    }
    if (i >= 0) {
        d = *(Digits *)D_08A0554C;
        arg2[i] = d.c[arg1 % 10];
        return arg2;
    }
    return arg2;
}
