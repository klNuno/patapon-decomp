#include "common.h"

extern "C" {

typedef struct T08926F28_N {
    struct T08926F28_N *unk_00;
    struct T08926F28_N *unk_04;
    u8 pad_08[0x4];
    struct T08926F28_N *unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
} T08926F28_N;

s32 func_08927054(T08926F28_N *);

static inline void rs2(T08926F28_N *n) {
    T08926F28_N *o = n->unk_0C;
    if (o != NULL && o != n) {
        if (func_08927054(n)) {
            o->unk_20--;
        }
    }
    n->unk_0C = NULL;
    n->unk_04 = NULL;
    n->unk_00 = NULL;
}

void func_08926F28(T08926F28_N *arg0, T08926F28_N *arg1) {
    s32 f;
    if (arg0 == arg1) {
        return;
    }
    f = 0;
    if (arg1->unk_00 != NULL) {
        f = 1;
        arg1->unk_00->unk_04 = arg1->unk_04;
    }
    if (arg1->unk_04 != NULL) {
        f = 1;
        arg1->unk_04->unk_00 = arg1->unk_00;
    }
    arg1->unk_0C = NULL;
    {
        T08926F28_N *o = arg1->unk_0C;
        if (o != NULL && o != arg1) {
            s32 f2 = 0;
            if (arg1->unk_00 != NULL) {
                f2 = 1;
                arg1->unk_00->unk_04 = arg1->unk_04;
            }
            if (arg1->unk_04 != NULL) {
                f2 = 1;
                arg1->unk_04->unk_00 = arg1->unk_00;
            }
            arg1->unk_0C = NULL;
            rs2(arg1);
            if (f2) {
                o->unk_20--;
            }
        }
        arg1->unk_0C = NULL;
        arg1->unk_04 = NULL;
        arg1->unk_00 = NULL;
    }
    if (f) {
        arg0->unk_20--;
    }
}

}
