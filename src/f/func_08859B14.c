#include "common.h"

s32 func_08859C04(void);
u32 func_0885A04C(s32);
u32 func_088146E4(u32);

u32 func_08859B14(u32 arg0) {
    u32 temp = func_0885A04C(func_08859C04());
    u32 unk_00 = arg0 + (0x10 - (arg0 & 0xF));
    u32 unk_04;
    if (temp < unk_00 + 0x40) {
        return 0;
    }
    unk_04 = func_088146E4(unk_00 + 0x10);
    return unk_04 + (0x10 - (unk_04 & 0xF));
}
