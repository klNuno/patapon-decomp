#include "common.h"

extern "C" {

void func_08855354(s32);

class A_08975A44 {
public:
    u8 pad_00[0x10];
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
    virtual s32 unk_48(s32);
    virtual void unk_4C();
    virtual void unk_50(s32, s32, s32, s32);
};

void func_08975A44(A_08975A44 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp;

    temp = arg0->unk_48(arg2);
    if (temp < 0) {
        func_08855354(arg1);
    }
    arg0->unk_50(arg1, temp, arg3, arg4);
}

}
