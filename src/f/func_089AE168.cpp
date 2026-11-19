#include "common.h"

extern "C" {
s32 func_088586E8(void);
s32 func_089B53D8(s32);
void func_08878864(s32, void *, s32, f32, f32, f32);

class T {
    u8 pad_00[0x58];
public:
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14();
    virtual void unk_18();
    virtual void unk_1C();
    virtual void unk_20();
    virtual void unk_24();
};

struct S {
    u8 pad_00[0xDA8];
    u8 unk_DA8;
    s32 unk_DAC;
    f32 unk_DB0;
    u8 pad_DB4[0x1D];
    u8 unk_DD1;
    T unk_DD4;
};

void func_089AE168(S *arg0) {
    s32 temp = func_089B53D8(func_088586E8());
    func_08878864(temp, (void *)8, 2, 1.0f, 0.0f, 0.0f);
    arg0->unk_DD1 = 0;
    arg0->unk_DAC = 0;
    arg0->unk_DB0 = 0.1f;
    arg0->unk_DA8 = 1;
    arg0->unk_DD4.unk_24();
}
}
