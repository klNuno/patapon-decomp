#include "common.h"

extern "C" {
class T_0896077C {
public:
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
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68();
    virtual void unk_6C();
    virtual void unk_70();
    virtual void unk_74();
    virtual void unk_78(s32);
};

void func_089602BC(T_0896077C *);
extern s32 func_0896077C(s32, s32);

void func_089D3EFC(T_0896077C *arg0, s32 arg1, s32 arg2) {
    func_089602BC(arg0);
    func_0896077C((s32)arg0, arg1);
    arg0->unk_78(arg2);
}
}
