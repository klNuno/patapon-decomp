#include "common.h"

extern "C" {

struct B_0892E740 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct O_0892E740 : B_0892E740 {
    u8 pad_04[0x8E4];
    s32 unk_8E8;
};

struct N_0892E740 {
    s32 unk_00;
    N_0892E740 *unk_04;
    O_0892E740 *unk_08;
    int eq2(N_0892E740 *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(N_0892E740 *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(N_0892E740 *o) { return !(bool)eq(o); }
};

struct I_0892E740 {
    N_0892E740 *unk_00;
    bool ne(const I_0892E740 &o) { return !(bool)unk_00->eq(o.unk_00); }
    void next() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
    }
};

typedef struct {
    s32 unk_00;
    s32 unk_04;
} L_0892E740;

typedef struct {
    u8 pad_00[0x10];
    L_0892E740 unk_10;
} W_0892E740;

void func_08864A30(L_0892E740 *);
void func_08864A68(L_0892E740 *, s32);

void func_0892E740(N_0892E740 *arg0, s32 arg1) {
    W_0892E740 w;
    I_0892E740 it;
    O_0892E740 *o;
    I_0892E740 end;

    end.unk_00 = arg0;
    func_08864A30(&w.unk_10);
    it.unk_00 = arg0->unk_04;
    while (it.ne(end)) {
        o = *(O_0892E740 **)&it.unk_00->unk_08;
        if (arg1 == o->unk_8E8) {
            o->v3();
        }
        it.next();
    }
    func_08864A68(&w.unk_10, -1);
}

}
