#include "common.h"

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
} T0;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[4];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x148];
    u8 unk_15C;
    u8 pad_15D[3];
    s32 unk_160;
    f32 unk_164;
    f32 unk_168;
    s32 unk_16C;
} T;

s32 func_089A5444(s32);
s32 func_08998080(s32, s32);
s32 func_0899A900(s32);
s32 func_0899A908(s32, s32);
T0 *func_0899E13C(s32);

void func_089A0504(T *arg0, s32 arg1, f32 arg2) {
    s32 temp;
    s32 temp1 = func_089A5444(arg0->unk_04);
    temp = func_08998080(temp1, arg0->unk_10);
    if (func_0899A900(temp) != 0) {
        arg0->unk_168 = func_0899E13C(func_0899A908(temp, arg0->unk_0C))->unk_30 - 12.5f;
        arg0->unk_16C = 0;
        arg0->unk_0C = arg1;
        arg0->unk_160 = 0;
        arg0->unk_164 = arg2;
        arg0->unk_15C = 1;
    }
}
