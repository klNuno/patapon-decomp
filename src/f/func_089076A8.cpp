#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E_089076A8 {
    s32 unk_00;
    s32 unk_04;
    E_089076A8(const E_089076A8 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

struct N_089076A8 {
    N_089076A8 *unk_00;
    N_089076A8 *unk_04;
    E_089076A8 unk_08;
};

struct I_089076A8 {
    N_089076A8 *unk_00;
};

struct L_089076A8 {
    N_089076A8 *unk_00;
    N_089076A8 *unk_04;
    N_089076A8 *unk_08;
    s32 unk_0C;
    I_089076A8 end() {
        I_089076A8 i;
        i.unk_00 = (N_089076A8 *)this;
        return i;
    }
    void insert(I_089076A8 pos, const E_089076A8 &x) {
        N_089076A8 *n;
        N_089076A8 *p;

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
        p = pos.unk_00->unk_04;
        unk_0C++;
        p->unk_00 = n;
        pos.unk_00->unk_04 = n;
        n->unk_00 = pos.unk_00;
        n->unk_04 = p;
        new (&n->unk_08) E_089076A8(x);
    }
};

void func_089076A8(L_089076A8 *arg0, E_089076A8 *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
