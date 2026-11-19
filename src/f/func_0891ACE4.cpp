#include "common.h"

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C(s32, f32, void *);
};

struct S {
    u8 pad_00[0x6E0];
    T unk_6E0;
};

extern "C" {
void func_0891AA04(S *, s32);

void func_0891ACE4(S *arg0, s32 arg1) {
    u32 temp[2];

    func_0891AA04(arg0, arg1);
    temp[0] = 0x3F800000;
    temp[1] = 0x3F800000;
    arg0->unk_6E0.unk_1C(arg1, 1.0f, temp);
}
}
