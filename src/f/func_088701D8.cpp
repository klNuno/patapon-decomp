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

typedef It I08870CFC;
void func_088702D0(I08870CFC *, I08870CFC *, s32);
void func_0886FF60(Node *, Node *);
f32 *func_088702B8(f32 *, f32 *);
s32 func_088702C8(s32 *);

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

void func_088701D8(Node *arg0) {
    struct { A unk_00; u8 pad_01[8]; } temp;
    Iter it;
    A byte;
    It it2;
    Iter r;
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
        func_088702D0((I08870CFC *)&r, &it2, 0);
        func_0886FF60(arg0, (Node *)func_088702C8((s32 *)&r));
        func_088702B8((f32 *)&temp, (f32 *)&it2);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = arg0;
    arg0->unk_00 = arg0;
}

}
