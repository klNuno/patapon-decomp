#include "common.h"

extern "C" {

struct Node {
    s32 unk_00;
    Node *unk_04;
    void *unk_08;

    int eq2(const Node &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == *(Node **)&o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const Node &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const Node &o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x38];
    s32 unk_38;
    u8 pad_3C[0x4];
    u8 unk_40;
} D;

typedef struct {
    u8 pad_00[0x20];
    D *unk_20;
} C;

struct B {
    u8 pad_00[0x28];
    Node unk_28;
    Node *end() { return &unk_28; }
};

typedef struct {
    u8 pad_00[0x8];
    B *unk_08;
} A;

typedef struct {
    u8 pad_00[0x214];
    Node *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;
} G;

typedef struct {
    u8 pad_00[0x10F4];
    G *unk_10F4;
} Obj;

s32 func_0889E854(s32 arg0, Obj *arg1) {
    G *g;
    Node *n;
    A *a;
    B *b;
    struct { Node *unk_00; } it;
    D *d;

    g = arg1->unk_10F4;
    if (g->unk_230 < 2) {
        a = NULL;
    } else {
        n = g->unk_214;
        if (n != NULL) {
            n = n->unk_04;
        }
        a = (A *)n->unk_08;
    }
    b = a->unk_08;
    it.unk_00 = b->unk_28.unk_04;
    while (it.unk_00->ne(*b->end())) {
        d = (*(C **)&it.unk_00->unk_08)->unk_20;
        if (d->unk_40 != 0 && d->unk_38 != 0) {
            return 1;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return 0;
}

}
