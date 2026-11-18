#include "common.h"

typedef struct {
    s32 unk_00;
} I_08811980;

s32 func_08811A84(I_08811980, I_08811980);
void func_088111EC(I_08811980 *, I_08811980 *);
void func_08811A4C(I_08811980 *, s32);
s32 func_0881136C(I_08811980 *);
s32 func_0881135C(s32, s32);
I_08811980 *func_08811224(I_08811980 *);
void func_08811178(I_08811980 *, I_08811980 *);

void func_08811980(I_08811980 *arg0, I_08811980 arg1, I_08811980 arg2, s32 arg3) {
    I_08811980 it;
    s32 n;
    s32 half;

    n = func_08811A84(arg1, arg2);
    while (n > 0) {
        func_088111EC(&it, &arg1);
        half = n / 2;
        func_08811A4C(&it, half);
        if (func_0881135C(func_0881136C(&it), arg3) != 0) {
            func_08811178(&arg1, func_08811224(&it));
            n -= half + 1;
        } else {
            n = half;
        }
    }
    func_088111EC(arg0, &arg1);
}
