#include "common.h"

extern "C" {
struct T {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C(void *arg1, void *arg2);
};
struct S {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[4];
    T unk_40;
};

void func_089A8998(S *arg0, void *arg1) {
    if (arg0->unk_38 != 0) {
        arg0->unk_40.unk_0C(arg1, arg0);
    }
}
}
