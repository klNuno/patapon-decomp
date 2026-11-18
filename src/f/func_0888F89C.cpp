#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x114];
    s32 unk_114;
    u8 pad_118[0x296];
    u8 unk_3AE;
} E_0888F89C;

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    E_0888F89C **unk_08;

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

s32 func_088F5BA0(s32);

E_0888F89C *func_0888F89C(S0 *arg0, s32 arg1) {
    struct { Node *unk_00; } it;
    E_0888F89C *ret;
    E_0888F89C *e;

    if (arg0->unk_690 == 0) {
        return NULL;
    }
    for (it.unk_00 = arg0->unk_60C.unk_04, ret = NULL; it.unk_00->ne(arg0->end());) {
        e = **(E_0888F89C ***)&it.unk_00->unk_08;
        if (e->unk_3AE != 0) {
            if (arg1 == 0 || func_088F5BA0(e->unk_114) == 0) {
                ret = *it.unk_00->unk_08;
            }
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return ret;
}

}
