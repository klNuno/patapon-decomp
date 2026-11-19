#include "common.h"

void func_08810B0C(s32 *, s32 *);

void func_08811DD0(s32 arg0, s32 arg1) {
    struct { s32 unk_00; s32 unk_04; u8 pad_08[4]; } temp;
    temp.unk_00 = arg0;
    temp.unk_04 = arg1;
    func_08810B0C(&temp.unk_04, &temp.unk_00);
}
