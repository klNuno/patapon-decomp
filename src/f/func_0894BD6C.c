#include "common.h"

s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    u8 pad_10[4];
    s32 unk_14;
    u8 pad_18[8];
    s32 unk_20;
} S;

void func_0894BD6C(S *arg0) {
    if (arg0->unk_14 == 2) {
        s32 temp = func_089B53D8(func_088586E8());
        func_08878864(temp, (void *)0x30104, 2, 1.0f, 0.0f, 0.0f);
    }
    arg0->unk_0C = 0;
    arg0->unk_20 = 0;
    arg0->unk_14 = 0;
}
