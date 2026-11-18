#include "common.h"

extern "C" {

struct B {
    virtual void unk_08(f32);
};

struct R : B {
    u32 unk_04, unk_08;
    f32 unk_0C, unk_10, unk_14, unk_18;
};

struct N {
    u8 pad_00[0x10];
    R *unk_10;
};

struct It {
    N *unk_00;
    It(const It &o) : unk_00(o.unk_00) {}
};

struct CIt {
    N *unk_00;
    CIt(const It &i) : unk_00(i.unk_00) {}
};

struct T {
    u8 pad_00[0xAA4];
    u8 *unk_AA4;
    u8 pad_AA8[0x1488];
    s32 unk_1F30;
};

void func_0886D484(void *);
It func_0897C818(void *, s32);
extern u8 D_08A04BF8[];

inline N *unk_00(u8 *p) { return (N *)(p + 0x9C); }
inline bool unk_04(N *p, CIt i) { return i.unk_00 != p; }

inline void unk_08(R *p, f32 arg1) {
    if (p->unk_14 != arg1) {
        p->unk_14 = arg1;
        ((B *)p)->unk_08(arg1 * p->unk_18);
    }
}

void func_089573F0(T *arg0) {
    func_0886D484(D_08A04BF8);
    It it = func_0897C818(arg0->unk_AA4, 1);
    if (unk_04(unk_00(arg0->unk_AA4), CIt(it))) {
        R *p = it.unk_00->unk_10;
        p->unk_0C = p->unk_14;
        p->unk_10 = 0.001f;
        p->unk_08 = 4800;
        p->unk_04 = 0;
        if (p->unk_04 >= *(volatile u32 *)&p->unk_08) {
            unk_08(p, 0.001f);
            p->unk_10 = 0.001f;
            p->unk_0C = 0.001f;
            p->unk_08 = 1;
            p->unk_04 = 1;
            ((B *)p)->unk_08(p->unk_14 * p->unk_18);
        }
        ((B *)p)->unk_08(p->unk_14 * p->unk_18);
    }
    arg0->unk_1F30 = 2;
}

}
