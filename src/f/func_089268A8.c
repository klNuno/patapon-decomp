#include "common.h"

typedef struct {
    void *volatile unk_00;
    u8 unk_04[0xD84];
    u8 *unk_D88;
    s32 unk_D8C;
} S;

typedef struct {
    u8 pad_00[0xC];
    S unk_0C;
} T;

extern u8 D_08A44C14[];
extern u8 D_08A44C60[];
extern u8 D_08A44CAC[];

T *func_089268A8(T *arg0)
{
    S *temp;

    arg0->unk_0C.unk_00 = D_08A44C14;
    temp = &arg0->unk_0C;
    temp->unk_00 = D_08A44C60;
    temp->unk_D88 = (u8 *)(((u32)temp->unk_04 & 3) + (u32)temp + 4);
    temp->unk_D8C = 0;
    arg0->unk_0C.unk_00 = D_08A44CAC;
    return arg0;
}
