#include "common.h"

void func_088A8600(void *, s32);

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    u8 pad_14[0x4];
    s32 unk_18;
    s32 unk_1C;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    u8 pad_2C[0x14];
    s32 unk_40;
    u8 pad_44[0x10];
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
    s32 unk_64;
    s32 unk_68;
    s32 unk_6C;
} T088A4A9C;

T088A4A9C *func_088A4A9C(T088A4A9C *arg0) {
    arg0->unk_0C = 0;
    arg0->unk_10 = 0;
    arg0->unk_18 = 0;
    arg0->unk_1C = 1;
    arg0->unk_20 = 2;
    arg0->unk_24 = 3;
    arg0->unk_28 = 4;
    arg0->unk_40 = 0;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = -1;
    arg0->unk_54 = 0;
    arg0->unk_58 = 0;
    arg0->unk_5C = 0;
    arg0->unk_60 = 0;
    arg0->unk_64 = 0;
    arg0->unk_68 = 0;
    arg0->unk_6C = -1;
    func_088A8600(arg0, 0);
    return arg0;
}
