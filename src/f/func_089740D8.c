#include "common.h"

#pragma divbyzerocheck on

typedef struct {
    u8 pad_00[4];
    volatile u32 unk_04;
    u32 unk_08;
    u8 unk_0C;
} T;

void func_089740D8(T *arg0, u32 arg1) {
    arg0->unk_04 += arg1;
    if (arg0->unk_0C != 0) {
        u32 temp = arg0->unk_08;
        arg0->unk_04 %= temp;
    } else {
        u32 temp = arg0->unk_08;
        if (arg0->unk_04 >= temp) {
            arg0->unk_04 = temp;
        }
    }
}
