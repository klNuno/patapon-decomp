#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    s32 unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node *o) {
        return !(bool)eq(o);
    }
    bool same(struct Node *o) {
        return *(s32 *)&unk_08 == *(s32 *)&o->unk_08 && *(s32 *)&unk_04 == *(s32 *)&o->unk_04 && *(s32 *)&unk_00 == *(s32 *)&o->unk_00;
    }
} Node;

Node *func_0896CD20(Node *arg0, s32 arg1) {
    Node *it;

    for (it = *(Node **)&arg0->unk_04; it->ne(arg0);) {
        if (*(s32 *)&it->unk_08 == arg1) {
            break;
        }
        if (it != NULL) {
            it = it->unk_04;
        }
    }
    if (it->same(arg0)) {
        it = NULL;
    }
    return it;
}

}
