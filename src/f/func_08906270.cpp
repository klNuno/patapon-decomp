#include "common.h"

extern "C" {
class S {
public:
    u8 pad_00[0x15C];
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

struct U {
    u8 pad_00[0x1212D0];
    s32 unk_1212D0;
};

struct T {
    u8 pad_00[0x10];
    U *unk_10;
};

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
S *func_0898A324(void *);

void func_08906270(T *arg0, void *arg1)
{
    s32 *p = func_0885356C(arg1, 0, 1, 4);
    S *temp = func_0898A324(&arg0->unk_10->unk_1212D0);

    temp->unk_2C(*p);
    func_08852F00(arg1, 0);
}
}
