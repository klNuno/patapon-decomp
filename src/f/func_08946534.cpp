#include "common.h"

extern "C" {

struct E {};

struct N_08946534 {
    N_08946534 *unk_00;
    N_08946534 *unk_04;
    u8 unk_08[4];
};

struct I_08946534 {
    N_08946534 *unk_00;
    s32 eq(const I_08946534 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_08946534 &o) const { return !(bool)eq(o); }
};

struct L_08946534 {
    N_08946534 *unk_00;
    N_08946534 *unk_04;
    N_08946534 *unk_08;
    s32 unk_0C;
    I_08946534 begin(const E &, const E &) { I_08946534 i; i.unk_00 = unk_00; return i; }
    I_08946534 end(const E &, const E &) { I_08946534 i; i.unk_00 = (N_08946534 *)this; return i; }
};

void func_08947F28(void *);

I_08946534 func_08946534(L_08946534 *arg0, I_08946534 first, I_08946534 last) {
    I_08946534 it;
    N_08946534 *fl;
    N_08946534 *lp;
    s32 n;

    if (first.unk_00 == last.unk_00) {
        return last;
    }
    n = 0;
    for (it = arg0->begin(E(), E()); it != arg0->end(E(), E()); it.unk_00 = it.unk_00->unk_00) {
        n++;
    }
    arg0->unk_0C -= n;
    for (it = first; it != last; it.unk_00 = it.unk_00->unk_00) {
        func_08947F28(it.unk_00->unk_08);
    }
    fl = arg0->unk_08;
    first.unk_00->unk_04->unk_00 = last.unk_00;
    lp = last.unk_00->unk_04;
    last.unk_00->unk_04 = first.unk_00->unk_04;
    first.unk_00->unk_04 = fl->unk_04;
    fl->unk_04->unk_00 = first.unk_00;
    fl->unk_04 = lp;
    lp->unk_00 = fl;
    return last;
}

}
