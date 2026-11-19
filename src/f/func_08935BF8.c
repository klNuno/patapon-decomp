#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
} S;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A4711C[];
extern u8 D_089E7CC8[];
extern u8 D_08A47100[];

S *func_08935BF8(S *arg0, s32 arg1, s32 arg2) {
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A4711C;
    arg0->unk_04 = 0x10;
    arg0->unk_08 = D_089E7CC8;
    arg0->unk_0C = 0x24;
    arg0->unk_00 = D_08A47100;
    arg0->unk_10 = arg1;
    arg0->unk_14 = arg2;
    return arg0;
}
