#include "common.h"

extern "C" {

struct A_08881A78 {
    u8 unk_00;
};

struct E_08881A78 {};

struct N_08881A78 {
    N_08881A78 *unk_00;
    N_08881A78 *unk_04;
    void *unk_08;

    int eq2(N_08881A78 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08881A78 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08881A78 *o, const E_08881A78 &) { return !(bool)eq(o); }
};

struct It_08881A78 {
    N_08881A78 *unk_00;
    A_08881A78 unk_04;
};

struct R_08881A78 {
    s32 unk_00;
};

struct L_08881A78 {
    N_08881A78 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_08881A78 *end() { return &unk_00; }
};

typedef L_08881A78 L_08881D84;
typedef N_08881A78 N_08881D84;

void func_08881B70(s32 *, s32 *, s32);
N_08881D84 *func_08881B68(R_08881A78 *);
void func_08881800(L_08881D84 *, N_08881D84 *);
void func_08881B58(const A_08881A78 *, It_08881A78 *);

void func_08881A78(L_08881A78 *arg0) {
    struct { A_08881A78 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_08881A78 *unk_00;
    } it;
    A_08881A78 b;
    It_08881A78 it2;
    R_08881A78 r;
    It_08881A78 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E_08881A78())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_08881B70(&r.unk_00, (s32 *)&it2, 0);
        func_08881800(arg0, func_08881B68(&r));
        func_08881B58(&temp.unk_00, &it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
