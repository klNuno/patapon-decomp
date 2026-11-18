#include "common.h"

s32 func_0883C8A4(s32);
void func_0883C1F8(s32, s32, s32);

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[0x14];
    f32 unk_20;
} Unk;

void func_0889B178(Unk *arg0, f32 arg1) {
    if (arg0->unk_08 >= 0 && (func_0883C8A4(arg0->unk_08) & 7)) {
        u32 temp = (u32)(128.0f * arg0->unk_20 * arg1);
        func_0883C1F8(arg0->unk_08, temp, temp);
    }
}
