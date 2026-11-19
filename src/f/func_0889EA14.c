#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    u8 unk_0C[0x14];
    u8 *unk_20;
    s32 unk_24;
    u8 *unk_28;
} Unk;

extern u8 D_08A45968[];
void func_0889EB08(Unk *);

Unk *func_0889EA14(Unk *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    *(volatile s32 *)&arg0->unk_00 = 0;
    *(volatile s32 *)&arg0->unk_04 = 0;
    *(volatile s32 *)&arg0->unk_08 = 0;
    arg0->unk_00 = arg2;
    arg0->unk_04 = arg3;
    arg0->unk_08 = arg4;
    arg0->unk_28 = D_08A45968;
    arg0->unk_20 = (u8 *)(((u32)arg0->unk_0C & 3) + (u32)arg0 + 0xC);
    arg0->unk_24 = 0;
    func_0889EB08(arg0);
    return arg0;
}
