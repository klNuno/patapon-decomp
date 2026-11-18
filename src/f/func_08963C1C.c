#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[4];
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

void func_08963D38(Node *arg0, Node *arg1);

inline s32 unlink(Node *n) {
    s32 r = 0;
    if (n->unk_00 != NULL) {
        n->unk_00->unk_04 = n->unk_04;
        r = 1;
    }
    if (n->unk_04 != NULL) {
        n->unk_04->unk_00 = n->unk_00;
        r = 1;
    }
    return r;
}

inline void detach3(Node *n) {
    Node *l = n->unk_0C;
    if (l != NULL) {
        func_08963D38(l, n);
    }
    n->unk_0C = NULL;
    n->unk_04 = NULL;
    n->unk_00 = NULL;
}

void func_08963C1C(Node *arg0) {
    Node *l = arg0->unk_0C;
    Node *l2;
    s32 r;
    s32 r2;
    if (l != NULL && l != arg0) {
        r = unlink(arg0);
        arg0->unk_0C = NULL;
        l2 = arg0->unk_0C;
        if (l2 != NULL && l2 != arg0) {
            r2 = unlink(arg0);
            arg0->unk_0C = NULL;
            detach3(arg0);
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
