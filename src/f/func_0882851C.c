#include "common.h"

typedef struct {
    s32 unk_00;
    u32 unk_04[624];
} A;

void func_0882851C(A *arg0, u32 arg1) {
    u32 i;

    for (i = 0; i < 624; i++) {
        arg0->unk_04[i] = arg1 & 0xFFFF0000;
        arg1 = arg1 * 69069 + 1;
        arg0->unk_04[i] |= (arg1 & 0xFFFF0000) >> 16;
        arg1 = arg1 * 69069 + 1;
    }
    arg0->unk_00 = 624;
}
