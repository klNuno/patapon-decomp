#include "common.h"

struct S {
    u8 pad_00[0x4C];
    virtual void unk_08(s32);
};

struct T {
    u8 pad_00[0x3C];
    S *unk_3C;
};

extern "C" {
void func_0894B624(T *);

void func_0894B5C8(T *arg0) {
    S *temp = arg0->unk_3C;
    if (temp != NULL) {
        if (temp != NULL) {
            temp->unk_08(1);
        }
        arg0->unk_3C = NULL;
    }
    func_0894B624(arg0);
}
}
