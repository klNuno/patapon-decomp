#include "common.h"

extern "C" {
typedef struct {
    u8 pad_00[0x10];
    u8 unk_10;
} T;

void func_08814BB4(s32);
s32 func_08856400(s32);
void func_08815B40(f32, f32, s32);

void func_0891E000(T *arg0) {
    if (arg0->unk_10 == 1) {
        func_08815B40(0.0f, 1.0f, func_08856400((s32)arg0));
        func_08814BB4(7);
    }
}
}
