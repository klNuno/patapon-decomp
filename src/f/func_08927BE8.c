#include "common.h"

typedef struct {
    u8 pad_00[0x1F0];
    u8 unk_1F0;
    u8 pad_1F1[3];
    f32 unk_1F4;
} T;

void func_08927BE8(T *arg0, f32 arg1) {
    arg0->unk_1F4 = arg1 > 1.0f ? 1.0f : (arg1 < 0.0f ? 0.0f : arg1);
    arg0->unk_1F0 = 1;
}
