#include "common.h"

extern "C" {

inline void *operator new(unsigned int, void *p) {
    return p;
}

typedef struct {
    s8 unk_00;
    u8 pad_01[3];
} C_089B8604;

typedef struct {
    s32 unk_00;
    C_089B8604 unk_04[1];
} T_089B8604;

typedef struct {
    u8 pad_00[0x19CE0];
    T_089B8604 unk_19CE0;
} P_089B8604;

typedef struct {
    u8 pad_00[0x1498];
    P_089B8604 *unk_1498;
} G_089B8604;

typedef struct {
    u8 pad_00[0x24];
    s32 unk_24;
} R_089B8604;

struct V_089B8604 {
    s32 *unk_00;
    s32 unk_04;
    s32 *begin() { return unk_00; }
    s32 *end() { return unk_00 + unk_04; }
    void push(const s32 &v) {
        new (&unk_00[unk_04]) s32(v);
        unk_04++;
    }
};

typedef struct {
    s32 *unk_00;
} W_089B8604;

typedef struct {
    u8 pad_00[0x404];
    V_089B8604 unk_404;
} B_089B8604;

typedef struct {
    u8 pad_00[0x1064];
    s32 unk_1064;
} A_089B8604;

extern G_089B8604 *D_08AD1F14[];
extern char *D_08A08ACC[];

inline G_089B8604 *getg() {
    G_089B8604 *g = D_08AD1F14[0];
    return g != NULL ? g : NULL;
}

s32 func_0887744C(G_089B8604 *, char *, s32);
u32 func_0885AB08(s32, s32);
R_089B8604 *func_0885AB7C(s32, s32, u32);
s32 func_08998D18(s32);
void func_08947BA8(s32, s32);

void func_089B8604(A_089B8604 *arg0, B_089B8604 *arg1) {
    s32 *p;
    s32 *q;
    s32 v;
    V_089B8604 *vp;
    s32 k;
    s32 h;
    T_089B8604 *t;
    u32 n;
    u32 i;
    R_089B8604 *e;
    s32 id;

    p = arg1->unk_404.unk_00;
    vp = &arg1->unk_404;
    if ((u32)p != (u32)(p + arg1->unk_404.unk_04)) {
        do {
            p++;
        } while (p != vp->unk_00 + arg1->unk_404.unk_04);
    }
    arg1->unk_404.unk_04 = 0;
    h = func_0887744C(getg(), D_08A08ACC[0], 1);
    t = &getg()->unk_1498->unk_19CE0;
    n = func_0885AB08(h, 0);
    for (i = 0; i < n; i++) {
        e = func_0885AB7C(h, 0, i);
        id = e->unk_24;
        func_08947BA8(func_08998D18(arg0->unk_1064), id);
        if (t->unk_04[id].unk_00 > 0) {
            v = e->unk_24;
            q = arg1->unk_404.unk_00 + arg1->unk_404.unk_04;
            if (q != NULL) {
                *q = v;
            }
            arg1->unk_404.unk_04++;
        }
    }
}

}
