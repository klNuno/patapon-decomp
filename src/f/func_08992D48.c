#include "common.h"

typedef struct {
    u8 pad_00[0x40];
    s32 unk_40;
} Unk00;

typedef struct {
    f32 unk_00;
    u8 pad_04[8];
    Unk00 *unk_0C;
} Unk01;

typedef struct {
    u8 pad_00[8];
    Unk01 unk_08;
    u8 pad_18[0x5C];
} Unk02;

s32 func_08992D48(Unk02 *arg0) {
    Unk01 *temp = NULL;
    s32 temp2 = 5;
    s32 temp3 = 0;
    do {
        Unk01 *temp4 = &arg0->unk_08;
        if (temp4->unk_00 > 0.0f) {
            if (temp != NULL) {
                if (temp4->unk_0C->unk_40 > temp->unk_0C->unk_40) {
                    temp = temp4;
                }
            } else {
                temp = temp4;
                temp2 = temp3;
            }
        }
        ++temp3;
        ++arg0;
    } while (temp3 < 4);
    return temp2;
}
