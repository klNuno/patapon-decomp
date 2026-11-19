#include "common.h"

typedef struct T T;
struct T {
    T *unk_00;
    T *unk_04;
    u8 pad_08[4];
    T *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
};

static inline s32 func_08867C5C_unk(T *arg0, T *arg1) {
    T *temp = arg0->unk_00;

    if (temp != arg0) {
        arg1->unk_00 = temp;
        arg0->unk_00->unk_04 = arg1;
        arg0->unk_00 = arg1;
        return 1;
    }
    arg0->unk_00 = arg1;
    arg0->unk_04 = arg1;
    arg1->unk_00 = arg0;
    return 1;
}

void func_08867C5C(T *arg0, T *arg1) {
    if (arg0 != arg1) {
        s32 temp = func_08867C5C_unk(arg0, arg1);

        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            ++arg0->unk_20;
        }
    }
}
