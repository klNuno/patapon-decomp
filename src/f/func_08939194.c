#include "common.h"

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
    u8 pad_14[0x20];
    s32 unk_34;
} Unk;

s32 func_088E5574(s32);
void func_0890AB10(s32, s32, f32, f32, s32);
void func_0890AC9C(s32, f32);

void func_08939194(Unk *arg0) {
    s32 temp = arg0->unk_34;
    s32 unk_00 = func_088E5574(arg0->unk_10);
    func_0890AB10(unk_00, temp, -1.0f, -1.0f, 0);
    unk_00 = func_088E5574(arg0->unk_10);
    func_0890AC9C(unk_00, 0.0f);
}
