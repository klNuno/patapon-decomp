#include "common.h"

extern const f32 D_089DD508[];

typedef struct {
    f32 unk_00[4];
} Unk1;

typedef struct {
    u8 pad_00[0x10];
    Unk1 unk_10;
    f32 unk_20;
    f32 unk_24;
    f32 unk_28;
    f32 unk_2C;
    u8 *unk_30;
    Unk1 *unk_34;
} Unk2;

typedef struct {
    u8 pad_00[0xD80];
    Unk1 unk_D80;
    u8 pad_D90[0x5F0];
    Unk2 unk_1380;
    u8 pad_13B8[0x18];
    u8 unk_13D0[1];
} Unk;

void func_0893C6E4(Unk2 *, s32, f32);
void func_0893C604(void *, s32);

Unk2 *func_08897B2C(Unk *arg0, s32 arg1, f32 arg2, s32 arg3, f32 arg4) {
    Unk1 *temp;

    func_0893C6E4(&arg0->unk_1380, arg1, arg2);
    arg0->unk_1380.unk_30 = NULL;
    if (arg3 != 0) {
        arg0->unk_1380.unk_30 = arg0->unk_13D0;
    }
    temp = &arg0->unk_D80;
    arg0->unk_1380.unk_34 = temp;
    if (temp != NULL) {
        f32 temp2 = temp->unk_00[1];
        f32 temp3 = temp->unk_00[2];
        f32 temp4 = temp->unk_00[3];
        f32 temp5 = temp->unk_00[0];
        arg0->unk_1380.unk_10.unk_00[0] = temp5;
        arg0->unk_1380.unk_10.unk_00[1] = temp2;
        arg0->unk_1380.unk_10.unk_00[2] = temp3;
        arg0->unk_1380.unk_10.unk_00[3] = temp4;
    }
    arg0->unk_1380.unk_20 = 0.0f;
    arg0->unk_1380.unk_24 = 8.0f + 3.0f * D_089DD508[0] + arg4;
    arg0->unk_1380.unk_28 = 0.0f;
    arg0->unk_1380.unk_2C = 0.0f;
    func_0893C604(&arg0->unk_1380, 1);
    return &arg0->unk_1380;
}
