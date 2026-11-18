#include "common.h"

typedef struct {
    u8 pad_00[0x10];
} E_08989FD0;

typedef struct {
    u8 pad_00[0x510];
    u8 unk_510[0x10];
    u8 unk_520[0x62C - 0x520];
    s32 unk_62C;
} G_08989FD0;

typedef struct {
    u8 *unk_00;
    u8 pad_04[8];
    s32 unk_0C;
    s32 unk_10;
} T_08989FD0;

s32 func_0898A0D0(G_08989FD0 *, s32);
s32 func_088E63DC(s32);
E_08989FD0 *func_088DD44C(void *);
E_08989FD0 *func_08906B60(void *);
void func_08853D70(void *, E_08989FD0 *);
void func_088E6134(s32, void *);
void func_08853B50(void *, s32);
s32 func_088A88C0(void);
void func_088E64D8(s32, s32);
void func_08852BCC(s32, s32);
void func_08852C5C(s32, s32, s32);
void func_08906AD0(void *, s32 *);

void func_08989FD0(T_08989FD0 *arg0) {
    s32 h;
    E_08989FD0 e;
    s32 b;
    s32 a;
    E_08989FD0 *p;
    G_08989FD0 *g;
    E_08989FD0 *end;

    a = arg0->unk_0C;
    b = arg0->unk_10;
    g = (G_08989FD0 *)&arg0->unk_00[0x28620];
    if (a == 0) {
        a = g->unk_62C;
    }
    h = func_0898A0D0(g, 0);
    func_088E63DC(h);
    p = func_088DD44C(g->unk_520);
    end = func_08906B60(g->unk_520);
    for (; p != end; p++) {
        func_08853D70(&e, p);
        func_088E6134(h, &e);
        func_08853B50(&e, -1);
    }
    func_088E64D8(h, func_088A88C0());
    func_08852BCC(h, a);
    func_08852C5C(h, b, 0);
    func_08906AD0(g->unk_510, &h);
}
