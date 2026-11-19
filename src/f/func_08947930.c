#include "common.h"

typedef struct {
    s8 unk_00;
    u8 pad_01;
    u8 unk_02;
} T;

s32 func_08947930(void *arg0, const T *arg1, const T *arg2) {
    u8 temp = arg1->unk_02;
    s8 temp1;
    s8 temp2;

    if (temp == 0 && arg2->unk_02 == 0) {
        return 0;
    }
    if (temp == 0) {
        return 0;
    }
    if (arg2->unk_02 == 0) {
        return 1;
    }
    temp1 = arg1->unk_00;
    temp2 = arg2->unk_00;
    return temp1 > temp2;
}
