#include "common.h"

typedef struct {
    u8 *unk_00;
    u8 pad_04[4];
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
} Unk;

extern const s32 D_089DA768[];

void func_088270D8(Unk *arg0)
{
    arg0->unk_0C = 0;
    if (arg0->unk_08 != 2) {
        arg0->unk_10 = arg0->unk_00 - (u8 *)arg0 - 0x1C;
    } else {
        arg0->unk_10 = 0;
    }
    arg0->unk_18 = 0;
    arg0->unk_14 = D_089DA768[0];
}
