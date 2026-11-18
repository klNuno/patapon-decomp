#include "common.h"

extern "C" {

typedef struct T089CA6FC_N {
    struct T089CA6FC_N *unk_00;
    struct T089CA6FC_N *unk_04;
    u8 pad_08[0x4];
    struct T089CA6FC_N *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} T089CA6FC_N;

void func_089CA484(T089CA6FC_N *, T089CA6FC_N *);

static inline void rs2(T089CA6FC_N *n) {
    T089CA6FC_N *o = n->unk_0C;
    if (o != NULL) {
        func_089CA484(o, n);
    }
    n->unk_0C = NULL;
    n->unk_04 = NULL;
    n->unk_00 = NULL;
}

static inline void rm2(T089CA6FC_N *l, T089CA6FC_N *n) {
    s32 f;
    if (l == n) {
        return;
    }
    f = 0;
    if (n->unk_00 != NULL) {
        f = 1;
        n->unk_00->unk_04 = n->unk_04;
    }
    if (n->unk_04 != NULL) {
        f = 1;
        n->unk_04->unk_00 = n->unk_00;
    }
    n->unk_0C = NULL;
    rs2(n);
    if (f) {
        l->unk_20--;
    }
}

void func_089CA6FC(T089CA6FC_N *arg0) {
    T089CA6FC_N *o = arg0->unk_0C;
    if (o != NULL && o != arg0) {
        s32 f = 0;
        if (arg0->unk_00 != NULL) {
            f = 1;
            arg0->unk_00->unk_04 = arg0->unk_04;
        }
        if (arg0->unk_04 != NULL) {
            f = 1;
            arg0->unk_04->unk_00 = arg0->unk_00;
        }
        arg0->unk_0C = NULL;
        {
            T089CA6FC_N *o2 = arg0->unk_0C;
            if (o2 != NULL) {
                rm2(o2, arg0);
            }
            arg0->unk_0C = NULL;
            arg0->unk_04 = NULL;
            arg0->unk_00 = NULL;
        }
        if (f) {
            o->unk_20--;
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}

}
