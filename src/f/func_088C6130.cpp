#include "common.h"

extern "C" {

struct A_088C6130 {
    virtual void vfunc_08();
    virtual void vfunc_0C(s32, void *, s32);
};

struct R_088C6130 {
    s32 *unk_00;
    s32 get() {
        s32 v;
        if (unk_00 != NULL) {
            v = *unk_00;
        } else {
            v = 0;
        }
        return v;
    }
    s32 release() { --*unk_00; return get(); }
};

struct H_088C6130 {
    s32 unk_00;
    A_088C6130 *unk_04;
    s32 unk_08;
    R_088C6130 unk_0C;
};

struct V1_088C6130 {
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

struct S1AF0_088C6130 {
    u8 pad_00[0x8100];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

struct S10_088C6130 {
    u8 pad_00[0x100];
    virtual void vfunc_08();
    virtual void vfunc_0C();
};

struct V2_088C6130 {
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14(s32);
};

struct S36A10_088C6130 {
    u8 pad_00[0x28];
    virtual void vfunc_08();
    virtual void vfunc_0C();
    virtual void vfunc_10();
    virtual void vfunc_14(s32);
};

struct O_088C6130 {
    u8 pad_00[0x10];
    S10_088C6130 unk_10;
    u8 pad_114[0x1AF0 - 0x114];
    S1AF0_088C6130 unk_1AF0;
    u8 pad_9BF4[0x324A0 - 0x9BF4];
    u8 unk_324A0[0x30];
    u8 unk_324D0[0x36A00 - 0x324D0];
    void *unk_36A00;
    u8 pad_36A04[0xC];
    S36A10_088C6130 unk_36A10;
};

void func_089A88AC(void *);
void func_088CE0C0(void *);
void func_08882394(void *);
void func_088C6338(H_088C6130 *, void *);
void func_088DFD50(void *, void *, s32);
void func_088C64D0(s32, s32);
void func_089A85B8(void *);
void func_088CE1EC(void *, void *);

void func_088C6130(O_088C6130 *arg0) {
    H_088C6130 h;

    func_089A88AC(&arg0->unk_36A10);
    func_088CE0C0(arg0->unk_324A0);
    arg0->unk_1AF0.vfunc_0C();
    func_08882394(arg0->unk_324D0);
    func_088C6338(&h, arg0->unk_36A00);
    func_088DFD50(&arg0->unk_1AF0, arg0->unk_324A0, h.unk_08);
    if (h.unk_08 != 0) {
        if (h.unk_0C.release() == 0) {
            h.unk_04->vfunc_0C(h.unk_08, *(void **)&h.unk_0C, h.unk_00);
            func_088C64D0(h.unk_08, h.unk_00);
        }
    }
    arg0->unk_10.vfunc_0C();
    func_089A85B8(&arg0->unk_36A10);
    arg0->unk_36A10.vfunc_14(-3);
    func_088CE1EC(arg0->unk_324A0, &arg0->unk_36A10);
}

}
