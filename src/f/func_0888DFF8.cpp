#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x92B0];
    u8 unk_92B0;
    u8 pad_92B1[3];
    f32 unk_92B4;
} T;

inline f32 func_0888DFF8_unk(f32 arg0) {
    return arg0 > 1.0f ? 1.0f : (arg0 < 0.0f ? 0.0f : arg0);
}

void func_0888DFF8(T *arg0, f32 arg1) {
    arg0->unk_92B4 = func_0888DFF8_unk(arg1);
    arg0->unk_92B0 = 1;
}
}
