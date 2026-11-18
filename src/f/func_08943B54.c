#include "common.h"

typedef struct N_08943B54 {
    struct N_08943B54 *unk_00;
    struct N_08943B54 *unk_04;
    u8 pad_08[4];
    struct N_08943B54 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} N_08943B54;

void func_08943C70(N_08943B54 *, N_08943B54 *);

void func_08943B54(N_08943B54 *arg0) {
    N_08943B54 *o1 = arg0->unk_0C;
    N_08943B54 *o2;
    s32 f1;
    s32 f2;

    if (o1 != NULL && o1 != arg0) {
        f1 = 0;
        if (arg0->unk_00 != NULL) {
            f1 = 1;
            arg0->unk_00->unk_04 = arg0->unk_04;
        }
        if (arg0->unk_04 != NULL) {
            f1 = 1;
            arg0->unk_04->unk_00 = arg0->unk_00;
        }
        arg0->unk_0C = NULL;
        o2 = arg0->unk_0C;
        if (o2 != NULL && o2 != arg0) {
            f2 = 0;
            if (arg0->unk_00 != NULL) {
                f2 = 1;
                arg0->unk_00->unk_04 = arg0->unk_04;
            }
            if (arg0->unk_04 != NULL) {
                f2 = 1;
                arg0->unk_04->unk_00 = arg0->unk_00;
            }
            arg0->unk_0C = NULL;
            if (arg0->unk_0C != NULL) {
                func_08943C70(arg0->unk_0C, arg0);
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
            if (f2) {
                o2->unk_20--;
            }
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = NULL;
        arg0->unk_00 = NULL;
        if (f1) {
            o1->unk_20--;
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
