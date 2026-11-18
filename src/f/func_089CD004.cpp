#include "common.h"

extern "C" {

struct N_089CD004 {
    N_089CD004 *unk_00;
    N_089CD004 *unk_04;
    s32 unk_08;
    int eq4(N_089CD004 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_089CD004 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_089CD004 *o) { return !(bool)eq(o); }
};

struct A_089CD004 {
    u8 unk_00;
};

typedef struct {
    N_089CD004 *unk_00;
    A_089CD004 unk_04;
} P_089CD004;

struct It_089CD004 {
    N_089CD004 *unk_00;
    It_089CD004 postinc() {
        It_089CD004 r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_089CD004;

typedef struct {
    N_089CD004 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_089CD004;

void func_089CCFC8(R_089CD004 *, P_089CD004 *, s32);
void *func_089CD0F4(R_089CD004 *);
void func_089CC5F0(H_089CD004 *, void *);
void func_089CD0E4(A_089CD004 *, P_089CD004 *);

struct E_089CD004 {
};

inline void wrap(H_089CD004 *h, R_089CD004 *r, const E_089CD004 &) {
    func_089CC5F0(h, func_089CD0F4(r));
}

void func_089CD004(H_089CD004 *arg0) {
    It_089CD004 e;
    It_089CD004 t;
    A_089CD004 a;
    A_089CD004 b;
    It_089CD004 it;
    P_089CD004 p;
    R_089CD004 r;
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
        func_089CCFC8(&r, &p, 0);
        wrap(arg0, &r, E_089CD004());
        func_089CD0E4(&a, &p);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
