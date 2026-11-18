#include "common.h"

typedef struct N_0898CCCC {
    struct N_0898CCCC *unk_00;
    struct N_0898CCCC *unk_04;
    u8 pad_08[0x4];
    struct L_0898CCCC *unk_0C;
} N_0898CCCC;

typedef struct L_0898CCCC {
    u8 pad_00[0x20];
    s32 unk_20;
} L_0898CCCC;

void func_0898CDE8(L_0898CCCC *, N_0898CCCC *);

void func_0898CCCC(N_0898CCCC *arg0) {
    L_0898CCCC *o;
    L_0898CCCC *o2;
    L_0898CCCC *o3;
    s32 f;
    s32 f2;

    o = arg0->unk_0C;
    if (o != NULL) {
        if (o != (L_0898CCCC *)arg0) {
            f = 0;
            if (arg0->unk_00 != NULL) {
                f = 1;
                arg0->unk_00->unk_04 = arg0->unk_04;
            }
            if (arg0->unk_04 != NULL) {
                f = 1;
                arg0->unk_04->unk_00 = arg0->unk_00;
            }
            arg0->unk_0C = NULL;
            o2 = arg0->unk_0C;
            if (o2 != NULL) {
                if (o2 != (L_0898CCCC *)arg0) {
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
                    o3 = arg0->unk_0C;
                    if (o3 != NULL) {
                        func_0898CDE8(o3, arg0);
                    }
                    arg0->unk_0C = NULL;
                    arg0->unk_04 = NULL;
                    arg0->unk_00 = NULL;
                    if (f2) {
                        o2->unk_20--;
                    }
                }
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
            if (f) {
                o->unk_20--;
            }
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
