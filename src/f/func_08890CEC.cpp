#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    s32 *unk_08;

    int eq2(struct Node *o) {
        int r = 0;
        if (unk_08 == o->unk_08 && unk_04 == *(Node **)&o->unk_04) {
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

s32 func_08890CEC(S0 *arg0, s32 arg1) {
    struct { Node *unk_00; } it;
    s32 i;

    if (arg0->unk_690 == 0) {
        return 0;
    }
    it.unk_00 = arg0->unk_60C.unk_04;
    i = 0;
    for (; it.unk_00->ne(arg0->end());) {
        if (i == arg1) {
            return **(s32 **)&it.unk_00->unk_08;
        }
        i++;
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return 0;
}

}
