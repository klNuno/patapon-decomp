#include "common.h"

extern "C" {

class B_0889A3C4 {
public:
    u8 pad_00[0x8];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14();
    virtual void vfunc_18();
};

class S_0889A3C4 : public B_0889A3C4 {
public:
    u8 pad_0C[0x4C];
    void *unk_58;
    u8 pad_5C[0x20];
    void *unk_7C;
    u8 pad_80[0x4C];
    void *unk_CC;
    u8 pad_D0[0x2A0];
    void *unk_370;
};

void func_0880416C(void *);
void func_089692D8(void *, s32);
extern u8 D_08A4583C[];
extern u8 D_08A45858[];
extern u8 D_08A45870[];
extern u8 D_08A45880[];
extern u8 D_08A458CC[];

S_0889A3C4 *func_0889A3C4(S_0889A3C4 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(void **)&arg0->pad_00[0x8] = D_08A4583C;
        arg0->unk_58 = D_08A45858;
        arg0->unk_7C = D_08A45870;
        arg0->unk_CC = D_08A45880;
        arg0->unk_370 = D_08A458CC;
        arg0->vfunc_18();
        func_089692D8(arg0, 0);
        if (arg1 > 0) {
            func_0880416C(arg0);
        }
    }
    return arg0;
}

}
