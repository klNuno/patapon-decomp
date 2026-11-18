#include "common.h"

extern f32 D_089FB5B0[];
extern f32 D_089FB5B8[];

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
} V088BA294;

typedef struct S088BA294 {
    s32 unk_00;
    u8 unk_04[0x104];
    u8 *unk_108;
    s32 unk_10C;
    s32 unk_110;
    s32 unk_114;
    s32 unk_118;
    s32 unk_11C;
    struct S088BA294 *unk_120;
    V088BA294 unk_124;
    u8 unk_130;
    u8 pad_131[3];
    s32 unk_134;
    s32 unk_138;
    s32 unk_13C;
} S088BA294;

S088BA294 *func_088BA294(S088BA294 *arg0, s32 arg1, s32 arg2) {
    V088BA294 t;

    arg0->unk_00 = arg1;
    arg0->unk_108 = (u8 *)(((u32)arg0->unk_04 & 3) + (u32)arg0 + 0x04);
    arg0->unk_10C = 0;
    arg0->unk_110 = 0;
    arg0->unk_114 = 0;
    arg0->unk_118 = 0;
    arg0->unk_11C = 0;
    t.unk_00 = D_089FB5B0[0];
    t.unk_04 = D_089FB5B0[1];
    t.unk_08 = D_089FB5B8[0];
    arg0->unk_120 = arg0;
    arg0->unk_124 = t;
    arg0->unk_130 = 0;
    arg0->unk_134 = 0;
    arg0->unk_138 = 0;
    arg0->unk_13C = arg2;
    return arg0;
}
