#include "common.h"

typedef struct L_0888BDAC {
    u8 pad_00[0x20];
    s32 unk_20;
} L_0888BDAC;

typedef struct N_0888BDAC {
    struct N_0888BDAC *unk_00;
    struct N_0888BDAC *unk_04;
    u8 pad_08[0x4];
    L_0888BDAC *unk_0C;
} N_0888BDAC;

void func_0888BEC8(L_0888BDAC *, N_0888BDAC *);

void func_0888BDAC(N_0888BDAC *arg0) {
    L_0888BDAC *l;
    L_0888BDAC *l2;
    L_0888BDAC *t;
    s32 r;
    s32 r2;

    l = arg0->unk_0C;
    if (l != NULL && l != (L_0888BDAC *)arg0) {
        r = 0;
        if (arg0->unk_00 != NULL) {
            arg0->unk_00->unk_04 = arg0->unk_04;
            r = 1;
        }
        if (arg0->unk_04 != NULL) {
            arg0->unk_04->unk_00 = arg0->unk_00;
            r = 1;
        }
        arg0->unk_0C = NULL;
        l2 = arg0->unk_0C;
        if (l2 != NULL && l2 != (L_0888BDAC *)arg0) {
            r2 = 0;
            if (arg0->unk_00 != NULL) {
                arg0->unk_00->unk_04 = arg0->unk_04;
                r2 = 1;
            }
            if (arg0->unk_04 != NULL) {
                arg0->unk_04->unk_00 = arg0->unk_00;
                r2 = 1;
            }
            arg0->unk_0C = NULL;
            t = arg0->unk_0C;
            if (t != NULL) {
                func_0888BEC8(t, arg0);
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
            if (r2) {
                l2->unk_20--;
            }
        }
        arg0->unk_0C = NULL;
        arg0->unk_04 = NULL;
        arg0->unk_00 = NULL;
        if (r) {
            l->unk_20--;
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
