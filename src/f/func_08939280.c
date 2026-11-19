#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x20];
    volatile s32 unk_34;
} S;

s32 func_088E5574(s32);
s32 func_0890ABC8(s32);
void func_0890AB10(s32, s32, f32, f32, s32);
void func_0890AC9C(s32, f32);

void func_08939280(S *arg0) {
    if (func_0890ABC8(func_088E5574(arg0->unk_10)) != 0) {
        s32 temp = arg0->unk_34;
        func_0890AB10(func_088E5574(arg0->unk_10), temp, -1.0f, -1.0f, 0);
        func_0890AC9C(func_088E5574(arg0->unk_10), 0.0f);
    }
}
