#include "common.h"

extern "C" {

struct O {
    u8 pad_00[0x114];
    s32 unk_114;
};

struct Node {
    Node *unk_00;
    Node *unk_04;
    O **unk_08;
};

struct It {
    Node *unk_00;
    It(Node *n) : unk_00(n) {}
    O **operator*() const { return unk_00->unk_08; }
    It &operator++() {
        if (unk_00 != NULL) {
            unk_00 = unk_00->unk_04;
        }
        return *this;
    }
};

inline bool operator!=(const It &pa, const It &pb) {
    Node *a = pa.unk_00;
    Node *b = pb.unk_00;
    s32 r2 = 0;
    s32 r1 = 0;
    if (a->unk_08 == b->unk_08 && a->unk_04 == b->unk_04) {
        r1 = 1;
    }
    if (r1 != 0) {
        if (a->unk_00 == b->unk_00) {
            r2 = 1;
        }
    }
    return !(bool)r2;
}

struct L {
    Node unk_00;
    It begin() { return It(unk_00.unk_04); }
    It end() { return It(&unk_00); }
};

struct M {
    u8 pad_00[0x25C];
    L unk_25C;
};

struct W {
    u8 pad_00[0x3B0];
    M unk_3B0;
};

struct R {
    u8 pad_00[0x7D50];
    O unk_7D50;
};

struct G {
    u8 pad_00[0x36B10];
    s32 unk_36B10;
};

struct T {
    u8 pad_00[0x14];
    G *unk_14;
};

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
R *func_08899E18(s32, s32);
W *func_08894FBC(R *, s32, s32);
void func_088F5AB4(s32, s32);

void func_088E8478(T *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    s32 *c = func_0885356C(arg1, 2, 1, 4);

    if (arg0->unk_14 != NULL) {
        R *r = func_08899E18(arg0->unk_14->unk_36B10, *b);
        if (r != NULL) {
            O *q = &r->unk_7D50;
            W *w;
            if (q != NULL) {
                func_088F5AB4(q->unk_114, *c);
            }
            w = func_08894FBC(r, *a, 0);
            if (w != NULL) {
                M *m = &w->unk_3B0;
                for (It n = m->unk_25C.begin(); n != m->unk_25C.end(); ++n) {
                    func_088F5AB4((**n)->unk_114, *c);
                }
            }
        }
    }
    func_08852F00(arg1, 0);
}

}
