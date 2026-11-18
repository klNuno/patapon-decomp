#include "common.h"

extern "C" {

struct Node {
    s32 unk_00;
    Node *unk_04;
    s32 unk_08;

    int eq2(const Node &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == *(Node **)&o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const Node &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const Node &o) const { return !(bool)eq(o); }
    bool same(const Node &o) const {
        return unk_08 == o.unk_08 && unk_04 == o.unk_04 && unk_00 == o.unk_00;
    }
};

Node *func_0888EF3C(Node *arg0, s32 arg1) {
    Node *p = arg0->unk_04;
    while (p->ne(*arg0)) {
        if (p->unk_08 == arg1) {
            break;
        }
        if (p != NULL) {
            p = p->unk_04;
        }
    }
    if (p->same(*arg0)) {
        p = NULL;
    }
    return p;
}

}
