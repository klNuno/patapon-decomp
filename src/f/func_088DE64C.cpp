#include "common.h"

extern "C" {

struct A088DE64C_Base {
    u8 pad_00[0x100];
};

struct A088DE64C : A088DE64C_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2(s32);
};

struct B088DE64C_Base {
    u8 pad_00[0x91C];
};

struct B088DE64C : B088DE64C_Base {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3(s32);
};

struct C088DE64C {
    virtual void v0();
    virtual void v1();
    virtual void v2(s32);
};

typedef struct {
    u8 pad_00[0x28C60];
    u8 unk_28C60[0x2DAC0 - 0x28C60];
    C088DE64C unk_2DAC0;
    u8 pad_2DAC4[0x2E3C8 - 0x2DAC4];
    u8 unk_2E3C8[0x506F0 - 0x2E3C8];
    u8 unk_506F0[0x1212D0 - 0x506F0];
    u8 unk_1212D0[0x13A16C - 0x1212D0];
    B088DE64C *unk_13A16C;
} T088DE64C;

s32 func_088C6494(void *);
void func_08864FC0(s32);
void func_0898A170(void *, s32);
void func_0892E67C(void *, s32, s32);
void func_0891EBCC(void *, s32, void *);
extern void *D_08AD8DD8[];

void func_088DE64C(T088DE64C *arg0, s32 arg1) {
    ((A088DE64C *)func_088C6494(arg0->unk_506F0))->v2(arg1);
    func_08864FC0(func_088C6494(arg0->unk_506F0));
    func_0898A170(arg0->unk_1212D0, arg1);
    func_0892E67C(D_08AD8DD8[0] != NULL ? D_08AD8DD8[0] : NULL, arg1, 0);
    func_0891EBCC(arg0->unk_28C60, arg1, arg0->unk_2E3C8);
    arg0->unk_2DAC0.v2(arg1);
    arg0->unk_13A16C->v3(arg1);
}

}
