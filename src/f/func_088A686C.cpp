#include "common.h"

extern "C" {

struct E {};

typedef struct N_088A686C {
    struct N_088A686C *unk_00;
    struct N_088A686C *unk_04;
    u8 unk_08[4];
} N_088A686C;

struct It_088A686C {
    N_088A686C *unk_00;
    int eq(N_088A686C *o) const { return unk_00 == o; }
    bool ne(N_088A686C *o) const { return !(bool)eq(o); }
};

typedef struct {
    N_088A686C *unk_00;
    N_088A686C *unk_04;
    N_088A686C *unk_08;
    s32 unk_0C;
} L_088A686C;

void func_088A75CC(void *);

inline void destroy_088A686C(It_088A686C cur, It_088A686C last, const E &, const E &, const E &, const E &) {
    while (cur.ne(last.unk_00)) {
        func_088A75CC(cur.unk_00->unk_08);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_088A686C func_088A686C(L_088A686C *arg0, It_088A686C arg1, It_088A686C arg2) {
    It_088A686C it;
    s32 n;
    N_088A686C *f;
    N_088A686C *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_088A686C *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_088A686C(arg1, arg2, E(), E(), E(), E());
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
