#include "common.h"

typedef struct Unk_088750F8_Elem {
    u8 pad_00[0x2C];
    u32 unk_2C;
    u8 unk_30[0x28];
    s32 unk_58;
    u8 pad_5C[0x4];
} Unk_088750F8_Elem;

typedef struct Unk_088750F8 {
    u8 pad_00[0x68];
    Unk_088750F8_Elem *unk_68;
    s32 unk_6C;
} Unk_088750F8;

s32 func_0881F08C(void *, s32, u32);
u32 func_08822BC4(s32);

s32 func_088750F8(Unk_088750F8 *arg0, s32 arg1) {
    Unk_088750F8_Elem *p = arg0->unk_68;
    Unk_088750F8_Elem *end = p + arg0->unk_6C;
    u32 temp;
    u32 len;

    for (; p != end; p++) {
        temp = func_08822BC4(arg1);
        len = (temp < p->unk_2C) ? p->unk_2C : temp;
        if (func_0881F08C(p->unk_30, arg1, len) == 0) {
            return p->unk_58;
        }
    }
    return 0;
}
