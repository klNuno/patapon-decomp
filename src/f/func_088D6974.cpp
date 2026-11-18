#include "common.h"

extern "C" {
extern u8 D_08A462BC[];
extern u8 D_08A462AC[];

struct UnkAC {
    UnkAC *unk_00;
    void *unk_04;
    u8 pad_08[0xA4];
};

struct Unk08 {
    UnkAC *unk_00;
    UnkAC *unk_04;
    virtual UnkAC *func_00();
    virtual u32 func_04();
};

struct Unk2E4 : Unk08 {
    u8 pad_0C[0x2B4];
    u32 unk_2C0;
    void *unk_2C4;
    void *unk_2C8;
    void *unk_2CC;
    s32 unk_2D0;
    s32 unk_2D4[4];
};

Unk2E4 *func_088D6974(Unk2E4 *arg0)
{
    UnkAC *temp;
    u32 i;
    *(void **)((u8 *)arg0 + 8) = D_08A462BC;
    *(void **)((u8 *)arg0 + 8) = D_08A462AC;
    arg0->unk_2C0 = ((u32)&arg0->pad_0C[0] + 3U) & ~3U;
    temp = arg0->func_00();
    arg0->unk_00 = temp;
    arg0->unk_04 = temp + (arg0->func_04() - 1);
    temp->unk_04 = arg0;
    arg0->unk_04->unk_00 = (UnkAC *)arg0;
    for (i = 1; i < arg0->func_04(); ++i) {
        UnkAC *prev = temp++;
        prev->unk_00 = temp;
        temp->unk_04 = prev;
    }
    arg0->unk_2CC = arg0;
    arg0->unk_2D0 = 0;
    arg0->unk_2C4 = &arg0->unk_2C4;
    arg0->unk_2C8 = &arg0->unk_2C4;
    s32 *p = arg0->unk_2D4;
    do {
        *p++ = -1;
    } while (p < arg0->unk_2D4 + 4);
    return arg0;
}
}
