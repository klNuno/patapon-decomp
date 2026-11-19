#include "common.h"

extern "C" {

struct N_08923944 {
    N_08923944 *unk_00;
    N_08923944 *unk_04;
    u8 unk_08[4];
};

struct I_08923944 {
    N_08923944 *unk_00;
    s32 eq(const I_08923944 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_08923944 &o) const { return !(bool)eq(o); }
};

struct L_08923944 {
    N_08923944 *unk_00;
    N_08923944 *unk_04;
    N_08923944 *unk_08;
    s32 unk_0C;
    I_08923944 begin() { I_08923944 i; i.unk_00 = unk_00; return i; }
    I_08923944 end() { I_08923944 i; i.unk_00 = (N_08923944 *)this; return i; }
};

void func_08923ECC(void *);

struct T_08923944 {};

static inline void func_08923944_0(void *arg0, const T_08923944 &arg1, const T_08923944 &arg2, const T_08923944 &arg3, const T_08923944 &arg4) {
    func_08923ECC(arg0);
}

I_08923944 func_08923944(L_08923944 *arg0, I_08923944 first, I_08923944 last) {
    I_08923944 it;
    N_08923944 *fl;
    N_08923944 *lp;
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
        func_08923944_0(it.unk_00->unk_08, T_08923944(), T_08923944(), T_08923944(), T_08923944());
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
