#include "common.h"

extern "C" {

struct Node_08965CE0 {
    s32 unk_00;
    Node_08965CE0 *unk_04;
    void *unk_08;

    int eq2(const Node_08965CE0 &o) const {
        int r = 0;
        if (unk_08 == o.unk_08 && unk_04 == *(Node_08965CE0 **)&o.unk_04) {
            r = 1;
        }
        return r;
    }
    int eq(const Node_08965CE0 &o) const {
        int r = 0;
        if (eq2(o) && unk_00 == o.unk_00) {
            r = 1;
        }
        return r;
    }
    bool ne(const Node_08965CE0 &o) const { return !(bool)eq(o); }
};

typedef struct {
    u8 pad_00[0x20];
    void *unk_20;
} C_08965CE0;

struct B_08965CE0 {
    u8 pad_00[0x28];
    Node_08965CE0 unk_28;
    Node_08965CE0 *end() { return &unk_28; }
};

typedef struct {
    u8 pad_00[0x8];
    B_08965CE0 *unk_08;
} A_08965CE0;

struct V_08965CE0 {
    virtual void v0();
    virtual s32 v1();
};

struct G_08965CE0 {
    u8 pad_00[0x160];
    V_08965CE0 unk_160;
    u8 pad_164[0xB0];
    Node_08965CE0 *unk_214;
    u8 pad_218[0x18];
    u32 unk_230;

    void *get(s32 i) {
        if (i >= unk_230) {
            return NULL;
        }
        s32 j;
        struct { Node_08965CE0 *unk_00; } q;
        q.unk_00 = unk_214;
        for (j = 0; j < i; j++) {
            if (q.unk_00 != NULL) {
                q.unk_00 = q.unk_00->unk_04;
            }
        }
        return q.unk_00->unk_08;
    }
};

void func_088830C8(void *, void *, void *);

s32 func_08965CE0(G_08965CE0 *arg0, s32 arg1, void *arg2, void *arg3) {
    s32 i;
    s32 n;
    A_08965CE0 *a;
    B_08965CE0 *b;
    struct { Node_08965CE0 *unk_00; } it;

    i = 0;
    n = arg0->unk_160.v1();
    if (arg1 >= 0) {
        i = arg1;
        n = arg1 + 1;
    }
    for (; i < n; i++) {
        a = (A_08965CE0 *)arg0->get(i);
        b = a->unk_08;
        if (b == NULL) {
            return 0;
        }
        it.unk_00 = b->unk_28.unk_04;
        while (it.unk_00->ne(*b->end())) {
            func_088830C8((*(C_08965CE0 **)&it.unk_00->unk_08)->unk_20, arg2, arg3);
            if (it.unk_00 != NULL) {
                it.unk_00 = it.unk_00->unk_04;
            }
        }
    }
    return 1;
}

}
