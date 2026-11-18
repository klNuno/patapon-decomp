#include "common.h"

typedef struct {
    u8 pad_00[0x18];
    f32 unk_18;
    f32 unk_1C;
    u8 pad_20[4];
    u32 unk_24;
    u32 unk_28;
} T;

void func_0887B2F8(T *arg0) {
    f32 temp = (f32)arg0->unk_28;
    arg0->unk_18 = temp / (f32)arg0->unk_24;
    arg0->unk_1C = (4096.0f * (f32)arg0->unk_28) / 60.0f;
}
