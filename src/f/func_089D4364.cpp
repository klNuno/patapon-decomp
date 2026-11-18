#include "common.h"

extern "C" {

struct B {
    u8 pad_00[0x80];
    virtual void unk_08();
    virtual void unk_0C();
};

struct T {
    u8 pad_00[8];
    f32 unk_08, unk_0C;
    u8 pad_10[8];
    B *unk_18;
    u8 pad_1C[4];
    f32 unk_20, unk_24, unk_28;
};

struct M_089CA16C {
    u8 pad_00[0x30];
    f32 unk_30, unk_34;
    u8 pad_38[0x18];
};

void func_08855354(M_089CA16C *);
void func_08864E80(void *, M_089CA16C *);
extern f32 D_089DD50C[];

void func_089D4364(T *arg0, u32 arg1) {
    M_089CA16C m;
    B *&p = arg0->unk_18;
    p->unk_0C();
    f32 a = 1.0f / 30.0f;
    a *= D_089DD50C[0];
    f32 b = 1.5f;
    b *= a;
    arg0->unk_24 -= b;
    arg0->unk_08 += arg0->unk_20;
    arg0->unk_0C += arg0->unk_24;
    func_08855354(&m);
    m.unk_30 = arg0->unk_08;
    m.unk_34 = arg0->unk_0C;
    func_08864E80(p, &m);
    arg0->unk_28 -= (f32)arg1 / 4800.0f;
}

}
