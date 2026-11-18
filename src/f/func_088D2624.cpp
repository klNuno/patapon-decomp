#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct E {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;

    E(const struct E &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            (*unk_0C)++;
        }
    }
} E;

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    E unk_08;
} Node;

inline Node *pop(Node *head) {
    Node *n = head->unk_00;

    if (n != head) {
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
    return n;
}

typedef struct {
    u8 pad_00[0x8];
    Node *unk_08;
    s32 unk_0C;
} S0;

void func_088D2624(S0 *arg0, Node *arg1, E *arg2) {
    Node *n;
    Node *prev;

    n = pop(arg0->unk_08);
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    new (&n->unk_08) E(*arg2);
}

}
