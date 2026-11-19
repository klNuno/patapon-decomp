#include "common.h"

extern "C" {

struct A_0898D1C8 {
    u8 unk_00;
};

struct E {};

struct N_0898D1C8 {
    N_0898D1C8 *unk_00;
    N_0898D1C8 *unk_04;
    void *unk_08;

    int eq2(N_0898D1C8 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0898D1C8 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0898D1C8 *o, const E &) { return !(bool)eq(o); }
};

struct It_0898D1C8 {
    N_0898D1C8 *unk_00;
    A_0898D1C8 unk_04;
};

struct R_0898D1C8 {
    s32 unk_00;
};

struct L_0898D1C8 {
    N_0898D1C8 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_0898D1C8 *end() { return &unk_00; }
};

void func_0898D11C(s32 *, s32 *, s32);
s32 func_0898D2B8(s32 *);
struct L_0898CCCC;
struct N_0898CCCC;
void func_0898CDE8(L_0898CCCC *, N_0898CCCC *);
f32 *func_0898D2A8(f32 *arg0, f32 *arg1);

void func_0898D1C8(L_0898D1C8 *arg0) {
    struct { A_0898D1C8 unk_00; u8 pad_01[8]; } a;
    struct {
        N_0898D1C8 *unk_00;
    } it;
    A_0898D1C8 b;
    It_0898D1C8 it2;
    R_0898D1C8 r;
    It_0898D1C8 t;

    b = a.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_0898D11C(&r.unk_00, (s32 *)&it2, 0);
        func_0898CDE8((L_0898CCCC *)arg0, (N_0898CCCC *)func_0898D2B8(&r.unk_00));
        func_0898D2A8((f32 *)&a.unk_00, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
