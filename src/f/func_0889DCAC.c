#include "common.h"

typedef struct {
    s32 unk_00;
    s8 unk_04;
    u8 unk_05;
    s8 unk_06;
} T;

s32 func_0889DCAC(T *arg0, s32 arg1, s8 arg2, s8 arg3) {
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_05 = 1;
    arg0->unk_06 = arg3;
    return 1;
}
