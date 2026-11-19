#include "common.h"

extern "C" {

struct A_089CB2B8 {
    u8 unk_00;
};

struct E_089CB2B8 {};

struct N_089CB2B8 {
    N_089CB2B8 *unk_00;
    N_089CB2B8 *unk_04;
    void *unk_08;

    int eq2(N_089CB2B8 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_089CB2B8 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_089CB2B8 *o, const E_089CB2B8 &) { return !(bool)eq(o); }
};

struct It_089CB2B8 {
    N_089CB2B8 *unk_00;
    A_089CB2B8 unk_04;
};

struct R_089CB2B8 {
    s32 unk_00;
};

struct L_089CB2B8 {
    N_089CB2B8 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_089CB2B8 *end() { return &unk_00; }
};


void func_089CB27C(s32 *, s32 *, s32);
N_089CB2B8 *func_089CB3A8(R_089CB2B8 *);
void func_089CA484(L_089CB2B8 *, N_089CB2B8 *);
void func_089CB398(const A_089CB2B8 *, It_089CB2B8 *);

void func_089CB2B8(L_089CB2B8 *arg0) {
    struct { A_089CB2B8 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_089CB2B8 *unk_00;
    } it;
    A_089CB2B8 b;
    It_089CB2B8 it2;
    R_089CB2B8 r;
    It_089CB2B8 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E_089CB2B8())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_089CB27C(&r.unk_00, (s32 *)&it2, 0);
        func_089CA484(arg0, func_089CB3A8(&r));
        func_089CB398(&temp.unk_00, &it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
