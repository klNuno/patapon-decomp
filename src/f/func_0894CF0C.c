#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V3;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    f32 unk_00;
    f32 unk_04;
} V2;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    V3 unk_0C;
} T;

typedef struct {
    s32 unk_00;
    V4 unk_04;
    V2 unk_14;
} G;

typedef struct {
    u8 pad_00[8];
    G unk_08;
    u8 pad_24[0xBC];
    T unk_E0;
    u8 pad_F8[1];
    u8 unk_F9;
    u8 pad_FA[0x4E];
    s8 unk_148;
    u8 pad_149[3];
    s32 unk_14C;
} S;

void func_0894CF0C(S *arg0, const T *arg1, const G *arg2, s8 arg3, s32 arg4) {
    arg0->unk_F9 = 1;
    arg0->unk_148 = arg3;
    arg0->unk_E0.unk_00 = arg1->unk_00;
    arg0->unk_E0.unk_04 = arg1->unk_04;
    arg0->unk_E0.unk_08 = arg1->unk_08;
    arg0->unk_E0.unk_0C = arg1->unk_0C;
    arg0->unk_14C = arg4;
    arg0->unk_08.unk_00 = arg2->unk_00;
    arg0->unk_08.unk_04 = arg2->unk_04;
    arg0->unk_08.unk_14 = arg2->unk_14;
}
