#include "common.h"
typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    void *unk_08;
    struct N *unk_0C;
    u8 pad_10[0x10];
} N_08867CBC;
typedef struct {
    N_08867CBC *unk_00;
    N_08867CBC *unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
    u8 pad_24[4];
} T08867784;
typedef struct {
    u8 pad_00[0x130];
} E;
typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    E unk_20[0x800];
    N_08867CBC unk_98020[0x800];
    T08867784 unk_A8020;
    T08867784 unk_A8048;
} S;
void func_08867A94(s32 *, T08867784 *);
void func_08867A8C(s32 *, T08867784 *);
s32 func_0886785C(s32 *, s32 *);
void func_08867A64(s32 *, s32 *, s32);
void func_088678B0(s32 *, T08867784 *, s32);
void func_08867DD8(N_08867CBC *, N_08867CBC *);

s32 func_08868014(S *arg0)
{
    s32 it0, end0, r0, temp0;
    s32 it1, end1, r1, temp1;
    s32 i;
    S *p;
    S *q;
    N_08867CBC *e;
    N_08867CBC *n;

    arg0->unk_18 = 0x800;
    arg0->unk_14 = 0;
    func_08867A94(&it0, &arg0->unk_A8020);
    func_08867A8C(&end0, &arg0->unk_A8020);
    if (func_0886785C(&it0, &end0) != 0) {
        do {
            func_08867A64(&temp0, &it0, 0);
            func_088678B0(&r0, &arg0->unk_A8020, temp0);
        } while (func_0886785C(&it0, &end0) != 0);
    }
    arg0->unk_A8020.unk_20 = 0;
    e = (N_08867CBC *)&arg0->unk_A8020;
    arg0->unk_A8020.unk_04 = e;
    arg0->unk_A8020.unk_00 = e;

    func_08867A94(&it1, &arg0->unk_A8048);
    func_08867A8C(&end1, &arg0->unk_A8048);
    if (func_0886785C(&it1, &end1) != 0) {
        do {
            func_08867A64(&temp1, &it1, 0);
            func_088678B0(&r1, &arg0->unk_A8048, temp1);
        } while (func_0886785C(&it1, &end1) != 0);
    }
    arg0->unk_A8048.unk_20 = 0;
    e = (N_08867CBC *)&arg0->unk_A8048;
    arg0->unk_A8048.unk_04 = e;
    arg0->unk_A8048.unk_00 = e;

    i = 0;
    p = arg0;
    q = arg0;
    do {
        E *a;
        n = q->unk_98020;
        a = p->unk_20;
        if (n->unk_0C != NULL)
            func_08867DD8(n->unk_0C, n);
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = a;
        if ((N_08867CBC *)&arg0->unk_A8048 != n) {
            s32 r;
            if (arg0->unk_A8048.unk_00 != (N_08867CBC *)&arg0->unk_A8048) {
                n->unk_00 = arg0->unk_A8048.unk_00;
                arg0->unk_A8048.unk_00->unk_04 = n;
                arg0->unk_A8048.unk_00 = n;
                r = 1;
            } else {
                arg0->unk_A8048.unk_00 = n;
                arg0->unk_A8048.unk_04 = n;
                n->unk_00 = (N_08867CBC *)&arg0->unk_A8048;
                r = 1;
            }
            n->unk_04 = (N_08867CBC *)&arg0->unk_A8048;
            if (r) {
                n->unk_0C = (N_08867CBC *)&arg0->unk_A8048;
                ++arg0->unk_A8048.unk_20;
            }
        }
        ++i;
        p = (S *)((u8 *)p + 0x130);
        q = (S *)((u8 *)q + 0x20);
    } while (i < 0x800);
    return 1;
}
