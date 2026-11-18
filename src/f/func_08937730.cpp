#include "common.h"

extern "C" {

class Base_08937730 {
public:
    u8 pad_00[8];
    virtual void vf_08();
    virtual void vf_0C();
    virtual void vf_10();
    virtual void vf_14();
    virtual void vf_18();
    virtual void vf_1C();
    virtual void vf_20();
    virtual void vf_24();
    virtual void vf_28();
    virtual void vf_2C();
    virtual void vf_30();
    virtual void vf_34();
    virtual void vf_38();
    virtual void vf_3C();
    virtual void vf_40();
    virtual void vf_44();
    virtual void vf_48();
    virtual void vf_4C();
    virtual void vf_50();
    virtual void vf_54();
    virtual void vf_58();
};

class Obj_08937730 : public Base_08937730 {
public:
    u8 pad_0C[0x58 - 0xC];
    void *unk_58;
    u8 pad_5C[0x7C - 0x5C];
    void *unk_7C;
    u8 pad_80[0xCC - 0x80];
    void *unk_CC;
    u8 pad_D0[0x370 - 0xD0];
    void *unk_370;
    u8 pad_374[0x390 - 0x374];
    s32 unk_390;
    s32 unk_394;
};

s32 func_0893D430(s32 *);
void func_08967630(Obj_08937730 *, s32, s32);
extern u8 D_08A47138[];
extern u8 D_08A47154[];
extern u8 D_08A4716C[];
extern u8 D_08A4717C[];
extern u8 D_08A471C8[];

Obj_08937730 *func_08937730(Obj_08937730 *arg0, s32 arg1, s32 arg2) {
    func_08967630(arg0, arg2, func_0893D430(&arg1));
    *(void **)((u8 *)arg0 + 8) = D_08A47138;
    arg0->unk_58 = D_08A47154;
    arg0->unk_7C = D_08A4716C;
    arg0->unk_CC = D_08A4717C;
    arg0->unk_370 = D_08A471C8;
    arg0->unk_390 = 0;
    arg0->unk_394 = 0;
    arg0->vf_58();
    return arg0;
}

}
