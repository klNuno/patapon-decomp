#include "common.h"

s32 func_08811458(void *arg0, u16 *arg1);

s32 func_0880F340(u8 *arg0, u16 arg1) {
    union {
        u16 unk_00;
        u8 pad_00[4];
    } temp;

    temp.unk_00 = arg1;
    return func_08811458(arg0 + 0x14, &temp.unk_00);
}
