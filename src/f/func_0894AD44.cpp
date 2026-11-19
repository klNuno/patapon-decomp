#include "common.h"

extern "C" {
struct T {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(void *arg1, void *arg2);
};
struct S {
    u8 pad_00[0x10];
    T unk_10;
    u8 pad_94[0x9C];
    u8 unk_130;
};

void func_0894AD44(S *arg0, void *arg1) {
    if (arg0->unk_130) {
        arg0->unk_10.unk_0C(arg1, arg0);
    }
}
}
