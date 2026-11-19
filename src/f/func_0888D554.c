#include "common.h"

typedef struct {
    u8 pad_00[0x270];
    u8 unk_270;
    u8 pad_271[3];
    f32 unk_274;
} T;

void func_0888D554(T *arg0, f32 arg1) {
    arg0->unk_274 = arg1 > 1.0f ? 1.0f : (arg1 < 0.0f ? 0.0f : arg1);
    arg0->unk_270 = 1;
}
