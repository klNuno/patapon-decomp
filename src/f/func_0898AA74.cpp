#include "common.h"

extern "C" {

struct P {
    u32 unk_00;
    s32 unk_04;
    f32 unk_08;
    u8 pad_0C[4];
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
    u8 pad_00[0x354];
    V unk_354;
};

union I {
    N *unk_00;
    f32 unk_00_f;
};

void func_08866058(void *, s32);
void func_08866240(S *, u32, u8);
void func_0898AD5C(void *);

static inline s32 eq(N *a, N *b) {
    return a == b;
}

static inline bool ne(N *a, N *b) {
    return !(bool)eq(a, b);
}

void func_0898AA74(S *arg0, u32 arg1) {
    N *a;
    N *b;
    N *c;

    func_08866058(arg0, arg1);
    N *p = arg0->unk_354.unk_00;
    I end;
    end.unk_00 = (N *)&arg0->unk_354;
    if (ne(p, end.unk_00)) {
        f32 x = (f32)arg1 / 4800.0f;
        do {
            f32 y = p->unk_08.unk_08;
            P *q = &p->unk_08;
            y -= x;
            q->unk_08 = y;
            if (y <= 0.0f) {
                func_08866240(arg0, q->unk_00, q->unk_04 == 1);
                N *next = p->unk_00;
                --arg0->unk_354.unk_0C;
                func_0898AD5C(q);
                a = arg0->unk_354.unk_08;
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
