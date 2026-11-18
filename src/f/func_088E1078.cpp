#include "common.h"

extern "C" {

struct V {
    u8 pad_00[0x8];
    s32 unk_08;
};

struct N {
    N *unk_00;
    N *unk_04;
    V unk_08;
};

void func_088E1258(V *);

struct It {
    N *p;
    It(N *a) : p(a) {}
    int eq(const It &o) const { return p == o.p; }
    bool ne(const It &o) const { return !(bool)eq(o); }
};

inline void transfer(N *first, N *last, N *pos) {
    first->unk_04->unk_00 = last;
    N *t = last->unk_04;
    last->unk_04 = first->unk_04;
    first->unk_04 = pos->unk_04;
    pos->unk_04->unk_00 = first;
    pos->unk_04 = t;
    t->unk_00 = pos;
}

typedef struct {
    u8 pad_00000[0x13090];
    N *unk_13090;
    N *unk_13094;
    N *unk_13098;
    s32 unk_1309C;
} S;

inline void erase(S *l, N *n) {
    l->unk_1309C--;
    func_088E1258(&n->unk_08);
    transfer(l->unk_13098, n, n->unk_00);
}

void func_088E1078(S *arg0, V *arg1) {
    It it(arg0->unk_13090);
    It e((N *)&arg0->unk_13090);

    while (it.ne(e)) {
        V *v = &it.p->unk_08;
        if (v->unk_08 == arg1->unk_08) {
            arg0->unk_1309C--;
            func_088E1258(v);
            transfer(it.p, it.p->unk_00, arg0->unk_13098);
            break;
        }
        it.p = it.p->unk_00;
    }
}

}
