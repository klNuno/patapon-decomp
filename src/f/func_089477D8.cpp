#include "common.h"

extern "C" {

struct E_089477D8 {};

typedef struct N_089477D8 {
    struct N_089477D8 *unk_00;
    struct N_089477D8 *unk_04;
    u8 unk_08[4];
} N_089477D8;

struct It_089477D8 {
    N_089477D8 *unk_00;
    int eq(N_089477D8 *o) const { return unk_00 == o; }
    bool ne(N_089477D8 *o) const { return !(bool)eq(o); }
};

typedef struct {
    N_089477D8 *unk_00;
    N_089477D8 *unk_04;
    N_089477D8 *unk_08;
    s32 unk_0C;
} L_089477D8;

void func_08947F70(void *);

inline void destroy_089477D8(It_089477D8 cur, It_089477D8 last, const E_089477D8 &, const E_089477D8 &, const E_089477D8 &, const E_089477D8 &) {
    while (cur.ne(last.unk_00)) {
        func_08947F70(cur.unk_00->unk_08);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_089477D8 func_089477D8(L_089477D8 *arg0, It_089477D8 arg1, It_089477D8 arg2) {
    It_089477D8 it;
    s32 n;
    N_089477D8 *f;
    N_089477D8 *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_089477D8 *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_089477D8(arg1, arg2, E_089477D8(), E_089477D8(), E_089477D8(), E_089477D8());
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
