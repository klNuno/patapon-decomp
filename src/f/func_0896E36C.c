#include "common.h"

typedef struct {
    u8 pad_00[0xBD];
    u8 unk_BD;
    u8 unk_BE;
} T;

typedef struct {
    u8 pad_00[4];
    T *volatile unk_04;
} S;

typedef struct {
    u8 pad_00[4];
    void *unk_04;
} A;

S *func_08852FFC(void *);

void func_0896E36C(A *arg0) {
    S *temp = func_08852FFC(arg0->unk_04);
    T *temp2 = temp->unk_04;
    u8 *temp4 = &temp2->unk_BD;
    u8 temp3 = *temp4;

    if ((temp3 >> 7) & 1) {
        *temp4 = temp3 & 0xBF;
        temp->unk_04->unk_BD &= 0x7F;
        temp->unk_04->unk_BE &= 0xFE;
    }
}
