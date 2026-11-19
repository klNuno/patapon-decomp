#include "common.h"

extern "C" {

struct A_08963760 {
    u8 unk_00;
};

struct E_08963760 {};

struct N_08963760 {
    N_08963760 *unk_00;
    N_08963760 *unk_04;
    void *unk_08;

    int eq2(N_08963760 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08963760 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08963760 *o, const E_08963760 &) { return !(bool)eq(o); }
};

struct It_08963760 {
    N_08963760 *unk_00;
    A_08963760 unk_04;
};

struct R_08963760 {
    s32 unk_00;
};

struct L_08963760 {
    N_08963760 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_08963760 *end() { return &unk_00; }
};


void func_08963858(s32 *, s32 *, s32);
s32 func_08963850(s32 *);
void func_089634E8(L_08963760 *, N_08963760 *);
f32 *func_08963840(f32 *, f32 *);

void func_08963760(L_08963760 *arg0) {
    struct { A_08963760 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_08963760 *unk_00;
    } it;
    A_08963760 b;
    It_08963760 it2;
    R_08963760 r;
    It_08963760 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E_08963760())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_08963858(&r.unk_00, (s32 *)&it2, 0);
        func_089634E8(arg0, (N_08963760 *)func_08963850(&r.unk_00));
        func_08963840((f32 *)&temp.unk_00, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
