#include "common.h"

extern "C" {

struct N_0890D698 {
    N_0890D698 *unk_00;
    N_0890D698 *unk_04;
    u8 pad_08[0x18];
    u8 unk_20[4];
};

struct L_0890D698 {
    N_0890D698 *unk_00;
    N_0890D698 *unk_04;
    N_0890D698 *unk_08;
    s32 unk_0C;
};

struct It_0890D698 {
    N_0890D698 *unk_00;
};

inline s32 eq_0890D698(It_0890D698 a, It_0890D698 b) { return a.unk_00 == b.unk_00; }
struct E {};
inline bool ne_0890D698(It_0890D698 a, It_0890D698 b, const E &) { return !(bool)eq_0890D698(a, b); }
inline bool ne_0890D698_2(It_0890D698 a, It_0890D698 b, const E &, const E &) { return !(bool)eq_0890D698(a, b); }

void func_0890F438(s32 arg0);


It_0890D698 func_0890D698(L_0890D698 *arg1, It_0890D698 arg2, It_0890D698 arg3) {
    N_0890D698 *f;
    N_0890D698 *q;
    s32 n;

    if (arg2.unk_00 == arg3.unk_00) {
        return arg3;
    }
    n = 0;
    {
        It_0890D698 i;
        It_0890D698 e;
        i.unk_00 = arg1->unk_00;
        e.unk_00 = (N_0890D698 *)arg1;
        for (; ne_0890D698(i, e, E()); i.unk_00 = i.unk_00->unk_00) {
            n++;
        }
    }
    arg1->unk_0C -= n;
    {
        It_0890D698 i;
        i = arg2;
        for (; ne_0890D698_2(i, arg3, E(), E()); i.unk_00 = i.unk_00->unk_00) {
            func_0890F438((s32)i.unk_00->unk_20);
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
