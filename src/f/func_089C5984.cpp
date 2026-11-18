#include "common.h"

extern "C" {

void func_0881F120(void *, void *, s32);
extern s8 D_08A09628[];

inline void *operator new(unsigned int, void *p) { return p; }

struct Str {
    u32 unk_00;
    s8 unk_04[0x24];
    Str(const Str &o) {
        u32 n = o.unk_00;
        if (n > 0x20) {
            n = 0x20;
        }
        if (this != &o) {
            func_0881F120(unk_04, (void *)o.unk_04, n);
            unk_00 = n;
            unk_04[n] = D_08A09628[0];
        }
    }
};

struct E {
};

struct H {
    s32 unk_00;
    void *unk_04;
    s32 unk_08;
    s32 *unk_0C;
    H(const H &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {}
    void inc(const E &) { ++*unk_0C; }
};

struct T {
    Str unk_00;
    s32 unk_28;
    s32 unk_2C;
    H unk_30;
    T(const T &o) : unk_00(o.unk_00), unk_28(o.unk_28), unk_2C(o.unk_2C), unk_30(o.unk_30) {
        H *h = &unk_30;
        if (h->unk_08 != 0) {
            h->inc(E());
        }
    }
};

struct N {
    N *unk_00;
    N *unk_04;
    T unk_08;
};

struct P {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
};

void func_089C5984(P *arg0, N *arg1, T *arg2) {
    N *s = arg0->unk_08;
    N *n = s->unk_00;
    N *prev;

    if (n != s) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    new (&n->unk_08) T(*arg2);
}

}
