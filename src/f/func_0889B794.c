#include "common.h"

typedef struct {
    u8 pad_00[0x6C];
    u32 unk_6C;
} T;

void func_0889B834(T *, u32);

void func_0889B794(T *arg0, u32 arg1) {
    func_0889B834(arg0, (u32)((f32)arg0->unk_6C * ((f32)arg1 / 4800.0f)));
}
