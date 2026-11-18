#include "common.h"

typedef struct {
    u8 pad_00[0xD];
    u8 unk_0D;
} S_088A6BE0;

typedef struct {
    u8 pad_00[0x970];
    u8 unk_970[0x430];
    s32 unk_DA0;
    u8 pad_DA4[0x14C0 - 0xDA4];
    S_088A6BE0 unk_14C0;
} O_088A6BE0;

typedef struct N_088A6BE0 {
    struct N_088A6BE0 *unk_00;
    struct N_088A6BE0 *unk_04;
    O_088A6BE0 **unk_08;
} N_088A6BE0;

typedef struct {
    u8 pad_00[0x91C];
    N_088A6BE0 unk_91C;
} L_088A6BE0;

typedef struct {
    u8 pad_00[0x3A0];
    L_088A6BE0 unk_3A0;
} B_088A6BE0;

typedef struct {
    u8 pad_00[0x80];
} E_088A6BE0;

typedef struct {
    u8 pad_00[0x3A0];
    B_088A6BE0 *unk_3A0;
    u8 pad_3A4[0x528 - 0x3A4];
    E_088A6BE0 *unk_528;
    u32 unk_52C;
} A_088A6BE0;

void func_088912C4(void *, s32);
void func_088A8600(E_088A6BE0 *, s32);
void func_088A87E8(void *, void *);

typedef struct {
    N_088A6BE0 *unk_00;
} It_088A6BE0;

typedef struct {
    s32 unk_00;
    s32 unk_04;
    s32 unk_08;
} K_088A6BE0;

inline s32 eq_088A6BE0(K_088A6BE0 *a, K_088A6BE0 *b) {
    return a->unk_08 == b->unk_08 && a->unk_04 == b->unk_04 && a->unk_00 == b->unk_00;
}

inline void set_088A6BE0(O_088A6BE0 *o, void *v) {
    void *q;
    o->unk_DA0 = (s32)v;
    q = o->unk_970;
    if (o->unk_DA0 != 0) {
        func_088A87E8((void *)o->unk_DA0, q);
    }
}

s32 func_088A6BE0(A_088A6BE0 *arg0) {
    N_088A6BE0 *it;
    L_088A6BE0 *l;
    E_088A6BE0 *p;
    E_088A6BE0 **dp;
    u32 *np;
    It_088A6BE0 e;

    l = &arg0->unk_3A0->unk_3A0;
    for (it = l->unk_91C.unk_04; e.unk_00 = &l->unk_91C, !eq_088A6BE0((K_088A6BE0 *)it, (K_088A6BE0 *)e.unk_00);) {
        S_088A6BE0 *x = &(*it->unk_08)->unk_14C0;
        if (x->unk_0D == 0) {
            func_088912C4(x, -1);
            set_088A6BE0(*it->unk_08, NULL);
        }
        if (it != NULL) {
            it = it->unk_04;
        }
    }
    p = arg0->unk_528;
    dp = &arg0->unk_528;
    if ((u32)p != (u32)(p + arg0->unk_52C)) {
        np = &arg0->unk_52C;
        do {
            func_088A8600(p, 0);
            p++;
        } while (p != *dp + *np);
    }
    return 1;
}
