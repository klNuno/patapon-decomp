#include "common.h"

typedef struct {
    u8 pad_00[0xBC];
    u8 unk_BC;
    u8 unk_BD;
} U;

typedef struct {
    u8 pad_00[4];
    U *unk_04;
} T;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} V;

T *func_08852FFC(s32);

s32 func_0896EED0(V *arg0) {
    U *temp0 = func_08852FFC(arg0->unk_04)->unk_04;
    u32 temp1 = temp0->unk_BC;
    s32 temp2 = 0;

    if (temp1 & 1) {
        ++temp2;
    }
    if ((temp1 >> 6) & 1) {
        ++temp2;
    }
    if ((temp0->unk_BD >> 4) & 1) {
        ++temp2;
    }
    return temp2;
}
