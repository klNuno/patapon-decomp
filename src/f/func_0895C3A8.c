#include "common.h"

typedef struct {
    u8 pad_00[0x14];
    void *unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    u8 pad_30[0x4];
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    s32 unk_40;
    u8 unk_44[0x44];
    u8 *unk_88;
    s32 unk_8C;
    u8 unk_90[0x44];
    u8 *unk_D4;
    s32 unk_D8;
    s32 unk_DC;
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
} Obj_0895C3A8;

extern u8 D_08A479E4[];

void func_0895B99C(Obj_0895C3A8 *, s32);

Obj_0895C3A8 *func_0895C3A8(Obj_0895C3A8 *arg0) {
    func_0895B99C(arg0, 0x10);
    arg0->unk_14 = D_08A479E4;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_24 = 0;
    arg0->unk_28 = 0;
    arg0->unk_2C = 0;
    arg0->unk_34 = 0;
    arg0->unk_38 = 0;
    arg0->unk_88 = (u8 *)(((u32)arg0->unk_44 & 3) + (u32)arg0 + 0x44);
    arg0->unk_8C = 0;
    arg0->unk_D4 = (u8 *)(((u32)arg0->unk_90 & 3) + (u32)arg0 + 0x90);
    arg0->unk_D8 = 0;
    arg0->unk_DC = 0;
    arg0->unk_E0 = 0;
    arg0->unk_E4 = -1;
    arg0->unk_E8 = 0;
    arg0->unk_40 = 0;
    arg0->unk_3C = 0;
    return arg0;
}
