#include "common.h"

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    u8 unk_08[4];
} Node;

typedef struct {
    Node *unk_00;
} It;

typedef struct {
    u8 pad_00[8];
    Node *unk_08;
    s32 unk_0C;
} List;

s32 func_0891D238(void *);

It func_0891CE20(List *arg1, It arg2) {
    It pos;
    It ret;
    Node *last;
    Node *t;

    ret.unk_00 = arg2.unk_00->unk_00;
    arg1->unk_0C--;
    func_0891D238(&arg2.unk_00->unk_08);
    pos.unk_00 = arg1->unk_08;
    last = arg2.unk_00->unk_00;
    arg2.unk_00->unk_04->unk_00 = last;
    t = last->unk_04;
    last->unk_04 = arg2.unk_00->unk_04;
    arg2.unk_00->unk_04 = pos.unk_00->unk_04;
    pos.unk_00->unk_04->unk_00 = arg2.unk_00;
    pos.unk_00->unk_04 = t;
    t->unk_00 = pos.unk_00;
    return ret;
}
