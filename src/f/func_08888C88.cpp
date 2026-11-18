#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct N_08888C88 {
    N_08888C88 *unk_00;
    N_08888C88 *unk_04;
    s32 unk_08;
};

struct I_08888C88 {
    N_08888C88 *unk_00;
};

struct T_08888C88 {
    N_08888C88 *unk_00;
    N_08888C88 *unk_04;
    N_08888C88 *unk_08;
    s32 unk_0C;

    I_08888C88 end() {
        I_08888C88 it;
        it.unk_00 = (N_08888C88 *)this;
        return it;
    }
    void insert(I_08888C88 pos, const s32 &v) {
        N_08888C88 *n;
        N_08888C88 *prev;

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
        new (&n->unk_08) s32(v);
    }
};

void func_08888C88(T_08888C88 *arg0, const s32 *arg1) {
    arg0->insert(arg0->end(), *arg1);
}

}
