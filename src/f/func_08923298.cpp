#include "common.h"

extern "C" {

struct P {
    u32 unk_00;
    f32 unk_04;
    u8 pad_08[8];
};

struct N {
    N *unk_00;
    N *unk_04;
    P unk_08;
};

struct V {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;
};

struct S {
    u8 pad_00[0x624];
    V unk_624;
};

union I {
    N *unk_00;
    f32 unk_00_f;
};

void func_08923440(S *, P *);
void func_08923764(void *);
extern f32 D_08A026B8[];

static inline s32 eq(N *a, N *b) {
    return a == b;
}

static inline bool ne(N *a, N *b) {
    return !(bool)eq(a, b);
}

static inline const f32 &temp(const f32 &a, const f32 &b) {
    if (a < b) {
        return b;
    }
    return a;
}

void func_08923298(S *arg0, u32 arg1) {
    f32 y;
    N *a;
    N *b;
    N *c;

    N *p = arg0->unk_624.unk_00;
    I end;
    end.unk_00 = (N *)&arg0->unk_624;
    if (ne(p, end.unk_00)) {
        f32 x = (f32)arg1 / 4800.0f;
        do {
            P *q = &p->unk_08;
            y = q->unk_04 - x;
            f32 z = temp(D_08A026B8[0], y);
            q->unk_04 = z;
            if (z <= 0.0f) {
                func_08923440(arg0, q);
                N *next = p->unk_00;
                --arg0->unk_624.unk_0C;
                func_08923764(q);
                a = arg0->unk_624.unk_08;
                b = p->unk_00;
                p->unk_04->unk_00 = b;
                c = b->unk_04;
                b->unk_04 = p->unk_04;
                p->unk_04 = a->unk_04;
                a->unk_04->unk_00 = p;
                a->unk_04 = c;
                p = next;
                c->unk_00 = a;
            } else {
                p = p->unk_00;
            }
        } while (ne(p, end.unk_00));
    }
}

}
