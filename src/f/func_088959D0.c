#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} V4;

typedef struct {
    u8 pad_00[0x90];
    V4 unk_90;
    V4 unk_A0;
    V4 unk_B0;
} S2;

typedef struct {
    u8 pad_00[0x7E64];
    s32 unk_7E64;
    u8 pad_7E68[0x298];
    S2 unk_8100;
    u8 pad_81C0[0x1140];
    V4 unk_9300;
    V4 unk_9310;
} S0;

typedef struct {
    u8 pad_00[6];
    u8 unk_06;
} S1;

s32 func_088F5BA0(s32);
void func_08854F60(f32, V4 *, V4 *);

void func_088959D0(S0 *arg0, S1 *arg1) {
    S2 *temp;

    if (arg1 != NULL && func_088F5BA0(arg0->unk_7E64) == 0 && arg1->unk_06 != 0) {
        temp = &arg0->unk_8100;
        temp->unk_90.unk_00 = temp->unk_A0.unk_00;
        temp->unk_90.unk_04 = temp->unk_A0.unk_04;
        temp->unk_90.unk_08 = temp->unk_A0.unk_08;
        temp->unk_90.unk_0C = temp->unk_A0.unk_0C;
        func_08854F60(0.5f, &temp->unk_B0, &temp->unk_B0);
        temp->unk_B0.unk_0C = 0.0f;
        arg0->unk_9300.unk_00 = arg0->unk_9310.unk_00;
        arg0->unk_9300.unk_04 = arg0->unk_9310.unk_04;
        arg0->unk_9300.unk_08 = arg0->unk_9310.unk_08;
        arg0->unk_9300.unk_0C = arg0->unk_9310.unk_0C;
    }
}
