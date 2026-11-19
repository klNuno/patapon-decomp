#include "common.h"

typedef struct {
    u8 pad_00[4];
    s8 *unk_04;
} T;

typedef struct {
    u8 pad_00[8];
    T *unk_08;
} S;

void func_08853894(S *arg0, s8 *arg1) {
    s32 temp = 0;
    T *temp2;
    s8 **temp3;
    s8 *temp4;

    *arg1 = 0;
    for (;;) {
        arg1[temp] = *arg0->unk_08->unk_04;
        temp2 = arg0->unk_08;
        temp3 = &temp2->unk_04;
        temp4 = *temp3;
        if (*temp4 == 0) {
            *temp3 = temp4 + 1;
            break;
        }
        *temp3 = temp4 + 1;
        temp++;
    }
    if (*arg1 == 0) {
        temp2 = arg0->unk_08;
        temp3 = &temp2->unk_04;
        temp4 = *temp3;
        if (*temp4 == 0) {
            *temp3 = temp4 + 1;
        }
    }
}
