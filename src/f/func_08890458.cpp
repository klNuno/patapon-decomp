#include "common.h"

extern "C" {

typedef struct Node {
    s32 unk_00;
    struct Node *unk_04;
    void *unk_08;

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

typedef struct It {
    Node *unk_00;
} It;

typedef struct O {
    u8 pad_00[0xCF0];
    u8 unk_CF0[1];
} O;

typedef struct S0 {
    u8 pad_00[0x60C];
    Node unk_60C;
    u8 pad_618[0x78];
    u8 unk_690;
    u8 pad_691[0xE43];
    s32 unk_14D4;

    Node *end() { return &unk_60C; }
    It begin() { It r; r.unk_00 = unk_60C.unk_04; return r; }
} S0;

void func_0889CF54(void *, s32);
void func_0889CFB4(void *, s32, s32);

s32 func_08890458(S0 *arg0, s32 arg1, s32 arg2) {
    It it;

    if (arg0->unk_690 == 0) {
        return 0;
    }
    it = arg0->begin();
    while (it.unk_00->ne(arg0->end())) {
        if (arg1 == 0) {
            func_0889CF54((**(O ***)&it.unk_00->unk_08)->unk_CF0, arg0->unk_14D4);
        } else {
            func_0889CFB4((**(O ***)&it.unk_00->unk_08)->unk_CF0, arg1, arg2);
        }
        if (it.unk_00 != NULL) {
            it.unk_00 = it.unk_00->unk_04;
        }
    }
    return 1;
}

}
