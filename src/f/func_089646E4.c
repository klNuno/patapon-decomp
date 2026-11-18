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
    u8 pad_00[0x10];
} E;

typedef struct {
    u8 pad_00[0x14];
    s32 unk_14;
    s32 unk_18;
    u8 pad_1C[0x4];
    E unk_20[3];
    N unk_50[3];
    T0 unk_B0;
    T0 unk_D8;
} S;

void func_08963D38(T0 *, N *);
void func_08964284(s32 *, T0 *);
void func_0896427C(s32 *, T0 *);
s32 func_089641C0(s32 *, s32 *);
void func_089640A8(s32 *, s32 *, s32);
void func_08964214(s32 *, T0 *, s32);

inline void clr(T0 *arg0) {
    s32 it;
    s32 end;
    s32 ret;
    s32 cur;

    func_08964284(&it, arg0);
    func_0896427C(&end, arg0);
    while (func_089641C0(&it, &end) != 0) {
        func_089640A8(&cur, &it, 0);
        func_08964214(&ret, arg0, cur);
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

s32 func_089646E4(S *arg0) {
    s32 i;
    N *n;
    E *d;

    arg0->unk_18 = 3;
    arg0->unk_14 = 0;
    clr(&arg0->unk_B0);
    clr(&arg0->unk_D8);
    for (i = 0; i < 3; i++) {
        d = &arg0->unk_20[i];
        n = &arg0->unk_50[i];
        if (n->unk_0C != NULL) {
            func_08963D38(n->unk_0C, n);
        }
        n->unk_0C = NULL;
        n->unk_04 = NULL;
        n->unk_00 = NULL;
        n->unk_08 = d;
        ins(&arg0->unk_D8, n);
    }
    return 1;
}
