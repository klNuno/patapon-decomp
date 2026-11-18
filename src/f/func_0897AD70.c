#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} H0897AD70;

typedef struct {
    s32 unk_00;
    H0897AD70 unk_04;
} E0897AD70;

typedef struct N0897AD70 {
    struct N0897AD70 *unk_00;
    struct N0897AD70 *unk_04;
    E0897AD70 unk_08;
} N0897AD70;

typedef struct {
    u8 pad_00[8];
    N0897AD70 *unk_08;
    s32 unk_0C;
} T0897AD70;

void func_0897AD70(T0897AD70 *arg0, N0897AD70 *arg1, E0897AD70 *arg2) {
    N0897AD70 *n;
    N0897AD70 *prev;
    E0897AD70 *e;
    H0897AD70 *h;

    n = arg0->unk_08->unk_00;
    if (n != arg0->unk_08) {
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
        }
        n->unk_00 = NULL;
        n->unk_04 = NULL;
    } else {
        n = NULL;
    }
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    e = &n->unk_08;
    if (e != NULL) {
        e->unk_00 = arg2->unk_00;
        e->unk_04.unk_00 = arg2->unk_04.unk_00;
        e->unk_04.unk_04 = arg2->unk_04.unk_04;
        e->unk_04.unk_08 = arg2->unk_04.unk_08;
        e->unk_04.unk_0C = arg2->unk_04.unk_0C;
        h = &e->unk_04;
        if (h->unk_08 != 0) {
            *h->unk_0C += 1;
        }
    }
}
