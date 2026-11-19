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

void func_08976AC4(s32 *, s32 *, s32);
typedef Node N_0888D820;
void func_0888D93C(N_0888D820 *, N_0888D820 *);
f32 *func_08976AAC(void *, void *);
Node *func_08976ABC(s32 *);

struct E {};

inline bool nen(Node *a, Node *b, const E &) {
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

void func_089769CC(Node *arg0) {
    struct { A unk_00; u8 pad_01[8]; } temp;
    Iter it;
    A byte;
    It it2;
    s32 r;
    It t;
    byte = temp.unk_00;
    it.unk_00 = arg0->unk_04;
    while (nen(it.unk_00, arg0, E())) {
        t.unk_00 = it.unk_00;
        t.unk_04 = byte;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
        it2 = t;
        func_08976AC4(&r, (s32 *)&it2, 0);
        func_0888D93C(arg0, func_08976ABC(&r));
        func_08976AAC(&temp.unk_00, &it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
}

}
