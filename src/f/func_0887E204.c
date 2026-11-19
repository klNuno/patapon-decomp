#include "common.h"

typedef struct { f32 unk_00; f32 unk_04; } F_0894C638;
extern const F_0894C638 D_089DD9C0[];
extern const F_0894C638 D_089DD9C8[];

typedef struct {
    u8 pad_00[4];
    u32 unk_04, unk_08, unk_0C, unk_10;
    u8 unk_14, unk_15;
    u8 pad_16[2];
    u32 unk_18, unk_1C;
    u8 unk_20;
    u8 pad_21[15];
    F_0894C638 unk_30, unk_38;
    u32 unk_40;
} T;

void func_0887E204(T *arg0) {
    arg0->unk_04 = 0;
    arg0->unk_08 = 0;
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_14 = 1;
    arg0->unk_15 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 0;
    arg0->unk_20 = 0;
    arg0->unk_30 = D_089DD9C0[0];
    arg0->unk_38 = D_089DD9C8[0];
    arg0->unk_40 = 0;
}
