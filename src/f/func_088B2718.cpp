#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class Ptr_088B2718 {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_088B2718(const Ptr_088B2718 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
};

class E_088B2718 {
public:
    Ptr_088B2718 unk_00;
    s32 unk_10;
};

typedef struct Node_088B2718 {
    struct Node_088B2718 *unk_00;
    struct Node_088B2718 *unk_04;
    E_088B2718 unk_08;
} Node_088B2718;

typedef struct {
    u8 pad_00[0x8];
    Node_088B2718 *unk_08;
    s32 unk_0C;
} List_088B2718;

void func_088B2718(List_088B2718 *arg0, Node_088B2718 *arg1, E_088B2718 *arg2) {
    Node_088B2718 *n;
    Node_088B2718 *prev;

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
    new (&n->unk_08) E_088B2718(*arg2);
}

}
