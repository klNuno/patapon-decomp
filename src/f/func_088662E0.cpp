#include "common.h"

extern "C" {

struct U {
    u8 pad_00[0x10];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual f32 func_28(s32);
};

struct T {
    u8 pad_00[0x40];
    U *unk_40;
    u8 pad_44[8];
    s32 unk_4C;
    u8 pad_50[4];
    f32 unk_54;
};

void func_088662E0(T *arg0, f32 arg1) {
    f32 temp = arg0->unk_40->func_28(arg0->unk_4C);

    arg0->unk_54 = temp;
    if (temp > 0.0f) {
        arg0->unk_54 = temp - 1.0f;
    }
    arg0->unk_54 *= arg1;
}
}
