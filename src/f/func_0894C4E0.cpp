#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E0894C4E0 {
    s32 unk_00;
    f32 unk_04;
    f32 unk_08;
    s32 unk_0C;
    f32 unk_10;
    f32 unk_14;
    E0894C4E0(const E0894C4E0 &o)
        : unk_00(o.unk_00), unk_04(o.unk_04), unk_08(o.unk_08), unk_0C(o.unk_0C), unk_10(o.unk_10),
          unk_14(o.unk_14) {}
};

typedef struct N0894C4E0 {
    struct N0894C4E0 *unk_00;
    struct N0894C4E0 *unk_04;
    E0894C4E0 unk_08;
} N0894C4E0;

typedef struct {
    N0894C4E0 *unk_00;
} I0894C4E0;

typedef struct {
    N0894C4E0 *unk_00;
    N0894C4E0 *unk_04;
    N0894C4E0 *unk_08;
    s32 unk_0C;
} L0894C4E0;

void func_0894C4E0(L0894C4E0 *l, I0894C4E0 pos, const E0894C4E0 &v) {
    N0894C4E0 *f = l->unk_08;
    N0894C4E0 *n = f->unk_00;
    N0894C4E0 *p;
    N0894C4E0 *prev;
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
    new (&n->unk_08) E0894C4E0(v);
}

}
