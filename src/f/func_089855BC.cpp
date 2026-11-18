#include "common.h"

extern "C" {

class Base_089855BC {
public:
    u8 pad_00[0x4];
};

class Derived_089855BC : public Base_089855BC {
public:
    u8 pad_04[0x4];
};

class Obj_089855BC {
public:
    u8 pad_00[0x148];
    u8 unk_148;
    u8 pad_149[0xF];
    u32 unk_158;
    virtual void func_slot0();
    virtual void func_slot1();
    virtual void func_slot2();
};

extern Derived_089855BC *D_08A8812C[];

u8 func_08860820(Base_089855BC *, s32);

u8 func_089855BC(Obj_089855BC *arg0) {
    if (arg0->unk_148 == 1) {
        return 1;
    }
    Derived_089855BC *d = D_08A8812C[0];
    if (func_08860820(d != NULL ? (Base_089855BC *)d : NULL, 0) == 1) {
        return 0;
    }
    if (arg0->unk_158++ < 2) {
        return 0;
    }
    arg0->unk_158 = 0;
    arg0->func_slot2();
    arg0->unk_148 = 1;
    return 1;
}

}
