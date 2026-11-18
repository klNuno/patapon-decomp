#include "common.h"

s32 func_088E5574(s32);
extern s32 func_0890ABC8(s32);
void func_0890AB10(s32, s32, f32, f32, s32);
void func_0890AC9C(s32, f32);

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[8];
    u8 unk_1C;
    u8 pad_1D[0x17];
    s32 unk_34;
    u8 pad_38[4];
    s32 unk_3C;
} Unk;

void func_089391F8(Unk *arg0) {
    if (func_0890ABC8(func_088E5574(arg0->unk_10)) != 0) {
        s32 temp = arg0->unk_34;
        s32 temp2 = func_088E5574(arg0->unk_10);
        func_0890AB10(temp2, temp, -1.0f, -1.0f, 0);
        func_0890AC9C(func_088E5574(arg0->unk_10), 0.0f);
        arg0->unk_3C = 1;
        arg0->unk_1C = 1;
    }
}
