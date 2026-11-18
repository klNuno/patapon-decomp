#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x1380];
    u8 unk_1380[1];
} T;

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    T **unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == o->unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(struct Node *o) {
        int r = 0;
        if (eq2(o) && unk_00 == o->unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(struct Node *o) {
        return !(bool)eq(o);
    }
} Node;

typedef struct S0 {
    u8 pad_00[0x60C];
    Node unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;

    Node *end() { return &unk_60C; }
} S0;

void func_0893C7A4(u8 *, s32);

void func_08890760(S0 *arg0) {
    struct { Node *unk_00; } it;

    if (arg0->unk_690 != 0) {
        for (it.unk_00 = arg0->unk_60C.unk_04; it.unk_00->ne(arg0->end());) {
            func_0893C7A4((**(T ***)&it.unk_00->unk_08)->unk_1380, 0);
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
    }
}

}
