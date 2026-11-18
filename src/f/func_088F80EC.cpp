#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

class Ptr_088F80EC {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;
    Ptr_088F80EC(const Ptr_088F80EC &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            *unk_0C += 1;
        }
    }
};

class E_088F80EC {
public:
    s32 unk_00;
    u8 unk_04[0x404];
    Ptr_088F80EC *unk_408;
    u32 unk_40C;
    E_088F80EC(const E_088F80EC &o) {
        Ptr_088F80EC *s;
        Ptr_088F80EC *p;
        Ptr_088F80EC **dp;
        u32 *sp;

        unk_00 = o.unk_00;
        unk_408 = (Ptr_088F80EC *)(((u32)unk_04 & 3) + (u32)this + 4);
        unk_40C = o.unk_40C;
        s = o.unk_408;
        p = unk_408;
        dp = &unk_408;
        if ((u32)p != (u32)(p + unk_40C)) {
            sp = &unk_40C;
            do {
                new (p) Ptr_088F80EC(*s++);
                p++;
            } while (p != *dp + *sp);
        }
    }
};

typedef struct Node_088F80EC {
    struct Node_088F80EC *unk_00;
    struct Node_088F80EC *unk_04;
    E_088F80EC unk_08;
} Node_088F80EC;

typedef struct {
    u8 pad_00[0x8];
    Node_088F80EC *unk_08;
    s32 unk_0C;
} List_088F80EC;

void func_088F80EC(List_088F80EC *arg0, Node_088F80EC *arg1, E_088F80EC *arg2) {
    Node_088F80EC *n;
    Node_088F80EC *prev;

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
    new (&n->unk_08) E_088F80EC(*arg2);
}

}
