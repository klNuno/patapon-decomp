#include "common.h"

typedef struct {
    s32 unk_00;
    u8 pad_04[0xC];
    f32 unk_10;
    f32 unk_14;
    f32 unk_18;
    f32 unk_1C;
} Unk;

extern f32 D_089EC4F0[];
extern f32 D_089EC4F4[];
extern f32 D_089EC4F8[];
extern f32 D_089EC4FC[];

Unk *func_0896D208(Unk *arg0, s32 arg1) {
    arg0->unk_00 = arg1;
    arg0->unk_10 = D_089EC4F0[0];
    arg0->unk_14 = D_089EC4F4[0];
    arg0->unk_18 = D_089EC4F8[0];
    arg0->unk_1C = D_089EC4FC[0];
    return arg0;
}
