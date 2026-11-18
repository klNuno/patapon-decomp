#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E_089259F0 {
    f32 unk_00;
    f32 unk_04;
    f32 unk_08;
    f32 unk_0C;
    f32 unk_10;
    s32 unk_14;
    E_089259F0(const E_089259F0 &o) : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C), unk_10(o.unk_10), unk_14(o.unk_14) {}
};

struct N_089259F0 {
    N_089259F0 *unk_00;
    N_089259F0 *unk_04;
    E_089259F0 unk_08;
};

struct T_089259F0 {
    u8 pad_00[8];
    N_089259F0 *unk_08;
    s32 unk_0C;
};

void func_089259F0(T_089259F0 *arg0, N_089259F0 *arg1, E_089259F0 *arg2) {
    N_089259F0 *n;
    N_089259F0 *prev;

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
    new (&n->unk_08) E_089259F0(*arg2);
}

}
