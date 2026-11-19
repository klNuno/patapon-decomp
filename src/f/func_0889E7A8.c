#include "common.h"

typedef struct {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
} Unk1;

typedef struct {
    u8 pad_00[0x60];
    Unk1 unk_60;
    Unk1 *unk_70;
} Unk2;

void func_0889E7A8(Unk2 *arg0, const Unk1 *arg1) {
    if (arg1 != NULL) {
        f32 temp1 = arg1->unk_04;
        f32 temp2 = arg1->unk_08;
        f32 temp3 = arg1->unk_0C;
        f32 temp0 = arg1->unk_00;
        Unk1 *temp = &arg0->unk_60;

        arg0->unk_60.unk_00 = temp0;
        arg0->unk_60.unk_04 = temp1;
        arg0->unk_60.unk_08 = temp2;
        arg0->unk_60.unk_0C = temp3;
        arg0->unk_70 = temp;
    } else {
        arg0->unk_70 = NULL;
    }
}
