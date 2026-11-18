#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct {
    f32 unk_00[2];
} V2;

class E {
public:
    s32 unk_00;
    s32 unk_04;
    V2 unk_08;
    s32 unk_10;
    s32 unk_14;
    E(const E &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_10 = o.unk_10;
        unk_14 = o.unk_14;
    }
};

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    E unk_08;
} Node;

typedef struct {
    u8 pad_00[0x8];
    Node *unk_08;
    s32 unk_0C;
} List;

void func_08923BD0(List *arg0, Node *arg1, E *arg2) {
    Node *n;
    Node *prev;

    n = arg0->unk_08->unk_00;
    if (n != arg0->unk_08) {
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
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = prev;
    new (&n->unk_08) E(*arg2);
}

}
