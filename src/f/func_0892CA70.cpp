#include "common.h"

extern "C" {
struct S;

struct T {
    void *unk_00;
    u8 pad_04[0x18];
    virtual void unk_08(S *);
};

struct S {
    u8 pad_00[0x548];
    T unk_548;
};

void func_0892CA70(S *arg0) {
    if (arg0->unk_548.unk_00 != NULL) {
        arg0->unk_548.unk_08(arg0);
    }
}
}
