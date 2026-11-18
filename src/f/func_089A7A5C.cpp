#include "common.h"

extern "C" {

class Obj {
public:
    u8 pad_00[0x10];
    virtual void func_00();
    virtual void func_01();
    virtual void func_02();
    virtual void func_03();
    virtual void func_04();
    virtual void func_05();
    virtual void func_06();
    virtual void func_07();
    virtual void func_08();
    virtual void func_09();
    virtual void func_0A();
    virtual void func_0B();
    virtual void func_0C();
    virtual void func_0D();
    virtual void func_0E();
    virtual void func_0F();
    virtual void func_10();
    virtual void func_11();
    virtual void func_12();
    virtual void func_13();
    virtual void func_14();
    virtual void func_15();
    virtual void func_16();
    virtual void func_17();
    virtual void func_18();
    virtual u8 func_19(s32);
};

typedef struct S2 {
    u8 pad_00[0x40];
    Obj *unk_40;
} S2;

typedef struct S1 {
    u8 pad_00[0x110];
    S2 *unk_110;
} S1;

typedef struct S0 {
    u8 pad_00[0x10];
    S1 *unk_10;
} S0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089A7A5C(S0 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    *temp2 = arg0->unk_10->unk_110->unk_40->func_19(*temp);
    func_08852F00(arg1, 0);
}

}
