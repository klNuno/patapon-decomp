#include "common.h"

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
    u8 pad_08[0x18];
} U;

typedef struct {
    u8 pad_00[0x104];
    U *unk_104;
    u32 unk_108;
} T;

s32 func_08879BC0(T *arg0) {
    u32 temp4;
    U *temp5;
    U *temp0 = arg0->unk_104;
    s32 temp1 = 1;

    if ((u32)temp0 != (u32)(temp0 + arg0->unk_108)) {
        volatile u32 *temp2 = &arg0->unk_108;
        U *volatile *temp3 = &arg0->unk_104;

        do {
            if (temp0->unk_04 < 2) {
                temp1 = 0;
            }
            ++temp0;
            temp4 = *temp2 << 5;
            temp5 = *temp3;
        } while ((u32)temp0 != (u32)temp5 + temp4);
    }
    return temp1;
}
