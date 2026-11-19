#include "common.h"

typedef struct {
    u8 pad_00[0xBC];
    u8 unk_BC;
    u8 unk_BD;
} T;

typedef struct {
    u8 pad_00[4];
    T *unk_04;
} S;

typedef struct {
    u8 pad_00[4];
    s32 unk_04;
} U;

S *func_08852FFC(s32);

s32 func_0896EE78(U *arg0) {
    T *temp = func_08852FFC(arg0->unk_04)->unk_04;
    u8 temp2 = temp->unk_BC;
    s32 temp3 = 0;

    if (((temp2 >> 1) & 1) != 0) {
        temp3 += 1;
    }
    if (((temp2 >> 7) & 1) != 0) {
        temp3 += 1;
    }
    if (((temp->unk_BD >> 5) & 1) != 0) {
        temp3 += 1;
    }
    return temp3;
}
