#include "common.h"

extern "C" {

struct T;

struct N {
    N *unk_00;
    N *unk_04;
    s32 unk_08;

    s32 eq4(N *o) {
        s32 r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }

    s32 eq(N *o) {
        s32 r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }

    bool ne(N *o) {
        return !(bool)eq(o);
    }
};

struct B {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
};

struct T {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0x44];
    B unk_80;
};

struct S {
    u8 pad_00[0x20];
    N unk_20;
    u8 pad_2C[0x54];
    B unk_80;
};

struct I {
    N *unk_00;
};

void func_08883150(T *);

static inline f32 min(f32 a, f32 b) {
    if (a < b) {
        return a;
    }
    return b;
}

void func_088809C8(S *arg0) {
    I end;
    I it;
    N *p = arg0->unk_20.unk_04;
    end.unk_00 = &arg0->unk_20;
    if (p != end.unk_00) {
        arg0->unk_80.unk_00 = 3.4028235e37f;
        arg0->unk_80.unk_04 = 3.4028235e37f;
        arg0->unk_80.unk_08 = -3.4028235e37f;
        arg0->unk_80.unk_0C = -3.4028235e37f;
        it.unk_00 = arg0->unk_20.unk_04;
        while (it.unk_00->ne(end.unk_00)) {
            T *q = *(T **)&it.unk_00->unk_08;
            func_08883150(q);
            q->unk_38 = 0;
            B *b = &q->unk_80;
            f32 y = min(q->unk_80.unk_04, arg0->unk_80.unk_04);
            f32 u = arg0->unk_80.unk_00;
            f32 x = b->unk_00;
            x = x < u ? x : u;
            arg0->unk_80.unk_00 = x;
            arg0->unk_80.unk_04 = y;
            y = arg0->unk_80.unk_0C;
            u = b->unk_0C;
            y = u < y ? y : u;
            x = arg0->unk_80.unk_08;
            u = b->unk_08;
            x = u < x ? x : u;
            arg0->unk_80.unk_08 = x;
            arg0->unk_80.unk_0C = y;
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
    }
}

}
