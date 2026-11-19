#include "common.h"

extern "C" {

struct E {};

struct N_08877EB4 {
    N_08877EB4 *unk_00;
    N_08877EB4 *unk_04;
    u8 unk_08[4];
};

struct I_08877EB4 {
    N_08877EB4 *unk_00;
    s32 eq(const I_08877EB4 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_08877EB4 &o) const { return !(bool)eq(o); }
};

struct L_08877EB4 {
    N_08877EB4 *unk_00;
    N_08877EB4 *unk_04;
    N_08877EB4 *unk_08;
    s32 unk_0C;
    I_08877EB4 begin(const E &, const E &) { I_08877EB4 i; i.unk_00 = unk_00; return i; }
    I_08877EB4 end(const E &, const E &) { I_08877EB4 i; i.unk_00 = (N_08877EB4 *)this; return i; }
};

void func_088793A0(void *);

I_08877EB4 func_08877EB4(L_08877EB4 *arg0, I_08877EB4 first, I_08877EB4 last) {
    I_08877EB4 it;
    N_08877EB4 *fl;
    N_08877EB4 *lp;
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
        func_088793A0(it.unk_00->unk_08);
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
