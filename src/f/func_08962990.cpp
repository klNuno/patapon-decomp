#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x8D0C];
    u8 unk_8D0C;
    u8 pad_8D0D[3];
    f32 unk_8D10;
} T;

inline f32 func_08962990_unk(f32 arg0) {
    return arg0 > 1.0f ? 1.0f : (arg0 < 0.0f ? 0.0f : arg0);
}

void func_08962990(T *arg0, f32 arg1) {
    arg0->unk_8D10 = func_08962990_unk(arg1);
    arg0->unk_8D0C = 1;
}
}
