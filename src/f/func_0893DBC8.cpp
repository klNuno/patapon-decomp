#include "common.h"

extern "C" {

struct N_0893DBC8 {
    N_0893DBC8 *unk_00;
    N_0893DBC8 *unk_04;
    u8 unk_08[4];
};

struct L_0893DBC8 {
    N_0893DBC8 *unk_00;
    N_0893DBC8 *unk_04;
    N_0893DBC8 *unk_08;
    s32 unk_0C;
};

struct It_0893DBC8 {
    N_0893DBC8 *unk_00;
};

class E_0893DBC8 {};

inline s32 eq_0893DBC8(It_0893DBC8 a, It_0893DBC8 b) { return a.unk_00 == b.unk_00; }
inline bool ne_0893DBC8(It_0893DBC8 a, It_0893DBC8 b, const E_0893DBC8 &, const E_0893DBC8 &, const E_0893DBC8 &) { return !(bool)eq_0893DBC8(a, b); }

void func_0893E198(void *);


It_0893DBC8 func_0893DBC8(L_0893DBC8 *arg1, It_0893DBC8 arg2, It_0893DBC8 arg3) {
    N_0893DBC8 *p;
    N_0893DBC8 *f;
    N_0893DBC8 *q;
    s32 n;
    E_0893DBC8 e0;

    if (arg2.unk_00 == arg3.unk_00) {
        return arg3;
    }
    n = 0;
    {
        It_0893DBC8 i;
        It_0893DBC8 e;
        i.unk_00 = arg1->unk_00;
        e.unk_00 = (N_0893DBC8 *)arg1;
        for (; ne_0893DBC8(i, e, E_0893DBC8(), e0, e0); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_0893DBC8 i;
        i = arg2;
        for (; ne_0893DBC8(i, arg3, E_0893DBC8(), E_0893DBC8(), e0); i.unk_00 = i.unk_00->unk_00) {
            func_0893E198(i.unk_00->unk_08);
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
