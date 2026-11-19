#include "common.h"

typedef struct {
    u8 pad_00[8];
    u32 unk_08;
    u8 pad_0C[0x14];
} U;

typedef struct {
    u8 pad_00[0x104];
    U *unk_104;
    s32 unk_108;
} T;

s32 func_08879D6C(T *arg0) {
    s32 n = arg0->unk_108;
    u32 count;
    U *end;
    U *ptr;
    if (n == 8) {
        return 1;
    }
    ptr = arg0->unk_104;
    end = ptr + n;
    count = 0;
    if ((u32)ptr != (u32)end) {
        do {
            count += ptr->unk_08;
            ++ptr;
        } while (ptr != end);
    }
    return (count < 8U) ^ 1;
}
