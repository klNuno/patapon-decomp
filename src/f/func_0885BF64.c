#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[4];
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

s32 func_0885BC18(Node *arg0);

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

void func_0885BF64(Node *arg0, Node *arg1) {
    Node *l2;
    Node *l3;
    s32 r;
    s32 r2;

    if (arg0 == arg1) {
        return;
    }
    r = unlink(arg1);
    arg1->unk_0C = NULL;
    l2 = arg1->unk_0C;
    if (l2 != NULL && l2 != arg1) {
        r2 = unlink(arg1);
        arg1->unk_0C = NULL;
        l3 = arg1->unk_0C;
        if (l3 != NULL && l3 != arg1) {
            if (func_0885BC18(arg1)) {
                l3->unk_20--;
            }
        }
        arg1->unk_0C = NULL;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        if (r2) {
            l2->unk_20--;
        }
    }
    arg1->unk_0C = NULL;
    arg1->unk_04 = NULL;
    arg1->unk_00 = NULL;
    if (r) {
        arg0->unk_20--;
    }
}
