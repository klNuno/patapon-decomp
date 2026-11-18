#include "common.h"

extern "C" {

struct C {
    virtual void unk_08();
    virtual void unk_0C();
    virtual void unk_10();
    virtual s32 unk_14();
    virtual u8 unk_18();
    virtual s32 unk_1C();
    virtual s32 unk_20();
    virtual s32 unk_24();
};

struct A {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
};

struct B {
    f32 unk_00;
    u8 unk_04;
    u8 pad_05[3];
};

struct Copy12 { f32 unk_00[3]; };
struct Copy8 { f32 unk_00[2]; };

struct P {
    A unk_00;
    A unk_0C;
    B unk_18;
};

extern s32 D_08A7B970[];
s32 func_0895B5A0(s32);
s32 func_0895B5A8(s32);
s32 func_0895B5B0(s32);
s32 func_08827824(C *);
f32 func_0882791C(C *);

void func_08858D1C(P *arg0, s32 arg1, s32 arg2) {
    P p;
    s32 n;
    C *o;

    p.unk_00.unk_00 = arg2;
    if (arg2 == 2) {
        *(Copy12 *)&arg0->unk_00 = *(Copy12 *)&p.unk_00;
        *(Copy12 *)&arg0->unk_0C = *(Copy12 *)&p.unk_0C;
        *(Copy8 *)&arg0->unk_18 = *(Copy8 *)&p.unk_18;
    } else {
        n = D_08A7B970[arg2];
        o = (C *)func_0895B5B0(n);
        func_0895B5A0(n);
        p.unk_00.unk_04 = o->unk_1C();
        p.unk_00.unk_08 = o->unk_20();
        p.unk_0C.unk_00 = func_08827824(o);
        p.unk_0C.unk_04 = o->unk_24();
        p.unk_0C.unk_08 = o->unk_14();
        p.unk_18.unk_00 = func_0882791C(o);
        p.unk_18.unk_04 = o->unk_18();
        func_0895B5A8(n);
        *(Copy12 *)&arg0->unk_00 = *(Copy12 *)&p.unk_00;
        *(Copy12 *)&arg0->unk_0C = *(Copy12 *)&p.unk_0C;
        *(Copy8 *)&arg0->unk_18 = *(Copy8 *)&p.unk_18;
    }
}
}
