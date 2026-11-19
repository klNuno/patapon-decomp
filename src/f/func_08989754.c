#include "common.h"

typedef struct {
    u8 pad_00[0x28];
    s32 unk_28;
    s32 unk_2C;
} UnkSource;

typedef struct {
    UnkSource *unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    u8 unk_28[0x24];
    u8 *unk_4C;
    s32 unk_50;
    u8 unk_54;
} UnkObject;

UnkObject *func_08989754(UnkObject *arg0, UnkSource *arg1)
{
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1->unk_28;
    arg0->unk_08 = arg1->unk_2C;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = -1;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_4C = (u8 *)(((u32)arg0->unk_28 & 3) + (u32)arg0 + 0x28);
    arg0->unk_50 = 0;
    arg0->unk_54 = 0;
    return arg0;
}
