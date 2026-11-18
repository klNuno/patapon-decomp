#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E_089398D4 {
    s32 unk_00;
    s32 unk_04;
    E_089398D4(const E_089398D4 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

typedef struct Node_089398D4 {
    struct Node_089398D4 *unk_00;
    struct Node_089398D4 *unk_04;
    E_089398D4 unk_08;
} Node_089398D4;

typedef struct {
    Node_089398D4 *unk_00;
} It_089398D4;

struct List_089398D4 {
    Node_089398D4 *unk_00;
    Node_089398D4 *unk_04;
    Node_089398D4 *unk_08;
    s32 unk_0C;

    It_089398D4 end() {
        It_089398D4 it;
        it.unk_00 = (Node_089398D4 *)this;
        return it;
    }
    void insert(It_089398D4 pos, const E_089398D4 &v) {
        Node_089398D4 *n = unk_08->unk_00;
        Node_089398D4 *prev;

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
        new (&n->unk_08) E_089398D4(v);
    }
};

void func_089398D4(List_089398D4 *arg0, E_089398D4 *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
