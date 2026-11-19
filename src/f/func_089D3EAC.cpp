#include "common.h"

struct T {
    u8 pad_00[0x8];
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
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70();
    virtual void unk_74();
    virtual void unk_78();
    virtual void unk_7C();
    virtual void unk_80();
    virtual void unk_84();
    virtual void unk_88();
    virtual void unk_8C();
    virtual void unk_90();
    virtual void unk_94();
    virtual void unk_98();
    virtual void unk_9C();
    virtual void unk_A0();
    virtual void unk_A4(s32, s32);
};

extern "C" {
s32 func_08976100(s32, char *);

void func_089D3EAC(T *arg0, s32 arg1, char *arg2) {
    s32 temp = func_08976100(0x1B, arg2);
    arg0->unk_A4(arg1, temp);
}
}
