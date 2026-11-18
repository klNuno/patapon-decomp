#include "common.h"

struct T0;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    void *unk_08;
    struct T0 *unk_0C;
    u8 pad_10[0x10];
} N;

typedef struct T0 {
    N *unk_00;
    N *unk_04;
    s32 unk_08;
    s32 unk_0C;
    u8 pad_10[0x10];
    s32 unk_20;
    void *unk_24;
} T0;

typedef struct {
    u8 pad_00[0x188];
} E;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    E unk_20[0x40];
    N unk_6220[0x40];
    T0 unk_6A20;
    T0 unk_6A48;
} S;

void func_08891C84(T0 *, N *);
void func_088921D0(s32 *, T0 *);
void func_088921C8(s32 *, T0 *);
s32 func_0889210C(s32 *, s32 *);
void func_08891FF4(s32 *, s32 *, s32);
void func_08892160(s32 *, T0 *, s32);

inline void clr(T0 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 cur;

    func_088921D0(&it, arg0);
    func_088921C8(&end, arg0);
    while (func_0889210C(&it, &end) != 0) {
        func_08891FF4(&cur, &it, 0);
        func_08892160(&ret, arg0, cur);
    }
    arg0->unk_20 = 0;
    arg0->unk_04 = (N *)arg0;
    arg0->unk_00 = (N *)arg0;
}

inline void ins(T0 *l, N *n) {
    s32 r;

    if ((N *)l != n) {
        if (l->unk_00 != (N *)l) {
            n->unk_00 = l->unk_00;
            l->unk_00->unk_04 = n;
            r = 1;
            l->unk_00 = n;
        } else {
            l->unk_00 = n;
            l->unk_04 = n;
            n->unk_00 = (N *)l;
            r = 1;
        }
        n->unk_04 = (N *)l;
        if (r) {
            n->unk_0C = l;
            l->unk_20++;
        }
    }
}

s32 func_08892A14(S *arg0) {
    s32 i;
    N *n;
    E *d;

    arg0->unk_18 = 0x40;
    arg0->unk_14 = 0;
    clr(&arg0->unk_6A20);
    clr(&arg0->unk_6A48);
    for (i = 0; i < 0x40; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_6220[i];
        if (n->unk_0C != NULL) {
            func_08891C84(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = d;
        ins(&arg0->unk_6A48, n);
    }
    return 1;
}
