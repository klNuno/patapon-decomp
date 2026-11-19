#include "common.h"

extern u8 D_089E70B0[];
extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A47010[];
extern u8 D_08A4702C[];

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
} T;

T *func_0892EA5C(T *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A4702C;
    arg0->unk_04 = 0xF;
    arg0->unk_08 = D_089E70B0;
    arg0->unk_0C = 0x14;
    arg0->unk_00 = D_08A47010;
    arg0->unk_10 = arg2;
    return arg0;
}
