#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[4];
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

s32 func_08880338(Node *arg0);

void func_08880530(Node *arg0, Node *arg1) {
    Node *o;
    Node *o2;
    s32 r;
    s32 r2;

    if (arg0 != arg1) {
        r = 0;
        if (arg1->unk_00 != NULL) {
            r = 1;
            arg1->unk_00->unk_04 = arg1->unk_04;
        }
        if (arg1->unk_04 != NULL) {
            r = 1;
            arg1->unk_04->unk_00 = arg1->unk_00;
        }
        arg1->unk_0C = NULL;
        o = arg1->unk_0C;
        if (o != NULL) {
            if (o != arg1) {
                r2 = 0;
                if (arg1->unk_00 != NULL) {
                    r2 = 1;
                    arg1->unk_00->unk_04 = arg1->unk_04;
                }
                if (arg1->unk_04 != NULL) {
                    r2 = 1;
                    arg1->unk_04->unk_00 = arg1->unk_00;
                }
                arg1->unk_0C = NULL;
                o2 = arg1->unk_0C;
                if (o2 != NULL) {
                    if (o2 != arg1) {
                        if (func_08880338(arg1)) {
                            o2->unk_20--;
                        }
                    }
                }
                arg1->unk_0C = NULL;
                arg1->unk_04 = NULL;
                arg1->unk_00 = NULL;
                if (r2) {
                    o->unk_20--;
                }
            }
        }
        arg1->unk_0C = NULL;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
        if (r) {
            arg0->unk_20--;
        }
    }
}
