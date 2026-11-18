#include "common.h"

typedef struct {
    u8 pad_00[0x38];
    f32 unk_38;
} Unk;

void func_08931388(Unk **arg0, Unk **arg1, Unk **arg2) {
    Unk *temp;
    Unk *temp2;
    Unk *temp3;
    u8 temp4;
    u8 temp5;
    temp4 = !((*arg2)->unk_38 < (*arg0)->unk_38);
    temp5 = !((*arg1)->unk_38 < (*arg2)->unk_38);
    if (temp4 && temp5) {
        return;
    }
    if (!temp4 && !temp5) {
        temp = *arg0;
        *arg0 = *arg1;
        *arg1 = temp;
    } else {
        if ((*arg1)->unk_38 < (*arg0)->unk_38) {
            temp2 = *arg0;
            *arg0 = *arg1;
            *arg1 = temp2;
        }
        if (temp4) {
            temp3 = *arg1;
            *arg1 = *arg2;
            *arg2 = temp3;
        } else {
            temp3 = *arg0;
            *arg0 = *arg2;
            *arg2 = temp3;
        }
    }
}
