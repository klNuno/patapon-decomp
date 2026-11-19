#include "common.h"

extern "C" {

struct N {
    N *unk_00;
    u8 pad_04[4];
    s32 unk_08;
};

struct I {
    N *unk_00;

    s32 unk_04(const I &arg0) const { return unk_00 == arg0.unk_00; }
    s32 unk_08(const I &arg0) const { return unk_04(arg0) ^ 1; }
};

struct T0 {
    virtual void unk_v08();
    virtual void unk_v0C();
    virtual void unk_v10(s32);
};

struct T : T0 {
    u8 pad_04[0xA10];
    N *unk_A14;
};

void func_0897B82C(T *arg0) {
    I temp2;
    I temp;
    temp2.unk_00 = (N *)&arg0->unk_A14;
    temp.unk_00 = arg0->unk_A14;
    if (temp.unk_08(temp2)) {
        do {
            s32 temp3 = temp.unk_00->unk_08;
            temp.unk_00 = temp.unk_00->unk_00;
            arg0->unk_v10(temp3);
        } while (temp.unk_08(temp2));
    }
}

}
