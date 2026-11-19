#include "common.h"

struct T {
    u8 pad_00[0x8];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C(s32);
};

struct S {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(T *);
};

extern "C" {
void func_0885D670(T *arg0, S *arg1) {
    if (arg0 != NULL) {
        arg0->unk_2C(-1);
        arg1->unk_10(arg0);
    }
}
}
