#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x1C0];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
};

struct B {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14(s32);
};

struct T {
    u8 pad_00[4];
    A *unk_04;
};

s32 func_089424C0(T *arg0, s32 arg1) {
    if (arg1 == -2) {
        return 0;
    }
    if (arg1 == -1) {
        arg1 = ((A *)arg0)->unk_14();
    }
    return ((B *)arg0->unk_04)->unk_14(arg1);
}

}
