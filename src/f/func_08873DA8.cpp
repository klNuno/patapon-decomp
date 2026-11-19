#include "common.h"

class V {
public:
    u8 pad_00[0x28];
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
};

struct T {
    u8 pad_00[0x554F0];
    V unk_554F0;
    u8 pad_5551C[4];
    u8 unk_55520[1];
};

struct S {
    f32 unk_00;
    u8 pad_04[0xC];
    s32 unk_10;
    s32 unk_14;
    s32 unk_18;
    s32 unk_1C;
};

extern "C" {
void func_089139A4(void *, s32, void *, s32);

void func_08873DA8(T *arg0, s32 arg1, f32 arg2, s32 arg3) {
    S temp;

    arg0->unk_554F0.func_14();
    temp.unk_00 = arg2;
    temp.unk_18 = 0;
    temp.unk_14 = 0;
    temp.unk_10 = 0;
    temp.unk_1C = 0;
    func_089139A4(arg0->unk_55520, 0, &temp, arg3);
}
}
