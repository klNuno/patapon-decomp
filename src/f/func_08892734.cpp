#include "common.h"

extern "C" {

struct A_08892734 {
    u8 unk_00;
};

struct E_08892734 {};

struct N_08892734 {
    N_08892734 *unk_00;
    N_08892734 *unk_04;
    void *unk_08;

    int eq2(N_08892734 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_08892734 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_08892734 *o, const E_08892734 &) { return !(bool)eq(o); }
};

struct It_08892734 {
    N_08892734 *unk_00;
    A_08892734 unk_04;
};

struct R_08892734 {
    s32 unk_00;
};

struct L_08892734 {
    N_08892734 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_08892734 *end() { return &unk_00; }
};


void func_0889282C(s32 *, s32 *, s32);
struct N_08892D94;
N_08892D94 *func_08892824(s32 *);
void func_088924BC(void *, N_08892D94 *);
void func_08892814(s32 *, s32 *);

void func_08892734(L_08892734 *arg0) {
    struct { A_08892734 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_08892734 *unk_00;
    } it;
    A_08892734 b;
    It_08892734 it2;
    R_08892734 r;
    It_08892734 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E_08892734())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_0889282C(&r.unk_00, (s32 *)&it2, 0);
        func_088924BC(arg0, func_08892824(&r.unk_00));
        func_08892814((s32 *)&temp.unk_00, (s32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
