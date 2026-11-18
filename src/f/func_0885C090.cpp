#include "common.h"

extern "C" {

struct N_0885C090 {
    N_0885C090 *unk_00;
    N_0885C090 *unk_04;
    s32 unk_08;
    int eq4(N_0885C090 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0885C090 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0885C090 *o) { return !(bool)eq(o); }
};

struct A_0885C090 {
    u8 unk_00;
};

typedef struct {
    N_0885C090 *unk_00;
    A_0885C090 unk_04;
} P_0885C090;

struct It_0885C090 {
    N_0885C090 *unk_00;
    It_0885C090 postinc() {
        It_0885C090 r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_0885C090;

typedef struct {
    N_0885C090 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_0885C090;

void func_0885BD64(R_0885C090 *, P_0885C090 *, s32);
void *func_0885C180(R_0885C090 *);
void func_0885BF64(H_0885C090 *, void *);
void func_0885C170(A_0885C090 *, P_0885C090 *);

struct E_0885C090 {
};

inline void wrap(H_0885C090 *h, R_0885C090 *r, const E_0885C090 &) {
    func_0885BF64(h, func_0885C180(r));
}

void func_0885C090(H_0885C090 *arg0) {
    It_0885C090 e;
    It_0885C090 t;
    A_0885C090 a;
    A_0885C090 b;
    It_0885C090 it;
    P_0885C090 p;
    R_0885C090 r;
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
        func_0885BD64(&r, &p, 0);
        wrap(arg0, &r, E_0885C090());
        func_0885C170(&a, &p);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
