#include "common.h"

extern "C" {

struct A_08944154 {
    u8 unk_00;
};

struct E_08944154 {};

struct N_08944154 {
    N_08944154 *unk_00;
    N_08944154 *unk_04;
    void *unk_08;

    int func_00(N_08944154 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int func_04(N_08944154 *o) {
        int r = 0;
        if (func_00(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool func_08(N_08944154 *o, const E_08944154 &) { return !(bool)func_04(o); }
};

struct It_08944154 {
    N_08944154 *unk_00;
    A_08944154 unk_04;
};

struct R_08944154 {
    s32 unk_00;
};

struct L_08944154 {
    N_08944154 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_08944154 *func_00() { return &unk_00; }
};

typedef It_08944154 I_08944568;
typedef N_08944154 N_08943B54;

void func_08943FA4(I_08944568 *, I_08944568 *, s32);
s32 func_08944244(s32 *arg0);
void func_08943C70(N_08943B54 *, N_08943B54 *);
f32 *func_08944234(f32 *arg0, f32 *arg1);

void func_08944154(L_08944154 *arg0) {
    struct { A_08944154 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_08944154 *unk_00;
    } it;
    A_08944154 b;
    It_08944154 it2;
    R_08944154 r;
    It_08944154 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->func_08(arg0->func_00(), E_08944154())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_08943FA4((I_08944568 *)&r, &it2, 0);
        func_08943C70(&arg0->unk_00, (N_08943B54 *)func_08944244(&r.unk_00));
        func_08944234((f32 *)&temp.unk_00, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
