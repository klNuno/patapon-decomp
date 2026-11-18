#include "common.h"

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    void *unk_08;
    struct L *unk_0C;
    u8 pad_10[0x10];
} N;

typedef struct L {
    N *unk_00;
    N *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} L;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    u8 unk_20[8][0x10];
    N unk_A0[8];
    L unk_1A0;
    u8 pad_1C4[4];
    L unk_1C8;
} A;

s32 func_089273B0(s32 *, s32 *);
void func_08927404(s32 *, L *, s32);
void func_08927298(s32 *, s32 *, s32);
void func_0892746C(s32 *, L *);
void func_08927474(s32 *, L *);
void func_08926F28(L *, N *);

s32 func_08927480(A *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 v;
    s32 it2;
    s32 end2;
    s32 r2;
    s32 v2;
    s32 i;
    u8 *p;
    N *n;
    L *o;
    s32 f;

    arg0->unk_18 = 8;
    arg0->unk_14 = 0;
    func_08927474(&it, &arg0->unk_1A0);
    func_0892746C(&end, &arg0->unk_1A0);
    while (func_089273B0(&it, &end) != 0) {
        func_08927298(&v, &it, 0);
        func_08927404(&r, &arg0->unk_1A0, v);
    }
    arg0->unk_1A0.unk_20 = 0;
    arg0->unk_1A0.unk_04 = (N *)&arg0->unk_1A0;
    arg0->unk_1A0.unk_00 = (N *)&arg0->unk_1A0;
    func_08927474(&it2, &arg0->unk_1C8);
    func_0892746C(&end2, &arg0->unk_1C8);
    while (func_089273B0(&it2, &end2) != 0) {
        func_08927298(&v2, &it2, 0);
        func_08927404(&r2, &arg0->unk_1C8, v2);
    }
    arg0->unk_1C8.unk_20 = 0;
    arg0->unk_1C8.unk_04 = (N *)&arg0->unk_1C8;
    arg0->unk_1C8.unk_00 = (N *)&arg0->unk_1C8;
    for (i = 0; i < 8; i++) {
        p = arg0->unk_20[i];
        n = &arg0->unk_A0[i];
        o = n->unk_0C;
        if (o != NULL) {
            func_08926F28(o, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = p;
        if ((void *)&arg0->unk_1C8 != (void *)n) {
            if (arg0->unk_1C8.unk_00 != (N *)&arg0->unk_1C8) {
                n->unk_00 = arg0->unk_1C8.unk_00;
                arg0->unk_1C8.unk_00->unk_04 = n;
                arg0->unk_1C8.unk_00 = n;
                f = 1;
            } else {
                arg0->unk_1C8.unk_00 = n;
                arg0->unk_1C8.unk_04 = n;
                n->unk_00 = (N *)&arg0->unk_1C8;
                f = 1;
            }
            n->unk_04 = (N *)&arg0->unk_1C8;
            if (f) {
                n->unk_0C = &arg0->unk_1C8;
                arg0->unk_1C8.unk_20++;
            }
        }
    }
    return 1;
}
