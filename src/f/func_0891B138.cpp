#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E_0891B138 {
    s32 unk_00;
    s32 unk_04;
    E_0891B138(const E_0891B138 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

struct N_0891B138 {
    N_0891B138 *unk_00;
    N_0891B138 *unk_04;
    E_0891B138 unk_08;
};

struct I_0891B138 {
    N_0891B138 *unk_00;
};

struct T_0891B138 {
    N_0891B138 *unk_00;
    N_0891B138 *unk_04;
    N_0891B138 *unk_08;
    s32 unk_0C;

    I_0891B138 end() {
        I_0891B138 it;
        it.unk_00 = (N_0891B138 *)this;
        return it;
    }
    void insert(I_0891B138 pos, const E_0891B138 &v) {
        N_0891B138 *n;
        N_0891B138 *prev;

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
        new (&n->unk_08) E_0891B138(v);
    }
};

void func_0891B138(T_0891B138 *arg0, const E_0891B138 *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
