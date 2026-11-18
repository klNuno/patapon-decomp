#include "common.h"

void func_08865EE0(void *);
extern f32 D_08A06E78[];
extern f32 D_08A06E80[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} Unk0;

typedef struct Unk {
    s32 unk_00;
    s32 unk_04;
    u8 unk_08;
    u8 pad_09[3];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0xC];
    u8 unk_20[0x90];
    u8 unk_B0[0x90];
    f32 unk_140;
    f32 unk_144;
    f32 unk_148;
    struct Unk *unk_14C;
    Unk0 unk_150;
    u8 unk_15C;
    u8 pad_15D[3];
    s32 unk_160;
    s32 unk_164;
    s32 unk_168;
    s32 unk_16C;
    s32 unk_170;
} Unk;

Unk *func_0899F16C(Unk *arg0, s32 arg1, s32 arg2) {
    struct { Unk0 unk_00; u8 pad_0C[4]; } temp;
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg2;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    func_08865EE0(arg0->unk_20);
    func_08865EE0(arg0->unk_B0);
    arg0->unk_140 = 0.0f;
    arg0->unk_144 = 0.3f;
    arg0->unk_148 = 0.0f;
    temp.unk_00.unk_00 = D_08A06E78[0];
    temp.unk_00.unk_04 = D_08A06E78[1];
    temp.unk_00.unk_08 = D_08A06E80[0];
    arg0->unk_14C = arg0;
    arg0->unk_150 = temp.unk_00;
    arg0->unk_15C = 0;
    arg0->unk_160 = 0;
    arg0->unk_164 = 0;
    arg0->unk_168 = 0;
    arg0->unk_16C = 0;
    arg0->unk_170 = -1;
    return arg0;
}
