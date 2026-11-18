#include "common.h"

extern "C" {

typedef struct {
    u8 pad_00[0x10];
} E_08906928;

typedef struct {
    u8 pad_00[0x26710];
    u8 unk_26710[0x10];
    u8 unk_26720[0x2682C - 0x26720];
    s32 unk_2682C;
} G_08906928;

typedef struct {
    u8 pad_00[0x1DE0];
    G_08906928 unk_1DE0;
} W_08906928;

typedef struct {
    u8 pad_00[0x10];
    W_08906928 *unk_10;
} S_08906928;

class H_08906928 {
public:
    virtual void v08();
    virtual void v0C();
    virtual void v10(s32);
};

s32 *func_0885356C(void *, s32, s32, s32);
void func_08853894(void *, s8 *);
s32 func_08852BA8(void *);
s32 func_088DB674(W_08906928 *, s8 *);
H_08906928 *func_08906B74(G_08906928 *, s32);
s32 func_088E63DC(H_08906928 *);
E_08906928 *func_088DD44C(void *);
E_08906928 *func_08906B60(void *);
void func_08853D70(void *, E_08906928 *);
void func_088E6134(H_08906928 *, void *);
void func_08853B50(void *, s32);
s32 func_088A88C0(void);
void func_088E64D8(H_08906928 *, s32);
void func_08852BCC(H_08906928 *, s32);
void func_08852C5C(H_08906928 *, s32, s32);
void func_08906AD0(void *, H_08906928 **);
void func_08852F00(void *, s32);

void func_08906928(S_08906928 *arg0, void *arg1) {
    s8 buf[0x100];
    H_08906928 *h;
    E_08906928 e;
    s32 *pb;
    s8 *q;
    s32 n;
    s32 a;
    G_08906928 *g;
    s32 b;
    s32 c;
    E_08906928 *p;
    E_08906928 *end;

    pb = func_0885356C(arg1, 1, 0, 4);
    q = buf;
    n = 0x100;
    if (q != NULL) {
        do { *q++ = 0; } while (--n);
    }
    func_08853894(arg1, buf);
    a = func_08852BA8(arg1);
    if (buf[0] != 0) {
        a = func_088DB674(arg0->unk_10, buf);
    }
    g = &arg0->unk_10->unk_1DE0;
    b = *pb;
    c = a;
    if (a == 0) {
        c = g->unk_2682C;
    }
    h = func_08906B74(g, 0);
    func_088E63DC(h);
    p = func_088DD44C(g->unk_26720);
    end = func_08906B60(g->unk_26720);
    for (; p != end; p++) {
        func_08853D70(&e, p);
        func_088E6134(h, &e);
        func_08853B50(&e, -1);
    }
    func_088E64D8(h, func_088A88C0());
    func_08852BCC(h, c);
    func_08852C5C(h, b, 0);
    func_08906AD0(g->unk_26710, &h);
    h->v10(0);
    func_08852F00(arg1, 0);
}

}
