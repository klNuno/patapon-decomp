#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} T;

typedef struct {
    u8 pad_00[0x74A8];
    u32 unk_74A8;
} U;

void func_0890E9B0(T *arg0, U *arg1) {
    f32 temp = (f32)(arg1->unk_74A8 * 0x3CU);
    arg0->unk_00 = 64.0f;
    arg0->unk_04 = temp;
}
