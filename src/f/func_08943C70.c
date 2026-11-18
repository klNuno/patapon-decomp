#include "common.h"

typedef struct N_08943C70 {
    struct N_08943C70 *unk_00;
    struct N_08943C70 *unk_04;
    u8 pad_08[4];
    struct N_08943C70 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} N_08943C70;

s32 func_08943D9C(N_08943C70 *);

void func_08943C70(N_08943C70 *arg0, N_08943C70 *arg1) {
    N_08943C70 *o1;
    N_08943C70 *o2;
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
            if (func_08943D9C(arg1)) {
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
