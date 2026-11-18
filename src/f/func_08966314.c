#include "common.h"

typedef struct N_08966314 {
    struct N_08966314 *unk_00;
    struct N_08966314 *unk_04;
    u8 pad_08[0x4];
    struct L_08966314 *unk_0C;
} N_08966314;

typedef struct L_08966314 {
    u8 pad_00[0x20];
    s32 unk_20;
} L_08966314;

s32 func_0896611C(N_08966314 *);

void func_08966314(L_08966314 *arg0, N_08966314 *arg1) {
    L_08966314 *o2;
    L_08966314 *o3;
    s32 f;
    s32 f2;

    if (arg0 != (L_08966314 *)arg1) {
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
            if (o2 != (L_08966314 *)arg1) {
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
                    if (o3 != (L_08966314 *)arg1) {
                        if (func_0896611C(arg1)) {
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
