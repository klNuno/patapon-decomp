#include "common.h"

typedef struct {
    u8 unk_00[4];
} B4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    B4 unk_1C;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    u16 unk_40;
    u16 unk_42;
} S0;

S0 *func_0891E47C(S0 *arg0, S0 *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_18 = arg1->unk_18;
    arg0->unk_1C = arg1->unk_1C;
    arg0->unk_20 = arg1->unk_20;
    arg0->unk_24 = arg1->unk_24;
    arg0->unk_28 = arg1->unk_28;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_3C = arg1->unk_3C;
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_42 = arg1->unk_42;
    return arg0;
}
