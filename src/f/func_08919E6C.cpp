#include "common.h"

extern "C" {

typedef struct Node_08919E6C {
    struct Node_08919E6C *unk_00;
    struct Node_08919E6C *unk_04;
    u8 unk_08[4];
} Node_08919E6C;

typedef struct {
    u8 pad_00[8];
    Node_08919E6C *unk_08;
    s32 unk_0C;
} List_08919E6C;

typedef struct {
    Node_08919E6C *unk_00;
} It_08919E6C;

void func_0891A954(void *);

inline void func_08919E6C_splice(Node_08919E6C *last, Node_08919E6C *first, Node_08919E6C *pos) {
    Node_08919E6C *tmp;

    first->unk_04->unk_00 = last;
    tmp = last->unk_04;
    last->unk_04 = first->unk_04;
    first->unk_04 = pos->unk_04;
    pos->unk_04->unk_00 = first;
    pos->unk_04 = tmp;
    tmp->unk_00 = pos;
}

It_08919E6C func_08919E6C(List_08919E6C *arg1, It_08919E6C arg2) {
    It_08919E6C ret[2];

    ret[0].unk_00 = arg2.unk_00->unk_00;
    arg1->unk_0C--;
    func_0891A954(arg2.unk_00->unk_08);
    func_08919E6C_splice(arg2.unk_00->unk_00, arg2.unk_00, arg1->unk_08);
    return ret[0];
}

}
