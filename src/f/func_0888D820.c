#include "common.h"

typedef struct N_0888D820 {
    struct N_0888D820 *unk_00;
    struct N_0888D820 *unk_04;
    s32 unk_08;
    struct N_0888D820 *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} N_0888D820;

void func_0888D93C(N_0888D820 *, N_0888D820 *);

void func_0888D820(N_0888D820 *arg0) {
    N_0888D820 *l;
    N_0888D820 *l2;
    N_0888D820 *x;
    s32 r;
    s32 r2;

    l = arg0->unk_0C;
    if (l != NULL && l != arg0) {
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
        if (l2 != NULL && l2 != arg0) {
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
            x = arg0->unk_0C;
            if (x != NULL) {
                func_0888D93C(x, arg0);
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
