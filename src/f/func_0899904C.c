#include "common.h"

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[4];
} T;

typedef struct {
    u8 pad_00[0x4A5B4];
    T *unk_4A5B4;
} S;

s32 func_0899A900(s32);

s32 func_0899904C(S *arg0) {
    T **temp = &arg0->unk_4A5B4;
    s32 temp2 = 0;
    u32 temp3 = 0;
    u32 temp4 = 0;

    do {
        if (func_0899A900(((T *)((u8 *)*temp + temp4))->unk_08) != 0) {
            temp2++;
        }
        temp3++;
        temp4 += 0x10;
    } while (temp3 < 3U);
    return temp2;
}
