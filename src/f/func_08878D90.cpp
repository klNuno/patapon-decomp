#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E08878D90 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    E08878D90(const E08878D90 &o)
        : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C), unk_10(o.unk_10),
          unk_14(o.unk_14) {}
};

typedef struct N08878D90 {
    struct N08878D90 *unk_00;
    struct N08878D90 *unk_04;
    E08878D90 unk_08;
} N08878D90;

typedef struct {
    N08878D90 *unk_00;
} I08878D90;

typedef struct {
    N08878D90 *unk_00;
    N08878D90 *unk_04;
    N08878D90 *unk_08;
    s32 unk_0C;
} L08878D90;

void func_08878D90(L08878D90 *l, I08878D90 pos, const E08878D90 &v) {
    N08878D90 *f = l->unk_08;
    N08878D90 *n = f->unk_00;
    N08878D90 *p;
    N08878D90 *prev;
    if (n != f) {
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
    p = pos.unk_00;
    prev = p->unk_04;
    l->unk_0C++;
    prev->unk_00 = n;
    p->unk_04 = n;
    n->unk_00 = p;
    n->unk_04 = prev;
    new (&n->unk_08) E08878D90(v);
}

}
