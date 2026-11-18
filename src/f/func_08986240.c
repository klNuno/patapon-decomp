#include "common.h"

typedef struct {
    u8 pad_00[0x2D6E];
    u8 unk_2D6E;
    u8 pad_2D6F[1];
    f32 unk_2D70;
    u32 unk_2D74;
    f32 unk_2D78;
    u32 unk_2D7C;
} UnkObject;

void func_08986240(UnkObject *arg0, f32 *arg1, f32 *arg2, s32 *arg3)
{
    *arg1 = arg0->unk_2D74 != 0 ? arg0->unk_2D70 / (f32)arg0->unk_2D74 : 0.0f;
    *arg2 = arg0->unk_2D7C != 0 ? arg0->unk_2D78 / (f32)arg0->unk_2D7C : 0.0f;
    *arg3 = (u8)!(arg0->unk_2D6E != 0);
}
