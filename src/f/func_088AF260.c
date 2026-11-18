#include "common.h"

typedef struct {
    u8 pad_00[0x54];
    s32 unk_54;
    u8 pad_58[0x14];
    s32 unk_6C;
    s32 unk_70;
} T;

s32 func_088586E8(void);
extern s32 func_088AF0B8(s32, s32, s32, s32);
s32 func_089B53E4(s32);
s32 func_08926B10(s32, s32);

void func_088AF260(T *arg0, s32 arg1) {
    if (arg1 != 0) {
        arg0->unk_70 |= 0x100;
    } else {
        arg0->unk_70 &= ~0x100;
    }
    arg0->unk_6C = arg1;
    if (arg1 == 2) {
        func_088AF0B8((s32)arg0, 0, 0, 1);
        arg0->unk_54 = func_08926B10(func_089B53E4(func_088586E8()), 2);
    } else {
        func_088AF0B8((s32)arg0, 0, 0, arg1);
    }
}
