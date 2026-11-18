#include "common.h"

extern "C" {

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;

    int eq(struct Node *o) { return this == o; }
    bool ne(struct Node *o) { return !(bool)eq(o); }
} Node;

typedef struct List {
    Node *unk_00;
    Node *unk_04;
    Node *unk_08;
    s32 unk_0C;
} List;

extern List D_08ADB460[];

void func_0898866C(s32 *);

inline void func_08988484_splice(Node *last, Node *first, Node *pos) {
    Node *tmp;

    first->unk_04->unk_00 = last;
    tmp = last->unk_04;
    last->unk_04 = first->unk_04;
    first->unk_04 = pos->unk_04;
    pos->unk_04->unk_00 = first;
    pos->unk_04 = tmp;
    tmp->unk_00 = pos;
}

void func_08988484(s32 arg0) {
    struct { Node *unk_00; } it;

    for (it.unk_00 = D_08ADB460[0].unk_00; it.unk_00->ne((Node *)D_08ADB460); it.unk_00 = it.unk_00->unk_00) {
        s32 *d = &it.unk_00->unk_08;
        if (*d == arg0) {
            D_08ADB460[0].unk_0C--;
            func_0898866C(d);
            func_08988484_splice(it.unk_00->unk_00, it.unk_00, D_08ADB460[0].unk_08);
            return;
        }
    }
}

}
