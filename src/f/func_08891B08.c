#include "common.h"

typedef struct T T;
struct T {
    T *unk_00, *unk_04;
    u8 pad_08[4];
    T *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
};

void func_08891B08(T *arg0, T *arg1) {
    if (arg0 != arg1) {
        s32 temp;
        if (arg0->unk_00 != arg0) {
            arg1->unk_00 = arg0->unk_00;
            temp = 1;
            arg0->unk_00->unk_04 = arg1;
            arg0->unk_00 = arg1;
        } else {
            arg0->unk_00 = arg1;
            arg0->unk_04 = arg1;
            arg1->unk_00 = arg0;
            temp = 1;
        }
        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            ++arg0->unk_20;
        }
    }
}
