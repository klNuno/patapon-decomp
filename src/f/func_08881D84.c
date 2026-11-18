#include "common.h"

typedef struct N_08881D84 {
    struct N_08881D84 *unk_00;
    struct N_08881D84 *unk_04;
    void *unk_08;
    struct L_08881D84 *unk_0C;
    u8 pad_10[0x10];
} N_08881D84;

typedef struct L_08881D84 {
    struct L_08881D84 *unk_00;
    struct L_08881D84 *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    void *unk_24;
} L_08881D84;

typedef struct {
    u8 pad_00[0x24];
} D_08881D84;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[4];
    D_08881D84 unk_20[0x100];
    N_08881D84 unk_2420[0x100];
    L_08881D84 unk_4420;
    L_08881D84 unk_4448;
} T_08881D84;

void func_08881800(L_08881D84 *, N_08881D84 *);
void func_08881D4C(s32 *, L_08881D84 *);
void func_08881D44(s32 *, L_08881D84 *);
s32 func_08881C88(s32 *, s32 *);
void func_08881B70(s32 *, s32 *, s32);
void func_08881CDC(s32 *, L_08881D84 *, s32);

s32 func_08881D84(T_08881D84 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 old;
    s32 it2;
    s32 end2;
    s32 ret2;
    s32 old2;
    s32 i;
    N_08881D84 *n;
    D_08881D84 *d;
    s32 r;

    arg0->unk_18 = 0x100;
    arg0->unk_14 = 0;
    func_08881D4C(&it, &arg0->unk_4420);
    func_08881D44(&end, &arg0->unk_4420);
    while (func_08881C88(&it, &end)) {
        func_08881B70(&old, &it, 0);
        func_08881CDC(&ret, &arg0->unk_4420, old);
    }
    arg0->unk_4420.unk_20 = 0;
    arg0->unk_4420.unk_04 = &arg0->unk_4420;
    arg0->unk_4420.unk_00 = &arg0->unk_4420;
    func_08881D4C(&it2, &arg0->unk_4448);
    func_08881D44(&end2, &arg0->unk_4448);
    while (func_08881C88(&it2, &end2)) {
        func_08881B70(&old2, &it2, 0);
        func_08881CDC(&ret2, &arg0->unk_4448, old2);
    }
    arg0->unk_4448.unk_20 = 0;
    arg0->unk_4448.unk_04 = &arg0->unk_4448;
    arg0->unk_4448.unk_00 = &arg0->unk_4448;
    for (i = 0; i < 0x100; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_2420[i];
        if (n->unk_0C != NULL) {
            func_08881800(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = d;
        if ((void *)&arg0->unk_4448 != (void *)n) {
            if (arg0->unk_4448.unk_00 != &arg0->unk_4448) {
                n->unk_00 = (N_08881D84 *)arg0->unk_4448.unk_00;
                ((N_08881D84 *)arg0->unk_4448.unk_00)->unk_04 = n;
                arg0->unk_4448.unk_00 = (L_08881D84 *)n;
                r = 1;
            } else {
                arg0->unk_4448.unk_00 = (L_08881D84 *)n;
                arg0->unk_4448.unk_04 = (L_08881D84 *)n;
                n->unk_00 = (N_08881D84 *)&arg0->unk_4448;
                r = 1;
            }
            n->unk_04 = (N_08881D84 *)&arg0->unk_4448;
            if (r) {
                n->unk_0C = &arg0->unk_4448;
                arg0->unk_4448.unk_20++;
            }
        }
    }
    return 1;
}
