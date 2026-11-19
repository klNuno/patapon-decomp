#include "common.h"

extern "C" {

struct A_0888C140 {
    u8 unk_00;
};

struct E_0888C140 {};

struct N_0888C140 {
    N_0888C140 *unk_00;
    N_0888C140 *unk_04;
    void *unk_08;

    int func_00(N_0888C140 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int func_04(N_0888C140 *o) {
        int r = 0;
        if (func_00(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool func_08(N_0888C140 *o, const E_0888C140 &) { return !(bool)func_04(o); }
};

struct It_0888C140 {
    N_0888C140 *unk_00;
    A_0888C140 unk_04;
};

struct R_0888C140 {
    s32 unk_00;
};

struct L_0888C140 {
    N_0888C140 unk_00;
    u8 pad_0C[0x14];
    s32 unk_20;
    N_0888C140 *func_00() { return &unk_00; }
};

typedef L_0888C140 L_0888BDAC;
typedef N_0888C140 N_0888BDAC;

void func_0888C238(s32 *, s32 *, s32);
s32 func_0888C230(s32 *arg0);
void func_0888BEC8(L_0888BDAC *, N_0888BDAC *);
f32 *func_0888C220(f32 *arg0, f32 *arg1);

void func_0888C140(L_0888C140 *arg0) {
    struct { A_0888C140 unk_00; u8 pad_01[8]; } temp;
    struct {
        N_0888C140 *unk_00;
    } it;
    A_0888C140 b;
    It_0888C140 it2;
    R_0888C140 r;
    It_0888C140 t;

    b = temp.unk_00;
    it.unk_00 = arg0->unk_00.unk_04;
    while (it.unk_00->func_08(arg0->func_00(), E_0888C140())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = b;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_0888C238(&r.unk_00, (s32 *)&it2, 0);
        func_0888BEC8(arg0, (N_0888BDAC *)func_0888C230(&r.unk_00));
        func_0888C220((f32 *)&temp.unk_00, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_00.unk_04 = &arg0->unk_00;
    arg0->unk_00.unk_00 = &arg0->unk_00;
}

}
