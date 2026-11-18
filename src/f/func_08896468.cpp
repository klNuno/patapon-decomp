#include "common.h"

extern "C" {

struct N_08896468 {
    N_08896468 *unk_00;
    N_08896468 *unk_04;
    s32 unk_08;
    int eq4(N_08896468 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08896468 *o) {
        int r = 0;
        if (eq4(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08896468 *o) { return !(bool)eq(o); }
};

struct A_08896468 {
    u8 unk_00;
};

typedef struct {
    N_08896468 *unk_00;
    A_08896468 unk_04;
} P_08896468;

struct It_08896468 {
    N_08896468 *unk_00;
    It_08896468 postinc() {
        It_08896468 r = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return r;
    }
};

typedef struct {
    s32 unk_00;
} R_08896468;

typedef struct {
    N_08896468 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
} H_08896468;

void func_088963BC(R_08896468 *, P_08896468 *, s32);
void *func_08896558(R_08896468 *);
void func_08896088(H_08896468 *, void *);
void func_08896548(A_08896468 *, P_08896468 *);

struct E_08896468 {
};

inline void wrap(H_08896468 *h, R_08896468 *r, const E_08896468 &) {
    func_08896088(h, func_08896558(r));
}

void func_08896468(H_08896468 *arg0) {
    It_08896468 e;
    It_08896468 t;
    A_08896468 a;
    A_08896468 b;
    It_08896468 it;
    P_08896468 p;
    R_08896468 r;
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
        func_088963BC(&r, &p, 0);
        wrap(arg0, &r, E_08896468());
        func_08896548(&a, &p);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
