#include "common.h"

extern "C" {

class C_089373B0 {
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
    virtual void unk_48();
    virtual void unk_4C();
    virtual void unk_50();
    virtual void unk_54();
    virtual void unk_58();
    virtual void unk_5C();
    virtual void unk_60();
    virtual void unk_64();
    virtual void unk_68(s32, s32);
};

typedef struct {
    u8 pad_00[0xD30];
    C_089373B0 *unk_D30;
} S089373B0_14;

typedef struct {
    u8 pad_00[0x14];
    S089373B0_14 *unk_14;
} S089373B0;

void func_08852F00(void *, s32);
s32 *func_0885356C(void *, s32, s32, s32);

void func_089373B0(S089373B0 *arg0, void *arg1) {
    s32 *temp;
    s32 *temp2;

    temp = func_0885356C(arg1, 0, 1, 4);
    temp2 = func_0885356C(arg1, 1, 1, 4);
    arg0->unk_14->unk_D30->unk_68(*temp, *temp2 != 0);
    func_08852F00(arg1, 0);
}

}
