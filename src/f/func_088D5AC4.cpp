#include "common.h"

extern "C" {

struct E {};

typedef struct N_088D5AC4 {
    struct N_088D5AC4 *unk_00;
    struct N_088D5AC4 *unk_04;
    u8 unk_08[4];
} N_088D5AC4;

struct It_088D5AC4 {
    N_088D5AC4 *unk_00;
    int eq(N_088D5AC4 *o) const { return unk_00 == o; }
    bool ne(N_088D5AC4 *o) const { return !(bool)eq(o); }
};

typedef struct {
    N_088D5AC4 *unk_00;
    N_088D5AC4 *unk_04;
    N_088D5AC4 *unk_08;
    s32 unk_0C;
} L_088D5AC4;

void func_088D630C(void *);

inline void destroy_088D5AC4(It_088D5AC4 cur, It_088D5AC4 last, const E &, const E &, const E &, const E &) {
    while (cur.ne(last.unk_00)) {
        func_088D630C(cur.unk_00->unk_08);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_088D5AC4 func_088D5AC4(L_088D5AC4 *arg0, It_088D5AC4 arg1, It_088D5AC4 arg2) {
    It_088D5AC4 it;
    s32 n;
    N_088D5AC4 *f;
    N_088D5AC4 *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_088D5AC4 *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_088D5AC4(arg1, arg2, E(), E(), E(), E());
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
