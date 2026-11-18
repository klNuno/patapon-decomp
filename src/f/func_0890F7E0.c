#include "common.h"

typedef struct { f32 unk_00[2]; } V2;
typedef struct { f32 unk_00[3]; } V3;
typedef struct { f32 unk_00[4]; } V4;

typedef struct {
    V2 unk_00;
    s32 unk_08;
    u8 unk_0C;
    u8 unk_0D;
    u8 pad_0E[2];
    V3 unk_10;
    V4 unk_1C;
    V4 unk_2C;
    V4 unk_3C;
    s32 unk_4C;
    s32 unk_50;
    V4 unk_54;
    V4 unk_64;
} S;

S *func_0890F7E0(S *arg0, const S *arg1) {
    arg0->unk_00 = arg1->unk_00;
    arg0->unk_08 = arg1->unk_08;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_0D = arg1->unk_0D;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_1C = arg1->unk_1C;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_3C = arg1->unk_3C;
    arg0->unk_4C = arg1->unk_4C;
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_54 = arg1->unk_54;
    arg0->unk_64 = arg1->unk_64;
    return arg0;
}
