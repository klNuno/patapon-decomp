#include "common.h"

typedef struct T0895BB50_S {
    u8 pad_00[0x14];
    void *unk_14;
    u8 unk_18[0x44];
    void *unk_5C;
    s32 unk_60;
    u8 unk_64[0x44];
    void *unk_A8;
    s32 unk_AC;
    s32 unk_B0;
    s32 unk_B4;
    s32 unk_B8;
    u8 unk_BC;
    u8 pad_BD[0x3];
    s32 unk_C0;
    s32 unk_C4;
    s32 unk_C8;
    s32 unk_CC;
    s32 unk_D0;
    s32 unk_D4;
    s32 unk_D8;
    s32 unk_DC;
    s32 unk_E0;
    s32 unk_E4;
    s32 unk_E8;
} T0895BB50_S;

void func_0895B99C(T0895BB50_S *, s32);
extern u8 D_08A479D4[];

T0895BB50_S *func_0895BB50(T0895BB50_S *arg0) {
    func_0895B99C(arg0, 0x12);
    arg0->unk_14 = D_08A479D4;
    arg0->unk_5C = (u8 *)(((u32)arg0->unk_18 & 3) + (u32)arg0 + 0x18);
    arg0->unk_60 = 0;
    arg0->unk_A8 = (u8 *)(((u32)arg0->unk_64 & 3) + (u32)arg0 + 0x64);
    arg0->unk_AC = 0;
    arg0->unk_B0 = 0;
    arg0->unk_B4 = 0;
    arg0->unk_B8 = 0;
    arg0->unk_BC = 0;
    arg0->unk_C0 = 0;
    arg0->unk_C4 = 0;
    arg0->unk_C8 = 0;
    arg0->unk_CC = 0;
    arg0->unk_D0 = 0;
    arg0->unk_D4 = 0;
    arg0->unk_D8 = 0;
    arg0->unk_DC = 0;
    arg0->unk_E0 = 0;
    arg0->unk_E4 = 0;
    arg0->unk_E8 = 0;
    return arg0;
}
