#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x2C];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
} S_088C53BC;

void func_0881F5C0(void *, s32, s32);
void func_088BFFC8(s32, s32, s32);
s32 func_088C37F0(s32, S_088C53BC *, s32);

void func_088C53BC(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    S_088C53BC sp30;

    func_0881F5C0(&sp30, 0, 0x40);
    sp30.unk_04 = arg3;
    sp30.unk_34 = arg7;
    sp30.unk_38 = arg5;
    sp30.unk_3C = arg6;
    sp30.unk_00 = arg4;
    func_088BFFC8(arg0, func_088C37F0(arg1, &sp30, arg2), arg4);
}
