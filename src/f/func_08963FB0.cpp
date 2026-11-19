#include "common.h"

extern "C" {

struct N_08963FB0 {
    N_08963FB0 *unk_00;
    N_08963FB0 *unk_04;
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;

    int eq2(const N_08963FB0 &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const N_08963FB0 &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const N_08963FB0 &o) const { return !(bool)eq(o); }
};

struct E_08963FB0 {
    u8 unk_00;
};

struct I_08963FB0 {
    N_08963FB0 *unk_00;
    E_08963FB0 unk_04;
    I_08963FB0 post() {
        I_08963FB0 t = *this;
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return t;
    }
};

void func_089640A8(s32 *, I_08963FB0 *, s32);
s32 func_089640A0(s32 *);
void func_08963D38(N_08963FB0 *, s32);
void func_08964090(E_08963FB0 *, I_08963FB0 *);

void func_08963FB0(N_08963FB0 *arg0) {
    struct { N_08963FB0 *unk_00; } e;
    struct { N_08963FB0 *unk_00; } k;
    E_08963FB0 a;
    struct { N_08963FB0 *unk_00; } h;
    struct { N_08963FB0 *unk_00; } g;
    I_08963FB0 tmp;
    s32 out;
    E_08963FB0 b;
    N_08963FB0 *n;

    h.unk_00 = arg0;
    b = a;
    g.unk_00 = arg0->unk_04;
    while (e.unk_00 = arg0, k.unk_00 = g.unk_00, k.unk_00->ne(*e.unk_00)) {
        n = g.unk_00;
        if (g.unk_00 != NULL) {
            g.unk_00 = g.unk_00->unk_04;
        }
        tmp.unk_00 = n;
        tmp.unk_04 = b;
        func_089640A8(&out, &tmp, 0);
        func_08963D38(h.unk_00, func_089640A0(&out));
        func_08964090(&a, &tmp);
    }
    h.unk_00->unk_20 = 0;
    h.unk_00->unk_04 = h.unk_00;
    h.unk_00->unk_00 = h.unk_00;
}

}
