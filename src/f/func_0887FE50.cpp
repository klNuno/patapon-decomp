#include "common.h"

extern "C" {

struct U {
    virtual void func_08();
    virtual void func_0C();
    virtual void func_10();
    virtual void func_14();
    virtual void func_18();
    virtual void func_1C();
    virtual void func_20();
    virtual void func_24();
    virtual void func_28();
    virtual void func_2C();
    virtual void func_30();
    virtual void func_34();
    virtual void func_38();
    virtual void func_3C();
    virtual void func_40(s32, s32);
};

struct T {
    u8 pad_00[4];
    s32 unk_04;
    U unk_08;
};

void func_0887FF60(T *);

void func_0887FE50(T *arg0, s32 arg1, s32 arg2, s32 arg3) {
    arg0->unk_04 = arg1;
    arg0->unk_08.func_0C();
    arg0->unk_08.func_40(arg2, arg3);
    func_0887FF60(arg0);
}
}
