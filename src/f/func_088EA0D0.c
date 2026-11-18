#include "common.h"

typedef struct {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
} T088EA0D0_B;

typedef struct {
    u8 pad_00[0x14];
    T088EA0D0_B *unk_14;
} T088EA0D0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_08899E18(s32, s32);
s32 func_08895BC4(s32, s32);
void func_0893F29C(s32, s32);

void func_088EA0D0(T088EA0D0 *arg0, void *arg1) {
    s32 *temp_s1;
    s32 *temp_s0;

    temp_s1 = func_0885356C(arg1, 0, 1, 4);
    temp_s0 = func_0885356C(arg1, 1, 1, 4);
    if (arg0->unk_14 != NULL) {
        func_0893F29C(func_08895BC4(func_08899E18(arg0->unk_14->unk_36B10, 1), *temp_s1), *temp_s0);
    }
    func_08852F00(arg1, 0);
}
