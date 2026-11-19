#include "common.h"

extern "C" {

struct N_0891F44C {
    N_0891F44C *unk_00;
    N_0891F44C *unk_04;
    u8 unk_08[4];
};

struct L_0891F44C {
    N_0891F44C *unk_00;
    N_0891F44C *unk_04;
    N_0891F44C *unk_08;
    s32 unk_0C;
};

struct It_0891F44C {
    N_0891F44C *unk_00;
};

inline s32 eq_0891F44C(It_0891F44C a, It_0891F44C b) { return a.unk_00 == b.unk_00; }
inline bool ne_0891F44C(It_0891F44C a, It_0891F44C b) { return !(bool)eq_0891F44C(a, b); }

void func_089203F8(void *);

struct E_0891F44C {};

inline It_0891F44C unk_00(It_0891F44C arg0, const E_0891F44C &, const E_0891F44C &, const E_0891F44C &) { return arg0; }


It_0891F44C func_0891F44C(L_0891F44C *arg1, It_0891F44C arg2, It_0891F44C arg3) {
    N_0891F44C *p;
    N_0891F44C *f;
    N_0891F44C *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return unk_00(arg3, E_0891F44C(), E_0891F44C(), E_0891F44C());
    }
    n = 0;
    {
        It_0891F44C i;
        It_0891F44C e;
        i.unk_00 = arg1->unk_00;
        e.unk_00 = (N_0891F44C *)arg1;
        for (; ne_0891F44C(i, e); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_0891F44C i;
        i = arg2;
        for (; ne_0891F44C(i, arg3); i.unk_00 = i.unk_00->unk_00) {
            func_089203F8(i.unk_00->unk_08);
        }
    }
    f = arg1->unk_08;
    arg2.unk_00->unk_04->unk_00 = arg3.unk_00;
    q = arg3.unk_00->unk_04;
    arg3.unk_00->unk_04 = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = f->unk_04;
    f->unk_04->unk_00 = arg2.unk_00;
    f->unk_04 = q;
    q->unk_00 = f;
    return arg3;
}

}
