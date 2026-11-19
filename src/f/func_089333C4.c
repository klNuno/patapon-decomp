#include "common.h"

typedef struct { f32 unk_00; f32 unk_04; } V;
typedef struct {
    u8 pad_00[8];
    V unk_08;
    u8 pad_10[0x60];
    s32 unk_70;
} A;

f32 fabsf(f32);

void func_089333C4(A *arg0, V *arg1) {
    if (arg0->unk_70 != 0) {
        f32 temp4 = arg1->unk_04;
        f32 temp3 = arg1->unk_00;
        V *temp = &arg0->unk_08;
        f32 temp2 = temp3 * temp3 + temp4 * temp4;
        f32 temp5 = 0.0f;
        if (fabsf(temp2) > 1.1754944e-38f) {
            f32 temp8, temp9;
            temp8 = temp4 * *(volatile f32 *)&temp->unk_04;
            temp9 = temp3 * *(volatile f32 *)&temp->unk_00;
            temp5 = -(temp9 + temp8) / temp2;
        }
        arg0->unk_08.unk_00 = temp->unk_00 + 2.0f * (temp5 * arg1->unk_00);
        arg0->unk_08.unk_04 = temp->unk_04 + 2.0f * (temp5 * arg1->unk_04);
        --arg0->unk_70;
    }
}
