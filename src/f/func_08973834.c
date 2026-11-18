#include "common.h"

void func_0889DA40(u8 *, s32, s32, s32);

typedef struct {
    u8 pad_00[0xCF0];
    u8 unk_CF0[1];
} Unk1;

typedef struct {
    u8 pad_00[0x1C];
    s32 unk_1C;
    u8 pad_20[0xC];
    s32 unk_2C;
    u8 pad_30[4];
    f32 unk_34;
} Unk;

Unk1 *func_08973F20(Unk *, s32);

void func_08973834(Unk *arg0) {
    if (arg0->unk_34 >= 0.0f) {
        arg0->unk_34 -= 0.033333335f;
        if (arg0->unk_34 < 0.0f) {
            s32 temp = arg0->unk_2C;
            Unk1 *temp2 = func_08973F20(arg0, arg0->unk_1C);
            if (temp2 != NULL) {
                func_0889DA40(temp2->unk_CF0, temp, 0, 0);
            }
            arg0->unk_2C = temp;
            arg0->unk_34 = -1.0f;
        }
    }
}
