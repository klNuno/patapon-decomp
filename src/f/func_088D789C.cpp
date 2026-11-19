#include "common.h"

extern "C" {
struct T {
    u8 pad_00[0x4C];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(void *arg1);
};

s32 func_088D789C(void *arg0, T *arg1, void *arg2) {
    arg1->unk_1C(arg2);
    return 1;
}
}
