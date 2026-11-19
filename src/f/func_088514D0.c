#include "common.h"

typedef struct {
    u8 pad_00[0x4];
    u8 *unk_04;
} S08851550;

S08851550 *func_08852FFC(void *);
u32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);

void func_088514D0(void *arg0, void *arg1) {
    S08851550 *temp_s0;
    u32 temp;

    temp_s0 = func_08852FFC(arg1);
    temp = *func_0885356C(arg1, 0, 1, 4);
    temp_s0->unk_04[temp >> 3] |= (u8)(1 << (temp & 7));
    func_08852F00(arg1, 0);
}
