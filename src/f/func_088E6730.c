#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} Unk_088E6730;

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A46598[];
extern u8 D_089E1BE8[];
extern u8 D_08A4657C[];

Unk_088E6730 *func_088E6730(Unk_088E6730 *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A46598;
    arg0->unk_04 = 4;
    arg0->unk_08 = D_089E1BE8;
    arg0->unk_0C = 0x83;
    arg0->unk_00 = D_08A4657C;
    arg0->unk_10 = 0;
    arg0->unk_14 = arg1;
    arg0->unk_18 = arg2;
    return arg0;
}
