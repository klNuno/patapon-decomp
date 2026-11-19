#include "common.h"

extern "C" {

struct E {};

struct N_088E19E4 {
    N_088E19E4 *unk_00;
    N_088E19E4 *unk_04;
    u8 unk_08[4];
};

struct I_088E19E4 {
    N_088E19E4 *unk_00;
    s32 eq(const I_088E19E4 &o, const E &, const E &) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_088E19E4 &o) const { return !(bool)eq(o, E(), E()); }
};

struct L_088E19E4 {
    N_088E19E4 *unk_00;
    N_088E19E4 *unk_04;
    N_088E19E4 *unk_08;
    s32 unk_0C;
    I_088E19E4 begin() { I_088E19E4 i; i.unk_00 = unk_00; return i; }
    I_088E19E4 end() { I_088E19E4 i; i.unk_00 = (N_088E19E4 *)this; return i; }
};

void func_088E22C8(void *);

I_088E19E4 func_088E19E4(L_088E19E4 *arg0, I_088E19E4 first, I_088E19E4 last) {
    I_088E19E4 it;
    N_088E19E4 *fl;
    N_088E19E4 *lp;
    s32 n;

    if (first.unk_00 == last.unk_00) {
        return last;
    }
    n = 0;
    for (it = arg0->begin(); it != arg0->end(); it.unk_00 = it.unk_00->unk_00) {
        n++;
    }
    arg0->unk_0C -= n;
    for (it = first; it != last; it.unk_00 = it.unk_00->unk_00) {
        func_088E22C8(it.unk_00->unk_08);
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
