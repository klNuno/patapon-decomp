#include "common.h"

extern u8 D_08A4489C[];
extern u8 D_08A45598[];
extern u8 D_08A467C8[];
extern u8 D_08A467AC[];
extern u8 D_089E3BA0[];

typedef struct {
    void *volatile unk_00;
    s32 unk_04;
    void *unk_08;
    s32 unk_0C;
} UnkObject;

UnkObject *func_088FBCE8(UnkObject *arg0)
{
    arg0->unk_00 = D_08A4489C;
    arg0->unk_00 = D_08A45598;
    arg0->unk_00 = D_08A467C8;
    arg0->unk_04 = 9;
    arg0->unk_08 = D_089E3BA0;
    arg0->unk_0C = 9;
    arg0->unk_00 = D_08A467AC;
    return arg0;
}
