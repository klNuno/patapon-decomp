#include "common.h"

void func_089290C8(s32 *arg0, s32 arg1);
void func_089290D0(s32 *arg0, s32 *arg1);
void func_08929150(s32 *, s32 *, s32, s32);

typedef struct {
    u8 pad_00[0x20];
    u32 unk_20;
    u8 pad_24[0x1814];
    s32 unk_1838;
} T;

void func_08929354(T *arg0) {
    s32 temp0;
    s32 temp1;
    s32 temp2;
    s32 *temp3;

    arg0->unk_20 = 0;
    func_089290D0(&temp1, &arg0->unk_1838);
    temp3 = (s32 *)(u32)&temp2;
    func_089290C8(temp3, (s32)&arg0->unk_1838);
    func_08929150(&temp0, &arg0->unk_1838, temp1, temp2);
}
