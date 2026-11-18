#include "common.h"

extern "C" {

struct N_0891D954 {
    N_0891D954 *unk_00;
    N_0891D954 *unk_04;
    u8 unk_08[4];
};

struct I_0891D954 {
    N_0891D954 *unk_00;
};

struct R_0891D954 {
    I_0891D954 unk_00;
    u8 unk_04;
};

void func_0891DF98(void *);

struct L_0891D954 {
    u8 pad_00[0x8];
    N_0891D954 *unk_08;
    s32 unk_0C;

    void splice(N_0891D954 *last, N_0891D954 *first, N_0891D954 *pos) {
        N_0891D954 *tmp;

        first->unk_04->unk_00 = last;
        tmp = last->unk_04;
        last->unk_04 = first->unk_04;
        first->unk_04 = pos->unk_04;
        pos->unk_04->unk_00 = first;
        pos->unk_04 = tmp;
        tmp->unk_00 = pos;
    }
};

I_0891D954 func_0891D954(L_0891D954 *arg1, I_0891D954 arg2) {
    R_0891D954 r;

    r.unk_00.unk_00 = arg2.unk_00->unk_00;
    arg1->unk_0C--;
    func_0891DF98(arg2.unk_00->unk_08);
    arg1->splice(arg2.unk_00->unk_00, arg2.unk_00, arg1->unk_08);
    return r.unk_00;
}

}
