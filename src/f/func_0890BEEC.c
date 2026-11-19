#include "common.h"

typedef struct {
    u8 pad_00[0x16D030];
    f32 unk_16D030;
    f32 unk_16D034;
    f32 unk_16D038;
    f32 unk_16D03C;
    u8 pad_16D040[0x10];
    u8 unk_16D050;
} S;

void func_0890BEEC(S *arg0) {
    arg0->unk_16D050 = 0;
    arg0->unk_16D030 += arg0->unk_16D038;
    arg0->unk_16D034 += arg0->unk_16D03C;
    arg0->unk_16D038 = 0.0f;
    arg0->unk_16D03C = 0.0f;
}
