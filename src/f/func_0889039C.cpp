#include "common.h"

extern "C" {

typedef struct T1 {
    s32 unk_00;
    s32 unk_04;
} T1;

typedef struct T0 {
    u8 pad_00[0x114];
    T1 *unk_114;
} T0;

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    T0 **unk_08;

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

s32 func_0889039C(S0 *arg0, s32 arg1) {
    struct { Node *unk_00; } it;
    s32 sum;

    if (arg0->unk_690 == 0) {
        return 0;
    }
    it.unk_00 = arg0->unk_60C.unk_04;
    sum = 0;
    for (; it.unk_00->ne(arg0->end());) {
        if (arg1 != 0) {
            sum += (**(T0 ***)&it.unk_00->unk_08)->unk_114->unk_00;
        } else {
            sum += (**(T0 ***)&it.unk_00->unk_08)->unk_114->unk_04;
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return sum;
}

}
