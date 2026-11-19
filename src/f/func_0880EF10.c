#include "common.h"

typedef struct {
    s16 unk_00;
    u8 pad_02[2];
} Unk_0880EF10;

s16 func_08811458(u8 *, Unk_0880EF10 *);

Unk_0880EF10 *func_0880EF10(u8 *arg0, Unk_0880EF10 *arg1, Unk_0880EF10 *arg2)
{
    for (; arg1 < arg2; ++arg1) {
        arg1->unk_00 = func_08811458(arg0 + 0x14, arg1);
    }
    return arg2;
}
