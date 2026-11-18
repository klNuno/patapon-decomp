#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

struct E0891CA24 {
    s32 unk_00;
    s32 unk_04;
    E0891CA24(const E0891CA24 &o) : unk_00(o.unk_00), unk_04(o.unk_04) {}
};

typedef struct N0891CA24 {
    struct N0891CA24 *unk_00;
    struct N0891CA24 *unk_04;
    E0891CA24 unk_08;
} N0891CA24;

typedef struct {
    N0891CA24 *unk_00;
} I0891CA24;

typedef struct {
    N0891CA24 *unk_00;
    N0891CA24 *unk_04;
    N0891CA24 *unk_08;
    s32 unk_0C;
} L0891CA24;

inline void insert0891CA24(L0891CA24 *l, I0891CA24 pos, const E0891CA24 &v) {
    N0891CA24 *f = l->unk_08;
    N0891CA24 *n = f->unk_00;
    N0891CA24 *p;
    N0891CA24 *prev;
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
    new (&n->unk_08) E0891CA24(v);
}

inline I0891CA24 end0891CA24(L0891CA24 *l) {
    I0891CA24 i;
    i.unk_00 = (N0891CA24 *)l;
    return i;
}

void func_0891CA24(L0891CA24 *arg0, const E0891CA24 &arg1) {
    insert0891CA24(arg0, end0891CA24(arg0), arg1);
}

}
