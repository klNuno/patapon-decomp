#include "common.h"

typedef struct N_0888BEC8 {
    struct N_0888BEC8 *unk_00;
    struct N_0888BEC8 *unk_04;
    u8 pad_08[0x4];
    struct L_0888BEC8 *unk_0C;
} N_0888BEC8;

typedef struct L_0888BEC8 {
    u8 pad_00[0x20];
    s32 unk_20;
} L_0888BEC8;

s32 func_0888BFF4(N_0888BEC8 *);

void func_0888BEC8(L_0888BEC8 *arg0, N_0888BEC8 *arg1) {
    L_0888BEC8 *o2;
    L_0888BEC8 *o3;
    s32 f;
    s32 f2;

    if (arg0 != (L_0888BEC8 *)arg1) {
        f = 0;
        if (arg1->unk_00 != NULL) {
            f = 1;
            arg1->unk_00->unk_04 = arg1->unk_04;
        }
        if (arg1->unk_04 != NULL) {
            f = 1;
            arg1->unk_04->unk_00 = arg1->unk_00;
        }
        arg1->unk_0C = NULL;
        o2 = arg1->unk_0C;
        if (o2 != NULL) {
            if (o2 != (L_0888BEC8 *)arg1) {
                f2 = 0;
                if (arg1->unk_00 != NULL) {
                    f2 = 1;
                    arg1->unk_00->unk_04 = arg1->unk_04;
                }
                if (arg1->unk_04 != NULL) {
                    f2 = 1;
                    arg1->unk_04->unk_00 = arg1->unk_00;
                }
                arg1->unk_0C = NULL;
                o3 = arg1->unk_0C;
                if (o3 != NULL) {
                    if (o3 != (L_0888BEC8 *)arg1) {
                        if (func_0888BFF4(arg1)) {
                            o3->unk_20--;
                        }
                    }
                }
                arg1->unk_0C = NULL;
                arg1->unk_04 = NULL;
                arg1->unk_00 = NULL;
                if (f2) {
                    o2->unk_20--;
                }
            }
        }
        arg1->unk_0C = NULL;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        if (f) {
            arg0->unk_20--;
        }
    }
}
