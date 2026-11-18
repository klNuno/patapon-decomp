#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E_088E0FCC {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
    E_088E0FCC(const E_088E0FCC &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
};

struct Node_088E0FCC {
    Node_088E0FCC *unk_00;
    Node_088E0FCC *unk_04;
    E_088E0FCC unk_08;
};

typedef struct {
    u8 pad_00[0x8];
    Node_088E0FCC *unk_08;
    s32 unk_0C;
} List_088E0FCC;

void func_088E0FCC(List_088E0FCC *arg0, Node_088E0FCC *arg1, E_088E0FCC *arg2) {
    Node_088E0FCC *node;
    Node_088E0FCC *prev;

    node = arg0->unk_08->unk_00;
    if (node != arg0->unk_08) {
        if (node->unk_00 != NULL) {
            node->unk_00->unk_04 = node->unk_04;
        }
        if (node->unk_04 != NULL) {
            node->unk_04->unk_00 = node->unk_00;
        }
        node->unk_00 = NULL;
        node->unk_04 = NULL;
    } else {
        node = NULL;
    }
    prev = arg1->unk_04;
    arg0->unk_0C++;
    prev->unk_00 = node;
    arg1->unk_04 = node;
    node->unk_00 = arg1;
    node->unk_04 = prev;
    new (&node->unk_08) E_088E0FCC(*arg2);
}

}
