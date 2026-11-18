#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class E {
public:
    s32 unk_00;
    s32 unk_04;
    E(const E &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
    }
};

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    E unk_08;
} Node;

typedef struct {
    Node *unk_00;
} It;

struct List {
    Node *unk_00;
    Node *unk_04;
    Node *unk_08;
    s32 unk_0C;

    It end() {
        It r;
        r.unk_00 = (Node *)this;
        return r;
    }
    void insert(It pos, const E &x) {
        Node *n;
        Node *prev;

        n = unk_08->unk_00;
        if (n != unk_08) {
            if (n->unk_00 != NULL) {
                n->unk_00->unk_04 = n->unk_04;
            }
            if (n->unk_04 != NULL) {
                n->unk_04->unk_00 = n->unk_00;
            }
            n->unk_00 = NULL;
            n->unk_04 = NULL;
        } else {
            n = NULL;
        }
        prev = pos.unk_00->unk_04;
        unk_0C++;
        prev->unk_00 = n;
        pos.unk_00->unk_04 = n;
        n->unk_00 = pos.unk_00;
        n->unk_04 = prev;
        new (&n->unk_08) E(x);
    }
};

void func_08919450(List *arg0, E *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
