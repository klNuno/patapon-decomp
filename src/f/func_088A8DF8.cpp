#include "common.h"

extern "C" {

struct N_088A8DF8 {
    N_088A8DF8 *unk_00;
    N_088A8DF8 *unk_04;
    u8 pad_08[8];
    u8 unk_10[4];
};

struct L_088A8DF8 {
    N_088A8DF8 *unk_00;
    N_088A8DF8 *unk_04;
    N_088A8DF8 *unk_08;
    s32 unk_0C;
};

struct It_088A8DF8 {
    N_088A8DF8 *unk_00;
};

inline s32 eq_088A8DF8(It_088A8DF8 a, It_088A8DF8 b) { return a.unk_00 == b.unk_00; }
inline bool ne_088A8DF8(It_088A8DF8 a, It_088A8DF8 b) { return !(bool)eq_088A8DF8(a, b); }

struct E_088A8DF8 {};
inline It_088A8DF8 func_088A8DF8_1(It_088A8DF8 i, const E_088A8DF8 &, const E_088A8DF8 &, const E_088A8DF8 &) { return i; }

void func_088A9488(void *);


It_088A8DF8 func_088A8DF8(L_088A8DF8 *arg1, It_088A8DF8 arg2, It_088A8DF8 arg3) {
    N_088A8DF8 *p;
    N_088A8DF8 *f;
    N_088A8DF8 *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return func_088A8DF8_1(arg3, E_088A8DF8(), E_088A8DF8(), E_088A8DF8());
    }
    n = 0;
    {
        It_088A8DF8 i;
        It_088A8DF8 e;
        i.unk_00 = arg1->unk_00;
        e.unk_00 = (N_088A8DF8 *)arg1;
        for (; ne_088A8DF8(i, e); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_088A8DF8 i;
        i = arg2;
        for (; ne_088A8DF8(i, arg3); i.unk_00 = i.unk_00->unk_00) {
            func_088A9488(i.unk_00->unk_10);
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
