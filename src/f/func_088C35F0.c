#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 pad_08[0xBC];
    struct Owner *unk_C4;
} Node;

typedef struct Owner {
    u8 pad_00[0x1C];
    Node *unk_1C;
} Owner;

typedef struct Pool {
    u8 pad_00[0x8];
    Node **unk_08;
    u16 unk_0C;
    u16 unk_0E;
} Pool;

void func_088C35F0(Pool *arg0, Node *arg1) {
    if (arg1->unk_C4 == NULL) {
        return;
    }
    if (arg1->unk_00 != NULL) {
        arg1->unk_00->unk_04 = arg1->unk_04;
    } else {
        arg1->unk_C4->unk_1C = arg1->unk_04;
        if (arg1->unk_04 != NULL) {
            arg1->unk_04->unk_00 = NULL;
        }
    }
    if (arg1->unk_04 != NULL) {
        arg1->unk_04->unk_00 = arg1->unk_00;
    } else {
        if (arg1->unk_00 != NULL) {
            arg1->unk_00->unk_04 = NULL;
        }
    }
    if (arg0->unk_0E > arg0->unk_0C && arg1 != NULL) {
        arg0->unk_08[arg0->unk_0C++] = arg1;
    }
}
