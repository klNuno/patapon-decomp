#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct Node_089B4EE8 {
    struct Node_089B4EE8 *unk_00;
    struct Node_089B4EE8 *unk_04;
    s32 unk_08;
} Node_089B4EE8;

typedef struct {
    Node_089B4EE8 *unk_00;
} It_089B4EE8;

struct List_089B4EE8 {
    Node_089B4EE8 *unk_00;
    Node_089B4EE8 *unk_04;
    Node_089B4EE8 *unk_08;
    s32 unk_0C;

    It_089B4EE8 end() {
        It_089B4EE8 it;
        it.unk_00 = (Node_089B4EE8 *)this;
        return it;
    }
    void insert(It_089B4EE8 pos, const s32 &v) {
        Node_089B4EE8 *n = unk_08->unk_00;
        Node_089B4EE8 *prev;

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
        new (&n->unk_08) s32(v);
    }
};

void func_089B4EE8(List_089B4EE8 *arg0, s32 *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
