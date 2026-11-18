#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

extern s32 func_0895F93C(s32);

void func_0895F810(Node *arg0, Node *arg1) {
    if (arg0 != arg1) {
        s32 r = 0;
        if (arg1->unk_00 != NULL) { r = 1; arg1->unk_00->unk_04 = arg1->unk_04; }
        if (arg1->unk_04 != NULL) { r = 1; arg1->unk_04->unk_00 = arg1->unk_00; }
        arg1->unk_0C = NULL;
        {
            Node *l2 = arg1->unk_0C;
            if (l2 != NULL) {
                if (l2 != arg1) {
                    s32 r2 = 0;
                    if (arg1->unk_00 != NULL) { r2 = 1; arg1->unk_00->unk_04 = arg1->unk_04; }
                    if (arg1->unk_04 != NULL) { r2 = 1; arg1->unk_04->unk_00 = arg1->unk_00; }
                    arg1->unk_0C = NULL;
                    {
                        Node *l3 = arg1->unk_0C;
                        if (l3 != NULL) {
                            if (l3 != arg1) {
                                if (func_0895F93C((s32)arg1)) {
                                    l3->unk_20--;
                                }
                            }
                        }
                        arg1->unk_0C = NULL;
                        arg1->unk_04 = NULL;
                        arg1->unk_00 = NULL;
                    }
                    if (r2) {
                        l2->unk_20--;
                    }
                }
            }
            arg1->unk_0C = NULL;
            arg1->unk_04 = NULL;
            arg1->unk_00 = NULL;
        }
        if (r) {
            arg0->unk_20--;
        }
    }
}
