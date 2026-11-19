#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct {
    s32 unk_00;
    s32 unk_04;
    u8 pad_08[0x18];
    s32 unk_20;
} S088CE0C0;

struct V_08925F04 {
    s32 *unk_00;
    u32 unk_04;
    void push_back(const s32 &x) {
        new (unk_00 + unk_04) s32(x);
        unk_04++;
    }
};

typedef struct N_08925F04 {
    struct N_08925F04 *unk_00;
    struct N_08925F04 *unk_04;
    struct N_08925F04 *unk_08;
    S088CE0C0 *unk_0C;
    u8 pad_10[0x34];
    V_08925F04 unk_44;
} N_08925F04;

typedef struct {
    u8 pad_00[0x26C];
    S088CE0C0 unk_26C;
    u8 pad_290[0x4];
    S088CE0C0 unk_294;
} T_08925F04;

void func_088802D0(s32 *, S088CE0C0 *, s32);
void func_088804B4(s32 *, S088CE0C0 *);
s32 sceUtilityGetSystemParamInt(s32, s32 *);
extern s32 D_089F88F0[];
extern s32 D_08A7BA28[];

inline s32 link_08925F04(S088CE0C0 *l, N_08925F04 *n) {
    s32 r;

    if ((N_08925F04 *)l->unk_00 != (N_08925F04 *)l) {
        n->unk_00 = (N_08925F04 *)l->unk_00;
        ((N_08925F04 *)l->unk_00)->unk_04 = n;
        l->unk_00 = (s32)n;
        r = 1;
    } else {
        l->unk_00 = (s32)n;
        l->unk_04 = (s32)n;
        n->unk_00 = (N_08925F04 *)l;
        r = 1;
    }
    n->unk_04 = (N_08925F04 *)l;
    return r;
}

inline s32 conv_08925F04(s32 v) {
    if (D_089F88F0[0] != 0) {
        D_089F88F0[0] = sceUtilityGetSystemParamInt(9, D_08A7BA28);
    }
    if (D_08A7BA28[0] == 0) {
        if (v == 3) {
            v = 4;
        } else if (v == 4) {
            v = 3;
        }
    }
    return v;
}

void func_08925F04(T_08925F04 *arg0, s32 *arg1, u32 arg2) {
    u32 i;
    s32 *p;
    V_08925F04 *b;
    s32 sp2C;
    s32 sp28;
    struct { N_08925F04 *unk_00; } n;

    n.unk_00 = ((N_08925F04 *)arg0->unk_26C.unk_04)->unk_08;
    func_088804B4(&sp28, &arg0->unk_26C);
    func_088802D0(&sp2C, &arg0->unk_26C, sp28);
    if ((N_08925F04 *)&arg0->unk_294 != n.unk_00) {
        if (link_08925F04(&arg0->unk_294, n.unk_00)) {
            n.unk_00->unk_0C = &arg0->unk_294;
            arg0->unk_294.unk_20++;
        }
    }
    p = n.unk_00->unk_44.unk_00;
    b = &n.unk_00->unk_44;
    if ((u32)p != (u32)(p + n.unk_00->unk_44.unk_04)) {
        do {
            p++;
        } while (p != b->unk_00 + n.unk_00->unk_44.unk_04);
    }
    n.unk_00->unk_44.unk_04 = 0;
    for (i = 0; i < arg2; i++) {
        s32 v;
        v = conv_08925F04(*arg1);
        n.unk_00->unk_44.push_back(v);
        arg1++;
    }
}

}
