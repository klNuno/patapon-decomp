#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;

typedef struct {
    struct N *unk_00;
    s32 unk_04;
} A;

typedef struct N {
    struct N *unk_00;
    struct N *unk_04;
    struct N *unk_08;
    S088CE0C0 *unk_0C;
    u8 pad_10[0x10];
    A *unk_20;
    s32 unk_24;
} N;

typedef struct {
    u8 pad_00[0xA38];
    S088CE0C0 unk_A38;
    u8 pad_A5C[0x4];
    S088CE0C0 unk_A60;
} T;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);

inline s32 func_0893BC58_link(S088CE0C0 *l, N *n) {
    s32 r;

    if ((N *)l->unk_00 != (N *)l) {
        n->unk_00 = (N *)l->unk_00;
        ((N *)l->unk_00)->unk_04 = n;
        l->unk_00 = (s32)n;
        r = 1;
    } else {
        l->unk_00 = (s32)n;
        l->unk_04 = (s32)n;
        n->unk_00 = (N *)l;
        r = 1;
    }
    n->unk_04 = (N *)l;
    return r;
}

void func_0893BC58(T *arg0, A *arg1) {
    s32 sp1C;
    s32 sp18;
    N *n;

    if (arg0->unk_A60.unk_20 == 0) {
        arg1->unk_04 = 0;
        return;
    }
    if (arg1->unk_04 == 0) {
        n = ((N *)arg0->unk_A60.unk_04)->unk_08;
        func_088804B4(&sp18, &arg0->unk_A60);
        func_088802D0(&sp1C, &arg0->unk_A60, sp18);
        if ((N *)&arg0->unk_A38 != n) {
            if (func_0893BC58_link(&arg0->unk_A38, n)) {
                n->unk_0C = &arg0->unk_A38;
                arg0->unk_A38.unk_20++;
            }
        }
        n->unk_20 = arg1;
        arg1->unk_04 = n->unk_24;
        n->unk_20->unk_00 = n;
    }
}
