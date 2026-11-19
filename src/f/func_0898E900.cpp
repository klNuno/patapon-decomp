#include "common.h"

struct T {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10(void *);
};

struct S {
    u8 pad_00[0x10];
    T unk_10;
    u8 pad_94[0x38];
    s32 unk_CC;
};

extern "C" {
void func_0898E900(S *arg0) {
    switch (arg0->unk_CC) {
    case 0:
        arg0->unk_10.unk_10(arg0);
        break;
    case 1:
    case 2:
        break;
    }
}
}
