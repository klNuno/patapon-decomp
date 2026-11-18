#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
} Node;

s32 func_0888F060(Node *arg0, Node *arg1) {
    Node *next;
    Node *prev;
    Node *p;
    Node *t;
    s32 ret;

    if (arg0 == arg1) {
        return 0;
    }
    next = arg1->unk_04;
    prev = arg1->unk_00;
    ret = 0;
    if (next == arg0 || prev == arg0) {
        p = arg0;
        if (next == arg0) {
            p = arg1;
            arg1 = arg0;
            ret = 1;
        }
        t = arg1->unk_04;
        if (p->unk_00 != NULL) {
            p->unk_00->unk_04 = arg1;
            ret = 1;
        }
        arg1->unk_00 = p->unk_00;
        p->unk_04 = arg1->unk_04;
        p->unk_00 = arg1;
        arg1->unk_04 = p;
        if (t != NULL) {
            t->unk_00 = p;
            ret = 1;
        }
    } else {
        if (arg0->unk_00 != NULL) {
            arg0->unk_00->unk_04 = arg1;
            arg1->unk_00 = arg0->unk_00;
            ret = 1;
        }
        if (arg0->unk_04 != NULL) {
            arg0->unk_04->unk_00 = arg1;
            arg1->unk_04 = arg0->unk_04;
            ret = 1;
        }
        if (prev != NULL) {
            prev->unk_04 = arg0;
            arg0->unk_00 = prev;
            ret = 1;
        }
        if (next != NULL) {
            next->unk_00 = arg0;
            arg0->unk_04 = next;
            ret = 1;
        }
    }
    return ret;
}
