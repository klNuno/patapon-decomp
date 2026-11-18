#include "common.h"

typedef struct {
    u8 pad_00[0xC];
    s32 unk_0C;
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x10];
    s32 unk_2C;
    u8 unk_30[2][0x10];
    s32 unk_50;
    s32 unk_54;
    s32 unk_58;
    s32 unk_5C;
    s32 unk_60;
} T0;

void func_0881F120(void *, void *, s32);

T0 *func_08987338(T0 *arg0, T0 *arg1) {
    u32 i;

    arg0->unk_54 = arg1->unk_54;
    arg0->unk_10 = arg1->unk_10;
    arg0->unk_14 = arg1->unk_14;
    arg0->unk_50 = arg1->unk_50;
    arg0->unk_58 = arg1->unk_58;
    arg0->unk_5C = arg1->unk_5C;
    arg0->unk_60 = arg1->unk_60;
    arg0->unk_2C = arg1->unk_2C;
    arg0->unk_0C = arg1->unk_0C;
    arg0->unk_18 = arg1->unk_18;
    for (i = 0; i < 2; i++) {
        func_0881F120(arg0->unk_30[i], arg1->unk_30[i], 0x10);
    }
    return arg0;
}
