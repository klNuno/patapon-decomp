#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    u8 **unk_08;

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

    Node *end() { return &unk_60C; }
} S0;

void func_0889E7A8(u8 *, u8 *);

void func_0888FC44(S0 *arg0, s32 arg1) {
    struct { Node *unk_00; } it;
    u8 *temp;
    u8 *temp2;

    for (it.unk_00 = arg0->unk_60C.unk_04; it.unk_00->ne(arg0->end());) {
        temp = **(u8 ***)&it.unk_00->unk_08;
        temp2 = NULL;
        if (arg1 != 0) {
            temp2 = temp + 0xD80;
        }
        func_0889E7A8(temp + 0x12D0, temp2);
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
}

}
