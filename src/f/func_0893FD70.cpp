#include "common.h"

extern "C" {

typedef struct Node {
    struct Node *unk_00;
    struct Node *unk_04;
    s32 unk_08;
    u8 pad_0C[0x14];
    s32 unk_20;
} Node;

typedef struct {
    u8 unk_00;
} A;

typedef struct {
    Node *unk_00;
} Iter;

typedef struct {
    Node *unk_00;
    A unk_04;
} It;

void func_0893FCC4(s32 *, It *, s32);
void func_0893F990(void *, s32);
void func_0893FE50(s32 *, It *);
s32 func_0893FE60(s32 *);

struct E {};

static inline bool func_00(Node *a, Node *b, const E &) {
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

static inline Iter func_04(Iter *p) {
    Iter t;
    t.unk_00 = p->unk_00;
    if (p->unk_00 != NULL) {
        p->unk_00 = p->unk_00->unk_04;
    }
    return t;
}

void func_0893FD70(Node *arg0) {
    Iter n;
    struct { u8 pad_00[8]; A unk_08; u8 pad_09[4]; } x;
    It it;
    s32 tmp;
    It e;

    A a = x.unk_08;
    n.unk_00 = arg0->unk_04;
    e.unk_00 = arg0;
    while (func_00(n.unk_00, e.unk_00, E())) {
        it.unk_00 = func_04(&n).unk_00;
        it.unk_04 = a;
        func_0893FCC4(&tmp, &it, 0);
        func_0893F990(arg0, func_0893FE60(&tmp));
        func_0893FE50((s32 *)&x.unk_08, &it);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
}

}
