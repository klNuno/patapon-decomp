#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Q_0888E218;

typedef struct S_0888E218 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    f32 unk_0C;
    s32 unk_10;
    f32 unk_14;
    Q_0888E218 unk_18;
    f32 unk_28;
    u8 pad_2C[4];
    f32 unk_30;
    f32 unk_34;
    f32 unk_38;
    f32 unk_3C;
    f32 *unk_40;
    u8 pad_44[0xC];
    s32 unk_50;
    s32 unk_54;
    Q_0888E218 unk_58;
    Q_0888E218 unk_68;
} S_0888E218;

#define I_0888E218(f) (*(s32 *)&arg0->f)

S_0888E218 *func_0888E218(S_0888E218 *arg0, S_0888E218 *arg1) {
    I_0888E218(unk_0C) = 0;
    I_0888E218(unk_10) = 0;
    I_0888E218(unk_18.unk_00) = 0;
    I_0888E218(unk_18.unk_04) = 1;
    I_0888E218(unk_18.unk_08) = 2;
    I_0888E218(unk_18.unk_0C) = 3;
    I_0888E218(unk_28) = 4;
    I_0888E218(unk_40) = 0;
    I_0888E218(unk_58.unk_00) = 0;
    I_0888E218(unk_58.unk_04) = 0;
    I_0888E218(unk_58.unk_08) = 0;
    I_0888E218(unk_58.unk_0C) = 0;
    I_0888E218(unk_68.unk_00) = 0;
    I_0888E218(unk_68.unk_04) = -1;
    I_0888E218(unk_54) = 0;
    I_0888E218(unk_58.unk_00) = 0;
    I_0888E218(unk_58.unk_04) = 0;
    I_0888E218(unk_58.unk_08) = 0;
    I_0888E218(unk_58.unk_0C) = 0;
    I_0888E218(unk_68.unk_00) = 0;
    I_0888E218(unk_68.unk_04) = -1;
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_04 = arg1->unk_04;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_18 = arg1->unk_18;
    arg0->unk_28 = arg1->unk_28;
    arg0->unk_40 = arg1->unk_40;
    arg0->unk_30 = arg1->unk_30;
    arg0->unk_34 = arg1->unk_34;
    arg0->unk_38 = arg1->unk_38;
    arg0->unk_3C = arg1->unk_3C;
    if (arg1->unk_40 == &arg1->unk_30) {
        arg0->unk_40 = &arg0->unk_30;
    }
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_54 = arg1->unk_54;
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_68 = arg1->unk_68;
    return arg0;
}
