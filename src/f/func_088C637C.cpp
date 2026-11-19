#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
};

struct B {
    u8 pad_00[0x8100];
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32);
};

struct T {
    u8 pad_00[0x10];
    A unk_10;
    u8 pad_114[0x1AF0 - 0x114];
    B unk_1AF0;
};

extern int func_08864FC0(s32);

void func_088C637C(T *arg0, s32 arg1) {
    arg0->unk_10.unk_10();
    func_08864FC0((s32)&arg0->unk_10);
    arg0->unk_1AF0.unk_1C(arg1);
}

}
