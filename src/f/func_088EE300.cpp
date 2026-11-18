#include "common.h"

extern "C" {

struct P {
    u8 pad_00[8];
    u8 unk_08;
};

struct O {
    u8 pad_00[0x114];
    P *unk_114;
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

struct T {
    u8 pad_00[0x14];
    W *unk_14;
};

s32 *func_0885356C(void *, s32, s32, s32);
void func_08852F00(void *, s32);
s32 func_0888FCFC(void *, s32);
s32 func_0889039C(void *, s32);
s32 func_088F5BA0(P *);

void func_088EE300(T *arg0, void *arg1) {
    s32 *a = func_0885356C(arg1, 0, 1, 4);
    s32 *b = func_0885356C(arg1, 1, 1, 4);
    s32 *c = func_0885356C(arg1, 2, 1, 4);
    s32 *d = func_0885356C(arg1, 3, 1, 4);
    s32 *e = func_0885356C(arg1, 4, 1, 4);
    M *m;

    m = &arg0->unk_14->unk_3B0;
    *a = func_0888FCFC(arg0->unk_14, *b != 0);
    *c = 0;
    *d = 0;
    for (It n = m->unk_25C.begin(); n != m->unk_25C.end(); ++n) {
        if (func_088F5BA0((**n)->unk_114)) {
            *c = 1;
        }
        if ((**n)->unk_114->unk_08) {
            *d = 1;
        }
    }
    *e = func_0889039C(arg0->unk_14, 0);
    func_08852F00(arg1, 0);
}

}
