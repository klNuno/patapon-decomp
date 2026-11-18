#include "common.h"

extern "C" {
void func_0883C1F8(s32, s32, s32);

struct T {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
    virtual void unk_28();
    virtual void unk_2C();
    virtual void unk_30();
    virtual void unk_34();
    virtual void unk_38(f32);
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual s32 unk_48();
    virtual s32 unk_4C();
};

struct S : T {
    u8 pad_04[0xC];
    f32 unk_10;
    u8 pad_14[0x50];
    s32 unk_64;
    u8 pad_68[0xC];
    f32 unk_74;
};

void func_08924AC0(S *arg0, f32 arg1) {
    if (arg0->unk_48()) {
        f32 temp = arg1 * arg0->unk_74;
        if (arg1 == 0.0f && arg0->unk_10 == 0.0f && arg0->unk_4C()) {
            arg0->unk_38(0.0f);
            return;
        }
        s32 temp1 = (u32)(128.0f * temp);
        func_0883C1F8(arg0->unk_64, temp1, temp1);
    }
}
}
