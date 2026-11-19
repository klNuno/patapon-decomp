#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x9870];
    u8 unk_9870;
    u8 pad_9871[3];
    f32 unk_9874;
} T;

inline f32 func_0885F668_unk(f32 arg0) {
    return arg0 > 1.0f ? 1.0f : (arg0 < 0.0f ? 0.0f : arg0);
}

void func_0885F668(T *arg0, f32 arg1) {
    arg0->unk_9874 = func_0885F668_unk(arg1);
    arg0->unk_9870 = 1;
}
}
