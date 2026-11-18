#include "common.h"

extern "C" {

struct A {
    u8 pad_00[0x24];
    s32 unk_24;
    u8 pad_28[0x14];
    s32 unk_3C;
};

struct B {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual void unk_14(f32, f32, s32, char *, s32);
    virtual void unk_18(s32);
};

struct T {
    u8 pad_00[0x240];
    u8 unk_240[0xA0];
    B unk_2E0;
    u8 pad_2E4[0x6C];
    s32 unk_350;
    u8 pad_354[0x65C];
    A *unk_9B0;
};

void func_08865FE4(void *, s32);
s32 func_08868CAC(void *, s32, char *, s32);
s32 func_089A8B5C(u8 *, s32, s32);
extern char D_089F23D0[];
extern char *D_08A08DF8[];
extern void *D_08AD1E28[];
extern u8 *D_08AD1F14[];

inline u8 *unk_00() {
    u8 *p = D_08AD1F14[0];
    if (p != NULL) {
        return p;
    }
    return NULL;
}

void func_089BAF48(T *arg0, A *arg1) {
    arg0->unk_9B0 = arg1;
    u8 *a = unk_00() + 0x2460;
    arg0->unk_350 &= ~0x100;
    s32 n = func_089A8B5C(a, 1, arg1->unk_3C);
    arg0->unk_2E0.unk_14(0.0f, 0.0f, 0, D_089F23D0, n);
    arg0->unk_2E0.unk_18(0xA0);
    void *q = D_08AD1E28[0] != NULL ? D_08AD1E28[0] : NULL;
    func_08865FE4(arg0->unk_240, func_08868CAC(q, 0xA, D_08A08DF8[arg1->unk_24], 1));
}

}
