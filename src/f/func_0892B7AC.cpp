#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(s32, s32);
};

typedef struct {
    u8 pad_00[0x300];
    S unk_300;
    u8 pad_384[0x5D0 - 0x384];
    u8 unk_5D0;
} T;

void func_08865FE4(void *, s32);

void func_0892B7AC(T *arg0, s32 arg1) {
    func_08865FE4(&arg0->unk_300, arg1);
    arg0->unk_300.unk_14(0, 1);
    arg0->unk_5D0 = 1;
}
}
