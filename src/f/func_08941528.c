#include "common.h"

typedef struct T08941528_H {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
} T08941528_H;

typedef struct T08941528_N {
    struct T08941528_N *unk_00;
    struct T08941528_N *unk_04;
    T08941528_H unk_08;
} T08941528_N;

typedef struct T08941528_L {
    u8 pad_00[0x8];
    T08941528_N *unk_08;
    s32 unk_0C;
} T08941528_L;

void func_08941528(T08941528_L *arg0, T08941528_N *arg1, T08941528_H *arg2) {
    T08941528_N *n;
    T08941528_N *prev;
    T08941528_H *h;

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
    h = &n->unk_08;
    if (h != NULL) {
        h->unk_00 = arg2->unk_00;
        h->unk_04 = arg2->unk_04;
        h->unk_08 = arg2->unk_08;
        h->unk_0C = arg2->unk_0C;
        if (h->unk_08 != 0) {
            (*h->unk_0C)++;
        }
    }
}
