#include "common.h"

extern "C" {

struct E_0894910C {};

typedef struct N_0894910C {
    struct N_0894910C *unk_00;
    struct N_0894910C *unk_04;
    u8 unk_08[4];
} N_0894910C;

struct It_0894910C {
    N_0894910C *unk_00;
    int eq(N_0894910C *o) const { return unk_00 == o; }
    bool ne(N_0894910C *o) const { return !(bool)eq(o); }
};

typedef struct {
    N_0894910C *unk_00;
    N_0894910C *unk_04;
    N_0894910C *unk_08;
    s32 unk_0C;
} L_0894910C;

void func_0894A834(void *);

inline void destroy_0894910C(It_0894910C cur, It_0894910C last, const E_0894910C &, const E_0894910C &, const E_0894910C &, const E_0894910C &) {
    while (cur.ne(last.unk_00)) {
        func_0894A834(cur.unk_00->unk_08);
        cur.unk_00 = cur.unk_00->unk_00;
    }
}

It_0894910C func_0894910C(L_0894910C *arg0, It_0894910C arg1, It_0894910C arg2) {
    It_0894910C it;
    s32 n;
    N_0894910C *f;
    N_0894910C *p;

    if (arg1.unk_00 == arg2.unk_00) {
        return arg2;
    }
    it.unk_00 = arg0->unk_00;
    n = 0;
    while (it.ne((N_0894910C *)arg0)) {
        it.unk_00 = it.unk_00->unk_00;
        n++;
    }
    arg0->unk_0C -= n;
    destroy_0894910C(arg1, arg2, E_0894910C(), E_0894910C(), E_0894910C(), E_0894910C());
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
