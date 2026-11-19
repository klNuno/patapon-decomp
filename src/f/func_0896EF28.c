#include "common.h"

typedef struct {
    u8 pad_00[0xBB];
    u8 unk_BB;
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

s32 func_0896EF28(U *arg0) {
    T *temp = func_08852FFC(arg0->unk_04)->unk_04;
    s32 temp1 = 0;
    if ((temp->unk_BB >> 5) & 1) {
        temp1++;
    }
    if ((temp->unk_BC >> 3) & 1) {
        temp1++;
    }
    if ((temp->unk_BD >> 1) & 1) {
        temp1++;
    }
    return temp1;
}
