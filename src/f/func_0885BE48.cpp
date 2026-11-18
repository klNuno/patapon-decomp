#include "common.h"

extern "C" {

typedef struct N_0885BE48 {
    struct N_0885BE48 *unk_00;
    struct N_0885BE48 *unk_04;
    u8 pad_08[4];
    struct L_0885BE48 *unk_0C;
} N_0885BE48;

typedef struct L_0885BE48 {
    u8 pad_00[0x20];
    s32 unk_20;
} L_0885BE48;

void func_0885BF64(L_0885BE48 *, N_0885BE48 *);

inline void unlink3_0885BE48(N_0885BE48 *n) {
    L_0885BE48 *o = n->unk_0C;

    if (o != NULL) {
        func_0885BF64(o, n);
    }
    n->unk_0C = NULL;
    n->unk_04 = NULL;
    n->unk_00 = NULL;
}

inline void unlink2_0885BE48(N_0885BE48 *n) {
    L_0885BE48 *o = n->unk_0C;
    s32 r;

    if (o != NULL && (void *)o != (void *)n) {
        r = 0;
        if (n->unk_00 != NULL) {
            n->unk_00->unk_04 = n->unk_04;
            r = 1;
        }
        if (n->unk_04 != NULL) {
            n->unk_04->unk_00 = n->unk_00;
            r = 1;
        }
        n->unk_0C = NULL;
        unlink3_0885BE48(n);
        if (r) {
            o->unk_20--;
        }
    }
    n->unk_0C = NULL;
    n->unk_04 = NULL;
    n->unk_00 = NULL;
}

void func_0885BE48(N_0885BE48 *arg0) {
    L_0885BE48 *o = arg0->unk_0C;
    s32 r;

    if (o != NULL && (void *)o != (void *)arg0) {
        r = 0;
        if (arg0->unk_00 != NULL) {
            arg0->unk_00->unk_04 = arg0->unk_04;
            r = 1;
        }
        if (arg0->unk_04 != NULL) {
            arg0->unk_04->unk_00 = arg0->unk_00;
            r = 1;
        }
        arg0->unk_0C = NULL;
        unlink2_0885BE48(arg0);
        if (r) {
            o->unk_20--;
        }
    }
    arg0->unk_0C = NULL;
    arg0->unk_04 = NULL;
    arg0->unk_00 = NULL;
}


}
