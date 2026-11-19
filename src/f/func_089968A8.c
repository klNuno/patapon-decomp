#include "common.h"
typedef struct T T;
typedef struct {
    u8 pad_00[4];
    T *unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    u8 pad_10[0x12C];
    s32 unk_13C[7];
    u8 unk_158;
} T0;

void func_08995398(T *, s32);

void func_089968A8(T0 *arg0) {
    s32 temp;
    arg0->unk_158 = 0;
    temp = arg0->unk_13C[arg0->unk_0C];
    arg0->unk_0C = temp;
    func_08995398(arg0->unk_04, temp);
}
