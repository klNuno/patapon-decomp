#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;
    struct Node *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} Node;

void func_08961DD4(void *, s32);

void func_08961CB8(Node *arg0) {
    Node *l = arg0->unk_0C;
    if (l != NULL) {
        if (l != arg0) {
            s32 r = 0;
            if (arg0->unk_00 != NULL) { r = 1; arg0->unk_00->unk_04 = arg0->unk_04; }
            if (arg0->unk_04 != NULL) { r = 1; arg0->unk_04->unk_00 = arg0->unk_00; }
            arg0->unk_0C = NULL;
            {
                Node *l2 = arg0->unk_0C;
                if (l2 != NULL) {
                    if (l2 != arg0) {
                        s32 r2 = 0;
                        if (arg0->unk_00 != NULL) { r2 = 1; arg0->unk_00->unk_04 = arg0->unk_04; }
                        if (arg0->unk_04 != NULL) { r2 = 1; arg0->unk_04->unk_00 = arg0->unk_00; }
                        arg0->unk_0C = NULL;
                        {
                            Node *l3 = arg0->unk_0C;
                            if (l3 != NULL) {
                                func_08961DD4(l3, (s32)arg0);
                            }
                            arg0->unk_0C = NULL;
                            arg0->unk_04 = NULL;
                            arg0->unk_00 = NULL;
                        }
                        if (r2) {
                            l2->unk_20--;
                        }
                    }
                }
                arg0->unk_0C = NULL;
                arg0->unk_04 = NULL;
                arg0->unk_00 = NULL;
            }
            if (r) {
                l->unk_20--;
            }
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}
