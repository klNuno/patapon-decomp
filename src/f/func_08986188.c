#include "common.h"

typedef struct {
    u8 pad_00[0x48];
    s32 unk_48;
    u8 pad_4C[8];
} Unk;

typedef struct {
    u8 pad_00[0x2A0C];
    Unk *unk_2A0C;
    u32 unk_2A10;
    Unk *unk_2A14;
} Unk2;

s32 func_08986188(Unk2 *arg0)
{
    u32 temp = arg0->unk_2A10;
    Unk *temp2 = arg0->unk_2A14;
    Unk *temp3 = arg0->unk_2A0C;
    return (temp2 == temp3 + temp) ? 0 : temp2->unk_48;
}
