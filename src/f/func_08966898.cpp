#include "common.h"

extern "C" {

struct N_08966898 {
    N_08966898 *unk_00;
    N_08966898 *unk_04;
    s32 unk_08;
    int eq4(N_08966898 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08966898 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08966898 *o) { return !(bool)eq(o); }
};

struct A_08966898 {
    u8 unk_00;
};

typedef struct {
    N_08966898 *unk_00;
    A_08966898 unk_04;
} P_08966898;

struct It_08966898 {
    N_08966898 *unk_00;
    It_08966898 postinc() {
        It_08966898 r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_08966898;

typedef struct {
    N_08966898 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_08966898;

void func_08966268(s32 *, s32 *, s32);
void *func_08966440(R_08966898 *);
void func_08966314(void *, void *);
void func_08966304(A_08966898 *, P_08966898 *);

struct E_08966898 {
};

inline void wrap(H_08966898 *h, R_08966898 *r, const E_08966898 &) {
    func_08966314(h, func_08966440(r));
}

void func_08966898(H_08966898 *arg0) {
    It_08966898 e;
    It_08966898 t;
    A_08966898 a;
    A_08966898 b;
    It_08966898 it;
    P_08966898 p;
    R_08966898 r;
    b = a;
    it.unk_00 = arg0->unk_00.unk_04;
    e.unk_00 = &arg0->unk_00;
    while (it.unk_00->ne(e.unk_00)) {
    t.unk_00 = it.unk_00;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        p.unk_00 = t.unk_00;
        p.unk_04 = b;
        func_08966268(&r.unk_00, (s32 *)&p, 0);
        wrap(arg0, &r, E_08966898());
        func_08966304(&a, &p);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
