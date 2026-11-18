#include "common.h"

extern "C" {

struct A088DE1D4_Base {
    u8 pad_00[0x28];
};

struct A088DE1D4 : A088DE1D4_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(s32);
};

struct B088DE1D4_Base {
    u8 pad_00[0x91C];
};

struct B088DE1D4 : B088DE1D4_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

struct C088DE1D4 {
    virtual void v0();
    virtual void v1();
    virtual void v2(s32);
};

typedef struct {
    u8 pad_00[0x310];
    u8 unk_310[0x28C60 - 0x310];
    u8 unk_28C60[0x2DAC0 - 0x28C60];
    C088DE1D4 unk_2DAC0;
    u8 pad_2DAC4[0x2E3C8 - 0x2DAC4];
    u8 unk_2E3C8[0x506D0 - 0x2E3C8];
    u8 unk_506D0[0x506F0 - 0x506D0];
    u8 unk_506F0[0x13A16C - 0x506F0];
    B088DE1D4 *unk_13A16C;
} T088DE1D4;

void func_088C637C(void *);
s32 func_088C6484(void *);
void func_088DFF14(s32, s32);
A088DE1D4 *func_088C64C0(void *);
void func_0892E67C(void *, s32, s32);
void func_0891EBCC(void *, s32, void *);
void func_08914EB4(void *, s32);
void func_08990BF0(void *, s32);
extern void *D_08AD8DD8[];

void func_088DE1D4(T088DE1D4 *arg0, s32 arg1) {
    func_088C637C(arg0->unk_506F0);
    func_088DFF14(func_088C6484(arg0->unk_506F0), arg1);
    func_088C64C0(arg0->unk_506F0)->v4(arg1);
    func_0892E67C(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, arg1, 0);
    func_0891EBCC(arg0->unk_28C60, arg1, arg0->unk_2E3C8);
    arg0->unk_2DAC0.v2(arg1);
    arg0->unk_13A16C->v3(arg1);
    func_08914EB4(arg0->unk_310, arg1);
    func_08990BF0(arg0->unk_506D0, arg1);
}

}
