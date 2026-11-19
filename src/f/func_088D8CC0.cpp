#include "common.h"

extern "C" {

struct N_088D8CC0 {
    N_088D8CC0 *unk_00;
    N_088D8CC0 *unk_04;
    u8 unk_08[4];
};

struct L_088D8CC0 {
    N_088D8CC0 *unk_00;
    N_088D8CC0 *unk_04;
    N_088D8CC0 *unk_08;
    s32 unk_0C;
};

struct It_088D8CC0 {
    N_088D8CC0 *unk_00;
};

inline s32 eq_088D8CC0(It_088D8CC0 a, It_088D8CC0 b) { return a.unk_00 == b.unk_00; }
struct E {};
inline bool ne_088D8CC0(It_088D8CC0 a, It_088D8CC0 b, const E &) { return !(bool)eq_088D8CC0(a, b); }
inline bool ne_088D8CC1(It_088D8CC0 a, It_088D8CC0 b, const E &, const E &) { return !(bool)eq_088D8CC0(a, b); }

void func_088DF574(void *);


It_088D8CC0 func_088D8CC0(L_088D8CC0 *arg1, It_088D8CC0 arg2, It_088D8CC0 arg3) {
    N_088D8CC0 *f;
    N_088D8CC0 *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return arg3;
    }
    n = 0;
    {
        It_088D8CC0 i;
        It_088D8CC0 e;
        i.unk_00 = arg1->unk_00;
        e.unk_00 = (N_088D8CC0 *)arg1;
        for (; ne_088D8CC0(i, e, E()); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_088D8CC0 i;
        i = arg2;
        for (; ne_088D8CC1(i, arg3, E(), E()); i.unk_00 = i.unk_00->unk_00) {
            func_088DF574(i.unk_00->unk_08);
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
