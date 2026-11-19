#include "common.h"

void func_088AF260(void *, s32);

typedef struct {
    u8 pad_00[0x810];
    u8 unk_810[0x70];
    u32 unk_880;
} S;

typedef struct {
    u8 pad_00[0x7FF8];
    S *unk_7FF8;
} T;

typedef struct {
    u8 pad_00[0x49C];
    T unk_49C;
} U;

void func_08907750(U *arg0, s32 arg1) {
    if (arg0->unk_49C.unk_7FF8 != NULL) {
        S **temp = &arg0->unk_49C.unk_7FF8;
        S *temp2;

        func_088AF260((*temp)->unk_810, arg1);
        temp2 = *temp;
        temp2->unk_880 &= ~0x100U;
    }
}
