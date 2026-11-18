#include "common.h"

extern "C" {

struct T {
    s32 unk_00;
    s32 unk_04;
};

struct N {
    N *unk_00;
    u8 pad_04[4];
    T unk_08;

    s32 unk_10(N *arg0) { return this == arg0; }
    bool unk_14(N *arg0) { return !(bool)unk_10(arg0); }
};

struct I { N *unk_00; };

struct U {
    u8 pad_00[0x514];
    N unk_514;
};

void func_0892C14C(s32, f32, f32);

void func_08935B44(U *arg0, s32 arg1, f32 arg2, f32 arg3) {
    I temp;
    I temp2;
    temp2.unk_00 = arg0->unk_514.unk_00;
    temp.unk_00 = &arg0->unk_514;
    if (temp2.unk_00->unk_14(temp.unk_00)) {
        do {
            T *temp3 = &temp2.unk_00->unk_08;
            if (temp3->unk_00 == arg1) {
                func_0892C14C(temp3->unk_04, arg2, arg3);
            }
            temp2.unk_00 = temp2.unk_00->unk_00;
        } while (temp2.unk_00->unk_14(temp.unk_00));
    }
}

}
