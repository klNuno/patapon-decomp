#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) { return p; }

typedef struct N08906AD0 {
    struct N08906AD0 *unk_00;
    struct N08906AD0 *unk_04;
    s32 unk_08;
} N08906AD0;

typedef struct {
    N08906AD0 *unk_00;
} I08906AD0;

typedef struct {
    N08906AD0 *unk_00;
    N08906AD0 *unk_04;
    N08906AD0 *unk_08;
    s32 unk_0C;
} L08906AD0;

inline void insert08906AD0(L08906AD0 *l, I08906AD0 pos, const s32 &v) {
    N08906AD0 *f = l->unk_08;
    N08906AD0 *n = f->unk_00;
    N08906AD0 *p;
    N08906AD0 *prev;
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
    new (&n->unk_08) s32(v);
}

inline I08906AD0 end08906AD0(L08906AD0 *l) {
    I08906AD0 i;
    i.unk_00 = (N08906AD0 *)l;
    return i;
}

void func_08906AD0(L08906AD0 *arg0, const s32 &arg1) {
    insert08906AD0(arg0, end08906AD0(arg0), arg1);
}

}
