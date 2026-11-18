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
    s32 unk_1C[0x88];
    N unk_23C[0x88];
    L unk_133C;
    u8 pad_1360[4];
    L unk_1364;
} A;

s32 func_0885BB5C(s32 *, s32 *);
void func_0885BBB0(s32 *, L *, s32);
void func_0885BD64(s32 *, s32 *, s32);
void func_0885BD8C(s32 *, L *);
void func_0885BD94(s32 *, L *);
void func_0885BF64(L *, N *);

s32 func_0885C1A0(A *arg0) {
    s32 it;
    s32 end;
    s32 r;
    s32 v;
    s32 it2;
    s32 end2;
    s32 r2;
    s32 v2;
    s32 i;
    s32 *p;
    N *n;
    L *o;
    s32 f;

    arg0->unk_18 = 0x88;
    arg0->unk_14 = 0;
    func_0885BD94(&it, &arg0->unk_133C);
    func_0885BD8C(&end, &arg0->unk_133C);
    while (func_0885BB5C(&it, &end) != 0) {
        func_0885BD64(&v, &it, 0);
        func_0885BBB0(&r, &arg0->unk_133C, v);
    }
    arg0->unk_133C.unk_20 = 0;
    arg0->unk_133C.unk_04 = (N *)&arg0->unk_133C;
    arg0->unk_133C.unk_00 = (N *)&arg0->unk_133C;
    func_0885BD94(&it2, &arg0->unk_1364);
    func_0885BD8C(&end2, &arg0->unk_1364);
    while (func_0885BB5C(&it2, &end2) != 0) {
        func_0885BD64(&v2, &it2, 0);
        func_0885BBB0(&r2, &arg0->unk_1364, v2);
    }
    arg0->unk_1364.unk_20 = 0;
    arg0->unk_1364.unk_04 = (N *)&arg0->unk_1364;
    arg0->unk_1364.unk_00 = (N *)&arg0->unk_1364;
    for (i = 0; i < 0x88; i++) {
        p = &arg0->unk_1C[i];
        n = &arg0->unk_23C[i];
        o = n->unk_0C;
        if (o != NULL) {
            func_0885BF64(o, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = p;
        if ((void *)&arg0->unk_1364 != (void *)n) {
            if (arg0->unk_1364.unk_00 != (N *)&arg0->unk_1364) {
                n->unk_00 = arg0->unk_1364.unk_00;
                arg0->unk_1364.unk_00->unk_04 = n;
                arg0->unk_1364.unk_00 = n;
                f = 1;
            } else {
                arg0->unk_1364.unk_00 = n;
                arg0->unk_1364.unk_04 = n;
                n->unk_00 = (N *)&arg0->unk_1364;
                f = 1;
            }
            n->unk_04 = (N *)&arg0->unk_1364;
            if (f) {
                n->unk_0C = &arg0->unk_1364;
                arg0->unk_1364.unk_20++;
            }
        }
    }
    return 1;
}
