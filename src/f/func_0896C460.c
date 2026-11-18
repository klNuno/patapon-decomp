#include "common.h"

typedef struct {
    s32 *unk_00;
    s32 unk_04;
} Vec_0896C460;

typedef struct {
    u8 pad_00[0x1C];
    Vec_0896C460 unk_1C;
} Obj_0896C460;

Obj_0896C460 *func_0896C460(Obj_0896C460 *arg0, Obj_0896C460 *arg1) {
    s32 *temp;
    s32 *temp2;
    s32 *temp3;
    s32 *temp4;
    Vec_0896C460 *temp5;

    if (arg0 != arg1) {
        temp = arg1->unk_1C.unk_00;
        temp2 = arg1->unk_1C.unk_00 + arg1->unk_1C.unk_04;
        temp5 = &arg0->unk_1C;
        temp3 = arg0->unk_1C.unk_00;
        if ((u32)temp3 != (u32)(temp3 + arg0->unk_1C.unk_04)) {
            do {
                temp3++;
            } while (temp3 != temp5->unk_00 + arg0->unk_1C.unk_04);
        }
        arg0->unk_1C.unk_04 = 0;
        for (temp4 = arg0->unk_1C.unk_00; temp != temp2; temp++, temp4++) {
            if (temp4 != NULL) {
                *temp4 = *temp;
            }
            arg0->unk_1C.unk_04++;
        }
    }
    return arg0;
}
