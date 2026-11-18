#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E08812CF4;

void func_08810790(s32, s32, s32);
s32 func_088107D0(s32 *);
E08812CF4 *func_08812DB4(E08812CF4 *, E08812CF4 *, E08812CF4 *);

E08812CF4 *func_08812CF4(s32 *arg0, E08812CF4 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    E08812CF4 *mid;

    if (arg1 != NULL) {
        mid = arg1 + arg2;
        func_08812DB4(mid, arg1 + arg0[1], func_08812DB4(arg1, mid, (E08812CF4 *)arg0[0]) + arg3);
        func_08810790(func_088107D0(arg0), (s32)arg1, arg4);
    }
    arg0[1] += arg3;
    return (E08812CF4 *)arg0[0] + arg2;
}
