#include "common.h"

extern "C" {
struct T;

struct A {
    u8 pad_00[0x58];
    s32 unk_58;
};

struct B {
    u8 pad_00[8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
};

struct C : B {
    u8 pad_0C[0x1D8];
    T *unk_1E4;
};

struct T {
    u8 pad_00[0xD0];
    A *unk_D0;
    u8 pad_D4[0x4C];
    C *unk_120;
};

s32 func_08961318(T *arg0) {
    A *temp = arg0->unk_D0;
    if ((temp != NULL ? temp : NULL)->unk_58 != 0) {
        C *temp2 = arg0->unk_120;
        if (temp2 == NULL) {
            return 0;
        }
        if (temp2 != NULL) {
            temp2->unk_1E4 = arg0;
            arg0->unk_120->unk_48();
        }
    }
    return 1;
}
}
