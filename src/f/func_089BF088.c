#include "common.h"

typedef struct {
    u8 pad_00[0x182C];
    u32 unk_182C;
    u32 unk_1830;
} T;

void func_089BF088(T *arg0, f32 *arg1, f32 *arg2, u32 *arg3) {
    u32 temp0;
    u32 temp1;
    f32 temp2;
    temp2 = (f32)(*arg3 = 0);
    *arg2 = temp2;
    *arg1 = temp2;
    temp0 = arg0->unk_182C;
    temp1 = temp0 + arg0->unk_1830;
    if (temp1 != 0) {
        temp2 = (f32)temp0 / (f32)temp1;
        *arg2 = temp2;
        *arg1 = temp2;
    }
}
