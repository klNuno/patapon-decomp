#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A474AC[];
extern u8 D_08A47490[];
extern u8 D_089E8D08[];

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
    s32 unk_10;
} UnkObject;

UnkObject *func_08941868(UnkObject *arg0, s32 arg1)
{
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A474AC;
    arg0->unk_04 = 0x13;
    arg0->unk_08 = D_089E8D08;
    arg0->unk_0C = 5;
    arg0->unk_00 = D_08A47490;
    arg0->unk_10 = arg1;
    return arg0;
}
