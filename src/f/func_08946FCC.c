#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_08946FCC;

typedef struct {
    u8 pad_00[0x410];
    Vec_08946FCC unk_410;
} Obj_08946FCC;

Obj_08946FCC *func_08946FCC(Obj_08946FCC *arg0, Obj_08946FCC *arg1) {
    s32 *temp;
    s32 *temp2;
    s32 *temp3;
    s32 *temp4;
    Vec_08946FCC *temp5;

    if (arg0 != arg1) {
        temp = arg1->unk_410.unk_00;
        temp2 = arg1->unk_410.unk_00 + arg1->unk_410.unk_04;
        temp5 = &arg0->unk_410;
        temp3 = arg0->unk_410.unk_00;
        if ((u32)temp3 != (u32)(temp3 + arg0->unk_410.unk_04)) {
            do {
                temp3++;
            } while (temp3 != temp5->unk_00 + arg0->unk_410.unk_04);
        }
        arg0->unk_410.unk_04 = 0;
        for (temp4 = arg0->unk_410.unk_00; temp != temp2; temp++, temp4++) {
            if (temp4 != NULL) {
                *temp4 = *temp;
            }
            arg0->unk_410.unk_04++;
        }
    }
    return arg0;
}
