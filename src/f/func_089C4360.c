#include "common.h"

typedef struct Node Node;
s32 func_089C33E0(Node *arg0);

typedef struct {
    Node *unk_00;
} T0;

typedef struct {
    u8 pad_00[0x20];
    s32 unk_20;
} T1;

typedef struct {
    u8 pad_00[4];
    Node *unk_04;
} T2;

void func_089C4360(T0 *arg0, T1 *arg1, T2 *arg2) {
    volatile struct {
        T0 unk_00;
        u8 pad_04[4];
    } temp;
    temp.unk_00.unk_00 = (Node *)arg2;
    if (arg2 != NULL) {
        temp.unk_00.unk_00 = arg2->unk_04;
    }
    if ((void *)arg1 != arg2 && func_089C33E0((Node *)arg2) != 0) {
        --arg1->unk_20;
    }
    *arg0 = temp.unk_00;
}
