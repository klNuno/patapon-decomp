#include "common.h"

extern "C" {

struct E {};

struct N_088CF0D4 {
    N_088CF0D4 *unk_00;
    N_088CF0D4 *unk_04;
    u8 unk_08[4];
};

struct I_088CF0D4 {
    N_088CF0D4 *unk_00;
    s32 eq(const I_088CF0D4 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_088CF0D4 &o) const { return !(bool)eq(o); }
};

struct L_088CF0D4 {
    N_088CF0D4 *unk_00;
    N_088CF0D4 *unk_04;
    N_088CF0D4 *unk_08;
    s32 unk_0C;
    I_088CF0D4 begin() { I_088CF0D4 i; i.unk_00 = unk_00; return i; }
    I_088CF0D4 end() { I_088CF0D4 i; i.unk_00 = (N_088CF0D4 *)this; return i; }
};

void func_088D0068(void *);
static inline void func(void *p, const E &, const E &, const E &, const E &) { func_088D0068(p); }

I_088CF0D4 func_088CF0D4(L_088CF0D4 *arg0, I_088CF0D4 first, I_088CF0D4 last) {
    I_088CF0D4 it;
    N_088CF0D4 *fl;
    N_088CF0D4 *lp;
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
        func(it.unk_00->unk_08, E(), E(), E(), E());
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
