#include "common.h"

typedef struct {
    u8 pad_00[0x14];
} Elem14_089B54E4;

typedef struct {
    Elem14_089B54E4 *unk_00;
    s32 unk_04;
} Vec_089B54E4;

typedef struct {
    u8 pad_00[0x1F08];
    u8 unk_1F08[0x26C8 - 0x1F08];
    Vec_089B54E4 unk_26C8;
} Obj_089B54E4;

void func_0880416C(Obj_089B54E4 *);

Obj_089B54E4 *func_089B54E4(Obj_089B54E4 *arg0, s16 arg1) {
    Vec_089B54E4 *temp;
    Elem14_089B54E4 *temp2;

    if (arg0 != NULL) {
        if (arg0->unk_1F08 != NULL) {
            temp = &arg0->unk_26C8;
            temp2 = arg0->unk_26C8.unk_00;
            if ((u32)temp2 != (u32)(temp2 + arg0->unk_26C8.unk_04)) {
                do {
                    temp2++;
                } while (temp2 != temp->unk_00 + arg0->unk_26C8.unk_04);
            }
            arg0->unk_26C8.unk_04 = 0;
        }
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}
