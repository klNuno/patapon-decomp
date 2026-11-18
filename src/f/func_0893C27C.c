#include "common.h"

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;

typedef struct N_0893C27C {
    struct N_0893C27C *unk_00;
    struct N_0893C27C *unk_04;
    struct N_0893C27C *unk_08;
    S088CE0C0 *unk_0C;
} N_0893C27C;

typedef struct {
    u8 pad_00[0xA38];
    S088CE0C0 unk_A38;
    u8 pad_A5C[0x40];
    s32 unk_A9C;
    s32 unk_AA0;
} T_0893C27C;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);

inline s32 func_0893C27C_link(S088CE0C0 *l, N_0893C27C *n) {
    s32 r;

    if ((N_0893C27C *)l->unk_00 != (N_0893C27C *)l) {
        n->unk_00 = (N_0893C27C *)l->unk_00;
        ((N_0893C27C *)l->unk_00)->unk_04 = n;
        l->unk_00 = (s32)n;
        r = 1;
    } else {
        l->unk_00 = (s32)n;
        l->unk_04 = (s32)n;
        n->unk_00 = (N_0893C27C *)l;
        r = 1;
    }
    n->unk_04 = (N_0893C27C *)l;
    return r;
}

void func_0893C27C(T_0893C27C *arg0) {
    s32 sp1C;
    s32 sp18;
    struct { N_0893C27C *unk_00; } it;

    if (arg0->unk_A38.unk_20 != 0) {
        it.unk_00 = ((N_0893C27C *)arg0->unk_A38.unk_04)->unk_08;
        func_088804B4(&sp18, &arg0->unk_A38);
        func_088802D0(&sp1C, &arg0->unk_A38, sp18);
        if ((N_0893C27C *)&arg0->unk_A38 != it.unk_00) {
            if (func_0893C27C_link(&arg0->unk_A38, it.unk_00)) {
                it.unk_00->unk_0C = &arg0->unk_A38;
                arg0->unk_A38.unk_20++;
            }
        }
        arg0->unk_A9C = 0;
        arg0->unk_AA0 = 0x40000000;
    }
}
