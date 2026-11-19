#include "common.h"

struct T {
    T *unk_00;
    T *unk_04;
    u8 pad_08[4];
    T *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;

    s32 unk_24(T *arg0) {
        if (unk_00 != this) {
            arg0->unk_00 = unk_00;
            (*(T **)&unk_00)->unk_04 = arg0;
            unk_00 = arg0;
            return 1;
        }
        unk_00 = arg0;
        unk_04 = arg0;
        arg0->unk_00 = this;
        return 1;
    }
};

extern "C" {
void func_0888BD4C(T *arg0, T *arg1) {
    if (arg0 != arg1) {
        s32 temp = arg0->unk_24(arg1);
        arg1->unk_04 = arg0;
        if (temp != 0) {
            arg1->unk_0C = arg0;
            ++arg0->unk_20;
        }
    }
}
}
