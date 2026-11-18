#include "common.h"

typedef struct {
    u8 unk_00;
    u8 pad_01[0x3];
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 unk_10[0x4];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    s32 unk_34;
    s32 unk_38;
    s32 unk_3C;
    f32 unk_40;
} S08895698;

void func_0881F5C0(void *, s32, s32);

s32 func_08895698(S08895698 *arg0, s32 arg1, s32 arg2) {
    struct { S08895698 *unk_00; } h;

    h.unk_00 = arg0;
    h.unk_00->unk_0C = -1;
    func_0881F5C0(h.unk_00->unk_10, 0, 4);
    h.unk_00->unk_00 = 1;
    h.unk_00->unk_04 = 0;
    h.unk_00->unk_08 = 0;
    h.unk_00->unk_0C = -1;
    func_0881F5C0(h.unk_00->unk_10, 0, 4);
    h.unk_00->unk_14 = -1;
    h.unk_00->unk_18 = 0xB;
    h.unk_00->unk_30 = 0;
    h.unk_00->unk_34 = 0;
    h.unk_00->unk_38 = 0;
    h.unk_00->unk_3C = 0;
    h.unk_00->unk_40 = 0.5f;
    h.unk_00->unk_20 = 0;
    h.unk_00->unk_24 = 0;
    h.unk_00->unk_28 = 0;
    h.unk_00->unk_2C = 0;
    h.unk_00->unk_14 = -1;
    h.unk_00->unk_18 = 0;
    h.unk_00->unk_30 = arg1;
    switch (arg2) {
    case 0:
        h.unk_00->unk_04 = 3;
        break;
    case 1:
        break;
    }
    return 0;
}
