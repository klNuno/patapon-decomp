#include "common.h"

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
    s32 unk_24;
} T;

typedef struct {
    u8 pad_00[8];
    s32 unk_08;
    u8 pad_0C[8];
    T unk_14;
    u8 pad_3C[0xC8];
} S;

T *func_088762DC(S *arg0) {
    s32 temp;
    S *temp1;
    T *temp2;
    if (arg0->unk_08 == 0x190) {
        return NULL;
    }
    temp = 0;
    temp1 = arg0;
    do {
        temp2 = &temp1->unk_14;
        if (temp2->unk_20 < 0) {
            temp2->unk_20 = temp2->unk_24;
            arg0->unk_08++;
            return temp2;
        }
        temp++;
        temp1++;
    } while (temp < 0x190);
    return NULL;
}
