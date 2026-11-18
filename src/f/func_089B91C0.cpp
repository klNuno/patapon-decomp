#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

class E_089B91C0 {
public:
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;

    E_089B91C0(const E_089B91C0 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
};

typedef struct N_089B91C0 {
    struct N_089B91C0 *unk_00;
    struct N_089B91C0 *unk_04;
    E_089B91C0 unk_08;
} N_089B91C0;

typedef struct {
    u8 pad_00[8];
    N_089B91C0 *unk_08;
    s32 unk_0C;
} L_089B91C0;

void func_089B91C0(L_089B91C0 *arg0, N_089B91C0 *arg1, E_089B91C0 *arg2) {
    N_089B91C0 *n;
    N_089B91C0 *prev;

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
    new (&n->unk_08) E_089B91C0(*arg2);
}

}
