#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
} T;

s32 func_0897333C(void);
void func_089737CC(T *, s32, s32);

void func_08972DCC(f32 arg1, T *arg0) {
    s32 temp = func_0897333C();
    if (temp >= 0) {
        func_089737CC(arg0, temp, 0);
    }
    arg0->unk_30 = arg1;
    ++arg0->unk_28;
}
