#include "common.h"

struct T {
    u8 pad_00[0x90];

    virtual void unk_08(s32);
};

struct S {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

extern "C" {
void func_088D28F8(T *arg0, S *arg1) {
    if (arg0 != NULL) {
        arg0->unk_08(-1);
        arg1->unk_10(arg0);
    }
}
}
