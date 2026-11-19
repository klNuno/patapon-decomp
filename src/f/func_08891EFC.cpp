#include "common.h"

extern "C" {

struct N_08891EFC {
    N_08891EFC *unk_00;
    N_08891EFC *unk_04;
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;

    int eq2(const N_08891EFC &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const N_08891EFC &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_08891EFC &o) const { return !(bool)eq(o); }
};

struct E_08891EFC {
    u8 unk_00;
};

struct I_08891EFC {
    N_08891EFC *unk_00;
    E_08891EFC unk_04;
    I_08891EFC post() {
        I_08891EFC t = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return t;
    }
};

void func_08891FF4(s32 *, s32 *, s32);
s32 func_08891FEC(s32 *);
typedef struct T0 T0;
typedef struct N N;
void func_08891C84(T0 *, N *);
void func_08891FDC(E_08891EFC *, I_08891EFC *);

void func_08891EFC(N_08891EFC *arg0) {
    struct { E_08891EFC unk_00; u8 pad_01[0x8]; } a;
    struct { N_08891EFC *unk_00; } h;
    struct { N_08891EFC *unk_00; } g;
    I_08891EFC tmp;
    s32 out;
    E_08891EFC b;
    N_08891EFC *n;

    h.unk_00 = arg0;
    b = a.unk_00;
    g.unk_00 = h.unk_00->unk_04;
    while (g.unk_00->ne(*h.unk_00)) {
        n = g.unk_00;
        if (g.unk_00 != NULL) {
            g.unk_00 = g.unk_00->unk_04;
        }
        tmp.unk_00 = n;
        tmp.unk_04 = b;
        func_08891FF4(&out, (s32 *)&tmp, 0);
        func_08891C84((T0 *)h.unk_00, (N *)func_08891FEC(&out));
        func_08891FDC(&a.unk_00, &tmp);
    }
    h.unk_00->unk_20 = 0;
    h.unk_00->unk_04 = h.unk_00;
    h.unk_00->unk_00 = h.unk_00;
}

}
