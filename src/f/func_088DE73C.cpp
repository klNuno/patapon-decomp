#include "common.h"

extern "C" {

struct A088DE73C_Base {
    u8 pad_00[0x28];
};

struct A088DE73C : A088DE73C_Base {
    virtual void v0();
    virtual void v1();
};

struct B088DE73C_Base {
    u8 pad_00[0x91C];
};

struct B088DE73C : B088DE73C_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
};

struct C088DE73C {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

typedef struct {
    u8 pad_00[0x1040];
    A088DE73C unk_1040;
    u8 pad_106C[0x28C60 - 0x106C];
    C088DE73C unk_28C60;
    u8 pad_28C64[0x2DAC0 - 0x28C64];
    C088DE73C unk_2DAC0;
    u8 pad_2DAC4[0x506F0 - 0x2DAC4];
    u8 unk_506F0[0x87280 - 0x506F0];
    u8 unk_87280[0x1212D0 - 0x87280];
    u8 unk_1212D0[0x13A16C - 0x1212D0];
    B088DE73C *unk_13A16C;
} T088DE73C;

s32 func_088C6494(void *);
void func_08864FC0(s32);
void func_0898A210(void *);
void func_088DDE78(T088DE73C *);
void func_089AE514(void *);

void func_088DE73C(T088DE73C *arg0) {
    func_08864FC0(func_088C6494(arg0->unk_506F0));
    func_0898A210(arg0->unk_1212D0);
    arg0->unk_1040.v1();
    func_088DDE78(arg0);
    arg0->unk_13A16C->v4();
    arg0->unk_28C60.v3();
    arg0->unk_2DAC0.v3();
    func_089AE514(arg0->unk_87280);
}

}
