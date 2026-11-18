#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    u8 pad_18[0x4BD51 - 0x18];
    u8 unk_4BD51;
} T;

void func_089980A4(T *, s32);
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, s32, s32, f32, f32, f32);

void func_08998C8C(T *arg0, s32 arg1) {
    if (arg1 == 0) {
        func_089980A4(arg0, 0);
        arg0->unk_4BD51 = 1;
        func_08878864(func_089B53D8(func_088586E8()), 0x210007, 2, 1.0f, 0.0f, 0.0f);
    } else if (arg1 == 1) {
        arg0->unk_14 = 1;
    }
}
