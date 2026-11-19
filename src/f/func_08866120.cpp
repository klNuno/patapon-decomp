#include "common.h"

extern "C" {
struct T {
    u8 pad_00[0x10];
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
    virtual void unk_38(s32 arg1, s32 arg2);
};
struct S {
    u8 pad_00[0x40];
    T *unk_40;
};

void func_08866120(S *arg0) {
    T *temp = arg0->unk_40;
    if (temp != NULL) {
        temp->unk_38(0, 0);
    }
}
}
