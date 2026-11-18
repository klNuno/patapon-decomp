#include "common.h"

extern "C" {

class C_088AAC68 {
public:
    u8 pad_00[0x24];
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
    virtual void func_40();
    virtual void func_44();
    virtual void func_48();
    virtual void func_4C();
    virtual void func_50();
    virtual void func_54();
    virtual void func_58();
    virtual void func_5C();
    virtual void func_60();
    virtual void func_64();
    virtual void func_68(s32);
};

typedef struct {
    u8 pad_00[0x10];
    s32 unk_10;
} S_088AAC68;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);
s32 func_0888A5A0(s32, s32);
s32 func_088BCF58(s32);

void func_088AAC68(S_088AAC68 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;
    C_088AAC68 *o;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    o = (C_088AAC68 *)func_0888A5A0(func_088BCF58(arg0->unk_10), *temp);
    if (o == NULL) {
        func_08852F00(arg1, 0);
        return;
    }
    o->func_68(*temp2 == 1);
    func_08852F00(arg1, 0);
}

}
