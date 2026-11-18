#include "common.h"

typedef struct {
    s32 unk_00;
    f32 unk_04;
    s32 unk_08;
    s32 unk_0C;
} Unk;

void func_089314D4(Unk *arg0, Unk *arg1) {
    Unk *temp;
    Unk *temp2;
    Unk *temp3;
    s32 temp4;
    f32 temp5;
    s32 temp6;
    s32 temp7;
    if (arg0 != arg1) {
        temp = arg1 - 1;
        if (arg0 < temp) {
            do {
                temp2 = arg0;
                if (arg0 != arg1) {
                    temp3 = arg0 + 1;
                    if (temp3 != arg1) {
                        do {
                            if (temp3->unk_04 < temp2->unk_04) {
                                temp2 = temp3;
                            }
                            temp3++;
                        } while (temp3 != arg1);
                    }
                }
                if (temp2 != arg0) {
                    temp4 = temp2->unk_00;
                    temp5 = temp2->unk_04;
                    temp6 = temp2->unk_08;
                    temp7 = temp2->unk_0C;
                    temp2->unk_00 = arg0->unk_00;
                    temp2->unk_04 = arg0->unk_04;
                    temp2->unk_08 = arg0->unk_08;
                    temp2->unk_0C = arg0->unk_0C;
                    arg0->unk_00 = temp4;
                    arg0->unk_04 = temp5;
                    arg0->unk_08 = temp6;
                    arg0->unk_0C = temp7;
                }
                arg0++;
            } while (arg0 < temp);
        }
    }
}
