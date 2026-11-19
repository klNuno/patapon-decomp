#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} Node;

typedef struct {
    Node *unk_00;
} T;

s32 func_08963E64(Node *arg0);

void func_08964214(T *arg0, Node *arg1, Node *arg2) {
    volatile struct {
        Node *unk_00;
        u8 pad_04[4];
    } temp;

    temp.unk_00 = arg2;
    if (arg2 != NULL) {
        temp.unk_00 = arg2->unk_04;
    }
    if (arg1 != arg2) {
        if (func_08963E64(arg2) != 0) {
            arg1->unk_20--;
        }
    }
    *arg0 = *(T *)&temp;
}
