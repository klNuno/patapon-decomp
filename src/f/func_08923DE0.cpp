#include "common.h"

extern "C" {

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    u8 unk_08[0x10];
    u8 unk_18[1];
} N;

struct I {
    N *unk_00;

    int eq(N *o) { return unk_00 == o; }
    bool ne(N *o) { return !(bool)eq(o); }
    I operator++(int) { I r = *this; unk_00 = unk_00->unk_00; return r; }
};

s32 func_088C0020(void *);
void func_08923ECC(void *);

struct E {
};

inline void destroy(void *p, const E &) { func_08923ECC(p); }

struct L {
    N *unk_00;
    N *unk_04;
    N *unk_08;
    s32 unk_0C;

    void erase(I it) {
        N *n;
        N *f;
        N *next;
        N *last;

        unk_0C--;
        destroy(it.unk_00->unk_08, E());
        n = it.unk_00;
        f = unk_08;
        next = n->unk_00;
        n->unk_04->unk_00 = next;
        last = next->unk_04;
        next->unk_04 = n->unk_04;
        n->unk_04 = f->unk_04;
        f->unk_04->unk_00 = n;
        f->unk_04 = last;
        last->unk_00 = f;
    }
};

typedef struct {
    u8 pad_00[0x94];
    L unk_94;
} T;

void func_08923DE0(T *arg0) {
    I it;
    N *end;

    it.unk_00 = arg0->unk_94.unk_00;
    end = (N *)&arg0->unk_94;
    while (it.ne(end)) {
        if (func_088C0020(it.unk_00->unk_18)) {
            arg0->unk_94.erase(it++);
        }
        it.unk_00 = it.unk_00->unk_00;
    }
}

}
