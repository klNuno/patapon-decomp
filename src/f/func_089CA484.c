#include "common.h"

typedef struct N_089CA484 {
    struct N_089CA484 *unk_00;
    struct N_089CA484 *unk_04;
    u8 pad_08[4];
    struct N_089CA484 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} N_089CA484;

s32 func_089CA5B0(N_089CA484 *);

void func_089CA484(N_089CA484 *arg0, N_089CA484 *arg1) {
    N_089CA484 *o1;
    N_089CA484 *o2;
    s32 f0;
    s32 f1;

    if (arg0 == arg1) {
        return;
    }
    f0 = 0;
    if (arg1->unk_00 != NULL) {
        f0 = 1;
        arg1->unk_00->unk_04 = arg1->unk_04;
    }
    if (arg1->unk_04 != NULL) {
        f0 = 1;
        arg1->unk_04->unk_00 = arg1->unk_00;
    }
    arg1->unk_0C = NULL;
    o1 = arg1->unk_0C;
    if (o1 != NULL && o1 != arg1) {
        f1 = 0;
        if (arg1->unk_00 != NULL) {
            f1 = 1;
            arg1->unk_00->unk_04 = arg1->unk_04;
        }
        if (arg1->unk_04 != NULL) {
            f1 = 1;
            arg1->unk_04->unk_00 = arg1->unk_00;
        }
        arg1->unk_0C = NULL;
        o2 = arg1->unk_0C;
        if (o2 != NULL && o2 != arg1) {
            if (func_089CA5B0(arg1)) {
                o2->unk_20--;
            }
        }
        arg1->unk_0C = NULL;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        if (f1) {
            o1->unk_20--;
        }
    }
    arg1->unk_0C = NULL;
    arg1->unk_04 = NULL;
    arg1->unk_00 = NULL;
    if (f0) {
        arg0->unk_20--;
    }
}
