#include "common.h"


typedef struct N_088DDB48 {
    struct N_088DDB48 *unk_00;
    struct N_088DDB48 *unk_04;
    u8 unk_08[4];
} N_088DDB48;

typedef struct I_088DDB48 {
    N_088DDB48 *unk_00;
} I_088DDB48;

typedef struct {
    u8 pad_00[0x8];
    N_088DDB48 *unk_08;
    s32 unk_0C;
} L_088DDB48;

void func_088DF574(void *);

I_088DDB48 func_088DDB48(L_088DDB48 *arg1, I_088DDB48 pos) {
    I_088DDB48 f;
    N_088DDB48 *arg2;
    I_088DDB48 it;
    N_088DDB48 *fr;
    N_088DDB48 *nx;
    N_088DDB48 *t;

    it = pos;
    it.unk_00 = it.unk_00->unk_00;
    arg2 = pos.unk_00;
    arg1->unk_0C--;
    func_088DF574(arg2->unk_08);
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

