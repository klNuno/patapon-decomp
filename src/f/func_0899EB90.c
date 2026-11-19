#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    u8 unk_14;
    u8 pad_15[3];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 *unk_24;
} T;

extern u8 D_08A44AD8[];

T *func_0899EB90(T *arg0)
{
    arg0->unk_00 = 0;
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_24 = D_08A44AD8;
    arg0->unk_20 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_1C = 0;
    arg0->unk_18 = 0;
    return arg0;
}
