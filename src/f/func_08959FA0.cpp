#include "common.h"
extern "C" {
inline void *operator new(unsigned int, void *p) { return p; }
struct E {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    E(const E &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C) {
        if (unk_08 != 0) {
            *(s32 *)unk_0C += 1;
        }
    }
};
struct N {
    N *unk_00;
    N *unk_04;
    E unk_08;
};
struct L {
    u8 pad_00[8];
    N *unk_08;
    s32 unk_0C;
};
void func_08959FA0(L *arg0, N *arg1, E *arg2) {
    N *n;
    N *p;
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
    p = arg1->unk_04;
    arg0->unk_0C++;
    p->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = p;
    new (&n->unk_08) E(*arg2);
}
}
