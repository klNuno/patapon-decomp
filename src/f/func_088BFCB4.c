#include "common.h"

typedef struct N_088BFCB4 {
    struct N_088BFCB4 *unk_00;
    struct N_088BFCB4 *unk_04;
    f32 unk_08;
    s32 unk_0C;
} N_088BFCB4;

typedef struct {
    N_088BFCB4 **unk_00;
} S_088BFCB4;

void func_088BFCB4(S_088BFCB4 *arg0, N_088BFCB4 *arg1, s32 arg2) {
    N_088BFCB4 *n;
    N_088BFCB4 *next;
    N_088BFCB4 *prev;
    N_088BFCB4 *a;
    N_088BFCB4 *b;

    if (arg0->unk_00 == NULL) {
        return;
    }
    n = arg0->unk_00[arg2];
    if (n == NULL) {
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        arg0->unk_00[arg2] = arg1;
        return;
    }
    while (n != NULL) {
        next = n->unk_04;
        if (next != NULL) {
            prev = n->unk_00;
            if (prev != NULL) {
                if (n->unk_0C == arg1->unk_0C) {
                    if (n->unk_08 < arg1->unk_08 && arg1->unk_08 <= prev->unk_08) {
                        arg1->unk_04 = n;
                        arg1->unk_00 = n->unk_00;
                        if (n->unk_00 != NULL) {
                            n->unk_00->unk_04 = arg1;
                        }
                        n->unk_00 = arg1;
                        return;
                    }
                    if (next->unk_0C != arg1->unk_0C) {
                        a = arg1->unk_00;
                        b = arg1->unk_04;
                        arg1->unk_00 = n;
                        arg1->unk_04 = n->unk_04;
                        if (n->unk_04 != NULL) {
                            n->unk_04->unk_00 = arg1;
                        }
                        if (a != NULL) {
                            a->unk_04 = b;
                        }
                        if (b != NULL) {
                            b->unk_00 = a;
                        }
                        n->unk_04 = arg1;
                        return;
                    }
                }
            }
        } else {
            arg1->unk_04 = NULL;
            arg1->unk_00 = n;
            n->unk_04 = arg1;
            return;
        }
        n = next;
    }
}
