#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[4];
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

void func_08966314(Node *arg0, Node *arg1);

void func_0896677C(Node *arg0) {
    Node *o;
    Node *o2;
    Node *o3;
    s32 r;
    s32 r2;

    o = arg0->unk_0C;
    if (o != NULL) {
        if (o != arg0) {
            r = 0;
            if (arg0->unk_00 != NULL) {
                r = 1;
                arg0->unk_00->unk_04 = arg0->unk_04;
            }
            if (arg0->unk_04 != NULL) {
                r = 1;
                arg0->unk_04->unk_00 = arg0->unk_00;
            }
            arg0->unk_0C = NULL;
            o2 = arg0->unk_0C;
            if (o2 != NULL) {
                if (o2 != arg0) {
                    r2 = 0;
                    if (arg0->unk_00 != NULL) {
                        r2 = 1;
                        arg0->unk_00->unk_04 = arg0->unk_04;
                    }
                    if (arg0->unk_04 != NULL) {
                        r2 = 1;
                        arg0->unk_04->unk_00 = arg0->unk_00;
                    }
                    arg0->unk_0C = NULL;
                    o3 = arg0->unk_0C;
                    if (o3 != NULL) {
                        func_08966314(o3, arg0);
                    }
                    arg0->unk_0C = NULL;
                    arg0->unk_04 = NULL;
                    arg0->unk_00 = NULL;
                    if (r2) {
                        o2->unk_20--;
                    }
                }
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
            if (r) {
                o->unk_20--;
            }
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
