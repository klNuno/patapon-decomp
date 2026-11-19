#include "common.h"

extern "C" {

struct E_0884E1B0 {};

typedef struct N_0884E1B0 {
    struct N_0884E1B0 *unk_00;
    struct N_0884E1B0 *unk_04;
    u8 unk_08[4];
} N_0884E1B0;

struct It_0884E1B0 {
    N_0884E1B0 *unk_00;
    int eq(N_0884E1B0 *o) const { return unk_00 == o; }
    bool ne(N_0884E1B0 *o) const { return !(bool)eq(o); }
};

typedef struct {
    N_0884E1B0 *unk_00;
    N_0884E1B0 *unk_04;
    N_0884E1B0 *unk_08;
    s32 unk_0C;
} L_0884E1B0;

void func_0884E914(void *);

inline void destroy_0884E1B0(It_0884E1B0 cur, It_0884E1B0 last, const E_0884E1B0 &, const E_0884E1B0 &, const E_0884E1B0 &, const E_0884E1B0 &) {
    while (cur.ne(last.unk_00)) {
        func_0884E914(cur.unk_00->unk_08);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_0884E1B0 func_0884E1B0(L_0884E1B0 *arg0, It_0884E1B0 arg1, It_0884E1B0 arg2) {
    It_0884E1B0 it;
    s32 n;
    N_0884E1B0 *f;
    N_0884E1B0 *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_0884E1B0 *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_0884E1B0(arg1, arg2, E_0884E1B0(), E_0884E1B0(), E_0884E1B0(), E_0884E1B0());
    f = arg0->unk_08;
    arg1.unk_00->unk_04->unk_00 = arg2.unk_00;
    p = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = arg1.unk_00->unk_04;
    arg1.unk_00->unk_04 = f->unk_04;
    f->unk_04->unk_00 = arg1.unk_00;
    f->unk_04 = p;
    p->unk_00 = f;
    return arg2;
}

}
