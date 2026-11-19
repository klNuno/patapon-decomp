#include "common.h"

extern "C" {

struct E {};

typedef struct N_0890AEB8 {
    struct N_0890AEB8 *unk_00;
    struct N_0890AEB8 *unk_04;
    u8 pad_08[0x18];
    u8 unk_20[4];
} N_0890AEB8;

struct It_0890AEB8 {
    N_0890AEB8 *unk_00;
    int eq(N_0890AEB8 *o, const E &, const E &) const { return unk_00 == o; }
    bool ne(N_0890AEB8 *o) const { return !(bool)eq(o, E(), E()); }
};

typedef struct {
    N_0890AEB8 *unk_00;
    N_0890AEB8 *unk_04;
    N_0890AEB8 *unk_08;
    s32 unk_0C;
} L_0890AEB8;

void func_0890B23C(void *);

inline void destroy_0890AEB8(It_0890AEB8 cur, It_0890AEB8 last) {
    while (cur.ne(last.unk_00)) {
        func_0890B23C(cur.unk_00->unk_20);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_0890AEB8 func_0890AEB8(L_0890AEB8 *arg0, It_0890AEB8 arg1, It_0890AEB8 arg2) {
    It_0890AEB8 it;
    s32 n;
    N_0890AEB8 *f;
    N_0890AEB8 *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_0890AEB8 *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_0890AEB8(arg1, arg2);
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
