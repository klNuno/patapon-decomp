#include "common.h"

typedef struct {
    u8 pad_00[0x50];
    f32 unk_50;
    f32 unk_54;
} T;

typedef struct {
    T *unk_00;
    u8 pad_04[0xC];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
} U;

s32 func_0887ED78(s32, s32);

void func_0896D284(U *arg0) {
    arg0->unk_10 += 3.0f * arg0->unk_00->unk_50;
    arg0->unk_14 -= 3.0f * arg0->unk_00->unk_54;
    if (func_0887ED78((s32)arg0->unk_00, 0x100) != 0) {
        arg0->unk_18 += 3.0f;
    }
    if (func_0887ED78((s32)arg0->unk_00, 0x200) != 0) {
        arg0->unk_18 -= 3.0f;
    }
}
