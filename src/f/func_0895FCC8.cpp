#include "common.h"

extern "C" {

struct E {};

struct A_0895FCC8 {
    u8 unk_00;
};

struct N_0895FCC8 {
    N_0895FCC8 *unk_00;
    N_0895FCC8 *unk_04;
    void *unk_08;

    int eq2(N_0895FCC8 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0895FCC8 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0895FCC8 *o, const E &) { return !(bool)eq(o); }
};

struct It_0895FCC8 {
    N_0895FCC8 *unk_00;
    A_0895FCC8 unk_04;
};

typedef struct {
    void *unk_00;
} It_08962C50;

struct L_0895FCC8 {
    N_0895FCC8 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_0895FCC8 *end() { return &unk_00; }
};

typedef L_0895FCC8 L_0895F6F4;
typedef N_0895FCC8 N_0895F6F4;

void func_0895FC1C(It_08962C50 *, It_08962C50 *, s32);
s32 func_0895FDB8(s32 *);
void func_0895F810(L_0895F6F4 *, N_0895F6F4 *);
f32 *func_0895FDA8(f32 *, f32 *);

void func_0895FCC8(L_0895FCC8 *arg0) {
    struct { A_0895FCC8 unk_00; u8 pad_01[8]; } a;
    struct {
        N_0895FCC8 *unk_00;
    } it;
    A_0895FCC8 b;
    It_0895FCC8 it2;
    It_08962C50 r;
    It_0895FCC8 t;

    b = a.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->ne(arg0->end(), E())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_0895FC1C(&r, (It_08962C50 *)&it2, 0);
        func_0895F810(arg0, (N_0895F6F4 *)func_0895FDB8((s32 *)&r));
        func_0895FDA8((f32 *)&a, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
