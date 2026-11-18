#include "common.h"


typedef struct N_0891B8D4 {
    struct N_0891B8D4 *unk_00;
    struct N_0891B8D4 *unk_04;
    u8 unk_08[4];
} N_0891B8D4;

typedef struct I_0891B8D4 {
    N_0891B8D4 *unk_00;
} I_0891B8D4;

typedef struct {
    u8 pad_00[0x8];
    N_0891B8D4 *unk_08;
    s32 unk_0C;
} L_0891B8D4;

void func_0891C1D4(void *);

I_0891B8D4 func_0891B8D4(L_0891B8D4 *arg1, I_0891B8D4 pos) {
    I_0891B8D4 f;
    N_0891B8D4 *arg2;
    I_0891B8D4 it;
    N_0891B8D4 *fr;
    N_0891B8D4 *nx;
    N_0891B8D4 *t;

    it = pos;
    it.unk_00 = it.unk_00->unk_00;
    arg2 = pos.unk_00;
    arg1->unk_0C--;
    func_0891C1D4(arg2->unk_08);
    f.unk_00 = arg1->unk_08;
    fr = f.unk_00;
    nx = arg2->unk_00;
    arg2->unk_04->unk_00 = nx;
    t = nx->unk_04;
    nx->unk_04 = arg2->unk_04;
    arg2->unk_04 = fr->unk_04;
    fr->unk_04->unk_00 = arg2;
    fr->unk_04 = t;
    t->unk_00 = fr;
    return it;
}

