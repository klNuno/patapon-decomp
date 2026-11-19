#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 pad_17[1];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 *unk_24;
} T;

extern u8 D_08A46184[];

T *func_088D1A98(T *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    arg0->unk_24 = D_08A46184;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = arg3;
    arg0->unk_0C = arg4;
    arg0->unk_10 = arg5;
    arg0->unk_14 = 0;
    arg0->unk_15 = 0;
    arg0->unk_16 = 0;
    arg0->unk_18 = -1;
    arg0->unk_1C = -1;
    arg0->unk_20 = -1;
    return arg0;
}
