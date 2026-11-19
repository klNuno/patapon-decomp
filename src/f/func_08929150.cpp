#include "common.h"

extern "C" {

struct N_08929150 {
    N_08929150 *unk_00;
    N_08929150 *unk_04;
    u8 unk_08[4];
};

struct I_08929150 {
    N_08929150 *unk_00;
    s32 eq(const I_08929150 &o) const { return unk_00 == o.unk_00; }
    bool operator!=(const I_08929150 &o) const { return !(bool)eq(o); }
};

struct L_08929150 {
    N_08929150 *unk_00;
    N_08929150 *unk_04;
    N_08929150 *unk_08;
    s32 unk_0C;
    I_08929150 begin() { I_08929150 i; i.unk_00 = unk_00; return i; }
    I_08929150 end() { I_08929150 i; i.unk_00 = (N_08929150 *)this; return i; }
};

void func_089297FC(void *);

struct T_08929150 {};

static inline void func_08929150_0(void *arg0, const T_08929150 &arg1, const T_08929150 &arg2, const T_08929150 &arg3, const T_08929150 &arg4) {
    func_089297FC(arg0);
}

I_08929150 func_08929150(L_08929150 *arg0, I_08929150 first, I_08929150 last) {
    I_08929150 it;
    N_08929150 *fl;
    N_08929150 *lp;
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
        func_08929150_0(it.unk_00->unk_08, T_08929150(), T_08929150(), T_08929150(), T_08929150());
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
