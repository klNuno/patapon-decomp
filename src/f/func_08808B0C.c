#include "common.h"

void func_08808B88(s32 *, const s32 *);

s32 *func_08808B0C(s32 *arg0, const s32 *arg1, u32 arg2) {
    s32 *temp = arg0;
    u32 i = 0;
    if (arg2 != 0) {
        do {
            func_08808B88(arg0++, arg1++);
        } while (++i < arg2);
    }
    return temp;
}
