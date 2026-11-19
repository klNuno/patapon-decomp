#include "common.h"

struct T {
    s32 unk_00;
    u8 pad_04[8];
    f32 unk_0C;
    u8 pad_10[0x32];
    s16 unk_42;
};

struct N {
    N *unk_00;
    u8 pad_04[4];
    T unk_08;
};

struct G {
    u8 pad_00[0x514];
    N unk_514;
};

struct I {
    N *unk_00;
    s32 eq(const I &arg0) const { return unk_00 == arg0.unk_00; }
    bool ne(const I &arg0) const { return !(bool)eq(arg0); }
};

extern "C" {
void func_08935AE8(G *arg0, s32 arg1, f32 arg2) {
    I temp0;
    I temp1;
    T *temp2;

    temp0.unk_00 = arg0->unk_514.unk_00;
    temp1.unk_00 = &arg0->unk_514;
    if (temp0.ne(temp1)) {
        do {
            temp2 = &temp0.unk_00->unk_08;
            if (temp2->unk_00 == arg1) {
                temp2->unk_42 = 1;
                temp2->unk_0C = arg2;
            }
            temp0.unk_00 = temp0.unk_00->unk_00;
        } while (temp0.ne(temp1));
    }
}
}
