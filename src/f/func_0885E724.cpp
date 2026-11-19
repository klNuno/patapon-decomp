#include "common.h"

extern "C" {

struct A_0885E724 {
    u8 unk_00;
};

struct E {};

struct N_0885E724 {
    N_0885E724 *unk_00;
    N_0885E724 *unk_04;
    void *unk_08;

    int eq2(N_0885E724 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0885E724 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0885E724 *o, const E &) { return !(bool)eq(o); }
};

struct It_0885E724 {
    N_0885E724 *unk_00;
    A_0885E724 unk_04;
};

struct R_0885E724 {
    s32 unk_00;
};

struct L_0885E724 {
    N_0885E724 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_0885E724 *end() { return &unk_00; }
};

void func_0885E81C(s32 *, s32 *, s32);
s32 func_0885E814(s32 *);
struct L_0885E390;
struct N_0885E390;
void func_0885E4AC(L_0885E390 *, N_0885E390 *);
f32 *func_0885E804(f32 *arg0, f32 *arg1);

void func_0885E724(L_0885E724 *arg0) {
    struct { A_0885E724 unk_00; u8 pad_01[8]; } a;
    struct {
        N_0885E724 *unk_00;
    } it;
    A_0885E724 b;
    It_0885E724 it2;
    R_0885E724 r;
    It_0885E724 t;

    b = a.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_0885E81C(&r.unk_00, (s32 *)&it2, 0);
        func_0885E4AC((L_0885E390 *)arg0, (N_0885E390 *)func_0885E814(&r.unk_00));
        func_0885E804((f32 *)&a.unk_00, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
