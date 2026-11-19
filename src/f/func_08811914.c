#include "common.h"

s32 func_0881193C(s32 arg0, s32 arg1);

s32 func_08811914(s32 arg0, s32 arg1) {
    struct {
        s32 unk_00;
        u8 pad_04[4];
    } temp1;
    s32 temp0;

    temp0 = arg0;
    temp1.unk_00 = arg1;
    return func_0881193C((s32)&temp1.unk_00, (s32)&temp0);
}
