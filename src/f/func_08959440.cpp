#include "common.h"

extern "C" {

extern s32 func_0895A888(s32);

struct N {
    N *unk_00;
    N *unk_04;
    s32 unk_08;
    s32 unk_0C;
};

struct A {};

struct I {
    N *unk_00;

    s32 eq(N *a) const { return unk_00 == a; }
    bool ne(N *a, const A &) const { return !(bool)eq(a); }
};

union R { N *unk_00; f32 unk_04; };

void func_08959440(R *arg0, N *arg1, I arg2, R arg3) {
    if (arg2.unk_00 == arg3.unk_00) {
        *arg0 = arg3;
    } else {
        I a;
        s32 n;
        N *t;
        N *p;
        a.unk_00 = arg1->unk_00;
        n = 0;
        if (a.ne(arg1, A())) {
            do {
                a.unk_00 = a.unk_00->unk_00;
                n++;
            } while (a.ne(arg1, A()));
        }
        arg1->unk_0C -= n;
        a.unk_00 = arg2.unk_00;
        if (a.ne(arg3.unk_00, A())) {
            do {
                func_0895A888((s32)&a.unk_00->unk_08);
                a.unk_00 = a.unk_00->unk_00;
            } while (a.ne(arg3.unk_00, A()));
        }
        t = (N *)arg1->unk_08;
        arg2.unk_00->unk_04->unk_00 = arg3.unk_00;
        p = arg3.unk_00->unk_04;
        arg3.unk_00->unk_04 = arg2.unk_00->unk_04;
        arg2.unk_00->unk_04 = t->unk_04;
        t->unk_04->unk_00 = arg2.unk_00;
        t->unk_04 = p;
        p->unk_00 = t;
        *arg0 = arg3;
    }
}
}
