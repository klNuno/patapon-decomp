#include "common.h"

extern "C" {
struct T {
    void *unk_00;
    u32 unk_04, unk_08;
    f32 unk_0C, unk_10, unk_14, unk_18;

    void func_00(f32 arg0, u32 arg1, f32 arg2) {
        unk_0C = unk_14;
        unk_10 = arg0;
        if (arg2 >= 0.0f) {
            unk_08 = arg1;
            unk_04 = 0;
        }
    }

    void func_04(f32 arg0) {
        if (unk_04 >= unk_08) {
            if (unk_14 != arg0) {
                unk_14 = arg0;
                unk_08_call(arg0);
            }
            unk_10 = arg0;
            unk_0C = arg0;
            unk_08 = 1;
            unk_04 = 1;
            unk_08_call(unk_14);
        }
        unk_08_call(unk_14);
    }

    void unk_08_call(f32 arg0);
};

struct A {
    virtual void unk_08(f32);
};

inline void T::unk_08_call(f32 arg0) {
    ((A *)this)->unk_08(arg0 * unk_18);
}

struct N {
    N *unk_00;
    u8 pad_04[0xC];
    T *unk_10;
};

struct It {
    N *unk_00;
    It() {}
    It(N *arg0) : unk_00(arg0) {}
    It(const It &arg0) : unk_00(arg0.unk_00) {}
    s32 func_00(const It &arg0) const { return unk_00 == arg0.unk_00; }
    bool func_04(const It &arg0) const { return !(bool)func_00(arg0); }
};

struct S {
    u8 pad_00[0x9C];
    N unk_9C;
};

void func_0897C818(It *, void *, s32);

struct H {
    u8 pad_00[0x10];
    It unk_10;
    u8 pad_14[4];
    H() {}
};

void func_0897C56C(S *arg0, s32 arg1, f32 arg2, f32 arg3) {
    H h;
    if (arg1 == 0) {
        It p(arg0->unk_9C.unk_00);
        It q(&arg0->unk_9C);
        if (p.func_04(q)) {
            u32 u = (u32)(4800.0f * arg3);
            do {
                T *t = p.unk_00->unk_10;
                t->func_00(arg2, u, arg3);
                t->func_04(arg2);
                p.unk_00 = p.unk_00->unk_00;
            } while (p.func_04(q));
        }
    } else {
        func_0897C818(&h.unk_10, arg0, arg1);
        It q(&arg0->unk_9C);
        if ((h.unk_10.func_00(q) ^ 1) != 0) {
            T *t = h.unk_10.unk_00->unk_10;
            t->unk_0C = t->unk_14;
            t->unk_10 = arg2;
            if (arg3 >= 0.0f) {
                t->unk_08 = (u32)(4800.0f * arg3);
                t->unk_04 = 0;
            }
            t->func_04(arg2);
        }
    }
}
}
