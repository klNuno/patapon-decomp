#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    u32 unk_40;
    u8 pad_44[0xC];
} UnkEntry;

typedef struct {
    u8 pad_00[0xA0C];
    UnkEntry *unk_A0C;
    s32 unk_A10;
    UnkEntry *unk_A14;
    u8 pad_A18[0x330];
    u32 unk_D48;
    f32 unk_D4C;
} UnkObject;

f32 func_0898119C(UnkObject *arg0)
{
    UnkEntry *temp = arg0->unk_A14;
    s32 temp2;
    f32 temp3;
    if (temp != arg0->unk_A0C + arg0->unk_A10 && temp->unk_40 <= arg0->unk_D48) {
        temp2 = 0;
    } else {
        temp2 = 1;
    }
    if (temp2 == 0) {
        temp3 = (arg0->unk_D4C - (f32)temp->unk_40) / 2.0f;
    } else {
        temp3 = 0.0f;
    }
    return temp3;
}
