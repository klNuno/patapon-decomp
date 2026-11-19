#include "common.h"

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
} Obj;

extern u8 D_08A4489C[];
extern u8 D_08A46794[];
extern u8 D_089E3568[];
extern u8 D_08A4677C[];

Obj *func_088FA098(Obj *arg0, s32 arg1, s32 arg2)
{
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A46794;
    arg0->unk_04 = 7;
    arg0->unk_08 = D_089E3568;
    arg0->unk_0C = 0xC;
    arg0->unk_00 = D_08A4677C;
    arg0->unk_10 = arg1;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = arg2;
    return arg0;
}
