#include "common.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
} R08805E10;

typedef struct {
    R08805E10 *unk_00;
    R08805E10 *unk_04;
} E08805E10;

typedef struct {
    u8 pad_00[0xC];
    R08805E10 *unk_0C;
    R08805E10 *unk_10;
} T08805E10;

extern E08805E10 D_08A490C8[];

s32 func_08805E10(T08805E10 *arg0, u32 arg1) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (D_08A490C8[i].unk_00 != NULL && D_08A490C8[i].unk_00->unk_00 <= arg1 &&
            arg1 < D_08A490C8[i].unk_04->unk_00 + (D_08A490C8[i].unk_04->unk_04 & ~1)) {
            arg0->unk_0C = D_08A490C8[i].unk_00;
            arg0->unk_10 = D_08A490C8[i].unk_04;
            return 1;
        }
    }
    return 0;
}
