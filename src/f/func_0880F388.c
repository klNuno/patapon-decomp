#include "common.h"

extern s32 func_08810D24(s32, s32);
extern s32 func_0880E260(s32, s32);

s32 func_0880F388(s32 arg0, s32 arg1, s16 arg2) {
    struct {
        s16 unk_00;
        u8 pad_02[2];
    } temp;

    temp.unk_00 = arg2;
    return func_0880E260(func_08810D24(arg0 + 8, (s32)&temp.unk_00), arg1) != 0;
}
