#include "common.h"

typedef struct N_0895F6F4 {
    struct N_0895F6F4 *unk_00;
    struct N_0895F6F4 *unk_04;
    u8 pad_08[0x4];
    struct L_0895F6F4 *unk_0C;
} N_0895F6F4;

typedef struct L_0895F6F4 {
    u8 pad_00[0x20];
    s32 unk_20;
} L_0895F6F4;

void func_0895F810(L_0895F6F4 *, N_0895F6F4 *);

void func_0895F6F4(N_0895F6F4 *arg0) {
    L_0895F6F4 *o;
    L_0895F6F4 *o2;
    L_0895F6F4 *o3;
    s32 f;
    s32 f2;

    o = arg0->unk_0C;
    if (o != NULL) {
        if (o != (L_0895F6F4 *)arg0) {
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
                if (o2 != (L_0895F6F4 *)arg0) {
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
                        func_0895F810(o3, arg0);
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
