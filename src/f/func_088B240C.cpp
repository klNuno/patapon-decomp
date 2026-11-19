#include "common.h"

extern "C" {

struct N_088B240C {
    N_088B240C *unk_00;
    N_088B240C *unk_04;
    u8 unk_08[4];
};

struct E {};

struct It_088B240C {
    N_088B240C *unk_00;
};

struct L_088B240C {
    N_088B240C *unk_00;
    N_088B240C *unk_04;
    N_088B240C *unk_08;
    s32 unk_0C;
    It_088B240C func_1(const E &, const E &) { It_088B240C i; i.unk_00 = unk_00; return i; }
    It_088B240C func_2(const E &, const E &) { It_088B240C i; i.unk_00 = (N_088B240C *)this; return i; }
};

inline s32 eq_088B240C(const It_088B240C &a, const It_088B240C &b) { return a.unk_00 == b.unk_00; }
inline bool ne_088B240C(const It_088B240C &a, const It_088B240C &b) { return !(bool)eq_088B240C(a, b); }

void func_088B286C(void *);

It_088B240C func_088B240C(L_088B240C *arg1, It_088B240C arg2, It_088B240C arg3) {
    N_088B240C *f;
    N_088B240C *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return arg3;
    }
    n = 0;
    {
        It_088B240C i;
        for (i = arg1->func_1(E(), E()); ne_088B240C(i, arg1->func_2(E(), E())); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_088B240C i;
        i = arg2;
        for (; ne_088B240C(i, arg3); i.unk_00 = i.unk_00->unk_00) {
            func_088B286C(i.unk_00->unk_08);
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
