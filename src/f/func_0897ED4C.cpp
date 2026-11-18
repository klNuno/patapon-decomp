#include "common.h"

extern "C" {

class Sub_0897ED4C {
public:
    u8 pad_00[0x58];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual u8 vf_1C();
};

class Base_0897ED4C {
public:
    u8 pad_00[0x2760];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
};

class Obj_0897ED4C : public Base_0897ED4C {
public:
    u8 pad_2764[0x2780 - 0x2764];
    Sub_0897ED4C unk_2780;
};

s32 func_0887EDA8(s32, s32);
void func_089261F8(void *, s32);
void func_089ADF6C(Obj_0897ED4C *, s32, s32);
u8 func_089AE140(Obj_0897ED4C *);

void func_0897ED4C(Obj_0897ED4C *arg0, s32 arg1, s32 arg2) {
    if (arg0->unk_2780.vf_1C() == 1 && func_089AE140(arg0) == 1 && func_0887EDA8(arg2, 0x2000) != 0) {
        arg0->vf_28();
    }
    func_089ADF6C(arg0, arg1, arg2);
    func_089261F8((u8 *)arg0 + 0x4118, arg1);
}

}
