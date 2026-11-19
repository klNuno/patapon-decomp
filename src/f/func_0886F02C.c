#include "common.h"

extern u8 D_08A44FEC[];

typedef struct {
    u8 unk_00;
    u8 pad_01[0x03];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    u8 unk_24;
    u8 pad_25[0x0B];
    f32 unk_30;
    u8 pad_34[0x0C];
    s32 unk_40;
    s32 unk_44;
    s32 unk_48;
    s32 unk_4C;
    void *unk_50;
} T;

T *func_0886F02C(T *arg0, s32 arg1) {
    arg0->unk_50 = D_08A44FEC;
    arg0->unk_00 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = arg1;
    arg0->unk_24 = 0;
    arg0->unk_30 = 0.5f;
    arg0->unk_48 = 0;
    arg0->unk_44 = 0;
    arg0->unk_40 = 0;
    arg0->unk_4C = 0;
    arg0->unk_04 = -1;
    arg0->unk_08 = -1;
    return arg0;
}
