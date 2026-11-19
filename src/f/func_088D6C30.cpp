#include "common.h"

extern "C" {

struct N_088D6C30 {
    N_088D6C30 *unk_00;
    N_088D6C30 *unk_04;
    u8 unk_08[4];
};

struct E {};

struct It_088D6C30 {
    N_088D6C30 *unk_00;
};

struct L_088D6C30 {
    N_088D6C30 *unk_00;
    N_088D6C30 *unk_04;
    N_088D6C30 *unk_08;
    s32 unk_0C;
    It_088D6C30 func_1(const E &, const E &) { It_088D6C30 i; i.unk_00 = unk_00; return i; }
    It_088D6C30 func_2(const E &, const E &) { It_088D6C30 i; i.unk_00 = (N_088D6C30 *)this; return i; }
};

inline s32 eq_088D6C30(const It_088D6C30 &a, const It_088D6C30 &b) { return a.unk_00 == b.unk_00; }
inline bool ne_088D6C30(const It_088D6C30 &a, const It_088D6C30 &b) { return !(bool)eq_088D6C30(a, b); }

void func_088D7330(void *);

It_088D6C30 func_088D6C30(L_088D6C30 *arg1, It_088D6C30 arg2, It_088D6C30 arg3) {
    N_088D6C30 *f;
    N_088D6C30 *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return arg3;
    }
    n = 0;
    {
        It_088D6C30 i;
        for (i = arg1->func_1(E(), E()); ne_088D6C30(i, arg1->func_2(E(), E())); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_088D6C30 i;
        i = arg2;
        for (; ne_088D6C30(i, arg3); i.unk_00 = i.unk_00->unk_00) {
            func_088D7330(i.unk_00->unk_08);
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
