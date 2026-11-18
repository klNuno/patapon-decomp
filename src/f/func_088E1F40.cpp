#include "common.h"

extern "C" {

void func_0881F120(void *, void *, u32);
extern s8 D_089FC505[];

inline void *operator new(unsigned int, void *p) { return p; }

struct SP_088E1F40 {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
    s32 *unk_0C;

    SP_088E1F40(const SP_088E1F40 &o) {
        unk_00 = o.unk_00;
        unk_04 = o.unk_04;
        unk_08 = o.unk_08;
        unk_0C = o.unk_0C;
        if (unk_08 != 0) {
            ++*unk_0C;
        }
    }
};

struct Str_088E1F40 {
    u32 unk_00;
    s8 unk_04[0x24];

    Str_088E1F40(const Str_088E1F40 &o) {
        u32 n = o.unk_00;
        if (n > 0x20) {
            n = 0x20;
        }
        if (this != &o) {
            func_0881F120(unk_04, (void *)o.unk_04, n);
            unk_00 = n;
            unk_04[n] = D_089FC505[0];
        }
    }
};

struct E_088E1F40 {
    SP_088E1F40 unk_00;
    Str_088E1F40 unk_10;
};

struct N_088E1F40 {
    N_088E1F40 *unk_00;
    N_088E1F40 *unk_04;
    E_088E1F40 unk_08;
};

typedef struct {
    u8 pad_00[0x8];
    N_088E1F40 *unk_08;
    s32 unk_0C;
} L_088E1F40;

void func_088E1F40(L_088E1F40 *arg0, N_088E1F40 *arg1, E_088E1F40 *arg2) {
    N_088E1F40 *n;
    N_088E1F40 *p;
    struct { L_088E1F40 *unk_00; } h;

    h.unk_00 = arg0;
    n = h.unk_00->unk_08->unk_00;
    if (n != h.unk_00->unk_08) {
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
    h.unk_00->unk_0C++;
    p->unk_00 = n;
    arg1->unk_04 = n;
    n->unk_00 = arg1;
    n->unk_04 = p;
    new (&n->unk_08) E_088E1F40(*arg2);
}

}
