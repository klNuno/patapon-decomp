#include "common.h"

extern "C" {

typedef struct {
    f32 unk_00, unk_04;
    u8 pad_08[8];
    f32 unk_10, unk_14;
} S;

extern void func_0893328C(char *, s32);

void func_08933218(S *arg0) {
    f32 temp[16];
    f32 a = arg0->unk_14;
    temp[0] = a;
    f32 b = arg0->unk_10;
    temp[4] = b;
    temp[5] = a;
    temp[1] = -b;
    temp[2] = 0.0f;
    temp[3] = 0.0f;
    temp[6] = 0.0f;
    temp[7] = 0.0f;
    temp[8] = 0.0f;
    temp[9] = 0.0f;
    temp[10] = 1.0f;
    temp[11] = 0.0f;
    temp[12] = arg0->unk_00;
    temp[13] = arg0->unk_04;
    temp[15] = 1.0f;
    temp[14] = 0.0f;
    func_0893328C((char *)arg0, (s32)temp);
}
}
