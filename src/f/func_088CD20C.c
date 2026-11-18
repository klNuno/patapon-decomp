#include "common.h"

typedef struct L_088CD20C {
    u8 pad_00[0x20];
    s32 unk_20;
} L_088CD20C;

typedef struct N_088CD20C {
    struct N_088CD20C *unk_00;
    struct N_088CD20C *unk_04;
    u8 pad_08[0x4];
    L_088CD20C *unk_0C;
} N_088CD20C;

void func_088CD060(L_088CD20C *, N_088CD20C *);

void func_088CD20C(N_088CD20C *arg0) {
    L_088CD20C *l;
    L_088CD20C *l2;
    L_088CD20C *t;
    s32 r;
    s32 r2;

    l = arg0->unk_0C;
    if (l != NULL && l != (L_088CD20C *)arg0) {
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
        if (l2 != NULL && l2 != (L_088CD20C *)arg0) {
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
                func_088CD060(t, arg0);
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
