#include "common.h"

struct T088A7810V {
    u8 pad_00[8];
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
    virtual void unk_38();
    virtual void unk_3C();
    virtual void unk_40();
    virtual void unk_44();
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
};

struct T {
    u8 pad_00[0x430];
    s32 unk_430;
    u8 pad_434[0xC];
    u8 unk_440[0x20];
    f32 unk_460;
    f32 unk_464;
    f32 unk_468;
    u8 pad_46C[4];
    T088A7810V unk_470;
    u8 pad_47C[0xB40 - 0x47C];
    s32 unk_B40;
    s32 unk_B44;
};

extern "C" {
void func_0889E978(void *);

void func_088A7810(T *arg0) {
    arg0->unk_B40 = 1;
    arg0->unk_B44 = 0;
    arg0->unk_430 = 0;
    func_0889E978(arg0->unk_440);
    arg0->unk_460 = 0.0f;
    arg0->unk_464 = 15.0f;
    arg0->unk_468 = 1.0f;
    arg0->unk_470.unk_58();
}
}
