#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    u8 unk_14;
    u8 unk_15;
    u8 unk_16;
    u8 unk_17;
} U;

typedef struct {
    u8 pad_00[0x170400];
    U *unk_170400;
} T;

u32 func_089110C4(T *arg0) {
    volatile U *ptr = arg0->unk_170400;
    u32 temp0;
    u32 temp2;
    u32 temp1;

    if (ptr == NULL) {
        return 0;
    }
    temp0 = (u32)ptr->unk_15 << 8;
    temp1 = ptr->unk_16;
    temp2 = ptr->unk_14;
    temp1 <<= 16;
    temp2 |= temp0;
    temp2 = temp1 | (s32)temp2;
    return ((u32)ptr->unk_17 << 24) | temp2;
}
