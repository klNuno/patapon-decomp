#include "common.h"

extern "C" {

struct A_089271A0 {
    u8 unk_00;
};

struct N_089271A0 {
    N_089271A0 *unk_00;
    N_089271A0 *unk_04;
    void *unk_08;

    int eq2(N_089271A0 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_089271A0 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_089271A0 *o) { return !(bool)eq(o); }
};

struct It_089271A0 {
    N_089271A0 *unk_00;
    A_089271A0 unk_04;

    It_089271A0 inc() {
        It_089271A0 t = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return t;
    }
};

struct R_089271A0 {
    s32 unk_00;
};

struct L_089271A0 {
    N_089271A0 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_089271A0 *end() { return &unk_00; }
};

void func_08927298(s32 *, s32 *, s32);
s32 func_08927290(s32 *);
struct T08926F28_N;
void func_08926F28(T08926F28_N *arg0, T08926F28_N *arg1);
f32 *func_08927280(f32 *arg0, f32 *arg1);

struct E {};

static inline void func_00(L_089271A0 *arg0, R_089271A0 *r, const E &, const E &) {
    func_08926F28((T08926F28_N *)arg0, (T08926F28_N *)func_08927290(&r->unk_00));
}

void func_089271A0(L_089271A0 *arg0) {
    struct { A_089271A0 unk_00; u8 pad_01[8]; } a;
    struct {
        N_089271A0 *unk_00;
    } it;
    A_089271A0 b;
    It_089271A0 it2;
    R_089271A0 r;
    It_089271A0 t;

    b = a.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_08927298(&r.unk_00, (s32 *)&it2, 0);
        func_00(arg0, &r, E(), E());
        func_08927280((f32 *)&a, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
