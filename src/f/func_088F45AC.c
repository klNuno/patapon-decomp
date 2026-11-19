#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    u8 pad_00[0x50560];
    u8 unk_50560[1];
} Unk1;

typedef struct {
    u8 pad_00[0x30];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    u8 pad_3C[0x24];
    Unk1 *unk_60;
    u8 pad_64[0x1C];
    f32 unk_80;
    f32 unk_84;
    f32 unk_88;
} Unk;

extern f32 D_089E2D94[];
extern f32 D_089E2D98[];
V2 *func_088F32E0(void *);

void func_088F45AC(Unk *arg0)
{
    f32 temp = func_088F32E0(arg0->unk_60->unk_50560)->unk_00;

    temp += arg0->unk_80;
    arg0->unk_30 = temp;
    arg0->unk_34 = D_089E2D94[0] + arg0->unk_84;
    arg0->unk_38 = D_089E2D98[0] - arg0->unk_88;
}
