#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
} Node;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} Val;

typedef struct {
    Node *unk_00;
    Node *unk_04;
    Val unk_08;
} Elem;

typedef struct {
    u8 pad_00[8];
    Node *unk_08;
    s32 unk_0C;
} List;

void func_0886E08C(List *arg0, Node *arg1, Val *arg2) {
    Elem *n;
    Node *prev;
    Val *d;

    n = (Elem *)arg0->unk_08->unk_00;
    if ((Node *)n != arg0->unk_08) {
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
    prev->unk_00 = (Node *)n;
    arg1->unk_04 = (Node *)n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    d = &n->unk_08;
    if (d != NULL) {
        d->unk_00 = arg2->unk_00;
        d->unk_04 = arg2->unk_04;
        d->unk_08 = arg2->unk_08;
    }
}
